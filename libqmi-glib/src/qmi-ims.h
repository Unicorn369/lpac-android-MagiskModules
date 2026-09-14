
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
#include "qmi-enums-ims.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_IMS__
#define __LIBQMI_GLIB_QMI_IMS__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING
#define HAVE_QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING
#define HAVE_QMI_MESSAGE_IMS_BIND
#define HAVE_QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING

/*****************************************************************************/
/* INDICATION: Qmi Indication IMS IMS Services Enabled Setting */


/* --- Output -- */

/**
 * QmiIndicationImsImsServicesEnabledSettingOutput:
 *
 * The #QmiIndicationImsImsServicesEnabledSettingOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.38
 */
typedef struct _QmiIndicationImsImsServicesEnabledSettingOutput QmiIndicationImsImsServicesEnabledSettingOutput;
GType qmi_indication_ims_ims_services_enabled_setting_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT (qmi_indication_ims_ims_services_enabled_setting_output_get_type ())


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_get_ims_carrier_config:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 * @value_ims_carrier_config: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Carrier Config' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_ims_ims_services_enabled_setting_output_get_ims_carrier_config (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_carrier_config,
    GError **error);


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_get_ims_rcs_enabled:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 * @value_ims_rcs_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS RCS Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_ims_ims_services_enabled_setting_output_get_ims_rcs_enabled (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_rcs_enabled,
    GError **error);


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_get_ims_xdm_client_enabled:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 * @value_ims_xdm_client_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS XDM Client Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_ims_ims_services_enabled_setting_output_get_ims_xdm_client_enabled (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_xdm_client_enabled,
    GError **error);


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_get_ims_autoconfig_enabled:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 * @value_ims_autoconfig_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Autoconfig Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_ims_ims_services_enabled_setting_output_get_ims_autoconfig_enabled (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_autoconfig_enabled,
    GError **error);


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_get_ims_presence_enabled:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 * @value_ims_presence_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Presence Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_ims_ims_services_enabled_setting_output_get_ims_presence_enabled (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_presence_enabled,
    GError **error);


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_get_ims_ussd_service_enabled:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 * @value_ims_ussd_service_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS USSD Service Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_ims_ims_services_enabled_setting_output_get_ims_ussd_service_enabled (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_ussd_service_enabled,
    GError **error);


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_get_ims_sms_service_enable:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 * @value_ims_sms_service_enable: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS SMS Service Enable' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_ims_ims_services_enabled_setting_output_get_ims_sms_service_enable (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_sms_service_enable,
    GError **error);


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_get_ims_ut_service_enable:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 * @value_ims_ut_service_enable: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS UT Service Enable' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_ims_ims_services_enabled_setting_output_get_ims_ut_service_enable (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_ut_service_enable,
    GError **error);


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_get_ims_service_enabled:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 * @value_ims_service_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Service Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_ims_ims_services_enabled_setting_output_get_ims_service_enabled (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_service_enabled,
    GError **error);


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_get_ims_voice_wifi_service_enable:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 * @value_ims_voice_wifi_service_enable: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Voice WiFi Service Enable' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_ims_ims_services_enabled_setting_output_get_ims_voice_wifi_service_enable (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_voice_wifi_service_enable,
    GError **error);


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_get_ims_video_telephony_service_enable:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 * @value_ims_video_telephony_service_enable: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Video Telephony Service Enable' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_ims_ims_services_enabled_setting_output_get_ims_video_telephony_service_enable (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_video_telephony_service_enable,
    GError **error);


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_get_ims_voice_over_lte_enable:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 * @value_ims_voice_over_lte_enable: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Voice Over LTE Enable' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_ims_ims_services_enabled_setting_output_get_ims_voice_over_lte_enable (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_voice_over_lte_enable,
    GError **error);


/**
 * qmi_indication_ims_ims_services_enabled_setting_output_ref:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.38
 */
QmiIndicationImsImsServicesEnabledSettingOutput *qmi_indication_ims_ims_services_enabled_setting_output_ref (QmiIndicationImsImsServicesEnabledSettingOutput *self);

/**
 * qmi_indication_ims_ims_services_enabled_setting_output_unref:
 * @self: a #QmiIndicationImsImsServicesEnabledSettingOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.38
 */
void qmi_indication_ims_ims_services_enabled_setting_output_unref (QmiIndicationImsImsServicesEnabledSettingOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationImsImsServicesEnabledSettingOutput, qmi_indication_ims_ims_services_enabled_setting_output_unref)

