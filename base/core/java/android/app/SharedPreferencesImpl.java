/*
 * Copyright (C) 2010 The Android Open Source Project
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

package android.app;

import android.annotation.Nullable;
import android.annotation.UnsupportedAppUsage;
import android.content.SharedPreferences;
import android.os.FileUtils;
import android.os.Looper;
import android.system.ErrnoException;
import android.system.Os;
import android.system.StructStat;
import android.system.StructTimespec;
import android.util.Log;

import com.android.internal.annotations.GuardedBy;
import com.android.internal.util.ExponentiallyBucketedHistogram;
import com.android.internal.util.XmlUtils;

import dalvik.system.BlockGuard;

import libcore.io.IoUtils;

import org.xmlpull.v1.XmlPullParserException;

import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.WeakHashMap;
import java.util.concurrent.CountDownLatch;

/**
 * SharedPreferences的具体实现类。
 */
final class SharedPreferencesImpl implements SharedPreferences {
    private static final String TAG = "SharedPreferencesImpl";
    private static final boolean DEBUG = false;
    private static final Object CONTENT = new Object();

    /**
     * If a fsync takes more than {@value #MAX_FSYNC_DURATION_MILLIS} ms, warn
     */
    private static final long MAX_FSYNC_DURATION_MILLIS = 256;

    // Lock ordering rules:
    //  - acquire SharedPreferencesImpl.mLock before EditorImpl.mLock
    //  - acquire mWritingToDiskLock before EditorImpl.mLock

    @UnsupportedAppUsage
    private final File mFile;
    //备份的文件。属于SP的备份机制。
    //如果读写的时候发现存在了备份文件，证明之前的读写肯定出现了问题，
    //初始化的时候，如果发现了bak文件，那么就把sp文件删除，然后将.bak文件重命名为sp文件
    //在读写过程中，会先将原来的sp文件备份为.bak文件。然后进行数据的写入，如果写入出现异常，那么就会把出错的mFile直接删除，然后将备份的文件恢复。
    private final File mBackupFile;
    private final int mMode;
    //锁，在首次没有没有读取sp文件的时候，会通过这个锁进行锁定，然后进行sp的缓存。然后才会进行数据的读取
    private final Object mLock = new Object();
    private final Object mWritingToDiskLock = new Object();

    @GuardedBy("mLock")
    private Map<String, Object> mMap;
    @GuardedBy("mLock")
    private Throwable mThrowable;

    @GuardedBy("mLock")
    private int mDiskWritesInFlight = 0;

    @GuardedBy("mLock")
    private boolean mLoaded = false;

    @GuardedBy("mLock")
    private StructTimespec mStatTimestamp;

    @GuardedBy("mLock")
    private long mStatSize;

    @GuardedBy("mLock")
    private final WeakHashMap<OnSharedPreferenceChangeListener, Object> mListeners =
            new WeakHashMap<OnSharedPreferenceChangeListener, Object>();

    /**
     * Current memory state (always increasing)
     */
    @GuardedBy("this")
    private long mCurrentMemoryStateGeneration;

    /**
     * Latest memory state that was committed to disk
     * 最后一次提交到磁盘的计数器
     */
    @GuardedBy("mWritingToDiskLock")
    private long mDiskStateGeneration;

    /**
     * Time (and number of instances) of file-system sync requests
     */
    @GuardedBy("mWritingToDiskLock")
    private final ExponentiallyBucketedHistogram mSyncTimes = new ExponentiallyBucketedHistogram(16);
    private int mNumSync = 0;

    @UnsupportedAppUsage
    SharedPreferencesImpl(File file, int mode) {
        mFile = file;
        //生成备份文件
        mBackupFile = makeBackupFile(file);
        mMode = mode;
        mLoaded = false;
        mMap = null;
        mThrowable = null;
        //从磁盘加载数据
        startLoadFromDisk();
    }

