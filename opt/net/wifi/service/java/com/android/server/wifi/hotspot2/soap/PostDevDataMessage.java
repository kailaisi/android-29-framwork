/*
 * Copyright (C) 2018 The Android Open Source Project
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

package com.android.server.wifi.hotspot2.soap;

import android.annotation.NonNull;
import android.content.Context;

import com.android.server.wifi.hotspot2.SystemInfo;
import com.android.server.wifi.hotspot2.omadm.DevDetailMo;
import com.android.server.wifi.hotspot2.omadm.DevInfoMo;

import org.ksoap2.SoapEnvelope;
import org.ksoap2.serialization.SoapObject;
import org.ksoap2.serialization.SoapPrimitive;
import org.ksoap2.serialization.SoapSerializationEnvelope;

/**
 * This class represents sppPostDevData message, as part of the
 * Subscription Provisioning Protocol.
 * For the detail, refer to the Hotspot 2.0 rel2 specification.
 */
public class PostDevDataMessage {

    /**
     * Serialize the given request to a SOAP envelope.
     *
     * @param context       the instance of {@link Context}
     * @param info          the instance of {@link SystemInfo} that has system information about
     *                      the device.
     * @param redirectUri   the redirect uri generated by the device and is used for indication
     *                      of user input from the server.
     * @param requestReason the reason that make a request to the server.
     * @param sessionId     session id generated by the server to identify the session between
     *                      device and server. It is <code>null</code> for the first request.
     * @return {@link SoapSerializationEnvelope}
     */
    public static SoapSerializationEnvelope serializeToSoapEnvelope(@NonNull Context context,
            @NonNull SystemInfo info, @NonNull String redirectUri, @NonNull String requestReason,
            String sessionId) {
        SoapSerializationEnvelope envelope = new SoapSerializationEnvelope(SoapEnvelope.VER12);
        envelope.implicitTypes = true;       // Do not include type in element attribute
        envelope.setAddAdornments(false);    // Do not generate/include IDs for each element

        SoapObject requestObject =
                new SoapObject(SoapEnvelope.NS20, SppConstants.METHOD_POST_DEV_DATA);
        requestObject.addAttribute(SoapEnvelope.NS20, SppConstants.ATTRIBUTE_SPP_VERSION,
                SppConstants.SUPPORTED_SPP_VERSION);
        requestObject.addAttribute(SppConstants.ATTRIBUTE_REQUEST_REASON, requestReason);

        requestObject.addAttribute(SppConstants.ATTRIBUTE_REDIRECT_URI, redirectUri);

        if (sessionId != null) {
            requestObject.addAttribute(SoapEnvelope.NS20, SppConstants.ATTRIBUTE_SESSION_ID,
                    sessionId);
        }

        requestObject.addProperty(SoapEnvelope.NS20, SppConstants.PROPERTY_SUPPORTED_SPP_VERSIONS,
                SppConstants.SUPPORTED_SPP_VERSION);
        requestObject.addProperty(SoapEnvelope.NS20, SppConstants.PROPERTY_SUPPORTED_MO_LIST,
                String.join(" ", SppConstants.SUPPORTED_MO_LIST));
        addMoContainer(requestObject, DevInfoMo.URN, DevInfoMo.serializeToXml(info));
        addMoContainer(requestObject, DevDetailMo.URN,
                DevDetailMo.serializeToXml(context, info, redirectUri));
        envelope.setOutputSoapObject(requestObject);
        return envelope;
    }

    /**
     * Add an Management Object (MO) tree to the given {@link SoapObject}.
     *
     * @param soapObject the object to add to
     * @param moUrn the URN of the MO tree
     * @param moText the string representation of the MO tree
     */
    private static void addMoContainer(SoapObject soapObject, String moUrn, String moText) {
        SoapPrimitive moContainer =
                new SoapPrimitive(SoapEnvelope.NS20, SppConstants.PROPERTY_MO_CONTAINER, moText);
        moContainer.addAttribute(SoapEnvelope.NS20, SppConstants.ATTRIBUTE_MO_URN, moUrn);
        soapObject.addProperty(SoapEnvelope.NS20, SppConstants.PROPERTY_MO_CONTAINER, moContainer);
    }
}