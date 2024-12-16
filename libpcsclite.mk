LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := libpcsclite

LOCAL_CFLAGS := -DLIBPCSCLITE
LOCAL_CFLAGS += -DUSE_IPCDIR=\"/data/adb/pcsc\"

LOCAL_SRC_FILES := \
	libpcsclite/debug.c \
	libpcsclite/error.c \
	libpcsclite/simclist.c \
	libpcsclite/sys_unix.c \
	libpcsclite/utils.c \
	libpcsclite/winscard_clnt.c \
	libpcsclite/winscard_msg.c

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/libpcsclite/include \
    $(LOCAL_PATH)/libpcsclite/include/PCSC

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES)

include $(BUILD_STATIC_LIBRARY)
