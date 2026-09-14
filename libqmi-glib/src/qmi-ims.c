
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


#include <string.h>

#include "qmi-ims.h"
#include "qmi-common.h"
#include "qmi-enum-types.h"
#include "qmi-flag-types.h"
#include "qmi-enum-types-private.h"
#include "qmi-flag-types-private.h"
#include "qmi-flags64-types.h"
#include "qmi-error-types.h"
#include "qmi-device.h"
#include "qmi-helpers.h"

#define QMI_STATUS_SUCCESS 0x0000
#define QMI_STATUS_FAILURE 0x0001


typedef enum {
    QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING = 0x008f,
    QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING = 0x0090,
    QMI_MESSAGE_IMS_BIND = 0x0098,
} QmiMessageIms;


typedef enum {
    QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING = 0x0091,
} QmiIndicationIms;


/*****************************************************************************/
/* INDICATION: Qmi Indication IMS IMS Services Enabled Setting */


/* --- Output -- */

struct _QmiIndicationImsImsServicesEnabledSettingOutput {
    volatile gint ref_count;

    /* IMS Carrier Config */
    gboolean arg_ims_carrier_config_set;
    guint8 arg_ims_carrier_config;

    /* IMS RCS Enabled */
    gboolean arg_ims_rcs_enabled_set;
    guint8 arg_ims_rcs_enabled;

    /* IMS XDM Client Enabled */
    gboolean arg_ims_xdm_client_enabled_set;
    guint8 arg_ims_xdm_client_enabled;

    /* IMS Autoconfig Enabled */
    gboolean arg_ims_autoconfig_enabled_set;
    guint8 arg_ims_autoconfig_enabled;

    /* IMS Presence Enabled */
    gboolean arg_ims_presence_enabled_set;
    guint8 arg_ims_presence_enabled;

    /* IMS USSD Service Enabled */
    gboolean arg_ims_ussd_service_enabled_set;
    guint8 arg_ims_ussd_service_enabled;

    /* IMS SMS Service Enable */
    gboolean arg_ims_sms_service_enable_set;
    guint8 arg_ims_sms_service_enable;

    /* IMS UT Service Enable */
    gboolean arg_ims_ut_service_enable_set;
    guint8 arg_ims_ut_service_enable;

    /* IMS Service Enabled */
    gboolean arg_ims_service_enabled_set;
    guint8 arg_ims_service_enabled;

    /* IMS Voice WiFi Service Enable */
    gboolean arg_ims_voice_wifi_service_enable_set;
    guint8 arg_ims_voice_wifi_service_enable;

    /* IMS Video Telephony Service Enable */
    gboolean arg_ims_video_telephony_service_enable_set;
    guint8 arg_ims_video_telephony_service_enable;

    /* IMS Voice Over LTE Enable */
    gboolean arg_ims_voice_over_lte_enable_set;
    guint8 arg_ims_voice_over_lte_enable;
};

#define QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_CARRIER_CONFIG 0x25
#define QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_RCS_ENABLED 0x21
#define QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_XDM_CLIENT_ENABLED 0x20
#define QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_AUTOCONFIG_ENABLED 0x1F
#define QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_PRESENCE_ENABLED 0x1E
#define QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_USSD_SERVICE_ENABLED 0x1C
#define QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_SMS_SERVICE_ENABLE 0x1A
#define QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_UT_SERVICE_ENABLE 0x19
#define QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_SERVICE_ENABLED 0x18
#define QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_WIFI_SERVICE_ENABLE 0x14
#define QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_ENABLE 0x11
#define QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_OVER_LTE_ENABLE 0x10

gboolean
qmi_indication_ims_ims_services_enabled_setting_output_get_ims_carrier_config (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_carrier_config,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_carrier_config_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Carrier Config' was not found in the message");
        return FALSE;
    }

    if (value_ims_carrier_config)
        *value_ims_carrier_config = (gboolean)(self->arg_ims_carrier_config);

    return TRUE;
}

gboolean
qmi_indication_ims_ims_services_enabled_setting_output_get_ims_rcs_enabled (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_rcs_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_rcs_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS RCS Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_rcs_enabled)
        *value_ims_rcs_enabled = (gboolean)(self->arg_ims_rcs_enabled);

    return TRUE;
}

gboolean
qmi_indication_ims_ims_services_enabled_setting_output_get_ims_xdm_client_enabled (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_xdm_client_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_xdm_client_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS XDM Client Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_xdm_client_enabled)
        *value_ims_xdm_client_enabled = (gboolean)(self->arg_ims_xdm_client_enabled);

    return TRUE;
}

gboolean
qmi_indication_ims_ims_services_enabled_setting_output_get_ims_autoconfig_enabled (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_autoconfig_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_autoconfig_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Autoconfig Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_autoconfig_enabled)
        *value_ims_autoconfig_enabled = (gboolean)(self->arg_ims_autoconfig_enabled);

    return TRUE;
}

gboolean
qmi_indication_ims_ims_services_enabled_setting_output_get_ims_presence_enabled (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_presence_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_presence_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Presence Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_presence_enabled)
        *value_ims_presence_enabled = (gboolean)(self->arg_ims_presence_enabled);

    return TRUE;
}

gboolean
qmi_indication_ims_ims_services_enabled_setting_output_get_ims_ussd_service_enabled (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_ussd_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_ussd_service_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS USSD Service Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_ussd_service_enabled)
        *value_ims_ussd_service_enabled = (gboolean)(self->arg_ims_ussd_service_enabled);

    return TRUE;
}

gboolean
qmi_indication_ims_ims_services_enabled_setting_output_get_ims_sms_service_enable (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_sms_service_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_sms_service_enable_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS SMS Service Enable' was not found in the message");
        return FALSE;
    }

    if (value_ims_sms_service_enable)
        *value_ims_sms_service_enable = (gboolean)(self->arg_ims_sms_service_enable);

    return TRUE;
}

gboolean
qmi_indication_ims_ims_services_enabled_setting_output_get_ims_ut_service_enable (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_ut_service_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_ut_service_enable_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS UT Service Enable' was not found in the message");
        return FALSE;
    }

    if (value_ims_ut_service_enable)
        *value_ims_ut_service_enable = (gboolean)(self->arg_ims_ut_service_enable);

    return TRUE;
}

gboolean
qmi_indication_ims_ims_services_enabled_setting_output_get_ims_service_enabled (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_service_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Service Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_service_enabled)
        *value_ims_service_enabled = (gboolean)(self->arg_ims_service_enabled);

    return TRUE;
}

