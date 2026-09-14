LOCAL_PATH := $(call my-dir)
########## libqmi-glib ##########
include $(CLEAR_VARS)

LOCAL_MODULE    := libqmi-glib
LOCAL_STATIC_LIBRARIES := libqrtr-glib gobject-2.0 gio-2.0

LOCAL_CFLAGS := \
    -DHAVE_CONFIG_H \
    -DLIBEXEC_PATH=\"/system/xbin\" \
    \
    -DLIBQMI_GLIB_COMPILATION \
    -DGLIB_DISABLE_DEPRECATION_WARNINGS \
    -DGLIB_VERSION_MAX_ALLOWED=GLIB_VERSION_2_32 \
    -DGLIB_VERSION_MIN_REQUIRED=GLIB_VERSION_MAX_ALLOWED

LOCAL_SRC_FILES := \
    libqmi-glib/src/qmi-atr.c \
    libqmi-glib/src/qmi-client.c \
    libqmi-glib/src/qmi-common.c \
    libqmi-glib/src/qmi-ctl.c \
    libqmi-glib/src/qmi-device.c \
    libqmi-glib/src/qmi-dms.c \
    libqmi-glib/src/qmi-dpm.c \
    libqmi-glib/src/qmi-dsd.c \
    libqmi-glib/src/qmi-endpoint.c \
    libqmi-glib/src/qmi-endpoint-qmux.c \
    libqmi-glib/src/qmi-endpoint-qrtr.c \
    libqmi-glib/src/qmi-enums-dms.c \
    libqmi-glib/src/qmi-enums-nas.c \
    libqmi-glib/src/qmi-enums-wds.c \
    libqmi-glib/src/qmi-enum-types.c \
    libqmi-glib/src/qmi-enum-types-private.c \
    libqmi-glib/src/qmi-error-quarks.c \
    libqmi-glib/src/qmi-error-types.c \
    libqmi-glib/src/qmi-file.c \
    libqmi-glib/src/qmi-flags64-types.c \
    libqmi-glib/src/qmi-flag-types.c \
    libqmi-glib/src/qmi-flag-types-private.c \
    libqmi-glib/src/qmi-fox.c \
    libqmi-glib/src/qmi-gas.c \
    libqmi-glib/src/qmi-gms.c \
    libqmi-glib/src/qmi-helpers.c \
    libqmi-glib/src/qmi-imsa.c \
    libqmi-glib/src/qmi-ims.c \
    libqmi-glib/src/qmi-imsdcm.c \
    libqmi-glib/src/qmi-imsp.c \
    libqmi-glib/src/qmi-loc.c \
    libqmi-glib/src/qmi-message.c \
    libqmi-glib/src/qmi-message-context.c \
    libqmi-glib/src/qmi-nas.c \
    libqmi-glib/src/qmi-net-port-manager.c \
    libqmi-glib/src/qmi-net-port-manager-qmiwwan.c \
    libqmi-glib/src/qmi-net-port-manager-rmnet.c \
    libqmi-glib/src/qmi-oma.c \
    libqmi-glib/src/qmi-pbm.c \
    libqmi-glib/src/qmi-pdc.c \
    libqmi-glib/src/qmi-pds.c \
    libqmi-glib/src/qmi-proxy.c \
    libqmi-glib/src/qmi-qos.c \
    libqmi-glib/src/qmi-sar.c \
    libqmi-glib/src/qmi-ssc.c \
    libqmi-glib/src/qmi-uim.c \
    libqmi-glib/src/qmi-utils.c \
    libqmi-glib/src/qmi-voice.c \
    libqmi-glib/src/qmi-wda.c \
    libqmi-glib/src/qmi-wds.c \
    libqmi-glib/src/qmi-wms.c

LOCAL_C_INCLUDES := $(LOCAL_PATH)/libqmi-glib/include $(LOCAL_PATH)/libqmi-glib/android

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/libqmi-glib/include

include $(BUILD_STATIC_LIBRARY)

########## qmicli ##########
include $(CLEAR_VARS)

LOCAL_MODULE    := qmicli
LOCAL_STATIC_LIBRARIES := libqmi-glib

LOCAL_CFLAGS := \
    -DGLIB_DISABLE_DEPRECATION_WARNINGS \
    -DGLIB_VERSION_MAX_ALLOWED=GLIB_VERSION_2_32 \
    -DGLIB_VERSION_MIN_REQUIRED=GLIB_VERSION_MAX_ALLOWED

LOCAL_SRC_FILES := \
    libqmi-glib/qmicli/qmicli.c \
    libqmi-glib/qmicli/qmicli-atr.c \
    libqmi-glib/qmicli/qmicli-dms.c \
    libqmi-glib/qmicli/qmicli-dpm.c \
    libqmi-glib/qmicli/qmicli-dsd.c \
    libqmi-glib/qmicli/qmicli-fox.c \
    libqmi-glib/qmicli/qmicli-gas.c \
    libqmi-glib/qmicli/qmicli-gms.c \
    libqmi-glib/qmicli/qmicli-helpers.c \
    libqmi-glib/qmicli/qmicli-imsa.c \
    libqmi-glib/qmicli/qmicli-ims.c \
    libqmi-glib/qmicli/qmicli-imsp.c \
    libqmi-glib/qmicli/qmicli-link-management.c \
    libqmi-glib/qmicli/qmicli-loc.c \
    libqmi-glib/qmicli/qmicli-nas.c \
    libqmi-glib/qmicli/qmicli-pbm.c \
    libqmi-glib/qmicli/qmicli-pdc.c \
    libqmi-glib/qmicli/qmicli-qmiwwan.c \
    libqmi-glib/qmicli/qmicli-qos.c \
    libqmi-glib/qmicli/qmicli-sar.c \
    libqmi-glib/qmicli/qmicli-uim.c \
    libqmi-glib/qmicli/qmicli-voice.c \
    libqmi-glib/qmicli/qmicli-wda.c \
    libqmi-glib/qmicli/qmicli-wds.c \
    libqmi-glib/qmicli/qmicli-wms.c

LOCAL_C_INCLUDES := $(LOCAL_PATH)/libqmi-glib/android

include $(BUILD_EXECUTABLE)

########## qmi-proxy ##########
include $(CLEAR_VARS)

LOCAL_MODULE    := qmi-proxy
LOCAL_STATIC_LIBRARIES := libqmi-glib

LOCAL_SRC_FILES := libqmi-glib/qmi-proxy/qmi-proxy.c

LOCAL_C_INCLUDES := $(LOCAL_PATH)/libqmi-glib/android

include $(BUILD_EXECUTABLE)

$(call import-add-path,$(LOCAL_PATH))
#$(call import-module,deps/glib)
