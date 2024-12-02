LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := libgbinder
LOCAL_STATIC_LIBRARIES := libglibutil gobject-2.0

LOCAL_CFLAGS := -DHAS_PTHREAD_TIMEDJOIN_NP=0 \
    -DGLIB_VERSION_MAX_ALLOWED=GLIB_VERSION_2_32 \
    -DGLIB_VERSION_MIN_REQUIRED=GLIB_VERSION_MAX_ALLOWED

LOCAL_SRC_FILES := \
    libgbinder/src/gbinder_bridge.c \
    libgbinder/src/gbinder_buffer.c \
    libgbinder/src/gbinder_cleanup.c \
    libgbinder/src/gbinder_client.c \
    libgbinder/src/gbinder_config.c \
    libgbinder/src/gbinder_driver.c \
    libgbinder/src/gbinder_eventloop.c \
    libgbinder/src/gbinder_fmq.c \
    libgbinder/src/gbinder_io_32.c \
    libgbinder/src/gbinder_io_64.c \
    libgbinder/src/gbinder_io.c \
    libgbinder/src/gbinder_ipc.c \
    libgbinder/src/gbinder_local_object.c \
    libgbinder/src/gbinder_local_reply.c \
    libgbinder/src/gbinder_local_request.c \
    libgbinder/src/gbinder_log.c \
    libgbinder/src/gbinder_proxy_object.c \
    libgbinder/src/gbinder_reader.c \
    libgbinder/src/gbinder_remote_object.c \
    libgbinder/src/gbinder_remote_reply.c \
    libgbinder/src/gbinder_remote_request.c \
    libgbinder/src/gbinder_rpc_protocol.c \
    libgbinder/src/gbinder_servicemanager_aidl2.c \
    libgbinder/src/gbinder_servicemanager_aidl3.c \
    libgbinder/src/gbinder_servicemanager_aidl4.c \
    libgbinder/src/gbinder_servicemanager_aidl.c \
    libgbinder/src/gbinder_servicemanager.c \
    libgbinder/src/gbinder_servicemanager_hidl.c \
    libgbinder/src/gbinder_servicename.c \
    libgbinder/src/gbinder_servicepoll.c \
    libgbinder/src/gbinder_system.c \
    libgbinder/src/gbinder_writer.c

LOCAL_C_INCLUDES := $(LOCAL_PATH)/libgbinder/include

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES)

include $(BUILD_STATIC_LIBRARY)

$(call import-add-path,$(LOCAL_PATH))
$(call import-module,deps/gobject-2.0)
$(call import-module,deps/libglibutil)
