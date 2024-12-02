LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := curl_static
LOCAL_EXPORT_LDLIBS := -lz
LOCAL_STATIC_LIBRARIES := ssl_static crypto_static nghttp2_static nghttp3_static ngtcp2_static
LOCAL_SRC_FILES := ./libs/android.$(TARGET_ARCH_ABI)/libcurl_static.a

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include

include $(PREBUILT_STATIC_LIBRARY)

$(call import-add-path,$(LOCAL_PATH)/..)
$(call import-module,crypto_static)
$(call import-module,ssl_static)
$(call import-module,nghttp2_static)
$(call import-module,nghttp3_static)
$(call import-module,ngtcp2_static)
