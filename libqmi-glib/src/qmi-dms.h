
/* GENERATED CODE... DO NOT EDIT */

/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2012 Lanedo GmbH
 * Copyright (C) 2012-2022 Aleksander Morgado <aleksander@aleksander.es>
 */


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

#include "qmi-enums.h"
#include "qmi-enums-dms.h"
#include "qmi-flags64-dms.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_DMS__
#define __LIBQMI_GLIB_QMI_DMS__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_DMS_RESET
#define HAVE_QMI_MESSAGE_DMS_SET_EVENT_REPORT
#define HAVE_QMI_MESSAGE_DMS_GET_CAPABILITIES
#define HAVE_QMI_MESSAGE_DMS_GET_MANUFACTURER
#define HAVE_QMI_MESSAGE_DMS_GET_MODEL
#define HAVE_QMI_MESSAGE_DMS_GET_REVISION
#define HAVE_QMI_MESSAGE_DMS_GET_MSISDN
#define HAVE_QMI_MESSAGE_DMS_GET_IDS
#define HAVE_QMI_MESSAGE_DMS_GET_POWER_STATE
#define HAVE_QMI_MESSAGE_DMS_UIM_SET_PIN_PROTECTION
#define HAVE_QMI_MESSAGE_DMS_UIM_VERIFY_PIN
#define HAVE_QMI_MESSAGE_DMS_UIM_UNBLOCK_PIN
#define HAVE_QMI_MESSAGE_DMS_UIM_CHANGE_PIN
#define HAVE_QMI_MESSAGE_DMS_UIM_GET_PIN_STATUS
#define HAVE_QMI_MESSAGE_DMS_GET_HARDWARE_REVISION
#define HAVE_QMI_MESSAGE_DMS_GET_OPERATING_MODE
#define HAVE_QMI_MESSAGE_DMS_SET_OPERATING_MODE
#define HAVE_QMI_MESSAGE_DMS_GET_TIME
#define HAVE_QMI_MESSAGE_DMS_GET_PRL_VERSION
#define HAVE_QMI_MESSAGE_DMS_GET_ACTIVATION_STATE
#define HAVE_QMI_MESSAGE_DMS_ACTIVATE_AUTOMATIC
#define HAVE_QMI_MESSAGE_DMS_ACTIVATE_MANUAL
#define HAVE_QMI_MESSAGE_DMS_GET_USER_LOCK_STATE
#define HAVE_QMI_MESSAGE_DMS_SET_USER_LOCK_STATE
#define HAVE_QMI_MESSAGE_DMS_SET_USER_LOCK_CODE
#define HAVE_QMI_MESSAGE_DMS_READ_USER_DATA
#define HAVE_QMI_MESSAGE_DMS_WRITE_USER_DATA
#define HAVE_QMI_MESSAGE_DMS_READ_ERI_FILE
#define HAVE_QMI_MESSAGE_DMS_RESTORE_FACTORY_DEFAULTS
#define HAVE_QMI_MESSAGE_DMS_VALIDATE_SERVICE_PROGRAMMING_CODE
#define HAVE_QMI_MESSAGE_DMS_UIM_GET_ICCID
#define HAVE_QMI_MESSAGE_DMS_SET_FIRMWARE_ID
#define HAVE_QMI_MESSAGE_DMS_UIM_GET_CK_STATUS
#define HAVE_QMI_MESSAGE_DMS_UIM_SET_CK_PROTECTION
#define HAVE_QMI_MESSAGE_DMS_UIM_UNBLOCK_CK
#define HAVE_QMI_MESSAGE_DMS_UIM_GET_IMSI
#define HAVE_QMI_MESSAGE_DMS_UIM_GET_STATE
#define HAVE_QMI_MESSAGE_DMS_GET_BAND_CAPABILITIES
#define HAVE_QMI_MESSAGE_DMS_GET_FACTORY_SKU
#define HAVE_QMI_MESSAGE_DMS_GET_FIRMWARE_PREFERENCE
#define HAVE_QMI_MESSAGE_DMS_SET_FIRMWARE_PREFERENCE
#define HAVE_QMI_MESSAGE_DMS_LIST_STORED_IMAGES
#define HAVE_QMI_MESSAGE_DMS_DELETE_STORED_IMAGE
#define HAVE_QMI_MESSAGE_DMS_SET_TIME
#define HAVE_QMI_MESSAGE_DMS_GET_STORED_IMAGE_INFO
#define HAVE_QMI_MESSAGE_DMS_GET_ALT_NET_CONFIG
#define HAVE_QMI_MESSAGE_DMS_SET_ALT_NET_CONFIG
#define HAVE_QMI_MESSAGE_DMS_GET_BOOT_IMAGE_DOWNLOAD_MODE
#define HAVE_QMI_MESSAGE_DMS_SET_BOOT_IMAGE_DOWNLOAD_MODE
#define HAVE_QMI_MESSAGE_DMS_GET_SOFTWARE_VERSION
#define HAVE_QMI_MESSAGE_DMS_SET_SERVICE_PROGRAMMING_CODE
#define HAVE_QMI_MESSAGE_DMS_GET_MAC_ADDRESS
#define HAVE_QMI_MESSAGE_DMS_GET_SUPPORTED_MESSAGES
#define HAVE_QMI_MESSAGE_DMS_HP_CHANGE_DEVICE_MODE
#define HAVE_QMI_MESSAGE_DMS_SWI_GET_CURRENT_FIRMWARE
#define HAVE_QMI_MESSAGE_DMS_SWI_GET_USB_COMPOSITION
#define HAVE_QMI_MESSAGE_DMS_SWI_SET_USB_COMPOSITION
#define HAVE_QMI_MESSAGE_DMS_FOXCONN_GET_FIRMWARE_VERSION
#define HAVE_QMI_MESSAGE_DMS_SET_FCC_AUTHENTICATION
#define HAVE_QMI_MESSAGE_DMS_FOXCONN_CHANGE_DEVICE_MODE
#define HAVE_QMI_MESSAGE_DMS_FOXCONN_SET_FCC_AUTHENTICATION
#define HAVE_QMI_MESSAGE_DMS_FOXCONN_SET_FCC_AUTHENTICATION_V2
#define HAVE_QMI_INDICATION_DMS_EVENT_REPORT

/*****************************************************************************/
/* INDICATION: Qmi Indication DMS Event Report */


/* --- Output -- */

/**
 * QmiIndicationDmsEventReportOutput:
 *
 * The #QmiIndicationDmsEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationDmsEventReportOutput QmiIndicationDmsEventReportOutput;
GType qmi_indication_dms_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_DMS_EVENT_REPORT_OUTPUT (qmi_indication_dms_event_report_output_get_type ())


/**
 * qmi_indication_dms_event_report_output_get_prl_init_notification:
 * @self: a #QmiIndicationDmsEventReportOutput.
 * @value_prl_init_notification: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PRL Init Notification' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_dms_event_report_output_get_prl_init_notification (
    QmiIndicationDmsEventReportOutput *self,
    gboolean *value_prl_init_notification,
    GError **error);


/**
 * qmi_indication_dms_event_report_output_get_wireless_disable_state:
 * @self: a #QmiIndicationDmsEventReportOutput.
 * @value_wireless_disable_state: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Wireless Disable State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_dms_event_report_output_get_wireless_disable_state (
    QmiIndicationDmsEventReportOutput *self,
    gboolean *value_wireless_disable_state,
    GError **error);


/**
 * qmi_indication_dms_event_report_output_get_uim_state:
 * @self: a #QmiIndicationDmsEventReportOutput.
 * @value_uim_state: (out)(optional): a placeholder for the output #QmiDmsUimState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UIM State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_dms_event_report_output_get_uim_state (
    QmiIndicationDmsEventReportOutput *self,
    QmiDmsUimState *value_uim_state,
    GError **error);


/**
 * qmi_indication_dms_event_report_output_get_operating_mode:
 * @self: a #QmiIndicationDmsEventReportOutput.
 * @value_operating_mode: (out)(optional): a placeholder for the output #QmiDmsOperatingMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operating Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_dms_event_report_output_get_operating_mode (
    QmiIndicationDmsEventReportOutput *self,
    QmiDmsOperatingMode *value_operating_mode,
    GError **error);


/**
 * qmi_indication_dms_event_report_output_get_activation_state:
 * @self: a #QmiIndicationDmsEventReportOutput.
 * @value_activation_state: (out)(optional): a placeholder for the output #QmiDmsActivationState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Activation State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_dms_event_report_output_get_activation_state (
    QmiIndicationDmsEventReportOutput *self,
    QmiDmsActivationState *value_activation_state,
    GError **error);


/**
 * qmi_indication_dms_event_report_output_get_pin2_status:
 * @self: a #QmiIndicationDmsEventReportOutput.
 * @value_pin2_status_current_status: (out)(optional): a placeholder for the output #QmiDmsUimPinStatus, or %NULL if not required.
 * @value_pin2_status_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_pin2_status_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PIN2 Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_dms_event_report_output_get_pin2_status (
    QmiIndicationDmsEventReportOutput *self,
    QmiDmsUimPinStatus *value_pin2_status_current_status,
    guint8 *value_pin2_status_verify_retries_left,
    guint8 *value_pin2_status_unblock_retries_left,
    GError **error);


/**
 * qmi_indication_dms_event_report_output_get_pin1_status:
 * @self: a #QmiIndicationDmsEventReportOutput.
 * @value_pin1_status_current_status: (out)(optional): a placeholder for the output #QmiDmsUimPinStatus, or %NULL if not required.
 * @value_pin1_status_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_pin1_status_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PIN1 Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_dms_event_report_output_get_pin1_status (
    QmiIndicationDmsEventReportOutput *self,
    QmiDmsUimPinStatus *value_pin1_status_current_status,
    guint8 *value_pin1_status_verify_retries_left,
    guint8 *value_pin1_status_unblock_retries_left,
    GError **error);


/**
 * qmi_indication_dms_event_report_output_get_power_state:
 * @self: a #QmiIndicationDmsEventReportOutput.
 * @value_power_state_power_state_flags: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_power_state_battery_level: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Power State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_dms_event_report_output_get_power_state (
    QmiIndicationDmsEventReportOutput *self,
    guint8 *value_power_state_power_state_flags,
    guint8 *value_power_state_battery_level,
    GError **error);


/**
 * qmi_indication_dms_event_report_output_ref:
 * @self: a #QmiIndicationDmsEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationDmsEventReportOutput *qmi_indication_dms_event_report_output_ref (QmiIndicationDmsEventReportOutput *self);

/**
 * qmi_indication_dms_event_report_output_unref:
 * @self: a #QmiIndicationDmsEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_dms_event_report_output_unref (QmiIndicationDmsEventReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationDmsEventReportOutput, qmi_indication_dms_event_report_output_unref)

/**
 * qmi_indication_dms_event_report_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationDmsEventReportOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationDmsEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_dms_event_report_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationDmsEventReportOutput *qmi_indication_dms_event_report_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsResetOutput:
 *
 * The #QmiMessageDmsResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsResetOutput QmiMessageDmsResetOutput;
GType qmi_message_dms_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_RESET_OUTPUT (qmi_message_dms_reset_output_get_type ())


/**
 * qmi_message_dms_reset_output_get_result:
 * @self: a QmiMessageDmsResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_reset_output_get_result (
    QmiMessageDmsResetOutput *self,
    GError **error);


/**
 * qmi_message_dms_reset_output_ref:
 * @self: a #QmiMessageDmsResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsResetOutput *qmi_message_dms_reset_output_ref (QmiMessageDmsResetOutput *self);

/**
 * qmi_message_dms_reset_output_unref:
 * @self: a #QmiMessageDmsResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_reset_output_unref (QmiMessageDmsResetOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsResetOutput, qmi_message_dms_reset_output_unref)

/**
 * qmi_message_dms_reset_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsResetOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_reset_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsResetOutput *qmi_message_dms_reset_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Set Event Report */


/* --- Input -- */

/**
 * QmiMessageDmsSetEventReportInput:
 *
 * The #QmiMessageDmsSetEventReportInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetEventReportInput QmiMessageDmsSetEventReportInput;
GType qmi_message_dms_set_event_report_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_EVENT_REPORT_INPUT (qmi_message_dms_set_event_report_input_get_type ())


/**
 * qmi_message_dms_set_event_report_input_get_prl_init_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_prl_init_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PRL Init Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_get_prl_init_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean *value_prl_init_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_set_prl_init_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_prl_init_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PRL Init Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_set_prl_init_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean value_prl_init_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_get_wireless_disable_state_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_wireless_disable_state_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Wireless Disable State Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_get_wireless_disable_state_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean *value_wireless_disable_state_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_set_wireless_disable_state_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_wireless_disable_state_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Wireless Disable State Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_set_wireless_disable_state_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean value_wireless_disable_state_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_get_uim_state_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_uim_state_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UIM State Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_get_uim_state_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean *value_uim_state_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_set_uim_state_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_uim_state_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UIM State Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_set_uim_state_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean value_uim_state_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_get_operating_mode_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_operating_mode_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operating Mode Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_get_operating_mode_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean *value_operating_mode_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_set_operating_mode_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_operating_mode_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Operating Mode Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_set_operating_mode_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean value_operating_mode_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_get_activation_state_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_activation_state_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Activation State Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_get_activation_state_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean *value_activation_state_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_set_activation_state_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_activation_state_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Activation State Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_set_activation_state_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean value_activation_state_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_get_pin_state_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_pin_state_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PIN State Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_get_pin_state_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean *value_pin_state_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_set_pin_state_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_pin_state_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PIN State Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_set_pin_state_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean value_pin_state_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_get_battery_level_report_limits:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_battery_level_report_limits_lower_limit: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_battery_level_report_limits_upper_limit: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Battery Level Report Limits' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_get_battery_level_report_limits (
    QmiMessageDmsSetEventReportInput *self,
    guint8 *value_battery_level_report_limits_lower_limit,
    guint8 *value_battery_level_report_limits_upper_limit,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_set_battery_level_report_limits:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_battery_level_report_limits_lower_limit: a #guint8.
 * @value_battery_level_report_limits_upper_limit: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Battery Level Report Limits' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_set_battery_level_report_limits (
    QmiMessageDmsSetEventReportInput *self,
    guint8 value_battery_level_report_limits_lower_limit,
    guint8 value_battery_level_report_limits_upper_limit,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_get_power_state_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_power_state_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Power State Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_get_power_state_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean *value_power_state_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_set_power_state_reporting:
 * @self: a #QmiMessageDmsSetEventReportInput.
 * @value_power_state_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Power State Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_input_set_power_state_reporting (
    QmiMessageDmsSetEventReportInput *self,
    gboolean value_power_state_reporting,
    GError **error);


/**
 * qmi_message_dms_set_event_report_input_ref:
 * @self: a #QmiMessageDmsSetEventReportInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetEventReportInput *qmi_message_dms_set_event_report_input_ref (QmiMessageDmsSetEventReportInput *self);

/**
 * qmi_message_dms_set_event_report_input_unref:
 * @self: a #QmiMessageDmsSetEventReportInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_event_report_input_unref (QmiMessageDmsSetEventReportInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetEventReportInput, qmi_message_dms_set_event_report_input_unref)

/**
 * qmi_message_dms_set_event_report_input_new:
 *
 * Allocates a new #QmiMessageDmsSetEventReportInput.
 *
 * Returns: the newly created #QmiMessageDmsSetEventReportInput. The returned value should be freed with qmi_message_dms_set_event_report_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetEventReportInput *qmi_message_dms_set_event_report_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsSetEventReportOutput:
 *
 * The #QmiMessageDmsSetEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetEventReportOutput QmiMessageDmsSetEventReportOutput;
GType qmi_message_dms_set_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_EVENT_REPORT_OUTPUT (qmi_message_dms_set_event_report_output_get_type ())


/**
 * qmi_message_dms_set_event_report_output_get_result:
 * @self: a QmiMessageDmsSetEventReportOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_event_report_output_get_result (
    QmiMessageDmsSetEventReportOutput *self,
    GError **error);


/**
 * qmi_message_dms_set_event_report_output_ref:
 * @self: a #QmiMessageDmsSetEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetEventReportOutput *qmi_message_dms_set_event_report_output_ref (QmiMessageDmsSetEventReportOutput *self);

/**
 * qmi_message_dms_set_event_report_output_unref:
 * @self: a #QmiMessageDmsSetEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_event_report_output_unref (QmiMessageDmsSetEventReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetEventReportOutput, qmi_message_dms_set_event_report_output_unref)

/**
 * qmi_message_dms_set_event_report_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSetEventReportOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_event_report_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSetEventReportOutput *qmi_message_dms_set_event_report_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Capabilities */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetCapabilitiesOutput:
 *
 * The #QmiMessageDmsGetCapabilitiesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetCapabilitiesOutput QmiMessageDmsGetCapabilitiesOutput;
GType qmi_message_dms_get_capabilities_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_CAPABILITIES_OUTPUT (qmi_message_dms_get_capabilities_output_get_type ())


/**
 * qmi_message_dms_get_capabilities_output_get_result:
 * @self: a QmiMessageDmsGetCapabilitiesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_capabilities_output_get_result (
    QmiMessageDmsGetCapabilitiesOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_capabilities_output_get_info:
 * @self: a #QmiMessageDmsGetCapabilitiesOutput.
 * @value_info_max_tx_channel_rate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_info_max_rx_channel_rate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_info_data_service_capability: (out)(optional): a placeholder for the output #QmiDmsDataServiceCapability, or %NULL if not required.
 * @value_info_sim_capability: (out)(optional): a placeholder for the output #QmiDmsSimCapability, or %NULL if not required.
 * @value_info_radio_interface_list: (out)(optional)(element-type QmiDmsRadioInterface)(transfer none): a placeholder for the output #GArray of #QmiDmsRadioInterface elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_capabilities_output_get_info (
    QmiMessageDmsGetCapabilitiesOutput *self,
    guint32 *value_info_max_tx_channel_rate,
    guint32 *value_info_max_rx_channel_rate,
    QmiDmsDataServiceCapability *value_info_data_service_capability,
    QmiDmsSimCapability *value_info_sim_capability,
    GArray **value_info_radio_interface_list,
    GError **error);


/**
 * qmi_message_dms_get_capabilities_output_ref:
 * @self: a #QmiMessageDmsGetCapabilitiesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetCapabilitiesOutput *qmi_message_dms_get_capabilities_output_ref (QmiMessageDmsGetCapabilitiesOutput *self);

/**
 * qmi_message_dms_get_capabilities_output_unref:
 * @self: a #QmiMessageDmsGetCapabilitiesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_capabilities_output_unref (QmiMessageDmsGetCapabilitiesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetCapabilitiesOutput, qmi_message_dms_get_capabilities_output_unref)

/**
 * qmi_message_dms_get_capabilities_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetCapabilitiesOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetCapabilitiesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_capabilities_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetCapabilitiesOutput *qmi_message_dms_get_capabilities_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Manufacturer */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetManufacturerOutput:
 *
 * The #QmiMessageDmsGetManufacturerOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetManufacturerOutput QmiMessageDmsGetManufacturerOutput;
GType qmi_message_dms_get_manufacturer_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_MANUFACTURER_OUTPUT (qmi_message_dms_get_manufacturer_output_get_type ())


/**
 * qmi_message_dms_get_manufacturer_output_get_result:
 * @self: a QmiMessageDmsGetManufacturerOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_manufacturer_output_get_result (
    QmiMessageDmsGetManufacturerOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_manufacturer_output_get_manufacturer:
 * @self: a #QmiMessageDmsGetManufacturerOutput.
 * @value_manufacturer: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Manufacturer' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_manufacturer_output_get_manufacturer (
    QmiMessageDmsGetManufacturerOutput *self,
    const gchar **value_manufacturer,
    GError **error);


/**
 * qmi_message_dms_get_manufacturer_output_ref:
 * @self: a #QmiMessageDmsGetManufacturerOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetManufacturerOutput *qmi_message_dms_get_manufacturer_output_ref (QmiMessageDmsGetManufacturerOutput *self);

/**
 * qmi_message_dms_get_manufacturer_output_unref:
 * @self: a #QmiMessageDmsGetManufacturerOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_manufacturer_output_unref (QmiMessageDmsGetManufacturerOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetManufacturerOutput, qmi_message_dms_get_manufacturer_output_unref)

/**
 * qmi_message_dms_get_manufacturer_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetManufacturerOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetManufacturerOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_manufacturer_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetManufacturerOutput *qmi_message_dms_get_manufacturer_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Model */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetModelOutput:
 *
 * The #QmiMessageDmsGetModelOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetModelOutput QmiMessageDmsGetModelOutput;
GType qmi_message_dms_get_model_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_MODEL_OUTPUT (qmi_message_dms_get_model_output_get_type ())


/**
 * qmi_message_dms_get_model_output_get_result:
 * @self: a QmiMessageDmsGetModelOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_model_output_get_result (
    QmiMessageDmsGetModelOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_model_output_get_model:
 * @self: a #QmiMessageDmsGetModelOutput.
 * @value_model: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Model' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_model_output_get_model (
    QmiMessageDmsGetModelOutput *self,
    const gchar **value_model,
    GError **error);


/**
 * qmi_message_dms_get_model_output_ref:
 * @self: a #QmiMessageDmsGetModelOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetModelOutput *qmi_message_dms_get_model_output_ref (QmiMessageDmsGetModelOutput *self);

/**
 * qmi_message_dms_get_model_output_unref:
 * @self: a #QmiMessageDmsGetModelOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_model_output_unref (QmiMessageDmsGetModelOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetModelOutput, qmi_message_dms_get_model_output_unref)

/**
 * qmi_message_dms_get_model_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetModelOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetModelOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_model_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetModelOutput *qmi_message_dms_get_model_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Revision */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetRevisionOutput:
 *
 * The #QmiMessageDmsGetRevisionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetRevisionOutput QmiMessageDmsGetRevisionOutput;
GType qmi_message_dms_get_revision_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_REVISION_OUTPUT (qmi_message_dms_get_revision_output_get_type ())


/**
 * qmi_message_dms_get_revision_output_get_result:
 * @self: a QmiMessageDmsGetRevisionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_revision_output_get_result (
    QmiMessageDmsGetRevisionOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_revision_output_get_revision:
 * @self: a #QmiMessageDmsGetRevisionOutput.
 * @value_revision: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Revision' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_revision_output_get_revision (
    QmiMessageDmsGetRevisionOutput *self,
    const gchar **value_revision,
    GError **error);


/**
 * qmi_message_dms_get_revision_output_ref:
 * @self: a #QmiMessageDmsGetRevisionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetRevisionOutput *qmi_message_dms_get_revision_output_ref (QmiMessageDmsGetRevisionOutput *self);

/**
 * qmi_message_dms_get_revision_output_unref:
 * @self: a #QmiMessageDmsGetRevisionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_revision_output_unref (QmiMessageDmsGetRevisionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetRevisionOutput, qmi_message_dms_get_revision_output_unref)

/**
 * qmi_message_dms_get_revision_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetRevisionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetRevisionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_revision_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetRevisionOutput *qmi_message_dms_get_revision_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get MSISDN */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetMsisdnOutput:
 *
 * The #QmiMessageDmsGetMsisdnOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetMsisdnOutput QmiMessageDmsGetMsisdnOutput;
GType qmi_message_dms_get_msisdn_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_MSISDN_OUTPUT (qmi_message_dms_get_msisdn_output_get_type ())


/**
 * qmi_message_dms_get_msisdn_output_get_result:
 * @self: a QmiMessageDmsGetMsisdnOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_msisdn_output_get_result (
    QmiMessageDmsGetMsisdnOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_msisdn_output_get_msisdn:
 * @self: a #QmiMessageDmsGetMsisdnOutput.
 * @value_msisdn: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MSISDN' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_msisdn_output_get_msisdn (
    QmiMessageDmsGetMsisdnOutput *self,
    const gchar **value_msisdn,
    GError **error);


/**
 * qmi_message_dms_get_msisdn_output_ref:
 * @self: a #QmiMessageDmsGetMsisdnOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetMsisdnOutput *qmi_message_dms_get_msisdn_output_ref (QmiMessageDmsGetMsisdnOutput *self);

/**
 * qmi_message_dms_get_msisdn_output_unref:
 * @self: a #QmiMessageDmsGetMsisdnOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_msisdn_output_unref (QmiMessageDmsGetMsisdnOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetMsisdnOutput, qmi_message_dms_get_msisdn_output_unref)

/**
 * qmi_message_dms_get_msisdn_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetMsisdnOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetMsisdnOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_msisdn_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetMsisdnOutput *qmi_message_dms_get_msisdn_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get IDs */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetIdsOutput:
 *
 * The #QmiMessageDmsGetIdsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetIdsOutput QmiMessageDmsGetIdsOutput;
GType qmi_message_dms_get_ids_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_IDS_OUTPUT (qmi_message_dms_get_ids_output_get_type ())


/**
 * qmi_message_dms_get_ids_output_get_result:
 * @self: a QmiMessageDmsGetIdsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_ids_output_get_result (
    QmiMessageDmsGetIdsOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_ids_output_get_esn:
 * @self: a #QmiMessageDmsGetIdsOutput.
 * @value_esn: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Esn' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_ids_output_get_esn (
    QmiMessageDmsGetIdsOutput *self,
    const gchar **value_esn,
    GError **error);


/**
 * qmi_message_dms_get_ids_output_get_imei:
 * @self: a #QmiMessageDmsGetIdsOutput.
 * @value_imei: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Imei' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_ids_output_get_imei (
    QmiMessageDmsGetIdsOutput *self,
    const gchar **value_imei,
    GError **error);


/**
 * qmi_message_dms_get_ids_output_get_meid:
 * @self: a #QmiMessageDmsGetIdsOutput.
 * @value_meid: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Meid' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_ids_output_get_meid (
    QmiMessageDmsGetIdsOutput *self,
    const gchar **value_meid,
    GError **error);


/**
 * qmi_message_dms_get_ids_output_get_imei_software_version:
 * @self: a #QmiMessageDmsGetIdsOutput.
 * @value_imei_software_version: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Imei Software Version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_ids_output_get_imei_software_version (
    QmiMessageDmsGetIdsOutput *self,
    const gchar **value_imei_software_version,
    GError **error);


/**
 * qmi_message_dms_get_ids_output_ref:
 * @self: a #QmiMessageDmsGetIdsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetIdsOutput *qmi_message_dms_get_ids_output_ref (QmiMessageDmsGetIdsOutput *self);

/**
 * qmi_message_dms_get_ids_output_unref:
 * @self: a #QmiMessageDmsGetIdsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_ids_output_unref (QmiMessageDmsGetIdsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetIdsOutput, qmi_message_dms_get_ids_output_unref)

/**
 * qmi_message_dms_get_ids_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetIdsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetIdsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_ids_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetIdsOutput *qmi_message_dms_get_ids_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Power State */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetPowerStateOutput:
 *
 * The #QmiMessageDmsGetPowerStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetPowerStateOutput QmiMessageDmsGetPowerStateOutput;
GType qmi_message_dms_get_power_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_POWER_STATE_OUTPUT (qmi_message_dms_get_power_state_output_get_type ())


/**
 * qmi_message_dms_get_power_state_output_get_result:
 * @self: a QmiMessageDmsGetPowerStateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_power_state_output_get_result (
    QmiMessageDmsGetPowerStateOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_power_state_output_get_info:
 * @self: a #QmiMessageDmsGetPowerStateOutput.
 * @value_info_power_state_flags: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_info_battery_level: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_power_state_output_get_info (
    QmiMessageDmsGetPowerStateOutput *self,
    guint8 *value_info_power_state_flags,
    guint8 *value_info_battery_level,
    GError **error);


/**
 * qmi_message_dms_get_power_state_output_ref:
 * @self: a #QmiMessageDmsGetPowerStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetPowerStateOutput *qmi_message_dms_get_power_state_output_ref (QmiMessageDmsGetPowerStateOutput *self);

/**
 * qmi_message_dms_get_power_state_output_unref:
 * @self: a #QmiMessageDmsGetPowerStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_power_state_output_unref (QmiMessageDmsGetPowerStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetPowerStateOutput, qmi_message_dms_get_power_state_output_unref)

/**
 * qmi_message_dms_get_power_state_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetPowerStateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetPowerStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_power_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetPowerStateOutput *qmi_message_dms_get_power_state_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS UIM Set PIN Protection */


/* --- Input -- */

