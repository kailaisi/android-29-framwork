/*
 * Copyright (C) 2011 The Android Open Source Project
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

package libcore.icu;

import android.icu.util.TimeZone;
import com.android.tools.layoutlib.annotations.LayoutlibDelegate;

import android.icu.text.DateTimePatternGenerator;
import android.icu.util.Currency;
import android.icu.util.ULocale;
import android.icu.util.VersionInfo;

import java.util.Locale;

/**
 * Delegate implementing the native methods of libcore.icu.ICU
 *
 * Through the layoutlib_create tool, the original native methods of ICU have been replaced
 * by calls to methods of the same name in this delegate class.
 *
 */
public class ICU_Delegate {

    // --- Java delegates

    @LayoutlibDelegate
    /*package*/ static String toLowerCase(String s, String localeName) {
        return s.toLowerCase();
    }

    @LayoutlibDelegate
    /*package*/ static String toUpperCase(String s, String localeName) {
        return s.toUpperCase();
    }

    // --- Native methods accessing ICU's database.

    @LayoutlibDelegate
    /*package*/ static String getBestDateTimePatternNative(String skeleton, String localeName) {
        return DateTimePatternGenerator.getInstance(new ULocale(localeName))
                .getBestPattern(skeleton);
    }

    @LayoutlibDelegate
    @SuppressWarnings("deprecation")
    /*package*/ static String getCldrVersion() {
        return VersionInfo.ICU_DATA_VERSION.toString();
    }

    @LayoutlibDelegate
    /*package*/ static String getIcuVersion() {
        return VersionInfo.ICU_VERSION.toString();
    }

    @LayoutlibDelegate
    /*package*/ static String getUnicodeVersion() {
        return VersionInfo.UNICODE_7_0.toString();
    }

    @LayoutlibDelegate
    /*package*/ static String[] getAvailableBreakIteratorLocalesNative() {
        return new String[0];
    }

    @LayoutlibDelegate
    /*package*/ static String[] getAvailableCalendarLocalesNative() {
        return new String[0];
    }

    @LayoutlibDelegate
    /*package*/ static String[] getAvailableCollatorLocalesNative() {
        return new String[0];
    }

    @LayoutlibDelegate
    /*package*/ static String[] getAvailableDateFormatLocalesNative() {
        return new String[0];
    }

    @LayoutlibDelegate
    /*package*/ static String[] getAvailableLocalesNative() {
        return new String[0];
    }

    @LayoutlibDelegate
    /*package*/ static String[] getAvailableNumberFormatLocalesNative() {
        return new String[0];
    }

    @LayoutlibDelegate
    /*package*/ static String[] getAvailableCurrencyCodes() {
        return new String[0];
    }

    @LayoutlibDelegate
    /*package*/ static String getCurrencyCode(String locale) {
        return "";
    }

    @LayoutlibDelegate
    /*package*/ static String getCurrencyDisplayName(String locale, String currencyCode) {
        return "";
    }

    @LayoutlibDelegate
    /*package*/ static int getCurrencyFractionDigits(String currencyCode) {
        return 0;
    }

    @LayoutlibDelegate
    /*package*/ static int getCurrencyNumericCode(String currencyCode) {
        return Currency.getInstance(currencyCode).getNumericCode();
    }

    @LayoutlibDelegate
    /*package*/ static String getCurrencySymbol(String locale, String currencyCode) {
        return "";
    }

    @LayoutlibDelegate
    /*package*/ static String getDisplayCountryNative(String countryCode, String locale) {
        return "";
    }

    @LayoutlibDelegate
    /*package*/ static String getDisplayLanguageNative(String languageCode, String locale) {
        return "";
    }

    @LayoutlibDelegate
    /*package*/ static String getDisplayVariantNative(String variantCode, String locale) {
        return "";
    }

    @LayoutlibDelegate
    /*package*/ static String getDisplayScriptNative(String variantCode, String locale) {
        return "";
    }

    @LayoutlibDelegate
    /*package*/ static String getISO3Country(String locale) {
        return "";
    }

    @LayoutlibDelegate
    /*package*/ static String getISO3Language(String locale) {
        return "";
    }

    @LayoutlibDelegate
    /*package*/ static String addLikelySubtags(String locale) {
        return "";
    }

    @LayoutlibDelegate
    /*package*/ static String getScript(String locale) {
        return "";
    }

    @LayoutlibDelegate
    /*package*/ static String[] getISOLanguagesNative() {
        return Locale.getISOLanguages();
    }

    @LayoutlibDelegate
    /*package*/ static String[] getISOCountriesNative() {
        return Locale.getISOCountries();
    }

    @LayoutlibDelegate
    /*package*/ static void setDefaultLocale(String locale) {
        ICU.setDefaultLocale(locale);
    }

    @LayoutlibDelegate
    /*package*/ static String getDefaultLocale() {
        return ICU.getDefaultLocale();
    }

    @LayoutlibDelegate
    /*package*/ static String getTZDataVersion() {
        return TimeZone.getTZDataVersion();
    }
}
