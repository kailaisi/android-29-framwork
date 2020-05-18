/*
 * Copyright 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package android.app.servertransaction;

import static android.app.servertransaction.ActivityLifecycleItem.ON_CREATE;
import static android.app.servertransaction.ActivityLifecycleItem.ON_DESTROY;
import static android.app.servertransaction.ActivityLifecycleItem.ON_PAUSE;
import static android.app.servertransaction.ActivityLifecycleItem.ON_RESTART;
import static android.app.servertransaction.ActivityLifecycleItem.ON_RESUME;
import static android.app.servertransaction.ActivityLifecycleItem.ON_START;
import static android.app.servertransaction.ActivityLifecycleItem.ON_STOP;
import static android.app.servertransaction.ActivityLifecycleItem.UNDEFINED;
import static android.app.servertransaction.TransactionExecutorHelper.getShortActivityName;
import static android.app.servertransaction.TransactionExecutorHelper.getStateName;
import static android.app.servertransaction.TransactionExecutorHelper.lastCallbackRequestingState;
import static android.app.servertransaction.TransactionExecutorHelper.tId;
import static android.app.servertransaction.TransactionExecutorHelper.transactionToString;

import android.app.ActivityThread.ActivityClientRecord;
import android.app.ClientTransactionHandler;
import android.os.IBinder;
import android.util.IntArray;
import android.util.Slog;

import com.android.internal.annotations.VisibleForTesting;

import java.util.List;
import java.util.Map;

/**
 * Class that manages transaction execution in the correct order.
 * @hide
 */
//顺序管理事务执行的类
public class TransactionExecutor {

    private static final boolean DEBUG_RESOLVER = false;
    private static final String TAG = "TransactionExecutor";
    /**
     * 使用事务处理程序初始化一个实例，该处理程序将执行所有请求的操作。
     * 在ActivityThread类中中调用了mTransactionExecutor = new TransactionExecutor(this)这个方法，其中的mTransactionHandler是ActivityThread本身
     */
    private ClientTransactionHandler mTransactionHandler;
    private PendingTransactionActions mPendingActions = new PendingTransactionActions();
    private TransactionExecutorHelper mHelper = new TransactionExecutorHelper();

    /** Initialize an instance with transaction handler, that will execute all requested actions. */
    //使用事务处理程序初始化一个实例，该处理程序将执行所有请求的操作。
    //在ActivityThread类中中调用了mTransactionExecutor = new TransactionExecutor(this)这个方法，其中的mTransactionHandler是ActivityThread本身
    public TransactionExecutor(ClientTransactionHandler clientTransactionHandler) {
        mTransactionHandler = clientTransactionHandler;
    }

    /**
     * Resolve transaction.
     * First all callbacks will be executed in the order they appear in the list. If a callback
     * requires a certain pre- or post-execution state, the client will be transitioned accordingly.
     * Then the client will cycle to the final lifecycle state if provided. Otherwise, it will
     * either remain in the initial state, or last state needed by a callback.
     */
    public void execute(ClientTransaction transaction) {
        if (DEBUG_RESOLVER) Slog.d(TAG, tId(transaction) + "Start resolving transaction");

        final IBinder token = transaction.getActivityToken();
        if (token != null) {
            final Map<IBinder, ClientTransactionItem> activitiesToBeDestroyed = mTransactionHandler.getActivitiesToBeDestroyed();
            final ClientTransactionItem destroyItem = activitiesToBeDestroyed.get(token);
            if (destroyItem != null) {
                if (transaction.getLifecycleStateRequest() == destroyItem) {
                    // It is going to execute the transaction that will destroy activity with the
                    // token, so the corresponding to-be-destroyed record can be removed.
                    activitiesToBeDestroyed.remove(token);
                }
                if (mTransactionHandler.getActivityClient(token) == null) {
                    // The activity has not been created but has been requested to destroy, so all
                    // transactions for the token are just like being cancelled.
                    Slog.w(TAG, tId(transaction) + "Skip pre-destroyed transaction:\n" + transactionToString(transaction, mTransactionHandler));
                    return;
                }
            }
        }

        if (DEBUG_RESOLVER) Slog.d(TAG, transactionToString(transaction, mTransactionHandler));
        //循环遍历回调请求的所有状态，并在适当的时间执行它们
        //ClientTransaction存在两种事务,
        // 一种是通过setLifecycleStateRequest设置一个对象的事务类型，用于表示事务执行以后，客户端应该处于的生命周期状态
        //一种是addCallback，增加对客户端的事务类型回调，对客户端一系列的回调。
        // 这两个不同的类型，在这里就会存在不同的处理方法。
        executeCallbacks(transaction);
        //执行生命周期的改变
        executeLifecycleState(transaction);
        mPendingActions.clear();
        if (DEBUG_RESOLVER) Slog.d(TAG, tId(transaction) + "End resolving transaction");
    }