/**
 * QmiMessageDmsUimSetPinProtectionInput:
 *
 * The #QmiMessageDmsUimSetPinProtectionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimSetPinProtectionInput QmiMessageDmsUimSetPinProtectionInput;
GType qmi_message_dms_uim_set_pin_protection_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_SET_PIN_PROTECTION_INPUT (qmi_message_dms_uim_set_pin_protection_input_get_type ())


/**
 * qmi_message_dms_uim_set_pin_protection_input_get_info:
 * @self: a #QmiMessageDmsUimSetPinProtectionInput.
 * @value_info_pin_id: (out)(optional): a placeholder for the output #QmiDmsUimPinId, or %NULL if not required.
 * @value_info_protection_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_info_pin: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_set_pin_protection_input_get_info (
    QmiMessageDmsUimSetPinProtectionInput *self,
    QmiDmsUimPinId *value_info_pin_id,
    gboolean *value_info_protection_enabled,
    const gchar **value_info_pin,
    GError **error);


/**
 * qmi_message_dms_uim_set_pin_protection_input_set_info:
 * @self: a #QmiMessageDmsUimSetPinProtectionInput.
 * @value_info_pin_id: a #QmiDmsUimPinId.
 * @value_info_protection_enabled: a #gboolean.
 * @value_info_pin: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_set_pin_protection_input_set_info (
    QmiMessageDmsUimSetPinProtectionInput *self,
    QmiDmsUimPinId value_info_pin_id,
    gboolean value_info_protection_enabled,
    const gchar *value_info_pin,
    GError **error);


/**
 * qmi_message_dms_uim_set_pin_protection_input_ref:
 * @self: a #QmiMessageDmsUimSetPinProtectionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimSetPinProtectionInput *qmi_message_dms_uim_set_pin_protection_input_ref (QmiMessageDmsUimSetPinProtectionInput *self);

/**
 * qmi_message_dms_uim_set_pin_protection_input_unref:
 * @self: a #QmiMessageDmsUimSetPinProtectionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_set_pin_protection_input_unref (QmiMessageDmsUimSetPinProtectionInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimSetPinProtectionInput, qmi_message_dms_uim_set_pin_protection_input_unref)

/**
 * qmi_message_dms_uim_set_pin_protection_input_new:
 *
 * Allocates a new #QmiMessageDmsUimSetPinProtectionInput.
 *
 * Returns: the newly created #QmiMessageDmsUimSetPinProtectionInput. The returned value should be freed with qmi_message_dms_uim_set_pin_protection_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimSetPinProtectionInput *qmi_message_dms_uim_set_pin_protection_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsUimSetPinProtectionOutput:
 *
 * The #QmiMessageDmsUimSetPinProtectionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimSetPinProtectionOutput QmiMessageDmsUimSetPinProtectionOutput;
GType qmi_message_dms_uim_set_pin_protection_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_SET_PIN_PROTECTION_OUTPUT (qmi_message_dms_uim_set_pin_protection_output_get_type ())


/**
 * qmi_message_dms_uim_set_pin_protection_output_get_result:
 * @self: a QmiMessageDmsUimSetPinProtectionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_set_pin_protection_output_get_result (
    QmiMessageDmsUimSetPinProtectionOutput *self,
    GError **error);


/**
 * qmi_message_dms_uim_set_pin_protection_output_get_pin_retries_status:
 * @self: a #QmiMessageDmsUimSetPinProtectionOutput.
 * @value_pin_retries_status_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_pin_retries_status_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Pin Retries Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_set_pin_protection_output_get_pin_retries_status (
    QmiMessageDmsUimSetPinProtectionOutput *self,
    guint8 *value_pin_retries_status_verify_retries_left,
    guint8 *value_pin_retries_status_unblock_retries_left,
    GError **error);


/**
 * qmi_message_dms_uim_set_pin_protection_output_ref:
 * @self: a #QmiMessageDmsUimSetPinProtectionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimSetPinProtectionOutput *qmi_message_dms_uim_set_pin_protection_output_ref (QmiMessageDmsUimSetPinProtectionOutput *self);

/**
 * qmi_message_dms_uim_set_pin_protection_output_unref:
 * @self: a #QmiMessageDmsUimSetPinProtectionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_set_pin_protection_output_unref (QmiMessageDmsUimSetPinProtectionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimSetPinProtectionOutput, qmi_message_dms_uim_set_pin_protection_output_unref)

/**
 * qmi_message_dms_uim_set_pin_protection_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsUimSetPinProtectionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsUimSetPinProtectionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_set_pin_protection_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsUimSetPinProtectionOutput *qmi_message_dms_uim_set_pin_protection_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS UIM Verify PIN */


/* --- Input -- */

/**
 * QmiMessageDmsUimVerifyPinInput:
 *
 * The #QmiMessageDmsUimVerifyPinInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimVerifyPinInput QmiMessageDmsUimVerifyPinInput;
GType qmi_message_dms_uim_verify_pin_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_VERIFY_PIN_INPUT (qmi_message_dms_uim_verify_pin_input_get_type ())


/**
 * qmi_message_dms_uim_verify_pin_input_get_info:
 * @self: a #QmiMessageDmsUimVerifyPinInput.
 * @value_info_pin_id: (out)(optional): a placeholder for the output #QmiDmsUimPinId, or %NULL if not required.
 * @value_info_pin: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_verify_pin_input_get_info (
    QmiMessageDmsUimVerifyPinInput *self,
    QmiDmsUimPinId *value_info_pin_id,
    const gchar **value_info_pin,
    GError **error);


/**
 * qmi_message_dms_uim_verify_pin_input_set_info:
 * @self: a #QmiMessageDmsUimVerifyPinInput.
 * @value_info_pin_id: a #QmiDmsUimPinId.
 * @value_info_pin: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_verify_pin_input_set_info (
    QmiMessageDmsUimVerifyPinInput *self,
    QmiDmsUimPinId value_info_pin_id,
    const gchar *value_info_pin,
    GError **error);


/**
 * qmi_message_dms_uim_verify_pin_input_ref:
 * @self: a #QmiMessageDmsUimVerifyPinInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimVerifyPinInput *qmi_message_dms_uim_verify_pin_input_ref (QmiMessageDmsUimVerifyPinInput *self);

/**
 * qmi_message_dms_uim_verify_pin_input_unref:
 * @self: a #QmiMessageDmsUimVerifyPinInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_verify_pin_input_unref (QmiMessageDmsUimVerifyPinInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimVerifyPinInput, qmi_message_dms_uim_verify_pin_input_unref)

/**
 * qmi_message_dms_uim_verify_pin_input_new:
 *
 * Allocates a new #QmiMessageDmsUimVerifyPinInput.
 *
 * Returns: the newly created #QmiMessageDmsUimVerifyPinInput. The returned value should be freed with qmi_message_dms_uim_verify_pin_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimVerifyPinInput *qmi_message_dms_uim_verify_pin_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsUimVerifyPinOutput:
 *
 * The #QmiMessageDmsUimVerifyPinOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimVerifyPinOutput QmiMessageDmsUimVerifyPinOutput;
GType qmi_message_dms_uim_verify_pin_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_VERIFY_PIN_OUTPUT (qmi_message_dms_uim_verify_pin_output_get_type ())


/**
 * qmi_message_dms_uim_verify_pin_output_get_result:
 * @self: a QmiMessageDmsUimVerifyPinOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_verify_pin_output_get_result (
    QmiMessageDmsUimVerifyPinOutput *self,
    GError **error);


/**
 * qmi_message_dms_uim_verify_pin_output_get_pin_retries_status:
 * @self: a #QmiMessageDmsUimVerifyPinOutput.
 * @value_pin_retries_status_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_pin_retries_status_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Pin Retries Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_verify_pin_output_get_pin_retries_status (
    QmiMessageDmsUimVerifyPinOutput *self,
    guint8 *value_pin_retries_status_verify_retries_left,
    guint8 *value_pin_retries_status_unblock_retries_left,
    GError **error);


/**
 * qmi_message_dms_uim_verify_pin_output_ref:
 * @self: a #QmiMessageDmsUimVerifyPinOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimVerifyPinOutput *qmi_message_dms_uim_verify_pin_output_ref (QmiMessageDmsUimVerifyPinOutput *self);

/**
 * qmi_message_dms_uim_verify_pin_output_unref:
 * @self: a #QmiMessageDmsUimVerifyPinOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_verify_pin_output_unref (QmiMessageDmsUimVerifyPinOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimVerifyPinOutput, qmi_message_dms_uim_verify_pin_output_unref)

/**
 * qmi_message_dms_uim_verify_pin_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsUimVerifyPinOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsUimVerifyPinOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_verify_pin_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsUimVerifyPinOutput *qmi_message_dms_uim_verify_pin_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS UIM Unblock PIN */


/* --- Input -- */

/**
 * QmiMessageDmsUimUnblockPinInput:
 *
 * The #QmiMessageDmsUimUnblockPinInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimUnblockPinInput QmiMessageDmsUimUnblockPinInput;
GType qmi_message_dms_uim_unblock_pin_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_UNBLOCK_PIN_INPUT (qmi_message_dms_uim_unblock_pin_input_get_type ())


/**
 * qmi_message_dms_uim_unblock_pin_input_get_info:
 * @self: a #QmiMessageDmsUimUnblockPinInput.
 * @value_info_pin_id: (out)(optional): a placeholder for the output #QmiDmsUimPinId, or %NULL if not required.
 * @value_info_puk: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_info_new_pin: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_unblock_pin_input_get_info (
    QmiMessageDmsUimUnblockPinInput *self,
    QmiDmsUimPinId *value_info_pin_id,
    const gchar **value_info_puk,
    const gchar **value_info_new_pin,
    GError **error);


/**
 * qmi_message_dms_uim_unblock_pin_input_set_info:
 * @self: a #QmiMessageDmsUimUnblockPinInput.
 * @value_info_pin_id: a #QmiDmsUimPinId.
 * @value_info_puk: a constant string.
 * @value_info_new_pin: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_unblock_pin_input_set_info (
    QmiMessageDmsUimUnblockPinInput *self,
    QmiDmsUimPinId value_info_pin_id,
    const gchar *value_info_puk,
    const gchar *value_info_new_pin,
    GError **error);


/**
 * qmi_message_dms_uim_unblock_pin_input_ref:
 * @self: a #QmiMessageDmsUimUnblockPinInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimUnblockPinInput *qmi_message_dms_uim_unblock_pin_input_ref (QmiMessageDmsUimUnblockPinInput *self);

/**
 * qmi_message_dms_uim_unblock_pin_input_unref:
 * @self: a #QmiMessageDmsUimUnblockPinInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_unblock_pin_input_unref (QmiMessageDmsUimUnblockPinInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimUnblockPinInput, qmi_message_dms_uim_unblock_pin_input_unref)

/**
 * qmi_message_dms_uim_unblock_pin_input_new:
 *
 * Allocates a new #QmiMessageDmsUimUnblockPinInput.
 *
 * Returns: the newly created #QmiMessageDmsUimUnblockPinInput. The returned value should be freed with qmi_message_dms_uim_unblock_pin_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimUnblockPinInput *qmi_message_dms_uim_unblock_pin_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsUimUnblockPinOutput:
 *
 * The #QmiMessageDmsUimUnblockPinOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimUnblockPinOutput QmiMessageDmsUimUnblockPinOutput;
GType qmi_message_dms_uim_unblock_pin_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_UNBLOCK_PIN_OUTPUT (qmi_message_dms_uim_unblock_pin_output_get_type ())


/**
 * qmi_message_dms_uim_unblock_pin_output_get_result:
 * @self: a QmiMessageDmsUimUnblockPinOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_unblock_pin_output_get_result (
    QmiMessageDmsUimUnblockPinOutput *self,
    GError **error);


/**
 * qmi_message_dms_uim_unblock_pin_output_get_pin_retries_status:
 * @self: a #QmiMessageDmsUimUnblockPinOutput.
 * @value_pin_retries_status_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_pin_retries_status_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Pin Retries Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_unblock_pin_output_get_pin_retries_status (
    QmiMessageDmsUimUnblockPinOutput *self,
    guint8 *value_pin_retries_status_verify_retries_left,
    guint8 *value_pin_retries_status_unblock_retries_left,
    GError **error);


/**
 * qmi_message_dms_uim_unblock_pin_output_ref:
 * @self: a #QmiMessageDmsUimUnblockPinOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimUnblockPinOutput *qmi_message_dms_uim_unblock_pin_output_ref (QmiMessageDmsUimUnblockPinOutput *self);

/**
 * qmi_message_dms_uim_unblock_pin_output_unref:
 * @self: a #QmiMessageDmsUimUnblockPinOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_unblock_pin_output_unref (QmiMessageDmsUimUnblockPinOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimUnblockPinOutput, qmi_message_dms_uim_unblock_pin_output_unref)

/**
 * qmi_message_dms_uim_unblock_pin_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsUimUnblockPinOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsUimUnblockPinOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_unblock_pin_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsUimUnblockPinOutput *qmi_message_dms_uim_unblock_pin_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS UIM Change PIN */


/* --- Input -- */

/**
 * QmiMessageDmsUimChangePinInput:
 *
 * The #QmiMessageDmsUimChangePinInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimChangePinInput QmiMessageDmsUimChangePinInput;
GType qmi_message_dms_uim_change_pin_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_CHANGE_PIN_INPUT (qmi_message_dms_uim_change_pin_input_get_type ())


/**
 * qmi_message_dms_uim_change_pin_input_get_info:
 * @self: a #QmiMessageDmsUimChangePinInput.
 * @value_info_pin_id: (out)(optional): a placeholder for the output #QmiDmsUimPinId, or %NULL if not required.
 * @value_info_old_pin: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_info_new_pin: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_change_pin_input_get_info (
    QmiMessageDmsUimChangePinInput *self,
    QmiDmsUimPinId *value_info_pin_id,
    const gchar **value_info_old_pin,
    const gchar **value_info_new_pin,
    GError **error);


/**
 * qmi_message_dms_uim_change_pin_input_set_info:
 * @self: a #QmiMessageDmsUimChangePinInput.
 * @value_info_pin_id: a #QmiDmsUimPinId.
 * @value_info_old_pin: a constant string.
 * @value_info_new_pin: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_change_pin_input_set_info (
    QmiMessageDmsUimChangePinInput *self,
    QmiDmsUimPinId value_info_pin_id,
    const gchar *value_info_old_pin,
    const gchar *value_info_new_pin,
    GError **error);


/**
 * qmi_message_dms_uim_change_pin_input_ref:
 * @self: a #QmiMessageDmsUimChangePinInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimChangePinInput *qmi_message_dms_uim_change_pin_input_ref (QmiMessageDmsUimChangePinInput *self);

/**
 * qmi_message_dms_uim_change_pin_input_unref:
 * @self: a #QmiMessageDmsUimChangePinInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_change_pin_input_unref (QmiMessageDmsUimChangePinInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimChangePinInput, qmi_message_dms_uim_change_pin_input_unref)

/**
 * qmi_message_dms_uim_change_pin_input_new:
 *
 * Allocates a new #QmiMessageDmsUimChangePinInput.
 *
 * Returns: the newly created #QmiMessageDmsUimChangePinInput. The returned value should be freed with qmi_message_dms_uim_change_pin_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimChangePinInput *qmi_message_dms_uim_change_pin_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsUimChangePinOutput:
 *
 * The #QmiMessageDmsUimChangePinOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimChangePinOutput QmiMessageDmsUimChangePinOutput;
GType qmi_message_dms_uim_change_pin_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_CHANGE_PIN_OUTPUT (qmi_message_dms_uim_change_pin_output_get_type ())


/**
 * qmi_message_dms_uim_change_pin_output_get_result:
 * @self: a QmiMessageDmsUimChangePinOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_change_pin_output_get_result (
    QmiMessageDmsUimChangePinOutput *self,
    GError **error);


/**
 * qmi_message_dms_uim_change_pin_output_get_pin_retries_status:
 * @self: a #QmiMessageDmsUimChangePinOutput.
 * @value_pin_retries_status_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_pin_retries_status_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Pin Retries Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_change_pin_output_get_pin_retries_status (
    QmiMessageDmsUimChangePinOutput *self,
    guint8 *value_pin_retries_status_verify_retries_left,
    guint8 *value_pin_retries_status_unblock_retries_left,
    GError **error);


/**
 * qmi_message_dms_uim_change_pin_output_ref:
 * @self: a #QmiMessageDmsUimChangePinOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimChangePinOutput *qmi_message_dms_uim_change_pin_output_ref (QmiMessageDmsUimChangePinOutput *self);

/**
 * qmi_message_dms_uim_change_pin_output_unref:
 * @self: a #QmiMessageDmsUimChangePinOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_change_pin_output_unref (QmiMessageDmsUimChangePinOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimChangePinOutput, qmi_message_dms_uim_change_pin_output_unref)

/**
 * qmi_message_dms_uim_change_pin_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsUimChangePinOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsUimChangePinOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_change_pin_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsUimChangePinOutput *qmi_message_dms_uim_change_pin_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS UIM Get PIN Status */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsUimGetPinStatusOutput:
 *
 * The #QmiMessageDmsUimGetPinStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimGetPinStatusOutput QmiMessageDmsUimGetPinStatusOutput;
GType qmi_message_dms_uim_get_pin_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_GET_PIN_STATUS_OUTPUT (qmi_message_dms_uim_get_pin_status_output_get_type ())


/**
 * qmi_message_dms_uim_get_pin_status_output_get_pin2_status:
 * @self: a #QmiMessageDmsUimGetPinStatusOutput.
 * @value_pin2_status_current_status: (out)(optional): a placeholder for the output #QmiDmsUimPinStatus, or %NULL if not required.
 * @value_pin2_status_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_pin2_status_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PIN2 Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_pin_status_output_get_pin2_status (
    QmiMessageDmsUimGetPinStatusOutput *self,
    QmiDmsUimPinStatus *value_pin2_status_current_status,
    guint8 *value_pin2_status_verify_retries_left,
    guint8 *value_pin2_status_unblock_retries_left,
    GError **error);


/**
 * qmi_message_dms_uim_get_pin_status_output_get_pin1_status:
 * @self: a #QmiMessageDmsUimGetPinStatusOutput.
 * @value_pin1_status_current_status: (out)(optional): a placeholder for the output #QmiDmsUimPinStatus, or %NULL if not required.
 * @value_pin1_status_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_pin1_status_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PIN1 Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_pin_status_output_get_pin1_status (
    QmiMessageDmsUimGetPinStatusOutput *self,
    QmiDmsUimPinStatus *value_pin1_status_current_status,
    guint8 *value_pin1_status_verify_retries_left,
    guint8 *value_pin1_status_unblock_retries_left,
    GError **error);


/**
 * qmi_message_dms_uim_get_pin_status_output_get_result:
 * @self: a QmiMessageDmsUimGetPinStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_pin_status_output_get_result (
    QmiMessageDmsUimGetPinStatusOutput *self,
    GError **error);


/**
 * qmi_message_dms_uim_get_pin_status_output_ref:
 * @self: a #QmiMessageDmsUimGetPinStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimGetPinStatusOutput *qmi_message_dms_uim_get_pin_status_output_ref (QmiMessageDmsUimGetPinStatusOutput *self);

/**
 * qmi_message_dms_uim_get_pin_status_output_unref:
 * @self: a #QmiMessageDmsUimGetPinStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_get_pin_status_output_unref (QmiMessageDmsUimGetPinStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimGetPinStatusOutput, qmi_message_dms_uim_get_pin_status_output_unref)

/**
 * qmi_message_dms_uim_get_pin_status_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsUimGetPinStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsUimGetPinStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_get_pin_status_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsUimGetPinStatusOutput *qmi_message_dms_uim_get_pin_status_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Hardware Revision */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetHardwareRevisionOutput:
 *
 * The #QmiMessageDmsGetHardwareRevisionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetHardwareRevisionOutput QmiMessageDmsGetHardwareRevisionOutput;
GType qmi_message_dms_get_hardware_revision_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_HARDWARE_REVISION_OUTPUT (qmi_message_dms_get_hardware_revision_output_get_type ())


/**
 * qmi_message_dms_get_hardware_revision_output_get_result:
 * @self: a QmiMessageDmsGetHardwareRevisionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_hardware_revision_output_get_result (
    QmiMessageDmsGetHardwareRevisionOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_hardware_revision_output_get_revision:
 * @self: a #QmiMessageDmsGetHardwareRevisionOutput.
 * @value_revision: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Revision' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_hardware_revision_output_get_revision (
    QmiMessageDmsGetHardwareRevisionOutput *self,
    const gchar **value_revision,
    GError **error);


/**
 * qmi_message_dms_get_hardware_revision_output_ref:
 * @self: a #QmiMessageDmsGetHardwareRevisionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetHardwareRevisionOutput *qmi_message_dms_get_hardware_revision_output_ref (QmiMessageDmsGetHardwareRevisionOutput *self);

/**
 * qmi_message_dms_get_hardware_revision_output_unref:
 * @self: a #QmiMessageDmsGetHardwareRevisionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_hardware_revision_output_unref (QmiMessageDmsGetHardwareRevisionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetHardwareRevisionOutput, qmi_message_dms_get_hardware_revision_output_unref)

/**
 * qmi_message_dms_get_hardware_revision_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetHardwareRevisionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetHardwareRevisionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_hardware_revision_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetHardwareRevisionOutput *qmi_message_dms_get_hardware_revision_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Operating Mode */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetOperatingModeOutput:
 *
 * The #QmiMessageDmsGetOperatingModeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetOperatingModeOutput QmiMessageDmsGetOperatingModeOutput;
GType qmi_message_dms_get_operating_mode_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_OPERATING_MODE_OUTPUT (qmi_message_dms_get_operating_mode_output_get_type ())


/**
 * qmi_message_dms_get_operating_mode_output_get_result:
 * @self: a QmiMessageDmsGetOperatingModeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_operating_mode_output_get_result (
    QmiMessageDmsGetOperatingModeOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_operating_mode_output_get_mode:
 * @self: a #QmiMessageDmsGetOperatingModeOutput.
 * @value_mode: (out)(optional): a placeholder for the output #QmiDmsOperatingMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_operating_mode_output_get_mode (
    QmiMessageDmsGetOperatingModeOutput *self,
    QmiDmsOperatingMode *value_mode,
    GError **error);


/**
 * qmi_message_dms_get_operating_mode_output_get_offline_reason:
 * @self: a #QmiMessageDmsGetOperatingModeOutput.
 * @value_offline_reason: (out)(optional): a placeholder for the output #QmiDmsOfflineReason, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Offline Reason' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_operating_mode_output_get_offline_reason (
    QmiMessageDmsGetOperatingModeOutput *self,
    QmiDmsOfflineReason *value_offline_reason,
    GError **error);


/**
 * qmi_message_dms_get_operating_mode_output_get_hardware_restricted_mode:
 * @self: a #QmiMessageDmsGetOperatingModeOutput.
 * @value_hardware_restricted_mode: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Hardware Restricted Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_operating_mode_output_get_hardware_restricted_mode (
    QmiMessageDmsGetOperatingModeOutput *self,
    gboolean *value_hardware_restricted_mode,
    GError **error);


/**
 * qmi_message_dms_get_operating_mode_output_ref:
 * @self: a #QmiMessageDmsGetOperatingModeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetOperatingModeOutput *qmi_message_dms_get_operating_mode_output_ref (QmiMessageDmsGetOperatingModeOutput *self);

/**
 * qmi_message_dms_get_operating_mode_output_unref:
 * @self: a #QmiMessageDmsGetOperatingModeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_operating_mode_output_unref (QmiMessageDmsGetOperatingModeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetOperatingModeOutput, qmi_message_dms_get_operating_mode_output_unref)

/**
 * qmi_message_dms_get_operating_mode_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetOperatingModeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetOperatingModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_operating_mode_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetOperatingModeOutput *qmi_message_dms_get_operating_mode_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Set Operating Mode */


/* --- Input -- */

/**
 * QmiMessageDmsSetOperatingModeInput:
 *
 * The #QmiMessageDmsSetOperatingModeInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetOperatingModeInput QmiMessageDmsSetOperatingModeInput;
GType qmi_message_dms_set_operating_mode_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_OPERATING_MODE_INPUT (qmi_message_dms_set_operating_mode_input_get_type ())


/**
 * qmi_message_dms_set_operating_mode_input_get_mode:
 * @self: a #QmiMessageDmsSetOperatingModeInput.
 * @value_mode: (out)(optional): a placeholder for the output #QmiDmsOperatingMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_operating_mode_input_get_mode (
    QmiMessageDmsSetOperatingModeInput *self,
    QmiDmsOperatingMode *value_mode,
    GError **error);


/**
 * qmi_message_dms_set_operating_mode_input_set_mode:
 * @self: a #QmiMessageDmsSetOperatingModeInput.
 * @value_mode: a #QmiDmsOperatingMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_operating_mode_input_set_mode (
    QmiMessageDmsSetOperatingModeInput *self,
    QmiDmsOperatingMode value_mode,
    GError **error);


/**
 * qmi_message_dms_set_operating_mode_input_ref:
 * @self: a #QmiMessageDmsSetOperatingModeInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetOperatingModeInput *qmi_message_dms_set_operating_mode_input_ref (QmiMessageDmsSetOperatingModeInput *self);

/**
 * qmi_message_dms_set_operating_mode_input_unref:
 * @self: a #QmiMessageDmsSetOperatingModeInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_operating_mode_input_unref (QmiMessageDmsSetOperatingModeInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetOperatingModeInput, qmi_message_dms_set_operating_mode_input_unref)

/**
 * qmi_message_dms_set_operating_mode_input_new:
 *
 * Allocates a new #QmiMessageDmsSetOperatingModeInput.
 *
 * Returns: the newly created #QmiMessageDmsSetOperatingModeInput. The returned value should be freed with qmi_message_dms_set_operating_mode_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetOperatingModeInput *qmi_message_dms_set_operating_mode_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsSetOperatingModeOutput:
 *
 * The #QmiMessageDmsSetOperatingModeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetOperatingModeOutput QmiMessageDmsSetOperatingModeOutput;
GType qmi_message_dms_set_operating_mode_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_OPERATING_MODE_OUTPUT (qmi_message_dms_set_operating_mode_output_get_type ())


/**
 * qmi_message_dms_set_operating_mode_output_get_result:
 * @self: a QmiMessageDmsSetOperatingModeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_operating_mode_output_get_result (
    QmiMessageDmsSetOperatingModeOutput *self,
    GError **error);


/**
 * qmi_message_dms_set_operating_mode_output_ref:
 * @self: a #QmiMessageDmsSetOperatingModeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetOperatingModeOutput *qmi_message_dms_set_operating_mode_output_ref (QmiMessageDmsSetOperatingModeOutput *self);

/**
 * qmi_message_dms_set_operating_mode_output_unref:
 * @self: a #QmiMessageDmsSetOperatingModeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_operating_mode_output_unref (QmiMessageDmsSetOperatingModeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetOperatingModeOutput, qmi_message_dms_set_operating_mode_output_unref)

/**
 * qmi_message_dms_set_operating_mode_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSetOperatingModeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSetOperatingModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_operating_mode_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSetOperatingModeOutput *qmi_message_dms_set_operating_mode_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Time */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetTimeOutput:
 *
 * The #QmiMessageDmsGetTimeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetTimeOutput QmiMessageDmsGetTimeOutput;
GType qmi_message_dms_get_time_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_TIME_OUTPUT (qmi_message_dms_get_time_output_get_type ())


/**
 * qmi_message_dms_get_time_output_get_result:
 * @self: a QmiMessageDmsGetTimeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_time_output_get_result (
    QmiMessageDmsGetTimeOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_time_output_get_device_time:
 * @self: a #QmiMessageDmsGetTimeOutput.
 * @value_device_time_time_count: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_device_time_time_source: (out)(optional): a placeholder for the output #QmiDmsTimeSource, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Device Time' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_time_output_get_device_time (
    QmiMessageDmsGetTimeOutput *self,
    guint64 *value_device_time_time_count,
    QmiDmsTimeSource *value_device_time_time_source,
    GError **error);


/**
 * qmi_message_dms_get_time_output_get_system_time:
 * @self: a #QmiMessageDmsGetTimeOutput.
 * @value_system_time: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'System Time' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_time_output_get_system_time (
    QmiMessageDmsGetTimeOutput *self,
    guint64 *value_system_time,
    GError **error);


/**
 * qmi_message_dms_get_time_output_get_user_time:
 * @self: a #QmiMessageDmsGetTimeOutput.
 * @value_user_time: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'User Time' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_time_output_get_user_time (
    QmiMessageDmsGetTimeOutput *self,
    guint64 *value_user_time,
    GError **error);


/**
 * qmi_message_dms_get_time_output_ref:
 * @self: a #QmiMessageDmsGetTimeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetTimeOutput *qmi_message_dms_get_time_output_ref (QmiMessageDmsGetTimeOutput *self);

/**
 * qmi_message_dms_get_time_output_unref:
 * @self: a #QmiMessageDmsGetTimeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_time_output_unref (QmiMessageDmsGetTimeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetTimeOutput, qmi_message_dms_get_time_output_unref)

/**
 * qmi_message_dms_get_time_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetTimeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetTimeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_time_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetTimeOutput *qmi_message_dms_get_time_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get PRL Version */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetPrlVersionOutput:
 *
 * The #QmiMessageDmsGetPrlVersionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetPrlVersionOutput QmiMessageDmsGetPrlVersionOutput;
GType qmi_message_dms_get_prl_version_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_PRL_VERSION_OUTPUT (qmi_message_dms_get_prl_version_output_get_type ())