    @UnsupportedAppUsage
    private void startLoadFromDisk() {
        synchronized (mLock) {
            mLoaded = false;
        }
        new Thread("SharedPreferencesImpl-load") {
            public void run() {
                loadFromDisk();
            }
        }.start();
    }

    private void loadFromDisk() {
        synchronized (mLock) {
            if (mLoaded) {
                return;
            }
            //备份文件存在则使用备份文件的数据
            if (mBackupFile.exists()) {
                mFile.delete();
                mBackupFile.renameTo(mFile);
            }
        }

        // Debugging
        //权限校验
        if (mFile.exists() && !mFile.canRead()) {
            Log.w(TAG, "Attempt to read preferences file " + mFile + " without permission");
        }
        //读取sp中保存的键值对，保存到hashmap中
        Map<String, Object> map = null;
        StructStat stat = null;
        Throwable thrown = null;
        try {
            stat = Os.stat(mFile.getPath());
            //可读权限
            if (mFile.canRead()) {
                BufferedInputStream str = null;
                try {
                    str = new BufferedInputStream(new FileInputStream(mFile), 16 * 1024);
                    //读取对应的键值对
                    map = (Map<String, Object>) XmlUtils.readMapXml(str);
                } catch (Exception e) {
                    Log.w(TAG, "Cannot read " + mFile.getAbsolutePath(), e);
                } finally {
                    IoUtils.closeQuietly(str);
                }
            }
        } catch (ErrnoException e) {
            // An errno exception means the stat failed. Treat as empty/non-existing by
            // ignoring.
        } catch (Throwable t) {
            thrown = t;
        }

        synchronized (mLock) {
            mLoaded = true;
            mThrowable = thrown;

            // It's important that we always signal waiters, even if we'll make
            // them fail with an exception. The try-finally is pretty wide, but
            // better safe than sorry.
            try {
                if (thrown == null) {
                    if (map != null) {
                        //如果读取过程中没有发生异常，则把对应的键值赋值给mMap中。
                        mMap = map;
                        //记录初始化的时间和对应的大小
                        mStatTimestamp = stat.st_mtim;
                        mStatSize = stat.st_size;
                    } else {
                        mMap = new HashMap<>();
                    }
                }
                // In case of a thrown exception, we retain the old map. That allows
                // any open editors to commit and store updates.
            } catch (Throwable t) {
                mThrowable = t;
            } finally {
                mLock.notifyAll();
            }
        }
    }

    static File makeBackupFile(File prefsFile) {
        //以sp文件名，创建对应的.bak文件
        return new File(prefsFile.getPath() + ".bak");
    }

    @UnsupportedAppUsage
    void startReloadIfChangedUnexpectedly() {
        synchronized (mLock) {
            // TODO: wait for any pending writes to disk?
            if (!hasFileChangedUnexpectedly()) {
                return;
            }
            startLoadFromDisk();
        }
    }

    // Has the file changed out from under us?  i.e. writes that
    // we didn't instigate.
    private boolean hasFileChangedUnexpectedly() {
        synchronized (mLock) {
            if (mDiskWritesInFlight > 0) {
                // If we know we caused it, it's not unexpected.
                if (DEBUG) Log.d(TAG, "disk write in flight, not unexpected.");
                return false;
            }
        }

        final StructStat stat;
        try {
            /*
             * Metadata operations don't usually count as a block guard
             * violation, but we explicitly want this one.
             */
            BlockGuard.getThreadPolicy().onReadFromDisk();
            stat = Os.stat(mFile.getPath());
        } catch (ErrnoException e) {
            return true;
        }

        synchronized (mLock) {
            return !stat.st_mtim.equals(mStatTimestamp) || mStatSize != stat.st_size;
        }
    }

    @Override
    public void registerOnSharedPreferenceChangeListener(OnSharedPreferenceChangeListener listener) {
        synchronized (mLock) {
            mListeners.put(listener, CONTENT);
        }
    }

    @Override
    public void unregisterOnSharedPreferenceChangeListener(OnSharedPreferenceChangeListener listener) {
        synchronized (mLock) {
            mListeners.remove(listener);
        }
    }

