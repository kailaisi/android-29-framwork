LOCAL_MODULE_TAGS := tests

LOCAL_C_INCLUDES += $(JNI_H_INCLUDE)

LOCAL_CPP_FEATURES += exceptions

LOCAL_CFLAGS := -Werror -Wall -Wextra -std=c++11
LOCAL_RENDERSCRIPT_FLAGS += -O0 -target-api 0

LOCAL_SHARED_LIBRARIES += libdl liblog
LOCAL_STATIC_LIBRARIES += libRScpp_static

LOCAL_SDK_VERSION := 23
LOCAL_NDK_STL_VARIANT := c++_static