/**
 * qmi_message_dms_get_prl_version_output_get_result:
 * @self: a QmiMessageDmsGetPrlVersionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_prl_version_output_get_result (
    QmiMessageDmsGetPrlVersionOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_prl_version_output_get_version:
 * @self: a #QmiMessageDmsGetPrlVersionOutput.
 * @value_version: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_prl_version_output_get_version (
    QmiMessageDmsGetPrlVersionOutput *self,
    guint16 *value_version,
    GError **error);


/**
 * qmi_message_dms_get_prl_version_output_get_prl_only_preference:
 * @self: a #QmiMessageDmsGetPrlVersionOutput.
 * @value_prl_only_preference: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PRL Only Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_prl_version_output_get_prl_only_preference (
    QmiMessageDmsGetPrlVersionOutput *self,
    gboolean *value_prl_only_preference,
    GError **error);


/**
 * qmi_message_dms_get_prl_version_output_ref:
 * @self: a #QmiMessageDmsGetPrlVersionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetPrlVersionOutput *qmi_message_dms_get_prl_version_output_ref (QmiMessageDmsGetPrlVersionOutput *self);

/**
 * qmi_message_dms_get_prl_version_output_unref:
 * @self: a #QmiMessageDmsGetPrlVersionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_prl_version_output_unref (QmiMessageDmsGetPrlVersionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetPrlVersionOutput, qmi_message_dms_get_prl_version_output_unref)

/**
 * qmi_message_dms_get_prl_version_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetPrlVersionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetPrlVersionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_prl_version_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetPrlVersionOutput *qmi_message_dms_get_prl_version_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Activation State */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetActivationStateOutput:
 *
 * The #QmiMessageDmsGetActivationStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetActivationStateOutput QmiMessageDmsGetActivationStateOutput;
GType qmi_message_dms_get_activation_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_ACTIVATION_STATE_OUTPUT (qmi_message_dms_get_activation_state_output_get_type ())


/**
 * qmi_message_dms_get_activation_state_output_get_result:
 * @self: a QmiMessageDmsGetActivationStateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_activation_state_output_get_result (
    QmiMessageDmsGetActivationStateOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_activation_state_output_get_info:
 * @self: a #QmiMessageDmsGetActivationStateOutput.
 * @value_info: (out)(optional): a placeholder for the output #QmiDmsActivationState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_activation_state_output_get_info (
    QmiMessageDmsGetActivationStateOutput *self,
    QmiDmsActivationState *value_info,
    GError **error);


/**
 * qmi_message_dms_get_activation_state_output_ref:
 * @self: a #QmiMessageDmsGetActivationStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetActivationStateOutput *qmi_message_dms_get_activation_state_output_ref (QmiMessageDmsGetActivationStateOutput *self);

/**
 * qmi_message_dms_get_activation_state_output_unref:
 * @self: a #QmiMessageDmsGetActivationStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_activation_state_output_unref (QmiMessageDmsGetActivationStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetActivationStateOutput, qmi_message_dms_get_activation_state_output_unref)

/**
 * qmi_message_dms_get_activation_state_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetActivationStateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetActivationStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_activation_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetActivationStateOutput *qmi_message_dms_get_activation_state_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Activate Automatic */


/* --- Input -- */

/**
 * QmiMessageDmsActivateAutomaticInput:
 *
 * The #QmiMessageDmsActivateAutomaticInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsActivateAutomaticInput QmiMessageDmsActivateAutomaticInput;
GType qmi_message_dms_activate_automatic_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_ACTIVATE_AUTOMATIC_INPUT (qmi_message_dms_activate_automatic_input_get_type ())


/**
 * qmi_message_dms_activate_automatic_input_get_activation_code:
 * @self: a #QmiMessageDmsActivateAutomaticInput.
 * @value_activation_code: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Activation Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_activate_automatic_input_get_activation_code (
    QmiMessageDmsActivateAutomaticInput *self,
    const gchar **value_activation_code,
    GError **error);


/**
 * qmi_message_dms_activate_automatic_input_set_activation_code:
 * @self: a #QmiMessageDmsActivateAutomaticInput.
 * @value_activation_code: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Activation Code' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_activate_automatic_input_set_activation_code (
    QmiMessageDmsActivateAutomaticInput *self,
    const gchar *value_activation_code,
    GError **error);


/**
 * qmi_message_dms_activate_automatic_input_ref:
 * @self: a #QmiMessageDmsActivateAutomaticInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsActivateAutomaticInput *qmi_message_dms_activate_automatic_input_ref (QmiMessageDmsActivateAutomaticInput *self);

/**
 * qmi_message_dms_activate_automatic_input_unref:
 * @self: a #QmiMessageDmsActivateAutomaticInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_activate_automatic_input_unref (QmiMessageDmsActivateAutomaticInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsActivateAutomaticInput, qmi_message_dms_activate_automatic_input_unref)

/**
 * qmi_message_dms_activate_automatic_input_new:
 *
 * Allocates a new #QmiMessageDmsActivateAutomaticInput.
 *
 * Returns: the newly created #QmiMessageDmsActivateAutomaticInput. The returned value should be freed with qmi_message_dms_activate_automatic_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsActivateAutomaticInput *qmi_message_dms_activate_automatic_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsActivateAutomaticOutput:
 *
 * The #QmiMessageDmsActivateAutomaticOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsActivateAutomaticOutput QmiMessageDmsActivateAutomaticOutput;
GType qmi_message_dms_activate_automatic_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_ACTIVATE_AUTOMATIC_OUTPUT (qmi_message_dms_activate_automatic_output_get_type ())


/**
 * qmi_message_dms_activate_automatic_output_get_result:
 * @self: a QmiMessageDmsActivateAutomaticOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_activate_automatic_output_get_result (
    QmiMessageDmsActivateAutomaticOutput *self,
    GError **error);


/**
 * qmi_message_dms_activate_automatic_output_ref:
 * @self: a #QmiMessageDmsActivateAutomaticOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsActivateAutomaticOutput *qmi_message_dms_activate_automatic_output_ref (QmiMessageDmsActivateAutomaticOutput *self);

/**
 * qmi_message_dms_activate_automatic_output_unref:
 * @self: a #QmiMessageDmsActivateAutomaticOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_activate_automatic_output_unref (QmiMessageDmsActivateAutomaticOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsActivateAutomaticOutput, qmi_message_dms_activate_automatic_output_unref)

/**
 * qmi_message_dms_activate_automatic_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsActivateAutomaticOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsActivateAutomaticOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_activate_automatic_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsActivateAutomaticOutput *qmi_message_dms_activate_automatic_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Activate Manual */


/* --- Input -- */

/**
 * QmiMessageDmsActivateManualInput:
 *
 * The #QmiMessageDmsActivateManualInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsActivateManualInput QmiMessageDmsActivateManualInput;
GType qmi_message_dms_activate_manual_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_ACTIVATE_MANUAL_INPUT (qmi_message_dms_activate_manual_input_get_type ())


/**
 * qmi_message_dms_activate_manual_input_get_prl:
 * @self: a #QmiMessageDmsActivateManualInput.
 * @value_prl_prl_total_length: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_prl_prl_segment_sequence: (out)(optional): a placeholder for the output sequence number, or %NULL if not required.
 * @value_prl_prl_segment: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PRL' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_dms_activate_manual_input_get_prl (
    QmiMessageDmsActivateManualInput *self,
    guint16 *value_prl_prl_total_length,
    guint8 *value_prl_prl_segment_sequence,
    GArray **value_prl_prl_segment,
    GError **error);


/**
 * qmi_message_dms_activate_manual_input_set_prl:
 * @self: a #QmiMessageDmsActivateManualInput.
 * @value_prl_prl_total_length: a #guint16.
 * @value_prl_prl_segment_sequence: the sequence number.
 * @value_prl_prl_segment: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_prl_prl_segment will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PRL' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_dms_activate_manual_input_set_prl (
    QmiMessageDmsActivateManualInput *self,
    guint16 value_prl_prl_total_length,
    guint8 value_prl_prl_segment_sequence,
    GArray *value_prl_prl_segment,
    GError **error);


/**
 * qmi_message_dms_activate_manual_input_get_mn_aaa_key:
 * @self: a #QmiMessageDmsActivateManualInput.
 * @value_mn_aaa_key: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MN AAA key' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_activate_manual_input_get_mn_aaa_key (
    QmiMessageDmsActivateManualInput *self,
    const gchar **value_mn_aaa_key,
    GError **error);


/**
 * qmi_message_dms_activate_manual_input_set_mn_aaa_key:
 * @self: a #QmiMessageDmsActivateManualInput.
 * @value_mn_aaa_key: a constant string with a maximum length of 16 characters.
 * @error: Return location for error or %NULL.
 *
 * Set the 'MN AAA key' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_activate_manual_input_set_mn_aaa_key (
    QmiMessageDmsActivateManualInput *self,
    const gchar *value_mn_aaa_key,
    GError **error);


/**
 * qmi_message_dms_activate_manual_input_get_mn_ha_key:
 * @self: a #QmiMessageDmsActivateManualInput.
 * @value_mn_ha_key: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MN HA key' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_activate_manual_input_get_mn_ha_key (
    QmiMessageDmsActivateManualInput *self,
    const gchar **value_mn_ha_key,
    GError **error);


/**
 * qmi_message_dms_activate_manual_input_set_mn_ha_key:
 * @self: a #QmiMessageDmsActivateManualInput.
 * @value_mn_ha_key: a constant string with a maximum length of 16 characters.
 * @error: Return location for error or %NULL.
 *
 * Set the 'MN HA key' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_activate_manual_input_set_mn_ha_key (
    QmiMessageDmsActivateManualInput *self,
    const gchar *value_mn_ha_key,
    GError **error);


/**
 * qmi_message_dms_activate_manual_input_get_info:
 * @self: a #QmiMessageDmsActivateManualInput.
 * @value_info_service_programming_code: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_info_system_identification_number: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_info_mobile_directory_number: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_info_mobile_identification_number: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_dms_activate_manual_input_get_info (
    QmiMessageDmsActivateManualInput *self,
    const gchar **value_info_service_programming_code,
    guint16 *value_info_system_identification_number,
    const gchar **value_info_mobile_directory_number,
    const gchar **value_info_mobile_identification_number,
    GError **error);


/**
 * qmi_message_dms_activate_manual_input_set_info:
 * @self: a #QmiMessageDmsActivateManualInput.
 * @value_info_service_programming_code: a constant string of exactly 6 characters.
 * @value_info_system_identification_number: a #guint16.
 * @value_info_mobile_directory_number: a constant string with a maximum length of 15 characters.
 * @value_info_mobile_identification_number: a constant string with a maximum length of 15 characters.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_dms_activate_manual_input_set_info (
    QmiMessageDmsActivateManualInput *self,
    const gchar *value_info_service_programming_code,
    guint16 value_info_system_identification_number,
    const gchar *value_info_mobile_directory_number,
    const gchar *value_info_mobile_identification_number,
    GError **error);


/**
 * qmi_message_dms_activate_manual_input_ref:
 * @self: a #QmiMessageDmsActivateManualInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsActivateManualInput *qmi_message_dms_activate_manual_input_ref (QmiMessageDmsActivateManualInput *self);

/**
 * qmi_message_dms_activate_manual_input_unref:
 * @self: a #QmiMessageDmsActivateManualInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_activate_manual_input_unref (QmiMessageDmsActivateManualInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsActivateManualInput, qmi_message_dms_activate_manual_input_unref)

/**
 * qmi_message_dms_activate_manual_input_new:
 *
 * Allocates a new #QmiMessageDmsActivateManualInput.
 *
 * Returns: the newly created #QmiMessageDmsActivateManualInput. The returned value should be freed with qmi_message_dms_activate_manual_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsActivateManualInput *qmi_message_dms_activate_manual_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsActivateManualOutput:
 *
 * The #QmiMessageDmsActivateManualOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsActivateManualOutput QmiMessageDmsActivateManualOutput;
GType qmi_message_dms_activate_manual_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_ACTIVATE_MANUAL_OUTPUT (qmi_message_dms_activate_manual_output_get_type ())


/**
 * qmi_message_dms_activate_manual_output_get_result:
 * @self: a QmiMessageDmsActivateManualOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_activate_manual_output_get_result (
    QmiMessageDmsActivateManualOutput *self,
    GError **error);


/**
 * qmi_message_dms_activate_manual_output_ref:
 * @self: a #QmiMessageDmsActivateManualOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsActivateManualOutput *qmi_message_dms_activate_manual_output_ref (QmiMessageDmsActivateManualOutput *self);

/**
 * qmi_message_dms_activate_manual_output_unref:
 * @self: a #QmiMessageDmsActivateManualOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_activate_manual_output_unref (QmiMessageDmsActivateManualOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsActivateManualOutput, qmi_message_dms_activate_manual_output_unref)

/**
 * qmi_message_dms_activate_manual_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsActivateManualOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsActivateManualOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_activate_manual_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsActivateManualOutput *qmi_message_dms_activate_manual_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get User Lock State */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetUserLockStateOutput:
 *
 * The #QmiMessageDmsGetUserLockStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetUserLockStateOutput QmiMessageDmsGetUserLockStateOutput;
GType qmi_message_dms_get_user_lock_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_USER_LOCK_STATE_OUTPUT (qmi_message_dms_get_user_lock_state_output_get_type ())


/**
 * qmi_message_dms_get_user_lock_state_output_get_result:
 * @self: a QmiMessageDmsGetUserLockStateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_user_lock_state_output_get_result (
    QmiMessageDmsGetUserLockStateOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_user_lock_state_output_get_enabled:
 * @self: a #QmiMessageDmsGetUserLockStateOutput.
 * @value_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_user_lock_state_output_get_enabled (
    QmiMessageDmsGetUserLockStateOutput *self,
    gboolean *value_enabled,
    GError **error);


/**
 * qmi_message_dms_get_user_lock_state_output_ref:
 * @self: a #QmiMessageDmsGetUserLockStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetUserLockStateOutput *qmi_message_dms_get_user_lock_state_output_ref (QmiMessageDmsGetUserLockStateOutput *self);

/**
 * qmi_message_dms_get_user_lock_state_output_unref:
 * @self: a #QmiMessageDmsGetUserLockStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_user_lock_state_output_unref (QmiMessageDmsGetUserLockStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetUserLockStateOutput, qmi_message_dms_get_user_lock_state_output_unref)

/**
 * qmi_message_dms_get_user_lock_state_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetUserLockStateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetUserLockStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_user_lock_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetUserLockStateOutput *qmi_message_dms_get_user_lock_state_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Set User Lock State */


/* --- Input -- */

/**
 * QmiMessageDmsSetUserLockStateInput:
 *
 * The #QmiMessageDmsSetUserLockStateInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetUserLockStateInput QmiMessageDmsSetUserLockStateInput;
GType qmi_message_dms_set_user_lock_state_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_USER_LOCK_STATE_INPUT (qmi_message_dms_set_user_lock_state_input_get_type ())


/**
 * qmi_message_dms_set_user_lock_state_input_get_info:
 * @self: a #QmiMessageDmsSetUserLockStateInput.
 * @value_info_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_info_lock_code: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_user_lock_state_input_get_info (
    QmiMessageDmsSetUserLockStateInput *self,
    gboolean *value_info_enabled,
    const gchar **value_info_lock_code,
    GError **error);


/**
 * qmi_message_dms_set_user_lock_state_input_set_info:
 * @self: a #QmiMessageDmsSetUserLockStateInput.
 * @value_info_enabled: a #gboolean.
 * @value_info_lock_code: a constant string of exactly 4 characters.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_user_lock_state_input_set_info (
    QmiMessageDmsSetUserLockStateInput *self,
    gboolean value_info_enabled,
    const gchar *value_info_lock_code,
    GError **error);


/**
 * qmi_message_dms_set_user_lock_state_input_ref:
 * @self: a #QmiMessageDmsSetUserLockStateInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetUserLockStateInput *qmi_message_dms_set_user_lock_state_input_ref (QmiMessageDmsSetUserLockStateInput *self);

/**
 * qmi_message_dms_set_user_lock_state_input_unref:
 * @self: a #QmiMessageDmsSetUserLockStateInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_user_lock_state_input_unref (QmiMessageDmsSetUserLockStateInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetUserLockStateInput, qmi_message_dms_set_user_lock_state_input_unref)

/**
 * qmi_message_dms_set_user_lock_state_input_new:
 *
 * Allocates a new #QmiMessageDmsSetUserLockStateInput.
 *
 * Returns: the newly created #QmiMessageDmsSetUserLockStateInput. The returned value should be freed with qmi_message_dms_set_user_lock_state_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetUserLockStateInput *qmi_message_dms_set_user_lock_state_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsSetUserLockStateOutput:
 *
 * The #QmiMessageDmsSetUserLockStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetUserLockStateOutput QmiMessageDmsSetUserLockStateOutput;
GType qmi_message_dms_set_user_lock_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_USER_LOCK_STATE_OUTPUT (qmi_message_dms_set_user_lock_state_output_get_type ())


/**
 * qmi_message_dms_set_user_lock_state_output_get_result:
 * @self: a QmiMessageDmsSetUserLockStateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_user_lock_state_output_get_result (
    QmiMessageDmsSetUserLockStateOutput *self,
    GError **error);


/**
 * qmi_message_dms_set_user_lock_state_output_ref:
 * @self: a #QmiMessageDmsSetUserLockStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetUserLockStateOutput *qmi_message_dms_set_user_lock_state_output_ref (QmiMessageDmsSetUserLockStateOutput *self);

/**
 * qmi_message_dms_set_user_lock_state_output_unref:
 * @self: a #QmiMessageDmsSetUserLockStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_user_lock_state_output_unref (QmiMessageDmsSetUserLockStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetUserLockStateOutput, qmi_message_dms_set_user_lock_state_output_unref)

/**
 * qmi_message_dms_set_user_lock_state_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSetUserLockStateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSetUserLockStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_user_lock_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSetUserLockStateOutput *qmi_message_dms_set_user_lock_state_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Set User Lock Code */


/* --- Input -- */

/**
 * QmiMessageDmsSetUserLockCodeInput:
 *
 * The #QmiMessageDmsSetUserLockCodeInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetUserLockCodeInput QmiMessageDmsSetUserLockCodeInput;
GType qmi_message_dms_set_user_lock_code_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_USER_LOCK_CODE_INPUT (qmi_message_dms_set_user_lock_code_input_get_type ())


/**
 * qmi_message_dms_set_user_lock_code_input_get_info:
 * @self: a #QmiMessageDmsSetUserLockCodeInput.
 * @value_info_old_code: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_info_new_code: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_user_lock_code_input_get_info (
    QmiMessageDmsSetUserLockCodeInput *self,
    const gchar **value_info_old_code,
    const gchar **value_info_new_code,
    GError **error);


/**
 * qmi_message_dms_set_user_lock_code_input_set_info:
 * @self: a #QmiMessageDmsSetUserLockCodeInput.
 * @value_info_old_code: a constant string of exactly 4 characters.
 * @value_info_new_code: a constant string of exactly 4 characters.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_user_lock_code_input_set_info (
    QmiMessageDmsSetUserLockCodeInput *self,
    const gchar *value_info_old_code,
    const gchar *value_info_new_code,
    GError **error);


/**
 * qmi_message_dms_set_user_lock_code_input_ref:
 * @self: a #QmiMessageDmsSetUserLockCodeInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetUserLockCodeInput *qmi_message_dms_set_user_lock_code_input_ref (QmiMessageDmsSetUserLockCodeInput *self);

/**
 * qmi_message_dms_set_user_lock_code_input_unref:
 * @self: a #QmiMessageDmsSetUserLockCodeInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_user_lock_code_input_unref (QmiMessageDmsSetUserLockCodeInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetUserLockCodeInput, qmi_message_dms_set_user_lock_code_input_unref)

/**
 * qmi_message_dms_set_user_lock_code_input_new:
 *
 * Allocates a new #QmiMessageDmsSetUserLockCodeInput.
 *
 * Returns: the newly created #QmiMessageDmsSetUserLockCodeInput. The returned value should be freed with qmi_message_dms_set_user_lock_code_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetUserLockCodeInput *qmi_message_dms_set_user_lock_code_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsSetUserLockCodeOutput:
 *
 * The #QmiMessageDmsSetUserLockCodeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetUserLockCodeOutput QmiMessageDmsSetUserLockCodeOutput;
GType qmi_message_dms_set_user_lock_code_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_USER_LOCK_CODE_OUTPUT (qmi_message_dms_set_user_lock_code_output_get_type ())


/**
 * qmi_message_dms_set_user_lock_code_output_get_result:
 * @self: a QmiMessageDmsSetUserLockCodeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_user_lock_code_output_get_result (
    QmiMessageDmsSetUserLockCodeOutput *self,
    GError **error);


/**
 * qmi_message_dms_set_user_lock_code_output_ref:
 * @self: a #QmiMessageDmsSetUserLockCodeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetUserLockCodeOutput *qmi_message_dms_set_user_lock_code_output_ref (QmiMessageDmsSetUserLockCodeOutput *self);

/**
 * qmi_message_dms_set_user_lock_code_output_unref:
 * @self: a #QmiMessageDmsSetUserLockCodeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_user_lock_code_output_unref (QmiMessageDmsSetUserLockCodeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetUserLockCodeOutput, qmi_message_dms_set_user_lock_code_output_unref)

/**
 * qmi_message_dms_set_user_lock_code_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSetUserLockCodeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSetUserLockCodeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_user_lock_code_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSetUserLockCodeOutput *qmi_message_dms_set_user_lock_code_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Read User Data */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsReadUserDataOutput:
 *
 * The #QmiMessageDmsReadUserDataOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsReadUserDataOutput QmiMessageDmsReadUserDataOutput;
GType qmi_message_dms_read_user_data_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_READ_USER_DATA_OUTPUT (qmi_message_dms_read_user_data_output_get_type ())


/**
 * qmi_message_dms_read_user_data_output_get_result:
 * @self: a QmiMessageDmsReadUserDataOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_read_user_data_output_get_result (
    QmiMessageDmsReadUserDataOutput *self,
    GError **error);


/**
 * qmi_message_dms_read_user_data_output_get_user_data:
 * @self: a #QmiMessageDmsReadUserDataOutput.
 * @value_user_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'User Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_read_user_data_output_get_user_data (
    QmiMessageDmsReadUserDataOutput *self,
    GArray **value_user_data,
    GError **error);


/**
 * qmi_message_dms_read_user_data_output_ref:
 * @self: a #QmiMessageDmsReadUserDataOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsReadUserDataOutput *qmi_message_dms_read_user_data_output_ref (QmiMessageDmsReadUserDataOutput *self);

/**
 * qmi_message_dms_read_user_data_output_unref:
 * @self: a #QmiMessageDmsReadUserDataOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_read_user_data_output_unref (QmiMessageDmsReadUserDataOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsReadUserDataOutput, qmi_message_dms_read_user_data_output_unref)

/**
 * qmi_message_dms_read_user_data_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsReadUserDataOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsReadUserDataOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_read_user_data_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsReadUserDataOutput *qmi_message_dms_read_user_data_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Write User Data */


/* --- Input -- */

/**
 * QmiMessageDmsWriteUserDataInput:
 *
 * The #QmiMessageDmsWriteUserDataInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsWriteUserDataInput QmiMessageDmsWriteUserDataInput;
GType qmi_message_dms_write_user_data_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_WRITE_USER_DATA_INPUT (qmi_message_dms_write_user_data_input_get_type ())


/**
 * qmi_message_dms_write_user_data_input_get_user_data:
 * @self: a #QmiMessageDmsWriteUserDataInput.
 * @value_user_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'User Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_write_user_data_input_get_user_data (
    QmiMessageDmsWriteUserDataInput *self,
    GArray **value_user_data,
    GError **error);


/**
 * qmi_message_dms_write_user_data_input_set_user_data:
 * @self: a #QmiMessageDmsWriteUserDataInput.
 * @value_user_data: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_user_data will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'User Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_write_user_data_input_set_user_data (
    QmiMessageDmsWriteUserDataInput *self,
    GArray *value_user_data,
    GError **error);


/**
 * qmi_message_dms_write_user_data_input_ref:
 * @self: a #QmiMessageDmsWriteUserDataInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsWriteUserDataInput *qmi_message_dms_write_user_data_input_ref (QmiMessageDmsWriteUserDataInput *self);

/**
 * qmi_message_dms_write_user_data_input_unref:
 * @self: a #QmiMessageDmsWriteUserDataInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_write_user_data_input_unref (QmiMessageDmsWriteUserDataInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsWriteUserDataInput, qmi_message_dms_write_user_data_input_unref)

/**
 * qmi_message_dms_write_user_data_input_new:
 *
 * Allocates a new #QmiMessageDmsWriteUserDataInput.
 *
 * Returns: the newly created #QmiMessageDmsWriteUserDataInput. The returned value should be freed with qmi_message_dms_write_user_data_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsWriteUserDataInput *qmi_message_dms_write_user_data_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsWriteUserDataOutput:
 *
 * The #QmiMessageDmsWriteUserDataOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsWriteUserDataOutput QmiMessageDmsWriteUserDataOutput;
GType qmi_message_dms_write_user_data_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_WRITE_USER_DATA_OUTPUT (qmi_message_dms_write_user_data_output_get_type ())


/**
 * qmi_message_dms_write_user_data_output_get_result:
 * @self: a QmiMessageDmsWriteUserDataOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_write_user_data_output_get_result (
    QmiMessageDmsWriteUserDataOutput *self,
    GError **error);


/**
 * qmi_message_dms_write_user_data_output_ref:
 * @self: a #QmiMessageDmsWriteUserDataOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsWriteUserDataOutput *qmi_message_dms_write_user_data_output_ref (QmiMessageDmsWriteUserDataOutput *self);

/**
 * qmi_message_dms_write_user_data_output_unref:
 * @self: a #QmiMessageDmsWriteUserDataOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_write_user_data_output_unref (QmiMessageDmsWriteUserDataOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsWriteUserDataOutput, qmi_message_dms_write_user_data_output_unref)

/**
 * qmi_message_dms_write_user_data_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsWriteUserDataOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsWriteUserDataOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_write_user_data_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsWriteUserDataOutput *qmi_message_dms_write_user_data_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Read ERI File */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsReadEriFileOutput:
 *
 * The #QmiMessageDmsReadEriFileOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsReadEriFileOutput QmiMessageDmsReadEriFileOutput;
GType qmi_message_dms_read_eri_file_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_READ_ERI_FILE_OUTPUT (qmi_message_dms_read_eri_file_output_get_type ())


/**
 * qmi_message_dms_read_eri_file_output_get_result:
 * @self: a QmiMessageDmsReadEriFileOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_read_eri_file_output_get_result (
    QmiMessageDmsReadEriFileOutput *self,
    GError **error);


/**
 * qmi_message_dms_read_eri_file_output_get_eri_file:
 * @self: a #QmiMessageDmsReadEriFileOutput.
 * @value_eri_file: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ERI File' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_read_eri_file_output_get_eri_file (
    QmiMessageDmsReadEriFileOutput *self,
    GArray **value_eri_file,
    GError **error);


/**
 * qmi_message_dms_read_eri_file_output_ref:
 * @self: a #QmiMessageDmsReadEriFileOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsReadEriFileOutput *qmi_message_dms_read_eri_file_output_ref (QmiMessageDmsReadEriFileOutput *self);

/**
 * qmi_message_dms_read_eri_file_output_unref:
 * @self: a #QmiMessageDmsReadEriFileOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_read_eri_file_output_unref (QmiMessageDmsReadEriFileOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsReadEriFileOutput, qmi_message_dms_read_eri_file_output_unref)

/**
 * qmi_message_dms_read_eri_file_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsReadEriFileOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsReadEriFileOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_read_eri_file_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsReadEriFileOutput *qmi_message_dms_read_eri_file_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Restore Factory Defaults */


/* --- Input -- */

