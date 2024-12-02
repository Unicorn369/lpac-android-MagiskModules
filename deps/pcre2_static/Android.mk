LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libpcre2
LOCAL_SRC_FILES := ./libs/android.$(TARGET_ARCH_ABI)/libpcre2-8.a

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include

include $(PREBUILT_STATIC_LIBRARY)