    /** Cycle through all states requested by callbacks and execute them at proper times. */
    //循环遍历回调请求的所有状态，并在适当的时间执行它们。ClientTransaction存在两种事务，一种是通过set
    @VisibleForTesting
    public void executeCallbacks(ClientTransaction transaction) {

        final List<ClientTransactionItem> callbacks = transaction.getCallbacks();
        if (callbacks == null || callbacks.isEmpty()) {
            // No callbacks to execute, return early.
            return;
        }
        if (DEBUG_RESOLVER) Slog.d(TAG, tId(transaction) + "Resolving callbacks in transaction");

        final IBinder token = transaction.getActivityToken();
        ActivityClientRecord r = mTransactionHandler.getActivityClient(token);

        // In case when post-execution state of the last callback matches the final state requested
        // for the activity in this transaction, we won't do the last transition here and do it when
        // moving to final state instead (because it may contain additional parameters from server).
        final ActivityLifecycleItem finalStateRequest = transaction.getLifecycleStateRequest();
        final int finalState = finalStateRequest != null ? finalStateRequest.getTargetState()
                : UNDEFINED;
        // Index of the last callback that requests some post-execution state.
        final int lastCallbackRequestingState = lastCallbackRequestingState(transaction);

        final int size = callbacks.size();
        for (int i = 0; i < size; ++i) {
            //这里item可能是LaunchActivityItem,PauseActivityItem,DestroyActivityItem等各种ClientTransactionItem具体的实现类
            final ClientTransactionItem item = callbacks.get(i);
            if (DEBUG_RESOLVER) Slog.d(TAG, tId(transaction) + "Resolving callback: " + item);
            final int postExecutionState = item.getPostExecutionState();
            final int closestPreExecutionState = mHelper.getClosestPreExecutionState(r,item.getPostExecutionState());
            if (closestPreExecutionState != UNDEFINED) {
                cycleToPath(r, closestPreExecutionState, transaction);
            }
            //调用实现类的
            item.execute(mTransactionHandler, token, mPendingActions);
            item.postExecute(mTransactionHandler, token, mPendingActions);
            if (r == null) {
                // Launch activity request will create an activity record.
                r = mTransactionHandler.getActivityClient(token);
            }

            if (postExecutionState != UNDEFINED && r != null) {
                // Skip the very last transition and perform it by explicit state request instead.
                final boolean shouldExcludeLastTransition =
                        i == lastCallbackRequestingState && finalState == postExecutionState;
                cycleToPath(r, postExecutionState, shouldExcludeLastTransition, transaction);
            }
        }
    }