/**
 * QmiMessageDmsRestoreFactoryDefaultsInput:
 *
 * The #QmiMessageDmsRestoreFactoryDefaultsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsRestoreFactoryDefaultsInput QmiMessageDmsRestoreFactoryDefaultsInput;
GType qmi_message_dms_restore_factory_defaults_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_RESTORE_FACTORY_DEFAULTS_INPUT (qmi_message_dms_restore_factory_defaults_input_get_type ())


/**
 * qmi_message_dms_restore_factory_defaults_input_get_service_programming_code:
 * @self: a #QmiMessageDmsRestoreFactoryDefaultsInput.
 * @value_service_programming_code: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Programming Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_restore_factory_defaults_input_get_service_programming_code (
    QmiMessageDmsRestoreFactoryDefaultsInput *self,
    const gchar **value_service_programming_code,
    GError **error);


/**
 * qmi_message_dms_restore_factory_defaults_input_set_service_programming_code:
 * @self: a #QmiMessageDmsRestoreFactoryDefaultsInput.
 * @value_service_programming_code: a constant string of exactly 6 characters.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Service Programming Code' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_restore_factory_defaults_input_set_service_programming_code (
    QmiMessageDmsRestoreFactoryDefaultsInput *self,
    const gchar *value_service_programming_code,
    GError **error);


/**
 * qmi_message_dms_restore_factory_defaults_input_ref:
 * @self: a #QmiMessageDmsRestoreFactoryDefaultsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsRestoreFactoryDefaultsInput *qmi_message_dms_restore_factory_defaults_input_ref (QmiMessageDmsRestoreFactoryDefaultsInput *self);

/**
 * qmi_message_dms_restore_factory_defaults_input_unref:
 * @self: a #QmiMessageDmsRestoreFactoryDefaultsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_restore_factory_defaults_input_unref (QmiMessageDmsRestoreFactoryDefaultsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsRestoreFactoryDefaultsInput, qmi_message_dms_restore_factory_defaults_input_unref)

/**
 * qmi_message_dms_restore_factory_defaults_input_new:
 *
 * Allocates a new #QmiMessageDmsRestoreFactoryDefaultsInput.
 *
 * Returns: the newly created #QmiMessageDmsRestoreFactoryDefaultsInput. The returned value should be freed with qmi_message_dms_restore_factory_defaults_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsRestoreFactoryDefaultsInput *qmi_message_dms_restore_factory_defaults_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsRestoreFactoryDefaultsOutput:
 *
 * The #QmiMessageDmsRestoreFactoryDefaultsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsRestoreFactoryDefaultsOutput QmiMessageDmsRestoreFactoryDefaultsOutput;
GType qmi_message_dms_restore_factory_defaults_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_RESTORE_FACTORY_DEFAULTS_OUTPUT (qmi_message_dms_restore_factory_defaults_output_get_type ())


/**
 * qmi_message_dms_restore_factory_defaults_output_get_result:
 * @self: a QmiMessageDmsRestoreFactoryDefaultsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_restore_factory_defaults_output_get_result (
    QmiMessageDmsRestoreFactoryDefaultsOutput *self,
    GError **error);


/**
 * qmi_message_dms_restore_factory_defaults_output_ref:
 * @self: a #QmiMessageDmsRestoreFactoryDefaultsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsRestoreFactoryDefaultsOutput *qmi_message_dms_restore_factory_defaults_output_ref (QmiMessageDmsRestoreFactoryDefaultsOutput *self);

/**
 * qmi_message_dms_restore_factory_defaults_output_unref:
 * @self: a #QmiMessageDmsRestoreFactoryDefaultsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_restore_factory_defaults_output_unref (QmiMessageDmsRestoreFactoryDefaultsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsRestoreFactoryDefaultsOutput, qmi_message_dms_restore_factory_defaults_output_unref)

/**
 * qmi_message_dms_restore_factory_defaults_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsRestoreFactoryDefaultsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsRestoreFactoryDefaultsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_restore_factory_defaults_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsRestoreFactoryDefaultsOutput *qmi_message_dms_restore_factory_defaults_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Validate Service Programming Code */


/* --- Input -- */

/**
 * QmiMessageDmsValidateServiceProgrammingCodeInput:
 *
 * The #QmiMessageDmsValidateServiceProgrammingCodeInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsValidateServiceProgrammingCodeInput QmiMessageDmsValidateServiceProgrammingCodeInput;
GType qmi_message_dms_validate_service_programming_code_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_VALIDATE_SERVICE_PROGRAMMING_CODE_INPUT (qmi_message_dms_validate_service_programming_code_input_get_type ())


/**
 * qmi_message_dms_validate_service_programming_code_input_get_service_programming_code:
 * @self: a #QmiMessageDmsValidateServiceProgrammingCodeInput.
 * @value_service_programming_code: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Programming Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_validate_service_programming_code_input_get_service_programming_code (
    QmiMessageDmsValidateServiceProgrammingCodeInput *self,
    const gchar **value_service_programming_code,
    GError **error);


/**
 * qmi_message_dms_validate_service_programming_code_input_set_service_programming_code:
 * @self: a #QmiMessageDmsValidateServiceProgrammingCodeInput.
 * @value_service_programming_code: a constant string of exactly 6 characters.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Service Programming Code' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_validate_service_programming_code_input_set_service_programming_code (
    QmiMessageDmsValidateServiceProgrammingCodeInput *self,
    const gchar *value_service_programming_code,
    GError **error);


/**
 * qmi_message_dms_validate_service_programming_code_input_ref:
 * @self: a #QmiMessageDmsValidateServiceProgrammingCodeInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsValidateServiceProgrammingCodeInput *qmi_message_dms_validate_service_programming_code_input_ref (QmiMessageDmsValidateServiceProgrammingCodeInput *self);

/**
 * qmi_message_dms_validate_service_programming_code_input_unref:
 * @self: a #QmiMessageDmsValidateServiceProgrammingCodeInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_validate_service_programming_code_input_unref (QmiMessageDmsValidateServiceProgrammingCodeInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsValidateServiceProgrammingCodeInput, qmi_message_dms_validate_service_programming_code_input_unref)

/**
 * qmi_message_dms_validate_service_programming_code_input_new:
 *
 * Allocates a new #QmiMessageDmsValidateServiceProgrammingCodeInput.
 *
 * Returns: the newly created #QmiMessageDmsValidateServiceProgrammingCodeInput. The returned value should be freed with qmi_message_dms_validate_service_programming_code_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsValidateServiceProgrammingCodeInput *qmi_message_dms_validate_service_programming_code_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsValidateServiceProgrammingCodeOutput:
 *
 * The #QmiMessageDmsValidateServiceProgrammingCodeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsValidateServiceProgrammingCodeOutput QmiMessageDmsValidateServiceProgrammingCodeOutput;
GType qmi_message_dms_validate_service_programming_code_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_VALIDATE_SERVICE_PROGRAMMING_CODE_OUTPUT (qmi_message_dms_validate_service_programming_code_output_get_type ())


/**
 * qmi_message_dms_validate_service_programming_code_output_get_result:
 * @self: a QmiMessageDmsValidateServiceProgrammingCodeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_validate_service_programming_code_output_get_result (
    QmiMessageDmsValidateServiceProgrammingCodeOutput *self,
    GError **error);


/**
 * qmi_message_dms_validate_service_programming_code_output_ref:
 * @self: a #QmiMessageDmsValidateServiceProgrammingCodeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsValidateServiceProgrammingCodeOutput *qmi_message_dms_validate_service_programming_code_output_ref (QmiMessageDmsValidateServiceProgrammingCodeOutput *self);

/**
 * qmi_message_dms_validate_service_programming_code_output_unref:
 * @self: a #QmiMessageDmsValidateServiceProgrammingCodeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_validate_service_programming_code_output_unref (QmiMessageDmsValidateServiceProgrammingCodeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsValidateServiceProgrammingCodeOutput, qmi_message_dms_validate_service_programming_code_output_unref)

/**
 * qmi_message_dms_validate_service_programming_code_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsValidateServiceProgrammingCodeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsValidateServiceProgrammingCodeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_validate_service_programming_code_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsValidateServiceProgrammingCodeOutput *qmi_message_dms_validate_service_programming_code_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS UIM Get ICCID */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsUimGetIccidOutput:
 *
 * The #QmiMessageDmsUimGetIccidOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimGetIccidOutput QmiMessageDmsUimGetIccidOutput;
GType qmi_message_dms_uim_get_iccid_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_GET_ICCID_OUTPUT (qmi_message_dms_uim_get_iccid_output_get_type ())


/**
 * qmi_message_dms_uim_get_iccid_output_get_result:
 * @self: a QmiMessageDmsUimGetIccidOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_iccid_output_get_result (
    QmiMessageDmsUimGetIccidOutput *self,
    GError **error);


/**
 * qmi_message_dms_uim_get_iccid_output_get_iccid:
 * @self: a #QmiMessageDmsUimGetIccidOutput.
 * @value_iccid: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ICCID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_iccid_output_get_iccid (
    QmiMessageDmsUimGetIccidOutput *self,
    const gchar **value_iccid,
    GError **error);


/**
 * qmi_message_dms_uim_get_iccid_output_ref:
 * @self: a #QmiMessageDmsUimGetIccidOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimGetIccidOutput *qmi_message_dms_uim_get_iccid_output_ref (QmiMessageDmsUimGetIccidOutput *self);

/**
 * qmi_message_dms_uim_get_iccid_output_unref:
 * @self: a #QmiMessageDmsUimGetIccidOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_get_iccid_output_unref (QmiMessageDmsUimGetIccidOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimGetIccidOutput, qmi_message_dms_uim_get_iccid_output_unref)

/**
 * qmi_message_dms_uim_get_iccid_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsUimGetIccidOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsUimGetIccidOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_get_iccid_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsUimGetIccidOutput *qmi_message_dms_uim_get_iccid_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Set Firmware ID */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsSetFirmwareIdOutput:
 *
 * The #QmiMessageDmsSetFirmwareIdOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageDmsSetFirmwareIdOutput QmiMessageDmsSetFirmwareIdOutput;
GType qmi_message_dms_set_firmware_id_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_FIRMWARE_ID_OUTPUT (qmi_message_dms_set_firmware_id_output_get_type ())


/**
 * qmi_message_dms_set_firmware_id_output_get_result:
 * @self: a QmiMessageDmsSetFirmwareIdOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_set_firmware_id_output_get_result (
    QmiMessageDmsSetFirmwareIdOutput *self,
    GError **error);


/**
 * qmi_message_dms_set_firmware_id_output_ref:
 * @self: a #QmiMessageDmsSetFirmwareIdOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageDmsSetFirmwareIdOutput *qmi_message_dms_set_firmware_id_output_ref (QmiMessageDmsSetFirmwareIdOutput *self);

/**
 * qmi_message_dms_set_firmware_id_output_unref:
 * @self: a #QmiMessageDmsSetFirmwareIdOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_dms_set_firmware_id_output_unref (QmiMessageDmsSetFirmwareIdOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetFirmwareIdOutput, qmi_message_dms_set_firmware_id_output_unref)

/**
 * qmi_message_dms_set_firmware_id_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSetFirmwareIdOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSetFirmwareIdOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_firmware_id_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSetFirmwareIdOutput *qmi_message_dms_set_firmware_id_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS UIM Get CK Status */


/* --- Input -- */

/**
 * QmiMessageDmsUimGetCkStatusInput:
 *
 * The #QmiMessageDmsUimGetCkStatusInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimGetCkStatusInput QmiMessageDmsUimGetCkStatusInput;
GType qmi_message_dms_uim_get_ck_status_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_GET_CK_STATUS_INPUT (qmi_message_dms_uim_get_ck_status_input_get_type ())


/**
 * qmi_message_dms_uim_get_ck_status_input_get_facility:
 * @self: a #QmiMessageDmsUimGetCkStatusInput.
 * @value_facility: (out)(optional): a placeholder for the output #QmiDmsUimFacility, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Facility' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_ck_status_input_get_facility (
    QmiMessageDmsUimGetCkStatusInput *self,
    QmiDmsUimFacility *value_facility,
    GError **error);


/**
 * qmi_message_dms_uim_get_ck_status_input_set_facility:
 * @self: a #QmiMessageDmsUimGetCkStatusInput.
 * @value_facility: a #QmiDmsUimFacility.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Facility' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_ck_status_input_set_facility (
    QmiMessageDmsUimGetCkStatusInput *self,
    QmiDmsUimFacility value_facility,
    GError **error);


/**
 * qmi_message_dms_uim_get_ck_status_input_ref:
 * @self: a #QmiMessageDmsUimGetCkStatusInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimGetCkStatusInput *qmi_message_dms_uim_get_ck_status_input_ref (QmiMessageDmsUimGetCkStatusInput *self);

/**
 * qmi_message_dms_uim_get_ck_status_input_unref:
 * @self: a #QmiMessageDmsUimGetCkStatusInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_get_ck_status_input_unref (QmiMessageDmsUimGetCkStatusInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimGetCkStatusInput, qmi_message_dms_uim_get_ck_status_input_unref)

/**
 * qmi_message_dms_uim_get_ck_status_input_new:
 *
 * Allocates a new #QmiMessageDmsUimGetCkStatusInput.
 *
 * Returns: the newly created #QmiMessageDmsUimGetCkStatusInput. The returned value should be freed with qmi_message_dms_uim_get_ck_status_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimGetCkStatusInput *qmi_message_dms_uim_get_ck_status_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsUimGetCkStatusOutput:
 *
 * The #QmiMessageDmsUimGetCkStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimGetCkStatusOutput QmiMessageDmsUimGetCkStatusOutput;
GType qmi_message_dms_uim_get_ck_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_GET_CK_STATUS_OUTPUT (qmi_message_dms_uim_get_ck_status_output_get_type ())


/**
 * qmi_message_dms_uim_get_ck_status_output_get_result:
 * @self: a QmiMessageDmsUimGetCkStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_ck_status_output_get_result (
    QmiMessageDmsUimGetCkStatusOutput *self,
    GError **error);


/**
 * qmi_message_dms_uim_get_ck_status_output_get_ck_status:
 * @self: a #QmiMessageDmsUimGetCkStatusOutput.
 * @value_ck_status_facility_state: (out)(optional): a placeholder for the output #QmiDmsUimFacilityState, or %NULL if not required.
 * @value_ck_status_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_ck_status_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CK Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_ck_status_output_get_ck_status (
    QmiMessageDmsUimGetCkStatusOutput *self,
    QmiDmsUimFacilityState *value_ck_status_facility_state,
    guint8 *value_ck_status_verify_retries_left,
    guint8 *value_ck_status_unblock_retries_left,
    GError **error);


/**
 * qmi_message_dms_uim_get_ck_status_output_get_operation_blocking_facility:
 * @self: a #QmiMessageDmsUimGetCkStatusOutput.
 * @value_operation_blocking_facility: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operation Blocking Facility' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_ck_status_output_get_operation_blocking_facility (
    QmiMessageDmsUimGetCkStatusOutput *self,
    gboolean *value_operation_blocking_facility,
    GError **error);


/**
 * qmi_message_dms_uim_get_ck_status_output_ref:
 * @self: a #QmiMessageDmsUimGetCkStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimGetCkStatusOutput *qmi_message_dms_uim_get_ck_status_output_ref (QmiMessageDmsUimGetCkStatusOutput *self);

/**
 * qmi_message_dms_uim_get_ck_status_output_unref:
 * @self: a #QmiMessageDmsUimGetCkStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_get_ck_status_output_unref (QmiMessageDmsUimGetCkStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimGetCkStatusOutput, qmi_message_dms_uim_get_ck_status_output_unref)

/**
 * qmi_message_dms_uim_get_ck_status_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsUimGetCkStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsUimGetCkStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_get_ck_status_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsUimGetCkStatusOutput *qmi_message_dms_uim_get_ck_status_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS UIM Set CK Protection */


/* --- Input -- */

/**
 * QmiMessageDmsUimSetCkProtectionInput:
 *
 * The #QmiMessageDmsUimSetCkProtectionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimSetCkProtectionInput QmiMessageDmsUimSetCkProtectionInput;
GType qmi_message_dms_uim_set_ck_protection_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_SET_CK_PROTECTION_INPUT (qmi_message_dms_uim_set_ck_protection_input_get_type ())


/**
 * qmi_message_dms_uim_set_ck_protection_input_get_facility:
 * @self: a #QmiMessageDmsUimSetCkProtectionInput.
 * @value_facility_facility: (out)(optional): a placeholder for the output #QmiDmsUimFacility, or %NULL if not required.
 * @value_facility_facility_state: (out)(optional): a placeholder for the output #QmiDmsUimFacilityState, or %NULL if not required.
 * @value_facility_facility_depersonalization_control_key: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Facility' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_set_ck_protection_input_get_facility (
    QmiMessageDmsUimSetCkProtectionInput *self,
    QmiDmsUimFacility *value_facility_facility,
    QmiDmsUimFacilityState *value_facility_facility_state,
    const gchar **value_facility_facility_depersonalization_control_key,
    GError **error);


/**
 * qmi_message_dms_uim_set_ck_protection_input_set_facility:
 * @self: a #QmiMessageDmsUimSetCkProtectionInput.
 * @value_facility_facility: a #QmiDmsUimFacility.
 * @value_facility_facility_state: a #QmiDmsUimFacilityState.
 * @value_facility_facility_depersonalization_control_key: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Facility' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_set_ck_protection_input_set_facility (
    QmiMessageDmsUimSetCkProtectionInput *self,
    QmiDmsUimFacility value_facility_facility,
    QmiDmsUimFacilityState value_facility_facility_state,
    const gchar *value_facility_facility_depersonalization_control_key,
    GError **error);


/**
 * qmi_message_dms_uim_set_ck_protection_input_ref:
 * @self: a #QmiMessageDmsUimSetCkProtectionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimSetCkProtectionInput *qmi_message_dms_uim_set_ck_protection_input_ref (QmiMessageDmsUimSetCkProtectionInput *self);

/**
 * qmi_message_dms_uim_set_ck_protection_input_unref:
 * @self: a #QmiMessageDmsUimSetCkProtectionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_set_ck_protection_input_unref (QmiMessageDmsUimSetCkProtectionInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimSetCkProtectionInput, qmi_message_dms_uim_set_ck_protection_input_unref)

/**
 * qmi_message_dms_uim_set_ck_protection_input_new:
 *
 * Allocates a new #QmiMessageDmsUimSetCkProtectionInput.
 *
 * Returns: the newly created #QmiMessageDmsUimSetCkProtectionInput. The returned value should be freed with qmi_message_dms_uim_set_ck_protection_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimSetCkProtectionInput *qmi_message_dms_uim_set_ck_protection_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsUimSetCkProtectionOutput:
 *
 * The #QmiMessageDmsUimSetCkProtectionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimSetCkProtectionOutput QmiMessageDmsUimSetCkProtectionOutput;
GType qmi_message_dms_uim_set_ck_protection_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_SET_CK_PROTECTION_OUTPUT (qmi_message_dms_uim_set_ck_protection_output_get_type ())


/**
 * qmi_message_dms_uim_set_ck_protection_output_get_verify_retries_left:
 * @self: a #QmiMessageDmsUimSetCkProtectionOutput.
 * @value_verify_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Verify Retries Left' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_set_ck_protection_output_get_verify_retries_left (
    QmiMessageDmsUimSetCkProtectionOutput *self,
    guint8 *value_verify_retries_left,
    GError **error);


/**
 * qmi_message_dms_uim_set_ck_protection_output_get_result:
 * @self: a QmiMessageDmsUimSetCkProtectionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_set_ck_protection_output_get_result (
    QmiMessageDmsUimSetCkProtectionOutput *self,
    GError **error);


/**
 * qmi_message_dms_uim_set_ck_protection_output_ref:
 * @self: a #QmiMessageDmsUimSetCkProtectionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimSetCkProtectionOutput *qmi_message_dms_uim_set_ck_protection_output_ref (QmiMessageDmsUimSetCkProtectionOutput *self);

/**
 * qmi_message_dms_uim_set_ck_protection_output_unref:
 * @self: a #QmiMessageDmsUimSetCkProtectionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_set_ck_protection_output_unref (QmiMessageDmsUimSetCkProtectionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimSetCkProtectionOutput, qmi_message_dms_uim_set_ck_protection_output_unref)

/**
 * qmi_message_dms_uim_set_ck_protection_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsUimSetCkProtectionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsUimSetCkProtectionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_set_ck_protection_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsUimSetCkProtectionOutput *qmi_message_dms_uim_set_ck_protection_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS UIM Unblock CK */


/* --- Input -- */

/**
 * QmiMessageDmsUimUnblockCkInput:
 *
 * The #QmiMessageDmsUimUnblockCkInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimUnblockCkInput QmiMessageDmsUimUnblockCkInput;
GType qmi_message_dms_uim_unblock_ck_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_UNBLOCK_CK_INPUT (qmi_message_dms_uim_unblock_ck_input_get_type ())


/**
 * qmi_message_dms_uim_unblock_ck_input_get_facility:
 * @self: a #QmiMessageDmsUimUnblockCkInput.
 * @value_facility_facility: (out)(optional): a placeholder for the output #QmiDmsUimFacility, or %NULL if not required.
 * @value_facility_facility_control_key: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Facility' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_unblock_ck_input_get_facility (
    QmiMessageDmsUimUnblockCkInput *self,
    QmiDmsUimFacility *value_facility_facility,
    const gchar **value_facility_facility_control_key,
    GError **error);


/**
 * qmi_message_dms_uim_unblock_ck_input_set_facility:
 * @self: a #QmiMessageDmsUimUnblockCkInput.
 * @value_facility_facility: a #QmiDmsUimFacility.
 * @value_facility_facility_control_key: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Facility' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_unblock_ck_input_set_facility (
    QmiMessageDmsUimUnblockCkInput *self,
    QmiDmsUimFacility value_facility_facility,
    const gchar *value_facility_facility_control_key,
    GError **error);


/**
 * qmi_message_dms_uim_unblock_ck_input_ref:
 * @self: a #QmiMessageDmsUimUnblockCkInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimUnblockCkInput *qmi_message_dms_uim_unblock_ck_input_ref (QmiMessageDmsUimUnblockCkInput *self);

/**
 * qmi_message_dms_uim_unblock_ck_input_unref:
 * @self: a #QmiMessageDmsUimUnblockCkInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_unblock_ck_input_unref (QmiMessageDmsUimUnblockCkInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimUnblockCkInput, qmi_message_dms_uim_unblock_ck_input_unref)

/**
 * qmi_message_dms_uim_unblock_ck_input_new:
 *
 * Allocates a new #QmiMessageDmsUimUnblockCkInput.
 *
 * Returns: the newly created #QmiMessageDmsUimUnblockCkInput. The returned value should be freed with qmi_message_dms_uim_unblock_ck_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimUnblockCkInput *qmi_message_dms_uim_unblock_ck_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsUimUnblockCkOutput:
 *
 * The #QmiMessageDmsUimUnblockCkOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimUnblockCkOutput QmiMessageDmsUimUnblockCkOutput;
GType qmi_message_dms_uim_unblock_ck_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_UNBLOCK_CK_OUTPUT (qmi_message_dms_uim_unblock_ck_output_get_type ())


/**
 * qmi_message_dms_uim_unblock_ck_output_get_unblock_retries_left:
 * @self: a #QmiMessageDmsUimUnblockCkOutput.
 * @value_unblock_retries_left: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Unblock Retries Left' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_unblock_ck_output_get_unblock_retries_left (
    QmiMessageDmsUimUnblockCkOutput *self,
    guint8 *value_unblock_retries_left,
    GError **error);


/**
 * qmi_message_dms_uim_unblock_ck_output_get_result:
 * @self: a QmiMessageDmsUimUnblockCkOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_unblock_ck_output_get_result (
    QmiMessageDmsUimUnblockCkOutput *self,
    GError **error);


/**
 * qmi_message_dms_uim_unblock_ck_output_ref:
 * @self: a #QmiMessageDmsUimUnblockCkOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimUnblockCkOutput *qmi_message_dms_uim_unblock_ck_output_ref (QmiMessageDmsUimUnblockCkOutput *self);

/**
 * qmi_message_dms_uim_unblock_ck_output_unref:
 * @self: a #QmiMessageDmsUimUnblockCkOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_unblock_ck_output_unref (QmiMessageDmsUimUnblockCkOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimUnblockCkOutput, qmi_message_dms_uim_unblock_ck_output_unref)

/**
 * qmi_message_dms_uim_unblock_ck_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsUimUnblockCkOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsUimUnblockCkOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_unblock_ck_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsUimUnblockCkOutput *qmi_message_dms_uim_unblock_ck_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS UIM Get IMSI */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsUimGetImsiOutput:
 *
 * The #QmiMessageDmsUimGetImsiOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimGetImsiOutput QmiMessageDmsUimGetImsiOutput;
GType qmi_message_dms_uim_get_imsi_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_GET_IMSI_OUTPUT (qmi_message_dms_uim_get_imsi_output_get_type ())


/**
 * qmi_message_dms_uim_get_imsi_output_get_result:
 * @self: a QmiMessageDmsUimGetImsiOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_imsi_output_get_result (
    QmiMessageDmsUimGetImsiOutput *self,
    GError **error);


/**
 * qmi_message_dms_uim_get_imsi_output_get_imsi:
 * @self: a #QmiMessageDmsUimGetImsiOutput.
 * @value_imsi: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMSI' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_imsi_output_get_imsi (
    QmiMessageDmsUimGetImsiOutput *self,
    const gchar **value_imsi,
    GError **error);


/**
 * qmi_message_dms_uim_get_imsi_output_ref:
 * @self: a #QmiMessageDmsUimGetImsiOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimGetImsiOutput *qmi_message_dms_uim_get_imsi_output_ref (QmiMessageDmsUimGetImsiOutput *self);

/**
 * qmi_message_dms_uim_get_imsi_output_unref:
 * @self: a #QmiMessageDmsUimGetImsiOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_get_imsi_output_unref (QmiMessageDmsUimGetImsiOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimGetImsiOutput, qmi_message_dms_uim_get_imsi_output_unref)

/**
 * qmi_message_dms_uim_get_imsi_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsUimGetImsiOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsUimGetImsiOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_get_imsi_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsUimGetImsiOutput *qmi_message_dms_uim_get_imsi_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS UIM Get State */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsUimGetStateOutput:
 *
 * The #QmiMessageDmsUimGetStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsUimGetStateOutput QmiMessageDmsUimGetStateOutput;
GType qmi_message_dms_uim_get_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_UIM_GET_STATE_OUTPUT (qmi_message_dms_uim_get_state_output_get_type ())


/**
 * qmi_message_dms_uim_get_state_output_get_result:
 * @self: a QmiMessageDmsUimGetStateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_state_output_get_result (
    QmiMessageDmsUimGetStateOutput *self,
    GError **error);


/**
 * qmi_message_dms_uim_get_state_output_get_state:
 * @self: a #QmiMessageDmsUimGetStateOutput.
 * @value_state: (out)(optional): a placeholder for the output #QmiDmsUimState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_uim_get_state_output_get_state (
    QmiMessageDmsUimGetStateOutput *self,
    QmiDmsUimState *value_state,
    GError **error);


/**
 * qmi_message_dms_uim_get_state_output_ref:
 * @self: a #QmiMessageDmsUimGetStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsUimGetStateOutput *qmi_message_dms_uim_get_state_output_ref (QmiMessageDmsUimGetStateOutput *self);

/**
 * qmi_message_dms_uim_get_state_output_unref:
 * @self: a #QmiMessageDmsUimGetStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_uim_get_state_output_unref (QmiMessageDmsUimGetStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsUimGetStateOutput, qmi_message_dms_uim_get_state_output_unref)

/**
 * qmi_message_dms_uim_get_state_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsUimGetStateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsUimGetStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_get_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsUimGetStateOutput *qmi_message_dms_uim_get_state_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Band Capabilities */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetBandCapabilitiesOutput:
 *
 * The #QmiMessageDmsGetBandCapabilitiesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetBandCapabilitiesOutput QmiMessageDmsGetBandCapabilitiesOutput;
GType qmi_message_dms_get_band_capabilities_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_BAND_CAPABILITIES_OUTPUT (qmi_message_dms_get_band_capabilities_output_get_type ())


/**
 * qmi_message_dms_get_band_capabilities_output_get_result:
 * @self: a QmiMessageDmsGetBandCapabilitiesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_band_capabilities_output_get_result (
    QmiMessageDmsGetBandCapabilitiesOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_band_capabilities_output_get_band_capability:
 * @self: a #QmiMessageDmsGetBandCapabilitiesOutput.
 * @value_band_capability: (out)(optional): a placeholder for the output #QmiDmsBandCapability, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Band Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_band_capabilities_output_get_band_capability (
    QmiMessageDmsGetBandCapabilitiesOutput *self,
    QmiDmsBandCapability *value_band_capability,
    GError **error);


/**
 * qmi_message_dms_get_band_capabilities_output_get_lte_band_capability:
 * @self: a #QmiMessageDmsGetBandCapabilitiesOutput.
 * @value_lte_band_capability: (out)(optional): a placeholder for the output #QmiDmsLteBandCapability, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Band Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_band_capabilities_output_get_lte_band_capability (
    QmiMessageDmsGetBandCapabilitiesOutput *self,
    QmiDmsLteBandCapability *value_lte_band_capability,
    GError **error);


/**
 * qmi_message_dms_get_band_capabilities_output_get_extended_lte_band_capability:
 * @self: a #QmiMessageDmsGetBandCapabilitiesOutput.
 * @value_extended_lte_band_capability: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended LTE Band Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_dms_get_band_capabilities_output_get_extended_lte_band_capability (
    QmiMessageDmsGetBandCapabilitiesOutput *self,
    GArray **value_extended_lte_band_capability,
    GError **error);


/**
 * qmi_message_dms_get_band_capabilities_output_get_nr5g_band_capability:
 * @self: a #QmiMessageDmsGetBandCapabilitiesOutput.
 * @value_nr5g_band_capability: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G Band Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_get_band_capabilities_output_get_nr5g_band_capability (
    QmiMessageDmsGetBandCapabilitiesOutput *self,
    GArray **value_nr5g_band_capability,
    GError **error);


/**
 * qmi_message_dms_get_band_capabilities_output_ref:
 * @self: a #QmiMessageDmsGetBandCapabilitiesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetBandCapabilitiesOutput *qmi_message_dms_get_band_capabilities_output_ref (QmiMessageDmsGetBandCapabilitiesOutput *self);

/**
 * qmi_message_dms_get_band_capabilities_output_unref:
 * @self: a #QmiMessageDmsGetBandCapabilitiesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_band_capabilities_output_unref (QmiMessageDmsGetBandCapabilitiesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetBandCapabilitiesOutput, qmi_message_dms_get_band_capabilities_output_unref)

/**
 * qmi_message_dms_get_band_capabilities_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetBandCapabilitiesOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetBandCapabilitiesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_band_capabilities_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetBandCapabilitiesOutput *qmi_message_dms_get_band_capabilities_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Factory SKU */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetFactorySkuOutput:
 *
 * The #QmiMessageDmsGetFactorySkuOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetFactorySkuOutput QmiMessageDmsGetFactorySkuOutput;