    /**
     * 等待磁盘的sp键值对加载完成。线程同步方案
     */
    @GuardedBy("mLock")
    private void awaitLoadedLocked() {
        if (!mLoaded) {
            // Raise an explicit StrictMode onReadFromDisk for this
            // thread, since the real read will be in a different
            // thread and otherwise ignored by StrictMode.
            BlockGuard.getThreadPolicy().onReadFromDisk();
        }
        while (!mLoaded) {
            try {
                //这里会阻塞，等待子Thread读取完所有的键值对以后，这里才会继续执行，返回一个imp了
                mLock.wait();
            } catch (InterruptedException unused) {
            }
        }
        if (mThrowable != null) {
            throw new IllegalStateException(mThrowable);
        }
    }

    @Override
    public Map<String, ?> getAll() {
        synchronized (mLock) {
            awaitLoadedLocked();
            //noinspection unchecked
            return new HashMap<String, Object>(mMap);
        }
    }

    @Override
    @Nullable
    public String getString(String key, @Nullable String defValue) {
        synchronized (mLock) {
            awaitLoadedLocked();
            String v = (String) mMap.get(key);
            return v != null ? v : defValue;
        }
    }

    @Override
    @Nullable
    public Set<String> getStringSet(String key, @Nullable Set<String> defValues) {
        synchronized (mLock) {
            awaitLoadedLocked();
            Set<String> v = (Set<String>) mMap.get(key);
            return v != null ? v : defValues;
        }
    }

    @Override
    public int getInt(String key, int defValue) {
        synchronized (mLock) {
            awaitLoadedLocked();
            Integer v = (Integer) mMap.get(key);
            return v != null ? v : defValue;
        }
    }

    @Override
    public long getLong(String key, long defValue) {
        synchronized (mLock) {
            awaitLoadedLocked();
            Long v = (Long) mMap.get(key);
            return v != null ? v : defValue;
        }
    }

    @Override
    public float getFloat(String key, float defValue) {
        synchronized (mLock) {
            awaitLoadedLocked();
            Float v = (Float) mMap.get(key);
            return v != null ? v : defValue;
        }
    }

    @Override
    public boolean getBoolean(String key, boolean defValue) {
        synchronized (mLock) {
            awaitLoadedLocked();
            Boolean v = (Boolean) mMap.get(key);
            return v != null ? v : defValue;
        }
    }

    @Override
    public boolean contains(String key) {
        synchronized (mLock) {
            awaitLoadedLocked();
            return mMap.containsKey(key);
        }
    }

    @Override
    public Editor edit() {
        // TODO: remove the need to call awaitLoadedLocked() when
        // requesting an editor.  will require some work on the
        // Editor, but then we should be able to do:
        //
        //      context.getSharedPreferences(..).edit().putString(..).apply()
        //
        // ... all without blocking.
        synchronized (mLock) {
            awaitLoadedLocked();
        }

        return new EditorImpl();
    }

    // Return value from EditorImpl#commitToMemory()
    //提交返回结果
    private static class MemoryCommitResult {
        final long memoryStateGeneration;
        @Nullable
        final List<String> keysModified;
        @Nullable
        final Set<OnSharedPreferenceChangeListener> listeners;
        final Map<String, Object> mapToWriteToDisk;
        final CountDownLatch writtenToDiskLatch = new CountDownLatch(1);

        @GuardedBy("mWritingToDiskLock")
        volatile boolean writeToDiskResult = false;
        boolean wasWritten = false;

        private MemoryCommitResult(long memoryStateGeneration, @Nullable List<String> keysModified,
                                   @Nullable Set<OnSharedPreferenceChangeListener> listeners,
                                   Map<String, Object> mapToWriteToDisk) {
            this.memoryStateGeneration = memoryStateGeneration;
            this.keysModified = keysModified;
            this.listeners = listeners;
            this.mapToWriteToDisk = mapToWriteToDisk;
        }

