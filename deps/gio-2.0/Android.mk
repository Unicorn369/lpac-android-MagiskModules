LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := gio-2.0
LOCAL_STATIC_LIBRARIES := gobject-2.0 gmodule-2.0
LOCAL_SRC_FILES := ./libs/android.$(TARGET_ARCH_ABI)/libgio-2.0.a

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include

include $(PREBUILT_STATIC_LIBRARY)

$(call import-add-path,$(LOCAL_PATH)/..)
#$(call import-module,gobject-2.0)
$(call import-module,gmodule-2.0)