GType qmi_message_dms_get_factory_sku_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_FACTORY_SKU_OUTPUT (qmi_message_dms_get_factory_sku_output_get_type ())


/**
 * qmi_message_dms_get_factory_sku_output_get_result:
 * @self: a QmiMessageDmsGetFactorySkuOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_factory_sku_output_get_result (
    QmiMessageDmsGetFactorySkuOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_factory_sku_output_get_sku:
 * @self: a #QmiMessageDmsGetFactorySkuOutput.
 * @value_sku: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SKU' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_factory_sku_output_get_sku (
    QmiMessageDmsGetFactorySkuOutput *self,
    const gchar **value_sku,
    GError **error);


/**
 * qmi_message_dms_get_factory_sku_output_ref:
 * @self: a #QmiMessageDmsGetFactorySkuOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetFactorySkuOutput *qmi_message_dms_get_factory_sku_output_ref (QmiMessageDmsGetFactorySkuOutput *self);

/**
 * qmi_message_dms_get_factory_sku_output_unref:
 * @self: a #QmiMessageDmsGetFactorySkuOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_factory_sku_output_unref (QmiMessageDmsGetFactorySkuOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetFactorySkuOutput, qmi_message_dms_get_factory_sku_output_unref)

/**
 * qmi_message_dms_get_factory_sku_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetFactorySkuOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetFactorySkuOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_factory_sku_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetFactorySkuOutput *qmi_message_dms_get_factory_sku_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Firmware Preference */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageDmsGetFirmwarePreferenceOutputListImage:
 * @type: a #QmiDmsFirmwareImageType.
 * @unique_id: a #GArray of #guint8 elements.
 * @build_id: a string.
 *
 * A QmiMessageDmsGetFirmwarePreferenceOutputListImage struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetFirmwarePreferenceOutputListImage {
    QmiDmsFirmwareImageType type;
    GArray *unique_id;
    gchar *build_id;
} QmiMessageDmsGetFirmwarePreferenceOutputListImage;

GType qmi_message_dms_get_firmware_preference_output_list_image_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageDmsGetFirmwarePreferenceOutput:
 *
 * The #QmiMessageDmsGetFirmwarePreferenceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetFirmwarePreferenceOutput QmiMessageDmsGetFirmwarePreferenceOutput;
GType qmi_message_dms_get_firmware_preference_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_FIRMWARE_PREFERENCE_OUTPUT (qmi_message_dms_get_firmware_preference_output_get_type ())


/**
 * qmi_message_dms_get_firmware_preference_output_get_result:
 * @self: a QmiMessageDmsGetFirmwarePreferenceOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_firmware_preference_output_get_result (
    QmiMessageDmsGetFirmwarePreferenceOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_firmware_preference_output_get_list: (skip)
 * @self: a #QmiMessageDmsGetFirmwarePreferenceOutput.
 * @value_list: (out)(optional)(element-type QmiMessageDmsGetFirmwarePreferenceOutputListImage)(transfer none): a placeholder for the output #GArray of #QmiMessageDmsGetFirmwarePreferenceOutputListImage elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_firmware_preference_output_get_list (
    QmiMessageDmsGetFirmwarePreferenceOutput *self,
    GArray **value_list,
    GError **error);


/**
 * qmi_message_dms_get_firmware_preference_output_get_list_gir: (rename-to qmi_message_dms_get_firmware_preference_output_get_list)
 * @self: a #QmiMessageDmsGetFirmwarePreferenceOutput.
 * @value_list_ptr: (out)(optional)(element-type QmiMessageDmsGetFirmwarePreferenceOutputListImage)(transfer none): a placeholder for the output array of #QmiMessageDmsGetFirmwarePreferenceOutputListImage elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Version of qmi_message_dms_get_firmware_preference_output_get_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_get_firmware_preference_output_get_list_gir (
    QmiMessageDmsGetFirmwarePreferenceOutput *self,
    GPtrArray **value_list_ptr,
    GError **error);


/**
 * qmi_message_dms_get_firmware_preference_output_ref:
 * @self: a #QmiMessageDmsGetFirmwarePreferenceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetFirmwarePreferenceOutput *qmi_message_dms_get_firmware_preference_output_ref (QmiMessageDmsGetFirmwarePreferenceOutput *self);

/**
 * qmi_message_dms_get_firmware_preference_output_unref:
 * @self: a #QmiMessageDmsGetFirmwarePreferenceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_firmware_preference_output_unref (QmiMessageDmsGetFirmwarePreferenceOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetFirmwarePreferenceOutput, qmi_message_dms_get_firmware_preference_output_unref)

/**
 * qmi_message_dms_get_firmware_preference_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetFirmwarePreferenceOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetFirmwarePreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_firmware_preference_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetFirmwarePreferenceOutput *qmi_message_dms_get_firmware_preference_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Set Firmware Preference */


/* --- Input -- */


/**
 * QmiMessageDmsSetFirmwarePreferenceInputListImage:
 * @type: a #QmiDmsFirmwareImageType.
 * @unique_id: a #GArray of #guint8 elements.
 * @build_id: a string.
 *
 * A QmiMessageDmsSetFirmwarePreferenceInputListImage struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetFirmwarePreferenceInputListImage {
    QmiDmsFirmwareImageType type;
    GArray *unique_id;
    gchar *build_id;
} QmiMessageDmsSetFirmwarePreferenceInputListImage;

GType qmi_message_dms_set_firmware_preference_input_list_image_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageDmsSetFirmwarePreferenceInput:
 *
 * The #QmiMessageDmsSetFirmwarePreferenceInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetFirmwarePreferenceInput QmiMessageDmsSetFirmwarePreferenceInput;
GType qmi_message_dms_set_firmware_preference_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_FIRMWARE_PREFERENCE_INPUT (qmi_message_dms_set_firmware_preference_input_get_type ())


/**
 * qmi_message_dms_set_firmware_preference_input_get_modem_storage_index:
 * @self: a #QmiMessageDmsSetFirmwarePreferenceInput.
 * @value_modem_storage_index: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Modem Storage Index' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_firmware_preference_input_get_modem_storage_index (
    QmiMessageDmsSetFirmwarePreferenceInput *self,
    guint8 *value_modem_storage_index,
    GError **error);


/**
 * qmi_message_dms_set_firmware_preference_input_set_modem_storage_index:
 * @self: a #QmiMessageDmsSetFirmwarePreferenceInput.
 * @value_modem_storage_index: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Modem Storage Index' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_firmware_preference_input_set_modem_storage_index (
    QmiMessageDmsSetFirmwarePreferenceInput *self,
    guint8 value_modem_storage_index,
    GError **error);


/**
 * qmi_message_dms_set_firmware_preference_input_get_download_override:
 * @self: a #QmiMessageDmsSetFirmwarePreferenceInput.
 * @value_download_override: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Download Override' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_firmware_preference_input_get_download_override (
    QmiMessageDmsSetFirmwarePreferenceInput *self,
    gboolean *value_download_override,
    GError **error);


/**
 * qmi_message_dms_set_firmware_preference_input_set_download_override:
 * @self: a #QmiMessageDmsSetFirmwarePreferenceInput.
 * @value_download_override: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Download Override' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_firmware_preference_input_set_download_override (
    QmiMessageDmsSetFirmwarePreferenceInput *self,
    gboolean value_download_override,
    GError **error);


/**
 * qmi_message_dms_set_firmware_preference_input_get_list: (skip)
 * @self: a #QmiMessageDmsSetFirmwarePreferenceInput.
 * @value_list: (out)(optional)(element-type QmiMessageDmsSetFirmwarePreferenceInputListImage)(transfer none): a placeholder for the output #GArray of #QmiMessageDmsSetFirmwarePreferenceInputListImage elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_firmware_preference_input_get_list (
    QmiMessageDmsSetFirmwarePreferenceInput *self,
    GArray **value_list,
    GError **error);


/**
 * qmi_message_dms_set_firmware_preference_input_get_list_gir: (rename-to qmi_message_dms_set_firmware_preference_input_get_list)
 * @self: a #QmiMessageDmsSetFirmwarePreferenceInput.
 * @value_list_ptr: (out)(optional)(element-type QmiMessageDmsSetFirmwarePreferenceInputListImage)(transfer none): a placeholder for the output array of #QmiMessageDmsSetFirmwarePreferenceInputListImage elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Version of qmi_message_dms_set_firmware_preference_input_get_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_set_firmware_preference_input_get_list_gir (
    QmiMessageDmsSetFirmwarePreferenceInput *self,
    GPtrArray **value_list_ptr,
    GError **error);


/**
 * qmi_message_dms_set_firmware_preference_input_set_list: (skip)
 * @self: a #QmiMessageDmsSetFirmwarePreferenceInput.
 * @value_list: (in)(element-type QmiMessageDmsSetFirmwarePreferenceInputListImage)(transfer none): a #GArray of #QmiMessageDmsSetFirmwarePreferenceInputListImage elements. A new reference to @value_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_firmware_preference_input_set_list (
    QmiMessageDmsSetFirmwarePreferenceInput *self,
    GArray *value_list,
    GError **error);


/**
 * qmi_message_dms_set_firmware_preference_input_set_list_gir: (rename-to qmi_message_dms_set_firmware_preference_input_set_list)
 * @self: a #QmiMessageDmsSetFirmwarePreferenceInput.
 * @value_list_ptr: (in)(element-type QmiMessageDmsSetFirmwarePreferenceInputListImage)(transfer none): array of #QmiMessageDmsSetFirmwarePreferenceInputListImage elements. The contents of the given array will be copied, the #GPtrArray will not increase its reference count.
 * @error: Return location for error or %NULL.
 *
 * Set the 'List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_set_firmware_preference_input_set_list_gir (
    QmiMessageDmsSetFirmwarePreferenceInput *self,
    GPtrArray *value_list_ptr,
    GError **error);


/**
 * qmi_message_dms_set_firmware_preference_input_ref:
 * @self: a #QmiMessageDmsSetFirmwarePreferenceInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetFirmwarePreferenceInput *qmi_message_dms_set_firmware_preference_input_ref (QmiMessageDmsSetFirmwarePreferenceInput *self);

/**
 * qmi_message_dms_set_firmware_preference_input_unref:
 * @self: a #QmiMessageDmsSetFirmwarePreferenceInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_firmware_preference_input_unref (QmiMessageDmsSetFirmwarePreferenceInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetFirmwarePreferenceInput, qmi_message_dms_set_firmware_preference_input_unref)

/**
 * qmi_message_dms_set_firmware_preference_input_new:
 *
 * Allocates a new #QmiMessageDmsSetFirmwarePreferenceInput.
 *
 * Returns: the newly created #QmiMessageDmsSetFirmwarePreferenceInput. The returned value should be freed with qmi_message_dms_set_firmware_preference_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetFirmwarePreferenceInput *qmi_message_dms_set_firmware_preference_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsSetFirmwarePreferenceOutput:
 *
 * The #QmiMessageDmsSetFirmwarePreferenceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetFirmwarePreferenceOutput QmiMessageDmsSetFirmwarePreferenceOutput;
GType qmi_message_dms_set_firmware_preference_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_FIRMWARE_PREFERENCE_OUTPUT (qmi_message_dms_set_firmware_preference_output_get_type ())


/**
 * qmi_message_dms_set_firmware_preference_output_get_result:
 * @self: a QmiMessageDmsSetFirmwarePreferenceOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_firmware_preference_output_get_result (
    QmiMessageDmsSetFirmwarePreferenceOutput *self,
    GError **error);


/**
 * qmi_message_dms_set_firmware_preference_output_get_image_download_list:
 * @self: a #QmiMessageDmsSetFirmwarePreferenceOutput.
 * @value_image_download_list: (out)(optional)(element-type QmiDmsFirmwareImageType)(transfer none): a placeholder for the output #GArray of #QmiDmsFirmwareImageType elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Image Download List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_firmware_preference_output_get_image_download_list (
    QmiMessageDmsSetFirmwarePreferenceOutput *self,
    GArray **value_image_download_list,
    GError **error);


/**
 * qmi_message_dms_set_firmware_preference_output_ref:
 * @self: a #QmiMessageDmsSetFirmwarePreferenceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetFirmwarePreferenceOutput *qmi_message_dms_set_firmware_preference_output_ref (QmiMessageDmsSetFirmwarePreferenceOutput *self);

/**
 * qmi_message_dms_set_firmware_preference_output_unref:
 * @self: a #QmiMessageDmsSetFirmwarePreferenceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_firmware_preference_output_unref (QmiMessageDmsSetFirmwarePreferenceOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetFirmwarePreferenceOutput, qmi_message_dms_set_firmware_preference_output_unref)

/**
 * qmi_message_dms_set_firmware_preference_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSetFirmwarePreferenceOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSetFirmwarePreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_firmware_preference_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSetFirmwarePreferenceOutput *qmi_message_dms_set_firmware_preference_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS List Stored Images */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageDmsListStoredImagesOutputListImageSublistSublistElement:
 * @storage_index: a #guint8.
 * @failure_count: a #guint8.
 * @unique_id: a #GArray of #guint8 elements.
 * @build_id: a string.
 *
 * A QmiMessageDmsListStoredImagesOutputListImageSublistSublistElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsListStoredImagesOutputListImageSublistSublistElement {
    guint8 storage_index;
    guint8 failure_count;
    GArray *unique_id;
    gchar *build_id;
} QmiMessageDmsListStoredImagesOutputListImageSublistSublistElement;


/**
 * QmiMessageDmsListStoredImagesOutputListImage: (skip)
 * @type: a #QmiDmsFirmwareImageType.
 * @maximum_images: a #guint8.
 * @index_of_running_image: a #guint8.
 * @sublist: a #GArray of #QmiMessageDmsListStoredImagesOutputListImageSublistSublistElement elements.
 *
 * A QmiMessageDmsListStoredImagesOutputListImage struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsListStoredImagesOutputListImage {
    QmiDmsFirmwareImageType type;
    guint8 maximum_images;
    guint8 index_of_running_image;
    GArray *sublist;
} QmiMessageDmsListStoredImagesOutputListImage;

GType qmi_message_dms_list_stored_images_output_list_image_sublist_sublist_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageDmsListStoredImagesOutputListImageGir: (rename-to QmiMessageDmsListStoredImagesOutputListImage)
 * @type: a #QmiDmsFirmwareImageType.
 * @maximum_images: a #guint8.
 * @index_of_running_image: a #guint8.
 * @sublist: (element-type QmiMessageDmsListStoredImagesOutputListImageSublistSublistElement): an array of #QmiMessageDmsListStoredImagesOutputListImageSublistSublistElement elements.
 *
 * A QmiMessageDmsListStoredImagesOutputListImageGir struct.
 *
 * This type is a version of #QmiMessageDmsListStoredImagesOutputListImage, using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageDmsListStoredImagesOutputListImageGir {
    QmiDmsFirmwareImageType type;
    guint8 maximum_images;
    guint8 index_of_running_image;
    GPtrArray *sublist;
} QmiMessageDmsListStoredImagesOutputListImageGir;

GType qmi_message_dms_list_stored_images_output_list_image_gir_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageDmsListStoredImagesOutput:
 *
 * The #QmiMessageDmsListStoredImagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsListStoredImagesOutput QmiMessageDmsListStoredImagesOutput;
GType qmi_message_dms_list_stored_images_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_LIST_STORED_IMAGES_OUTPUT (qmi_message_dms_list_stored_images_output_get_type ())


/**
 * qmi_message_dms_list_stored_images_output_get_result:
 * @self: a QmiMessageDmsListStoredImagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_list_stored_images_output_get_result (
    QmiMessageDmsListStoredImagesOutput *self,
    GError **error);


/**
 * qmi_message_dms_list_stored_images_output_get_list: (skip)
 * @self: a #QmiMessageDmsListStoredImagesOutput.
 * @value_list: (out)(optional)(element-type QmiMessageDmsListStoredImagesOutputListImage)(transfer none): a placeholder for the output #GArray of #QmiMessageDmsListStoredImagesOutputListImage elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_list_stored_images_output_get_list (
    QmiMessageDmsListStoredImagesOutput *self,
    GArray **value_list,
    GError **error);


/**
 * qmi_message_dms_list_stored_images_output_get_list_gir: (rename-to qmi_message_dms_list_stored_images_output_get_list)
 * @self: a #QmiMessageDmsListStoredImagesOutput.
 * @value_list_ptr: (out)(optional)(element-type QmiMessageDmsListStoredImagesOutputListImageGir)(transfer none): a placeholder for the output array of #QmiMessageDmsListStoredImagesOutputListImage elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Version of qmi_message_dms_list_stored_images_output_get_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_list_stored_images_output_get_list_gir (
    QmiMessageDmsListStoredImagesOutput *self,
    GPtrArray **value_list_ptr,
    GError **error);


/**
 * qmi_message_dms_list_stored_images_output_ref:
 * @self: a #QmiMessageDmsListStoredImagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsListStoredImagesOutput *qmi_message_dms_list_stored_images_output_ref (QmiMessageDmsListStoredImagesOutput *self);

/**
 * qmi_message_dms_list_stored_images_output_unref:
 * @self: a #QmiMessageDmsListStoredImagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_list_stored_images_output_unref (QmiMessageDmsListStoredImagesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsListStoredImagesOutput, qmi_message_dms_list_stored_images_output_unref)

/**
 * qmi_message_dms_list_stored_images_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsListStoredImagesOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsListStoredImagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_list_stored_images_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsListStoredImagesOutput *qmi_message_dms_list_stored_images_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Delete Stored Image */


/* --- Input -- */

/**
 * QmiMessageDmsDeleteStoredImageInput:
 *
 * The #QmiMessageDmsDeleteStoredImageInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsDeleteStoredImageInput QmiMessageDmsDeleteStoredImageInput;
GType qmi_message_dms_delete_stored_image_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_DELETE_STORED_IMAGE_INPUT (qmi_message_dms_delete_stored_image_input_get_type ())


/**
 * qmi_message_dms_delete_stored_image_input_get_image_details:
 * @self: a #QmiMessageDmsDeleteStoredImageInput.
 * @value_image_details_type: (out)(optional): a placeholder for the output #QmiDmsFirmwareImageType, or %NULL if not required.
 * @value_image_details_unique_id: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_image_details_build_id: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Image Details' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_delete_stored_image_input_get_image_details (
    QmiMessageDmsDeleteStoredImageInput *self,
    QmiDmsFirmwareImageType *value_image_details_type,
    GArray **value_image_details_unique_id,
    const gchar **value_image_details_build_id,
    GError **error);


/**
 * qmi_message_dms_delete_stored_image_input_set_image_details:
 * @self: a #QmiMessageDmsDeleteStoredImageInput.
 * @value_image_details_type: a #QmiDmsFirmwareImageType.
 * @value_image_details_unique_id: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_image_details_unique_id will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @value_image_details_build_id: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Image Details' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_delete_stored_image_input_set_image_details (
    QmiMessageDmsDeleteStoredImageInput *self,
    QmiDmsFirmwareImageType value_image_details_type,
    GArray *value_image_details_unique_id,
    const gchar *value_image_details_build_id,
    GError **error);


/**
 * qmi_message_dms_delete_stored_image_input_ref:
 * @self: a #QmiMessageDmsDeleteStoredImageInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsDeleteStoredImageInput *qmi_message_dms_delete_stored_image_input_ref (QmiMessageDmsDeleteStoredImageInput *self);

/**
 * qmi_message_dms_delete_stored_image_input_unref:
 * @self: a #QmiMessageDmsDeleteStoredImageInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_delete_stored_image_input_unref (QmiMessageDmsDeleteStoredImageInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsDeleteStoredImageInput, qmi_message_dms_delete_stored_image_input_unref)

/**
 * qmi_message_dms_delete_stored_image_input_new:
 *
 * Allocates a new #QmiMessageDmsDeleteStoredImageInput.
 *
 * Returns: the newly created #QmiMessageDmsDeleteStoredImageInput. The returned value should be freed with qmi_message_dms_delete_stored_image_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsDeleteStoredImageInput *qmi_message_dms_delete_stored_image_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsDeleteStoredImageOutput:
 *
 * The #QmiMessageDmsDeleteStoredImageOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsDeleteStoredImageOutput QmiMessageDmsDeleteStoredImageOutput;
GType qmi_message_dms_delete_stored_image_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_DELETE_STORED_IMAGE_OUTPUT (qmi_message_dms_delete_stored_image_output_get_type ())


/**
 * qmi_message_dms_delete_stored_image_output_get_result:
 * @self: a QmiMessageDmsDeleteStoredImageOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_delete_stored_image_output_get_result (
    QmiMessageDmsDeleteStoredImageOutput *self,
    GError **error);


/**
 * qmi_message_dms_delete_stored_image_output_ref:
 * @self: a #QmiMessageDmsDeleteStoredImageOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsDeleteStoredImageOutput *qmi_message_dms_delete_stored_image_output_ref (QmiMessageDmsDeleteStoredImageOutput *self);

/**
 * qmi_message_dms_delete_stored_image_output_unref:
 * @self: a #QmiMessageDmsDeleteStoredImageOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_delete_stored_image_output_unref (QmiMessageDmsDeleteStoredImageOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsDeleteStoredImageOutput, qmi_message_dms_delete_stored_image_output_unref)

/**
 * qmi_message_dms_delete_stored_image_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsDeleteStoredImageOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsDeleteStoredImageOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_delete_stored_image_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsDeleteStoredImageOutput *qmi_message_dms_delete_stored_image_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Set Time */


/* --- Input -- */

/**
 * QmiMessageDmsSetTimeInput:
 *
 * The #QmiMessageDmsSetTimeInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetTimeInput QmiMessageDmsSetTimeInput;
GType qmi_message_dms_set_time_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_TIME_INPUT (qmi_message_dms_set_time_input_get_type ())


/**
 * qmi_message_dms_set_time_input_get_time_reference_type:
 * @self: a #QmiMessageDmsSetTimeInput.
 * @value_time_reference_type: (out)(optional): a placeholder for the output #QmiDmsTimeReferenceType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Reference Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_time_input_get_time_reference_type (
    QmiMessageDmsSetTimeInput *self,
    QmiDmsTimeReferenceType *value_time_reference_type,
    GError **error);


/**
 * qmi_message_dms_set_time_input_set_time_reference_type:
 * @self: a #QmiMessageDmsSetTimeInput.
 * @value_time_reference_type: a #QmiDmsTimeReferenceType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Time Reference Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_time_input_set_time_reference_type (
    QmiMessageDmsSetTimeInput *self,
    QmiDmsTimeReferenceType value_time_reference_type,
    GError **error);


/**
 * qmi_message_dms_set_time_input_get_time_value:
 * @self: a #QmiMessageDmsSetTimeInput.
 * @value_time_value: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Value' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_time_input_get_time_value (
    QmiMessageDmsSetTimeInput *self,
    guint64 *value_time_value,
    GError **error);


/**
 * qmi_message_dms_set_time_input_set_time_value:
 * @self: a #QmiMessageDmsSetTimeInput.
 * @value_time_value: a #guint64.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Time Value' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_time_input_set_time_value (
    QmiMessageDmsSetTimeInput *self,
    guint64 value_time_value,
    GError **error);


/**
 * qmi_message_dms_set_time_input_ref:
 * @self: a #QmiMessageDmsSetTimeInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetTimeInput *qmi_message_dms_set_time_input_ref (QmiMessageDmsSetTimeInput *self);

/**
 * qmi_message_dms_set_time_input_unref:
 * @self: a #QmiMessageDmsSetTimeInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_time_input_unref (QmiMessageDmsSetTimeInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetTimeInput, qmi_message_dms_set_time_input_unref)

/**
 * qmi_message_dms_set_time_input_new:
 *
 * Allocates a new #QmiMessageDmsSetTimeInput.
 *
 * Returns: the newly created #QmiMessageDmsSetTimeInput. The returned value should be freed with qmi_message_dms_set_time_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetTimeInput *qmi_message_dms_set_time_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsSetTimeOutput:
 *
 * The #QmiMessageDmsSetTimeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetTimeOutput QmiMessageDmsSetTimeOutput;
GType qmi_message_dms_set_time_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_TIME_OUTPUT (qmi_message_dms_set_time_output_get_type ())


/**
 * qmi_message_dms_set_time_output_get_result:
 * @self: a QmiMessageDmsSetTimeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_time_output_get_result (
    QmiMessageDmsSetTimeOutput *self,
    GError **error);


/**
 * qmi_message_dms_set_time_output_ref:
 * @self: a #QmiMessageDmsSetTimeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetTimeOutput *qmi_message_dms_set_time_output_ref (QmiMessageDmsSetTimeOutput *self);

/**
 * qmi_message_dms_set_time_output_unref:
 * @self: a #QmiMessageDmsSetTimeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_time_output_unref (QmiMessageDmsSetTimeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetTimeOutput, qmi_message_dms_set_time_output_unref)

/**
 * qmi_message_dms_set_time_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSetTimeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSetTimeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_time_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSetTimeOutput *qmi_message_dms_set_time_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Stored Image Info */


/* --- Input -- */

/**
 * QmiMessageDmsGetStoredImageInfoInput:
 *
 * The #QmiMessageDmsGetStoredImageInfoInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetStoredImageInfoInput QmiMessageDmsGetStoredImageInfoInput;
GType qmi_message_dms_get_stored_image_info_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_STORED_IMAGE_INFO_INPUT (qmi_message_dms_get_stored_image_info_input_get_type ())


/**
 * qmi_message_dms_get_stored_image_info_input_get_image_details:
 * @self: a #QmiMessageDmsGetStoredImageInfoInput.
 * @value_image_details_type: (out)(optional): a placeholder for the output #QmiDmsFirmwareImageType, or %NULL if not required.
 * @value_image_details_unique_id: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_image_details_build_id: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Image Details' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_get_stored_image_info_input_get_image_details (
    QmiMessageDmsGetStoredImageInfoInput *self,
    QmiDmsFirmwareImageType *value_image_details_type,
    GArray **value_image_details_unique_id,
    const gchar **value_image_details_build_id,
    GError **error);


/**
 * qmi_message_dms_get_stored_image_info_input_set_image_details:
 * @self: a #QmiMessageDmsGetStoredImageInfoInput.
 * @value_image_details_type: a #QmiDmsFirmwareImageType.
 * @value_image_details_unique_id: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_image_details_unique_id will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @value_image_details_build_id: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Image Details' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_get_stored_image_info_input_set_image_details (
    QmiMessageDmsGetStoredImageInfoInput *self,
    QmiDmsFirmwareImageType value_image_details_type,
    GArray *value_image_details_unique_id,
    const gchar *value_image_details_build_id,
    GError **error);


/**
 * qmi_message_dms_get_stored_image_info_input_ref:
 * @self: a #QmiMessageDmsGetStoredImageInfoInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetStoredImageInfoInput *qmi_message_dms_get_stored_image_info_input_ref (QmiMessageDmsGetStoredImageInfoInput *self);

/**
 * qmi_message_dms_get_stored_image_info_input_unref:
 * @self: a #QmiMessageDmsGetStoredImageInfoInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_stored_image_info_input_unref (QmiMessageDmsGetStoredImageInfoInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetStoredImageInfoInput, qmi_message_dms_get_stored_image_info_input_unref)

/**
 * qmi_message_dms_get_stored_image_info_input_new:
 *
 * Allocates a new #QmiMessageDmsGetStoredImageInfoInput.
 *
 * Returns: the newly created #QmiMessageDmsGetStoredImageInfoInput. The returned value should be freed with qmi_message_dms_get_stored_image_info_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetStoredImageInfoInput *qmi_message_dms_get_stored_image_info_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsGetStoredImageInfoOutput:
 *
 * The #QmiMessageDmsGetStoredImageInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetStoredImageInfoOutput QmiMessageDmsGetStoredImageInfoOutput;
GType qmi_message_dms_get_stored_image_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_STORED_IMAGE_INFO_OUTPUT (qmi_message_dms_get_stored_image_info_output_get_type ())


/**
 * qmi_message_dms_get_stored_image_info_output_get_result:
 * @self: a QmiMessageDmsGetStoredImageInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_stored_image_info_output_get_result (
    QmiMessageDmsGetStoredImageInfoOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_stored_image_info_output_get_boot_version:
 * @self: a #QmiMessageDmsGetStoredImageInfoOutput.
 * @value_boot_version_major_version: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_boot_version_minor_version: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Boot Version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_stored_image_info_output_get_boot_version (
    QmiMessageDmsGetStoredImageInfoOutput *self,
    guint16 *value_boot_version_major_version,
    guint16 *value_boot_version_minor_version,
    GError **error);


/**
 * qmi_message_dms_get_stored_image_info_output_get_pri_version:
 * @self: a #QmiMessageDmsGetStoredImageInfoOutput.
 * @value_pri_version_pri_version: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_pri_version_pri_info: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PRI Version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_stored_image_info_output_get_pri_version (
    QmiMessageDmsGetStoredImageInfoOutput *self,
    guint32 *value_pri_version_pri_version,
    const gchar **value_pri_version_pri_info,
    GError **error);


/**
 * qmi_message_dms_get_stored_image_info_output_get_oem_lock_id:
 * @self: a #QmiMessageDmsGetStoredImageInfoOutput.
 * @value_oem_lock_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'OEM Lock ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_stored_image_info_output_get_oem_lock_id (
    QmiMessageDmsGetStoredImageInfoOutput *self,
    guint32 *value_oem_lock_id,
    GError **error);


/**
 * qmi_message_dms_get_stored_image_info_output_ref:
 * @self: a #QmiMessageDmsGetStoredImageInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetStoredImageInfoOutput *qmi_message_dms_get_stored_image_info_output_ref (QmiMessageDmsGetStoredImageInfoOutput *self);

/**
 * qmi_message_dms_get_stored_image_info_output_unref:
 * @self: a #QmiMessageDmsGetStoredImageInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_stored_image_info_output_unref (QmiMessageDmsGetStoredImageInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetStoredImageInfoOutput, qmi_message_dms_get_stored_image_info_output_unref)

/**
 * qmi_message_dms_get_stored_image_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetStoredImageInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetStoredImageInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_stored_image_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetStoredImageInfoOutput *qmi_message_dms_get_stored_image_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Alt Net Config */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetAltNetConfigOutput:
 *
 * The #QmiMessageDmsGetAltNetConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetAltNetConfigOutput QmiMessageDmsGetAltNetConfigOutput;
