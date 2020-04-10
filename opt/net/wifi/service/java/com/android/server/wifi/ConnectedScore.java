/*
 * Copyright (C) 2017 The Android Open Source Project
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

package com.android.server.wifi;

import android.net.wifi.WifiInfo;

/**
 * Base class for connection scoring
 */
public abstract class ConnectedScore {

    /** Maximum NetworkAgent score that should be generated by wifi */
    public static final int WIFI_MAX_SCORE = 60;

    /** Score at which wifi is considered poor enough to give up ant try something else */
    public static final int WIFI_TRANSITION_SCORE = WIFI_MAX_SCORE - 10;

    public static final int WIFI_MIN_SCORE = 0;

    final Clock mClock;

    /** This is a typical STD for the connected RSSI for a phone sitting still */
    public double mDefaultRssiStandardDeviation = 2.0;

    /**
     *
     * @param clock is the time source for getMillis()
     */
    public ConnectedScore(Clock clock) {
        mClock = clock;
    }

    /**
     * Returns the current time in milliseconds
     *
     * This time is to be passed into the update methods.
     * The scoring methods generally don't need a particular epoch, depending
     * only on deltas. So a different time source may be used, as long as it is consistent.
     *
     * Note that when there are long intervals between updates, it is unlikely to matter much
     * how large the interval is, so a time source that does not update while the processor is
     * asleep could be just fine.
     *
     * @return millisecond-resolution time.
     */
    public long getMillis() {
        return mClock.getWallClockMillis();
    }

    /**
     * Updates scoring state using RSSI alone
     *
     * @param rssi signal strength (dB).
     * @param millis millisecond-resolution time.
     */
    public void updateUsingRssi(int rssi, long millis) {
        updateUsingRssi(rssi, millis, mDefaultRssiStandardDeviation);
    }

    /**
     * Updates scoring state using RSSI and noise estimate
     *
     * This is useful if an RSSI comes from another source (e.g. scan results) and the
     * expected noise varies by source.
     *
     * @param rssi signal strength (dB).
     * @param millis millisecond-resolution time.
     * @param standardDeviation of the RSSI.
     */
    public abstract void updateUsingRssi(int rssi, long millis, double standardDeviation);

    /**
     * Updates the score using relevant parts of WifiInfo
     *
     * @param wifiInfo object holding relevant values.
     * @param millis millisecond-resolution time.
     */
    public void updateUsingWifiInfo(WifiInfo wifiInfo, long millis) {
        updateUsingRssi(wifiInfo.getRssi(), millis);
    }

    /**
     * Generates a score based on the current state
     *
     * @return network score - on NetworkAgent scale.
     */
    public abstract int generateScore();

    /**
     * Clears out state associated with the connection
     */
    public abstract void reset();
}