/**
 * qmi_indication_ims_ims_services_enabled_setting_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationImsImsServicesEnabledSettingOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationImsImsServicesEnabledSettingOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_ims_ims_services_enabled_setting_output_unref().
 *
 * Since: 1.38
 */
QmiIndicationImsImsServicesEnabledSettingOutput *qmi_indication_ims_ims_services_enabled_setting_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMS Set IMS Services Enabled Setting */


/* --- Input -- */

/**
 * QmiMessageImsSetImsServicesEnabledSettingInput:
 *
 * The #QmiMessageImsSetImsServicesEnabledSettingInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.38
 */
typedef struct _QmiMessageImsSetImsServicesEnabledSettingInput QmiMessageImsSetImsServicesEnabledSettingInput;
GType qmi_message_ims_set_ims_services_enabled_setting_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT (qmi_message_ims_set_ims_services_enabled_setting_input_get_type ())


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_carrier_config:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_carrier_config: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Carrier Config' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_carrier_config (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_carrier_config,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_carrier_config:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_carrier_config: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS Carrier Config' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_carrier_config (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_carrier_config,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_rcs_enabled:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_rcs_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS RCS Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_rcs_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_rcs_enabled,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_rcs_enabled:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_rcs_enabled: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS RCS Enabled' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_rcs_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_rcs_enabled,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_xdm_client_enabled:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_xdm_client_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS XDM Client Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_xdm_client_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_xdm_client_enabled,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_xdm_client_enabled:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_xdm_client_enabled: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS XDM Client Enabled' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_xdm_client_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_xdm_client_enabled,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_autoconfig_enabled:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_autoconfig_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Autoconfig Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_autoconfig_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_autoconfig_enabled,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_autoconfig_enabled:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_autoconfig_enabled: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS Autoconfig Enabled' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_autoconfig_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_autoconfig_enabled,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_presence_enabled:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_presence_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Presence Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_presence_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_presence_enabled,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_presence_enabled:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_presence_enabled: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS Presence Enabled' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_presence_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_presence_enabled,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_ussd_service_enabled:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_ussd_service_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS USSD Service Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_ussd_service_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_ussd_service_enabled,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_ussd_service_enabled:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_ussd_service_enabled: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS USSD Service Enabled' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_ussd_service_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_ussd_service_enabled,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_sms_service_enable:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_sms_service_enable: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS SMS Service Enable' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_sms_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_sms_service_enable,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_sms_service_enable:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_sms_service_enable: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS SMS Service Enable' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_sms_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_sms_service_enable,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_ut_service_enable:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_ut_service_enable: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS UT Service Enable' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_ut_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_ut_service_enable,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_ut_service_enable:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_ut_service_enable: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS UT Service Enable' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_ut_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_ut_service_enable,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_service_enabled:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_service_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Service Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_service_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_service_enabled,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_service_enabled:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_service_enabled: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS Service Enabled' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_service_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_service_enabled,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_call_mode_preference:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_call_mode_preference: (out)(optional): a placeholder for the output #QmiImsCallModePreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Call Mode Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_call_mode_preference (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    QmiImsCallModePreference *value_ims_call_mode_preference,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_call_mode_preference:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_call_mode_preference: a #QmiImsCallModePreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS Call Mode Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_call_mode_preference (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    QmiImsCallModePreference value_ims_call_mode_preference,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_voice_wifi_service_enable:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_voice_wifi_service_enable: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Voice WiFi Service Enable' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_voice_wifi_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_voice_wifi_service_enable,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_voice_wifi_service_enable:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_voice_wifi_service_enable: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS Voice WiFi Service Enable' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_voice_wifi_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_voice_wifi_service_enable,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_video_telephony_service_enable:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_video_telephony_service_enable: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Video Telephony Service Enable' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_video_telephony_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_video_telephony_service_enable,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_video_telephony_service_enable:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_video_telephony_service_enable: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS Video Telephony Service Enable' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_video_telephony_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_video_telephony_service_enable,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_voice_over_lte_enable:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_voice_over_lte_enable: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Voice Over LTE Enable' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_voice_over_lte_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_voice_over_lte_enable,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_voice_over_lte_enable:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @value_ims_voice_over_lte_enable: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMS Voice Over LTE Enable' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_voice_over_lte_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_voice_over_lte_enable,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_ref:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.38
 */
QmiMessageImsSetImsServicesEnabledSettingInput *qmi_message_ims_set_ims_services_enabled_setting_input_ref (QmiMessageImsSetImsServicesEnabledSettingInput *self);

/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_unref:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.38
 */
void qmi_message_ims_set_ims_services_enabled_setting_input_unref (QmiMessageImsSetImsServicesEnabledSettingInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageImsSetImsServicesEnabledSettingInput, qmi_message_ims_set_ims_services_enabled_setting_input_unref)

/**
 * qmi_message_ims_set_ims_services_enabled_setting_input_new:
 *
 * Allocates a new #QmiMessageImsSetImsServicesEnabledSettingInput.
 *
 * Returns: the newly created #QmiMessageImsSetImsServicesEnabledSettingInput. The returned value should be freed with qmi_message_ims_set_ims_services_enabled_setting_input_unref().
 *
 * Since: 1.38
 */
QmiMessageImsSetImsServicesEnabledSettingInput *qmi_message_ims_set_ims_services_enabled_setting_input_new (void);

/* --- Output -- */

/**
 * QmiMessageImsSetImsServicesEnabledSettingOutput:
 *
 * The #QmiMessageImsSetImsServicesEnabledSettingOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.38
 */
typedef struct _QmiMessageImsSetImsServicesEnabledSettingOutput QmiMessageImsSetImsServicesEnabledSettingOutput;
GType qmi_message_ims_set_ims_services_enabled_setting_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_OUTPUT (qmi_message_ims_set_ims_services_enabled_setting_output_get_type ())


/**
 * qmi_message_ims_set_ims_services_enabled_setting_output_get_result:
 * @self: a QmiMessageImsSetImsServicesEnabledSettingOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.38
 */
gboolean qmi_message_ims_set_ims_services_enabled_setting_output_get_result (
    QmiMessageImsSetImsServicesEnabledSettingOutput *self,
    GError **error);


/**
 * qmi_message_ims_set_ims_services_enabled_setting_output_ref:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.38
 */
QmiMessageImsSetImsServicesEnabledSettingOutput *qmi_message_ims_set_ims_services_enabled_setting_output_ref (QmiMessageImsSetImsServicesEnabledSettingOutput *self);

/**
 * qmi_message_ims_set_ims_services_enabled_setting_output_unref:
 * @self: a #QmiMessageImsSetImsServicesEnabledSettingOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.38
 */
void qmi_message_ims_set_ims_services_enabled_setting_output_unref (QmiMessageImsSetImsServicesEnabledSettingOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageImsSetImsServicesEnabledSettingOutput, qmi_message_ims_set_ims_services_enabled_setting_output_unref)

/**
 * qmi_message_ims_set_ims_services_enabled_setting_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageImsSetImsServicesEnabledSettingOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageImsSetImsServicesEnabledSettingOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ims_set_ims_services_enabled_setting_output_unref().
 *
 * Since: 1.38
 */
QmiMessageImsSetImsServicesEnabledSettingOutput *qmi_message_ims_set_ims_services_enabled_setting_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMS Get IMS Services Enabled Setting */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageImsGetImsServicesEnabledSettingOutput:
 *
 * The #QmiMessageImsGetImsServicesEnabledSettingOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
typedef struct _QmiMessageImsGetImsServicesEnabledSettingOutput QmiMessageImsGetImsServicesEnabledSettingOutput;
GType qmi_message_ims_get_ims_services_enabled_setting_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT (qmi_message_ims_get_ims_services_enabled_setting_output_get_type ())


/**
 * qmi_message_ims_get_ims_services_enabled_setting_output_get_result:
 * @self: a QmiMessageImsGetImsServicesEnabledSettingOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.34
 */
gboolean qmi_message_ims_get_ims_services_enabled_setting_output_get_result (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    GError **error);


/**
 * qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_voice_service_enabled:
 * @self: a #QmiMessageImsGetImsServicesEnabledSettingOutput.
 * @value_ims_voice_service_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Voice Service Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_voice_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_voice_service_enabled,
    GError **error);


/**
 * qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_video_telephony_service_enabled:
 * @self: a #QmiMessageImsGetImsServicesEnabledSettingOutput.
 * @value_ims_video_telephony_service_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Video Telephony Service Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_video_telephony_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_video_telephony_service_enabled,
    GError **error);


/**
 * qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_voice_wifi_service_enabled:
 * @self: a #QmiMessageImsGetImsServicesEnabledSettingOutput.
 * @value_ims_voice_wifi_service_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Voice WiFi Service Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_voice_wifi_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_voice_wifi_service_enabled,
    GError **error);


/**
 * qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_registration_service_enabled:
 * @self: a #QmiMessageImsGetImsServicesEnabledSettingOutput.
 * @value_ims_registration_service_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Registration Service Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_registration_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_registration_service_enabled,
    GError **error);


/**
 * qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_ut_service_enabled:
 * @self: a #QmiMessageImsGetImsServicesEnabledSettingOutput.
 * @value_ims_ut_service_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS UT Service Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_ut_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_ut_service_enabled,
    GError **error);


/**
 * qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_sms_service_enabled:
 * @self: a #QmiMessageImsGetImsServicesEnabledSettingOutput.
 * @value_ims_sms_service_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS SMS Service Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_sms_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_sms_service_enabled,
    GError **error);


/**
 * qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_ussd_service_enabled:
 * @self: a #QmiMessageImsGetImsServicesEnabledSettingOutput.
 * @value_ims_ussd_service_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS USSD Service Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_ussd_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_ussd_service_enabled,
    GError **error);


/**
 * qmi_message_ims_get_ims_services_enabled_setting_output_ref:
 * @self: a #QmiMessageImsGetImsServicesEnabledSettingOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.34
 */
QmiMessageImsGetImsServicesEnabledSettingOutput *qmi_message_ims_get_ims_services_enabled_setting_output_ref (QmiMessageImsGetImsServicesEnabledSettingOutput *self);

/**
 * qmi_message_ims_get_ims_services_enabled_setting_output_unref:
 * @self: a #QmiMessageImsGetImsServicesEnabledSettingOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.34
 */
void qmi_message_ims_get_ims_services_enabled_setting_output_unref (QmiMessageImsGetImsServicesEnabledSettingOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageImsGetImsServicesEnabledSettingOutput, qmi_message_ims_get_ims_services_enabled_setting_output_unref)

/**
 * qmi_message_ims_get_ims_services_enabled_setting_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageImsGetImsServicesEnabledSettingOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageImsGetImsServicesEnabledSettingOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ims_get_ims_services_enabled_setting_output_unref().
 *
 * Since: 1.34
 */
QmiMessageImsGetImsServicesEnabledSettingOutput *qmi_message_ims_get_ims_services_enabled_setting_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMS Bind */


/* --- Input -- */

/**
 * QmiMessageImsBindInput:
 *
 * The #QmiMessageImsBindInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.36
 */
typedef struct _QmiMessageImsBindInput QmiMessageImsBindInput;
GType qmi_message_ims_bind_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_IMS_BIND_INPUT (qmi_message_ims_bind_input_get_type ())


/**
 * qmi_message_ims_bind_input_get_binding:
 * @self: a #QmiMessageImsBindInput.
 * @value_binding: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Binding' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_ims_bind_input_get_binding (
    QmiMessageImsBindInput *self,
    guint32 *value_binding,
    GError **error);


/**
 * qmi_message_ims_bind_input_set_binding:
 * @self: a #QmiMessageImsBindInput.
 * @value_binding: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Binding' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_ims_bind_input_set_binding (
    QmiMessageImsBindInput *self,
    guint32 value_binding,
    GError **error);


/**
 * qmi_message_ims_bind_input_ref:
 * @self: a #QmiMessageImsBindInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.36
 */
QmiMessageImsBindInput *qmi_message_ims_bind_input_ref (QmiMessageImsBindInput *self);

/**
 * qmi_message_ims_bind_input_unref:
 * @self: a #QmiMessageImsBindInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.36
 */
void qmi_message_ims_bind_input_unref (QmiMessageImsBindInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageImsBindInput, qmi_message_ims_bind_input_unref)

/**
 * qmi_message_ims_bind_input_new:
 *
 * Allocates a new #QmiMessageImsBindInput.
 *
 * Returns: the newly created #QmiMessageImsBindInput. The returned value should be freed with qmi_message_ims_bind_input_unref().
 *
 * Since: 1.36
 */
QmiMessageImsBindInput *qmi_message_ims_bind_input_new (void);

/* --- Output -- */

/**
 * QmiMessageImsBindOutput:
 *
 * The #QmiMessageImsBindOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.36
 */
typedef struct _QmiMessageImsBindOutput QmiMessageImsBindOutput;
GType qmi_message_ims_bind_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_IMS_BIND_OUTPUT (qmi_message_ims_bind_output_get_type ())


/**
 * qmi_message_ims_bind_output_get_result:
 * @self: a QmiMessageImsBindOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.36
 */
gboolean qmi_message_ims_bind_output_get_result (
    QmiMessageImsBindOutput *self,
    GError **error);


/**
 * qmi_message_ims_bind_output_ref:
 * @self: a #QmiMessageImsBindOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.36
 */
QmiMessageImsBindOutput *qmi_message_ims_bind_output_ref (QmiMessageImsBindOutput *self);

/**
 * qmi_message_ims_bind_output_unref:
 * @self: a #QmiMessageImsBindOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.36
 */
void qmi_message_ims_bind_output_unref (QmiMessageImsBindOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageImsBindOutput, qmi_message_ims_bind_output_unref)

/**
 * qmi_message_ims_bind_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageImsBindOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageImsBindOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ims_bind_output_unref().
 *
 * Since: 1.36
 */
QmiMessageImsBindOutput *qmi_message_ims_bind_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: IMS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_ims_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_IMS

/*****************************************************************************/
/* CLIENT: QMI Client IMS */

#define QMI_TYPE_CLIENT_IMS            (qmi_client_ims_get_type ())
#define QMI_CLIENT_IMS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_IMS, QmiClientIms))
#define QMI_CLIENT_IMS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_IMS, QmiClientImsClass))
#define QMI_IS_CLIENT_IMS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_IMS))
#define QMI_IS_CLIENT_IMS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_IMS))
#define QMI_CLIENT_IMS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_IMS, QmiClientImsClass))

typedef struct _QmiClientIms QmiClientIms;
typedef struct _QmiClientImsClass QmiClientImsClass;

/**
 * QmiClientIms:
 *
 * #QmiClient which handles operations in the IMS service.
 *
 * The #QmiClientIms structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
struct _QmiClientIms {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientImsClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_ims_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientIms, g_object_unref)

/**
 * qmi_client_ims_set_ims_services_enabled_setting:
 * @self: a #QmiClientIms.
 * @input: a #QmiMessageImsSetImsServicesEnabledSettingInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set IMS Services Enabled Setting request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_ims_set_ims_services_enabled_setting_finish() to get the result of the operation.
 *
 * Since: 1.38
 */
void qmi_client_ims_set_ims_services_enabled_setting (
    QmiClientIms *self,
    QmiMessageImsSetImsServicesEnabledSettingInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_ims_set_ims_services_enabled_setting_finish:
 * @self: a #QmiClientIms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_ims_set_ims_services_enabled_setting().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_ims_set_ims_services_enabled_setting().
 *
 * Returns: a #QmiMessageImsSetImsServicesEnabledSettingOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ims_set_ims_services_enabled_setting_output_unref().
 *
 * Since: 1.38
 */
QmiMessageImsSetImsServicesEnabledSettingOutput *qmi_client_ims_set_ims_services_enabled_setting_finish (
    QmiClientIms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_ims_get_ims_services_enabled_setting:
 * @self: a #QmiClientIms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get IMS Services Enabled Setting request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_ims_get_ims_services_enabled_setting_finish() to get the result of the operation.
 *
 * Since: 1.34
 */
void qmi_client_ims_get_ims_services_enabled_setting (
    QmiClientIms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_ims_get_ims_services_enabled_setting_finish:
 * @self: a #QmiClientIms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_ims_get_ims_services_enabled_setting().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_ims_get_ims_services_enabled_setting().
 *
 * Returns: a #QmiMessageImsGetImsServicesEnabledSettingOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ims_get_ims_services_enabled_setting_output_unref().
 *
 * Since: 1.34
 */
QmiMessageImsGetImsServicesEnabledSettingOutput *qmi_client_ims_get_ims_services_enabled_setting_finish (
    QmiClientIms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_ims_bind:
 * @self: a #QmiClientIms.
 * @input: a #QmiMessageImsBindInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Bind request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_ims_bind_finish() to get the result of the operation.
 *
 * Since: 1.36
 */
void qmi_client_ims_bind (
    QmiClientIms *self,
    QmiMessageImsBindInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_ims_bind_finish:
 * @self: a #QmiClientIms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_ims_bind().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_ims_bind().
 *
 * Returns: a #QmiMessageImsBindOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ims_bind_output_unref().
 *
 * Since: 1.36
 */
QmiMessageImsBindOutput *qmi_client_ims_bind_finish (
    QmiClientIms *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_IMS__ */