GType qmi_message_dms_get_alt_net_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_ALT_NET_CONFIG_OUTPUT (qmi_message_dms_get_alt_net_config_output_get_type ())


/**
 * qmi_message_dms_get_alt_net_config_output_get_result:
 * @self: a QmiMessageDmsGetAltNetConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_alt_net_config_output_get_result (
    QmiMessageDmsGetAltNetConfigOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_alt_net_config_output_get_config:
 * @self: a #QmiMessageDmsGetAltNetConfigOutput.
 * @value_config: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Config' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_alt_net_config_output_get_config (
    QmiMessageDmsGetAltNetConfigOutput *self,
    gboolean *value_config,
    GError **error);


/**
 * qmi_message_dms_get_alt_net_config_output_ref:
 * @self: a #QmiMessageDmsGetAltNetConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetAltNetConfigOutput *qmi_message_dms_get_alt_net_config_output_ref (QmiMessageDmsGetAltNetConfigOutput *self);

/**
 * qmi_message_dms_get_alt_net_config_output_unref:
 * @self: a #QmiMessageDmsGetAltNetConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_alt_net_config_output_unref (QmiMessageDmsGetAltNetConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetAltNetConfigOutput, qmi_message_dms_get_alt_net_config_output_unref)

/**
 * qmi_message_dms_get_alt_net_config_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetAltNetConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetAltNetConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_alt_net_config_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetAltNetConfigOutput *qmi_message_dms_get_alt_net_config_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Set Alt Net Config */


/* --- Input -- */

/**
 * QmiMessageDmsSetAltNetConfigInput:
 *
 * The #QmiMessageDmsSetAltNetConfigInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetAltNetConfigInput QmiMessageDmsSetAltNetConfigInput;
GType qmi_message_dms_set_alt_net_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_ALT_NET_CONFIG_INPUT (qmi_message_dms_set_alt_net_config_input_get_type ())


/**
 * qmi_message_dms_set_alt_net_config_input_get_config:
 * @self: a #QmiMessageDmsSetAltNetConfigInput.
 * @value_config: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Config' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_alt_net_config_input_get_config (
    QmiMessageDmsSetAltNetConfigInput *self,
    gboolean *value_config,
    GError **error);


/**
 * qmi_message_dms_set_alt_net_config_input_set_config:
 * @self: a #QmiMessageDmsSetAltNetConfigInput.
 * @value_config: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Config' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_alt_net_config_input_set_config (
    QmiMessageDmsSetAltNetConfigInput *self,
    gboolean value_config,
    GError **error);


/**
 * qmi_message_dms_set_alt_net_config_input_ref:
 * @self: a #QmiMessageDmsSetAltNetConfigInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetAltNetConfigInput *qmi_message_dms_set_alt_net_config_input_ref (QmiMessageDmsSetAltNetConfigInput *self);

/**
 * qmi_message_dms_set_alt_net_config_input_unref:
 * @self: a #QmiMessageDmsSetAltNetConfigInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_alt_net_config_input_unref (QmiMessageDmsSetAltNetConfigInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetAltNetConfigInput, qmi_message_dms_set_alt_net_config_input_unref)

/**
 * qmi_message_dms_set_alt_net_config_input_new:
 *
 * Allocates a new #QmiMessageDmsSetAltNetConfigInput.
 *
 * Returns: the newly created #QmiMessageDmsSetAltNetConfigInput. The returned value should be freed with qmi_message_dms_set_alt_net_config_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetAltNetConfigInput *qmi_message_dms_set_alt_net_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsSetAltNetConfigOutput:
 *
 * The #QmiMessageDmsSetAltNetConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetAltNetConfigOutput QmiMessageDmsSetAltNetConfigOutput;
GType qmi_message_dms_set_alt_net_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_ALT_NET_CONFIG_OUTPUT (qmi_message_dms_set_alt_net_config_output_get_type ())


/**
 * qmi_message_dms_set_alt_net_config_output_get_result:
 * @self: a QmiMessageDmsSetAltNetConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_alt_net_config_output_get_result (
    QmiMessageDmsSetAltNetConfigOutput *self,
    GError **error);


/**
 * qmi_message_dms_set_alt_net_config_output_ref:
 * @self: a #QmiMessageDmsSetAltNetConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetAltNetConfigOutput *qmi_message_dms_set_alt_net_config_output_ref (QmiMessageDmsSetAltNetConfigOutput *self);

/**
 * qmi_message_dms_set_alt_net_config_output_unref:
 * @self: a #QmiMessageDmsSetAltNetConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_alt_net_config_output_unref (QmiMessageDmsSetAltNetConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetAltNetConfigOutput, qmi_message_dms_set_alt_net_config_output_unref)

/**
 * qmi_message_dms_set_alt_net_config_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSetAltNetConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSetAltNetConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_alt_net_config_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSetAltNetConfigOutput *qmi_message_dms_set_alt_net_config_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Boot Image Download Mode */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetBootImageDownloadModeOutput:
 *
 * The #QmiMessageDmsGetBootImageDownloadModeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageDmsGetBootImageDownloadModeOutput QmiMessageDmsGetBootImageDownloadModeOutput;
GType qmi_message_dms_get_boot_image_download_mode_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_BOOT_IMAGE_DOWNLOAD_MODE_OUTPUT (qmi_message_dms_get_boot_image_download_mode_output_get_type ())


/**
 * qmi_message_dms_get_boot_image_download_mode_output_get_result:
 * @self: a QmiMessageDmsGetBootImageDownloadModeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_get_boot_image_download_mode_output_get_result (
    QmiMessageDmsGetBootImageDownloadModeOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_boot_image_download_mode_output_get_mode:
 * @self: a #QmiMessageDmsGetBootImageDownloadModeOutput.
 * @value_mode: (out)(optional): a placeholder for the output #QmiDmsBootImageDownloadMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_get_boot_image_download_mode_output_get_mode (
    QmiMessageDmsGetBootImageDownloadModeOutput *self,
    QmiDmsBootImageDownloadMode *value_mode,
    GError **error);


/**
 * qmi_message_dms_get_boot_image_download_mode_output_ref:
 * @self: a #QmiMessageDmsGetBootImageDownloadModeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageDmsGetBootImageDownloadModeOutput *qmi_message_dms_get_boot_image_download_mode_output_ref (QmiMessageDmsGetBootImageDownloadModeOutput *self);

/**
 * qmi_message_dms_get_boot_image_download_mode_output_unref:
 * @self: a #QmiMessageDmsGetBootImageDownloadModeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_dms_get_boot_image_download_mode_output_unref (QmiMessageDmsGetBootImageDownloadModeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetBootImageDownloadModeOutput, qmi_message_dms_get_boot_image_download_mode_output_unref)

/**
 * qmi_message_dms_get_boot_image_download_mode_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetBootImageDownloadModeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetBootImageDownloadModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_boot_image_download_mode_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetBootImageDownloadModeOutput *qmi_message_dms_get_boot_image_download_mode_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Set Boot Image Download Mode */


/* --- Input -- */

/**
 * QmiMessageDmsSetBootImageDownloadModeInput:
 *
 * The #QmiMessageDmsSetBootImageDownloadModeInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageDmsSetBootImageDownloadModeInput QmiMessageDmsSetBootImageDownloadModeInput;
GType qmi_message_dms_set_boot_image_download_mode_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_BOOT_IMAGE_DOWNLOAD_MODE_INPUT (qmi_message_dms_set_boot_image_download_mode_input_get_type ())


/**
 * qmi_message_dms_set_boot_image_download_mode_input_get_mode:
 * @self: a #QmiMessageDmsSetBootImageDownloadModeInput.
 * @value_mode: (out)(optional): a placeholder for the output #QmiDmsBootImageDownloadMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_set_boot_image_download_mode_input_get_mode (
    QmiMessageDmsSetBootImageDownloadModeInput *self,
    QmiDmsBootImageDownloadMode *value_mode,
    GError **error);


/**
 * qmi_message_dms_set_boot_image_download_mode_input_set_mode:
 * @self: a #QmiMessageDmsSetBootImageDownloadModeInput.
 * @value_mode: a #QmiDmsBootImageDownloadMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_set_boot_image_download_mode_input_set_mode (
    QmiMessageDmsSetBootImageDownloadModeInput *self,
    QmiDmsBootImageDownloadMode value_mode,
    GError **error);


/**
 * qmi_message_dms_set_boot_image_download_mode_input_ref:
 * @self: a #QmiMessageDmsSetBootImageDownloadModeInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageDmsSetBootImageDownloadModeInput *qmi_message_dms_set_boot_image_download_mode_input_ref (QmiMessageDmsSetBootImageDownloadModeInput *self);

/**
 * qmi_message_dms_set_boot_image_download_mode_input_unref:
 * @self: a #QmiMessageDmsSetBootImageDownloadModeInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_dms_set_boot_image_download_mode_input_unref (QmiMessageDmsSetBootImageDownloadModeInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetBootImageDownloadModeInput, qmi_message_dms_set_boot_image_download_mode_input_unref)

/**
 * qmi_message_dms_set_boot_image_download_mode_input_new:
 *
 * Allocates a new #QmiMessageDmsSetBootImageDownloadModeInput.
 *
 * Returns: the newly created #QmiMessageDmsSetBootImageDownloadModeInput. The returned value should be freed with qmi_message_dms_set_boot_image_download_mode_input_unref().
 *
 * Since: 1.18
 */
QmiMessageDmsSetBootImageDownloadModeInput *qmi_message_dms_set_boot_image_download_mode_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsSetBootImageDownloadModeOutput:
 *
 * The #QmiMessageDmsSetBootImageDownloadModeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageDmsSetBootImageDownloadModeOutput QmiMessageDmsSetBootImageDownloadModeOutput;
GType qmi_message_dms_set_boot_image_download_mode_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_BOOT_IMAGE_DOWNLOAD_MODE_OUTPUT (qmi_message_dms_set_boot_image_download_mode_output_get_type ())


/**
 * qmi_message_dms_set_boot_image_download_mode_output_get_result:
 * @self: a QmiMessageDmsSetBootImageDownloadModeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_set_boot_image_download_mode_output_get_result (
    QmiMessageDmsSetBootImageDownloadModeOutput *self,
    GError **error);


/**
 * qmi_message_dms_set_boot_image_download_mode_output_ref:
 * @self: a #QmiMessageDmsSetBootImageDownloadModeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageDmsSetBootImageDownloadModeOutput *qmi_message_dms_set_boot_image_download_mode_output_ref (QmiMessageDmsSetBootImageDownloadModeOutput *self);

/**
 * qmi_message_dms_set_boot_image_download_mode_output_unref:
 * @self: a #QmiMessageDmsSetBootImageDownloadModeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_dms_set_boot_image_download_mode_output_unref (QmiMessageDmsSetBootImageDownloadModeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetBootImageDownloadModeOutput, qmi_message_dms_set_boot_image_download_mode_output_unref)

/**
 * qmi_message_dms_set_boot_image_download_mode_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSetBootImageDownloadModeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSetBootImageDownloadModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_boot_image_download_mode_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSetBootImageDownloadModeOutput *qmi_message_dms_set_boot_image_download_mode_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Software Version */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetSoftwareVersionOutput:
 *
 * The #QmiMessageDmsGetSoftwareVersionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsGetSoftwareVersionOutput QmiMessageDmsGetSoftwareVersionOutput;
GType qmi_message_dms_get_software_version_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_SOFTWARE_VERSION_OUTPUT (qmi_message_dms_get_software_version_output_get_type ())


/**
 * qmi_message_dms_get_software_version_output_get_result:
 * @self: a QmiMessageDmsGetSoftwareVersionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_software_version_output_get_result (
    QmiMessageDmsGetSoftwareVersionOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_software_version_output_get_version:
 * @self: a #QmiMessageDmsGetSoftwareVersionOutput.
 * @value_version: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_get_software_version_output_get_version (
    QmiMessageDmsGetSoftwareVersionOutput *self,
    const gchar **value_version,
    GError **error);


/**
 * qmi_message_dms_get_software_version_output_ref:
 * @self: a #QmiMessageDmsGetSoftwareVersionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsGetSoftwareVersionOutput *qmi_message_dms_get_software_version_output_ref (QmiMessageDmsGetSoftwareVersionOutput *self);

/**
 * qmi_message_dms_get_software_version_output_unref:
 * @self: a #QmiMessageDmsGetSoftwareVersionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_get_software_version_output_unref (QmiMessageDmsGetSoftwareVersionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetSoftwareVersionOutput, qmi_message_dms_get_software_version_output_unref)

/**
 * qmi_message_dms_get_software_version_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetSoftwareVersionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetSoftwareVersionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_software_version_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetSoftwareVersionOutput *qmi_message_dms_get_software_version_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Set Service Programming Code */


/* --- Input -- */

/**
 * QmiMessageDmsSetServiceProgrammingCodeInput:
 *
 * The #QmiMessageDmsSetServiceProgrammingCodeInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetServiceProgrammingCodeInput QmiMessageDmsSetServiceProgrammingCodeInput;
GType qmi_message_dms_set_service_programming_code_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_SERVICE_PROGRAMMING_CODE_INPUT (qmi_message_dms_set_service_programming_code_input_get_type ())


/**
 * qmi_message_dms_set_service_programming_code_input_get_new_code:
 * @self: a #QmiMessageDmsSetServiceProgrammingCodeInput.
 * @value_new_code: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'New Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_service_programming_code_input_get_new_code (
    QmiMessageDmsSetServiceProgrammingCodeInput *self,
    const gchar **value_new_code,
    GError **error);


/**
 * qmi_message_dms_set_service_programming_code_input_set_new_code:
 * @self: a #QmiMessageDmsSetServiceProgrammingCodeInput.
 * @value_new_code: a constant string of exactly 6 characters.
 * @error: Return location for error or %NULL.
 *
 * Set the 'New Code' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_service_programming_code_input_set_new_code (
    QmiMessageDmsSetServiceProgrammingCodeInput *self,
    const gchar *value_new_code,
    GError **error);


/**
 * qmi_message_dms_set_service_programming_code_input_get_current_code:
 * @self: a #QmiMessageDmsSetServiceProgrammingCodeInput.
 * @value_current_code: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_service_programming_code_input_get_current_code (
    QmiMessageDmsSetServiceProgrammingCodeInput *self,
    const gchar **value_current_code,
    GError **error);


/**
 * qmi_message_dms_set_service_programming_code_input_set_current_code:
 * @self: a #QmiMessageDmsSetServiceProgrammingCodeInput.
 * @value_current_code: a constant string of exactly 6 characters.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Current Code' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_service_programming_code_input_set_current_code (
    QmiMessageDmsSetServiceProgrammingCodeInput *self,
    const gchar *value_current_code,
    GError **error);


/**
 * qmi_message_dms_set_service_programming_code_input_ref:
 * @self: a #QmiMessageDmsSetServiceProgrammingCodeInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetServiceProgrammingCodeInput *qmi_message_dms_set_service_programming_code_input_ref (QmiMessageDmsSetServiceProgrammingCodeInput *self);

/**
 * qmi_message_dms_set_service_programming_code_input_unref:
 * @self: a #QmiMessageDmsSetServiceProgrammingCodeInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_service_programming_code_input_unref (QmiMessageDmsSetServiceProgrammingCodeInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetServiceProgrammingCodeInput, qmi_message_dms_set_service_programming_code_input_unref)

/**
 * qmi_message_dms_set_service_programming_code_input_new:
 *
 * Allocates a new #QmiMessageDmsSetServiceProgrammingCodeInput.
 *
 * Returns: the newly created #QmiMessageDmsSetServiceProgrammingCodeInput. The returned value should be freed with qmi_message_dms_set_service_programming_code_input_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetServiceProgrammingCodeInput *qmi_message_dms_set_service_programming_code_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsSetServiceProgrammingCodeOutput:
 *
 * The #QmiMessageDmsSetServiceProgrammingCodeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageDmsSetServiceProgrammingCodeOutput QmiMessageDmsSetServiceProgrammingCodeOutput;
GType qmi_message_dms_set_service_programming_code_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_SERVICE_PROGRAMMING_CODE_OUTPUT (qmi_message_dms_set_service_programming_code_output_get_type ())


/**
 * qmi_message_dms_set_service_programming_code_output_get_result:
 * @self: a QmiMessageDmsSetServiceProgrammingCodeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_dms_set_service_programming_code_output_get_result (
    QmiMessageDmsSetServiceProgrammingCodeOutput *self,
    GError **error);


/**
 * qmi_message_dms_set_service_programming_code_output_ref:
 * @self: a #QmiMessageDmsSetServiceProgrammingCodeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageDmsSetServiceProgrammingCodeOutput *qmi_message_dms_set_service_programming_code_output_ref (QmiMessageDmsSetServiceProgrammingCodeOutput *self);

/**
 * qmi_message_dms_set_service_programming_code_output_unref:
 * @self: a #QmiMessageDmsSetServiceProgrammingCodeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_dms_set_service_programming_code_output_unref (QmiMessageDmsSetServiceProgrammingCodeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetServiceProgrammingCodeOutput, qmi_message_dms_set_service_programming_code_output_unref)

/**
 * qmi_message_dms_set_service_programming_code_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSetServiceProgrammingCodeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSetServiceProgrammingCodeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_service_programming_code_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSetServiceProgrammingCodeOutput *qmi_message_dms_set_service_programming_code_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get MAC Address */


/* --- Input -- */

/**
 * QmiMessageDmsGetMacAddressInput:
 *
 * The #QmiMessageDmsGetMacAddressInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageDmsGetMacAddressInput QmiMessageDmsGetMacAddressInput;
GType qmi_message_dms_get_mac_address_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_MAC_ADDRESS_INPUT (qmi_message_dms_get_mac_address_input_get_type ())


/**
 * qmi_message_dms_get_mac_address_input_get_device:
 * @self: a #QmiMessageDmsGetMacAddressInput.
 * @value_device: (out)(optional): a placeholder for the output #QmiDmsMacType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Device' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dms_get_mac_address_input_get_device (
    QmiMessageDmsGetMacAddressInput *self,
    QmiDmsMacType *value_device,
    GError **error);


/**
 * qmi_message_dms_get_mac_address_input_set_device:
 * @self: a #QmiMessageDmsGetMacAddressInput.
 * @value_device: a #QmiDmsMacType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Device' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dms_get_mac_address_input_set_device (
    QmiMessageDmsGetMacAddressInput *self,
    QmiDmsMacType value_device,
    GError **error);


/**
 * qmi_message_dms_get_mac_address_input_ref:
 * @self: a #QmiMessageDmsGetMacAddressInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageDmsGetMacAddressInput *qmi_message_dms_get_mac_address_input_ref (QmiMessageDmsGetMacAddressInput *self);

/**
 * qmi_message_dms_get_mac_address_input_unref:
 * @self: a #QmiMessageDmsGetMacAddressInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_dms_get_mac_address_input_unref (QmiMessageDmsGetMacAddressInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetMacAddressInput, qmi_message_dms_get_mac_address_input_unref)

/**
 * qmi_message_dms_get_mac_address_input_new:
 *
 * Allocates a new #QmiMessageDmsGetMacAddressInput.
 *
 * Returns: the newly created #QmiMessageDmsGetMacAddressInput. The returned value should be freed with qmi_message_dms_get_mac_address_input_unref().
 *
 * Since: 1.26
 */
QmiMessageDmsGetMacAddressInput *qmi_message_dms_get_mac_address_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsGetMacAddressOutput:
 *
 * The #QmiMessageDmsGetMacAddressOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageDmsGetMacAddressOutput QmiMessageDmsGetMacAddressOutput;
GType qmi_message_dms_get_mac_address_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_MAC_ADDRESS_OUTPUT (qmi_message_dms_get_mac_address_output_get_type ())


/**
 * qmi_message_dms_get_mac_address_output_get_result:
 * @self: a QmiMessageDmsGetMacAddressOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_dms_get_mac_address_output_get_result (
    QmiMessageDmsGetMacAddressOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_mac_address_output_get_mac_address:
 * @self: a #QmiMessageDmsGetMacAddressOutput.
 * @value_mac_address: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MAC Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dms_get_mac_address_output_get_mac_address (
    QmiMessageDmsGetMacAddressOutput *self,
    GArray **value_mac_address,
    GError **error);


/**
 * qmi_message_dms_get_mac_address_output_ref:
 * @self: a #QmiMessageDmsGetMacAddressOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageDmsGetMacAddressOutput *qmi_message_dms_get_mac_address_output_ref (QmiMessageDmsGetMacAddressOutput *self);

/**
 * qmi_message_dms_get_mac_address_output_unref:
 * @self: a #QmiMessageDmsGetMacAddressOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_dms_get_mac_address_output_unref (QmiMessageDmsGetMacAddressOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetMacAddressOutput, qmi_message_dms_get_mac_address_output_unref)

/**
 * qmi_message_dms_get_mac_address_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetMacAddressOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetMacAddressOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_mac_address_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetMacAddressOutput *qmi_message_dms_get_mac_address_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsGetSupportedMessagesOutput:
 *
 * The #QmiMessageDmsGetSupportedMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageDmsGetSupportedMessagesOutput QmiMessageDmsGetSupportedMessagesOutput;
GType qmi_message_dms_get_supported_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_GET_SUPPORTED_MESSAGES_OUTPUT (qmi_message_dms_get_supported_messages_output_get_type ())


/**
 * qmi_message_dms_get_supported_messages_output_get_result:
 * @self: a QmiMessageDmsGetSupportedMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_dms_get_supported_messages_output_get_result (
    QmiMessageDmsGetSupportedMessagesOutput *self,
    GError **error);


/**
 * qmi_message_dms_get_supported_messages_output_get_list:
 * @self: a #QmiMessageDmsGetSupportedMessagesOutput.
 * @value_list: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_dms_get_supported_messages_output_get_list (
    QmiMessageDmsGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error);


/**
 * qmi_message_dms_get_supported_messages_output_ref:
 * @self: a #QmiMessageDmsGetSupportedMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageDmsGetSupportedMessagesOutput *qmi_message_dms_get_supported_messages_output_ref (QmiMessageDmsGetSupportedMessagesOutput *self);

/**
 * qmi_message_dms_get_supported_messages_output_unref:
 * @self: a #QmiMessageDmsGetSupportedMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_dms_get_supported_messages_output_unref (QmiMessageDmsGetSupportedMessagesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsGetSupportedMessagesOutput, qmi_message_dms_get_supported_messages_output_unref)

/**
 * qmi_message_dms_get_supported_messages_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsGetSupportedMessagesOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_supported_messages_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsGetSupportedMessagesOutput *qmi_message_dms_get_supported_messages_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS HP Change Device Mode */


/* --- Input -- */

/**
 * QmiMessageDmsHpChangeDeviceModeInput:
 *
 * The #QmiMessageDmsHpChangeDeviceModeInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageDmsHpChangeDeviceModeInput QmiMessageDmsHpChangeDeviceModeInput;
GType qmi_message_dms_hp_change_device_mode_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_HP_CHANGE_DEVICE_MODE_INPUT (qmi_message_dms_hp_change_device_mode_input_get_type ())


/**
 * qmi_message_dms_hp_change_device_mode_input_get_mode:
 * @self: a #QmiMessageDmsHpChangeDeviceModeInput.
 * @value_mode: (out)(optional): a placeholder for the output #QmiDmsHpDeviceMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_hp_change_device_mode_input_get_mode (
    QmiMessageDmsHpChangeDeviceModeInput *self,
    QmiDmsHpDeviceMode *value_mode,
    GError **error);


/**
 * qmi_message_dms_hp_change_device_mode_input_set_mode:
 * @self: a #QmiMessageDmsHpChangeDeviceModeInput.
 * @value_mode: a #QmiDmsHpDeviceMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_hp_change_device_mode_input_set_mode (
    QmiMessageDmsHpChangeDeviceModeInput *self,
    QmiDmsHpDeviceMode value_mode,
    GError **error);


/**
 * qmi_message_dms_hp_change_device_mode_input_ref:
 * @self: a #QmiMessageDmsHpChangeDeviceModeInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageDmsHpChangeDeviceModeInput *qmi_message_dms_hp_change_device_mode_input_ref (QmiMessageDmsHpChangeDeviceModeInput *self);

/**
 * qmi_message_dms_hp_change_device_mode_input_unref:
 * @self: a #QmiMessageDmsHpChangeDeviceModeInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_dms_hp_change_device_mode_input_unref (QmiMessageDmsHpChangeDeviceModeInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsHpChangeDeviceModeInput, qmi_message_dms_hp_change_device_mode_input_unref)

/**
 * qmi_message_dms_hp_change_device_mode_input_new:
 *
 * Allocates a new #QmiMessageDmsHpChangeDeviceModeInput.
 *
 * Returns: the newly created #QmiMessageDmsHpChangeDeviceModeInput. The returned value should be freed with qmi_message_dms_hp_change_device_mode_input_unref().
 *
 * Since: 1.18
 */
QmiMessageDmsHpChangeDeviceModeInput *qmi_message_dms_hp_change_device_mode_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsHpChangeDeviceModeOutput:
 *
 * The #QmiMessageDmsHpChangeDeviceModeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageDmsHpChangeDeviceModeOutput QmiMessageDmsHpChangeDeviceModeOutput;
GType qmi_message_dms_hp_change_device_mode_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_HP_CHANGE_DEVICE_MODE_OUTPUT (qmi_message_dms_hp_change_device_mode_output_get_type ())


/**
 * qmi_message_dms_hp_change_device_mode_output_get_result:
 * @self: a QmiMessageDmsHpChangeDeviceModeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_hp_change_device_mode_output_get_result (
    QmiMessageDmsHpChangeDeviceModeOutput *self,
    GError **error);


/**
 * qmi_message_dms_hp_change_device_mode_output_ref:
 * @self: a #QmiMessageDmsHpChangeDeviceModeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageDmsHpChangeDeviceModeOutput *qmi_message_dms_hp_change_device_mode_output_ref (QmiMessageDmsHpChangeDeviceModeOutput *self);

/**
 * qmi_message_dms_hp_change_device_mode_output_unref:
 * @self: a #QmiMessageDmsHpChangeDeviceModeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_dms_hp_change_device_mode_output_unref (QmiMessageDmsHpChangeDeviceModeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsHpChangeDeviceModeOutput, qmi_message_dms_hp_change_device_mode_output_unref)

/**
 * qmi_message_dms_hp_change_device_mode_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsHpChangeDeviceModeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsHpChangeDeviceModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_hp_change_device_mode_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsHpChangeDeviceModeOutput *qmi_message_dms_hp_change_device_mode_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Swi Get Current Firmware */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsSwiGetCurrentFirmwareOutput:
 *
 * The #QmiMessageDmsSwiGetCurrentFirmwareOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageDmsSwiGetCurrentFirmwareOutput QmiMessageDmsSwiGetCurrentFirmwareOutput;
GType qmi_message_dms_swi_get_current_firmware_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SWI_GET_CURRENT_FIRMWARE_OUTPUT (qmi_message_dms_swi_get_current_firmware_output_get_type ())


