LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := libqrtr-glib
LOCAL_STATIC_LIBRARIES := gio-2.0

LOCAL_CFLAGS := \
    -DLIBQRTR_GLIB_COMPILATION \
    -DGLIB_DISABLE_DEPRECATION_WARNINGS \
    -DGLIB_VERSION_MAX_ALLOWED=GLIB_VERSION_2_32 \
    -DGLIB_VERSION_MIN_REQUIRED=GLIB_VERSION_MAX_ALLOWED

LOCAL_SRC_FILES := \
    libqrtr-glib/src/qrtr-bus.c \
    libqrtr-glib/src/qrtr-client.c \
    libqrtr-glib/src/qrtr-node.c \
    libqrtr-glib/src/qrtr-utils.c

LOCAL_C_INCLUDES := $(LOCAL_PATH)/libqrtr-glib/include

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES)

include $(BUILD_STATIC_LIBRARY)

$(call import-add-path,$(LOCAL_PATH))
$(call import-module,deps/gio-2.0)