gboolean
qmi_indication_ims_ims_services_enabled_setting_output_get_ims_voice_wifi_service_enable (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_voice_wifi_service_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_voice_wifi_service_enable_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Voice WiFi Service Enable' was not found in the message");
        return FALSE;
    }

    if (value_ims_voice_wifi_service_enable)
        *value_ims_voice_wifi_service_enable = (gboolean)(self->arg_ims_voice_wifi_service_enable);

    return TRUE;
}

gboolean
qmi_indication_ims_ims_services_enabled_setting_output_get_ims_video_telephony_service_enable (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_video_telephony_service_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_video_telephony_service_enable_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Video Telephony Service Enable' was not found in the message");
        return FALSE;
    }

    if (value_ims_video_telephony_service_enable)
        *value_ims_video_telephony_service_enable = (gboolean)(self->arg_ims_video_telephony_service_enable);

    return TRUE;
}

gboolean
qmi_indication_ims_ims_services_enabled_setting_output_get_ims_voice_over_lte_enable (
    QmiIndicationImsImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_voice_over_lte_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_voice_over_lte_enable_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Voice Over LTE Enable' was not found in the message");
        return FALSE;
    }

    if (value_ims_voice_over_lte_enable)
        *value_ims_voice_over_lte_enable = (gboolean)(self->arg_ims_voice_over_lte_enable);

    return TRUE;
}

GType
qmi_indication_ims_ims_services_enabled_setting_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationImsImsServicesEnabledSettingOutput"),
                                          (GBoxedCopyFunc) qmi_indication_ims_ims_services_enabled_setting_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_ims_ims_services_enabled_setting_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationImsImsServicesEnabledSettingOutput *
qmi_indication_ims_ims_services_enabled_setting_output_ref (QmiIndicationImsImsServicesEnabledSettingOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_ims_ims_services_enabled_setting_output_unref (QmiIndicationImsImsServicesEnabledSettingOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationImsImsServicesEnabledSettingOutput, self);
    }
}

static gchar *
qmi_indication_ims_ims_services_enabled_setting_output_ims_carrier_config_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_CARRIER_CONFIG, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_ims_ims_services_enabled_setting_output_ims_rcs_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_RCS_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_ims_ims_services_enabled_setting_output_ims_xdm_client_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_XDM_CLIENT_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_ims_ims_services_enabled_setting_output_ims_autoconfig_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_AUTOCONFIG_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_ims_ims_services_enabled_setting_output_ims_presence_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_PRESENCE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_ims_ims_services_enabled_setting_output_ims_ussd_service_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_USSD_SERVICE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_ims_ims_services_enabled_setting_output_ims_sms_service_enable_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_SMS_SERVICE_ENABLE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_ims_ims_services_enabled_setting_output_ims_ut_service_enable_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_UT_SERVICE_ENABLE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_ims_ims_services_enabled_setting_output_ims_service_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_SERVICE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_ims_ims_services_enabled_setting_output_ims_voice_wifi_service_enable_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_WIFI_SERVICE_ENABLE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_ims_ims_services_enabled_setting_output_ims_video_telephony_service_enable_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_ENABLE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_ims_ims_services_enabled_setting_output_ims_voice_over_lte_enable_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_OVER_LTE_ENABLE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_ims_services_enabled_setting_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_ims_services_enabled_setting_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_ims_services_enabled_setting_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_CARRIER_CONFIG:
            tlv_type_str = "IMS Carrier Config";
            translated_value = qmi_indication_ims_ims_services_enabled_setting_output_ims_carrier_config_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_RCS_ENABLED:
            tlv_type_str = "IMS RCS Enabled";
            translated_value = qmi_indication_ims_ims_services_enabled_setting_output_ims_rcs_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_XDM_CLIENT_ENABLED:
            tlv_type_str = "IMS XDM Client Enabled";
            translated_value = qmi_indication_ims_ims_services_enabled_setting_output_ims_xdm_client_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_AUTOCONFIG_ENABLED:
            tlv_type_str = "IMS Autoconfig Enabled";
            translated_value = qmi_indication_ims_ims_services_enabled_setting_output_ims_autoconfig_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_PRESENCE_ENABLED:
            tlv_type_str = "IMS Presence Enabled";
            translated_value = qmi_indication_ims_ims_services_enabled_setting_output_ims_presence_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_USSD_SERVICE_ENABLED:
            tlv_type_str = "IMS USSD Service Enabled";
            translated_value = qmi_indication_ims_ims_services_enabled_setting_output_ims_ussd_service_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_SMS_SERVICE_ENABLE:
            tlv_type_str = "IMS SMS Service Enable";
            translated_value = qmi_indication_ims_ims_services_enabled_setting_output_ims_sms_service_enable_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_UT_SERVICE_ENABLE:
            tlv_type_str = "IMS UT Service Enable";
            translated_value = qmi_indication_ims_ims_services_enabled_setting_output_ims_ut_service_enable_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_SERVICE_ENABLED:
            tlv_type_str = "IMS Service Enabled";
            translated_value = qmi_indication_ims_ims_services_enabled_setting_output_ims_service_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_WIFI_SERVICE_ENABLE:
            tlv_type_str = "IMS Voice WiFi Service Enable";
            translated_value = qmi_indication_ims_ims_services_enabled_setting_output_ims_voice_wifi_service_enable_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_ENABLE:
            tlv_type_str = "IMS Video Telephony Service Enable";
            translated_value = qmi_indication_ims_ims_services_enabled_setting_output_ims_video_telephony_service_enable_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_OVER_LTE_ENABLE:
            tlv_type_str = "IMS Voice Over LTE Enable";
            translated_value = qmi_indication_ims_ims_services_enabled_setting_output_ims_voice_over_lte_enable_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_ims_services_enabled_setting_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"IMS Services Enabled Setting\" (0x0091)\n",
                            line_prefix);

    {
        struct indication_ims_services_enabled_setting_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_ims_services_enabled_setting_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationImsImsServicesEnabledSettingOutput *
qmi_indication_ims_ims_services_enabled_setting_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationImsImsServicesEnabledSettingOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING);

    self = g_slice_new0 (QmiIndicationImsImsServicesEnabledSettingOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_CARRIER_CONFIG, NULL, NULL)) == 0) {
                goto qmi_indication_ims_ims_services_enabled_setting_output_ims_carrier_config_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_ims_ims_services_enabled_setting_output_ims_carrier_config_out;
                self->arg_ims_carrier_config = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Carrier Config' TLV", offset);
            }

            self->arg_ims_carrier_config_set = TRUE;

qmi_indication_ims_ims_services_enabled_setting_output_ims_carrier_config_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_RCS_ENABLED, NULL, NULL)) == 0) {
                goto qmi_indication_ims_ims_services_enabled_setting_output_ims_rcs_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_ims_ims_services_enabled_setting_output_ims_rcs_enabled_out;
                self->arg_ims_rcs_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS RCS Enabled' TLV", offset);
            }

            self->arg_ims_rcs_enabled_set = TRUE;

