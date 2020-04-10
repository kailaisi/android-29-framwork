#
# Copyright (C) 2017 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# This file is auto-generated by frameworks/rs/tests/java_api/RSUnitTests/RSUnitTests.py.
# To change unit tests version, please run the Python script above.

ifneq ($(ENABLE_RSTESTS),)

LOCAL_PATH := $(call my-dir)
my_rs_unit_tests_path := ../../RSUnitTests/src/com/android/rs/unittest

# RSTestForward for build tool version 25.0.2

include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := tests
LOCAL_STATIC_JAVA_LIBRARIES := androidx.test.rules
LOCAL_COMPATIBILITY_SUITE := device-tests
LOCAL_RENDERSCRIPT_TARGET_API := current
LOCAL_PACKAGE_NAME := RSTestForward_25_0_2
LOCAL_SDK_VERSION := current
my_rs_path := $(TOP)/prebuilts/renderscript/host/linux-x86/25.0.2
LOCAL_RENDERSCRIPT_CC := $(my_rs_path)/bin/llvm-rs-cc
LOCAL_RENDERSCRIPT_INCLUDES_OVERRIDE := $(my_rs_path)/include $(my_rs_path)/clang-include
my_rs_path :=
LOCAL_SRC_FILES :=\
    $(call all-java-files-under,../src)\
    $(call all-java-files-under,src)\
    $(my_rs_unit_tests_path)/UnitTest.java\
    $(my_rs_unit_tests_path)/UT_alloc.java\
    $(my_rs_unit_tests_path)/alloc.rscript\
    $(my_rs_unit_tests_path)/UT_alloc_copy.java\
    $(my_rs_unit_tests_path)/UT_alloc_copyPadded.java\
    $(my_rs_unit_tests_path)/UT_array_alloc.java\
    $(my_rs_unit_tests_path)/array_alloc.rscript\
    $(my_rs_unit_tests_path)/UT_array_init.java\
    $(my_rs_unit_tests_path)/array_init.rscript\
    $(my_rs_unit_tests_path)/UT_atomic.java\
    $(my_rs_unit_tests_path)/atomic.rscript\
    $(my_rs_unit_tests_path)/UT_bitfield.java\
    $(my_rs_unit_tests_path)/bitfield.rscript\
    $(my_rs_unit_tests_path)/UT_bug_char.java\
    $(my_rs_unit_tests_path)/bug_char.rscript\
    $(my_rs_unit_tests_path)/UT_check_dims.java\
    $(my_rs_unit_tests_path)/check_dims.rscript\
    $(my_rs_unit_tests_path)/UT_clamp.java\
    $(my_rs_unit_tests_path)/clamp.rscript\
    $(my_rs_unit_tests_path)/UT_clamp_relaxed.java\
    $(my_rs_unit_tests_path)/clamp_relaxed.rscript\
    $(my_rs_unit_tests_path)/UT_constant.java\
    $(my_rs_unit_tests_path)/constant.rscript\
    $(my_rs_unit_tests_path)/UT_convert.java\
    $(my_rs_unit_tests_path)/convert.rscript\
    $(my_rs_unit_tests_path)/UT_convert_relaxed.java\
    $(my_rs_unit_tests_path)/convert_relaxed.rscript\
    $(my_rs_unit_tests_path)/UT_copy_test.java\
    $(my_rs_unit_tests_path)/copy_test.rscript\
    $(my_rs_unit_tests_path)/UT_ctxt_default.java\
    $(my_rs_unit_tests_path)/ctxt_default.rscript\
    $(my_rs_unit_tests_path)/UT_element.java\
    $(my_rs_unit_tests_path)/element.rscript\
    $(my_rs_unit_tests_path)/UT_foreach.java\
    $(my_rs_unit_tests_path)/foreach.rscript\
    $(my_rs_unit_tests_path)/UT_foreach_bounds.java\
    $(my_rs_unit_tests_path)/foreach_bounds.rscript\
    $(my_rs_unit_tests_path)/UT_foreach_multi.java\
    $(my_rs_unit_tests_path)/foreach_multi.rscript\
    $(my_rs_unit_tests_path)/UT_fp16.java\
    $(my_rs_unit_tests_path)/fp16.rscript\
    $(my_rs_unit_tests_path)/UT_fp16_globals.java\
    $(my_rs_unit_tests_path)/fp16_globals.rscript\
    $(my_rs_unit_tests_path)/UT_fp_mad.java\
    $(my_rs_unit_tests_path)/fp_mad.rscript\
    $(my_rs_unit_tests_path)/UT_instance.java\
    $(my_rs_unit_tests_path)/instance.rscript\
    $(my_rs_unit_tests_path)/UT_int4.java\
    $(my_rs_unit_tests_path)/int4.rscript\
    $(my_rs_unit_tests_path)/UT_kernel.java\
    $(my_rs_unit_tests_path)/kernel.rscript\
    $(my_rs_unit_tests_path)/UT_kernel2d.java\
    $(my_rs_unit_tests_path)/kernel2d.rscript\
    $(my_rs_unit_tests_path)/UT_kernel2d_oldstyle.java\
    $(my_rs_unit_tests_path)/kernel2d_oldstyle.rscript\
    $(my_rs_unit_tests_path)/UT_kernel3d.java\
    $(my_rs_unit_tests_path)/kernel3d.rscript\
    $(my_rs_unit_tests_path)/UT_kernel_struct.java\
    $(my_rs_unit_tests_path)/kernel_struct.rscript\
    $(my_rs_unit_tests_path)/UT_math.java\
    $(my_rs_unit_tests_path)/math.rscript\
    $(my_rs_unit_tests_path)/UT_math_24.java\
    $(my_rs_unit_tests_path)/math_24.rscript\
    $(my_rs_unit_tests_path)/UT_math_agree.java\
    $(my_rs_unit_tests_path)/math_agree.rscript\
    $(my_rs_unit_tests_path)/UT_math_conformance.java\
    $(my_rs_unit_tests_path)/math_conformance.rscript\
    $(my_rs_unit_tests_path)/UT_math_fp16.java\
    $(my_rs_unit_tests_path)/math_fp16.rscript\
    $(my_rs_unit_tests_path)/UT_min.java\
    $(my_rs_unit_tests_path)/min.rscript\
    $(my_rs_unit_tests_path)/UT_noroot.java\
    $(my_rs_unit_tests_path)/noroot.rscript\
    $(my_rs_unit_tests_path)/UT_primitives.java\
    $(my_rs_unit_tests_path)/primitives.rscript\
    $(my_rs_unit_tests_path)/UT_reduce.java\
    $(my_rs_unit_tests_path)/reduce.rscript\
    $(my_rs_unit_tests_path)/UT_reduce_backward.java\
    $(my_rs_unit_tests_path)/reduce_backward.rscript\
    $(my_rs_unit_tests_path)/UT_refcount.java\
    $(my_rs_unit_tests_path)/refcount.rscript\
    $(my_rs_unit_tests_path)/UT_rsdebug.java\
    $(my_rs_unit_tests_path)/rsdebug.rscript\
    $(my_rs_unit_tests_path)/UT_rsdebug_23.java\
    $(my_rs_unit_tests_path)/rsdebug_23.rscript\
    $(my_rs_unit_tests_path)/UT_rsdebug_24.java\
    $(my_rs_unit_tests_path)/rsdebug_24.rscript\
    $(my_rs_unit_tests_path)/UT_rstime.java\
    $(my_rs_unit_tests_path)/rstime.rscript\
    $(my_rs_unit_tests_path)/UT_rstypes.java\
    $(my_rs_unit_tests_path)/rstypes.rscript\
    $(my_rs_unit_tests_path)/UT_sampler.java\
    $(my_rs_unit_tests_path)/sampler.rscript\
    $(my_rs_unit_tests_path)/UT_script_group2_float.java\
    $(my_rs_unit_tests_path)/float_test.rscript\
    $(my_rs_unit_tests_path)/UT_script_group2_gatherscatter.java\
    $(my_rs_unit_tests_path)/addup.rscript\
    $(my_rs_unit_tests_path)/UT_script_group2_nochain.java\
    $(my_rs_unit_tests_path)/increment.rscript\
    $(my_rs_unit_tests_path)/increment2.rscript\
    $(my_rs_unit_tests_path)/double.rscript\
    $(my_rs_unit_tests_path)/UT_script_group2_pointwise.java\
    $(my_rs_unit_tests_path)/increment.rscript\
    $(my_rs_unit_tests_path)/double.rscript\
    $(my_rs_unit_tests_path)/UT_single_source_alloc.java\
    $(my_rs_unit_tests_path)/single_source_alloc.rscript\
    $(my_rs_unit_tests_path)/UT_single_source_ref_count.java\
    $(my_rs_unit_tests_path)/single_source_ref_count.rscript\
    $(my_rs_unit_tests_path)/UT_single_source_script.java\
    $(my_rs_unit_tests_path)/single_source_script.rscript\
    $(my_rs_unit_tests_path)/UT_small_struct_2.java\
    $(my_rs_unit_tests_path)/small_struct_2.rscript\
    $(my_rs_unit_tests_path)/UT_static_globals.java\
    $(my_rs_unit_tests_path)/static_globals.rscript\
    $(my_rs_unit_tests_path)/UT_struct.java\
    $(my_rs_unit_tests_path)/struct.rscript\
    $(my_rs_unit_tests_path)/UT_unsigned.java\
    $(my_rs_unit_tests_path)/unsigned.rscript\
    $(my_rs_unit_tests_path)/UT_vector.java\
    $(my_rs_unit_tests_path)/vector.rscript\

include $(BUILD_PACKAGE)

my_rs_unit_tests_path :=

endif
