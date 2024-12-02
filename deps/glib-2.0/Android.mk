LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := glib-2.0
LOCAL_STATIC_LIBRARIES := libffi libiconv libpcre2 libintl
LOCAL_SRC_FILES := ./libs/android.$(TARGET_ARCH_ABI)/libglib-2.0.a

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include/glibconfig/$(TARGET_ARCH_ABI) $(LOCAL_PATH)/include

include $(PREBUILT_STATIC_LIBRARY)

$(call import-add-path,$(LOCAL_PATH)/..)
$(call import-module,ffi_static)
$(call import-module,iconv_static)
$(call import-module,pcre2_static)
$(call import-module,intl_static)