qmi_indication_ims_ims_services_enabled_setting_output_ims_rcs_enabled_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_XDM_CLIENT_ENABLED, NULL, NULL)) == 0) {
                goto qmi_indication_ims_ims_services_enabled_setting_output_ims_xdm_client_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_ims_ims_services_enabled_setting_output_ims_xdm_client_enabled_out;
                self->arg_ims_xdm_client_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS XDM Client Enabled' TLV", offset);
            }

            self->arg_ims_xdm_client_enabled_set = TRUE;

qmi_indication_ims_ims_services_enabled_setting_output_ims_xdm_client_enabled_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_AUTOCONFIG_ENABLED, NULL, NULL)) == 0) {
                goto qmi_indication_ims_ims_services_enabled_setting_output_ims_autoconfig_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_ims_ims_services_enabled_setting_output_ims_autoconfig_enabled_out;
                self->arg_ims_autoconfig_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Autoconfig Enabled' TLV", offset);
            }

            self->arg_ims_autoconfig_enabled_set = TRUE;

qmi_indication_ims_ims_services_enabled_setting_output_ims_autoconfig_enabled_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_PRESENCE_ENABLED, NULL, NULL)) == 0) {
                goto qmi_indication_ims_ims_services_enabled_setting_output_ims_presence_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_ims_ims_services_enabled_setting_output_ims_presence_enabled_out;
                self->arg_ims_presence_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Presence Enabled' TLV", offset);
            }

            self->arg_ims_presence_enabled_set = TRUE;

qmi_indication_ims_ims_services_enabled_setting_output_ims_presence_enabled_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_USSD_SERVICE_ENABLED, NULL, NULL)) == 0) {
                goto qmi_indication_ims_ims_services_enabled_setting_output_ims_ussd_service_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_ims_ims_services_enabled_setting_output_ims_ussd_service_enabled_out;
                self->arg_ims_ussd_service_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS USSD Service Enabled' TLV", offset);
            }

            self->arg_ims_ussd_service_enabled_set = TRUE;

qmi_indication_ims_ims_services_enabled_setting_output_ims_ussd_service_enabled_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_SMS_SERVICE_ENABLE, NULL, NULL)) == 0) {
                goto qmi_indication_ims_ims_services_enabled_setting_output_ims_sms_service_enable_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_ims_ims_services_enabled_setting_output_ims_sms_service_enable_out;
                self->arg_ims_sms_service_enable = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS SMS Service Enable' TLV", offset);
            }

            self->arg_ims_sms_service_enable_set = TRUE;

qmi_indication_ims_ims_services_enabled_setting_output_ims_sms_service_enable_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_UT_SERVICE_ENABLE, NULL, NULL)) == 0) {
                goto qmi_indication_ims_ims_services_enabled_setting_output_ims_ut_service_enable_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_ims_ims_services_enabled_setting_output_ims_ut_service_enable_out;
                self->arg_ims_ut_service_enable = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS UT Service Enable' TLV", offset);
            }

            self->arg_ims_ut_service_enable_set = TRUE;

qmi_indication_ims_ims_services_enabled_setting_output_ims_ut_service_enable_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_SERVICE_ENABLED, NULL, NULL)) == 0) {
                goto qmi_indication_ims_ims_services_enabled_setting_output_ims_service_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_ims_ims_services_enabled_setting_output_ims_service_enabled_out;
                self->arg_ims_service_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Service Enabled' TLV", offset);
            }

            self->arg_ims_service_enabled_set = TRUE;

qmi_indication_ims_ims_services_enabled_setting_output_ims_service_enabled_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_WIFI_SERVICE_ENABLE, NULL, NULL)) == 0) {
                goto qmi_indication_ims_ims_services_enabled_setting_output_ims_voice_wifi_service_enable_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_ims_ims_services_enabled_setting_output_ims_voice_wifi_service_enable_out;
                self->arg_ims_voice_wifi_service_enable = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Voice WiFi Service Enable' TLV", offset);
            }

            self->arg_ims_voice_wifi_service_enable_set = TRUE;

qmi_indication_ims_ims_services_enabled_setting_output_ims_voice_wifi_service_enable_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_ENABLE, NULL, NULL)) == 0) {
                goto qmi_indication_ims_ims_services_enabled_setting_output_ims_video_telephony_service_enable_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_ims_ims_services_enabled_setting_output_ims_video_telephony_service_enable_out;
                self->arg_ims_video_telephony_service_enable = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Video Telephony Service Enable' TLV", offset);
            }

            self->arg_ims_video_telephony_service_enable_set = TRUE;

qmi_indication_ims_ims_services_enabled_setting_output_ims_video_telephony_service_enable_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_OVER_LTE_ENABLE, NULL, NULL)) == 0) {
                goto qmi_indication_ims_ims_services_enabled_setting_output_ims_voice_over_lte_enable_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_ims_ims_services_enabled_setting_output_ims_voice_over_lte_enable_out;
                self->arg_ims_voice_over_lte_enable = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Voice Over LTE Enable' TLV", offset);
            }

            self->arg_ims_voice_over_lte_enable_set = TRUE;

qmi_indication_ims_ims_services_enabled_setting_output_ims_voice_over_lte_enable_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMS Set IMS Services Enabled Setting */


/* --- Input -- */

struct _QmiMessageImsSetImsServicesEnabledSettingInput {
    volatile gint ref_count;

    /* IMS Carrier Config */
    gboolean arg_ims_carrier_config_set;
    guint8 arg_ims_carrier_config;

    /* IMS RCS Enabled */
    gboolean arg_ims_rcs_enabled_set;
    guint8 arg_ims_rcs_enabled;

    /* IMS XDM Client Enabled */
    gboolean arg_ims_xdm_client_enabled_set;
    guint8 arg_ims_xdm_client_enabled;

    /* IMS Autoconfig Enabled */
    gboolean arg_ims_autoconfig_enabled_set;
    guint8 arg_ims_autoconfig_enabled;

    /* IMS Presence Enabled */
    gboolean arg_ims_presence_enabled_set;
    guint8 arg_ims_presence_enabled;

    /* IMS USSD Service Enabled */
    gboolean arg_ims_ussd_service_enabled_set;
    guint8 arg_ims_ussd_service_enabled;

    /* IMS SMS Service Enable */
    gboolean arg_ims_sms_service_enable_set;
    guint8 arg_ims_sms_service_enable;

    /* IMS UT Service Enable */
    gboolean arg_ims_ut_service_enable_set;
    guint8 arg_ims_ut_service_enable;

