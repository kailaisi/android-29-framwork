/*
 * Copyright (C) 2020 The Android Open Source Project
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

package com.android.internal.telephony.vendor;

import android.content.Context;
import android.content.Intent;
import android.Manifest;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Registrant;
import android.os.RegistrantList;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.provider.Settings;
import android.provider.Settings.SettingNotFoundException;
import android.telecom.PhoneAccount;
import android.telecom.PhoneAccountHandle;
import android.telecom.TelecomManager;
import android.telephony.Rlog;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.util.Log;

import com.android.internal.telephony.SubscriptionController;
import com.android.internal.telephony.PhoneFactory;

import java.util.Iterator;
import java.util.List;

/*
 * Extending SubscriptionController here:
 * To implement fall back of sms/data user preferred subId value to next
 * available subId when current preferred SIM deactivated or removed.
 */
public class VendorSubscriptionController extends SubscriptionController {
    static final String LOG_TAG = "VendorSubscriptionController";
    private static final boolean DBG = true;
    private static final boolean VDBG = Rlog.isLoggable(LOG_TAG, Log.VERBOSE);

    private static int sNumPhones;

    private static final int PROVISIONED = 1;
    private static final int NOT_PROVISIONED = 0;

    private TelecomManager mTelecomManager;
    private TelephonyManager mTelephonyManager;

    private RegistrantList mAddSubscriptionRecordRegistrants = new RegistrantList();

    private static final String SETTING_USER_PREF_DATA_SUB = "user_preferred_data_sub";
    /**
     * This intent would be broadcasted when a subId/slotId pair added to the
     * sSlotIdxToSubId hashmap.
     */
    private static final String ACTION_SUBSCRIPTION_RECORD_ADDED =
            "android.intent.action.SUBSCRIPTION_INFO_RECORD_ADDED";

    public static VendorSubscriptionController init(Context c) {
        synchronized (VendorSubscriptionController.class) {
            if (sInstance == null) {
                sInstance = new VendorSubscriptionController(c);
            } else {
                Log.wtf(LOG_TAG, "init() called multiple times!  sInstance = " + sInstance);
            }
            return (VendorSubscriptionController)sInstance;
        }
    }

    public static VendorSubscriptionController getInstance() {
        if (sInstance == null) {
           Log.wtf(LOG_TAG, "getInstance null");
        }

        return (VendorSubscriptionController)sInstance;
    }

    protected VendorSubscriptionController(Context c) {
        super(c);
        if (DBG) logd(" init by Context");

        mTelecomManager = (TelecomManager) mContext.getSystemService(Context.TELECOM_SERVICE);
        mTelephonyManager = (TelephonyManager) mContext.getSystemService(Context.TELEPHONY_SERVICE);
        sNumPhones = TelephonyManager.getDefault().getPhoneCount();
    }

    public void registerForAddSubscriptionRecord(Handler handler, int what, Object obj) {
        Registrant r = new Registrant(handler, what, obj);
        synchronized (mAddSubscriptionRecordRegistrants) {
            mAddSubscriptionRecordRegistrants.add(r);
            List<SubscriptionInfo> subInfoList =
                    getActiveSubscriptionInfoList(mContext.getOpPackageName());
            if (subInfoList != null) {
                r.notifyRegistrant();
            }
        }
    }

    public void unregisterForAddSubscriptionRecord(Handler handler) {
        synchronized (mAddSubscriptionRecordRegistrants) {
            mAddSubscriptionRecordRegistrants.remove(handler);
        }
    }

    @Override
    public int addSubInfoRecord(String iccId, int slotIndex) {
        logd("addSubInfoRecord: broadcast intent subId[" + slotIndex + "]");
        return addSubInfo(iccId, null, slotIndex, SubscriptionManager.SUBSCRIPTION_TYPE_LOCAL_SIM);
    }

    @Override
    public int addSubInfo(String uniqueId, String displayName, int slotIndex,
            int subscriptionType) {

        int retVal = super.addSubInfo(uniqueId, displayName, slotIndex, subscriptionType);

        int[] subId = getSubId(slotIndex);
        if (subId != null && (subId.length > 0)) {
            // When a new entry added in sSlotIdxToSubId for slotId, broadcast intent
            logd("addSubInfoRecord: broadcast intent subId[" + slotIndex + "] = " + subId[0]);
            mAddSubscriptionRecordRegistrants.notifyRegistrants(
                    new AsyncResult(null, slotIndex, null));
            Intent intent = new Intent(ACTION_SUBSCRIPTION_RECORD_ADDED);
            SubscriptionManager.putPhoneIdAndSubIdExtra(intent, slotIndex, subId[0]);
            mContext.sendBroadcast(intent, Manifest.permission.READ_PRIVILEGED_PHONE_STATE);
        }
        return retVal;
    }