    /** Transition to the final state if requested by the transaction. */
    //如果事务请求，则转换到最终状态
    private void executeLifecycleState(ClientTransaction transaction) {
        // ActivityStackSupervisor.java中进行了这个设置
        // final ActivityLifecycleItem lifecycleItem;
        //                if (andResume) {
        //                    lifecycleItem = ResumeActivityItem.obtain(dc.isNextTransitionForward());
        //                } else {
        //                    lifecycleItem = PauseActivityItem.obtain();
        //                }
        //                clientTransaction.setLifecycleStateRequest(lifecycleItem);
        //所以这里的lifecycleItem可能是ResumeActivityItem或者PauseActivityItem
        final ActivityLifecycleItem lifecycleItem = transaction.getLifecycleStateRequest();
        if (lifecycleItem == null) {
            //如果不是通过setLifecycleStateRequest设置的，那么该方法不需要处理，直接返回即可
            return;
        }

        final IBinder token = transaction.getActivityToken();
        final ActivityClientRecord r = mTransactionHandler.getActivityClient(token);
        if (DEBUG_RESOLVER) {
            Slog.d(TAG, tId(transaction) + "Resolving lifecycle state: "
                    + lifecycleItem + " for activity: "
                    + getShortActivityName(token, mTransactionHandler));
        }

        if (r == null) {
            // Ignore requests for non-existent client records for now.
            return;
        }

        // Cycle to the state right before the final requested state.
        cycleToPath(r, lifecycleItem.getTargetState(), true /* excludeLastState */, transaction);

        // Execute the final transition with proper parameters.
        //使用适当的参数执行最后的转换
        lifecycleItem.execute(mTransactionHandler, token, mPendingActions);
        lifecycleItem.postExecute(mTransactionHandler, token, mPendingActions);
    }

    /** Transition the client between states. */
    @VisibleForTesting
    public void cycleToPath(ActivityClientRecord r, int finish, ClientTransaction transaction) {
        cycleToPath(r, finish, false /* excludeLastState */, transaction);
    }

    /**
     * Transition the client between states with an option not to perform the last hop in the
     * sequence. This is used when resolving lifecycle state request, when the last transition must
     * be performed with some specific parameters.
     */
    private void cycleToPath(ActivityClientRecord r, int finish, boolean excludeLastState,
                             ClientTransaction transaction) {
        final int start = r.getLifecycleState();
        if (DEBUG_RESOLVER) {
            Slog.d(TAG, tId(transaction) + "Cycle activity: "
                    + getShortActivityName(r.token, mTransactionHandler)
                    + " from: " + getStateName(start) + " to: " + getStateName(finish)
                    + " excludeLastState: " + excludeLastState);
        }
        final IntArray path = mHelper.getLifecyclePath(start, finish, excludeLastState);
        performLifecycleSequence(r, path, transaction);
    }

    /** Transition the client through previously initialized state sequence. */
    private void performLifecycleSequence(ActivityClientRecord r, IntArray path,
                                          ClientTransaction transaction) {
        final int size = path.size();
        for (int i = 0, state; i < size; i++) {
            state = path.get(i);
            if (DEBUG_RESOLVER) {
                Slog.d(TAG, tId(transaction) + "Transitioning activity: "
                        + getShortActivityName(r.token, mTransactionHandler)
                        + " to state: " + getStateName(state));
            }
            switch (state) {
                case ON_CREATE:
                    mTransactionHandler.handleLaunchActivity(r, mPendingActions,
                            null /* customIntent */);
                    break;
                case ON_START:
                    mTransactionHandler.handleStartActivity(r, mPendingActions);
                    break;
                case ON_RESUME:
                    mTransactionHandler.handleResumeActivity(r.token, false /* finalStateRequest */,
                            r.isForward, "LIFECYCLER_RESUME_ACTIVITY");
                    break;
                case ON_PAUSE:
                    mTransactionHandler.handlePauseActivity(r.token, false /* finished */,
                            false /* userLeaving */, 0 /* configChanges */, mPendingActions,
                            "LIFECYCLER_PAUSE_ACTIVITY");
                    break;
                case ON_STOP:
                    mTransactionHandler.handleStopActivity(r.token, false /* show */,
                            0 /* configChanges */, mPendingActions, false /* finalStateRequest */,
                            "LIFECYCLER_STOP_ACTIVITY");
                    break;
                case ON_DESTROY:
                    mTransactionHandler.handleDestroyActivity(r.token, false /* finishing */,
                            0 /* configChanges */, false /* getNonConfigInstance */,
                            "performLifecycleSequence. cycling to:" + path.get(size - 1));
                    break;
                case ON_RESTART:
                    mTransactionHandler.performRestartActivity(r.token, false /* start */);
                    break;
                default:
                    throw new IllegalArgumentException("Unexpected lifecycle state: " + state);
            }
        }
    }
}