    /* IMS Service Enabled */
    gboolean arg_ims_service_enabled_set;
    guint8 arg_ims_service_enabled;

    /* IMS Call Mode Preference */
    gboolean arg_ims_call_mode_preference_set;
    guint8 arg_ims_call_mode_preference;

    /* IMS Voice WiFi Service Enable */
    gboolean arg_ims_voice_wifi_service_enable_set;
    guint8 arg_ims_voice_wifi_service_enable;

    /* IMS Video Telephony Service Enable */
    gboolean arg_ims_video_telephony_service_enable_set;
    guint8 arg_ims_video_telephony_service_enable;

    /* IMS Voice Over LTE Enable */
    gboolean arg_ims_voice_over_lte_enable_set;
    guint8 arg_ims_voice_over_lte_enable;
};

#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_CARRIER_CONFIG 0x25
#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_RCS_ENABLED 0x21
#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_XDM_CLIENT_ENABLED 0x20
#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_AUTOCONFIG_ENABLED 0x1F
#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_PRESENCE_ENABLED 0x1E
#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_USSD_SERVICE_ENABLED 0x1C
#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_SMS_SERVICE_ENABLE 0x1A
#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_UT_SERVICE_ENABLE 0x19
#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_SERVICE_ENABLED 0x18
#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_CALL_MODE_PREFERENCE 0x15
#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_VOICE_WIFI_SERVICE_ENABLE 0x14
#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_ENABLE 0x11
#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_VOICE_OVER_LTE_ENABLE 0x10

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_carrier_config (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_carrier_config,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_carrier_config_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Carrier Config' was not found in the message");
        return FALSE;
    }

    if (value_ims_carrier_config)
        *value_ims_carrier_config = (gboolean)(self->arg_ims_carrier_config);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_carrier_config (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_carrier_config,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_carrier_config = (guint8)(value_ims_carrier_config);
    self->arg_ims_carrier_config_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_rcs_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_rcs_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_rcs_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS RCS Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_rcs_enabled)
        *value_ims_rcs_enabled = (gboolean)(self->arg_ims_rcs_enabled);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_rcs_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_rcs_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_rcs_enabled = (guint8)(value_ims_rcs_enabled);
    self->arg_ims_rcs_enabled_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_xdm_client_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_xdm_client_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_xdm_client_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS XDM Client Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_xdm_client_enabled)
        *value_ims_xdm_client_enabled = (gboolean)(self->arg_ims_xdm_client_enabled);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_xdm_client_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_xdm_client_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_xdm_client_enabled = (guint8)(value_ims_xdm_client_enabled);
    self->arg_ims_xdm_client_enabled_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_autoconfig_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_autoconfig_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_autoconfig_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Autoconfig Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_autoconfig_enabled)
        *value_ims_autoconfig_enabled = (gboolean)(self->arg_ims_autoconfig_enabled);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_autoconfig_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_autoconfig_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_autoconfig_enabled = (guint8)(value_ims_autoconfig_enabled);
    self->arg_ims_autoconfig_enabled_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_presence_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_presence_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_presence_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Presence Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_presence_enabled)
        *value_ims_presence_enabled = (gboolean)(self->arg_ims_presence_enabled);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_presence_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_presence_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_presence_enabled = (guint8)(value_ims_presence_enabled);
    self->arg_ims_presence_enabled_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_ussd_service_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_ussd_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_ussd_service_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS USSD Service Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_ussd_service_enabled)
        *value_ims_ussd_service_enabled = (gboolean)(self->arg_ims_ussd_service_enabled);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_ussd_service_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_ussd_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_ussd_service_enabled = (guint8)(value_ims_ussd_service_enabled);
    self->arg_ims_ussd_service_enabled_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_sms_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_sms_service_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_sms_service_enable_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS SMS Service Enable' was not found in the message");
        return FALSE;
    }

    if (value_ims_sms_service_enable)
        *value_ims_sms_service_enable = (gboolean)(self->arg_ims_sms_service_enable);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_sms_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_sms_service_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_sms_service_enable = (guint8)(value_ims_sms_service_enable);
    self->arg_ims_sms_service_enable_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_ut_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_ut_service_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_ut_service_enable_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS UT Service Enable' was not found in the message");
        return FALSE;
    }

    if (value_ims_ut_service_enable)
        *value_ims_ut_service_enable = (gboolean)(self->arg_ims_ut_service_enable);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_ut_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_ut_service_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_ut_service_enable = (guint8)(value_ims_ut_service_enable);
    self->arg_ims_ut_service_enable_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_service_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_service_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Service Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_service_enabled)
        *value_ims_service_enabled = (gboolean)(self->arg_ims_service_enabled);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_service_enabled (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_service_enabled = (guint8)(value_ims_service_enabled);
    self->arg_ims_service_enabled_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_call_mode_preference (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    QmiImsCallModePreference *value_ims_call_mode_preference,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_call_mode_preference_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Call Mode Preference' was not found in the message");
        return FALSE;
    }

    if (value_ims_call_mode_preference)
        *value_ims_call_mode_preference = (QmiImsCallModePreference)(self->arg_ims_call_mode_preference);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_call_mode_preference (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    QmiImsCallModePreference value_ims_call_mode_preference,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_call_mode_preference = (guint8)(value_ims_call_mode_preference);
    self->arg_ims_call_mode_preference_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_voice_wifi_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_voice_wifi_service_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_voice_wifi_service_enable_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Voice WiFi Service Enable' was not found in the message");
        return FALSE;
    }

    if (value_ims_voice_wifi_service_enable)
        *value_ims_voice_wifi_service_enable = (gboolean)(self->arg_ims_voice_wifi_service_enable);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_voice_wifi_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_voice_wifi_service_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_voice_wifi_service_enable = (guint8)(value_ims_voice_wifi_service_enable);
    self->arg_ims_voice_wifi_service_enable_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_video_telephony_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_video_telephony_service_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_video_telephony_service_enable_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Video Telephony Service Enable' was not found in the message");
        return FALSE;
    }

    if (value_ims_video_telephony_service_enable)
        *value_ims_video_telephony_service_enable = (gboolean)(self->arg_ims_video_telephony_service_enable);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_video_telephony_service_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_video_telephony_service_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_video_telephony_service_enable = (guint8)(value_ims_video_telephony_service_enable);
    self->arg_ims_video_telephony_service_enable_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_get_ims_voice_over_lte_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean *value_ims_voice_over_lte_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_voice_over_lte_enable_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Voice Over LTE Enable' was not found in the message");
        return FALSE;
    }

    if (value_ims_voice_over_lte_enable)
        *value_ims_voice_over_lte_enable = (gboolean)(self->arg_ims_voice_over_lte_enable);

    return TRUE;
}

