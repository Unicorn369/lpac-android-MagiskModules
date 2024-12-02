LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := nghttp3_static
LOCAL_SRC_FILES := ./libs/android.$(TARGET_ARCH_ABI)/libnghttp3_static.a

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include

include $(PREBUILT_STATIC_LIBRARY)
