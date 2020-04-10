/*
 * Copyright (C) 2019 The Android Open Source Project
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

package com.android.internal.telephony;

import android.Manifest;
import android.app.AppOpsManager;
import android.compat.annotation.UnsupportedAppUsage;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Binder;
import android.service.carrier.CarrierMessagingService;
import android.util.Log;

import com.android.telephony.Rlog;

/**
 * Permissions checks for SMS functionality
 */
public class SmsPermissions {
    static final String LOG_TAG = "SmsPermissions";

    @UnsupportedAppUsage
    private final Phone mPhone;
    @UnsupportedAppUsage
    private final Context mContext;
    @UnsupportedAppUsage
    private final AppOpsManager mAppOps;

    public SmsPermissions(Phone phone, Context context, AppOpsManager appOps) {
        mPhone = phone;
        mContext = context;
        mAppOps = appOps;
    }

    /**
     * Check that the caller can send text messages.
     *
     * For persisted messages, the caller just needs the SEND_SMS permission. For unpersisted
     * messages, the caller must either be the IMS app or a carrier-privileged app, or they must
     * have both the MODIFY_PHONE_STATE and SEND_SMS permissions.
     *
     * @throws SecurityException if the caller is missing all necessary permission declaration or
     *                           has had a necessary runtime permission revoked.
     * @return true unless the caller has all necessary permissions but has a revoked AppOps bit.
     */
    public boolean checkCallingCanSendText(
            boolean persistMessageForNonDefaultSmsApp, String callingPackage,
            String callingAttributionTag, String message) {
        // TODO(b/75978989): Should we allow IMS/carrier apps for persisted messages as well?
        if (!persistMessageForNonDefaultSmsApp) {
            try {
                enforceCallerIsImsAppOrCarrierApp(message);
                // No need to also check SEND_SMS.
                return true;
            } catch (SecurityException e) {
                mContext.enforceCallingPermission(
                        android.Manifest.permission.MODIFY_PHONE_STATE, message);
            }
        }
        return checkCallingCanSendSms(callingPackage, callingAttributionTag, message);
    }

    /**
     * Enforces that the caller is one of the following apps:
     * <ul>
     *     <li> IMS App
     *     <li> Carrier App
     * </ul>
     */
    public void enforceCallerIsImsAppOrCarrierApp(String message) {
        int callingUid = Binder.getCallingUid();
        String carrierImsPackage = CarrierSmsUtils.getCarrierImsPackageForIntent(mContext, mPhone,
                new Intent(CarrierMessagingService.SERVICE_INTERFACE));
        try {
            if (carrierImsPackage != null
                    && callingUid == mContext.getPackageManager().getPackageUid(
                    carrierImsPackage, 0)) {
                return;
            }
        } catch (PackageManager.NameNotFoundException e) {
            if (Rlog.isLoggable("SMS", Log.DEBUG)) {
                loge("Cannot find configured carrier ims package");
            }
        }

        TelephonyPermissions.enforceCallingOrSelfCarrierPrivilege(
                mContext, mPhone.getSubId(), message);
    }

    /**
     * Check that the caller has SEND_SMS permissions. Can only be called during an IPC.
     *
     * @throws SecurityException if the caller is missing the permission declaration or has had the
     *                           permission revoked at runtime.
     * @return whether the caller has the OP_SEND_SMS AppOps bit.
     */
    public boolean checkCallingCanSendSms(String callingPackage, String callingAttributionTag,
            String message) {
        mContext.enforceCallingPermission(Manifest.permission.SEND_SMS, message);
        return mAppOps.noteOp(AppOpsManager.OPSTR_SEND_SMS, Binder.getCallingUid(), callingPackage)
                == AppOpsManager.MODE_ALLOWED;
    }

    /**
     * Check that the caller (or self, if this is not an IPC) has SEND_SMS permissions.
     *
     * @throws SecurityException if the caller is missing the permission declaration or has had the
     *                           permission revoked at runtime.
     * @return whether the caller has the OP_SEND_SMS AppOps bit.
     */
    public boolean checkCallingOrSelfCanSendSms(String callingPackage, String callingAttributionTag,
            String message) {
        mContext.enforceCallingOrSelfPermission(Manifest.permission.SEND_SMS, message);
        return mAppOps.noteOp(AppOpsManager.OPSTR_SEND_SMS, Binder.getCallingUid(), callingPackage)
                == AppOpsManager.MODE_ALLOWED;
    }

    /**
     * Check that the caller (or self, if this is not an IPC) can get SMSC address from (U)SIM.
     *
     * The default SMS application can get SMSC address, otherwise the caller must have
     * {@link android.Manifest.permission#READ_PRIVILEGED_PHONE_STATE} or carrier privileges.
     *
     * @return true if the caller is default SMS app or has the required permission and privileges.
     *              Otherwise, false;
     */
    public boolean checkCallingOrSelfCanGetSmscAddress(String callingPackage, String message) {
        // Allow it to the default SMS app always.
        if (!isDefaultSmsPackage(callingPackage)) {
            try {
                // Allow it with READ_PRIVILEGED_PHONE_STATE or Carrier Privileges
                TelephonyPermissions
                        .enforeceCallingOrSelfReadPrivilegedPhoneStatePermissionOrCarrierPrivilege(
                                mContext, mPhone.getSubId(), message);
            } catch (SecurityException e) { // To avoid crashing applications
                loge(message + ": Neither " + callingPackage + " is the default SMS app"
                        + " nor the caller has "
                        + android.Manifest.permission.READ_PRIVILEGED_PHONE_STATE
                        + ", or carrier privileges", e);
                return false;
            }
        }

        return true;
    }

    /**
     * Check that the caller (or self, if this is not an IPC) can set SMSC address on (U)SIM.
     *
     * The default SMS application can set SMSC address, otherwise the caller must have
     * {@link android.Manifest.permission#MODIFY_PHONE_STATE} or carrier privileges.
     *
     * @return true if the caller is default SMS app or has the required permission and privileges.
     *              Otherwise, false.
     */
    public boolean checkCallingOrSelfCanSetSmscAddress(String callingPackage, String message) {
        // Allow it to the default SMS app always.
        if (!isDefaultSmsPackage(callingPackage)) {
            try {
                // Allow it with MODIFY_PHONE_STATE or Carrier Privileges
                TelephonyPermissions.enforceCallingOrSelfModifyPermissionOrCarrierPrivilege(
                        mContext, mPhone.getSubId(), message);
            } catch (SecurityException e) { // To avoid crashing applications
                loge(message + ": Neither " + callingPackage + " is the default SMS app"
                        + " nor the caller has " + android.Manifest.permission.MODIFY_PHONE_STATE
                        + ", or carrier privileges", e);
                return false;
            }
        }

        return true;
    }

    /** Check if a package is default SMS app. */
    public boolean isDefaultSmsPackage(String packageName) {
        return SmsApplication.isDefaultSmsApplication(mContext, packageName);
    }

    @UnsupportedAppUsage
    protected void log(String msg) {
        Rlog.d(LOG_TAG, msg);
    }

    protected void loge(String msg) {
        Rlog.e(LOG_TAG, msg);
    }

    protected void loge(String msg, Throwable e) {
        Rlog.e(LOG_TAG, msg, e);
    }
}