gboolean
qmi_message_ims_set_ims_services_enabled_setting_input_set_ims_voice_over_lte_enable (
    QmiMessageImsSetImsServicesEnabledSettingInput *self,
    gboolean value_ims_voice_over_lte_enable,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_voice_over_lte_enable = (guint8)(value_ims_voice_over_lte_enable);
    self->arg_ims_voice_over_lte_enable_set = TRUE;

    return TRUE;
}

GType
qmi_message_ims_set_ims_services_enabled_setting_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsSetImsServicesEnabledSettingInput"),
                                          (GBoxedCopyFunc) qmi_message_ims_set_ims_services_enabled_setting_input_ref,
                                          (GBoxedFreeFunc) qmi_message_ims_set_ims_services_enabled_setting_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsSetImsServicesEnabledSettingInput *
qmi_message_ims_set_ims_services_enabled_setting_input_ref (QmiMessageImsSetImsServicesEnabledSettingInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ims_set_ims_services_enabled_setting_input_unref (QmiMessageImsSetImsServicesEnabledSettingInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsSetImsServicesEnabledSettingInput, self);
    }
}

QmiMessageImsSetImsServicesEnabledSettingInput *
qmi_message_ims_set_ims_services_enabled_setting_input_new (void)
{
    QmiMessageImsSetImsServicesEnabledSettingInput *self;

    self = g_slice_new0 (QmiMessageImsSetImsServicesEnabledSettingInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_ims_set_ims_services_enabled_setting_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageImsSetImsServicesEnabledSettingInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_IMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'IMS Carrier Config' TLV */
    if (input->arg_ims_carrier_config_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_CARRIER_CONFIG, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS Carrier Config': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_carrier_config;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS Carrier Config': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS Carrier Config': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS RCS Enabled' TLV */
    if (input->arg_ims_rcs_enabled_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_RCS_ENABLED, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS RCS Enabled': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_rcs_enabled;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS RCS Enabled': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS RCS Enabled': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS XDM Client Enabled' TLV */
    if (input->arg_ims_xdm_client_enabled_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_XDM_CLIENT_ENABLED, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS XDM Client Enabled': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_xdm_client_enabled;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS XDM Client Enabled': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS XDM Client Enabled': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS Autoconfig Enabled' TLV */
    if (input->arg_ims_autoconfig_enabled_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_AUTOCONFIG_ENABLED, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS Autoconfig Enabled': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_autoconfig_enabled;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS Autoconfig Enabled': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS Autoconfig Enabled': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS Presence Enabled' TLV */
    if (input->arg_ims_presence_enabled_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_PRESENCE_ENABLED, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS Presence Enabled': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_presence_enabled;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS Presence Enabled': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS Presence Enabled': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS USSD Service Enabled' TLV */
    if (input->arg_ims_ussd_service_enabled_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_USSD_SERVICE_ENABLED, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS USSD Service Enabled': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_ussd_service_enabled;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS USSD Service Enabled': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS USSD Service Enabled': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS SMS Service Enable' TLV */
    if (input->arg_ims_sms_service_enable_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_SMS_SERVICE_ENABLE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS SMS Service Enable': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_sms_service_enable;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS SMS Service Enable': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS SMS Service Enable': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS UT Service Enable' TLV */
    if (input->arg_ims_ut_service_enable_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_UT_SERVICE_ENABLE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS UT Service Enable': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_ut_service_enable;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS UT Service Enable': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS UT Service Enable': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS Service Enabled' TLV */
    if (input->arg_ims_service_enabled_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_SERVICE_ENABLED, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS Service Enabled': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_service_enabled;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS Service Enabled': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS Service Enabled': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS Call Mode Preference' TLV */
    if (input->arg_ims_call_mode_preference_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_CALL_MODE_PREFERENCE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS Call Mode Preference': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_call_mode_preference;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS Call Mode Preference': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS Call Mode Preference': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS Voice WiFi Service Enable' TLV */
    if (input->arg_ims_voice_wifi_service_enable_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_VOICE_WIFI_SERVICE_ENABLE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS Voice WiFi Service Enable': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_voice_wifi_service_enable;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS Voice WiFi Service Enable': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS Voice WiFi Service Enable': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS Video Telephony Service Enable' TLV */
    if (input->arg_ims_video_telephony_service_enable_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_ENABLE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS Video Telephony Service Enable': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_video_telephony_service_enable;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS Video Telephony Service Enable': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS Video Telephony Service Enable': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS Voice Over LTE Enable' TLV */
    if (input->arg_ims_voice_over_lte_enable_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_VOICE_OVER_LTE_ENABLE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS Voice Over LTE Enable': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_voice_over_lte_enable;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS Voice Over LTE Enable': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS Voice Over LTE Enable': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageImsSetImsServicesEnabledSettingOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_ims_set_ims_services_enabled_setting_output_get_result (
    QmiMessageImsSetImsServicesEnabledSettingOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_ims_set_ims_services_enabled_setting_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsSetImsServicesEnabledSettingOutput"),
                                          (GBoxedCopyFunc) qmi_message_ims_set_ims_services_enabled_setting_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ims_set_ims_services_enabled_setting_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsSetImsServicesEnabledSettingOutput *
qmi_message_ims_set_ims_services_enabled_setting_output_ref (QmiMessageImsSetImsServicesEnabledSettingOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ims_set_ims_services_enabled_setting_output_unref (QmiMessageImsSetImsServicesEnabledSettingOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsSetImsServicesEnabledSettingOutput, self);
    }
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_carrier_config_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_CARRIER_CONFIG, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_rcs_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_RCS_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_xdm_client_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_XDM_CLIENT_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_autoconfig_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_AUTOCONFIG_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_presence_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_PRESENCE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_ussd_service_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_USSD_SERVICE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_sms_service_enable_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_SMS_SERVICE_ENABLE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_ut_service_enable_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_UT_SERVICE_ENABLE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_service_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_SERVICE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_call_mode_preference_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_CALL_MODE_PREFERENCE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMS_CALL_MODE_PREFERENCE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ims_call_mode_preference_get_string ((QmiImsCallModePreference)tmp));
#elif defined  __QMI_IMS_CALL_MODE_PREFERENCE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ims_call_mode_preference_build_string_from_mask ((QmiImsCallModePreference)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsCallModePreference
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_voice_wifi_service_enable_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_VOICE_WIFI_SERVICE_ENABLE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_video_telephony_service_enable_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_ENABLE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_set_ims_services_enabled_setting_input_ims_voice_over_lte_enable_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_VOICE_OVER_LTE_ENABLE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gboolean
qmi_message_result_validate (
    const guint8 *buffer,
    guint16 buffer_len)
{
    static const guint expected_len = 4;

    if (buffer_len < expected_len) {
        g_warning ("Cannot read the 'Result' TLV: expected '%u' bytes, but only got '%u' bytes",
                   expected_len, buffer_len);
        return FALSE;
    }

    return TRUE;
}

static gchar *
qmi_message_result_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    guint16 error_status;
    guint16 error_code;

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
        return NULL;
    if (!qmi_message_tlv_read_guint16 (self, init_offset, &offset, QMI_ENDIAN_LITTLE, &error_status, NULL))
        return NULL;
    if (!qmi_message_tlv_read_guint16 (self, init_offset, &offset, QMI_ENDIAN_LITTLE, &error_code, NULL))
        return NULL;
    g_warn_if_fail (qmi_message_tlv_read_remaining_size (self, init_offset, offset) == 0);

    if (error_status == QMI_STATUS_SUCCESS)
        return g_strdup ("SUCCESS");

    return g_strdup_printf ("FAILURE: %s", qmi_protocol_error_get_string ((QmiProtocolError) error_code));
}

struct message_set_ims_services_enabled_setting_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_ims_services_enabled_setting_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_ims_services_enabled_setting_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_CARRIER_CONFIG:
            tlv_type_str = "IMS Carrier Config";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_carrier_config_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_RCS_ENABLED:
            tlv_type_str = "IMS RCS Enabled";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_rcs_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_XDM_CLIENT_ENABLED:
            tlv_type_str = "IMS XDM Client Enabled";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_xdm_client_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_AUTOCONFIG_ENABLED:
            tlv_type_str = "IMS Autoconfig Enabled";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_autoconfig_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_PRESENCE_ENABLED:
            tlv_type_str = "IMS Presence Enabled";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_presence_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_USSD_SERVICE_ENABLED:
            tlv_type_str = "IMS USSD Service Enabled";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_ussd_service_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_SMS_SERVICE_ENABLE:
            tlv_type_str = "IMS SMS Service Enable";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_sms_service_enable_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_UT_SERVICE_ENABLE:
            tlv_type_str = "IMS UT Service Enable";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_ut_service_enable_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_SERVICE_ENABLED:
            tlv_type_str = "IMS Service Enabled";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_service_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_CALL_MODE_PREFERENCE:
            tlv_type_str = "IMS Call Mode Preference";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_call_mode_preference_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_VOICE_WIFI_SERVICE_ENABLE:
            tlv_type_str = "IMS Voice WiFi Service Enable";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_voice_wifi_service_enable_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_ENABLE:
            tlv_type_str = "IMS Video Telephony Service Enable";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_video_telephony_service_enable_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_INPUT_TLV_IMS_VOICE_OVER_LTE_ENABLE:
            tlv_type_str = "IMS Voice Over LTE Enable";
            translated_value = qmi_message_ims_set_ims_services_enabled_setting_input_ims_voice_over_lte_enable_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_set_ims_services_enabled_setting_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set IMS Services Enabled Setting\" (0x008f)\n",
                            line_prefix);

    {
        struct message_set_ims_services_enabled_setting_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_ims_services_enabled_setting_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageImsSetImsServicesEnabledSettingOutput *
qmi_message_ims_set_ims_services_enabled_setting_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageImsSetImsServicesEnabledSettingOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING);

    self = g_slice_new0 (QmiMessageImsSetImsServicesEnabledSettingOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ims_set_ims_services_enabled_setting_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_ims_set_ims_services_enabled_setting_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMS Get IMS Services Enabled Setting */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_ims_get_ims_services_enabled_setting_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_IMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageImsGetImsServicesEnabledSettingOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* IMS Voice Service Enabled */
    gboolean arg_ims_voice_service_enabled_set;
    guint8 arg_ims_voice_service_enabled;

    /* IMS Video Telephony Service Enabled */
    gboolean arg_ims_video_telephony_service_enabled_set;
    guint8 arg_ims_video_telephony_service_enabled;

    /* IMS Voice WiFi Service Enabled */
    gboolean arg_ims_voice_wifi_service_enabled_set;
    guint8 arg_ims_voice_wifi_service_enabled;

    /* IMS Registration Service Enabled */
    gboolean arg_ims_registration_service_enabled_set;
    guint8 arg_ims_registration_service_enabled;

    /* IMS UT Service Enabled */
    gboolean arg_ims_ut_service_enabled_set;
    guint8 arg_ims_ut_service_enabled;

    /* IMS SMS Service Enabled */
    gboolean arg_ims_sms_service_enabled_set;
    guint8 arg_ims_sms_service_enabled;

    /* IMS USSD Service Enabled */
    gboolean arg_ims_ussd_service_enabled_set;
    guint8 arg_ims_ussd_service_enabled;
};

#define QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_SERVICE_ENABLED 0x11
#define QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_ENABLED 0x12
#define QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_WIFI_SERVICE_ENABLED 0x15
#define QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_REGISTRATION_SERVICE_ENABLED 0x18
#define QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_UT_SERVICE_ENABLED 0x19
#define QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_SMS_SERVICE_ENABLED 0x1A
#define QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_USSD_SERVICE_ENABLED 0x1C

gboolean
qmi_message_ims_get_ims_services_enabled_setting_output_get_result (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

gboolean
qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_voice_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_voice_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_voice_service_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Voice Service Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_voice_service_enabled)
        *value_ims_voice_service_enabled = (gboolean)(self->arg_ims_voice_service_enabled);

    return TRUE;
}

gboolean
qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_video_telephony_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_video_telephony_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_video_telephony_service_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Video Telephony Service Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_video_telephony_service_enabled)
        *value_ims_video_telephony_service_enabled = (gboolean)(self->arg_ims_video_telephony_service_enabled);

    return TRUE;
}

gboolean
qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_voice_wifi_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_voice_wifi_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_voice_wifi_service_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Voice WiFi Service Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_voice_wifi_service_enabled)
        *value_ims_voice_wifi_service_enabled = (gboolean)(self->arg_ims_voice_wifi_service_enabled);

    return TRUE;
}

gboolean
qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_registration_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_registration_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_registration_service_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Registration Service Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_registration_service_enabled)
        *value_ims_registration_service_enabled = (gboolean)(self->arg_ims_registration_service_enabled);

    return TRUE;
}

gboolean
qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_ut_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_ut_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_ut_service_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS UT Service Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_ut_service_enabled)
        *value_ims_ut_service_enabled = (gboolean)(self->arg_ims_ut_service_enabled);

    return TRUE;
}

gboolean
qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_sms_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_sms_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_sms_service_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS SMS Service Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_sms_service_enabled)
        *value_ims_sms_service_enabled = (gboolean)(self->arg_ims_sms_service_enabled);

    return TRUE;
}

gboolean
qmi_message_ims_get_ims_services_enabled_setting_output_get_ims_ussd_service_enabled (
    QmiMessageImsGetImsServicesEnabledSettingOutput *self,
    gboolean *value_ims_ussd_service_enabled,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_ussd_service_enabled_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS USSD Service Enabled' was not found in the message");
        return FALSE;
    }

    if (value_ims_ussd_service_enabled)
        *value_ims_ussd_service_enabled = (gboolean)(self->arg_ims_ussd_service_enabled);

    return TRUE;
}