        void setDiskWriteResult(boolean wasWritten, boolean result) {
            this.wasWritten = wasWritten;
            writeToDiskResult = result;
            writtenToDiskLatch.countDown();
        }
    }

    public final class EditorImpl implements Editor {
        private final Object mEditorLock = new Object();

        @GuardedBy("mEditorLock")
        private final Map<String, Object> mModified = new HashMap<>();

        @GuardedBy("mEditorLock")
        private boolean mClear = false;

        @Override
        public Editor putString(String key, @Nullable String value) {
            synchronized (mEditorLock) {
                mModified.put(key, value);
                return this;
            }
        }

        @Override
        public Editor putStringSet(String key, @Nullable Set<String> values) {
            synchronized (mEditorLock) {
                mModified.put(key,
                        (values == null) ? null : new HashSet<String>(values));
                return this;
            }
        }

        @Override
        public Editor putInt(String key, int value) {
            synchronized (mEditorLock) {
                mModified.put(key, value);
                return this;
            }
        }

        @Override
        public Editor putLong(String key, long value) {
            synchronized (mEditorLock) {
                mModified.put(key, value);
                return this;
            }
        }

        @Override
        public Editor putFloat(String key, float value) {
            synchronized (mEditorLock) {
                mModified.put(key, value);
                return this;
            }
        }

        @Override
        public Editor putBoolean(String key, boolean value) {
            synchronized (mEditorLock) {
                mModified.put(key, value);
                return this;
            }
        }

        @Override
        public Editor remove(String key) {
            synchronized (mEditorLock) {
                //这里设置为了this,而不是null
                mModified.put(key, this);
                return this;
            }
        }

        @Override
        public Editor clear() {
            synchronized (mEditorLock) {
                mClear = true;
                return this;
            }
        }

        @Override
        public void apply() {
            final long startTime = System.currentTimeMillis();

            final MemoryCommitResult mcr = commitToMemory();
            //子线程，将数据写入到磁盘中
            final Runnable awaitCommit = new Runnable() {
                @Override
                public void run() {
                    try {
                        //等待写入完成
                        mcr.writtenToDiskLatch.await();
                    } catch (InterruptedException ignored) {
                    }

                    if (DEBUG && mcr.wasWritten) {
                        Log.d(TAG, mFile.getName() + ":" + mcr.memoryStateGeneration
                                + " applied after " + (System.currentTimeMillis() - startTime)
                                + " ms");
                    }
                }
            };

            QueuedWork.addFinisher(awaitCommit);
            //子线程，执行await子线程，并将数据移除
            Runnable postWriteRunnable = new Runnable() {
                @Override
                public void run() {
                    awaitCommit.run();//调用写入磁盘等待的方法
                    QueuedWork.removeFinisher(awaitCommit);
                }
            };
            //入队写数据
            SharedPreferencesImpl.this.enqueueDiskWrite(mcr, postWriteRunnable);

            // Okay to notify the listeners before it's hit disk
            // because the listeners should always get the same
            // SharedPreferences instance back, which has the
            // changes reflected in memory.
            notifyListeners(mcr);
        }