    protected boolean isRadioAvailableOnAllSubs() {
        for (int i = 0; i < sNumPhones; i++) {
            if (PhoneFactory.getPhone(i).mCi != null &&
                    PhoneFactory.getPhone(i).mCi.getRadioState() ==
                    TelephonyManager.RADIO_POWER_UNAVAILABLE) {
                return false;
            }
        }
        return true;
    }

    protected boolean isShuttingDown() {
        for (int i = 0; i < sNumPhones; i++) {
            if (PhoneFactory.getPhone(i) != null &&
                    PhoneFactory.getPhone(i).isShuttingDown()) return true;
        }
        return false;
    }

    public boolean isRadioInValidState() {

        // Radio Unavailable, do not updateUserPrefs. As this may happened due to SSR or RIL Crash.
        if (!isRadioAvailableOnAllSubs()) {
            logd(" isRadioInValidState, radio not available");
            return false;
        }

        //Do not updateUserPrefs when Shutdown is in progress
        if (isShuttingDown()) {
            logd(" isRadioInValidState: device shutdown in progress ");
            return false;
        }
        return true;
    }

    // If any of the voice/data/sms preference related SIM
    // deactivated/re-activated this will update the preference
    // with next available/activated SIM.
    public void updateUserPreferences() {
        SubscriptionInfo mNextActivatedSub = null;
        int activeCount = 0;
        if (!isRadioInValidState()) {
            logd("Radio is in Invalid state, Ignore Updating User Preference!!!");
            return;
        }
        List<SubscriptionInfo> sil = getActiveSubscriptionInfoList(mContext.getOpPackageName());
        // If list of active subscriptions empty OR non of the SIM provisioned
        // clear defaults preference of voice/sms/data.
        if (sil == null || sil.size() < 1) {
            logi("updateUserPreferences: Subscription list is empty");
            return;
        }

        // Do not fallback to next available sub if AOSP feature
        // "User choice of selecting data/sms fallback preference" enabled.
        if (SystemProperties.getBoolean("persist.vendor.radio.aosp_usr_pref_sel", false)) {
            logi("updateUserPreferences: AOSP user preference option enabled ");
            return;
        }

        //Get num of activated Subs and next available activated sub info.
        for (SubscriptionInfo subInfo : sil) {
            if (getUiccProvisionStatus(subInfo.getSimSlotIndex()) == PROVISIONED) {
                activeCount++;
                if (mNextActivatedSub == null) mNextActivatedSub = subInfo;
            }
        }
        logd("updateUserPreferences:: active sub count = " + activeCount + " dds = "
                 + getDefaultDataSubId() + " voice = " + getDefaultVoiceSubId() +
                 " sms = " + getDefaultSmsSubId());

        // If active SUB count is 1, Always Ask Prompt to be disabled and
        // preference fallback to the next available SUB.
        if (activeCount == 1) {
            setSmsPromptEnabled(false);
        }

        // TODO Set all prompt options to false ?

        // in Single SIM case or if there are no activated subs available, no need to update. EXIT.
        if ((mNextActivatedSub == null) || (getActiveSubInfoCountMax() == 1)) return;

        handleDataPreference(mNextActivatedSub.getSubscriptionId());

        if (!isSubProvisioned(getDefaultSmsSubId())) {
            setDefaultSmsSubId(mNextActivatedSub.getSubscriptionId());
        }
        if (!isSubProvisioned(getDefaultVoiceSubId())) {
            setDefaultVoiceSubId(mNextActivatedSub.getSubscriptionId());
        }

        // voice preference is handled in such a way that
        // 1. Whenever current Sub is deactivated or removed It fall backs to
        //    next available Sub.
        // 2. When device is flashed for the first time, initial voice preference
        //    would be set to always ask.
        if (!isNonSimAccountFound() && activeCount == 1) {
            final int subId = mNextActivatedSub.getSubscriptionId();
            PhoneAccountHandle phoneAccountHandle = subscriptionIdToPhoneAccountHandle(subId);
            logi("set default phoneaccount to  " + subId);
            mTelecomManager.setUserSelectedOutgoingPhoneAccount(phoneAccountHandle);
        }
        if (!isSubProvisioned(mDefaultFallbackSubId)) {
            setDefaultFallbackSubId(mNextActivatedSub.getSubscriptionId(),
                SubscriptionManager.SUBSCRIPTION_TYPE_LOCAL_SIM);
        }

        notifySubscriptionInfoChanged();
        logd("updateUserPreferences: after currentDds = " + getDefaultDataSubId() + " voice = " +
                 getDefaultVoiceSubId() + " sms = " + getDefaultSmsSubId());
    }

