LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := gobject-2.0
LOCAL_STATIC_LIBRARIES := glib-2.0
LOCAL_SRC_FILES := ./libs/android.$(TARGET_ARCH_ABI)/libgobject-2.0.a

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include

include $(PREBUILT_STATIC_LIBRARY)

$(call import-add-path,$(LOCAL_PATH)/..)
$(call import-module,glib-2.0)
