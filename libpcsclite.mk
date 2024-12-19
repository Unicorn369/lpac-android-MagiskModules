LOCAL_PATH := $(call my-dir)
PCSC_CFLAGS := \
  -DUSE_IPCDIR=\"/data/adb/pcsc\" \
  -DPCSCLITE_HP_DROPDIR=\"/data/adb/pcsc/drivers\"
########## libpcsclite ##########
include $(CLEAR_VARS)

LOCAL_MODULE    := libpcsclite

LOCAL_CFLAGS := $(PCSC_CFLAGS)
LOCAL_CFLAGS += -DLIBPCSCLITE -DSIMCLIST_NO_DUMPRESTORE

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
########## libusb ##########
include $(CLEAR_VARS)

LOCAL_MODULE    := libusb
LOCAL_C_INCLUDES := $(LOCAL_PATH)/libpcsclite/libusb/include
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES)

LOCAL_SRC_FILES := \
    libpcsclite/libusb/core.c \
    libpcsclite/libusb/descriptor.c \
    libpcsclite/libusb/hotplug.c \
    libpcsclite/libusb/io.c \
    libpcsclite/libusb/strerror.c \
    libpcsclite/libusb/sync.c \
    libpcsclite/libusb/os/events_posix.c \
    libpcsclite/libusb/os/threads_posix.c \
    libpcsclite/libusb/os/linux_netlink.c \
    libpcsclite/libusb/os/linux_usbfs.c

include $(BUILD_STATIC_LIBRARY)
########## pcscd ##########
include $(CLEAR_VARS)

LOCAL_MODULE    := pcscd
LOCAL_STATIC_LIBRARIES := libusb

LOCAL_CFLAGS := $(PCSC_CFLAGS)
LOCAL_CFLAGS += \
    -DPCSCLITE_CONFIG_DIR=\"/data/adb/pcsc/etc/reader.conf.d\" \
    -DOPENCT_FILE=\"/data/adb/pcsc/openct/status\" \
    -DPROFILE_FILE=\"/data/adb/pcsc/pcsc_profile\"

LOCAL_SRC_FILES := \
    libpcsclite/atrhandler.c \
    libpcsclite/auth.c \
    libpcsclite/configfile.c \
    libpcsclite/debuglog.c \
    libpcsclite/dyn_hpux.c \
    libpcsclite/dyn_macosx.c \
    libpcsclite/dyn_unix.c \
    libpcsclite/eventhandler.c \
    libpcsclite/hotplug_generic.c \
    libpcsclite/hotplug_libudev.c \
    libpcsclite/hotplug_libusb.c \
    libpcsclite/hotplug_macosx.c \
    libpcsclite/ifdwrapper.c \
    libpcsclite/pcscdaemon.c \
    libpcsclite/prothandler.c \
    libpcsclite/readerfactory.c \
    libpcsclite/simclist.c \
    libpcsclite/sys_unix.c \
    libpcsclite/tokenparser.c \
    libpcsclite/utils.c \
    libpcsclite/winscard_msg.c \
    libpcsclite/winscard_msg_srv.c \
    libpcsclite/winscard.c \
    libpcsclite/winscard_svc.c \

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/libpcsclite/include \
    $(LOCAL_PATH)/libpcsclite/include/PCSC

include $(BUILD_EXECUTABLE)