        // Returns true if any changes were made
        private MemoryCommitResult commitToMemory() {
            long memoryStateGeneration;
            //修改的key列表
            List<String> keysModified = null;
            Set<OnSharedPreferenceChangeListener> listeners = null;
            //将要保存的数据map信息
            Map<String, Object> mapToWriteToDisk;

            synchronized (SharedPreferencesImpl.this.mLock) {
                // We optimistically don't make a deep copy until
                // a memory commit comes in when we're already
                // writing to disk.
                //如果当前正在写的话，那么这时候不能直接修改，需要弄出来一个备份
                if (mDiskWritesInFlight > 0) {
                    // We can't modify our mMap as a currently
                    // in-flight write owns it.  Clone it before
                    // modifying it.
                    // noinspection unchecked
                    mMap = new HashMap<String, Object>(mMap);
                }
                mapToWriteToDisk = mMap;
                mDiskWritesInFlight++;

                boolean hasListeners = mListeners.size() > 0;
                if (hasListeners) {
                    keysModified = new ArrayList<String>();
                    listeners = new HashSet<OnSharedPreferenceChangeListener>(mListeners.keySet());
                }

                synchronized (mEditorLock) {
                    //记录是否发生了数据变化
                    boolean changesMade = false;

                    if (mClear) {
                        if (!mapToWriteToDisk.isEmpty()) {
                            changesMade = true;
                            mapToWriteToDisk.clear();
                        }
                        mClear = false;
                    }
                    //逐个检测变更的数据
                    for (Map.Entry<String, Object> e : mModified.entrySet()) {
                        String k = e.getKey();
                        Object v = e.getValue();
                        // "this" is the magic value for a removal mutation. In addition,
                        // setting a value to "null" for a given key is specified to be
                        // equivalent to calling remove on that key.
                        if (v == this || v == null) {//如果值是null，或者this，那么久移除
                            if (!mapToWriteToDisk.containsKey(k)) {
                                continue;
                            }
                            mapToWriteToDisk.remove(k);
                        } else {
                            if (mapToWriteToDisk.containsKey(k)) {
                                Object existingValue = mapToWriteToDisk.get(k);
                                if (existingValue != null && existingValue.equals(v)) {
                                    //如果相同就不再修改了
                                    continue;
                                }
                            }
                            mapToWriteToDisk.put(k, v);
                        }

                        changesMade = true;
                        if (hasListeners) {
                            keysModified.add(k);
                        }
                    }

                    mModified.clear();

                    if (changesMade) {
                        mCurrentMemoryStateGeneration++;
                    }

                    memoryStateGeneration = mCurrentMemoryStateGeneration;
                }
            }
            return new MemoryCommitResult(memoryStateGeneration, keysModified, listeners,
                    mapToWriteToDisk);
        }

        @Override
        public boolean commit() {
            long startTime = 0;

            if (DEBUG) {
                startTime = System.currentTimeMillis();
            }

            MemoryCommitResult mcr = commitToMemory();
            //入队
            SharedPreferencesImpl.this.enqueueDiskWrite(mcr, null /* sync write on this thread okay */);
            try {
                //等待写入完成
                mcr.writtenToDiskLatch.await();
            } catch (InterruptedException e) {
                return false;
            } finally {
                if (DEBUG) {
                    Log.d(TAG, mFile.getName() + ":" + mcr.memoryStateGeneration
                            + " committed after " + (System.currentTimeMillis() - startTime)
                            + " ms");
                }
            }
            notifyListeners(mcr);
            return mcr.writeToDiskResult;
        }

        private void notifyListeners(final MemoryCommitResult mcr) {
            if (mcr.listeners == null || mcr.keysModified == null ||
                    mcr.keysModified.size() == 0) {
                return;
            }
            if (Looper.myLooper() == Looper.getMainLooper()) {
                for (int i = mcr.keysModified.size() - 1; i >= 0; i--) {
                    final String key = mcr.keysModified.get(i);
                    for (OnSharedPreferenceChangeListener listener : mcr.listeners) {
                        if (listener != null) {
                            listener.onSharedPreferenceChanged(SharedPreferencesImpl.this, key);
                        }
                    }
                }
            } else {
                // Run this function on the main thread.
                ActivityThread.sMainThreadHandler.post(() -> notifyListeners(mcr));
            }
        }
    }

