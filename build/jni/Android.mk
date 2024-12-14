LOCAL_PATH := $(call my-dir)/../..
COMMON_PARENT_DIR := $(call my-dir)/../..
#################################
LPAC_WITH_APDU_AT ?= true
LPAC_WITH_APDU_PCSC ?= false
LPAC_WITH_APDU_GBINDER ?= true
#################################
include $(CLEAR_VARS)
LOCAL_MODULE := lpac

LOCAL_MODULE_FILENAME := lpac

LOCAL_CFLAGS := -DLPAC_WITH_HTTP_CURL

LOCAL_SRC_FILES := \
    lpac/cjson/cJSON.c \
    lpac/cjson/cJSON_ex.c \
    \
    lpac/driver/driver.c \
    lpac/driver/apdu/stdio.c \
    lpac/driver/http/curl.c \
    lpac/driver/http/stdio.c \
    \
    lpac/euicc/base64.c \
    lpac/euicc/derutil.c \
    lpac/euicc/es10a.c \
    lpac/euicc/es10b.c \
    lpac/euicc/es10c.c \
    lpac/euicc/es10c_ex.c \
    lpac/euicc/es8p.c \
    lpac/euicc/es9p.c \
    lpac/euicc/es9p_errors.c \
    lpac/euicc/euicc.c \
    lpac/euicc/hexutil.c \
    lpac/euicc/interface.c \
    lpac/euicc/sha256.c \
    lpac/euicc/tostr.c \
    \
    lpac/src/applet.c \
    lpac/src/jprint.c \
    lpac/src/main.c \
    \
    lpac/src/applet/chip.c \
    lpac/src/applet/notification.c \
    lpac/src/applet/profile.c \
    lpac/src/applet/version.c \
    \
    lpac/src/applet/chip/defaultsmdp.c \
    lpac/src/applet/chip/info.c \
    lpac/src/applet/chip/purge.c \
    \
    lpac/src/applet/notification/list.c \
    lpac/src/applet/notification/process.c \
    lpac/src/applet/notification/remove.c \
    \
    lpac/src/applet/profile/delete.c \
    lpac/src/applet/profile/disable.c \
    lpac/src/applet/profile/discovery.c \
    lpac/src/applet/profile/download.c \
    lpac/src/applet/profile/enable.c \
    lpac/src/applet/profile/list.c \
    lpac/src/applet/profile/nickname.c

LOCAL_C_INCLUDES += \
    $(LOCAL_PATH)/lpac \
    $(LOCAL_PATH)/lpac/driver \
    $(LOCAL_PATH)/lpac/src

#LOCAL_LDFLAGS := @jni/LDFLAGS.txt
LOCAL_STATIC_LIBRARIES := curl_static

ifeq ($(LPAC_WITH_APDU_AT),true)
    LOCAL_CFLAGS += -DLPAC_WITH_APDU_AT
    LOCAL_SRC_FILES += lpac/driver/apdu/at.c
endif
ifeq ($(LPAC_WITH_APDU_PCSC),true)
    LOCAL_CFLAGS += -DLPAC_WITH_APDU_PCSC
    LOCAL_SRC_FILES += lpac/driver/apdu/pcsc.c
    LOCAL_STATIC_LIBRARIES += libpcsclite
endif
ifeq ($(LPAC_WITH_APDU_GBINDER),true)
    LOCAL_CFLAGS += -DLPAC_WITH_APDU_GBINDER
    LOCAL_SRC_FILES += lpac/driver/apdu/gbinder_hidl.c
    LOCAL_STATIC_LIBRARIES += libgbinder
endif

include $(BUILD_EXECUTABLE)
##############################
ifeq ($(LPAC_WITH_APDU_PCSC),true)
    include $(COMMON_PARENT_DIR)/libpcsclite.mk
endif
ifeq ($(LPAC_WITH_APDU_GBINDER),true)
    include $(COMMON_PARENT_DIR)/libgbinder.mk
endif

$(call import-add-path,$(LOCAL_PATH))
$(call import-module,deps/curl_static)