/**
 * qmi_message_dms_swi_get_current_firmware_output_get_result:
 * @self: a QmiMessageDmsSwiGetCurrentFirmwareOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_swi_get_current_firmware_output_get_result (
    QmiMessageDmsSwiGetCurrentFirmwareOutput *self,
    GError **error);


/**
 * qmi_message_dms_swi_get_current_firmware_output_get_model:
 * @self: a #QmiMessageDmsSwiGetCurrentFirmwareOutput.
 * @value_model: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Model' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_swi_get_current_firmware_output_get_model (
    QmiMessageDmsSwiGetCurrentFirmwareOutput *self,
    const gchar **value_model,
    GError **error);


/**
 * qmi_message_dms_swi_get_current_firmware_output_get_boot_version:
 * @self: a #QmiMessageDmsSwiGetCurrentFirmwareOutput.
 * @value_boot_version: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Boot version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_swi_get_current_firmware_output_get_boot_version (
    QmiMessageDmsSwiGetCurrentFirmwareOutput *self,
    const gchar **value_boot_version,
    GError **error);


/**
 * qmi_message_dms_swi_get_current_firmware_output_get_amss_version:
 * @self: a #QmiMessageDmsSwiGetCurrentFirmwareOutput.
 * @value_amss_version: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'AMSS version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_swi_get_current_firmware_output_get_amss_version (
    QmiMessageDmsSwiGetCurrentFirmwareOutput *self,
    const gchar **value_amss_version,
    GError **error);


/**
 * qmi_message_dms_swi_get_current_firmware_output_get_sku_id:
 * @self: a #QmiMessageDmsSwiGetCurrentFirmwareOutput.
 * @value_sku_id: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SKU ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_swi_get_current_firmware_output_get_sku_id (
    QmiMessageDmsSwiGetCurrentFirmwareOutput *self,
    const gchar **value_sku_id,
    GError **error);


/**
 * qmi_message_dms_swi_get_current_firmware_output_get_package_id:
 * @self: a #QmiMessageDmsSwiGetCurrentFirmwareOutput.
 * @value_package_id: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Package ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_swi_get_current_firmware_output_get_package_id (
    QmiMessageDmsSwiGetCurrentFirmwareOutput *self,
    const gchar **value_package_id,
    GError **error);


/**
 * qmi_message_dms_swi_get_current_firmware_output_get_carrier_id:
 * @self: a #QmiMessageDmsSwiGetCurrentFirmwareOutput.
 * @value_carrier_id: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Carrier ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_swi_get_current_firmware_output_get_carrier_id (
    QmiMessageDmsSwiGetCurrentFirmwareOutput *self,
    const gchar **value_carrier_id,
    GError **error);


/**
 * qmi_message_dms_swi_get_current_firmware_output_get_pri_version:
 * @self: a #QmiMessageDmsSwiGetCurrentFirmwareOutput.
 * @value_pri_version: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PRI version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_swi_get_current_firmware_output_get_pri_version (
    QmiMessageDmsSwiGetCurrentFirmwareOutput *self,
    const gchar **value_pri_version,
    GError **error);


/**
 * qmi_message_dms_swi_get_current_firmware_output_get_carrier:
 * @self: a #QmiMessageDmsSwiGetCurrentFirmwareOutput.
 * @value_carrier: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Carrier' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_swi_get_current_firmware_output_get_carrier (
    QmiMessageDmsSwiGetCurrentFirmwareOutput *self,
    const gchar **value_carrier,
    GError **error);


/**
 * qmi_message_dms_swi_get_current_firmware_output_get_config_version:
 * @self: a #QmiMessageDmsSwiGetCurrentFirmwareOutput.
 * @value_config_version: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Config version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_dms_swi_get_current_firmware_output_get_config_version (
    QmiMessageDmsSwiGetCurrentFirmwareOutput *self,
    const gchar **value_config_version,
    GError **error);


/**
 * qmi_message_dms_swi_get_current_firmware_output_ref:
 * @self: a #QmiMessageDmsSwiGetCurrentFirmwareOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageDmsSwiGetCurrentFirmwareOutput *qmi_message_dms_swi_get_current_firmware_output_ref (QmiMessageDmsSwiGetCurrentFirmwareOutput *self);

/**
 * qmi_message_dms_swi_get_current_firmware_output_unref:
 * @self: a #QmiMessageDmsSwiGetCurrentFirmwareOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_dms_swi_get_current_firmware_output_unref (QmiMessageDmsSwiGetCurrentFirmwareOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSwiGetCurrentFirmwareOutput, qmi_message_dms_swi_get_current_firmware_output_unref)

/**
 * qmi_message_dms_swi_get_current_firmware_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSwiGetCurrentFirmwareOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSwiGetCurrentFirmwareOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_swi_get_current_firmware_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSwiGetCurrentFirmwareOutput *qmi_message_dms_swi_get_current_firmware_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Swi Get USB Composition */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsSwiGetUsbCompositionOutput:
 *
 * The #QmiMessageDmsSwiGetUsbCompositionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageDmsSwiGetUsbCompositionOutput QmiMessageDmsSwiGetUsbCompositionOutput;
GType qmi_message_dms_swi_get_usb_composition_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SWI_GET_USB_COMPOSITION_OUTPUT (qmi_message_dms_swi_get_usb_composition_output_get_type ())


/**
 * qmi_message_dms_swi_get_usb_composition_output_get_result:
 * @self: a QmiMessageDmsSwiGetUsbCompositionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.20
 */
gboolean qmi_message_dms_swi_get_usb_composition_output_get_result (
    QmiMessageDmsSwiGetUsbCompositionOutput *self,
    GError **error);


/**
 * qmi_message_dms_swi_get_usb_composition_output_get_current:
 * @self: a #QmiMessageDmsSwiGetUsbCompositionOutput.
 * @value_current: (out)(optional): a placeholder for the output #QmiDmsSwiUsbComposition, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_dms_swi_get_usb_composition_output_get_current (
    QmiMessageDmsSwiGetUsbCompositionOutput *self,
    QmiDmsSwiUsbComposition *value_current,
    GError **error);


/**
 * qmi_message_dms_swi_get_usb_composition_output_get_supported:
 * @self: a #QmiMessageDmsSwiGetUsbCompositionOutput.
 * @value_supported: (out)(optional)(element-type QmiDmsSwiUsbComposition)(transfer none): a placeholder for the output #GArray of #QmiDmsSwiUsbComposition elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Supported' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_dms_swi_get_usb_composition_output_get_supported (
    QmiMessageDmsSwiGetUsbCompositionOutput *self,
    GArray **value_supported,
    GError **error);


/**
 * qmi_message_dms_swi_get_usb_composition_output_ref:
 * @self: a #QmiMessageDmsSwiGetUsbCompositionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageDmsSwiGetUsbCompositionOutput *qmi_message_dms_swi_get_usb_composition_output_ref (QmiMessageDmsSwiGetUsbCompositionOutput *self);

/**
 * qmi_message_dms_swi_get_usb_composition_output_unref:
 * @self: a #QmiMessageDmsSwiGetUsbCompositionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_dms_swi_get_usb_composition_output_unref (QmiMessageDmsSwiGetUsbCompositionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSwiGetUsbCompositionOutput, qmi_message_dms_swi_get_usb_composition_output_unref)

/**
 * qmi_message_dms_swi_get_usb_composition_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSwiGetUsbCompositionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSwiGetUsbCompositionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_swi_get_usb_composition_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSwiGetUsbCompositionOutput *qmi_message_dms_swi_get_usb_composition_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Swi Set USB Composition */


/* --- Input -- */

/**
 * QmiMessageDmsSwiSetUsbCompositionInput:
 *
 * The #QmiMessageDmsSwiSetUsbCompositionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageDmsSwiSetUsbCompositionInput QmiMessageDmsSwiSetUsbCompositionInput;
GType qmi_message_dms_swi_set_usb_composition_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SWI_SET_USB_COMPOSITION_INPUT (qmi_message_dms_swi_set_usb_composition_input_get_type ())


/**
 * qmi_message_dms_swi_set_usb_composition_input_get_current:
 * @self: a #QmiMessageDmsSwiSetUsbCompositionInput.
 * @value_current: (out)(optional): a placeholder for the output #QmiDmsSwiUsbComposition, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_dms_swi_set_usb_composition_input_get_current (
    QmiMessageDmsSwiSetUsbCompositionInput *self,
    QmiDmsSwiUsbComposition *value_current,
    GError **error);


/**
 * qmi_message_dms_swi_set_usb_composition_input_set_current:
 * @self: a #QmiMessageDmsSwiSetUsbCompositionInput.
 * @value_current: a #QmiDmsSwiUsbComposition.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Current' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_dms_swi_set_usb_composition_input_set_current (
    QmiMessageDmsSwiSetUsbCompositionInput *self,
    QmiDmsSwiUsbComposition value_current,
    GError **error);


/**
 * qmi_message_dms_swi_set_usb_composition_input_ref:
 * @self: a #QmiMessageDmsSwiSetUsbCompositionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageDmsSwiSetUsbCompositionInput *qmi_message_dms_swi_set_usb_composition_input_ref (QmiMessageDmsSwiSetUsbCompositionInput *self);

/**
 * qmi_message_dms_swi_set_usb_composition_input_unref:
 * @self: a #QmiMessageDmsSwiSetUsbCompositionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_dms_swi_set_usb_composition_input_unref (QmiMessageDmsSwiSetUsbCompositionInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSwiSetUsbCompositionInput, qmi_message_dms_swi_set_usb_composition_input_unref)

/**
 * qmi_message_dms_swi_set_usb_composition_input_new:
 *
 * Allocates a new #QmiMessageDmsSwiSetUsbCompositionInput.
 *
 * Returns: the newly created #QmiMessageDmsSwiSetUsbCompositionInput. The returned value should be freed with qmi_message_dms_swi_set_usb_composition_input_unref().
 *
 * Since: 1.20
 */
QmiMessageDmsSwiSetUsbCompositionInput *qmi_message_dms_swi_set_usb_composition_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsSwiSetUsbCompositionOutput:
 *
 * The #QmiMessageDmsSwiSetUsbCompositionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageDmsSwiSetUsbCompositionOutput QmiMessageDmsSwiSetUsbCompositionOutput;
GType qmi_message_dms_swi_set_usb_composition_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SWI_SET_USB_COMPOSITION_OUTPUT (qmi_message_dms_swi_set_usb_composition_output_get_type ())


/**
 * qmi_message_dms_swi_set_usb_composition_output_get_result:
 * @self: a QmiMessageDmsSwiSetUsbCompositionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.20
 */
gboolean qmi_message_dms_swi_set_usb_composition_output_get_result (
    QmiMessageDmsSwiSetUsbCompositionOutput *self,
    GError **error);


/**
 * qmi_message_dms_swi_set_usb_composition_output_ref:
 * @self: a #QmiMessageDmsSwiSetUsbCompositionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageDmsSwiSetUsbCompositionOutput *qmi_message_dms_swi_set_usb_composition_output_ref (QmiMessageDmsSwiSetUsbCompositionOutput *self);

/**
 * qmi_message_dms_swi_set_usb_composition_output_unref:
 * @self: a #QmiMessageDmsSwiSetUsbCompositionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_dms_swi_set_usb_composition_output_unref (QmiMessageDmsSwiSetUsbCompositionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSwiSetUsbCompositionOutput, qmi_message_dms_swi_set_usb_composition_output_unref)

/**
 * qmi_message_dms_swi_set_usb_composition_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSwiSetUsbCompositionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSwiSetUsbCompositionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_swi_set_usb_composition_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSwiSetUsbCompositionOutput *qmi_message_dms_swi_set_usb_composition_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Foxconn Get Firmware Version */


/* --- Input -- */

/**
 * QmiMessageDmsFoxconnGetFirmwareVersionInput:
 *
 * The #QmiMessageDmsFoxconnGetFirmwareVersionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageDmsFoxconnGetFirmwareVersionInput QmiMessageDmsFoxconnGetFirmwareVersionInput;
GType qmi_message_dms_foxconn_get_firmware_version_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_FOXCONN_GET_FIRMWARE_VERSION_INPUT (qmi_message_dms_foxconn_get_firmware_version_input_get_type ())


/**
 * qmi_message_dms_foxconn_get_firmware_version_input_get_version_type:
 * @self: a #QmiMessageDmsFoxconnGetFirmwareVersionInput.
 * @value_version_type: (out)(optional): a placeholder for the output #QmiDmsFoxconnFirmwareVersionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Version Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dms_foxconn_get_firmware_version_input_get_version_type (
    QmiMessageDmsFoxconnGetFirmwareVersionInput *self,
    QmiDmsFoxconnFirmwareVersionType *value_version_type,
    GError **error);


/**
 * qmi_message_dms_foxconn_get_firmware_version_input_set_version_type:
 * @self: a #QmiMessageDmsFoxconnGetFirmwareVersionInput.
 * @value_version_type: a #QmiDmsFoxconnFirmwareVersionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Version Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dms_foxconn_get_firmware_version_input_set_version_type (
    QmiMessageDmsFoxconnGetFirmwareVersionInput *self,
    QmiDmsFoxconnFirmwareVersionType value_version_type,
    GError **error);


/**
 * qmi_message_dms_foxconn_get_firmware_version_input_ref:
 * @self: a #QmiMessageDmsFoxconnGetFirmwareVersionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageDmsFoxconnGetFirmwareVersionInput *qmi_message_dms_foxconn_get_firmware_version_input_ref (QmiMessageDmsFoxconnGetFirmwareVersionInput *self);

/**
 * qmi_message_dms_foxconn_get_firmware_version_input_unref:
 * @self: a #QmiMessageDmsFoxconnGetFirmwareVersionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_dms_foxconn_get_firmware_version_input_unref (QmiMessageDmsFoxconnGetFirmwareVersionInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsFoxconnGetFirmwareVersionInput, qmi_message_dms_foxconn_get_firmware_version_input_unref)

/**
 * qmi_message_dms_foxconn_get_firmware_version_input_new:
 *
 * Allocates a new #QmiMessageDmsFoxconnGetFirmwareVersionInput.
 *
 * Returns: the newly created #QmiMessageDmsFoxconnGetFirmwareVersionInput. The returned value should be freed with qmi_message_dms_foxconn_get_firmware_version_input_unref().
 *
 * Since: 1.26
 */
QmiMessageDmsFoxconnGetFirmwareVersionInput *qmi_message_dms_foxconn_get_firmware_version_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsFoxconnGetFirmwareVersionOutput:
 *
 * The #QmiMessageDmsFoxconnGetFirmwareVersionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageDmsFoxconnGetFirmwareVersionOutput QmiMessageDmsFoxconnGetFirmwareVersionOutput;
GType qmi_message_dms_foxconn_get_firmware_version_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_FOXCONN_GET_FIRMWARE_VERSION_OUTPUT (qmi_message_dms_foxconn_get_firmware_version_output_get_type ())


/**
 * qmi_message_dms_foxconn_get_firmware_version_output_get_result:
 * @self: a QmiMessageDmsFoxconnGetFirmwareVersionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_dms_foxconn_get_firmware_version_output_get_result (
    QmiMessageDmsFoxconnGetFirmwareVersionOutput *self,
    GError **error);


/**
 * qmi_message_dms_foxconn_get_firmware_version_output_get_version:
 * @self: a #QmiMessageDmsFoxconnGetFirmwareVersionOutput.
 * @value_version: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dms_foxconn_get_firmware_version_output_get_version (
    QmiMessageDmsFoxconnGetFirmwareVersionOutput *self,
    const gchar **value_version,
    GError **error);


/**
 * qmi_message_dms_foxconn_get_firmware_version_output_ref:
 * @self: a #QmiMessageDmsFoxconnGetFirmwareVersionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageDmsFoxconnGetFirmwareVersionOutput *qmi_message_dms_foxconn_get_firmware_version_output_ref (QmiMessageDmsFoxconnGetFirmwareVersionOutput *self);

/**
 * qmi_message_dms_foxconn_get_firmware_version_output_unref:
 * @self: a #QmiMessageDmsFoxconnGetFirmwareVersionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_dms_foxconn_get_firmware_version_output_unref (QmiMessageDmsFoxconnGetFirmwareVersionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsFoxconnGetFirmwareVersionOutput, qmi_message_dms_foxconn_get_firmware_version_output_unref)

/**
 * qmi_message_dms_foxconn_get_firmware_version_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsFoxconnGetFirmwareVersionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsFoxconnGetFirmwareVersionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_foxconn_get_firmware_version_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsFoxconnGetFirmwareVersionOutput *qmi_message_dms_foxconn_get_firmware_version_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Set FCC Authentication */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDmsSetFccAuthenticationOutput:
 *
 * The #QmiMessageDmsSetFccAuthenticationOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageDmsSetFccAuthenticationOutput QmiMessageDmsSetFccAuthenticationOutput;
GType qmi_message_dms_set_fcc_authentication_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_SET_FCC_AUTHENTICATION_OUTPUT (qmi_message_dms_set_fcc_authentication_output_get_type ())


/**
 * qmi_message_dms_set_fcc_authentication_output_get_result:
 * @self: a QmiMessageDmsSetFccAuthenticationOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_dms_set_fcc_authentication_output_get_result (
    QmiMessageDmsSetFccAuthenticationOutput *self,
    GError **error);


/**
 * qmi_message_dms_set_fcc_authentication_output_ref:
 * @self: a #QmiMessageDmsSetFccAuthenticationOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageDmsSetFccAuthenticationOutput *qmi_message_dms_set_fcc_authentication_output_ref (QmiMessageDmsSetFccAuthenticationOutput *self);

/**
 * qmi_message_dms_set_fcc_authentication_output_unref:
 * @self: a #QmiMessageDmsSetFccAuthenticationOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_dms_set_fcc_authentication_output_unref (QmiMessageDmsSetFccAuthenticationOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsSetFccAuthenticationOutput, qmi_message_dms_set_fcc_authentication_output_unref)

/**
 * qmi_message_dms_set_fcc_authentication_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsSetFccAuthenticationOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsSetFccAuthenticationOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_fcc_authentication_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsSetFccAuthenticationOutput *qmi_message_dms_set_fcc_authentication_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Foxconn Change Device Mode */


/* --- Input -- */

/**
 * QmiMessageDmsFoxconnChangeDeviceModeInput:
 *
 * The #QmiMessageDmsFoxconnChangeDeviceModeInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageDmsFoxconnChangeDeviceModeInput QmiMessageDmsFoxconnChangeDeviceModeInput;
GType qmi_message_dms_foxconn_change_device_mode_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_FOXCONN_CHANGE_DEVICE_MODE_INPUT (qmi_message_dms_foxconn_change_device_mode_input_get_type ())


/**
 * qmi_message_dms_foxconn_change_device_mode_input_get_mode:
 * @self: a #QmiMessageDmsFoxconnChangeDeviceModeInput.
 * @value_mode: (out)(optional): a placeholder for the output #QmiDmsFoxconnDeviceMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dms_foxconn_change_device_mode_input_get_mode (
    QmiMessageDmsFoxconnChangeDeviceModeInput *self,
    QmiDmsFoxconnDeviceMode *value_mode,
    GError **error);


/**
 * qmi_message_dms_foxconn_change_device_mode_input_set_mode:
 * @self: a #QmiMessageDmsFoxconnChangeDeviceModeInput.
 * @value_mode: a #QmiDmsFoxconnDeviceMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dms_foxconn_change_device_mode_input_set_mode (
    QmiMessageDmsFoxconnChangeDeviceModeInput *self,
    QmiDmsFoxconnDeviceMode value_mode,
    GError **error);


/**
 * qmi_message_dms_foxconn_change_device_mode_input_ref:
 * @self: a #QmiMessageDmsFoxconnChangeDeviceModeInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageDmsFoxconnChangeDeviceModeInput *qmi_message_dms_foxconn_change_device_mode_input_ref (QmiMessageDmsFoxconnChangeDeviceModeInput *self);

/**
 * qmi_message_dms_foxconn_change_device_mode_input_unref:
 * @self: a #QmiMessageDmsFoxconnChangeDeviceModeInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_dms_foxconn_change_device_mode_input_unref (QmiMessageDmsFoxconnChangeDeviceModeInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsFoxconnChangeDeviceModeInput, qmi_message_dms_foxconn_change_device_mode_input_unref)

/**
 * qmi_message_dms_foxconn_change_device_mode_input_new:
 *
 * Allocates a new #QmiMessageDmsFoxconnChangeDeviceModeInput.
 *
 * Returns: the newly created #QmiMessageDmsFoxconnChangeDeviceModeInput. The returned value should be freed with qmi_message_dms_foxconn_change_device_mode_input_unref().
 *
 * Since: 1.26
 */
QmiMessageDmsFoxconnChangeDeviceModeInput *qmi_message_dms_foxconn_change_device_mode_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsFoxconnChangeDeviceModeOutput:
 *
 * The #QmiMessageDmsFoxconnChangeDeviceModeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageDmsFoxconnChangeDeviceModeOutput QmiMessageDmsFoxconnChangeDeviceModeOutput;
GType qmi_message_dms_foxconn_change_device_mode_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_FOXCONN_CHANGE_DEVICE_MODE_OUTPUT (qmi_message_dms_foxconn_change_device_mode_output_get_type ())


/**
 * qmi_message_dms_foxconn_change_device_mode_output_get_result:
 * @self: a QmiMessageDmsFoxconnChangeDeviceModeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_dms_foxconn_change_device_mode_output_get_result (
    QmiMessageDmsFoxconnChangeDeviceModeOutput *self,
    GError **error);


/**
 * qmi_message_dms_foxconn_change_device_mode_output_ref:
 * @self: a #QmiMessageDmsFoxconnChangeDeviceModeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageDmsFoxconnChangeDeviceModeOutput *qmi_message_dms_foxconn_change_device_mode_output_ref (QmiMessageDmsFoxconnChangeDeviceModeOutput *self);

/**
 * qmi_message_dms_foxconn_change_device_mode_output_unref:
 * @self: a #QmiMessageDmsFoxconnChangeDeviceModeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_dms_foxconn_change_device_mode_output_unref (QmiMessageDmsFoxconnChangeDeviceModeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsFoxconnChangeDeviceModeOutput, qmi_message_dms_foxconn_change_device_mode_output_unref)

/**
 * qmi_message_dms_foxconn_change_device_mode_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsFoxconnChangeDeviceModeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsFoxconnChangeDeviceModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_foxconn_change_device_mode_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsFoxconnChangeDeviceModeOutput *qmi_message_dms_foxconn_change_device_mode_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Foxconn Set FCC Authentication */


/* --- Input -- */

/**
 * QmiMessageDmsFoxconnSetFccAuthenticationInput:
 *
 * The #QmiMessageDmsFoxconnSetFccAuthenticationInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28.6
 */
typedef struct _QmiMessageDmsFoxconnSetFccAuthenticationInput QmiMessageDmsFoxconnSetFccAuthenticationInput;
GType qmi_message_dms_foxconn_set_fcc_authentication_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_FOXCONN_SET_FCC_AUTHENTICATION_INPUT (qmi_message_dms_foxconn_set_fcc_authentication_input_get_type ())


/**
 * qmi_message_dms_foxconn_set_fcc_authentication_input_get_value:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationInput.
 * @value_value: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Value' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28.6
 */
gboolean qmi_message_dms_foxconn_set_fcc_authentication_input_get_value (
    QmiMessageDmsFoxconnSetFccAuthenticationInput *self,
    guint8 *value_value,
    GError **error);


/**
 * qmi_message_dms_foxconn_set_fcc_authentication_input_set_value:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationInput.
 * @value_value: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Value' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28.6
 */
gboolean qmi_message_dms_foxconn_set_fcc_authentication_input_set_value (
    QmiMessageDmsFoxconnSetFccAuthenticationInput *self,
    guint8 value_value,
    GError **error);


/**
 * qmi_message_dms_foxconn_set_fcc_authentication_input_ref:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28.6
 */
QmiMessageDmsFoxconnSetFccAuthenticationInput *qmi_message_dms_foxconn_set_fcc_authentication_input_ref (QmiMessageDmsFoxconnSetFccAuthenticationInput *self);

/**
 * qmi_message_dms_foxconn_set_fcc_authentication_input_unref:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28.6
 */
void qmi_message_dms_foxconn_set_fcc_authentication_input_unref (QmiMessageDmsFoxconnSetFccAuthenticationInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsFoxconnSetFccAuthenticationInput, qmi_message_dms_foxconn_set_fcc_authentication_input_unref)

/**
 * qmi_message_dms_foxconn_set_fcc_authentication_input_new:
 *
 * Allocates a new #QmiMessageDmsFoxconnSetFccAuthenticationInput.
 *
 * Returns: the newly created #QmiMessageDmsFoxconnSetFccAuthenticationInput. The returned value should be freed with qmi_message_dms_foxconn_set_fcc_authentication_input_unref().
 *
 * Since: 1.28.6
 */
QmiMessageDmsFoxconnSetFccAuthenticationInput *qmi_message_dms_foxconn_set_fcc_authentication_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsFoxconnSetFccAuthenticationOutput:
 *
 * The #QmiMessageDmsFoxconnSetFccAuthenticationOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28.6
 */
typedef struct _QmiMessageDmsFoxconnSetFccAuthenticationOutput QmiMessageDmsFoxconnSetFccAuthenticationOutput;
GType qmi_message_dms_foxconn_set_fcc_authentication_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_FOXCONN_SET_FCC_AUTHENTICATION_OUTPUT (qmi_message_dms_foxconn_set_fcc_authentication_output_get_type ())


/**
 * qmi_message_dms_foxconn_set_fcc_authentication_output_get_result:
 * @self: a QmiMessageDmsFoxconnSetFccAuthenticationOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28.6
 */
gboolean qmi_message_dms_foxconn_set_fcc_authentication_output_get_result (
    QmiMessageDmsFoxconnSetFccAuthenticationOutput *self,
    GError **error);


/**
 * qmi_message_dms_foxconn_set_fcc_authentication_output_ref:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28.6
 */
QmiMessageDmsFoxconnSetFccAuthenticationOutput *qmi_message_dms_foxconn_set_fcc_authentication_output_ref (QmiMessageDmsFoxconnSetFccAuthenticationOutput *self);

/**
 * qmi_message_dms_foxconn_set_fcc_authentication_output_unref:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28.6
 */
void qmi_message_dms_foxconn_set_fcc_authentication_output_unref (QmiMessageDmsFoxconnSetFccAuthenticationOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsFoxconnSetFccAuthenticationOutput, qmi_message_dms_foxconn_set_fcc_authentication_output_unref)

/**
 * qmi_message_dms_foxconn_set_fcc_authentication_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsFoxconnSetFccAuthenticationOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsFoxconnSetFccAuthenticationOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_foxconn_set_fcc_authentication_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsFoxconnSetFccAuthenticationOutput *qmi_message_dms_foxconn_set_fcc_authentication_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DMS Foxconn Set FCC Authentication v2 */


/* --- Input -- */

/**
 * QmiMessageDmsFoxconnSetFccAuthenticationV2Input:
 *
 * The #QmiMessageDmsFoxconnSetFccAuthenticationV2Input structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageDmsFoxconnSetFccAuthenticationV2Input QmiMessageDmsFoxconnSetFccAuthenticationV2Input;
GType qmi_message_dms_foxconn_set_fcc_authentication_v2_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_FOXCONN_SET_FCC_AUTHENTICATION_V2_INPUT (qmi_message_dms_foxconn_set_fcc_authentication_v2_input_get_type ())


/**
 * qmi_message_dms_foxconn_set_fcc_authentication_v2_input_get_magic_string:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationV2Input.
 * @value_magic_string: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Magic String' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_foxconn_set_fcc_authentication_v2_input_get_magic_string (
    QmiMessageDmsFoxconnSetFccAuthenticationV2Input *self,
    const gchar **value_magic_string,
    GError **error);


/**
 * qmi_message_dms_foxconn_set_fcc_authentication_v2_input_set_magic_string:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationV2Input.
 * @value_magic_string: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Magic String' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_foxconn_set_fcc_authentication_v2_input_set_magic_string (
    QmiMessageDmsFoxconnSetFccAuthenticationV2Input *self,
    const gchar *value_magic_string,
    GError **error);


/**
 * qmi_message_dms_foxconn_set_fcc_authentication_v2_input_get_magic_number:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationV2Input.
 * @value_magic_number: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Magic Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_foxconn_set_fcc_authentication_v2_input_get_magic_number (
    QmiMessageDmsFoxconnSetFccAuthenticationV2Input *self,
    guint8 *value_magic_number,
    GError **error);


/**
 * qmi_message_dms_foxconn_set_fcc_authentication_v2_input_set_magic_number:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationV2Input.
 * @value_magic_number: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Magic Number' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_foxconn_set_fcc_authentication_v2_input_set_magic_number (
    QmiMessageDmsFoxconnSetFccAuthenticationV2Input *self,
    guint8 value_magic_number,
    GError **error);


/**
 * qmi_message_dms_foxconn_set_fcc_authentication_v2_input_ref:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationV2Input.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageDmsFoxconnSetFccAuthenticationV2Input *qmi_message_dms_foxconn_set_fcc_authentication_v2_input_ref (QmiMessageDmsFoxconnSetFccAuthenticationV2Input *self);

/**
 * qmi_message_dms_foxconn_set_fcc_authentication_v2_input_unref:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationV2Input.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_dms_foxconn_set_fcc_authentication_v2_input_unref (QmiMessageDmsFoxconnSetFccAuthenticationV2Input *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsFoxconnSetFccAuthenticationV2Input, qmi_message_dms_foxconn_set_fcc_authentication_v2_input_unref)

/**
 * qmi_message_dms_foxconn_set_fcc_authentication_v2_input_new:
 *
 * Allocates a new #QmiMessageDmsFoxconnSetFccAuthenticationV2Input.
 *
 * Returns: the newly created #QmiMessageDmsFoxconnSetFccAuthenticationV2Input. The returned value should be freed with qmi_message_dms_foxconn_set_fcc_authentication_v2_input_unref().
 *
 * Since: 1.32
 */