    /**
     * Enqueue an already-committed-to-memory result to be written
     * to disk.
     * <p>
     * They will be written to disk one-at-a-time in the order
     * that they're enqueued.
     *
     * @param postWriteRunnable if non-null, we're being called
     *                          from apply() and this is the runnable to run after
     *                          the write proceeds.  if null (from a regular commit()),
     *                          then we're allowed to do this disk write on the main
     *                          thread (which in addition to reducing allocations and
     *                          creating a background thread, this has the advantage that
     *                          we catch them in userdebug StrictMode reports to convert
     *                          them where possible to apply() ...)
     */
    //推入到写入磁盘队列
    private void enqueueDiskWrite(final MemoryCommitResult mcr, final Runnable postWriteRunnable) {
        //是否是同步
        final boolean isFromSyncCommit = (postWriteRunnable == null);
        //真正执行将数据写入到磁盘的线程
        final Runnable writeToDiskRunnable = new Runnable() {
            @Override
            public void run() {
                synchronized (mWritingToDiskLock) {
                    //写入磁盘
                    writeToFile(mcr, isFromSyncCommit);
                }
                synchronized (mLock) {
                    //计数器-1
                    mDiskWritesInFlight--;
                }
                if (postWriteRunnable != null) {
                    postWriteRunnable.run();
                }
            }
        };

        // Typical #commit() path with fewer allocations, doing a write on
        // the current thread.
        if (isFromSyncCommit) {
            boolean wasEmpty = false;
            synchronized (mLock) {
                wasEmpty = mDiskWritesInFlight == 1;
            }
            if (wasEmpty) {//如果当前只有一个线程在执行，那么可以直接执行线程，然后返回。如果不是1的话，证明现在有其他线程在进行写入的操作，需要将其放入到队列中
                writeToDiskRunnable.run();
                return;
            }
        }
        //这里会将写入的放入到队列中进行处理
        QueuedWork.queue(writeToDiskRunnable, !isFromSyncCommit);
    }

    private static FileOutputStream createFileOutputStream(File file) {
        FileOutputStream str = null;
        try {
            str = new FileOutputStream(file);
        } catch (FileNotFoundException e) {
            File parent = file.getParentFile();
            if (!parent.mkdir()) {
                Log.e(TAG, "Couldn't create directory for SharedPreferences file " + file);
                return null;
            }
            FileUtils.setPermissions(parent.getPath(), FileUtils.S_IRWXU | FileUtils.S_IRWXG | FileUtils.S_IXOTH, -1, -1);
            try {
                str = new FileOutputStream(file);
            } catch (FileNotFoundException e2) {
                Log.e(TAG, "Couldn't create SharedPreferences file " + file, e2);
            }
        }
        return str;
    }