    protected void handleDataPreference(int nextActiveSubId) {
        int userPrefDataSubId = getUserPrefDataSubIdFromDB();
        int currentDataSubId = getDefaultDataSubId();

        List<SubscriptionInfo> subInfoList =
                getActiveSubscriptionInfoList(mContext.getOpPackageName());
        if (subInfoList == null) {
            return;
        }
        boolean userPrefSubValid = false;
        for (SubscriptionInfo subInfo : subInfoList) {
            if (subInfo.getSubscriptionId() == userPrefDataSubId) {
                userPrefSubValid = true;
            }
        }
        logd("havePrefSub = " + userPrefSubValid + " user pref subId = "
                 + userPrefDataSubId + " current dds " + currentDataSubId
                 + " next active subId " + nextActiveSubId);

        // If earlier user selected DDS is now available, set that as DDS subId.
        if (userPrefSubValid && isSubProvisioned(userPrefDataSubId) &&
                 (currentDataSubId != userPrefDataSubId)) {
            setDefaultDataSubId(userPrefDataSubId);
        } else if (!isSubProvisioned(currentDataSubId)) {
            setDefaultDataSubId(nextActiveSubId);
        }

    }

    protected int getUiccProvisionStatus(int slotId) {
        // FIXME use valid SIM provision value
        return PROVISIONED; 
    }

    // This method returns true if subId and corresponding slotId is in valid
    // range and the Uicc card corresponds to this slot is provisioned.
    protected boolean isSubProvisioned(int subId) {
        boolean isSubIdUsable = SubscriptionManager.isUsableSubIdValue(subId);

        if (isSubIdUsable) {
            int slotId = getSlotIndex(subId);
            if (!SubscriptionManager.isValidSlotIndex(slotId)) {
                loge(" Invalid slotId " + slotId + " or subId = " + subId);
                isSubIdUsable = false;
            } else {
                if (getUiccProvisionStatus(slotId) != PROVISIONED) {
                    isSubIdUsable = false;
                }
                loge("isSubProvisioned, state = " + isSubIdUsable + " subId = " + subId);
            }
        }
        return isSubIdUsable;
    }

    /* Returns User SMS Prompt property,  enabled or not */
    public boolean isSmsPromptEnabled() {
        boolean prompt = false;
        int value = 0;
        try {
            value = Settings.Global.getInt(mContext.getContentResolver(),
                    Settings.Global.MULTI_SIM_SMS_PROMPT);
        } catch (SettingNotFoundException snfe) {
            loge("Settings Exception Reading Dual Sim SMS Prompt Values");
        }
        prompt = (value == 0) ? false : true ;
        if (VDBG) logd("SMS Prompt option:" + prompt);

       return prompt;
    }

    /*Sets User SMS Prompt property,  enable or not */
    public void setSmsPromptEnabled(boolean enabled) {
        enforceModifyPhoneState("setSMSPromptEnabled");
        int value = (enabled == false) ? 0 : 1;
        Settings.Global.putInt(mContext.getContentResolver(),
                Settings.Global.MULTI_SIM_SMS_PROMPT, value);
        logi("setSMSPromptOption to " + enabled);
    }

    protected boolean isNonSimAccountFound() {
        final Iterator<PhoneAccountHandle> phoneAccounts =
                mTelecomManager.getCallCapablePhoneAccounts().listIterator();

        while (phoneAccounts.hasNext()) {
            final PhoneAccountHandle phoneAccountHandle = phoneAccounts.next();
            final PhoneAccount phoneAccount = mTelecomManager.getPhoneAccount(phoneAccountHandle);
            if (mTelephonyManager.getSubIdForPhoneAccount(phoneAccount) ==
                            SubscriptionManager.INVALID_SUBSCRIPTION_ID) {
                logi("Other than SIM account found. ");
                return true;
            }
        }
        logi("Other than SIM account not found ");
        return false;
    }

    protected PhoneAccountHandle subscriptionIdToPhoneAccountHandle(final int subId) {
        final Iterator<PhoneAccountHandle> phoneAccounts =
                mTelecomManager.getCallCapablePhoneAccounts().listIterator();

        while (phoneAccounts.hasNext()) {
            final PhoneAccountHandle phoneAccountHandle = phoneAccounts.next();
            final PhoneAccount phoneAccount = mTelecomManager.getPhoneAccount(phoneAccountHandle);
            if (subId == mTelephonyManager.getSubIdForPhoneAccount(phoneAccount)) {
                return phoneAccountHandle;
            }
        }

        return null;
    }

    protected int getUserPrefDataSubIdFromDB() {
        return android.provider.Settings.Global.getInt(mContext.getContentResolver(),
                SETTING_USER_PREF_DATA_SUB, SubscriptionManager.INVALID_SUBSCRIPTION_ID);
    }

    private void logd(String string) {
        if (DBG) Rlog.d(LOG_TAG, string);
    }

    private void logi(String string) {
        Rlog.i(LOG_TAG, string);
    }

    private void loge(String string) {
        Rlog.e(LOG_TAG, string);
    }
}
