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

package com.android.car.setupwizardlib;

import android.annotation.Nullable;
import android.content.Context;
import android.content.res.ColorStateList;
import android.util.AttributeSet;

import com.android.car.setupwizardlib.partner.PartnerConfig;
import com.android.car.setupwizardlib.partner.PartnerConfigHelper;

/**
 * This layout applies heavy theming attributes from the partner overlay.
 */
public class CarSetupWizardDesignLayout extends CarSetupWizardBaseLayout {
    public CarSetupWizardDesignLayout(Context context) {
        this(context, null);
    }

    public CarSetupWizardDesignLayout(Context context, @Nullable AttributeSet attrs) {
        this(context, attrs, 0);
    }

    public CarSetupWizardDesignLayout(Context context, @Nullable AttributeSet attrs,
            int defStyleAttr) {
        this(context, attrs, defStyleAttr, 0);
    }

    /**
     * On initialization, the layout gets all of the custom attributes and initializes
     * the custom views that can be set by the user (e.g. back button, continue button).
     */
    public CarSetupWizardDesignLayout(Context context, @Nullable AttributeSet attrs,
            int defStyleAttr, int defStyleRes) {
        super(context, attrs, defStyleAttr, defStyleRes);

        PartnerConfigHelper partnerConfigHelper = PartnerConfigHelper.get(context);
        int bgColor = partnerConfigHelper.getColor(
                context,
                PartnerConfig.CONFIG_LAYOUT_BG_COLOR);
        if (bgColor != 0) {
            setBackgroundColor(bgColor);
        }

        int tintColor = partnerConfigHelper.getColor(
                context,
                PartnerConfig.CONFIG_LOADING_INDICATOR_COLOR);
        if (tintColor != 0) {
            getProgressBar().setIndeterminateTintList(ColorStateList.valueOf(tintColor));
        }
    }
}