GType
qmi_message_ims_get_ims_services_enabled_setting_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsGetImsServicesEnabledSettingOutput"),
                                          (GBoxedCopyFunc) qmi_message_ims_get_ims_services_enabled_setting_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ims_get_ims_services_enabled_setting_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsGetImsServicesEnabledSettingOutput *
qmi_message_ims_get_ims_services_enabled_setting_output_ref (QmiMessageImsGetImsServicesEnabledSettingOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ims_get_ims_services_enabled_setting_output_unref (QmiMessageImsGetImsServicesEnabledSettingOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsGetImsServicesEnabledSettingOutput, self);
    }
}

static gchar *
qmi_message_ims_get_ims_services_enabled_setting_output_ims_voice_service_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_SERVICE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_get_ims_services_enabled_setting_output_ims_video_telephony_service_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_get_ims_services_enabled_setting_output_ims_voice_wifi_service_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_WIFI_SERVICE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_get_ims_services_enabled_setting_output_ims_registration_service_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_REGISTRATION_SERVICE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_get_ims_services_enabled_setting_output_ims_ut_service_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_UT_SERVICE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_get_ims_services_enabled_setting_output_ims_sms_service_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_SMS_SERVICE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_ims_get_ims_services_enabled_setting_output_ims_ussd_service_enabled_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_USSD_SERVICE_ENABLED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_get_ims_services_enabled_setting_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_ims_services_enabled_setting_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_ims_services_enabled_setting_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_SERVICE_ENABLED:
            tlv_type_str = "IMS Voice Service Enabled";
            translated_value = qmi_message_ims_get_ims_services_enabled_setting_output_ims_voice_service_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_ENABLED:
            tlv_type_str = "IMS Video Telephony Service Enabled";
            translated_value = qmi_message_ims_get_ims_services_enabled_setting_output_ims_video_telephony_service_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_WIFI_SERVICE_ENABLED:
            tlv_type_str = "IMS Voice WiFi Service Enabled";
            translated_value = qmi_message_ims_get_ims_services_enabled_setting_output_ims_voice_wifi_service_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_REGISTRATION_SERVICE_ENABLED:
            tlv_type_str = "IMS Registration Service Enabled";
            translated_value = qmi_message_ims_get_ims_services_enabled_setting_output_ims_registration_service_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_UT_SERVICE_ENABLED:
            tlv_type_str = "IMS UT Service Enabled";
            translated_value = qmi_message_ims_get_ims_services_enabled_setting_output_ims_ut_service_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_SMS_SERVICE_ENABLED:
            tlv_type_str = "IMS SMS Service Enabled";
            translated_value = qmi_message_ims_get_ims_services_enabled_setting_output_ims_sms_service_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_USSD_SERVICE_ENABLED:
            tlv_type_str = "IMS USSD Service Enabled";
            translated_value = qmi_message_ims_get_ims_services_enabled_setting_output_ims_ussd_service_enabled_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_get_ims_services_enabled_setting_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get IMS Services Enabled Setting\" (0x0090)\n",
                            line_prefix);

    {
        struct message_get_ims_services_enabled_setting_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_ims_services_enabled_setting_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageImsGetImsServicesEnabledSettingOutput *
qmi_message_ims_get_ims_services_enabled_setting_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageImsGetImsServicesEnabledSettingOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING);

    self = g_slice_new0 (QmiMessageImsGetImsServicesEnabledSettingOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ims_get_ims_services_enabled_setting_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_ims_get_ims_services_enabled_setting_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status == QMI_STATUS_SUCCESS))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_SERVICE_ENABLED, NULL, NULL)) == 0) {
                goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_voice_service_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_voice_service_enabled_out;
                self->arg_ims_voice_service_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Voice Service Enabled' TLV", offset);
            }

            self->arg_ims_voice_service_enabled_set = TRUE;