QmiMessageDmsFoxconnSetFccAuthenticationV2Input *qmi_message_dms_foxconn_set_fcc_authentication_v2_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDmsFoxconnSetFccAuthenticationV2Output:
 *
 * The #QmiMessageDmsFoxconnSetFccAuthenticationV2Output structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageDmsFoxconnSetFccAuthenticationV2Output QmiMessageDmsFoxconnSetFccAuthenticationV2Output;
GType qmi_message_dms_foxconn_set_fcc_authentication_v2_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DMS_FOXCONN_SET_FCC_AUTHENTICATION_V2_OUTPUT (qmi_message_dms_foxconn_set_fcc_authentication_v2_output_get_type ())


/**
 * qmi_message_dms_foxconn_set_fcc_authentication_v2_output_get_result:
 * @self: a QmiMessageDmsFoxconnSetFccAuthenticationV2Output.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.32
 */
gboolean qmi_message_dms_foxconn_set_fcc_authentication_v2_output_get_result (
    QmiMessageDmsFoxconnSetFccAuthenticationV2Output *self,
    GError **error);


/**
 * qmi_message_dms_foxconn_set_fcc_authentication_v2_output_ref:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationV2Output.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageDmsFoxconnSetFccAuthenticationV2Output *qmi_message_dms_foxconn_set_fcc_authentication_v2_output_ref (QmiMessageDmsFoxconnSetFccAuthenticationV2Output *self);

/**
 * qmi_message_dms_foxconn_set_fcc_authentication_v2_output_unref:
 * @self: a #QmiMessageDmsFoxconnSetFccAuthenticationV2Output.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_dms_foxconn_set_fcc_authentication_v2_output_unref (QmiMessageDmsFoxconnSetFccAuthenticationV2Output *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDmsFoxconnSetFccAuthenticationV2Output, qmi_message_dms_foxconn_set_fcc_authentication_v2_output_unref)

/**
 * qmi_message_dms_foxconn_set_fcc_authentication_v2_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDmsFoxconnSetFccAuthenticationV2Output out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDmsFoxconnSetFccAuthenticationV2Output, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_foxconn_set_fcc_authentication_v2_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDmsFoxconnSetFccAuthenticationV2Output *qmi_message_dms_foxconn_set_fcc_authentication_v2_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: DMS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_dms_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_DMS

/*****************************************************************************/
/* CLIENT: QMI Client DMS */

#define QMI_TYPE_CLIENT_DMS            (qmi_client_dms_get_type ())
#define QMI_CLIENT_DMS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_DMS, QmiClientDms))
#define QMI_CLIENT_DMS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_DMS, QmiClientDmsClass))
#define QMI_IS_CLIENT_DMS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_DMS))
#define QMI_IS_CLIENT_DMS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_DMS))
#define QMI_CLIENT_DMS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_DMS, QmiClientDmsClass))

typedef struct _QmiClientDms QmiClientDms;
typedef struct _QmiClientDmsClass QmiClientDmsClass;

/**
 * QmiClientDms:
 *
 * #QmiClient which handles operations in the DMS service.
 *
 * The #QmiClientDms structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
struct _QmiClientDms {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientDmsClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_dms_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientDms, g_object_unref)

/**
 * qmi_client_dms_reset:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Reset request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_reset_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_reset (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_reset_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_reset().
 *
 * Returns: a #QmiMessageDmsResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_reset_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsResetOutput *qmi_client_dms_reset_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_set_event_report:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsSetEventReportInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Event Report request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_set_event_report_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_set_event_report (
    QmiClientDms *self,
    QmiMessageDmsSetEventReportInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_set_event_report_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_set_event_report().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_set_event_report().
 *
 * Returns: a #QmiMessageDmsSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_event_report_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetEventReportOutput *qmi_client_dms_set_event_report_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_capabilities:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Capabilities request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_capabilities_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_capabilities (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_capabilities_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_capabilities().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_capabilities().
 *
 * Returns: a #QmiMessageDmsGetCapabilitiesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_capabilities_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetCapabilitiesOutput *qmi_client_dms_get_capabilities_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_manufacturer:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Manufacturer request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_manufacturer_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_manufacturer (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_manufacturer_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_manufacturer().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_manufacturer().
 *
 * Returns: a #QmiMessageDmsGetManufacturerOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_manufacturer_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetManufacturerOutput *qmi_client_dms_get_manufacturer_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_model:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Model request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_model_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_model (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_model_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_model().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_model().
 *
 * Returns: a #QmiMessageDmsGetModelOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_model_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetModelOutput *qmi_client_dms_get_model_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_revision:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Revision request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_revision_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_revision (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_revision_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_revision().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_revision().
 *
 * Returns: a #QmiMessageDmsGetRevisionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_revision_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetRevisionOutput *qmi_client_dms_get_revision_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_msisdn:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get MSISDN request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_msisdn_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_msisdn (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_msisdn_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_msisdn().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_msisdn().
 *
 * Returns: a #QmiMessageDmsGetMsisdnOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_msisdn_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetMsisdnOutput *qmi_client_dms_get_msisdn_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_ids:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get IDs request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_ids_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_ids (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_ids_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_ids().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_ids().
 *
 * Returns: a #QmiMessageDmsGetIdsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_ids_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetIdsOutput *qmi_client_dms_get_ids_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_power_state:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Power State request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_power_state_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_power_state (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_power_state_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_power_state().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_power_state().
 *
 * Returns: a #QmiMessageDmsGetPowerStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_power_state_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetPowerStateOutput *qmi_client_dms_get_power_state_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_uim_set_pin_protection:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsUimSetPinProtectionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a UIM Set PIN Protection request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_uim_set_pin_protection_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_uim_set_pin_protection (
    QmiClientDms *self,
    QmiMessageDmsUimSetPinProtectionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_uim_set_pin_protection_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_uim_set_pin_protection().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_uim_set_pin_protection().
 *
 * Returns: a #QmiMessageDmsUimSetPinProtectionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_set_pin_protection_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimSetPinProtectionOutput *qmi_client_dms_uim_set_pin_protection_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_uim_verify_pin:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsUimVerifyPinInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a UIM Verify PIN request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_uim_verify_pin_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_uim_verify_pin (
    QmiClientDms *self,
    QmiMessageDmsUimVerifyPinInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_uim_verify_pin_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_uim_verify_pin().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_uim_verify_pin().
 *
 * Returns: a #QmiMessageDmsUimVerifyPinOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_verify_pin_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimVerifyPinOutput *qmi_client_dms_uim_verify_pin_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_uim_unblock_pin:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsUimUnblockPinInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a UIM Unblock PIN request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_uim_unblock_pin_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_uim_unblock_pin (
    QmiClientDms *self,
    QmiMessageDmsUimUnblockPinInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_uim_unblock_pin_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_uim_unblock_pin().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_uim_unblock_pin().
 *
 * Returns: a #QmiMessageDmsUimUnblockPinOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_unblock_pin_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimUnblockPinOutput *qmi_client_dms_uim_unblock_pin_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_uim_change_pin:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsUimChangePinInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a UIM Change PIN request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_uim_change_pin_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_uim_change_pin (
    QmiClientDms *self,
    QmiMessageDmsUimChangePinInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_uim_change_pin_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_uim_change_pin().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_uim_change_pin().
 *
 * Returns: a #QmiMessageDmsUimChangePinOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_change_pin_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimChangePinOutput *qmi_client_dms_uim_change_pin_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_uim_get_pin_status:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a UIM Get PIN Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_uim_get_pin_status_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_uim_get_pin_status (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_uim_get_pin_status_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_uim_get_pin_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_uim_get_pin_status().
 *
 * Returns: a #QmiMessageDmsUimGetPinStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_get_pin_status_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimGetPinStatusOutput *qmi_client_dms_uim_get_pin_status_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_hardware_revision:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Hardware Revision request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_hardware_revision_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_hardware_revision (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_hardware_revision_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_hardware_revision().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_hardware_revision().
 *
 * Returns: a #QmiMessageDmsGetHardwareRevisionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_hardware_revision_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetHardwareRevisionOutput *qmi_client_dms_get_hardware_revision_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_operating_mode:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Operating Mode request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_operating_mode_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_operating_mode (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_operating_mode_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_operating_mode().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_operating_mode().
 *
 * Returns: a #QmiMessageDmsGetOperatingModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_operating_mode_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetOperatingModeOutput *qmi_client_dms_get_operating_mode_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_set_operating_mode:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsSetOperatingModeInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Operating Mode request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_set_operating_mode_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_set_operating_mode (
    QmiClientDms *self,
    QmiMessageDmsSetOperatingModeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_set_operating_mode_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_set_operating_mode().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_set_operating_mode().
 *
 * Returns: a #QmiMessageDmsSetOperatingModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_operating_mode_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetOperatingModeOutput *qmi_client_dms_set_operating_mode_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_time:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Time request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_time_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_time (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_time_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_time().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_time().
 *
 * Returns: a #QmiMessageDmsGetTimeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_time_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetTimeOutput *qmi_client_dms_get_time_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_prl_version:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get PRL Version request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_prl_version_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_prl_version (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_prl_version_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_prl_version().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_prl_version().
 *
 * Returns: a #QmiMessageDmsGetPrlVersionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_prl_version_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetPrlVersionOutput *qmi_client_dms_get_prl_version_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_activation_state:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Activation State request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_activation_state_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_activation_state (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_activation_state_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_activation_state().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_activation_state().
 *
 * Returns: a #QmiMessageDmsGetActivationStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_activation_state_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetActivationStateOutput *qmi_client_dms_get_activation_state_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_activate_automatic:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsActivateAutomaticInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Activate Automatic request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_activate_automatic_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_activate_automatic (
    QmiClientDms *self,
    QmiMessageDmsActivateAutomaticInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_activate_automatic_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_activate_automatic().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_activate_automatic().
 *
 * Returns: a #QmiMessageDmsActivateAutomaticOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_activate_automatic_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsActivateAutomaticOutput *qmi_client_dms_activate_automatic_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_activate_manual:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsActivateManualInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Activate Manual request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_activate_manual_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_activate_manual (
    QmiClientDms *self,
    QmiMessageDmsActivateManualInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_activate_manual_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_activate_manual().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_activate_manual().
 *
 * Returns: a #QmiMessageDmsActivateManualOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_activate_manual_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsActivateManualOutput *qmi_client_dms_activate_manual_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_user_lock_state:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get User Lock State request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_user_lock_state_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_user_lock_state (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_user_lock_state_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_user_lock_state().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_user_lock_state().
 *
 * Returns: a #QmiMessageDmsGetUserLockStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_user_lock_state_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetUserLockStateOutput *qmi_client_dms_get_user_lock_state_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_set_user_lock_state:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsSetUserLockStateInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set User Lock State request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_set_user_lock_state_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_set_user_lock_state (
    QmiClientDms *self,
    QmiMessageDmsSetUserLockStateInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_set_user_lock_state_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_set_user_lock_state().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_set_user_lock_state().
 *
 * Returns: a #QmiMessageDmsSetUserLockStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_user_lock_state_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetUserLockStateOutput *qmi_client_dms_set_user_lock_state_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_set_user_lock_code:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsSetUserLockCodeInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set User Lock Code request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_set_user_lock_code_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_set_user_lock_code (
    QmiClientDms *self,
    QmiMessageDmsSetUserLockCodeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_set_user_lock_code_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_set_user_lock_code().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_set_user_lock_code().
 *
 * Returns: a #QmiMessageDmsSetUserLockCodeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_user_lock_code_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetUserLockCodeOutput *qmi_client_dms_set_user_lock_code_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_read_user_data:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Read User Data request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_read_user_data_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_read_user_data (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_read_user_data_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_read_user_data().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_read_user_data().
 *
 * Returns: a #QmiMessageDmsReadUserDataOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_read_user_data_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsReadUserDataOutput *qmi_client_dms_read_user_data_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_write_user_data:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsWriteUserDataInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Write User Data request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_write_user_data_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_write_user_data (
    QmiClientDms *self,
    QmiMessageDmsWriteUserDataInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_write_user_data_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_write_user_data().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_write_user_data().
 *
 * Returns: a #QmiMessageDmsWriteUserDataOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_write_user_data_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsWriteUserDataOutput *qmi_client_dms_write_user_data_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_read_eri_file:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Read ERI File request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_read_eri_file_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_read_eri_file (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_read_eri_file_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_read_eri_file().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_read_eri_file().
 *
 * Returns: a #QmiMessageDmsReadEriFileOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_read_eri_file_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsReadEriFileOutput *qmi_client_dms_read_eri_file_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_restore_factory_defaults:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsRestoreFactoryDefaultsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Restore Factory Defaults request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_restore_factory_defaults_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_restore_factory_defaults (
    QmiClientDms *self,
    QmiMessageDmsRestoreFactoryDefaultsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_restore_factory_defaults_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_restore_factory_defaults().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_restore_factory_defaults().
 *
 * Returns: a #QmiMessageDmsRestoreFactoryDefaultsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_restore_factory_defaults_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsRestoreFactoryDefaultsOutput *qmi_client_dms_restore_factory_defaults_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_validate_service_programming_code:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsValidateServiceProgrammingCodeInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Validate Service Programming Code request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_validate_service_programming_code_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_validate_service_programming_code (
    QmiClientDms *self,
    QmiMessageDmsValidateServiceProgrammingCodeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_validate_service_programming_code_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_validate_service_programming_code().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_validate_service_programming_code().
 *
 * Returns: a #QmiMessageDmsValidateServiceProgrammingCodeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_validate_service_programming_code_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsValidateServiceProgrammingCodeOutput *qmi_client_dms_validate_service_programming_code_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_uim_get_iccid:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a UIM Get ICCID request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_uim_get_iccid_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_uim_get_iccid (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_uim_get_iccid_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_uim_get_iccid().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_uim_get_iccid().
 *
 * Returns: a #QmiMessageDmsUimGetIccidOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_get_iccid_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimGetIccidOutput *qmi_client_dms_uim_get_iccid_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_set_firmware_id:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Firmware ID request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_set_firmware_id_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_dms_set_firmware_id (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_set_firmware_id_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_set_firmware_id().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_set_firmware_id().
 *
 * Returns: a #QmiMessageDmsSetFirmwareIdOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_firmware_id_output_unref().
 *
 * Since: 1.18
 */
QmiMessageDmsSetFirmwareIdOutput *qmi_client_dms_set_firmware_id_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_uim_get_ck_status:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsUimGetCkStatusInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a UIM Get CK Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_uim_get_ck_status_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_uim_get_ck_status (
    QmiClientDms *self,
    QmiMessageDmsUimGetCkStatusInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_uim_get_ck_status_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_uim_get_ck_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_uim_get_ck_status().
 *
 * Returns: a #QmiMessageDmsUimGetCkStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_get_ck_status_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimGetCkStatusOutput *qmi_client_dms_uim_get_ck_status_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_uim_set_ck_protection:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsUimSetCkProtectionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a UIM Set CK Protection request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_uim_set_ck_protection_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_uim_set_ck_protection (
    QmiClientDms *self,
    QmiMessageDmsUimSetCkProtectionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_uim_set_ck_protection_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_uim_set_ck_protection().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_uim_set_ck_protection().
 *
 * Returns: a #QmiMessageDmsUimSetCkProtectionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_set_ck_protection_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimSetCkProtectionOutput *qmi_client_dms_uim_set_ck_protection_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_uim_unblock_ck:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsUimUnblockCkInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a UIM Unblock CK request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_uim_unblock_ck_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_uim_unblock_ck (
    QmiClientDms *self,
    QmiMessageDmsUimUnblockCkInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_uim_unblock_ck_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_uim_unblock_ck().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_uim_unblock_ck().
 *
 * Returns: a #QmiMessageDmsUimUnblockCkOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_unblock_ck_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimUnblockCkOutput *qmi_client_dms_uim_unblock_ck_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_uim_get_imsi:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a UIM Get IMSI request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_uim_get_imsi_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_uim_get_imsi (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_uim_get_imsi_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_uim_get_imsi().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_uim_get_imsi().
 *
 * Returns: a #QmiMessageDmsUimGetImsiOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_get_imsi_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimGetImsiOutput *qmi_client_dms_uim_get_imsi_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_uim_get_state:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a UIM Get State request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_uim_get_state_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_uim_get_state (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_uim_get_state_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_uim_get_state().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_uim_get_state().
 *
 * Returns: a #QmiMessageDmsUimGetStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_uim_get_state_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsUimGetStateOutput *qmi_client_dms_uim_get_state_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_band_capabilities:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Band Capabilities request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_band_capabilities_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_band_capabilities (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_band_capabilities_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_band_capabilities().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_band_capabilities().
 *
 * Returns: a #QmiMessageDmsGetBandCapabilitiesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_band_capabilities_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetBandCapabilitiesOutput *qmi_client_dms_get_band_capabilities_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_factory_sku:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Factory SKU request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_factory_sku_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_factory_sku (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_factory_sku_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_factory_sku().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_factory_sku().
 *
 * Returns: a #QmiMessageDmsGetFactorySkuOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_factory_sku_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetFactorySkuOutput *qmi_client_dms_get_factory_sku_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_firmware_preference:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Firmware Preference request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_firmware_preference_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_firmware_preference (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_firmware_preference_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_firmware_preference().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_firmware_preference().
 *
 * Returns: a #QmiMessageDmsGetFirmwarePreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_firmware_preference_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetFirmwarePreferenceOutput *qmi_client_dms_get_firmware_preference_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_set_firmware_preference:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsSetFirmwarePreferenceInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Firmware Preference request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_set_firmware_preference_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_set_firmware_preference (
    QmiClientDms *self,
    QmiMessageDmsSetFirmwarePreferenceInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_set_firmware_preference_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_set_firmware_preference().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_set_firmware_preference().
 *
 * Returns: a #QmiMessageDmsSetFirmwarePreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_firmware_preference_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetFirmwarePreferenceOutput *qmi_client_dms_set_firmware_preference_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_list_stored_images:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a List Stored Images request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_list_stored_images_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_list_stored_images (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_list_stored_images_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_list_stored_images().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_list_stored_images().
 *
 * Returns: a #QmiMessageDmsListStoredImagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_list_stored_images_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsListStoredImagesOutput *qmi_client_dms_list_stored_images_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_delete_stored_image:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsDeleteStoredImageInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Delete Stored Image request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_delete_stored_image_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_delete_stored_image (
    QmiClientDms *self,
    QmiMessageDmsDeleteStoredImageInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_delete_stored_image_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_delete_stored_image().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_delete_stored_image().
 *
 * Returns: a #QmiMessageDmsDeleteStoredImageOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_delete_stored_image_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsDeleteStoredImageOutput *qmi_client_dms_delete_stored_image_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_set_time:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsSetTimeInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Time request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_set_time_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_set_time (
    QmiClientDms *self,
    QmiMessageDmsSetTimeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_set_time_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_set_time().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_set_time().
 *
 * Returns: a #QmiMessageDmsSetTimeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_time_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetTimeOutput *qmi_client_dms_set_time_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_stored_image_info:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsGetStoredImageInfoInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Stored Image Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_stored_image_info_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_stored_image_info (
    QmiClientDms *self,
    QmiMessageDmsGetStoredImageInfoInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_stored_image_info_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_stored_image_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_stored_image_info().
 *
 * Returns: a #QmiMessageDmsGetStoredImageInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_stored_image_info_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetStoredImageInfoOutput *qmi_client_dms_get_stored_image_info_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_alt_net_config:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Alt Net Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_alt_net_config_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_alt_net_config (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_alt_net_config_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_alt_net_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_alt_net_config().
 *
 * Returns: a #QmiMessageDmsGetAltNetConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_alt_net_config_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetAltNetConfigOutput *qmi_client_dms_get_alt_net_config_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_set_alt_net_config:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsSetAltNetConfigInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Alt Net Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_set_alt_net_config_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_set_alt_net_config (
    QmiClientDms *self,
    QmiMessageDmsSetAltNetConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_set_alt_net_config_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_set_alt_net_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_set_alt_net_config().
 *
 * Returns: a #QmiMessageDmsSetAltNetConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_alt_net_config_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetAltNetConfigOutput *qmi_client_dms_set_alt_net_config_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_boot_image_download_mode:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Boot Image Download Mode request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_boot_image_download_mode_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_dms_get_boot_image_download_mode (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_boot_image_download_mode_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_boot_image_download_mode().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_boot_image_download_mode().
 *
 * Returns: a #QmiMessageDmsGetBootImageDownloadModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_boot_image_download_mode_output_unref().
 *
 * Since: 1.18
 */
QmiMessageDmsGetBootImageDownloadModeOutput *qmi_client_dms_get_boot_image_download_mode_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_set_boot_image_download_mode:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsSetBootImageDownloadModeInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Boot Image Download Mode request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_set_boot_image_download_mode_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_dms_set_boot_image_download_mode (
    QmiClientDms *self,
    QmiMessageDmsSetBootImageDownloadModeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_set_boot_image_download_mode_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_set_boot_image_download_mode().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_set_boot_image_download_mode().
 *
 * Returns: a #QmiMessageDmsSetBootImageDownloadModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_boot_image_download_mode_output_unref().
 *
 * Since: 1.18
 */
QmiMessageDmsSetBootImageDownloadModeOutput *qmi_client_dms_set_boot_image_download_mode_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_software_version:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Software Version request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_software_version_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_get_software_version (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_software_version_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_software_version().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_software_version().
 *
 * Returns: a #QmiMessageDmsGetSoftwareVersionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_software_version_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsGetSoftwareVersionOutput *qmi_client_dms_get_software_version_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_set_service_programming_code:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsSetServiceProgrammingCodeInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Service Programming Code request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_set_service_programming_code_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_dms_set_service_programming_code (
    QmiClientDms *self,
    QmiMessageDmsSetServiceProgrammingCodeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_set_service_programming_code_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_set_service_programming_code().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_set_service_programming_code().
 *
 * Returns: a #QmiMessageDmsSetServiceProgrammingCodeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_service_programming_code_output_unref().
 *
 * Since: 1.0
 */
QmiMessageDmsSetServiceProgrammingCodeOutput *qmi_client_dms_set_service_programming_code_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_mac_address:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsGetMacAddressInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get MAC Address request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_mac_address_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_dms_get_mac_address (
    QmiClientDms *self,
    QmiMessageDmsGetMacAddressInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_mac_address_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_mac_address().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_mac_address().
 *
 * Returns: a #QmiMessageDmsGetMacAddressOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_mac_address_output_unref().
 *
 * Since: 1.26
 */
QmiMessageDmsGetMacAddressOutput *qmi_client_dms_get_mac_address_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_get_supported_messages:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Supported Messages request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_get_supported_messages_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_dms_get_supported_messages (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_get_supported_messages_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_get_supported_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_get_supported_messages().
 *
 * Returns: a #QmiMessageDmsGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_get_supported_messages_output_unref().
 *
 * Since: 1.14
 */
QmiMessageDmsGetSupportedMessagesOutput *qmi_client_dms_get_supported_messages_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_hp_change_device_mode:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsHpChangeDeviceModeInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a HP Change Device Mode request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_hp_change_device_mode_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_dms_hp_change_device_mode (
    QmiClientDms *self,
    QmiMessageDmsHpChangeDeviceModeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_hp_change_device_mode_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_hp_change_device_mode().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_hp_change_device_mode().
 *
 * Returns: a #QmiMessageDmsHpChangeDeviceModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_hp_change_device_mode_output_unref().
 *
 * Since: 1.18
 */
QmiMessageDmsHpChangeDeviceModeOutput *qmi_client_dms_hp_change_device_mode_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_swi_get_current_firmware:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Swi Get Current Firmware request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_swi_get_current_firmware_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_dms_swi_get_current_firmware (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_swi_get_current_firmware_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_swi_get_current_firmware().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_swi_get_current_firmware().
 *
 * Returns: a #QmiMessageDmsSwiGetCurrentFirmwareOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_swi_get_current_firmware_output_unref().
 *
 * Since: 1.18
 */
QmiMessageDmsSwiGetCurrentFirmwareOutput *qmi_client_dms_swi_get_current_firmware_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_swi_get_usb_composition:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Swi Get USB Composition request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_swi_get_usb_composition_finish() to get the result of the operation.
 *
 * Since: 1.20
 */
void qmi_client_dms_swi_get_usb_composition (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_swi_get_usb_composition_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_swi_get_usb_composition().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_swi_get_usb_composition().
 *
 * Returns: a #QmiMessageDmsSwiGetUsbCompositionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_swi_get_usb_composition_output_unref().
 *
 * Since: 1.20
 */
QmiMessageDmsSwiGetUsbCompositionOutput *qmi_client_dms_swi_get_usb_composition_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_swi_set_usb_composition:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsSwiSetUsbCompositionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Swi Set USB Composition request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_swi_set_usb_composition_finish() to get the result of the operation.
 *
 * Since: 1.20
 */
void qmi_client_dms_swi_set_usb_composition (
    QmiClientDms *self,
    QmiMessageDmsSwiSetUsbCompositionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_swi_set_usb_composition_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_swi_set_usb_composition().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_swi_set_usb_composition().
 *
 * Returns: a #QmiMessageDmsSwiSetUsbCompositionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_swi_set_usb_composition_output_unref().
 *
 * Since: 1.20
 */
QmiMessageDmsSwiSetUsbCompositionOutput *qmi_client_dms_swi_set_usb_composition_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_foxconn_get_firmware_version:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsFoxconnGetFirmwareVersionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Foxconn Get Firmware Version request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_foxconn_get_firmware_version_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_dms_foxconn_get_firmware_version (
    QmiClientDms *self,
    QmiMessageDmsFoxconnGetFirmwareVersionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_foxconn_get_firmware_version_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_foxconn_get_firmware_version().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_foxconn_get_firmware_version().
 *
 * Returns: a #QmiMessageDmsFoxconnGetFirmwareVersionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_foxconn_get_firmware_version_output_unref().
 *
 * Since: 1.26
 */
QmiMessageDmsFoxconnGetFirmwareVersionOutput *qmi_client_dms_foxconn_get_firmware_version_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_set_fcc_authentication:
 * @self: a #QmiClientDms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set FCC Authentication request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_set_fcc_authentication_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_dms_set_fcc_authentication (
    QmiClientDms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_set_fcc_authentication_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_set_fcc_authentication().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_set_fcc_authentication().
 *
 * Returns: a #QmiMessageDmsSetFccAuthenticationOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_set_fcc_authentication_output_unref().
 *
 * Since: 1.14
 */
QmiMessageDmsSetFccAuthenticationOutput *qmi_client_dms_set_fcc_authentication_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_foxconn_change_device_mode:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsFoxconnChangeDeviceModeInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Foxconn Change Device Mode request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_foxconn_change_device_mode_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_dms_foxconn_change_device_mode (
    QmiClientDms *self,
    QmiMessageDmsFoxconnChangeDeviceModeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_foxconn_change_device_mode_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_foxconn_change_device_mode().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_foxconn_change_device_mode().
 *
 * Returns: a #QmiMessageDmsFoxconnChangeDeviceModeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_foxconn_change_device_mode_output_unref().
 *
 * Since: 1.26
 */
QmiMessageDmsFoxconnChangeDeviceModeOutput *qmi_client_dms_foxconn_change_device_mode_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_foxconn_set_fcc_authentication:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsFoxconnSetFccAuthenticationInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Foxconn Set FCC Authentication request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_foxconn_set_fcc_authentication_finish() to get the result of the operation.
 *
 * Since: 1.28.6
 */
void qmi_client_dms_foxconn_set_fcc_authentication (
    QmiClientDms *self,
    QmiMessageDmsFoxconnSetFccAuthenticationInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_foxconn_set_fcc_authentication_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_foxconn_set_fcc_authentication().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_foxconn_set_fcc_authentication().
 *
 * Returns: a #QmiMessageDmsFoxconnSetFccAuthenticationOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_foxconn_set_fcc_authentication_output_unref().
 *
 * Since: 1.28.6
 */
QmiMessageDmsFoxconnSetFccAuthenticationOutput *qmi_client_dms_foxconn_set_fcc_authentication_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dms_foxconn_set_fcc_authentication_v2:
 * @self: a #QmiClientDms.
 * @input: a #QmiMessageDmsFoxconnSetFccAuthenticationV2Input.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Foxconn Set FCC Authentication v2 request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dms_foxconn_set_fcc_authentication_v2_finish() to get the result of the operation.
 *
 * Since: 1.32
 */
void qmi_client_dms_foxconn_set_fcc_authentication_v2 (
    QmiClientDms *self,
    QmiMessageDmsFoxconnSetFccAuthenticationV2Input *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dms_foxconn_set_fcc_authentication_v2_finish:
 * @self: a #QmiClientDms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dms_foxconn_set_fcc_authentication_v2().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dms_foxconn_set_fcc_authentication_v2().
 *
 * Returns: a #QmiMessageDmsFoxconnSetFccAuthenticationV2Output, or %NULL if @error is set. The returned value should be freed with qmi_message_dms_foxconn_set_fcc_authentication_v2_output_unref().
 *
 * Since: 1.32
 */
QmiMessageDmsFoxconnSetFccAuthenticationV2Output *qmi_client_dms_foxconn_set_fcc_authentication_v2_finish (
    QmiClientDms *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_DMS__ */
