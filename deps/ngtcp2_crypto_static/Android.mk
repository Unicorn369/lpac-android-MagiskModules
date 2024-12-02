LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := ngtcp2_crypto_static
LOCAL_STATIC_LIBRARIES := ssl_static
LOCAL_SRC_FILES := ./libs/android.$(TARGET_ARCH_ABI)/libngtcp2_crypto_static.a

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include

include $(PREBUILT_STATIC_LIBRARY)

$(call import-add-path,$(LOCAL_PATH)/..)
$(call import-module,ssl_static)
