LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libffi
LOCAL_SRC_FILES := ./libs/android.$(TARGET_ARCH_ABI)/libffi.a

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include/$(TARGET_ARCH_ABI)

include $(PREBUILT_STATIC_LIBRARY)
