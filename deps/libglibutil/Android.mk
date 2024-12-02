LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libglibutil
LOCAL_SRC_FILES := ./libs/android.$(TARGET_ARCH_ABI)/libglibutil.a

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include

include $(PREBUILT_STATIC_LIBRARY)