    @GuardedBy("mWritingToDiskLock")
    private void writeToFile(MemoryCommitResult mcr, boolean isFromSyncCommit) {
        long startTime = 0;
        long existsTime = 0;
        long backupExistsTime = 0;
        long outputStreamCreateTime = 0;
        long writeTime = 0;
        long fsyncTime = 0;
        long setPermTime = 0;
        long fstatTime = 0;
        long deleteTime = 0;

        if (DEBUG) {
            startTime = System.currentTimeMillis();
        }

        boolean fileExists = mFile.exists();

        if (DEBUG) {
            existsTime = System.currentTimeMillis();

            // Might not be set, hence init them to a default value
            backupExistsTime = existsTime;
        }

        // Rename the current file so it may be used as a backup during the next read
        if (fileExists) {//文件必须存在
            //标记是否需要写入
            boolean needsWrite = false;

            // Only need to write if the disk state is older than this commit
            //只有当磁盘的状态比本次提交的commit信息旧，则进行提交
            if (mDiskStateGeneration < mcr.memoryStateGeneration) {
                if (isFromSyncCommit) {//commit方式
                    needsWrite = true;
                } else {
                    synchronized (mLock) {
                        // No need to persist intermediate states. Just wait for the latest state to
                        // be persisted.
                        if (mCurrentMemoryStateGeneration == mcr.memoryStateGeneration) {
                            needsWrite = true;
                        }
                    }
                }
            }

            if (!needsWrite) {
                mcr.setDiskWriteResult(false, true);
                return;
            }

            boolean backupFileExists = mBackupFile.exists();

            if (DEBUG) {
                backupExistsTime = System.currentTimeMillis();
            }

            if (!backupFileExists) {//如果备份文件不存在，则将原来的文件命名为备份文件
                if (!mFile.renameTo(mBackupFile)) {//重命名失败则直接退出
                    Log.e(TAG, "Couldn't rename file " + mFile + " to backup file " + mBackupFile);
                    mcr.setDiskWriteResult(false, false);
                    return;
                }
            } else {//备份文件存在了，原来的文件则直接删除
                mFile.delete();
            }
        }
        //在上面的步骤中，将对应原来的文件，重命名为了备份文件
        //后面会尽量将数据写入到文件中，然后如果成功，则将备份文件删除，然后返回true
        //如果写入过程出现异常了，那么就会删除新创建的文件，让后将备份文件还原回来。
        // Attempt to write the file, delete the backup and return true as atomically as
        // possible.  If any exception occurs, delete the new file; next time we will restore
        // from the backup.
        try {
            //创建对应的sp所对应的文件输出流
            FileOutputStream str = createFileOutputStream(mFile);

            if (DEBUG) {
                outputStreamCreateTime = System.currentTimeMillis();
            }
            //输出流创建失败，那么这里直接返回false
            if (str == null) {
                mcr.setDiskWriteResult(false, false);
                return;
            }
            //将map数据写入到文件中
            XmlUtils.writeMapXml(mcr.mapToWriteToDisk, str);

            writeTime = System.currentTimeMillis();
            //调用flush,将流中的数据写入磁盘。但是这里不会关闭
            FileUtils.sync(str);

            fsyncTime = System.currentTimeMillis();
            //关闭输出流
            str.close();
            //设置对应的sp文件的权限
            ContextImpl.setFilePermissionsFromMode(mFile.getPath(), mMode, 0);

            if (DEBUG) {
                setPermTime = System.currentTimeMillis();
            }

            try {
                final StructStat stat = Os.stat(mFile.getPath());
                synchronized (mLock) {
                    //更对对应的时间戳等状态
                    mStatTimestamp = stat.st_mtim;
                    mStatSize = stat.st_size;
                }
            } catch (ErrnoException e) {
                // Do nothing
            }

            if (DEBUG) {
                fstatTime = System.currentTimeMillis();
            }

            // Writing was successful, delete the backup file if there is one.
            //数据已经都存入到sp文件了，那么删除备份文件
            mBackupFile.delete();

            if (DEBUG) {
                deleteTime = System.currentTimeMillis();
            }

            mDiskStateGeneration = mcr.memoryStateGeneration;
            //设置写入成功，然后通知阻塞对象被打开，能够继续进行操作了
            mcr.setDiskWriteResult(true, true);

            if (DEBUG) {
                Log.d(TAG, "write: " + (existsTime - startTime) + "/"
                        + (backupExistsTime - startTime) + "/"
                        + (outputStreamCreateTime - startTime) + "/"
                        + (writeTime - startTime) + "/"
                        + (fsyncTime - startTime) + "/"
                        + (setPermTime - startTime) + "/"
                        + (fstatTime - startTime) + "/"
                        + (deleteTime - startTime));
            }

            long fsyncDuration = fsyncTime - writeTime;
            mSyncTimes.add((int) fsyncDuration);
            mNumSync++;

            if (DEBUG || mNumSync % 1024 == 0 || fsyncDuration > MAX_FSYNC_DURATION_MILLIS) {
                mSyncTimes.log(TAG, "Time required to fsync " + mFile + ": ");
            }

            return;
        } catch (XmlPullParserException e) {
            Log.w(TAG, "writeToFile: Got exception:", e);
        } catch (IOException e) {
            Log.w(TAG, "writeToFile: Got exception:", e);
        }

        // Clean up an unsuccessfully written file
        if (mFile.exists()) {
            if (!mFile.delete()) {
                Log.e(TAG, "Couldn't clean up partially-written file " + mFile);
            }
        }
        mcr.setDiskWriteResult(false, false);
    }
}