qmi_message_ims_get_ims_services_enabled_setting_output_ims_voice_service_enabled_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status == QMI_STATUS_SUCCESS))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_ENABLED, NULL, NULL)) == 0) {
                goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_video_telephony_service_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_video_telephony_service_enabled_out;
                self->arg_ims_video_telephony_service_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Video Telephony Service Enabled' TLV", offset);
            }

            self->arg_ims_video_telephony_service_enabled_set = TRUE;

qmi_message_ims_get_ims_services_enabled_setting_output_ims_video_telephony_service_enabled_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status == QMI_STATUS_SUCCESS))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_VOICE_WIFI_SERVICE_ENABLED, NULL, NULL)) == 0) {
                goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_voice_wifi_service_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_voice_wifi_service_enabled_out;
                self->arg_ims_voice_wifi_service_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Voice WiFi Service Enabled' TLV", offset);
            }

            self->arg_ims_voice_wifi_service_enabled_set = TRUE;

qmi_message_ims_get_ims_services_enabled_setting_output_ims_voice_wifi_service_enabled_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status == QMI_STATUS_SUCCESS))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_REGISTRATION_SERVICE_ENABLED, NULL, NULL)) == 0) {
                goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_registration_service_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_registration_service_enabled_out;
                self->arg_ims_registration_service_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Registration Service Enabled' TLV", offset);
            }

            self->arg_ims_registration_service_enabled_set = TRUE;

qmi_message_ims_get_ims_services_enabled_setting_output_ims_registration_service_enabled_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status == QMI_STATUS_SUCCESS))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_UT_SERVICE_ENABLED, NULL, NULL)) == 0) {
                goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_ut_service_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_ut_service_enabled_out;
                self->arg_ims_ut_service_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS UT Service Enabled' TLV", offset);
            }

            self->arg_ims_ut_service_enabled_set = TRUE;

qmi_message_ims_get_ims_services_enabled_setting_output_ims_ut_service_enabled_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status == QMI_STATUS_SUCCESS))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_SMS_SERVICE_ENABLED, NULL, NULL)) == 0) {
                goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_sms_service_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_sms_service_enabled_out;
                self->arg_ims_sms_service_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS SMS Service Enabled' TLV", offset);
            }

            self->arg_ims_sms_service_enabled_set = TRUE;

qmi_message_ims_get_ims_services_enabled_setting_output_ims_sms_service_enabled_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status == QMI_STATUS_SUCCESS))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING_OUTPUT_TLV_IMS_USSD_SERVICE_ENABLED, NULL, NULL)) == 0) {
                goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_ussd_service_enabled_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_ims_get_ims_services_enabled_setting_output_ims_ussd_service_enabled_out;
                self->arg_ims_ussd_service_enabled = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS USSD Service Enabled' TLV", offset);
            }

            self->arg_ims_ussd_service_enabled_set = TRUE;

qmi_message_ims_get_ims_services_enabled_setting_output_ims_ussd_service_enabled_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMS Bind */


/* --- Input -- */

struct _QmiMessageImsBindInput {
    volatile gint ref_count;

    /* Binding */
    gboolean arg_binding_set;
    guint32 arg_binding;
};

#define QMI_MESSAGE_IMS_BIND_INPUT_TLV_BINDING 0x1

gboolean
qmi_message_ims_bind_input_get_binding (
    QmiMessageImsBindInput *self,
    guint32 *value_binding,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_binding_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Binding' was not found in the message");
        return FALSE;
    }

    if (value_binding)
        *value_binding = self->arg_binding;

    return TRUE;
}

gboolean
qmi_message_ims_bind_input_set_binding (
    QmiMessageImsBindInput *self,
    guint32 value_binding,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_binding = value_binding;
    self->arg_binding_set = TRUE;

    return TRUE;
}

GType
qmi_message_ims_bind_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsBindInput"),
                                          (GBoxedCopyFunc) qmi_message_ims_bind_input_ref,
                                          (GBoxedFreeFunc) qmi_message_ims_bind_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsBindInput *
qmi_message_ims_bind_input_ref (QmiMessageImsBindInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ims_bind_input_unref (QmiMessageImsBindInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsBindInput, self);
    }
}

QmiMessageImsBindInput *
qmi_message_ims_bind_input_new (void)
{
    QmiMessageImsBindInput *self;

    self = g_slice_new0 (QmiMessageImsBindInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_ims_bind_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageImsBindInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_IMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_IMS_BIND);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Bind' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Binding' TLV */
    if (input->arg_binding_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMS_BIND_INPUT_TLV_BINDING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Binding': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_binding, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Binding': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Binding': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Binding' in message 'Bind'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageImsBindOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_IMS_BIND_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_ims_bind_output_get_result (
    QmiMessageImsBindOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_ims_bind_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsBindOutput"),
                                          (GBoxedCopyFunc) qmi_message_ims_bind_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ims_bind_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsBindOutput *
qmi_message_ims_bind_output_ref (QmiMessageImsBindOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ims_bind_output_unref (QmiMessageImsBindOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsBindOutput, self);
    }
}

static gchar *
qmi_message_ims_bind_input_binding_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_BIND_INPUT_TLV_BINDING, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_bind_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_bind_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_bind_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_IMS_BIND_INPUT_TLV_BINDING:
            tlv_type_str = "Binding";
            translated_value = qmi_message_ims_bind_input_binding_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_IMS_BIND_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_bind_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Bind\" (0x0098)\n",
                            line_prefix);

    {
        struct message_bind_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_bind_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageImsBindOutput *
qmi_message_ims_bind_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageImsBindOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_IMS_BIND);

    self = g_slice_new0 (QmiMessageImsBindOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMS_BIND_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ims_bind_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_ims_bind_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: IMS */


gchar *
__qmi_message_ims_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING:
            return indication_ims_services_enabled_setting_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_IMS_SET_IMS_SERVICES_ENABLED_SETTING:
                return message_set_ims_services_enabled_setting_get_printable (self, line_prefix);
            case QMI_MESSAGE_IMS_GET_IMS_SERVICES_ENABLED_SETTING:
                return message_get_ims_services_enabled_setting_get_printable (self, line_prefix);
            case QMI_MESSAGE_IMS_BIND:
                return message_bind_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client IMS */

G_DEFINE_TYPE (QmiClientIms, qmi_client_ims, QMI_TYPE_CLIENT)

enum {
    SIGNAL_IMS_SERVICES_ENABLED_SETTING,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING: {
            QmiIndicationImsImsServicesEnabledSettingOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_ims_ims_services_enabled_setting_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'IMS Services Enabled Setting' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_IMS_SERVICES_ENABLED_SETTING], 0, output);
                qmi_indication_ims_ims_services_enabled_setting_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_ims_init (QmiClientIms *self)
{
}

static void
qmi_client_ims_class_init (QmiClientImsClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientIms::ims-services-enabled-setting:
     * @object: A #QmiClientIms.
     * @output: A #QmiIndicationImsImsServicesEnabledSettingOutput.
     *
     * The ::ims-services-enabled-setting signal gets emitted when a '<link linkend="libqmi-glib-IMS-IMS-Services-Enabled-Setting-indication.top_of_page">IMS Services Enabled Setting</link>' indication is received.
     *
     * Since: 1.38
     */
    signals[SIGNAL_IMS_SERVICES_ENABLED_SETTING] =
        g_signal_new ("ims-services-enabled-setting",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_IMS_IMS_SERVICES_ENABLED_SETTING_OUTPUT);
}


QmiMessageImsSetImsServicesEnabledSettingOutput *
qmi_client_ims_set_ims_services_enabled_setting_finish (
    QmiClientIms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_ims_services_enabled_setting_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageImsSetImsServicesEnabledSettingOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ims_set_ims_services_enabled_setting_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ims_set_ims_services_enabled_setting_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ims_set_ims_services_enabled_setting (
    QmiClientIms *self,
    QmiMessageImsSetImsServicesEnabledSettingInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_ims_set_ims_services_enabled_setting_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)set_ims_services_enabled_setting_ready,
                             task);
}


QmiMessageImsGetImsServicesEnabledSettingOutput *
qmi_client_ims_get_ims_services_enabled_setting_finish (
    QmiClientIms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_ims_services_enabled_setting_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageImsGetImsServicesEnabledSettingOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ims_get_ims_services_enabled_setting_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ims_get_ims_services_enabled_setting_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ims_get_ims_services_enabled_setting (
    QmiClientIms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_ims_get_ims_services_enabled_setting_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  NULL,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)get_ims_services_enabled_setting_ready,
                             task);
}


QmiMessageImsBindOutput *
qmi_client_ims_bind_finish (
    QmiClientIms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
bind_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageImsBindOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ims_bind_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ims_bind_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ims_bind (
    QmiClientIms *self,
    QmiMessageImsBindInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_ims_bind_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)bind_ready,
                             task);
}

