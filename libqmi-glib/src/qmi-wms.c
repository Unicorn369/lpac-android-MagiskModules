
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

#include "qmi-wms.h"
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
    QMI_MESSAGE_WMS_RESET = 0x0000,
    QMI_MESSAGE_WMS_SET_EVENT_REPORT = 0x0001,
    QMI_MESSAGE_WMS_GET_SUPPORTED_MESSAGES = 0x001E,
    QMI_MESSAGE_WMS_RAW_SEND = 0x0020,
    QMI_MESSAGE_WMS_RAW_WRITE = 0x0021,
    QMI_MESSAGE_WMS_RAW_READ = 0x0022,
    QMI_MESSAGE_WMS_MODIFY_TAG = 0x0023,
    QMI_MESSAGE_WMS_DELETE = 0x0024,
    QMI_MESSAGE_WMS_GET_MESSAGE_PROTOCOL = 0x0030,
    QMI_MESSAGE_WMS_LIST_MESSAGES = 0x0031,
    QMI_MESSAGE_WMS_SET_ROUTES = 0x0032,
    QMI_MESSAGE_WMS_GET_ROUTES = 0x0033,
    QMI_MESSAGE_WMS_SEND_ACK = 0x0037,
    QMI_MESSAGE_WMS_SET_BROADCAST_ACTIVATION = 0x003c,
    QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG = 0x003d,
    QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG = 0x003e,
    QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE = 0x0042,
    QMI_MESSAGE_WMS_INDICATION_REGISTER = 0x0047,
    QMI_MESSAGE_WMS_GET_TRANSPORT_NETWORK_REGISTRATION_STATUS = 0x004a,
} QmiMessageWms;


typedef enum {
    QMI_INDICATION_WMS_EVENT_REPORT = 0x0001,
    QMI_INDICATION_WMS_SMSC_ADDRESS = 0x0046,
    QMI_INDICATION_WMS_TRANSPORT_NETWORK_REGISTRATION_STATUS = 0x004B,
} QmiIndicationWms;


/*****************************************************************************/
/* INDICATION: Qmi Indication WMS Event Report */


/* --- Output -- */

struct _QmiIndicationWmsEventReportOutput {
    volatile gint ref_count;

    /* SMS on IMS */
    gboolean arg_sms_on_ims_set;
    guint8 arg_sms_on_ims;

    /* SMSC Address */
    gboolean arg_smsc_address_set;
    gchar *arg_smsc_address;

    /* ETWS PLMN Information */
    gboolean arg_etws_plmn_information_set;
    guint16 arg_etws_plmn_information_mcc;
    guint16 arg_etws_plmn_information_mnc;

    /* ETWS Message */
    gboolean arg_etws_message_set;
    guint8 arg_etws_message_notification_type;
    GArray *arg_etws_message_raw_data;

    /* Message Mode */
    gboolean arg_message_mode_set;
    guint8 arg_message_mode;

    /* Transfer Route MT Message */
    gboolean arg_transfer_route_mt_message_set;
    guint8 arg_transfer_route_mt_message_ack_indicator;
    guint32 arg_transfer_route_mt_message_transaction_id;
    guint8 arg_transfer_route_mt_message_format;
    GArray *arg_transfer_route_mt_message_raw_data;

    /* MT Message */
    gboolean arg_mt_message_set;
    guint8 arg_mt_message_storage_type;
    guint32 arg_mt_message_memory_index;
};

#define QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_SMS_ON_IMS 0x16
#define QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_SMSC_ADDRESS 0x15
#define QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_ETWS_PLMN_INFORMATION 0x14
#define QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_ETWS_MESSAGE 0x13
#define QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_MESSAGE_MODE 0x12
#define QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_TRANSFER_ROUTE_MT_MESSAGE 0x11
#define QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_MT_MESSAGE 0x10

gboolean
qmi_indication_wms_event_report_output_get_sms_on_ims (
    QmiIndicationWmsEventReportOutput *self,
    gboolean *value_sms_on_ims,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_sms_on_ims_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'SMS on IMS' was not found in the message");
        return FALSE;
    }

    if (value_sms_on_ims)
        *value_sms_on_ims = (gboolean)(self->arg_sms_on_ims);

    return TRUE;
}

gboolean
qmi_indication_wms_event_report_output_get_smsc_address (
    QmiIndicationWmsEventReportOutput *self,
    const gchar **value_smsc_address,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_smsc_address_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'SMSC Address' was not found in the message");
        return FALSE;
    }

    if (value_smsc_address)
        *value_smsc_address = self->arg_smsc_address;

    return TRUE;
}

gboolean
qmi_indication_wms_event_report_output_get_etws_plmn_information (
    QmiIndicationWmsEventReportOutput *self,
    guint16 *value_etws_plmn_information_mcc,
    guint16 *value_etws_plmn_information_mnc,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_etws_plmn_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'ETWS PLMN Information' was not found in the message");
        return FALSE;
    }

    if (value_etws_plmn_information_mcc)
        *value_etws_plmn_information_mcc = self->arg_etws_plmn_information_mcc;
    if (value_etws_plmn_information_mnc)
        *value_etws_plmn_information_mnc = self->arg_etws_plmn_information_mnc;

    return TRUE;
}

gboolean
qmi_indication_wms_event_report_output_get_etws_message (
    QmiIndicationWmsEventReportOutput *self,
    QmiWmsNotificationType *value_etws_message_notification_type,
    GArray **value_etws_message_raw_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_etws_message_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'ETWS Message' was not found in the message");
        return FALSE;
    }

    if (value_etws_message_notification_type)
        *value_etws_message_notification_type = (QmiWmsNotificationType)(self->arg_etws_message_notification_type);
    if (value_etws_message_raw_data)
        *value_etws_message_raw_data = self->arg_etws_message_raw_data;

    return TRUE;
}

gboolean
qmi_indication_wms_event_report_output_get_message_mode (
    QmiIndicationWmsEventReportOutput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Mode' was not found in the message");
        return FALSE;
    }

    if (value_message_mode)
        *value_message_mode = (QmiWmsMessageMode)(self->arg_message_mode);

    return TRUE;
}

gboolean
qmi_indication_wms_event_report_output_get_transfer_route_mt_message (
    QmiIndicationWmsEventReportOutput *self,
    QmiWmsAckIndicator *value_transfer_route_mt_message_ack_indicator,
    guint32 *value_transfer_route_mt_message_transaction_id,
    QmiWmsMessageFormat *value_transfer_route_mt_message_format,
    GArray **value_transfer_route_mt_message_raw_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_transfer_route_mt_message_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Transfer Route MT Message' was not found in the message");
        return FALSE;
    }

    if (value_transfer_route_mt_message_ack_indicator)
        *value_transfer_route_mt_message_ack_indicator = (QmiWmsAckIndicator)(self->arg_transfer_route_mt_message_ack_indicator);
    if (value_transfer_route_mt_message_transaction_id)
        *value_transfer_route_mt_message_transaction_id = self->arg_transfer_route_mt_message_transaction_id;
    if (value_transfer_route_mt_message_format)
        *value_transfer_route_mt_message_format = (QmiWmsMessageFormat)(self->arg_transfer_route_mt_message_format);
    if (value_transfer_route_mt_message_raw_data)
        *value_transfer_route_mt_message_raw_data = self->arg_transfer_route_mt_message_raw_data;

    return TRUE;
}

gboolean
qmi_indication_wms_event_report_output_get_mt_message (
    QmiIndicationWmsEventReportOutput *self,
    QmiWmsStorageType *value_mt_message_storage_type,
    guint32 *value_mt_message_memory_index,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_mt_message_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'MT Message' was not found in the message");
        return FALSE;
    }

    if (value_mt_message_storage_type)
        *value_mt_message_storage_type = (QmiWmsStorageType)(self->arg_mt_message_storage_type);
    if (value_mt_message_memory_index)
        *value_mt_message_memory_index = self->arg_mt_message_memory_index;

    return TRUE;
}

GType
qmi_indication_wms_event_report_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationWmsEventReportOutput"),
                                          (GBoxedCopyFunc) qmi_indication_wms_event_report_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_wms_event_report_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationWmsEventReportOutput *
qmi_indication_wms_event_report_output_ref (QmiIndicationWmsEventReportOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_wms_event_report_output_unref (QmiIndicationWmsEventReportOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_smsc_address, (GDestroyNotify)g_free);
        g_clear_pointer (&self->arg_etws_message_raw_data, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_transfer_route_mt_message_raw_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiIndicationWmsEventReportOutput, self);
    }
}

static gchar *
qmi_indication_wms_event_report_output_sms_on_ims_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_SMS_ON_IMS, NULL, NULL)) == 0)
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
qmi_indication_wms_event_report_output_smsc_address_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_SMSC_ADDRESS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        g_autofree gchar *tmp = NULL;

        if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 0, &tmp, &error))
            goto out;
        {
            g_string_append (printable, tmp);
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
qmi_indication_wms_event_report_output_etws_plmn_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_ETWS_PLMN_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " mcc = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " mnc = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_indication_wms_event_report_output_etws_message_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_ETWS_MESSAGE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " notification_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_NOTIFICATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_notification_type_get_string ((QmiWmsNotificationType)tmp));
#elif defined  __QMI_WMS_NOTIFICATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_notification_type_build_string_from_mask ((QmiWmsNotificationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsNotificationType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " raw_data = '");
    {
        guint raw_data_i;
        guint16 raw_data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(raw_data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (raw_data_i = 0; raw_data_i < raw_data_n_items; raw_data_i++) {
            g_string_append_printf (printable, " [%u] = '", raw_data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_indication_wms_event_report_output_message_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_MESSAGE_MODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_mode_get_string ((QmiWmsMessageMode)tmp));
#elif defined  __QMI_WMS_MESSAGE_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_mode_build_string_from_mask ((QmiWmsMessageMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageMode
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
qmi_indication_wms_event_report_output_transfer_route_mt_message_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_TRANSFER_ROUTE_MT_MESSAGE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " ack_indicator = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_ACK_INDICATOR_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_ack_indicator_get_string ((QmiWmsAckIndicator)tmp));
#elif defined  __QMI_WMS_ACK_INDICATOR_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_ack_indicator_build_string_from_mask ((QmiWmsAckIndicator)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsAckIndicator
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " transaction_id = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " format = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_FORMAT_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_format_get_string ((QmiWmsMessageFormat)tmp));
#elif defined  __QMI_WMS_MESSAGE_FORMAT_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_format_build_string_from_mask ((QmiWmsMessageFormat)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageFormat
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " raw_data = '");
    {
        guint raw_data_i;
        guint16 raw_data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(raw_data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (raw_data_i = 0; raw_data_i < raw_data_n_items; raw_data_i++) {
            g_string_append_printf (printable, " [%u] = '", raw_data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_indication_wms_event_report_output_mt_message_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_MT_MESSAGE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " storage_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_STORAGE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_storage_type_get_string ((QmiWmsStorageType)tmp));
#elif defined  __QMI_WMS_STORAGE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_storage_type_build_string_from_mask ((QmiWmsStorageType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsStorageType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " memory_index = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_event_report_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_event_report_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_event_report_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_SMS_ON_IMS:
            tlv_type_str = "SMS on IMS";
            translated_value = qmi_indication_wms_event_report_output_sms_on_ims_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_SMSC_ADDRESS:
            tlv_type_str = "SMSC Address";
            translated_value = qmi_indication_wms_event_report_output_smsc_address_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_ETWS_PLMN_INFORMATION:
            tlv_type_str = "ETWS PLMN Information";
            translated_value = qmi_indication_wms_event_report_output_etws_plmn_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_ETWS_MESSAGE:
            tlv_type_str = "ETWS Message";
            translated_value = qmi_indication_wms_event_report_output_etws_message_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_MESSAGE_MODE:
            tlv_type_str = "Message Mode";
            translated_value = qmi_indication_wms_event_report_output_message_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_TRANSFER_ROUTE_MT_MESSAGE:
            tlv_type_str = "Transfer Route MT Message";
            translated_value = qmi_indication_wms_event_report_output_transfer_route_mt_message_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_MT_MESSAGE:
            tlv_type_str = "MT Message";
            translated_value = qmi_indication_wms_event_report_output_mt_message_get_printable (
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
indication_event_report_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Event Report\" (0x0001)\n",
                            line_prefix);

    {
        struct indication_event_report_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_event_report_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationWmsEventReportOutput *
qmi_indication_wms_event_report_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationWmsEventReportOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_WMS_EVENT_REPORT);

    self = g_slice_new0 (QmiIndicationWmsEventReportOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_SMS_ON_IMS, NULL, NULL)) == 0) {
                goto qmi_indication_wms_event_report_output_sms_on_ims_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_wms_event_report_output_sms_on_ims_out;
                self->arg_sms_on_ims = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'SMS on IMS' TLV", offset);
            }

            self->arg_sms_on_ims_set = TRUE;

qmi_indication_wms_event_report_output_sms_on_ims_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_SMSC_ADDRESS, NULL, NULL)) == 0) {
                goto qmi_indication_wms_event_report_output_smsc_address_out;
            }
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 0, &(self->arg_smsc_address), NULL))
                goto qmi_indication_wms_event_report_output_smsc_address_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'SMSC Address' TLV", offset);
            }

            self->arg_smsc_address_set = TRUE;

qmi_indication_wms_event_report_output_smsc_address_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_ETWS_PLMN_INFORMATION, NULL, NULL)) == 0) {
                goto qmi_indication_wms_event_report_output_etws_plmn_information_out;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_etws_plmn_information_mcc), NULL))
                goto qmi_indication_wms_event_report_output_etws_plmn_information_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_etws_plmn_information_mnc), NULL))
                goto qmi_indication_wms_event_report_output_etws_plmn_information_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'ETWS PLMN Information' TLV", offset);
            }

            self->arg_etws_plmn_information_set = TRUE;

qmi_indication_wms_event_report_output_etws_plmn_information_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_ETWS_MESSAGE, NULL, NULL)) == 0) {
                goto qmi_indication_wms_event_report_output_etws_message_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_wms_event_report_output_etws_message_out;
                self->arg_etws_message_notification_type = (QmiWmsNotificationType)tmp;
            }
            {
                guint raw_data_i;
                guint16 raw_data_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(raw_data_n_items), NULL))
                    goto qmi_indication_wms_event_report_output_etws_message_out;

                self->arg_etws_message_raw_data = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)raw_data_n_items);

                for (raw_data_i = 0; raw_data_i < raw_data_n_items; raw_data_i++) {
                    guint8 raw_data_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(raw_data_aux), NULL))
                        goto qmi_indication_wms_event_report_output_etws_message_out;
                    g_array_insert_val (self->arg_etws_message_raw_data, raw_data_i, raw_data_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'ETWS Message' TLV", offset);
            }

            self->arg_etws_message_set = TRUE;

qmi_indication_wms_event_report_output_etws_message_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_MESSAGE_MODE, NULL, NULL)) == 0) {
                goto qmi_indication_wms_event_report_output_message_mode_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_wms_event_report_output_message_mode_out;
                self->arg_message_mode = (QmiWmsMessageMode)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Message Mode' TLV", offset);
            }

            self->arg_message_mode_set = TRUE;

qmi_indication_wms_event_report_output_message_mode_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_TRANSFER_ROUTE_MT_MESSAGE, NULL, NULL)) == 0) {
                goto qmi_indication_wms_event_report_output_transfer_route_mt_message_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_wms_event_report_output_transfer_route_mt_message_out;
                self->arg_transfer_route_mt_message_ack_indicator = (QmiWmsAckIndicator)tmp;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_transfer_route_mt_message_transaction_id), NULL))
                goto qmi_indication_wms_event_report_output_transfer_route_mt_message_out;
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_wms_event_report_output_transfer_route_mt_message_out;
                self->arg_transfer_route_mt_message_format = (QmiWmsMessageFormat)tmp;
            }
            {
                guint raw_data_i;
                guint16 raw_data_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(raw_data_n_items), NULL))
                    goto qmi_indication_wms_event_report_output_transfer_route_mt_message_out;

                self->arg_transfer_route_mt_message_raw_data = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)raw_data_n_items);

                for (raw_data_i = 0; raw_data_i < raw_data_n_items; raw_data_i++) {
                    guint8 raw_data_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(raw_data_aux), NULL))
                        goto qmi_indication_wms_event_report_output_transfer_route_mt_message_out;
                    g_array_insert_val (self->arg_transfer_route_mt_message_raw_data, raw_data_i, raw_data_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Transfer Route MT Message' TLV", offset);
            }

            self->arg_transfer_route_mt_message_set = TRUE;

qmi_indication_wms_event_report_output_transfer_route_mt_message_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_EVENT_REPORT_OUTPUT_TLV_MT_MESSAGE, NULL, NULL)) == 0) {
                goto qmi_indication_wms_event_report_output_mt_message_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_wms_event_report_output_mt_message_out;
                self->arg_mt_message_storage_type = (QmiWmsStorageType)tmp;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_mt_message_memory_index), NULL))
                goto qmi_indication_wms_event_report_output_mt_message_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'MT Message' TLV", offset);
            }

            self->arg_mt_message_set = TRUE;

qmi_indication_wms_event_report_output_mt_message_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication WMS SMSC Address */


/* --- Output -- */

struct _QmiIndicationWmsSmscAddressOutput {
    volatile gint ref_count;

    /* Address */
    gboolean arg_address_set;
    gchar arg_address_type[4];
    gchar *arg_address_digits;
};

#define QMI_INDICATION_WMS_SMSC_ADDRESS_OUTPUT_TLV_ADDRESS 0x01

gboolean
qmi_indication_wms_smsc_address_output_get_address (
    QmiIndicationWmsSmscAddressOutput *self,
    const gchar **value_address_type,
    const gchar **value_address_digits,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_address_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Address' was not found in the message");
        return FALSE;
    }

    if (value_address_type)
        *value_address_type = self->arg_address_type;
    if (value_address_digits)
        *value_address_digits = self->arg_address_digits;

    return TRUE;
}

GType
qmi_indication_wms_smsc_address_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationWmsSmscAddressOutput"),
                                          (GBoxedCopyFunc) qmi_indication_wms_smsc_address_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_wms_smsc_address_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationWmsSmscAddressOutput *
qmi_indication_wms_smsc_address_output_ref (QmiIndicationWmsSmscAddressOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_wms_smsc_address_output_unref (QmiIndicationWmsSmscAddressOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_address_digits, (GDestroyNotify)g_free);
        g_slice_free (QmiIndicationWmsSmscAddressOutput, self);
    }
}

static gchar *
qmi_indication_wms_smsc_address_output_address_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_SMSC_ADDRESS_OUTPUT_TLV_ADDRESS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " type = '");

    {
        gchar tmp[4] = { '\0' };

        if (!qmi_message_tlv_read_fixed_size_string (message, init_offset, &offset, 3, &tmp[0], &error))
            goto out;
        {
            g_string_append (printable, tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " digits = '");

    {
        g_autofree gchar *tmp = NULL;

        if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
            goto out;
        {
            g_string_append (printable, tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_smsc_address_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_smsc_address_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_smsc_address_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_WMS_SMSC_ADDRESS_OUTPUT_TLV_ADDRESS:
            tlv_type_str = "Address";
            translated_value = qmi_indication_wms_smsc_address_output_address_get_printable (
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
indication_smsc_address_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"SMSC Address\" (0x0046)\n",
                            line_prefix);

    {
        struct indication_smsc_address_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_smsc_address_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationWmsSmscAddressOutput *
qmi_indication_wms_smsc_address_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationWmsSmscAddressOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_WMS_SMSC_ADDRESS);

    self = g_slice_new0 (QmiIndicationWmsSmscAddressOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_SMSC_ADDRESS_OUTPUT_TLV_ADDRESS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Address TLV: ");
                qmi_indication_wms_smsc_address_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_fixed_size_string (message, init_offset, &offset, 3, &self->arg_address_type[0], error))
                goto qmi_indication_wms_smsc_address_output_address_out;
            self->arg_address_type[3] = '\0';
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &(self->arg_address_digits), error))
                goto qmi_indication_wms_smsc_address_output_address_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Address' TLV", offset);
            }

            self->arg_address_set = TRUE;

qmi_indication_wms_smsc_address_output_address_out:
            if (!self->arg_address_set) {
                qmi_indication_wms_smsc_address_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication WMS Transport Network Registration Status */


/* --- Output -- */

struct _QmiIndicationWmsTransportNetworkRegistrationStatusOutput {
    volatile gint ref_count;

    /* Registration Status */
    gboolean arg_registration_status_set;
    guint8 arg_registration_status;
};

#define QMI_INDICATION_WMS_TRANSPORT_NETWORK_REGISTRATION_STATUS_OUTPUT_TLV_REGISTRATION_STATUS 0x01

gboolean
qmi_indication_wms_transport_network_registration_status_output_get_registration_status (
    QmiIndicationWmsTransportNetworkRegistrationStatusOutput *self,
    QmiWmsNWRegistration *value_registration_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_registration_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Registration Status' was not found in the message");
        return FALSE;
    }

    if (value_registration_status)
        *value_registration_status = (QmiWmsNWRegistration)(self->arg_registration_status);

    return TRUE;
}

GType
qmi_indication_wms_transport_network_registration_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationWmsTransportNetworkRegistrationStatusOutput"),
                                          (GBoxedCopyFunc) qmi_indication_wms_transport_network_registration_status_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_wms_transport_network_registration_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationWmsTransportNetworkRegistrationStatusOutput *
qmi_indication_wms_transport_network_registration_status_output_ref (QmiIndicationWmsTransportNetworkRegistrationStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_wms_transport_network_registration_status_output_unref (QmiIndicationWmsTransportNetworkRegistrationStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationWmsTransportNetworkRegistrationStatusOutput, self);
    }
}

static gchar *
qmi_indication_wms_transport_network_registration_status_output_registration_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_TRANSPORT_NETWORK_REGISTRATION_STATUS_OUTPUT_TLV_REGISTRATION_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_NW_REGISTRATION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_nw_registration_get_string ((QmiWmsNWRegistration)tmp));
#elif defined  __QMI_WMS_NW_REGISTRATION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_nw_registration_build_string_from_mask ((QmiWmsNWRegistration)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsNWRegistration
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

struct indication_transport_network_registration_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_transport_network_registration_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_transport_network_registration_status_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_WMS_TRANSPORT_NETWORK_REGISTRATION_STATUS_OUTPUT_TLV_REGISTRATION_STATUS:
            tlv_type_str = "Registration Status";
            translated_value = qmi_indication_wms_transport_network_registration_status_output_registration_status_get_printable (
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
indication_transport_network_registration_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Transport Network Registration Status\" (0x004B)\n",
                            line_prefix);

    {
        struct indication_transport_network_registration_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_transport_network_registration_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationWmsTransportNetworkRegistrationStatusOutput *
qmi_indication_wms_transport_network_registration_status_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationWmsTransportNetworkRegistrationStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_WMS_TRANSPORT_NETWORK_REGISTRATION_STATUS);

    self = g_slice_new0 (QmiIndicationWmsTransportNetworkRegistrationStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WMS_TRANSPORT_NETWORK_REGISTRATION_STATUS_OUTPUT_TLV_REGISTRATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Registration Status TLV: ");
                qmi_indication_wms_transport_network_registration_status_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_indication_wms_transport_network_registration_status_output_registration_status_out;
                self->arg_registration_status = (QmiWmsNWRegistration)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Registration Status' TLV", offset);
            }

            self->arg_registration_status_set = TRUE;

qmi_indication_wms_transport_network_registration_status_output_registration_status_out:
            if (!self->arg_registration_status_set) {
                qmi_indication_wms_transport_network_registration_status_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_wms_reset_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_RESET);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsResetOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_WMS_RESET_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_wms_reset_output_get_result (
    QmiMessageWmsResetOutput *self,
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
qmi_message_wms_reset_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsResetOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_reset_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_reset_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsResetOutput *
qmi_message_wms_reset_output_ref (QmiMessageWmsResetOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_reset_output_unref (QmiMessageWmsResetOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsResetOutput, self);
    }
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_WMS_RESET_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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

struct message_reset_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_reset_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_reset_context *ctx)
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
        case QMI_MESSAGE_WMS_RESET_OUTPUT_TLV_RESULT:
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
message_reset_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Reset\" (0x0000)\n",
                            line_prefix);

    {
        struct message_reset_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_reset_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsResetOutput *
qmi_message_wms_reset_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsResetOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_RESET);

    self = g_slice_new0 (QmiMessageWmsResetOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RESET_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_reset_output_unref (self);
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
                qmi_message_wms_reset_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Set Event Report */


/* --- Input -- */

struct _QmiMessageWmsSetEventReportInput {
    volatile gint ref_count;

    /* New MT Message Indicator */
    gboolean arg_new_mt_message_indicator_set;
    guint8 arg_new_mt_message_indicator_report;
};

#define QMI_MESSAGE_WMS_SET_EVENT_REPORT_INPUT_TLV_NEW_MT_MESSAGE_INDICATOR 0x10

gboolean
qmi_message_wms_set_event_report_input_get_new_mt_message_indicator (
    QmiMessageWmsSetEventReportInput *self,
    gboolean *value_new_mt_message_indicator_report,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_new_mt_message_indicator_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'New MT Message Indicator' was not found in the message");
        return FALSE;
    }

    if (value_new_mt_message_indicator_report)
        *value_new_mt_message_indicator_report = (gboolean)(self->arg_new_mt_message_indicator_report);

    return TRUE;
}

gboolean
qmi_message_wms_set_event_report_input_set_new_mt_message_indicator (
    QmiMessageWmsSetEventReportInput *self,
    gboolean value_new_mt_message_indicator_report,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_new_mt_message_indicator_report = (guint8)(value_new_mt_message_indicator_report);
    self->arg_new_mt_message_indicator_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_set_event_report_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsSetEventReportInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_set_event_report_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_set_event_report_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsSetEventReportInput *
qmi_message_wms_set_event_report_input_ref (QmiMessageWmsSetEventReportInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_set_event_report_input_unref (QmiMessageWmsSetEventReportInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsSetEventReportInput, self);
    }
}

QmiMessageWmsSetEventReportInput *
qmi_message_wms_set_event_report_input_new (void)
{
    QmiMessageWmsSetEventReportInput *self;

    self = g_slice_new0 (QmiMessageWmsSetEventReportInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_set_event_report_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsSetEventReportInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_SET_EVENT_REPORT);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'New MT Message Indicator' TLV */
    if (input->arg_new_mt_message_indicator_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_SET_EVENT_REPORT_INPUT_TLV_NEW_MT_MESSAGE_INDICATOR, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'New MT Message Indicator': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_new_mt_message_indicator_report;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'New MT Message Indicator': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'New MT Message Indicator': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsSetEventReportOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_WMS_SET_EVENT_REPORT_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_wms_set_event_report_output_get_result (
    QmiMessageWmsSetEventReportOutput *self,
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
qmi_message_wms_set_event_report_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsSetEventReportOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_set_event_report_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_set_event_report_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsSetEventReportOutput *
qmi_message_wms_set_event_report_output_ref (QmiMessageWmsSetEventReportOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_set_event_report_output_unref (QmiMessageWmsSetEventReportOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsSetEventReportOutput, self);
    }
}

static gchar *
qmi_message_wms_set_event_report_input_new_mt_message_indicator_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SET_EVENT_REPORT_INPUT_TLV_NEW_MT_MESSAGE_INDICATOR, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " report = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_set_event_report_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_event_report_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_event_report_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_SET_EVENT_REPORT_INPUT_TLV_NEW_MT_MESSAGE_INDICATOR:
            tlv_type_str = "New MT Message Indicator";
            translated_value = qmi_message_wms_set_event_report_input_new_mt_message_indicator_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_SET_EVENT_REPORT_OUTPUT_TLV_RESULT:
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
message_set_event_report_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Event Report\" (0x0001)\n",
                            line_prefix);

    {
        struct message_set_event_report_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_event_report_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsSetEventReportOutput *
qmi_message_wms_set_event_report_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsSetEventReportOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_SET_EVENT_REPORT);

    self = g_slice_new0 (QmiMessageWmsSetEventReportOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SET_EVENT_REPORT_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_set_event_report_output_unref (self);
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
                qmi_message_wms_set_event_report_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_wms_get_supported_messages_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_GET_SUPPORTED_MESSAGES);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsGetSupportedMessagesOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* List */
    gboolean arg_list_set;
    GArray *arg_list;
};

#define QMI_MESSAGE_WMS_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WMS_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST 0x10

gboolean
qmi_message_wms_get_supported_messages_output_get_result (
    QmiMessageWmsGetSupportedMessagesOutput *self,
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
qmi_message_wms_get_supported_messages_output_get_list (
    QmiMessageWmsGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'List' was not found in the message");
        return FALSE;
    }

    if (value_list)
        *value_list = self->arg_list;

    return TRUE;
}

GType
qmi_message_wms_get_supported_messages_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsGetSupportedMessagesOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_get_supported_messages_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_get_supported_messages_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsGetSupportedMessagesOutput *
qmi_message_wms_get_supported_messages_output_ref (QmiMessageWmsGetSupportedMessagesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_get_supported_messages_output_unref (QmiMessageWmsGetSupportedMessagesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_list, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageWmsGetSupportedMessagesOutput, self);
    }
}

static gchar *
qmi_message_wms_get_supported_messages_output_list_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint list_i;
        guint16 list_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(list_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (list_i = 0; list_i < list_n_items; list_i++) {
            g_string_append_printf (printable, " [%u] = '", list_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
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

struct message_get_supported_messages_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_supported_messages_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_supported_messages_context *ctx)
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
        case QMI_MESSAGE_WMS_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST:
            tlv_type_str = "List";
            translated_value = qmi_message_wms_get_supported_messages_output_list_get_printable (
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
message_get_supported_messages_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Supported Messages\" (0x001E)\n",
                            line_prefix);

    {
        struct message_get_supported_messages_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_supported_messages_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsGetSupportedMessagesOutput *
qmi_message_wms_get_supported_messages_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsGetSupportedMessagesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_GET_SUPPORTED_MESSAGES);

    self = g_slice_new0 (QmiMessageWmsGetSupportedMessagesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_get_supported_messages_output_unref (self);
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
                qmi_message_wms_get_supported_messages_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST, NULL, NULL)) == 0) {
                goto qmi_message_wms_get_supported_messages_output_list_out;
            }
            {
                guint list_i;
                guint16 list_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(list_n_items), NULL))
                    goto qmi_message_wms_get_supported_messages_output_list_out;

                self->arg_list = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)list_n_items);

                for (list_i = 0; list_i < list_n_items; list_i++) {
                    guint8 list_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(list_aux), NULL))
                        goto qmi_message_wms_get_supported_messages_output_list_out;
                    g_array_insert_val (self->arg_list, list_i, list_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'List' TLV", offset);
            }

            self->arg_list_set = TRUE;

qmi_message_wms_get_supported_messages_output_list_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Raw Send */


/* --- Input -- */

struct _QmiMessageWmsRawSendInput {
    volatile gint ref_count;

    /* SMS on IMS */
    gboolean arg_sms_on_ims_set;
    guint8 arg_sms_on_ims;

    /* GSM WCDMA Link Timer */
    gboolean arg_gsm_wcdma_link_timer_set;
    guint8 arg_gsm_wcdma_link_timer;

    /* CDMA Follow On DC */
    gboolean arg_cdma_follow_on_dc_set;
    guint8 arg_cdma_follow_on_dc_follow;

    /* CDMA Force On DC */
    gboolean arg_cdma_force_on_dc_set;
    guint8 arg_cdma_force_on_dc_force;
    guint8 arg_cdma_force_on_dc_service_option;

    /* Raw Message Data */
    gboolean arg_raw_message_data_set;
    guint8 arg_raw_message_data_format;
    GArray *arg_raw_message_data_raw_data;
};

#define QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_SMS_ON_IMS 0x13
#define QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_GSM_WCDMA_LINK_TIMER 0x12
#define QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_CDMA_FOLLOW_ON_DC 0x11
#define QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_CDMA_FORCE_ON_DC 0x10
#define QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_RAW_MESSAGE_DATA 0x01

gboolean
qmi_message_wms_raw_send_input_get_sms_on_ims (
    QmiMessageWmsRawSendInput *self,
    gboolean *value_sms_on_ims,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_sms_on_ims_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'SMS on IMS' was not found in the message");
        return FALSE;
    }

    if (value_sms_on_ims)
        *value_sms_on_ims = (gboolean)(self->arg_sms_on_ims);

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_input_set_sms_on_ims (
    QmiMessageWmsRawSendInput *self,
    gboolean value_sms_on_ims,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_sms_on_ims = (guint8)(value_sms_on_ims);
    self->arg_sms_on_ims_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_input_get_gsm_wcdma_link_timer (
    QmiMessageWmsRawSendInput *self,
    guint8 *value_gsm_wcdma_link_timer,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_gsm_wcdma_link_timer_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'GSM WCDMA Link Timer' was not found in the message");
        return FALSE;
    }

    if (value_gsm_wcdma_link_timer)
        *value_gsm_wcdma_link_timer = self->arg_gsm_wcdma_link_timer;

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_input_set_gsm_wcdma_link_timer (
    QmiMessageWmsRawSendInput *self,
    guint8 value_gsm_wcdma_link_timer,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_gsm_wcdma_link_timer = value_gsm_wcdma_link_timer;
    self->arg_gsm_wcdma_link_timer_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_input_get_cdma_follow_on_dc (
    QmiMessageWmsRawSendInput *self,
    gboolean *value_cdma_follow_on_dc_follow,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_cdma_follow_on_dc_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'CDMA Follow On DC' was not found in the message");
        return FALSE;
    }

    if (value_cdma_follow_on_dc_follow)
        *value_cdma_follow_on_dc_follow = (gboolean)(self->arg_cdma_follow_on_dc_follow);

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_input_set_cdma_follow_on_dc (
    QmiMessageWmsRawSendInput *self,
    gboolean value_cdma_follow_on_dc_follow,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_cdma_follow_on_dc_follow = (guint8)(value_cdma_follow_on_dc_follow);
    self->arg_cdma_follow_on_dc_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_input_get_cdma_force_on_dc (
    QmiMessageWmsRawSendInput *self,
    gboolean *value_cdma_force_on_dc_force,
    QmiWmsCdmaServiceOption *value_cdma_force_on_dc_service_option,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_cdma_force_on_dc_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'CDMA Force On DC' was not found in the message");
        return FALSE;
    }

    if (value_cdma_force_on_dc_force)
        *value_cdma_force_on_dc_force = (gboolean)(self->arg_cdma_force_on_dc_force);
    if (value_cdma_force_on_dc_service_option)
        *value_cdma_force_on_dc_service_option = (QmiWmsCdmaServiceOption)(self->arg_cdma_force_on_dc_service_option);

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_input_set_cdma_force_on_dc (
    QmiMessageWmsRawSendInput *self,
    gboolean value_cdma_force_on_dc_force,
    QmiWmsCdmaServiceOption value_cdma_force_on_dc_service_option,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_cdma_force_on_dc_force = (guint8)(value_cdma_force_on_dc_force);
    self->arg_cdma_force_on_dc_service_option = (guint8)(value_cdma_force_on_dc_service_option);
    self->arg_cdma_force_on_dc_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_input_get_raw_message_data (
    QmiMessageWmsRawSendInput *self,
    QmiWmsMessageFormat *value_raw_message_data_format,
    GArray **value_raw_message_data_raw_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_raw_message_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Raw Message Data' was not found in the message");
        return FALSE;
    }

    if (value_raw_message_data_format)
        *value_raw_message_data_format = (QmiWmsMessageFormat)(self->arg_raw_message_data_format);
    if (value_raw_message_data_raw_data)
        *value_raw_message_data_raw_data = self->arg_raw_message_data_raw_data;

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_input_set_raw_message_data (
    QmiMessageWmsRawSendInput *self,
    QmiWmsMessageFormat value_raw_message_data_format,
    GArray *value_raw_message_data_raw_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_raw_message_data_format = (guint8)(value_raw_message_data_format);
    g_clear_pointer (&self->arg_raw_message_data_raw_data, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_raw_message_data_raw_data, (GDestroyNotify)g_ptr_array_unref);
    self->arg_raw_message_data_raw_data = g_array_ref (value_raw_message_data_raw_data);
    self->arg_raw_message_data_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_raw_send_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsRawSendInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_raw_send_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_raw_send_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsRawSendInput *
qmi_message_wms_raw_send_input_ref (QmiMessageWmsRawSendInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_raw_send_input_unref (QmiMessageWmsRawSendInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_raw_message_data_raw_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageWmsRawSendInput, self);
    }
}

QmiMessageWmsRawSendInput *
qmi_message_wms_raw_send_input_new (void)
{
    QmiMessageWmsRawSendInput *self;

    self = g_slice_new0 (QmiMessageWmsRawSendInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_raw_send_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsRawSendInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_RAW_SEND);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Raw Send' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'SMS on IMS' TLV */
    if (input->arg_sms_on_ims_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_SMS_ON_IMS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'SMS on IMS': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_sms_on_ims;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'SMS on IMS': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'SMS on IMS': ");
            return NULL;
        }
    }

    /* Try to add the 'GSM WCDMA Link Timer' TLV */
    if (input->arg_gsm_wcdma_link_timer_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_GSM_WCDMA_LINK_TIMER, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'GSM WCDMA Link Timer': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_gsm_wcdma_link_timer, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'GSM WCDMA Link Timer': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'GSM WCDMA Link Timer': ");
            return NULL;
        }
    }

    /* Try to add the 'CDMA Follow On DC' TLV */
    if (input->arg_cdma_follow_on_dc_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_CDMA_FOLLOW_ON_DC, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'CDMA Follow On DC': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_cdma_follow_on_dc_follow;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'CDMA Follow On DC': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'CDMA Follow On DC': ");
            return NULL;
        }
    }

    /* Try to add the 'CDMA Force On DC' TLV */
    if (input->arg_cdma_force_on_dc_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_CDMA_FORCE_ON_DC, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'CDMA Force On DC': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_cdma_force_on_dc_force;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'CDMA Force On DC': ");
                return NULL;
            }
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_cdma_force_on_dc_service_option;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'CDMA Force On DC': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'CDMA Force On DC': ");
            return NULL;
        }
    }

    /* Try to add the 'Raw Message Data' TLV */
    if (input->arg_raw_message_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_RAW_MESSAGE_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Raw Message Data': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_raw_message_data_format;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Raw Message Data': ");
                return NULL;
            }
        }
        {
            guint raw_data_i;
            guint16 raw_data_n_items;

            /* Write the number of items in the array first */
            raw_data_n_items = (guint16) input->arg_raw_message_data_raw_data->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, raw_data_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Raw Message Data': ");
                return NULL;
            }

            for (raw_data_i = 0; raw_data_i < input->arg_raw_message_data_raw_data->len; raw_data_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_raw_message_data_raw_data, guint8,raw_data_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Raw Message Data': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Raw Message Data': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Raw Message Data' in message 'Raw Send'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsRawSendOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Message ID */
    gboolean arg_message_id_set;
    guint16 arg_message_id;

    /* CDMA Cause Code */
    gboolean arg_cdma_cause_code_set;
    guint16 arg_cdma_cause_code;

    /* CDMA Error Class */
    gboolean arg_cdma_error_class_set;
    guint8 arg_cdma_error_class;

    /* GSM WCDMA Cause Info */
    gboolean arg_gsm_wcdma_cause_info_set;
    guint16 arg_gsm_wcdma_cause_info_rp_cause;
    guint8 arg_gsm_wcdma_cause_info_tp_cause;

    /* Message Delivery Failure Type */
    gboolean arg_message_delivery_failure_type_set;
    guint8 arg_message_delivery_failure_type;
};

#define QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_MESSAGE_ID 0x01
#define QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_CDMA_CAUSE_CODE 0x10
#define QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_CDMA_ERROR_CLASS 0x11
#define QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_GSM_WCDMA_CAUSE_INFO 0x12
#define QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_MESSAGE_DELIVERY_FAILURE_TYPE 0x13

gboolean
qmi_message_wms_raw_send_output_get_result (
    QmiMessageWmsRawSendOutput *self,
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
qmi_message_wms_raw_send_output_get_message_id (
    QmiMessageWmsRawSendOutput *self,
    guint16 *value_message_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message ID' was not found in the message");
        return FALSE;
    }

    if (value_message_id)
        *value_message_id = self->arg_message_id;

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_output_get_cdma_cause_code (
    QmiMessageWmsRawSendOutput *self,
    QmiWmsCdmaCauseCode *value_cdma_cause_code,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_cdma_cause_code_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'CDMA Cause Code' was not found in the message");
        return FALSE;
    }

    if (value_cdma_cause_code)
        *value_cdma_cause_code = (QmiWmsCdmaCauseCode)(self->arg_cdma_cause_code);

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_output_get_cdma_error_class (
    QmiMessageWmsRawSendOutput *self,
    QmiWmsCdmaErrorClass *value_cdma_error_class,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_cdma_error_class_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'CDMA Error Class' was not found in the message");
        return FALSE;
    }

    if (value_cdma_error_class)
        *value_cdma_error_class = (QmiWmsCdmaErrorClass)(self->arg_cdma_error_class);

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_output_get_gsm_wcdma_cause_info (
    QmiMessageWmsRawSendOutput *self,
    QmiWmsGsmUmtsRpCause *value_gsm_wcdma_cause_info_rp_cause,
    QmiWmsGsmUmtsTpCause *value_gsm_wcdma_cause_info_tp_cause,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_gsm_wcdma_cause_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'GSM WCDMA Cause Info' was not found in the message");
        return FALSE;
    }

    if (value_gsm_wcdma_cause_info_rp_cause)
        *value_gsm_wcdma_cause_info_rp_cause = (QmiWmsGsmUmtsRpCause)(self->arg_gsm_wcdma_cause_info_rp_cause);
    if (value_gsm_wcdma_cause_info_tp_cause)
        *value_gsm_wcdma_cause_info_tp_cause = (QmiWmsGsmUmtsTpCause)(self->arg_gsm_wcdma_cause_info_tp_cause);

    return TRUE;
}

gboolean
qmi_message_wms_raw_send_output_get_message_delivery_failure_type (
    QmiMessageWmsRawSendOutput *self,
    QmiWmsMessageDeliveryFailureType *value_message_delivery_failure_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_delivery_failure_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Delivery Failure Type' was not found in the message");
        return FALSE;
    }

    if (value_message_delivery_failure_type)
        *value_message_delivery_failure_type = (QmiWmsMessageDeliveryFailureType)(self->arg_message_delivery_failure_type);

    return TRUE;
}

GType
qmi_message_wms_raw_send_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsRawSendOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_raw_send_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_raw_send_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsRawSendOutput *
qmi_message_wms_raw_send_output_ref (QmiMessageWmsRawSendOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_raw_send_output_unref (QmiMessageWmsRawSendOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsRawSendOutput, self);
    }
}

static gchar *
qmi_message_wms_raw_send_input_sms_on_ims_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_SMS_ON_IMS, NULL, NULL)) == 0)
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
qmi_message_wms_raw_send_input_gsm_wcdma_link_timer_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_GSM_WCDMA_LINK_TIMER, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
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
qmi_message_wms_raw_send_input_cdma_follow_on_dc_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_CDMA_FOLLOW_ON_DC, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " follow = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_message_wms_raw_send_input_cdma_force_on_dc_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_CDMA_FORCE_ON_DC, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " force = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " service_option = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_CDMA_SERVICE_OPTION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_cdma_service_option_get_string ((QmiWmsCdmaServiceOption)tmp));
#elif defined  __QMI_WMS_CDMA_SERVICE_OPTION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_cdma_service_option_build_string_from_mask ((QmiWmsCdmaServiceOption)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsCdmaServiceOption
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_message_wms_raw_send_input_raw_message_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_RAW_MESSAGE_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " format = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_FORMAT_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_format_get_string ((QmiWmsMessageFormat)tmp));
#elif defined  __QMI_WMS_MESSAGE_FORMAT_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_format_build_string_from_mask ((QmiWmsMessageFormat)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageFormat
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " raw_data = '");
    {
        guint raw_data_i;
        guint16 raw_data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(raw_data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (raw_data_i = 0; raw_data_i < raw_data_n_items; raw_data_i++) {
            g_string_append_printf (printable, " [%u] = '", raw_data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_message_wms_raw_send_output_message_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_MESSAGE_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
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
qmi_message_wms_raw_send_output_cdma_cause_code_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_CDMA_CAUSE_CODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_CDMA_CAUSE_CODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_cdma_cause_code_get_string ((QmiWmsCdmaCauseCode)tmp));
#elif defined  __QMI_WMS_CDMA_CAUSE_CODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_cdma_cause_code_build_string_from_mask ((QmiWmsCdmaCauseCode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsCdmaCauseCode
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
qmi_message_wms_raw_send_output_cdma_error_class_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_CDMA_ERROR_CLASS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_CDMA_ERROR_CLASS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_cdma_error_class_get_string ((QmiWmsCdmaErrorClass)tmp));
#elif defined  __QMI_WMS_CDMA_ERROR_CLASS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_cdma_error_class_build_string_from_mask ((QmiWmsCdmaErrorClass)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsCdmaErrorClass
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
qmi_message_wms_raw_send_output_gsm_wcdma_cause_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_GSM_WCDMA_CAUSE_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " rp_cause = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_GSM_UMTS_RP_CAUSE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_gsm_umts_rp_cause_get_string ((QmiWmsGsmUmtsRpCause)tmp));
#elif defined  __QMI_WMS_GSM_UMTS_RP_CAUSE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_gsm_umts_rp_cause_build_string_from_mask ((QmiWmsGsmUmtsRpCause)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsGsmUmtsRpCause
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " tp_cause = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_GSM_UMTS_TP_CAUSE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_gsm_umts_tp_cause_get_string ((QmiWmsGsmUmtsTpCause)tmp));
#elif defined  __QMI_WMS_GSM_UMTS_TP_CAUSE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_gsm_umts_tp_cause_build_string_from_mask ((QmiWmsGsmUmtsTpCause)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsGsmUmtsTpCause
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_message_wms_raw_send_output_message_delivery_failure_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_MESSAGE_DELIVERY_FAILURE_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_DELIVERY_FAILURE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_delivery_failure_type_get_string ((QmiWmsMessageDeliveryFailureType)tmp));
#elif defined  __QMI_WMS_MESSAGE_DELIVERY_FAILURE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_delivery_failure_type_build_string_from_mask ((QmiWmsMessageDeliveryFailureType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageDeliveryFailureType
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

struct message_raw_send_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_raw_send_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_raw_send_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_SMS_ON_IMS:
            tlv_type_str = "SMS on IMS";
            translated_value = qmi_message_wms_raw_send_input_sms_on_ims_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_GSM_WCDMA_LINK_TIMER:
            tlv_type_str = "GSM WCDMA Link Timer";
            translated_value = qmi_message_wms_raw_send_input_gsm_wcdma_link_timer_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_CDMA_FOLLOW_ON_DC:
            tlv_type_str = "CDMA Follow On DC";
            translated_value = qmi_message_wms_raw_send_input_cdma_follow_on_dc_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_CDMA_FORCE_ON_DC:
            tlv_type_str = "CDMA Force On DC";
            translated_value = qmi_message_wms_raw_send_input_cdma_force_on_dc_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_SEND_INPUT_TLV_RAW_MESSAGE_DATA:
            tlv_type_str = "Raw Message Data";
            translated_value = qmi_message_wms_raw_send_input_raw_message_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_MESSAGE_ID:
            tlv_type_str = "Message ID";
            translated_value = qmi_message_wms_raw_send_output_message_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_CDMA_CAUSE_CODE:
            tlv_type_str = "CDMA Cause Code";
            translated_value = qmi_message_wms_raw_send_output_cdma_cause_code_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_CDMA_ERROR_CLASS:
            tlv_type_str = "CDMA Error Class";
            translated_value = qmi_message_wms_raw_send_output_cdma_error_class_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_GSM_WCDMA_CAUSE_INFO:
            tlv_type_str = "GSM WCDMA Cause Info";
            translated_value = qmi_message_wms_raw_send_output_gsm_wcdma_cause_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_MESSAGE_DELIVERY_FAILURE_TYPE:
            tlv_type_str = "Message Delivery Failure Type";
            translated_value = qmi_message_wms_raw_send_output_message_delivery_failure_type_get_printable (
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
message_raw_send_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Raw Send\" (0x0020)\n",
                            line_prefix);

    {
        struct message_raw_send_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_raw_send_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsRawSendOutput *
qmi_message_wms_raw_send_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsRawSendOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_RAW_SEND);

    self = g_slice_new0 (QmiMessageWmsRawSendOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_raw_send_output_unref (self);
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
                qmi_message_wms_raw_send_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_MESSAGE_ID, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Message ID TLV: ");
                qmi_message_wms_raw_send_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_message_id), error))
                goto qmi_message_wms_raw_send_output_message_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Message ID' TLV", offset);
            }

            self->arg_message_id_set = TRUE;

qmi_message_wms_raw_send_output_message_id_out:
            if (!self->arg_message_id_set) {
                qmi_message_wms_raw_send_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;
        /* Prerequisite.... */
        if (!(self->arg_result_error_code == QMI_PROTOCOL_ERROR_WMS_CAUSE_CODE))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_CDMA_CAUSE_CODE, NULL, NULL)) == 0) {
                goto qmi_message_wms_raw_send_output_cdma_cause_code_out;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_wms_raw_send_output_cdma_cause_code_out;
                self->arg_cdma_cause_code = (QmiWmsCdmaCauseCode)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'CDMA Cause Code' TLV", offset);
            }

            self->arg_cdma_cause_code_set = TRUE;

qmi_message_wms_raw_send_output_cdma_cause_code_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;
        /* Prerequisite.... */
        if (!(self->arg_result_error_code == QMI_PROTOCOL_ERROR_WMS_CAUSE_CODE))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_CDMA_ERROR_CLASS, NULL, NULL)) == 0) {
                goto qmi_message_wms_raw_send_output_cdma_error_class_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_wms_raw_send_output_cdma_error_class_out;
                self->arg_cdma_error_class = (QmiWmsCdmaErrorClass)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'CDMA Error Class' TLV", offset);
            }

            self->arg_cdma_error_class_set = TRUE;

qmi_message_wms_raw_send_output_cdma_error_class_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;
        /* Prerequisite.... */
        if (!(self->arg_result_error_code == QMI_PROTOCOL_ERROR_WMS_CAUSE_CODE))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_GSM_WCDMA_CAUSE_INFO, NULL, NULL)) == 0) {
                goto qmi_message_wms_raw_send_output_gsm_wcdma_cause_info_out;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_wms_raw_send_output_gsm_wcdma_cause_info_out;
                self->arg_gsm_wcdma_cause_info_rp_cause = (QmiWmsGsmUmtsRpCause)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_wms_raw_send_output_gsm_wcdma_cause_info_out;
                self->arg_gsm_wcdma_cause_info_tp_cause = (QmiWmsGsmUmtsTpCause)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'GSM WCDMA Cause Info' TLV", offset);
            }

            self->arg_gsm_wcdma_cause_info_set = TRUE;

qmi_message_wms_raw_send_output_gsm_wcdma_cause_info_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;
        /* Prerequisite.... */
        if (!(self->arg_result_error_code == QMI_PROTOCOL_ERROR_WMS_CAUSE_CODE))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_SEND_OUTPUT_TLV_MESSAGE_DELIVERY_FAILURE_TYPE, NULL, NULL)) == 0) {
                goto qmi_message_wms_raw_send_output_message_delivery_failure_type_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_wms_raw_send_output_message_delivery_failure_type_out;
                self->arg_message_delivery_failure_type = (QmiWmsMessageDeliveryFailureType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Message Delivery Failure Type' TLV", offset);
            }

            self->arg_message_delivery_failure_type_set = TRUE;

qmi_message_wms_raw_send_output_message_delivery_failure_type_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Raw Write */


/* --- Input -- */

struct _QmiMessageWmsRawWriteInput {
    volatile gint ref_count;

    /* Raw Message Data */
    gboolean arg_raw_message_data_set;
    guint8 arg_raw_message_data_storage_type;
    guint8 arg_raw_message_data_format;
    GArray *arg_raw_message_data_raw_data;
};

#define QMI_MESSAGE_WMS_RAW_WRITE_INPUT_TLV_RAW_MESSAGE_DATA 0x01

gboolean
qmi_message_wms_raw_write_input_get_raw_message_data (
    QmiMessageWmsRawWriteInput *self,
    QmiWmsStorageType *value_raw_message_data_storage_type,
    QmiWmsMessageFormat *value_raw_message_data_format,
    GArray **value_raw_message_data_raw_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_raw_message_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Raw Message Data' was not found in the message");
        return FALSE;
    }

    if (value_raw_message_data_storage_type)
        *value_raw_message_data_storage_type = (QmiWmsStorageType)(self->arg_raw_message_data_storage_type);
    if (value_raw_message_data_format)
        *value_raw_message_data_format = (QmiWmsMessageFormat)(self->arg_raw_message_data_format);
    if (value_raw_message_data_raw_data)
        *value_raw_message_data_raw_data = self->arg_raw_message_data_raw_data;

    return TRUE;
}

gboolean
qmi_message_wms_raw_write_input_set_raw_message_data (
    QmiMessageWmsRawWriteInput *self,
    QmiWmsStorageType value_raw_message_data_storage_type,
    QmiWmsMessageFormat value_raw_message_data_format,
    GArray *value_raw_message_data_raw_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_raw_message_data_storage_type = (guint8)(value_raw_message_data_storage_type);
    self->arg_raw_message_data_format = (guint8)(value_raw_message_data_format);
    g_clear_pointer (&self->arg_raw_message_data_raw_data, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_raw_message_data_raw_data, (GDestroyNotify)g_ptr_array_unref);
    self->arg_raw_message_data_raw_data = g_array_ref (value_raw_message_data_raw_data);
    self->arg_raw_message_data_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_raw_write_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsRawWriteInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_raw_write_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_raw_write_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsRawWriteInput *
qmi_message_wms_raw_write_input_ref (QmiMessageWmsRawWriteInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_raw_write_input_unref (QmiMessageWmsRawWriteInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_raw_message_data_raw_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageWmsRawWriteInput, self);
    }
}

QmiMessageWmsRawWriteInput *
qmi_message_wms_raw_write_input_new (void)
{
    QmiMessageWmsRawWriteInput *self;

    self = g_slice_new0 (QmiMessageWmsRawWriteInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_raw_write_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsRawWriteInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_RAW_WRITE);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Raw Write' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Raw Message Data' TLV */
    if (input->arg_raw_message_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_RAW_WRITE_INPUT_TLV_RAW_MESSAGE_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Raw Message Data': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_raw_message_data_storage_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Raw Message Data': ");
                return NULL;
            }
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_raw_message_data_format;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Raw Message Data': ");
                return NULL;
            }
        }
        {
            guint raw_data_i;
            guint16 raw_data_n_items;

            /* Write the number of items in the array first */
            raw_data_n_items = (guint16) input->arg_raw_message_data_raw_data->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, raw_data_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Raw Message Data': ");
                return NULL;
            }

            for (raw_data_i = 0; raw_data_i < input->arg_raw_message_data_raw_data->len; raw_data_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_raw_message_data_raw_data, guint8,raw_data_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Raw Message Data': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Raw Message Data': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Raw Message Data' in message 'Raw Write'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsRawWriteOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Memory Index */
    gboolean arg_memory_index_set;
    guint32 arg_memory_index;
};

#define QMI_MESSAGE_WMS_RAW_WRITE_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WMS_RAW_WRITE_OUTPUT_TLV_MEMORY_INDEX 0x01

gboolean
qmi_message_wms_raw_write_output_get_result (
    QmiMessageWmsRawWriteOutput *self,
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
qmi_message_wms_raw_write_output_get_memory_index (
    QmiMessageWmsRawWriteOutput *self,
    guint32 *value_memory_index,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_memory_index_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Memory Index' was not found in the message");
        return FALSE;
    }

    if (value_memory_index)
        *value_memory_index = self->arg_memory_index;

    return TRUE;
}

GType
qmi_message_wms_raw_write_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsRawWriteOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_raw_write_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_raw_write_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsRawWriteOutput *
qmi_message_wms_raw_write_output_ref (QmiMessageWmsRawWriteOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_raw_write_output_unref (QmiMessageWmsRawWriteOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsRawWriteOutput, self);
    }
}

static gchar *
qmi_message_wms_raw_write_input_raw_message_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_WRITE_INPUT_TLV_RAW_MESSAGE_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " storage_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_STORAGE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_storage_type_get_string ((QmiWmsStorageType)tmp));
#elif defined  __QMI_WMS_STORAGE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_storage_type_build_string_from_mask ((QmiWmsStorageType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsStorageType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " format = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_FORMAT_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_format_get_string ((QmiWmsMessageFormat)tmp));
#elif defined  __QMI_WMS_MESSAGE_FORMAT_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_format_build_string_from_mask ((QmiWmsMessageFormat)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageFormat
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " raw_data = '");
    {
        guint raw_data_i;
        guint16 raw_data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(raw_data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (raw_data_i = 0; raw_data_i < raw_data_n_items; raw_data_i++) {
            g_string_append_printf (printable, " [%u] = '", raw_data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_message_wms_raw_write_output_memory_index_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_WRITE_OUTPUT_TLV_MEMORY_INDEX, NULL, NULL)) == 0)
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

struct message_raw_write_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_raw_write_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_raw_write_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_RAW_WRITE_INPUT_TLV_RAW_MESSAGE_DATA:
            tlv_type_str = "Raw Message Data";
            translated_value = qmi_message_wms_raw_write_input_raw_message_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_RAW_WRITE_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_WRITE_OUTPUT_TLV_MEMORY_INDEX:
            tlv_type_str = "Memory Index";
            translated_value = qmi_message_wms_raw_write_output_memory_index_get_printable (
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
message_raw_write_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Raw Write\" (0x0021)\n",
                            line_prefix);

    {
        struct message_raw_write_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_raw_write_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsRawWriteOutput *
qmi_message_wms_raw_write_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsRawWriteOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_RAW_WRITE);

    self = g_slice_new0 (QmiMessageWmsRawWriteOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_WRITE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_raw_write_output_unref (self);
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
                qmi_message_wms_raw_write_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_WRITE_OUTPUT_TLV_MEMORY_INDEX, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Memory Index TLV: ");
                qmi_message_wms_raw_write_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_memory_index), error))
                goto qmi_message_wms_raw_write_output_memory_index_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Memory Index' TLV", offset);
            }

            self->arg_memory_index_set = TRUE;

qmi_message_wms_raw_write_output_memory_index_out:
            if (!self->arg_memory_index_set) {
                qmi_message_wms_raw_write_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Raw Read */


/* --- Input -- */

struct _QmiMessageWmsRawReadInput {
    volatile gint ref_count;

    /* SMS on IMS */
    gboolean arg_sms_on_ims_set;
    guint8 arg_sms_on_ims;

    /* Message Mode */
    gboolean arg_message_mode_set;
    guint8 arg_message_mode;

    /* Message Memory Storage ID */
    gboolean arg_message_memory_storage_id_set;
    guint8 arg_message_memory_storage_id_storage_type;
    guint32 arg_message_memory_storage_id_memory_index;
};

#define QMI_MESSAGE_WMS_RAW_READ_INPUT_TLV_SMS_ON_IMS 0x11
#define QMI_MESSAGE_WMS_RAW_READ_INPUT_TLV_MESSAGE_MODE 0x10
#define QMI_MESSAGE_WMS_RAW_READ_INPUT_TLV_MESSAGE_MEMORY_STORAGE_ID 0x01

gboolean
qmi_message_wms_raw_read_input_get_sms_on_ims (
    QmiMessageWmsRawReadInput *self,
    gboolean *value_sms_on_ims,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_sms_on_ims_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'SMS on IMS' was not found in the message");
        return FALSE;
    }

    if (value_sms_on_ims)
        *value_sms_on_ims = (gboolean)(self->arg_sms_on_ims);

    return TRUE;
}

gboolean
qmi_message_wms_raw_read_input_set_sms_on_ims (
    QmiMessageWmsRawReadInput *self,
    gboolean value_sms_on_ims,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_sms_on_ims = (guint8)(value_sms_on_ims);
    self->arg_sms_on_ims_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_raw_read_input_get_message_mode (
    QmiMessageWmsRawReadInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Mode' was not found in the message");
        return FALSE;
    }

    if (value_message_mode)
        *value_message_mode = (QmiWmsMessageMode)(self->arg_message_mode);

    return TRUE;
}

gboolean
qmi_message_wms_raw_read_input_set_message_mode (
    QmiMessageWmsRawReadInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_message_mode = (guint8)(value_message_mode);
    self->arg_message_mode_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_raw_read_input_get_message_memory_storage_id (
    QmiMessageWmsRawReadInput *self,
    QmiWmsStorageType *value_message_memory_storage_id_storage_type,
    guint32 *value_message_memory_storage_id_memory_index,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_memory_storage_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Memory Storage ID' was not found in the message");
        return FALSE;
    }

    if (value_message_memory_storage_id_storage_type)
        *value_message_memory_storage_id_storage_type = (QmiWmsStorageType)(self->arg_message_memory_storage_id_storage_type);
    if (value_message_memory_storage_id_memory_index)
        *value_message_memory_storage_id_memory_index = self->arg_message_memory_storage_id_memory_index;

    return TRUE;
}

gboolean
qmi_message_wms_raw_read_input_set_message_memory_storage_id (
    QmiMessageWmsRawReadInput *self,
    QmiWmsStorageType value_message_memory_storage_id_storage_type,
    guint32 value_message_memory_storage_id_memory_index,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_message_memory_storage_id_storage_type = (guint8)(value_message_memory_storage_id_storage_type);
    self->arg_message_memory_storage_id_memory_index = value_message_memory_storage_id_memory_index;
    self->arg_message_memory_storage_id_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_raw_read_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsRawReadInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_raw_read_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_raw_read_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsRawReadInput *
qmi_message_wms_raw_read_input_ref (QmiMessageWmsRawReadInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_raw_read_input_unref (QmiMessageWmsRawReadInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsRawReadInput, self);
    }
}

QmiMessageWmsRawReadInput *
qmi_message_wms_raw_read_input_new (void)
{
    QmiMessageWmsRawReadInput *self;

    self = g_slice_new0 (QmiMessageWmsRawReadInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_raw_read_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsRawReadInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_RAW_READ);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Raw Read' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'SMS on IMS' TLV */
    if (input->arg_sms_on_ims_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_RAW_READ_INPUT_TLV_SMS_ON_IMS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'SMS on IMS': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_sms_on_ims;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'SMS on IMS': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'SMS on IMS': ");
            return NULL;
        }
    }

    /* Try to add the 'Message Mode' TLV */
    if (input->arg_message_mode_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_RAW_READ_INPUT_TLV_MESSAGE_MODE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Message Mode': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_message_mode;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Message Mode': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Message Mode': ");
            return NULL;
        }
    }

    /* Try to add the 'Message Memory Storage ID' TLV */
    if (input->arg_message_memory_storage_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_RAW_READ_INPUT_TLV_MESSAGE_MEMORY_STORAGE_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Message Memory Storage ID': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_message_memory_storage_id_storage_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Message Memory Storage ID': ");
                return NULL;
            }
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_message_memory_storage_id_memory_index, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Message Memory Storage ID': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Message Memory Storage ID': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Message Memory Storage ID' in message 'Raw Read'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsRawReadOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Raw Message Data */
    gboolean arg_raw_message_data_set;
    guint8 arg_raw_message_data_message_tag;
    guint8 arg_raw_message_data_format;
    GArray *arg_raw_message_data_raw_data;
};

#define QMI_MESSAGE_WMS_RAW_READ_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WMS_RAW_READ_OUTPUT_TLV_RAW_MESSAGE_DATA 0x01

gboolean
qmi_message_wms_raw_read_output_get_result (
    QmiMessageWmsRawReadOutput *self,
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
qmi_message_wms_raw_read_output_get_raw_message_data (
    QmiMessageWmsRawReadOutput *self,
    QmiWmsMessageTagType *value_raw_message_data_message_tag,
    QmiWmsMessageFormat *value_raw_message_data_format,
    GArray **value_raw_message_data_raw_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_raw_message_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Raw Message Data' was not found in the message");
        return FALSE;
    }

    if (value_raw_message_data_message_tag)
        *value_raw_message_data_message_tag = (QmiWmsMessageTagType)(self->arg_raw_message_data_message_tag);
    if (value_raw_message_data_format)
        *value_raw_message_data_format = (QmiWmsMessageFormat)(self->arg_raw_message_data_format);
    if (value_raw_message_data_raw_data)
        *value_raw_message_data_raw_data = self->arg_raw_message_data_raw_data;

    return TRUE;
}

GType
qmi_message_wms_raw_read_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsRawReadOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_raw_read_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_raw_read_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsRawReadOutput *
qmi_message_wms_raw_read_output_ref (QmiMessageWmsRawReadOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_raw_read_output_unref (QmiMessageWmsRawReadOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_raw_message_data_raw_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageWmsRawReadOutput, self);
    }
}

static gchar *
qmi_message_wms_raw_read_input_sms_on_ims_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_READ_INPUT_TLV_SMS_ON_IMS, NULL, NULL)) == 0)
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
qmi_message_wms_raw_read_input_message_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_READ_INPUT_TLV_MESSAGE_MODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_mode_get_string ((QmiWmsMessageMode)tmp));
#elif defined  __QMI_WMS_MESSAGE_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_mode_build_string_from_mask ((QmiWmsMessageMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageMode
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
qmi_message_wms_raw_read_input_message_memory_storage_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_READ_INPUT_TLV_MESSAGE_MEMORY_STORAGE_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " storage_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_STORAGE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_storage_type_get_string ((QmiWmsStorageType)tmp));
#elif defined  __QMI_WMS_STORAGE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_storage_type_build_string_from_mask ((QmiWmsStorageType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsStorageType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " memory_index = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_message_wms_raw_read_output_raw_message_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_READ_OUTPUT_TLV_RAW_MESSAGE_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " message_tag = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_TAG_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_tag_type_get_string ((QmiWmsMessageTagType)tmp));
#elif defined  __QMI_WMS_MESSAGE_TAG_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_tag_type_build_string_from_mask ((QmiWmsMessageTagType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageTagType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " format = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_FORMAT_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_format_get_string ((QmiWmsMessageFormat)tmp));
#elif defined  __QMI_WMS_MESSAGE_FORMAT_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_format_build_string_from_mask ((QmiWmsMessageFormat)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageFormat
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " raw_data = '");
    {
        guint raw_data_i;
        guint16 raw_data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(raw_data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (raw_data_i = 0; raw_data_i < raw_data_n_items; raw_data_i++) {
            g_string_append_printf (printable, " [%u] = '", raw_data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_raw_read_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_raw_read_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_raw_read_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_RAW_READ_INPUT_TLV_SMS_ON_IMS:
            tlv_type_str = "SMS on IMS";
            translated_value = qmi_message_wms_raw_read_input_sms_on_ims_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_READ_INPUT_TLV_MESSAGE_MODE:
            tlv_type_str = "Message Mode";
            translated_value = qmi_message_wms_raw_read_input_message_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_READ_INPUT_TLV_MESSAGE_MEMORY_STORAGE_ID:
            tlv_type_str = "Message Memory Storage ID";
            translated_value = qmi_message_wms_raw_read_input_message_memory_storage_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_RAW_READ_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_RAW_READ_OUTPUT_TLV_RAW_MESSAGE_DATA:
            tlv_type_str = "Raw Message Data";
            translated_value = qmi_message_wms_raw_read_output_raw_message_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
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
message_raw_read_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Raw Read\" (0x0022)\n",
                            line_prefix);

    {
        struct message_raw_read_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_raw_read_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsRawReadOutput *
qmi_message_wms_raw_read_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsRawReadOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_RAW_READ);

    self = g_slice_new0 (QmiMessageWmsRawReadOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_READ_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_raw_read_output_unref (self);
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
                qmi_message_wms_raw_read_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_RAW_READ_OUTPUT_TLV_RAW_MESSAGE_DATA, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Raw Message Data TLV: ");
                qmi_message_wms_raw_read_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_message_wms_raw_read_output_raw_message_data_out;
                self->arg_raw_message_data_message_tag = (QmiWmsMessageTagType)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_message_wms_raw_read_output_raw_message_data_out;
                self->arg_raw_message_data_format = (QmiWmsMessageFormat)tmp;
            }
            {
                guint raw_data_i;
                guint16 raw_data_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(raw_data_n_items), error))
                    goto qmi_message_wms_raw_read_output_raw_message_data_out;

                self->arg_raw_message_data_raw_data = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)raw_data_n_items);

                for (raw_data_i = 0; raw_data_i < raw_data_n_items; raw_data_i++) {
                    guint8 raw_data_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(raw_data_aux), error))
                        goto qmi_message_wms_raw_read_output_raw_message_data_out;
                    g_array_insert_val (self->arg_raw_message_data_raw_data, raw_data_i, raw_data_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Raw Message Data' TLV", offset);
            }

            self->arg_raw_message_data_set = TRUE;

qmi_message_wms_raw_read_output_raw_message_data_out:
            if (!self->arg_raw_message_data_set) {
                qmi_message_wms_raw_read_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Modify Tag */


/* --- Input -- */

struct _QmiMessageWmsModifyTagInput {
    volatile gint ref_count;

    /* Message Mode */
    gboolean arg_message_mode_set;
    guint8 arg_message_mode;

    /* Message Tag */
    gboolean arg_message_tag_set;
    guint8 arg_message_tag_storage_type;
    guint32 arg_message_tag_memory_index;
    guint8 arg_message_tag_message_tag;
};

#define QMI_MESSAGE_WMS_MODIFY_TAG_INPUT_TLV_MESSAGE_MODE 0x10
#define QMI_MESSAGE_WMS_MODIFY_TAG_INPUT_TLV_MESSAGE_TAG 0x01

gboolean
qmi_message_wms_modify_tag_input_get_message_mode (
    QmiMessageWmsModifyTagInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Mode' was not found in the message");
        return FALSE;
    }

    if (value_message_mode)
        *value_message_mode = (QmiWmsMessageMode)(self->arg_message_mode);

    return TRUE;
}

gboolean
qmi_message_wms_modify_tag_input_set_message_mode (
    QmiMessageWmsModifyTagInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_message_mode = (guint8)(value_message_mode);
    self->arg_message_mode_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_modify_tag_input_get_message_tag (
    QmiMessageWmsModifyTagInput *self,
    QmiWmsStorageType *value_message_tag_storage_type,
    guint32 *value_message_tag_memory_index,
    QmiWmsMessageTagType *value_message_tag_message_tag,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_tag_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Tag' was not found in the message");
        return FALSE;
    }

    if (value_message_tag_storage_type)
        *value_message_tag_storage_type = (QmiWmsStorageType)(self->arg_message_tag_storage_type);
    if (value_message_tag_memory_index)
        *value_message_tag_memory_index = self->arg_message_tag_memory_index;
    if (value_message_tag_message_tag)
        *value_message_tag_message_tag = (QmiWmsMessageTagType)(self->arg_message_tag_message_tag);

    return TRUE;
}

gboolean
qmi_message_wms_modify_tag_input_set_message_tag (
    QmiMessageWmsModifyTagInput *self,
    QmiWmsStorageType value_message_tag_storage_type,
    guint32 value_message_tag_memory_index,
    QmiWmsMessageTagType value_message_tag_message_tag,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_message_tag_storage_type = (guint8)(value_message_tag_storage_type);
    self->arg_message_tag_memory_index = value_message_tag_memory_index;
    self->arg_message_tag_message_tag = (guint8)(value_message_tag_message_tag);
    self->arg_message_tag_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_modify_tag_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsModifyTagInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_modify_tag_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_modify_tag_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsModifyTagInput *
qmi_message_wms_modify_tag_input_ref (QmiMessageWmsModifyTagInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_modify_tag_input_unref (QmiMessageWmsModifyTagInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsModifyTagInput, self);
    }
}

QmiMessageWmsModifyTagInput *
qmi_message_wms_modify_tag_input_new (void)
{
    QmiMessageWmsModifyTagInput *self;

    self = g_slice_new0 (QmiMessageWmsModifyTagInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_modify_tag_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsModifyTagInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_MODIFY_TAG);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Modify Tag' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Message Mode' TLV */
    if (input->arg_message_mode_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_MODIFY_TAG_INPUT_TLV_MESSAGE_MODE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Message Mode': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_message_mode;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Message Mode': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Message Mode': ");
            return NULL;
        }
    }

    /* Try to add the 'Message Tag' TLV */
    if (input->arg_message_tag_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_MODIFY_TAG_INPUT_TLV_MESSAGE_TAG, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Message Tag': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_message_tag_storage_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Message Tag': ");
                return NULL;
            }
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_message_tag_memory_index, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Message Tag': ");
            return NULL;
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_message_tag_message_tag;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Message Tag': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Message Tag': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Message Tag' in message 'Modify Tag'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsModifyTagOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_WMS_MODIFY_TAG_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_wms_modify_tag_output_get_result (
    QmiMessageWmsModifyTagOutput *self,
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
qmi_message_wms_modify_tag_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsModifyTagOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_modify_tag_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_modify_tag_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsModifyTagOutput *
qmi_message_wms_modify_tag_output_ref (QmiMessageWmsModifyTagOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_modify_tag_output_unref (QmiMessageWmsModifyTagOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsModifyTagOutput, self);
    }
}

static gchar *
qmi_message_wms_modify_tag_input_message_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_MODIFY_TAG_INPUT_TLV_MESSAGE_MODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_mode_get_string ((QmiWmsMessageMode)tmp));
#elif defined  __QMI_WMS_MESSAGE_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_mode_build_string_from_mask ((QmiWmsMessageMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageMode
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
qmi_message_wms_modify_tag_input_message_tag_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_MODIFY_TAG_INPUT_TLV_MESSAGE_TAG, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " storage_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_STORAGE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_storage_type_get_string ((QmiWmsStorageType)tmp));
#elif defined  __QMI_WMS_STORAGE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_storage_type_build_string_from_mask ((QmiWmsStorageType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsStorageType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " memory_index = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " message_tag = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_TAG_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_tag_type_get_string ((QmiWmsMessageTagType)tmp));
#elif defined  __QMI_WMS_MESSAGE_TAG_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_tag_type_build_string_from_mask ((QmiWmsMessageTagType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageTagType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_modify_tag_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_modify_tag_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_modify_tag_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_MODIFY_TAG_INPUT_TLV_MESSAGE_MODE:
            tlv_type_str = "Message Mode";
            translated_value = qmi_message_wms_modify_tag_input_message_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_MODIFY_TAG_INPUT_TLV_MESSAGE_TAG:
            tlv_type_str = "Message Tag";
            translated_value = qmi_message_wms_modify_tag_input_message_tag_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_MODIFY_TAG_OUTPUT_TLV_RESULT:
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
message_modify_tag_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Modify Tag\" (0x0023)\n",
                            line_prefix);

    {
        struct message_modify_tag_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_modify_tag_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsModifyTagOutput *
qmi_message_wms_modify_tag_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsModifyTagOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_MODIFY_TAG);

    self = g_slice_new0 (QmiMessageWmsModifyTagOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_MODIFY_TAG_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_modify_tag_output_unref (self);
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
                qmi_message_wms_modify_tag_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Delete */


/* --- Input -- */

struct _QmiMessageWmsDeleteInput {
    volatile gint ref_count;

    /* Message Mode */
    gboolean arg_message_mode_set;
    guint8 arg_message_mode;

    /* Message Tag */
    gboolean arg_message_tag_set;
    guint8 arg_message_tag;

    /* Memory Index */
    gboolean arg_memory_index_set;
    guint32 arg_memory_index;

    /* Memory Storage */
    gboolean arg_memory_storage_set;
    guint8 arg_memory_storage;
};

#define QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MESSAGE_MODE 0x12
#define QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MESSAGE_TAG 0x11
#define QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MEMORY_INDEX 0x10
#define QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MEMORY_STORAGE 0x01

gboolean
qmi_message_wms_delete_input_get_message_mode (
    QmiMessageWmsDeleteInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Mode' was not found in the message");
        return FALSE;
    }

    if (value_message_mode)
        *value_message_mode = (QmiWmsMessageMode)(self->arg_message_mode);

    return TRUE;
}

gboolean
qmi_message_wms_delete_input_set_message_mode (
    QmiMessageWmsDeleteInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_message_mode = (guint8)(value_message_mode);
    self->arg_message_mode_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_delete_input_get_message_tag (
    QmiMessageWmsDeleteInput *self,
    QmiWmsMessageTagType *value_message_tag,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_tag_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Tag' was not found in the message");
        return FALSE;
    }

    if (value_message_tag)
        *value_message_tag = (QmiWmsMessageTagType)(self->arg_message_tag);

    return TRUE;
}

gboolean
qmi_message_wms_delete_input_set_message_tag (
    QmiMessageWmsDeleteInput *self,
    QmiWmsMessageTagType value_message_tag,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_message_tag = (guint8)(value_message_tag);
    self->arg_message_tag_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_delete_input_get_memory_index (
    QmiMessageWmsDeleteInput *self,
    guint32 *value_memory_index,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_memory_index_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Memory Index' was not found in the message");
        return FALSE;
    }

    if (value_memory_index)
        *value_memory_index = self->arg_memory_index;

    return TRUE;
}

gboolean
qmi_message_wms_delete_input_set_memory_index (
    QmiMessageWmsDeleteInput *self,
    guint32 value_memory_index,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_memory_index = value_memory_index;
    self->arg_memory_index_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_delete_input_get_memory_storage (
    QmiMessageWmsDeleteInput *self,
    QmiWmsStorageType *value_memory_storage,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_memory_storage_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Memory Storage' was not found in the message");
        return FALSE;
    }

    if (value_memory_storage)
        *value_memory_storage = (QmiWmsStorageType)(self->arg_memory_storage);

    return TRUE;
}

gboolean
qmi_message_wms_delete_input_set_memory_storage (
    QmiMessageWmsDeleteInput *self,
    QmiWmsStorageType value_memory_storage,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_memory_storage = (guint8)(value_memory_storage);
    self->arg_memory_storage_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_delete_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsDeleteInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_delete_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_delete_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsDeleteInput *
qmi_message_wms_delete_input_ref (QmiMessageWmsDeleteInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_delete_input_unref (QmiMessageWmsDeleteInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsDeleteInput, self);
    }
}

QmiMessageWmsDeleteInput *
qmi_message_wms_delete_input_new (void)
{
    QmiMessageWmsDeleteInput *self;

    self = g_slice_new0 (QmiMessageWmsDeleteInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_delete_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsDeleteInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_DELETE);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Delete' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Message Mode' TLV */
    if (input->arg_message_mode_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MESSAGE_MODE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Message Mode': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_message_mode;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Message Mode': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Message Mode': ");
            return NULL;
        }
    }

    /* Try to add the 'Message Tag' TLV */
    if (input->arg_message_tag_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MESSAGE_TAG, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Message Tag': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_message_tag;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Message Tag': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Message Tag': ");
            return NULL;
        }
    }

    /* Try to add the 'Memory Index' TLV */
    if (input->arg_memory_index_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MEMORY_INDEX, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Memory Index': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_memory_index, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Memory Index': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Memory Index': ");
            return NULL;
        }
    }

    /* Try to add the 'Memory Storage' TLV */
    if (input->arg_memory_storage_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MEMORY_STORAGE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Memory Storage': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_memory_storage;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Memory Storage': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Memory Storage': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Memory Storage' in message 'Delete'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsDeleteOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_WMS_DELETE_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_wms_delete_output_get_result (
    QmiMessageWmsDeleteOutput *self,
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
qmi_message_wms_delete_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsDeleteOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_delete_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_delete_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsDeleteOutput *
qmi_message_wms_delete_output_ref (QmiMessageWmsDeleteOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_delete_output_unref (QmiMessageWmsDeleteOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsDeleteOutput, self);
    }
}

static gchar *
qmi_message_wms_delete_input_message_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MESSAGE_MODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_mode_get_string ((QmiWmsMessageMode)tmp));
#elif defined  __QMI_WMS_MESSAGE_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_mode_build_string_from_mask ((QmiWmsMessageMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageMode
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
qmi_message_wms_delete_input_message_tag_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MESSAGE_TAG, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_TAG_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_tag_type_get_string ((QmiWmsMessageTagType)tmp));
#elif defined  __QMI_WMS_MESSAGE_TAG_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_tag_type_build_string_from_mask ((QmiWmsMessageTagType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageTagType
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
qmi_message_wms_delete_input_memory_index_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MEMORY_INDEX, NULL, NULL)) == 0)
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

static gchar *
qmi_message_wms_delete_input_memory_storage_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MEMORY_STORAGE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_STORAGE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_storage_type_get_string ((QmiWmsStorageType)tmp));
#elif defined  __QMI_WMS_STORAGE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_storage_type_build_string_from_mask ((QmiWmsStorageType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsStorageType
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

struct message_delete_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_delete_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_delete_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MESSAGE_MODE:
            tlv_type_str = "Message Mode";
            translated_value = qmi_message_wms_delete_input_message_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MESSAGE_TAG:
            tlv_type_str = "Message Tag";
            translated_value = qmi_message_wms_delete_input_message_tag_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MEMORY_INDEX:
            tlv_type_str = "Memory Index";
            translated_value = qmi_message_wms_delete_input_memory_index_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_DELETE_INPUT_TLV_MEMORY_STORAGE:
            tlv_type_str = "Memory Storage";
            translated_value = qmi_message_wms_delete_input_memory_storage_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_DELETE_OUTPUT_TLV_RESULT:
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
message_delete_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Delete\" (0x0024)\n",
                            line_prefix);

    {
        struct message_delete_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_delete_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsDeleteOutput *
qmi_message_wms_delete_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsDeleteOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_DELETE);

    self = g_slice_new0 (QmiMessageWmsDeleteOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_DELETE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_delete_output_unref (self);
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
                qmi_message_wms_delete_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Get Message Protocol */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_wms_get_message_protocol_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_GET_MESSAGE_PROTOCOL);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsGetMessageProtocolOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Message Protocol */
    gboolean arg_message_protocol_set;
    guint8 arg_message_protocol;
};

#define QMI_MESSAGE_WMS_GET_MESSAGE_PROTOCOL_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WMS_GET_MESSAGE_PROTOCOL_OUTPUT_TLV_MESSAGE_PROTOCOL 0x01

gboolean
qmi_message_wms_get_message_protocol_output_get_result (
    QmiMessageWmsGetMessageProtocolOutput *self,
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
qmi_message_wms_get_message_protocol_output_get_message_protocol (
    QmiMessageWmsGetMessageProtocolOutput *self,
    QmiWmsMessageProtocol *value_message_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_protocol_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Protocol' was not found in the message");
        return FALSE;
    }

    if (value_message_protocol)
        *value_message_protocol = (QmiWmsMessageProtocol)(self->arg_message_protocol);

    return TRUE;
}

GType
qmi_message_wms_get_message_protocol_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsGetMessageProtocolOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_get_message_protocol_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_get_message_protocol_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsGetMessageProtocolOutput *
qmi_message_wms_get_message_protocol_output_ref (QmiMessageWmsGetMessageProtocolOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_get_message_protocol_output_unref (QmiMessageWmsGetMessageProtocolOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsGetMessageProtocolOutput, self);
    }
}

static gchar *
qmi_message_wms_get_message_protocol_output_message_protocol_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_MESSAGE_PROTOCOL_OUTPUT_TLV_MESSAGE_PROTOCOL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_protocol_get_string ((QmiWmsMessageProtocol)tmp));
#elif defined  __QMI_WMS_MESSAGE_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_protocol_build_string_from_mask ((QmiWmsMessageProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageProtocol
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

struct message_get_message_protocol_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_message_protocol_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_message_protocol_context *ctx)
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
        case QMI_MESSAGE_WMS_GET_MESSAGE_PROTOCOL_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_GET_MESSAGE_PROTOCOL_OUTPUT_TLV_MESSAGE_PROTOCOL:
            tlv_type_str = "Message Protocol";
            translated_value = qmi_message_wms_get_message_protocol_output_message_protocol_get_printable (
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
message_get_message_protocol_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Message Protocol\" (0x0030)\n",
                            line_prefix);

    {
        struct message_get_message_protocol_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_message_protocol_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsGetMessageProtocolOutput *
qmi_message_wms_get_message_protocol_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsGetMessageProtocolOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_GET_MESSAGE_PROTOCOL);

    self = g_slice_new0 (QmiMessageWmsGetMessageProtocolOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_MESSAGE_PROTOCOL_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_get_message_protocol_output_unref (self);
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
                qmi_message_wms_get_message_protocol_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_MESSAGE_PROTOCOL_OUTPUT_TLV_MESSAGE_PROTOCOL, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Message Protocol TLV: ");
                qmi_message_wms_get_message_protocol_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_message_wms_get_message_protocol_output_message_protocol_out;
                self->arg_message_protocol = (QmiWmsMessageProtocol)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Message Protocol' TLV", offset);
            }

            self->arg_message_protocol_set = TRUE;

qmi_message_wms_get_message_protocol_output_message_protocol_out:
            if (!self->arg_message_protocol_set) {
                qmi_message_wms_get_message_protocol_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS List Messages */


/* --- Input -- */

struct _QmiMessageWmsListMessagesInput {
    volatile gint ref_count;

    /* Message Mode */
    gboolean arg_message_mode_set;
    guint8 arg_message_mode;

    /* Message Tag */
    gboolean arg_message_tag_set;
    guint8 arg_message_tag;

    /* Storage Type */
    gboolean arg_storage_type_set;
    guint8 arg_storage_type;
};

#define QMI_MESSAGE_WMS_LIST_MESSAGES_INPUT_TLV_MESSAGE_MODE 0x12
#define QMI_MESSAGE_WMS_LIST_MESSAGES_INPUT_TLV_MESSAGE_TAG 0x11
#define QMI_MESSAGE_WMS_LIST_MESSAGES_INPUT_TLV_STORAGE_TYPE 0x01

gboolean
qmi_message_wms_list_messages_input_get_message_mode (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Mode' was not found in the message");
        return FALSE;
    }

    if (value_message_mode)
        *value_message_mode = (QmiWmsMessageMode)(self->arg_message_mode);

    return TRUE;
}

gboolean
qmi_message_wms_list_messages_input_set_message_mode (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_message_mode = (guint8)(value_message_mode);
    self->arg_message_mode_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_list_messages_input_get_message_tag (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsMessageTagType *value_message_tag,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_tag_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Tag' was not found in the message");
        return FALSE;
    }

    if (value_message_tag)
        *value_message_tag = (QmiWmsMessageTagType)(self->arg_message_tag);

    return TRUE;
}

gboolean
qmi_message_wms_list_messages_input_set_message_tag (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsMessageTagType value_message_tag,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_message_tag = (guint8)(value_message_tag);
    self->arg_message_tag_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_list_messages_input_get_storage_type (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsStorageType *value_storage_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_storage_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Storage Type' was not found in the message");
        return FALSE;
    }

    if (value_storage_type)
        *value_storage_type = (QmiWmsStorageType)(self->arg_storage_type);

    return TRUE;
}

gboolean
qmi_message_wms_list_messages_input_set_storage_type (
    QmiMessageWmsListMessagesInput *self,
    QmiWmsStorageType value_storage_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_storage_type = (guint8)(value_storage_type);
    self->arg_storage_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_list_messages_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsListMessagesInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_list_messages_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_list_messages_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsListMessagesInput *
qmi_message_wms_list_messages_input_ref (QmiMessageWmsListMessagesInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_list_messages_input_unref (QmiMessageWmsListMessagesInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsListMessagesInput, self);
    }
}

QmiMessageWmsListMessagesInput *
qmi_message_wms_list_messages_input_new (void)
{
    QmiMessageWmsListMessagesInput *self;

    self = g_slice_new0 (QmiMessageWmsListMessagesInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_list_messages_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsListMessagesInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_LIST_MESSAGES);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'List Messages' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Message Mode' TLV */
    if (input->arg_message_mode_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_LIST_MESSAGES_INPUT_TLV_MESSAGE_MODE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Message Mode': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_message_mode;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Message Mode': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Message Mode': ");
            return NULL;
        }
    }

    /* Try to add the 'Message Tag' TLV */
    if (input->arg_message_tag_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_LIST_MESSAGES_INPUT_TLV_MESSAGE_TAG, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Message Tag': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_message_tag;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Message Tag': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Message Tag': ");
            return NULL;
        }
    }

    /* Try to add the 'Storage Type' TLV */
    if (input->arg_storage_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_LIST_MESSAGES_INPUT_TLV_STORAGE_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Storage Type': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_storage_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Storage Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Storage Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Storage Type' in message 'List Messages'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

static void
__qmi_message_wms_list_messages_output_message_list_element_free (QmiMessageWmsListMessagesOutputMessageListElement *value)
{
    g_slice_free (QmiMessageWmsListMessagesOutputMessageListElement, value);
}

static QmiMessageWmsListMessagesOutputMessageListElement *
__qmi_message_wms_list_messages_output_message_list_element_new (void)
{
    return g_slice_new0 (QmiMessageWmsListMessagesOutputMessageListElement);
}

static QmiMessageWmsListMessagesOutputMessageListElement *
__qmi_message_wms_list_messages_output_message_list_element_copy (const QmiMessageWmsListMessagesOutputMessageListElement *value)
{
    QmiMessageWmsListMessagesOutputMessageListElement *copy;

    copy = __qmi_message_wms_list_messages_output_message_list_element_new ();
    copy->memory_index = value->memory_index;
    copy->message_tag = value->message_tag;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageWmsListMessagesOutputMessageListElement, qmi_message_wms_list_messages_output_message_list_element, (GBoxedCopyFunc)__qmi_message_wms_list_messages_output_message_list_element_copy, (GBoxedFreeFunc)__qmi_message_wms_list_messages_output_message_list_element_free)

struct _QmiMessageWmsListMessagesOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Message List */
    gboolean arg_message_list_set;
    GArray *arg_message_list;
    GPtrArray *arg_message_list_ptr;
};

#define QMI_MESSAGE_WMS_LIST_MESSAGES_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WMS_LIST_MESSAGES_OUTPUT_TLV_MESSAGE_LIST 0x01

gboolean
qmi_message_wms_list_messages_output_get_result (
    QmiMessageWmsListMessagesOutput *self,
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
qmi_message_wms_list_messages_output_get_message_list (
    QmiMessageWmsListMessagesOutput *self,
    GArray **value_message_list,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message List' was not found in the message");
        return FALSE;
    }

    if (value_message_list)
        *value_message_list = self->arg_message_list;

    return TRUE;
}

gboolean
qmi_message_wms_list_messages_output_get_message_list_gir (
    QmiMessageWmsListMessagesOutput *self,
    GPtrArray **value_message_list_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message List' was not found in the message");
        return FALSE;
    }

    if (value_message_list_ptr) {
        if (!self->arg_message_list_ptr) {
            {
                guint message_list_i;

                self->arg_message_list_ptr = g_ptr_array_new_full (self->arg_message_list->len, (GDestroyNotify)__qmi_message_wms_list_messages_output_message_list_element_free);
                for (message_list_i = 0; message_list_i < self->arg_message_list->len; message_list_i++) {
                    QmiMessageWmsListMessagesOutputMessageListElement *message_list_aux_from;
                    QmiMessageWmsListMessagesOutputMessageListElement *message_list_aux_to;

                    message_list_aux_from = &g_array_index (self->arg_message_list, QmiMessageWmsListMessagesOutputMessageListElement, message_list_i);

                    message_list_aux_to = __qmi_message_wms_list_messages_output_message_list_element_new ();
                    message_list_aux_to->memory_index = (*message_list_aux_from).memory_index;
                    message_list_aux_to->message_tag = (*message_list_aux_from).message_tag;

                    g_ptr_array_add (self->arg_message_list_ptr, message_list_aux_to);
                }
            }
        }
        *value_message_list_ptr = self->arg_message_list_ptr;
    }
    return TRUE;
}

GType
qmi_message_wms_list_messages_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsListMessagesOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_list_messages_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_list_messages_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsListMessagesOutput *
qmi_message_wms_list_messages_output_ref (QmiMessageWmsListMessagesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_list_messages_output_unref (QmiMessageWmsListMessagesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_message_list, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_message_list, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageWmsListMessagesOutput, self);
    }
}

static gchar *
qmi_message_wms_list_messages_input_message_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_LIST_MESSAGES_INPUT_TLV_MESSAGE_MODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_mode_get_string ((QmiWmsMessageMode)tmp));
#elif defined  __QMI_WMS_MESSAGE_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_mode_build_string_from_mask ((QmiWmsMessageMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageMode
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
qmi_message_wms_list_messages_input_message_tag_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_LIST_MESSAGES_INPUT_TLV_MESSAGE_TAG, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_TAG_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_tag_type_get_string ((QmiWmsMessageTagType)tmp));
#elif defined  __QMI_WMS_MESSAGE_TAG_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_tag_type_build_string_from_mask ((QmiWmsMessageTagType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageTagType
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
qmi_message_wms_list_messages_input_storage_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_LIST_MESSAGES_INPUT_TLV_STORAGE_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_STORAGE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_storage_type_get_string ((QmiWmsStorageType)tmp));
#elif defined  __QMI_WMS_STORAGE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_storage_type_build_string_from_mask ((QmiWmsStorageType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsStorageType
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
qmi_message_wms_list_messages_output_message_list_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_LIST_MESSAGES_OUTPUT_TLV_MESSAGE_LIST, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint message_list_i;
        guint32 message_list_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(message_list_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (message_list_i = 0; message_list_i < message_list_n_items; message_list_i++) {
            g_string_append_printf (printable, " [%u] = '", message_list_i);
            g_string_append (printable, "[");
            g_string_append (printable, " memory_index = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " message_tag = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_WMS_MESSAGE_TAG_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_wms_message_tag_type_get_string ((QmiWmsMessageTagType)tmp));
#elif defined  __QMI_WMS_MESSAGE_TAG_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_wms_message_tag_type_build_string_from_mask ((QmiWmsMessageTagType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiWmsMessageTagType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " ]");
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
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

struct message_list_messages_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_list_messages_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_list_messages_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_LIST_MESSAGES_INPUT_TLV_MESSAGE_MODE:
            tlv_type_str = "Message Mode";
            translated_value = qmi_message_wms_list_messages_input_message_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_LIST_MESSAGES_INPUT_TLV_MESSAGE_TAG:
            tlv_type_str = "Message Tag";
            translated_value = qmi_message_wms_list_messages_input_message_tag_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_LIST_MESSAGES_INPUT_TLV_STORAGE_TYPE:
            tlv_type_str = "Storage Type";
            translated_value = qmi_message_wms_list_messages_input_storage_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_LIST_MESSAGES_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_LIST_MESSAGES_OUTPUT_TLV_MESSAGE_LIST:
            tlv_type_str = "Message List";
            translated_value = qmi_message_wms_list_messages_output_message_list_get_printable (
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
message_list_messages_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"List Messages\" (0x0031)\n",
                            line_prefix);

    {
        struct message_list_messages_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_list_messages_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsListMessagesOutput *
qmi_message_wms_list_messages_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsListMessagesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_LIST_MESSAGES);

    self = g_slice_new0 (QmiMessageWmsListMessagesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_LIST_MESSAGES_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_list_messages_output_unref (self);
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
                qmi_message_wms_list_messages_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_LIST_MESSAGES_OUTPUT_TLV_MESSAGE_LIST, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Message List TLV: ");
                qmi_message_wms_list_messages_output_unref (self);
                return NULL;
            }
            {
                guint message_list_i;
                guint32 message_list_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(message_list_n_items), error))
                    goto qmi_message_wms_list_messages_output_message_list_out;

                self->arg_message_list = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessageWmsListMessagesOutputMessageListElement),
                    (guint)message_list_n_items);

                for (message_list_i = 0; message_list_i < message_list_n_items; message_list_i++) {
                    QmiMessageWmsListMessagesOutputMessageListElement message_list_aux;

                    if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(message_list_aux.memory_index), error))
                        goto qmi_message_wms_list_messages_output_message_list_out;
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                            goto qmi_message_wms_list_messages_output_message_list_out;
                        message_list_aux.message_tag = (QmiWmsMessageTagType)tmp;
                    }
                    g_array_insert_val (self->arg_message_list, message_list_i, message_list_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Message List' TLV", offset);
            }

            self->arg_message_list_set = TRUE;

qmi_message_wms_list_messages_output_message_list_out:
            if (!self->arg_message_list_set) {
                qmi_message_wms_list_messages_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Set Routes */


/* --- Input -- */

static void
__qmi_message_wms_set_routes_input_route_list_element_free (QmiMessageWmsSetRoutesInputRouteListElement *value)
{
    g_slice_free (QmiMessageWmsSetRoutesInputRouteListElement, value);
}

static QmiMessageWmsSetRoutesInputRouteListElement *
__qmi_message_wms_set_routes_input_route_list_element_new (void)
{
    return g_slice_new0 (QmiMessageWmsSetRoutesInputRouteListElement);
}

static QmiMessageWmsSetRoutesInputRouteListElement *
__qmi_message_wms_set_routes_input_route_list_element_copy (const QmiMessageWmsSetRoutesInputRouteListElement *value)
{
    QmiMessageWmsSetRoutesInputRouteListElement *copy;

    copy = __qmi_message_wms_set_routes_input_route_list_element_new ();
    copy->message_type = value->message_type;
    copy->message_class = value->message_class;
    copy->storage = value->storage;
    copy->receipt_action = value->receipt_action;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageWmsSetRoutesInputRouteListElement, qmi_message_wms_set_routes_input_route_list_element, (GBoxedCopyFunc)__qmi_message_wms_set_routes_input_route_list_element_copy, (GBoxedFreeFunc)__qmi_message_wms_set_routes_input_route_list_element_free)

struct _QmiMessageWmsSetRoutesInput {
    volatile gint ref_count;

    /* Transfer Status Report */
    gboolean arg_transfer_status_report_set;
    guint8 arg_transfer_status_report;

    /* Route List */
    gboolean arg_route_list_set;
    GArray *arg_route_list;
    GPtrArray *arg_route_list_ptr;
};

#define QMI_MESSAGE_WMS_SET_ROUTES_INPUT_TLV_TRANSFER_STATUS_REPORT 0x10
#define QMI_MESSAGE_WMS_SET_ROUTES_INPUT_TLV_ROUTE_LIST 0x01

gboolean
qmi_message_wms_set_routes_input_get_transfer_status_report (
    QmiMessageWmsSetRoutesInput *self,
    QmiWmsTransferIndication *value_transfer_status_report,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_transfer_status_report_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Transfer Status Report' was not found in the message");
        return FALSE;
    }

    if (value_transfer_status_report)
        *value_transfer_status_report = (QmiWmsTransferIndication)(self->arg_transfer_status_report);

    return TRUE;
}

gboolean
qmi_message_wms_set_routes_input_set_transfer_status_report (
    QmiMessageWmsSetRoutesInput *self,
    QmiWmsTransferIndication value_transfer_status_report,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_transfer_status_report = (guint8)(value_transfer_status_report);
    self->arg_transfer_status_report_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_set_routes_input_get_route_list (
    QmiMessageWmsSetRoutesInput *self,
    GArray **value_route_list,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_route_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Route List' was not found in the message");
        return FALSE;
    }

    if (value_route_list)
        *value_route_list = self->arg_route_list;

    return TRUE;
}

gboolean
qmi_message_wms_set_routes_input_get_route_list_gir (
    QmiMessageWmsSetRoutesInput *self,
    GPtrArray **value_route_list_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_route_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Route List' was not found in the message");
        return FALSE;
    }

    if (value_route_list_ptr) {
        if (!self->arg_route_list_ptr) {
            {
                guint route_list_i;

                self->arg_route_list_ptr = g_ptr_array_new_full (self->arg_route_list->len, (GDestroyNotify)__qmi_message_wms_set_routes_input_route_list_element_free);
                for (route_list_i = 0; route_list_i < self->arg_route_list->len; route_list_i++) {
                    QmiMessageWmsSetRoutesInputRouteListElement *route_list_aux_from;
                    QmiMessageWmsSetRoutesInputRouteListElement *route_list_aux_to;

                    route_list_aux_from = &g_array_index (self->arg_route_list, QmiMessageWmsSetRoutesInputRouteListElement, route_list_i);

                    route_list_aux_to = __qmi_message_wms_set_routes_input_route_list_element_new ();
                    route_list_aux_to->message_type = (*route_list_aux_from).message_type;
                    route_list_aux_to->message_class = (*route_list_aux_from).message_class;
                    route_list_aux_to->storage = (*route_list_aux_from).storage;
                    route_list_aux_to->receipt_action = (*route_list_aux_from).receipt_action;

                    g_ptr_array_add (self->arg_route_list_ptr, route_list_aux_to);
                }
            }
        }
        *value_route_list_ptr = self->arg_route_list_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_wms_set_routes_input_set_route_list (
    QmiMessageWmsSetRoutesInput *self,
    GArray *value_route_list,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_route_list, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_route_list, (GDestroyNotify)g_ptr_array_unref);
    self->arg_route_list = g_array_ref (value_route_list);
    self->arg_route_list_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_set_routes_input_set_route_list_gir (
    QmiMessageWmsSetRoutesInput *self,
    GPtrArray *value_route_list_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_route_list, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_route_list_ptr, (GDestroyNotify)g_ptr_array_unref);
    {
        guint route_list_i;

        self->arg_route_list = g_array_sized_new (FALSE, FALSE, sizeof (QmiMessageWmsSetRoutesInputRouteListElement), value_route_list_ptr->len);
        for (route_list_i = 0; route_list_i < value_route_list_ptr->len; route_list_i++) {
            QmiMessageWmsSetRoutesInputRouteListElement route_list_aux_to;
            QmiMessageWmsSetRoutesInputRouteListElement *route_list_aux_from;

            route_list_aux_from = g_ptr_array_index (value_route_list_ptr, route_list_i);

            route_list_aux_to.message_type = route_list_aux_from->message_type;
            route_list_aux_to.message_class = route_list_aux_from->message_class;
            route_list_aux_to.storage = route_list_aux_from->storage;
            route_list_aux_to.receipt_action = route_list_aux_from->receipt_action;

            g_array_append_val (self->arg_route_list, route_list_aux_to);
        }
    }
    self->arg_route_list_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_set_routes_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsSetRoutesInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_set_routes_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_set_routes_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsSetRoutesInput *
qmi_message_wms_set_routes_input_ref (QmiMessageWmsSetRoutesInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_set_routes_input_unref (QmiMessageWmsSetRoutesInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_route_list, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_route_list, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageWmsSetRoutesInput, self);
    }
}

QmiMessageWmsSetRoutesInput *
qmi_message_wms_set_routes_input_new (void)
{
    QmiMessageWmsSetRoutesInput *self;

    self = g_slice_new0 (QmiMessageWmsSetRoutesInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_set_routes_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsSetRoutesInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_SET_ROUTES);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set Routes' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Transfer Status Report' TLV */
    if (input->arg_transfer_status_report_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_SET_ROUTES_INPUT_TLV_TRANSFER_STATUS_REPORT, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Transfer Status Report': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_transfer_status_report;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Transfer Status Report': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Transfer Status Report': ");
            return NULL;
        }
    }

    /* Try to add the 'Route List' TLV */
    if (input->arg_route_list_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_SET_ROUTES_INPUT_TLV_ROUTE_LIST, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Route List': ");
            return NULL;
        }

        {
            guint route_list_i;
            guint16 route_list_n_items;

            /* Write the number of items in the array first */
            route_list_n_items = (guint16) input->arg_route_list->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, route_list_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Route List': ");
                return NULL;
            }

            for (route_list_i = 0; route_list_i < input->arg_route_list->len; route_list_i++) {
                {
                    guint8 tmp;

                    tmp = (guint8) g_array_index (input->arg_route_list, QmiMessageWmsSetRoutesInputRouteListElement,route_list_i).message_type;
                    /* Write the guint8 variable to the buffer */
                    if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                        g_prefix_error (error, "Cannot write enum in TLV 'Route List': ");
                        return NULL;
                    }
                }
                {
                    guint8 tmp;

                    tmp = (guint8) g_array_index (input->arg_route_list, QmiMessageWmsSetRoutesInputRouteListElement,route_list_i).message_class;
                    /* Write the guint8 variable to the buffer */
                    if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                        g_prefix_error (error, "Cannot write enum in TLV 'Route List': ");
                        return NULL;
                    }
                }
                {
                    guint8 tmp;

                    tmp = (guint8) g_array_index (input->arg_route_list, QmiMessageWmsSetRoutesInputRouteListElement,route_list_i).storage;
                    /* Write the guint8 variable to the buffer */
                    if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                        g_prefix_error (error, "Cannot write enum in TLV 'Route List': ");
                        return NULL;
                    }
                }
                {
                    guint8 tmp;

                    tmp = (guint8) g_array_index (input->arg_route_list, QmiMessageWmsSetRoutesInputRouteListElement,route_list_i).receipt_action;
                    /* Write the guint8 variable to the buffer */
                    if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                        g_prefix_error (error, "Cannot write enum in TLV 'Route List': ");
                        return NULL;
                    }
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Route List': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Route List' in message 'Set Routes'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsSetRoutesOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_WMS_SET_ROUTES_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_wms_set_routes_output_get_result (
    QmiMessageWmsSetRoutesOutput *self,
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
qmi_message_wms_set_routes_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsSetRoutesOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_set_routes_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_set_routes_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsSetRoutesOutput *
qmi_message_wms_set_routes_output_ref (QmiMessageWmsSetRoutesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_set_routes_output_unref (QmiMessageWmsSetRoutesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsSetRoutesOutput, self);
    }
}

static gchar *
qmi_message_wms_set_routes_input_transfer_status_report_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SET_ROUTES_INPUT_TLV_TRANSFER_STATUS_REPORT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_TRANSFER_INDICATION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_transfer_indication_get_string ((QmiWmsTransferIndication)tmp));
#elif defined  __QMI_WMS_TRANSFER_INDICATION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_transfer_indication_build_string_from_mask ((QmiWmsTransferIndication)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsTransferIndication
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
qmi_message_wms_set_routes_input_route_list_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SET_ROUTES_INPUT_TLV_ROUTE_LIST, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint route_list_i;
        guint16 route_list_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(route_list_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (route_list_i = 0; route_list_i < route_list_n_items; route_list_i++) {
            g_string_append_printf (printable, " [%u] = '", route_list_i);
            g_string_append (printable, "[");
            g_string_append (printable, " message_type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_WMS_MESSAGE_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_wms_message_type_get_string ((QmiWmsMessageType)tmp));
#elif defined  __QMI_WMS_MESSAGE_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_wms_message_type_build_string_from_mask ((QmiWmsMessageType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiWmsMessageType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " message_class = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_WMS_MESSAGE_CLASS_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_wms_message_class_get_string ((QmiWmsMessageClass)tmp));
#elif defined  __QMI_WMS_MESSAGE_CLASS_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_wms_message_class_build_string_from_mask ((QmiWmsMessageClass)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiWmsMessageClass
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " storage = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_WMS_STORAGE_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_wms_storage_type_get_string ((QmiWmsStorageType)tmp));
#elif defined  __QMI_WMS_STORAGE_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_wms_storage_type_build_string_from_mask ((QmiWmsStorageType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiWmsStorageType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " receipt_action = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_WMS_RECEIPT_ACTION_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_wms_receipt_action_get_string ((QmiWmsReceiptAction)tmp));
#elif defined  __QMI_WMS_RECEIPT_ACTION_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_wms_receipt_action_build_string_from_mask ((QmiWmsReceiptAction)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiWmsReceiptAction
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " ]");
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
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

struct message_set_routes_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_routes_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_routes_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_SET_ROUTES_INPUT_TLV_TRANSFER_STATUS_REPORT:
            tlv_type_str = "Transfer Status Report";
            translated_value = qmi_message_wms_set_routes_input_transfer_status_report_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_SET_ROUTES_INPUT_TLV_ROUTE_LIST:
            tlv_type_str = "Route List";
            translated_value = qmi_message_wms_set_routes_input_route_list_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_SET_ROUTES_OUTPUT_TLV_RESULT:
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
message_set_routes_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Routes\" (0x0032)\n",
                            line_prefix);

    {
        struct message_set_routes_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_routes_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsSetRoutesOutput *
qmi_message_wms_set_routes_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsSetRoutesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_SET_ROUTES);

    self = g_slice_new0 (QmiMessageWmsSetRoutesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SET_ROUTES_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_set_routes_output_unref (self);
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
                qmi_message_wms_set_routes_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Get Routes */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_wms_get_routes_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_GET_ROUTES);

    return g_steal_pointer (&self);
}

/* --- Output -- */

static void
__qmi_message_wms_get_routes_output_route_list_element_free (QmiMessageWmsGetRoutesOutputRouteListElement *value)
{
    g_slice_free (QmiMessageWmsGetRoutesOutputRouteListElement, value);
}

static QmiMessageWmsGetRoutesOutputRouteListElement *
__qmi_message_wms_get_routes_output_route_list_element_new (void)
{
    return g_slice_new0 (QmiMessageWmsGetRoutesOutputRouteListElement);
}

static QmiMessageWmsGetRoutesOutputRouteListElement *
__qmi_message_wms_get_routes_output_route_list_element_copy (const QmiMessageWmsGetRoutesOutputRouteListElement *value)
{
    QmiMessageWmsGetRoutesOutputRouteListElement *copy;

    copy = __qmi_message_wms_get_routes_output_route_list_element_new ();
    copy->message_type = value->message_type;
    copy->message_class = value->message_class;
    copy->storage = value->storage;
    copy->receipt_action = value->receipt_action;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageWmsGetRoutesOutputRouteListElement, qmi_message_wms_get_routes_output_route_list_element, (GBoxedCopyFunc)__qmi_message_wms_get_routes_output_route_list_element_copy, (GBoxedFreeFunc)__qmi_message_wms_get_routes_output_route_list_element_free)

struct _QmiMessageWmsGetRoutesOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Route List */
    gboolean arg_route_list_set;
    GArray *arg_route_list;
    GPtrArray *arg_route_list_ptr;

    /* Transfer Status Report */
    gboolean arg_transfer_status_report_set;
    guint8 arg_transfer_status_report;
};

#define QMI_MESSAGE_WMS_GET_ROUTES_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WMS_GET_ROUTES_OUTPUT_TLV_ROUTE_LIST 0x01
#define QMI_MESSAGE_WMS_GET_ROUTES_OUTPUT_TLV_TRANSFER_STATUS_REPORT 0x10

gboolean
qmi_message_wms_get_routes_output_get_result (
    QmiMessageWmsGetRoutesOutput *self,
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
qmi_message_wms_get_routes_output_get_route_list (
    QmiMessageWmsGetRoutesOutput *self,
    GArray **value_route_list,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_route_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Route List' was not found in the message");
        return FALSE;
    }

    if (value_route_list)
        *value_route_list = self->arg_route_list;

    return TRUE;
}

gboolean
qmi_message_wms_get_routes_output_get_route_list_gir (
    QmiMessageWmsGetRoutesOutput *self,
    GPtrArray **value_route_list_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_route_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Route List' was not found in the message");
        return FALSE;
    }

    if (value_route_list_ptr) {
        if (!self->arg_route_list_ptr) {
            {
                guint route_list_i;

                self->arg_route_list_ptr = g_ptr_array_new_full (self->arg_route_list->len, (GDestroyNotify)__qmi_message_wms_get_routes_output_route_list_element_free);
                for (route_list_i = 0; route_list_i < self->arg_route_list->len; route_list_i++) {
                    QmiMessageWmsGetRoutesOutputRouteListElement *route_list_aux_from;
                    QmiMessageWmsGetRoutesOutputRouteListElement *route_list_aux_to;

                    route_list_aux_from = &g_array_index (self->arg_route_list, QmiMessageWmsGetRoutesOutputRouteListElement, route_list_i);

                    route_list_aux_to = __qmi_message_wms_get_routes_output_route_list_element_new ();
                    route_list_aux_to->message_type = (*route_list_aux_from).message_type;
                    route_list_aux_to->message_class = (*route_list_aux_from).message_class;
                    route_list_aux_to->storage = (*route_list_aux_from).storage;
                    route_list_aux_to->receipt_action = (*route_list_aux_from).receipt_action;

                    g_ptr_array_add (self->arg_route_list_ptr, route_list_aux_to);
                }
            }
        }
        *value_route_list_ptr = self->arg_route_list_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_wms_get_routes_output_get_transfer_status_report (
    QmiMessageWmsGetRoutesOutput *self,
    QmiWmsTransferIndication *value_transfer_status_report,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_transfer_status_report_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Transfer Status Report' was not found in the message");
        return FALSE;
    }

    if (value_transfer_status_report)
        *value_transfer_status_report = (QmiWmsTransferIndication)(self->arg_transfer_status_report);

    return TRUE;
}

GType
qmi_message_wms_get_routes_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsGetRoutesOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_get_routes_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_get_routes_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsGetRoutesOutput *
qmi_message_wms_get_routes_output_ref (QmiMessageWmsGetRoutesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_get_routes_output_unref (QmiMessageWmsGetRoutesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_route_list, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_route_list, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageWmsGetRoutesOutput, self);
    }
}

static gchar *
qmi_message_wms_get_routes_output_route_list_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_ROUTES_OUTPUT_TLV_ROUTE_LIST, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint route_list_i;
        guint16 route_list_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(route_list_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (route_list_i = 0; route_list_i < route_list_n_items; route_list_i++) {
            g_string_append_printf (printable, " [%u] = '", route_list_i);
            g_string_append (printable, "[");
            g_string_append (printable, " message_type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_WMS_MESSAGE_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_wms_message_type_get_string ((QmiWmsMessageType)tmp));
#elif defined  __QMI_WMS_MESSAGE_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_wms_message_type_build_string_from_mask ((QmiWmsMessageType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiWmsMessageType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " message_class = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_WMS_MESSAGE_CLASS_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_wms_message_class_get_string ((QmiWmsMessageClass)tmp));
#elif defined  __QMI_WMS_MESSAGE_CLASS_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_wms_message_class_build_string_from_mask ((QmiWmsMessageClass)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiWmsMessageClass
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " storage = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_WMS_STORAGE_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_wms_storage_type_get_string ((QmiWmsStorageType)tmp));
#elif defined  __QMI_WMS_STORAGE_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_wms_storage_type_build_string_from_mask ((QmiWmsStorageType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiWmsStorageType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " receipt_action = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_WMS_RECEIPT_ACTION_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_wms_receipt_action_get_string ((QmiWmsReceiptAction)tmp));
#elif defined  __QMI_WMS_RECEIPT_ACTION_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_wms_receipt_action_build_string_from_mask ((QmiWmsReceiptAction)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiWmsReceiptAction
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " ]");
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
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
qmi_message_wms_get_routes_output_transfer_status_report_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_ROUTES_OUTPUT_TLV_TRANSFER_STATUS_REPORT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_TRANSFER_INDICATION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_transfer_indication_get_string ((QmiWmsTransferIndication)tmp));
#elif defined  __QMI_WMS_TRANSFER_INDICATION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_transfer_indication_build_string_from_mask ((QmiWmsTransferIndication)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsTransferIndication
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

struct message_get_routes_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_routes_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_routes_context *ctx)
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
        case QMI_MESSAGE_WMS_GET_ROUTES_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_GET_ROUTES_OUTPUT_TLV_ROUTE_LIST:
            tlv_type_str = "Route List";
            translated_value = qmi_message_wms_get_routes_output_route_list_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_GET_ROUTES_OUTPUT_TLV_TRANSFER_STATUS_REPORT:
            tlv_type_str = "Transfer Status Report";
            translated_value = qmi_message_wms_get_routes_output_transfer_status_report_get_printable (
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
message_get_routes_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Routes\" (0x0033)\n",
                            line_prefix);

    {
        struct message_get_routes_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_routes_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsGetRoutesOutput *
qmi_message_wms_get_routes_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsGetRoutesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_GET_ROUTES);

    self = g_slice_new0 (QmiMessageWmsGetRoutesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_ROUTES_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_get_routes_output_unref (self);
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
                qmi_message_wms_get_routes_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_ROUTES_OUTPUT_TLV_ROUTE_LIST, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Route List TLV: ");
                qmi_message_wms_get_routes_output_unref (self);
                return NULL;
            }
            {
                guint route_list_i;
                guint16 route_list_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(route_list_n_items), error))
                    goto qmi_message_wms_get_routes_output_route_list_out;

                self->arg_route_list = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessageWmsGetRoutesOutputRouteListElement),
                    (guint)route_list_n_items);

                for (route_list_i = 0; route_list_i < route_list_n_items; route_list_i++) {
                    QmiMessageWmsGetRoutesOutputRouteListElement route_list_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                            goto qmi_message_wms_get_routes_output_route_list_out;
                        route_list_aux.message_type = (QmiWmsMessageType)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                            goto qmi_message_wms_get_routes_output_route_list_out;
                        route_list_aux.message_class = (QmiWmsMessageClass)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                            goto qmi_message_wms_get_routes_output_route_list_out;
                        route_list_aux.storage = (QmiWmsStorageType)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                            goto qmi_message_wms_get_routes_output_route_list_out;
                        route_list_aux.receipt_action = (QmiWmsReceiptAction)tmp;
                    }
                    g_array_insert_val (self->arg_route_list, route_list_i, route_list_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Route List' TLV", offset);
            }

            self->arg_route_list_set = TRUE;

qmi_message_wms_get_routes_output_route_list_out:
            if (!self->arg_route_list_set) {
                qmi_message_wms_get_routes_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_ROUTES_OUTPUT_TLV_TRANSFER_STATUS_REPORT, NULL, NULL)) == 0) {
                goto qmi_message_wms_get_routes_output_transfer_status_report_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_wms_get_routes_output_transfer_status_report_out;
                self->arg_transfer_status_report = (QmiWmsTransferIndication)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Transfer Status Report' TLV", offset);
            }

            self->arg_transfer_status_report_set = TRUE;

qmi_message_wms_get_routes_output_transfer_status_report_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Send Ack */


/* --- Input -- */

struct _QmiMessageWmsSendAckInput {
    volatile gint ref_count;

    /* SMS on IMS */
    gboolean arg_sms_on_ims_set;
    guint8 arg_sms_on_ims;

    /* 3GPP Failure Information */
    gboolean arg_3gpp_failure_information_set;
    guint8 arg_3gpp_failure_information_rp_cause;
    guint8 arg_3gpp_failure_information_tp_cause;

    /* 3GPP2 Failure Information */
    gboolean arg_3gpp2_failure_information_set;
    guint8 arg_3gpp2_failure_information_error_class;
    guint8 arg_3gpp2_failure_information_cause_code;

    /* Information */
    gboolean arg_information_set;
    guint32 arg_information_transaction_id;
    guint8 arg_information_message_protocol;
    guint8 arg_information_success;
};

#define QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_SMS_ON_IMS 0x12
#define QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_3GPP_FAILURE_INFORMATION 0x11
#define QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_3GPP2_FAILURE_INFORMATION 0x10
#define QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_INFORMATION 0x01

gboolean
qmi_message_wms_send_ack_input_get_sms_on_ims (
    QmiMessageWmsSendAckInput *self,
    gboolean *value_sms_on_ims,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_sms_on_ims_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'SMS on IMS' was not found in the message");
        return FALSE;
    }

    if (value_sms_on_ims)
        *value_sms_on_ims = (gboolean)(self->arg_sms_on_ims);

    return TRUE;
}

gboolean
qmi_message_wms_send_ack_input_set_sms_on_ims (
    QmiMessageWmsSendAckInput *self,
    gboolean value_sms_on_ims,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_sms_on_ims = (guint8)(value_sms_on_ims);
    self->arg_sms_on_ims_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_send_ack_input_get_3gpp_failure_information (
    QmiMessageWmsSendAckInput *self,
    QmiWmsGsmUmtsRpCause *value_3gpp_failure_information_rp_cause,
    QmiWmsGsmUmtsTpCause *value_3gpp_failure_information_tp_cause,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_3gpp_failure_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field '3GPP Failure Information' was not found in the message");
        return FALSE;
    }

    if (value_3gpp_failure_information_rp_cause)
        *value_3gpp_failure_information_rp_cause = (QmiWmsGsmUmtsRpCause)(self->arg_3gpp_failure_information_rp_cause);
    if (value_3gpp_failure_information_tp_cause)
        *value_3gpp_failure_information_tp_cause = (QmiWmsGsmUmtsTpCause)(self->arg_3gpp_failure_information_tp_cause);

    return TRUE;
}

gboolean
qmi_message_wms_send_ack_input_set_3gpp_failure_information (
    QmiMessageWmsSendAckInput *self,
    QmiWmsGsmUmtsRpCause value_3gpp_failure_information_rp_cause,
    QmiWmsGsmUmtsTpCause value_3gpp_failure_information_tp_cause,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_3gpp_failure_information_rp_cause = (guint8)(value_3gpp_failure_information_rp_cause);
    self->arg_3gpp_failure_information_tp_cause = (guint8)(value_3gpp_failure_information_tp_cause);
    self->arg_3gpp_failure_information_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_send_ack_input_get_3gpp2_failure_information (
    QmiMessageWmsSendAckInput *self,
    QmiWmsCdmaErrorClass *value_3gpp2_failure_information_error_class,
    QmiWmsCdmaCauseCode *value_3gpp2_failure_information_cause_code,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_3gpp2_failure_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field '3GPP2 Failure Information' was not found in the message");
        return FALSE;
    }

    if (value_3gpp2_failure_information_error_class)
        *value_3gpp2_failure_information_error_class = (QmiWmsCdmaErrorClass)(self->arg_3gpp2_failure_information_error_class);
    if (value_3gpp2_failure_information_cause_code)
        *value_3gpp2_failure_information_cause_code = (QmiWmsCdmaCauseCode)(self->arg_3gpp2_failure_information_cause_code);

    return TRUE;
}

gboolean
qmi_message_wms_send_ack_input_set_3gpp2_failure_information (
    QmiMessageWmsSendAckInput *self,
    QmiWmsCdmaErrorClass value_3gpp2_failure_information_error_class,
    QmiWmsCdmaCauseCode value_3gpp2_failure_information_cause_code,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_3gpp2_failure_information_error_class = (guint8)(value_3gpp2_failure_information_error_class);
    self->arg_3gpp2_failure_information_cause_code = (guint8)(value_3gpp2_failure_information_cause_code);
    self->arg_3gpp2_failure_information_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_send_ack_input_get_information (
    QmiMessageWmsSendAckInput *self,
    guint32 *value_information_transaction_id,
    QmiWmsMessageProtocol *value_information_message_protocol,
    gboolean *value_information_success,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Information' was not found in the message");
        return FALSE;
    }

    if (value_information_transaction_id)
        *value_information_transaction_id = self->arg_information_transaction_id;
    if (value_information_message_protocol)
        *value_information_message_protocol = (QmiWmsMessageProtocol)(self->arg_information_message_protocol);
    if (value_information_success)
        *value_information_success = (gboolean)(self->arg_information_success);

    return TRUE;
}

gboolean
qmi_message_wms_send_ack_input_set_information (
    QmiMessageWmsSendAckInput *self,
    guint32 value_information_transaction_id,
    QmiWmsMessageProtocol value_information_message_protocol,
    gboolean value_information_success,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_information_transaction_id = value_information_transaction_id;
    self->arg_information_message_protocol = (guint8)(value_information_message_protocol);
    self->arg_information_success = (guint8)(value_information_success);
    self->arg_information_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_send_ack_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsSendAckInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_send_ack_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_send_ack_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsSendAckInput *
qmi_message_wms_send_ack_input_ref (QmiMessageWmsSendAckInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_send_ack_input_unref (QmiMessageWmsSendAckInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsSendAckInput, self);
    }
}

QmiMessageWmsSendAckInput *
qmi_message_wms_send_ack_input_new (void)
{
    QmiMessageWmsSendAckInput *self;

    self = g_slice_new0 (QmiMessageWmsSendAckInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_send_ack_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsSendAckInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_SEND_ACK);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Send Ack' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'SMS on IMS' TLV */
    if (input->arg_sms_on_ims_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_SMS_ON_IMS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'SMS on IMS': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_sms_on_ims;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'SMS on IMS': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'SMS on IMS': ");
            return NULL;
        }
    }

    /* Try to add the '3GPP Failure Information' TLV */
    if (input->arg_3gpp_failure_information_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_3GPP_FAILURE_INFORMATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV '3GPP Failure Information': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_3gpp_failure_information_rp_cause;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV '3GPP Failure Information': ");
                return NULL;
            }
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_3gpp_failure_information_tp_cause;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV '3GPP Failure Information': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV '3GPP Failure Information': ");
            return NULL;
        }
    }

    /* Try to add the '3GPP2 Failure Information' TLV */
    if (input->arg_3gpp2_failure_information_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_3GPP2_FAILURE_INFORMATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV '3GPP2 Failure Information': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_3gpp2_failure_information_error_class;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV '3GPP2 Failure Information': ");
                return NULL;
            }
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_3gpp2_failure_information_cause_code;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV '3GPP2 Failure Information': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV '3GPP2 Failure Information': ");
            return NULL;
        }
    }

    /* Try to add the 'Information' TLV */
    if (input->arg_information_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_INFORMATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Information': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_information_transaction_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Information': ");
            return NULL;
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_information_message_protocol;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Information': ");
                return NULL;
            }
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_information_success;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Information': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Information': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Information' in message 'Send Ack'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsSendAckOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Failure Cause */
    gboolean arg_failure_cause_set;
    guint8 arg_failure_cause;
};

#define QMI_MESSAGE_WMS_SEND_ACK_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WMS_SEND_ACK_OUTPUT_TLV_FAILURE_CAUSE 0x10

gboolean
qmi_message_wms_send_ack_output_get_result (
    QmiMessageWmsSendAckOutput *self,
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
qmi_message_wms_send_ack_output_get_failure_cause (
    QmiMessageWmsSendAckOutput *self,
    QmiWmsAckFailureCause *value_failure_cause,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_failure_cause_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Failure Cause' was not found in the message");
        return FALSE;
    }

    if (value_failure_cause)
        *value_failure_cause = (QmiWmsAckFailureCause)(self->arg_failure_cause);

    return TRUE;
}

GType
qmi_message_wms_send_ack_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsSendAckOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_send_ack_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_send_ack_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsSendAckOutput *
qmi_message_wms_send_ack_output_ref (QmiMessageWmsSendAckOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_send_ack_output_unref (QmiMessageWmsSendAckOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsSendAckOutput, self);
    }
}

static gchar *
qmi_message_wms_send_ack_input_sms_on_ims_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_SMS_ON_IMS, NULL, NULL)) == 0)
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
qmi_message_wms_send_ack_input_3gpp_failure_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_3GPP_FAILURE_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " rp_cause = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_GSM_UMTS_RP_CAUSE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_gsm_umts_rp_cause_get_string ((QmiWmsGsmUmtsRpCause)tmp));
#elif defined  __QMI_WMS_GSM_UMTS_RP_CAUSE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_gsm_umts_rp_cause_build_string_from_mask ((QmiWmsGsmUmtsRpCause)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsGsmUmtsRpCause
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " tp_cause = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_GSM_UMTS_TP_CAUSE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_gsm_umts_tp_cause_get_string ((QmiWmsGsmUmtsTpCause)tmp));
#elif defined  __QMI_WMS_GSM_UMTS_TP_CAUSE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_gsm_umts_tp_cause_build_string_from_mask ((QmiWmsGsmUmtsTpCause)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsGsmUmtsTpCause
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_message_wms_send_ack_input_3gpp2_failure_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_3GPP2_FAILURE_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " error_class = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_CDMA_ERROR_CLASS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_cdma_error_class_get_string ((QmiWmsCdmaErrorClass)tmp));
#elif defined  __QMI_WMS_CDMA_ERROR_CLASS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_cdma_error_class_build_string_from_mask ((QmiWmsCdmaErrorClass)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsCdmaErrorClass
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " cause_code = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_CDMA_CAUSE_CODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_cdma_cause_code_get_string ((QmiWmsCdmaCauseCode)tmp));
#elif defined  __QMI_WMS_CDMA_CAUSE_CODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_cdma_cause_code_build_string_from_mask ((QmiWmsCdmaCauseCode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsCdmaCauseCode
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_message_wms_send_ack_input_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " transaction_id = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " message_protocol = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_protocol_get_string ((QmiWmsMessageProtocol)tmp));
#elif defined  __QMI_WMS_MESSAGE_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_protocol_build_string_from_mask ((QmiWmsMessageProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageProtocol
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " success = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_message_wms_send_ack_output_failure_cause_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_ACK_OUTPUT_TLV_FAILURE_CAUSE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_ACK_FAILURE_CAUSE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_ack_failure_cause_get_string ((QmiWmsAckFailureCause)tmp));
#elif defined  __QMI_WMS_ACK_FAILURE_CAUSE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_ack_failure_cause_build_string_from_mask ((QmiWmsAckFailureCause)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsAckFailureCause
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

struct message_send_ack_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_send_ack_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_send_ack_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_SMS_ON_IMS:
            tlv_type_str = "SMS on IMS";
            translated_value = qmi_message_wms_send_ack_input_sms_on_ims_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_3GPP_FAILURE_INFORMATION:
            tlv_type_str = "3GPP Failure Information";
            translated_value = qmi_message_wms_send_ack_input_3gpp_failure_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_3GPP2_FAILURE_INFORMATION:
            tlv_type_str = "3GPP2 Failure Information";
            translated_value = qmi_message_wms_send_ack_input_3gpp2_failure_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_SEND_ACK_INPUT_TLV_INFORMATION:
            tlv_type_str = "Information";
            translated_value = qmi_message_wms_send_ack_input_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_SEND_ACK_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_SEND_ACK_OUTPUT_TLV_FAILURE_CAUSE:
            tlv_type_str = "Failure Cause";
            translated_value = qmi_message_wms_send_ack_output_failure_cause_get_printable (
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
message_send_ack_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Send Ack\" (0x0037)\n",
                            line_prefix);

    {
        struct message_send_ack_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_send_ack_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsSendAckOutput *
qmi_message_wms_send_ack_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsSendAckOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_SEND_ACK);

    self = g_slice_new0 (QmiMessageWmsSendAckOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_ACK_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_send_ack_output_unref (self);
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
                qmi_message_wms_send_ack_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;
        /* Prerequisite.... */
        if (!(self->arg_result_error_code == QMI_PROTOCOL_ERROR_ACK_NOT_SENT))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_ACK_OUTPUT_TLV_FAILURE_CAUSE, NULL, NULL)) == 0) {
                goto qmi_message_wms_send_ack_output_failure_cause_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_wms_send_ack_output_failure_cause_out;
                self->arg_failure_cause = (QmiWmsAckFailureCause)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Failure Cause' TLV", offset);
            }

            self->arg_failure_cause_set = TRUE;

qmi_message_wms_send_ack_output_failure_cause_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Set Broadcast Activation */


/* --- Input -- */

struct _QmiMessageWmsSetBroadcastActivationInput {
    volatile gint ref_count;

    /* Activation */
    gboolean arg_activation_set;
    guint8 arg_activation_message_mode;
    guint8 arg_activation_activate;
};

#define QMI_MESSAGE_WMS_SET_BROADCAST_ACTIVATION_INPUT_TLV_ACTIVATION 0x01

gboolean
qmi_message_wms_set_broadcast_activation_input_get_activation (
    QmiMessageWmsSetBroadcastActivationInput *self,
    QmiWmsMessageMode *value_activation_message_mode,
    gboolean *value_activation_activate,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_activation_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Activation' was not found in the message");
        return FALSE;
    }

    if (value_activation_message_mode)
        *value_activation_message_mode = (QmiWmsMessageMode)(self->arg_activation_message_mode);
    if (value_activation_activate)
        *value_activation_activate = (gboolean)(self->arg_activation_activate);

    return TRUE;
}

gboolean
qmi_message_wms_set_broadcast_activation_input_set_activation (
    QmiMessageWmsSetBroadcastActivationInput *self,
    QmiWmsMessageMode value_activation_message_mode,
    gboolean value_activation_activate,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_activation_message_mode = (guint8)(value_activation_message_mode);
    self->arg_activation_activate = (guint8)(value_activation_activate);
    self->arg_activation_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_set_broadcast_activation_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsSetBroadcastActivationInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_set_broadcast_activation_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_set_broadcast_activation_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsSetBroadcastActivationInput *
qmi_message_wms_set_broadcast_activation_input_ref (QmiMessageWmsSetBroadcastActivationInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_set_broadcast_activation_input_unref (QmiMessageWmsSetBroadcastActivationInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsSetBroadcastActivationInput, self);
    }
}

QmiMessageWmsSetBroadcastActivationInput *
qmi_message_wms_set_broadcast_activation_input_new (void)
{
    QmiMessageWmsSetBroadcastActivationInput *self;

    self = g_slice_new0 (QmiMessageWmsSetBroadcastActivationInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_set_broadcast_activation_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsSetBroadcastActivationInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_SET_BROADCAST_ACTIVATION);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set Broadcast Activation' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Activation' TLV */
    if (input->arg_activation_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_SET_BROADCAST_ACTIVATION_INPUT_TLV_ACTIVATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Activation': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_activation_message_mode;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Activation': ");
                return NULL;
            }
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_activation_activate;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Activation': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Activation': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Activation' in message 'Set Broadcast Activation'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsSetBroadcastActivationOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_WMS_SET_BROADCAST_ACTIVATION_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_wms_set_broadcast_activation_output_get_result (
    QmiMessageWmsSetBroadcastActivationOutput *self,
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
qmi_message_wms_set_broadcast_activation_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsSetBroadcastActivationOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_set_broadcast_activation_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_set_broadcast_activation_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsSetBroadcastActivationOutput *
qmi_message_wms_set_broadcast_activation_output_ref (QmiMessageWmsSetBroadcastActivationOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_set_broadcast_activation_output_unref (QmiMessageWmsSetBroadcastActivationOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsSetBroadcastActivationOutput, self);
    }
}

static gchar *
qmi_message_wms_set_broadcast_activation_input_activation_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SET_BROADCAST_ACTIVATION_INPUT_TLV_ACTIVATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " message_mode = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_mode_get_string ((QmiWmsMessageMode)tmp));
#elif defined  __QMI_WMS_MESSAGE_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_mode_build_string_from_mask ((QmiWmsMessageMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageMode
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " activate = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_set_broadcast_activation_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_broadcast_activation_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_broadcast_activation_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_SET_BROADCAST_ACTIVATION_INPUT_TLV_ACTIVATION:
            tlv_type_str = "Activation";
            translated_value = qmi_message_wms_set_broadcast_activation_input_activation_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_SET_BROADCAST_ACTIVATION_OUTPUT_TLV_RESULT:
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
message_set_broadcast_activation_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Broadcast Activation\" (0x003c)\n",
                            line_prefix);

    {
        struct message_set_broadcast_activation_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_broadcast_activation_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsSetBroadcastActivationOutput *
qmi_message_wms_set_broadcast_activation_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsSetBroadcastActivationOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_SET_BROADCAST_ACTIVATION);

    self = g_slice_new0 (QmiMessageWmsSetBroadcastActivationOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SET_BROADCAST_ACTIVATION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_set_broadcast_activation_output_unref (self);
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
                qmi_message_wms_set_broadcast_activation_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Set Broadcast Config */


/* --- Input -- */

static void
__qmi_message_wms_set_broadcast_config_input_channels_element_free (QmiMessageWmsSetBroadcastConfigInputChannelsElement *value)
{
    g_slice_free (QmiMessageWmsSetBroadcastConfigInputChannelsElement, value);
}

static QmiMessageWmsSetBroadcastConfigInputChannelsElement *
__qmi_message_wms_set_broadcast_config_input_channels_element_new (void)
{
    return g_slice_new0 (QmiMessageWmsSetBroadcastConfigInputChannelsElement);
}

static QmiMessageWmsSetBroadcastConfigInputChannelsElement *
__qmi_message_wms_set_broadcast_config_input_channels_element_copy (const QmiMessageWmsSetBroadcastConfigInputChannelsElement *value)
{
    QmiMessageWmsSetBroadcastConfigInputChannelsElement *copy;

    copy = __qmi_message_wms_set_broadcast_config_input_channels_element_new ();
    copy->start = value->start;
    copy->end = value->end;
    copy->selected = value->selected;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageWmsSetBroadcastConfigInputChannelsElement, qmi_message_wms_set_broadcast_config_input_channels_element, (GBoxedCopyFunc)__qmi_message_wms_set_broadcast_config_input_channels_element_copy, (GBoxedFreeFunc)__qmi_message_wms_set_broadcast_config_input_channels_element_free)

struct _QmiMessageWmsSetBroadcastConfigInput {
    volatile gint ref_count;

    /* Channels */
    gboolean arg_channels_set;
    GArray *arg_channels;
    GPtrArray *arg_channels_ptr;

    /* Message Mode */
    gboolean arg_message_mode_set;
    guint8 arg_message_mode;
};

#define QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG_INPUT_TLV_CHANNELS 0x10
#define QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG_INPUT_TLV_MESSAGE_MODE 0x01

gboolean
qmi_message_wms_set_broadcast_config_input_get_channels (
    QmiMessageWmsSetBroadcastConfigInput *self,
    GArray **value_channels,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_channels_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Channels' was not found in the message");
        return FALSE;
    }

    if (value_channels)
        *value_channels = self->arg_channels;

    return TRUE;
}

gboolean
qmi_message_wms_set_broadcast_config_input_get_channels_gir (
    QmiMessageWmsSetBroadcastConfigInput *self,
    GPtrArray **value_channels_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_channels_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Channels' was not found in the message");
        return FALSE;
    }

    if (value_channels_ptr) {
        if (!self->arg_channels_ptr) {
            {
                guint channels_i;

                self->arg_channels_ptr = g_ptr_array_new_full (self->arg_channels->len, (GDestroyNotify)__qmi_message_wms_set_broadcast_config_input_channels_element_free);
                for (channels_i = 0; channels_i < self->arg_channels->len; channels_i++) {
                    QmiMessageWmsSetBroadcastConfigInputChannelsElement *channels_aux_from;
                    QmiMessageWmsSetBroadcastConfigInputChannelsElement *channels_aux_to;

                    channels_aux_from = &g_array_index (self->arg_channels, QmiMessageWmsSetBroadcastConfigInputChannelsElement, channels_i);

                    channels_aux_to = __qmi_message_wms_set_broadcast_config_input_channels_element_new ();
                    channels_aux_to->start = (*channels_aux_from).start;
                    channels_aux_to->end = (*channels_aux_from).end;
                    channels_aux_to->selected = (*channels_aux_from).selected;

                    g_ptr_array_add (self->arg_channels_ptr, channels_aux_to);
                }
            }
        }
        *value_channels_ptr = self->arg_channels_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_wms_set_broadcast_config_input_set_channels (
    QmiMessageWmsSetBroadcastConfigInput *self,
    GArray *value_channels,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_channels, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_channels, (GDestroyNotify)g_ptr_array_unref);
    self->arg_channels = g_array_ref (value_channels);
    self->arg_channels_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_set_broadcast_config_input_set_channels_gir (
    QmiMessageWmsSetBroadcastConfigInput *self,
    GPtrArray *value_channels_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_channels, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_channels_ptr, (GDestroyNotify)g_ptr_array_unref);
    {
        guint channels_i;

        self->arg_channels = g_array_sized_new (FALSE, FALSE, sizeof (QmiMessageWmsSetBroadcastConfigInputChannelsElement), value_channels_ptr->len);
        for (channels_i = 0; channels_i < value_channels_ptr->len; channels_i++) {
            QmiMessageWmsSetBroadcastConfigInputChannelsElement channels_aux_to;
            QmiMessageWmsSetBroadcastConfigInputChannelsElement *channels_aux_from;

            channels_aux_from = g_ptr_array_index (value_channels_ptr, channels_i);

            channels_aux_to.start = channels_aux_from->start;
            channels_aux_to.end = channels_aux_from->end;
            channels_aux_to.selected = channels_aux_from->selected;

            g_array_append_val (self->arg_channels, channels_aux_to);
        }
    }
    self->arg_channels_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_set_broadcast_config_input_get_message_mode (
    QmiMessageWmsSetBroadcastConfigInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Mode' was not found in the message");
        return FALSE;
    }

    if (value_message_mode)
        *value_message_mode = (QmiWmsMessageMode)(self->arg_message_mode);

    return TRUE;
}

gboolean
qmi_message_wms_set_broadcast_config_input_set_message_mode (
    QmiMessageWmsSetBroadcastConfigInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_message_mode = (guint8)(value_message_mode);
    self->arg_message_mode_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_set_broadcast_config_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsSetBroadcastConfigInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_set_broadcast_config_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_set_broadcast_config_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsSetBroadcastConfigInput *
qmi_message_wms_set_broadcast_config_input_ref (QmiMessageWmsSetBroadcastConfigInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_set_broadcast_config_input_unref (QmiMessageWmsSetBroadcastConfigInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_channels, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_channels, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageWmsSetBroadcastConfigInput, self);
    }
}

QmiMessageWmsSetBroadcastConfigInput *
qmi_message_wms_set_broadcast_config_input_new (void)
{
    QmiMessageWmsSetBroadcastConfigInput *self;

    self = g_slice_new0 (QmiMessageWmsSetBroadcastConfigInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_set_broadcast_config_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsSetBroadcastConfigInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set Broadcast Config' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Channels' TLV */
    if (input->arg_channels_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG_INPUT_TLV_CHANNELS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Channels': ");
            return NULL;
        }

        {
            guint channels_i;
            guint16 channels_n_items;

            /* Write the number of items in the array first */
            channels_n_items = (guint16) input->arg_channels->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, channels_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Channels': ");
                return NULL;
            }

            for (channels_i = 0; channels_i < input->arg_channels->len; channels_i++) {
                /* Write the guint16 variable to the buffer */
                if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, g_array_index (input->arg_channels, QmiMessageWmsSetBroadcastConfigInputChannelsElement,channels_i).start, error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Channels': ");
                    return NULL;
                }
                /* Write the guint16 variable to the buffer */
                if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, g_array_index (input->arg_channels, QmiMessageWmsSetBroadcastConfigInputChannelsElement,channels_i).end, error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Channels': ");
                    return NULL;
                }
                {
                    guint8 tmp;

                    tmp = (guint8) g_array_index (input->arg_channels, QmiMessageWmsSetBroadcastConfigInputChannelsElement,channels_i).selected;
                    /* Write the guint8 variable to the buffer */
                    if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                        g_prefix_error (error, "Cannot write enum in TLV 'Channels': ");
                        return NULL;
                    }
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Channels': ");
            return NULL;
        }
    }

    /* Try to add the 'Message Mode' TLV */
    if (input->arg_message_mode_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG_INPUT_TLV_MESSAGE_MODE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Message Mode': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_message_mode;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Message Mode': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Message Mode': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Message Mode' in message 'Set Broadcast Config'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsSetBroadcastConfigOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_wms_set_broadcast_config_output_get_result (
    QmiMessageWmsSetBroadcastConfigOutput *self,
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
qmi_message_wms_set_broadcast_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsSetBroadcastConfigOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_set_broadcast_config_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_set_broadcast_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsSetBroadcastConfigOutput *
qmi_message_wms_set_broadcast_config_output_ref (QmiMessageWmsSetBroadcastConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_set_broadcast_config_output_unref (QmiMessageWmsSetBroadcastConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsSetBroadcastConfigOutput, self);
    }
}

static gchar *
qmi_message_wms_set_broadcast_config_input_channels_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG_INPUT_TLV_CHANNELS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint channels_i;
        guint16 channels_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(channels_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (channels_i = 0; channels_i < channels_n_items; channels_i++) {
            g_string_append_printf (printable, " [%u] = '", channels_i);
            g_string_append (printable, "[");
            g_string_append (printable, " start = '");

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " end = '");

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " selected = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " ]");
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
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
qmi_message_wms_set_broadcast_config_input_message_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG_INPUT_TLV_MESSAGE_MODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_mode_get_string ((QmiWmsMessageMode)tmp));
#elif defined  __QMI_WMS_MESSAGE_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_mode_build_string_from_mask ((QmiWmsMessageMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageMode
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

struct message_set_broadcast_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_broadcast_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_broadcast_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG_INPUT_TLV_CHANNELS:
            tlv_type_str = "Channels";
            translated_value = qmi_message_wms_set_broadcast_config_input_channels_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG_INPUT_TLV_MESSAGE_MODE:
            tlv_type_str = "Message Mode";
            translated_value = qmi_message_wms_set_broadcast_config_input_message_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG_OUTPUT_TLV_RESULT:
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
message_set_broadcast_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Broadcast Config\" (0x003d)\n",
                            line_prefix);

    {
        struct message_set_broadcast_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_broadcast_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsSetBroadcastConfigOutput *
qmi_message_wms_set_broadcast_config_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsSetBroadcastConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG);

    self = g_slice_new0 (QmiMessageWmsSetBroadcastConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_set_broadcast_config_output_unref (self);
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
                qmi_message_wms_set_broadcast_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Get Broadcast Config */


/* --- Input -- */

struct _QmiMessageWmsGetBroadcastConfigInput {
    volatile gint ref_count;

    /* Message Mode */
    gboolean arg_message_mode_set;
    guint8 arg_message_mode;
};

#define QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG_INPUT_TLV_MESSAGE_MODE 0x01

gboolean
qmi_message_wms_get_broadcast_config_input_get_message_mode (
    QmiMessageWmsGetBroadcastConfigInput *self,
    QmiWmsMessageMode *value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Mode' was not found in the message");
        return FALSE;
    }

    if (value_message_mode)
        *value_message_mode = (QmiWmsMessageMode)(self->arg_message_mode);

    return TRUE;
}

gboolean
qmi_message_wms_get_broadcast_config_input_set_message_mode (
    QmiMessageWmsGetBroadcastConfigInput *self,
    QmiWmsMessageMode value_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_message_mode = (guint8)(value_message_mode);
    self->arg_message_mode_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_get_broadcast_config_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsGetBroadcastConfigInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_get_broadcast_config_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_get_broadcast_config_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsGetBroadcastConfigInput *
qmi_message_wms_get_broadcast_config_input_ref (QmiMessageWmsGetBroadcastConfigInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_get_broadcast_config_input_unref (QmiMessageWmsGetBroadcastConfigInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsGetBroadcastConfigInput, self);
    }
}

QmiMessageWmsGetBroadcastConfigInput *
qmi_message_wms_get_broadcast_config_input_new (void)
{
    QmiMessageWmsGetBroadcastConfigInput *self;

    self = g_slice_new0 (QmiMessageWmsGetBroadcastConfigInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_get_broadcast_config_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsGetBroadcastConfigInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Get Broadcast Config' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Message Mode' TLV */
    if (input->arg_message_mode_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG_INPUT_TLV_MESSAGE_MODE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Message Mode': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_message_mode;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Message Mode': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Message Mode': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Message Mode' in message 'Get Broadcast Config'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

static void
__qmi_message_wms_get_broadcast_config_output_config_channels_element_free (QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement *value)
{
    g_slice_free (QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement, value);
}

static QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement *
__qmi_message_wms_get_broadcast_config_output_config_channels_element_new (void)
{
    return g_slice_new0 (QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement);
}

static QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement *
__qmi_message_wms_get_broadcast_config_output_config_channels_element_copy (const QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement *value)
{
    QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement *copy;

    copy = __qmi_message_wms_get_broadcast_config_output_config_channels_element_new ();
    copy->start = value->start;
    copy->end = value->end;
    copy->selected = value->selected;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement, qmi_message_wms_get_broadcast_config_output_config_channels_element, (GBoxedCopyFunc)__qmi_message_wms_get_broadcast_config_output_config_channels_element_copy, (GBoxedFreeFunc)__qmi_message_wms_get_broadcast_config_output_config_channels_element_free)

struct _QmiMessageWmsGetBroadcastConfigOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Config */
    gboolean arg_config_set;
    guint8 arg_config_activated;
    GArray *arg_config_channels;
    GPtrArray *arg_config_channels_ptr;
};

#define QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG_OUTPUT_TLV_CONFIG 0x10

gboolean
qmi_message_wms_get_broadcast_config_output_get_result (
    QmiMessageWmsGetBroadcastConfigOutput *self,
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
qmi_message_wms_get_broadcast_config_output_get_config (
    QmiMessageWmsGetBroadcastConfigOutput *self,
    gboolean *value_config_activated,
    GArray **value_config_channels,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_config_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Config' was not found in the message");
        return FALSE;
    }

    if (value_config_activated)
        *value_config_activated = (gboolean)(self->arg_config_activated);
    if (value_config_channels)
        *value_config_channels = self->arg_config_channels;

    return TRUE;
}

gboolean
qmi_message_wms_get_broadcast_config_output_get_config_gir (
    QmiMessageWmsGetBroadcastConfigOutput *self,
    gboolean *value_config_activated,
    GPtrArray **value_config_channels_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_config_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Config' was not found in the message");
        return FALSE;
    }

    if (value_config_activated)
        *value_config_activated = (gboolean)(self->arg_config_activated);
    if (value_config_channels_ptr) {
        if (!self->arg_config_channels_ptr) {
            {
                guint channels_i;

                self->arg_config_channels_ptr = g_ptr_array_new_full (self->arg_config_channels->len, (GDestroyNotify)__qmi_message_wms_get_broadcast_config_output_config_channels_element_free);
                for (channels_i = 0; channels_i < self->arg_config_channels->len; channels_i++) {
                    QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement *channels_aux_from;
                    QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement *channels_aux_to;

                    channels_aux_from = &g_array_index (self->arg_config_channels, QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement, channels_i);

                    channels_aux_to = __qmi_message_wms_get_broadcast_config_output_config_channels_element_new ();
                    channels_aux_to->start = (*channels_aux_from).start;
                    channels_aux_to->end = (*channels_aux_from).end;
                    channels_aux_to->selected = (*channels_aux_from).selected;

                    g_ptr_array_add (self->arg_config_channels_ptr, channels_aux_to);
                }
            }
        }
        *value_config_channels_ptr = self->arg_config_channels_ptr;
    }
    return TRUE;
}

GType
qmi_message_wms_get_broadcast_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsGetBroadcastConfigOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_get_broadcast_config_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_get_broadcast_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsGetBroadcastConfigOutput *
qmi_message_wms_get_broadcast_config_output_ref (QmiMessageWmsGetBroadcastConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_get_broadcast_config_output_unref (QmiMessageWmsGetBroadcastConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_config_channels, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_config_channels, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageWmsGetBroadcastConfigOutput, self);
    }
}

static gchar *
qmi_message_wms_get_broadcast_config_input_message_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG_INPUT_TLV_MESSAGE_MODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_mode_get_string ((QmiWmsMessageMode)tmp));
#elif defined  __QMI_WMS_MESSAGE_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_mode_build_string_from_mask ((QmiWmsMessageMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageMode
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
qmi_message_wms_get_broadcast_config_output_config_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG_OUTPUT_TLV_CONFIG, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " activated = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " channels = '");
    {
        guint channels_i;
        guint16 channels_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(channels_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (channels_i = 0; channels_i < channels_n_items; channels_i++) {
            g_string_append_printf (printable, " [%u] = '", channels_i);
            g_string_append (printable, "[");
            g_string_append (printable, " start = '");

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " end = '");

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " selected = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " ]");
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_get_broadcast_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_broadcast_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_broadcast_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG_INPUT_TLV_MESSAGE_MODE:
            tlv_type_str = "Message Mode";
            translated_value = qmi_message_wms_get_broadcast_config_input_message_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG_OUTPUT_TLV_CONFIG:
            tlv_type_str = "Config";
            translated_value = qmi_message_wms_get_broadcast_config_output_config_get_printable (
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
message_get_broadcast_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Broadcast Config\" (0x003e)\n",
                            line_prefix);

    {
        struct message_get_broadcast_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_broadcast_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsGetBroadcastConfigOutput *
qmi_message_wms_get_broadcast_config_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsGetBroadcastConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG);

    self = g_slice_new0 (QmiMessageWmsGetBroadcastConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_get_broadcast_config_output_unref (self);
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
                qmi_message_wms_get_broadcast_config_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG_OUTPUT_TLV_CONFIG, NULL, NULL)) == 0) {
                goto qmi_message_wms_get_broadcast_config_output_config_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_wms_get_broadcast_config_output_config_out;
                self->arg_config_activated = (gboolean)tmp;
            }
            {
                guint channels_i;
                guint16 channels_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(channels_n_items), NULL))
                    goto qmi_message_wms_get_broadcast_config_output_config_out;

                self->arg_config_channels = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement),
                    (guint)channels_n_items);

                for (channels_i = 0; channels_i < channels_n_items; channels_i++) {
                    QmiMessageWmsGetBroadcastConfigOutputConfigChannelsElement channels_aux;

                    if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(channels_aux.start), NULL))
                        goto qmi_message_wms_get_broadcast_config_output_config_out;
                    if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(channels_aux.end), NULL))
                        goto qmi_message_wms_get_broadcast_config_output_config_out;
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_wms_get_broadcast_config_output_config_out;
                        channels_aux.selected = (gboolean)tmp;
                    }
                    g_array_insert_val (self->arg_config_channels, channels_i, channels_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Config' TLV", offset);
            }

            self->arg_config_set = TRUE;

qmi_message_wms_get_broadcast_config_output_config_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Send From Memory Storage */


/* --- Input -- */

struct _QmiMessageWmsSendFromMemoryStorageInput {
    volatile gint ref_count;

    /* SMS on IMS */
    gboolean arg_sms_on_ims_set;
    guint8 arg_sms_on_ims;

    /* Information */
    gboolean arg_information_set;
    guint8 arg_information_storage_type;
    guint32 arg_information_memory_index;
    guint8 arg_information_message_mode;
};

#define QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_INPUT_TLV_SMS_ON_IMS 0x10
#define QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_INPUT_TLV_INFORMATION 0x01

gboolean
qmi_message_wms_send_from_memory_storage_input_get_sms_on_ims (
    QmiMessageWmsSendFromMemoryStorageInput *self,
    gboolean *value_sms_on_ims,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_sms_on_ims_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'SMS on IMS' was not found in the message");
        return FALSE;
    }

    if (value_sms_on_ims)
        *value_sms_on_ims = (gboolean)(self->arg_sms_on_ims);

    return TRUE;
}

gboolean
qmi_message_wms_send_from_memory_storage_input_set_sms_on_ims (
    QmiMessageWmsSendFromMemoryStorageInput *self,
    gboolean value_sms_on_ims,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_sms_on_ims = (guint8)(value_sms_on_ims);
    self->arg_sms_on_ims_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wms_send_from_memory_storage_input_get_information (
    QmiMessageWmsSendFromMemoryStorageInput *self,
    QmiWmsStorageType *value_information_storage_type,
    guint32 *value_information_memory_index,
    QmiWmsMessageMode *value_information_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Information' was not found in the message");
        return FALSE;
    }

    if (value_information_storage_type)
        *value_information_storage_type = (QmiWmsStorageType)(self->arg_information_storage_type);
    if (value_information_memory_index)
        *value_information_memory_index = self->arg_information_memory_index;
    if (value_information_message_mode)
        *value_information_message_mode = (QmiWmsMessageMode)(self->arg_information_message_mode);

    return TRUE;
}

gboolean
qmi_message_wms_send_from_memory_storage_input_set_information (
    QmiMessageWmsSendFromMemoryStorageInput *self,
    QmiWmsStorageType value_information_storage_type,
    guint32 value_information_memory_index,
    QmiWmsMessageMode value_information_message_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_information_storage_type = (guint8)(value_information_storage_type);
    self->arg_information_memory_index = value_information_memory_index;
    self->arg_information_message_mode = (guint8)(value_information_message_mode);
    self->arg_information_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_send_from_memory_storage_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsSendFromMemoryStorageInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_send_from_memory_storage_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_send_from_memory_storage_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsSendFromMemoryStorageInput *
qmi_message_wms_send_from_memory_storage_input_ref (QmiMessageWmsSendFromMemoryStorageInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_send_from_memory_storage_input_unref (QmiMessageWmsSendFromMemoryStorageInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsSendFromMemoryStorageInput, self);
    }
}

QmiMessageWmsSendFromMemoryStorageInput *
qmi_message_wms_send_from_memory_storage_input_new (void)
{
    QmiMessageWmsSendFromMemoryStorageInput *self;

    self = g_slice_new0 (QmiMessageWmsSendFromMemoryStorageInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_send_from_memory_storage_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsSendFromMemoryStorageInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Send From Memory Storage' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'SMS on IMS' TLV */
    if (input->arg_sms_on_ims_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_INPUT_TLV_SMS_ON_IMS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'SMS on IMS': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_sms_on_ims;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'SMS on IMS': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'SMS on IMS': ");
            return NULL;
        }
    }

    /* Try to add the 'Information' TLV */
    if (input->arg_information_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_INPUT_TLV_INFORMATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Information': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_information_storage_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Information': ");
                return NULL;
            }
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_information_memory_index, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Information': ");
            return NULL;
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_information_message_mode;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Information': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Information': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Information' in message 'Send From Memory Storage'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsSendFromMemoryStorageOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Message ID */
    gboolean arg_message_id_set;
    guint16 arg_message_id;

    /* CDMA Cause Code */
    gboolean arg_cdma_cause_code_set;
    guint16 arg_cdma_cause_code;

    /* CDMA Error Class */
    gboolean arg_cdma_error_class_set;
    guint8 arg_cdma_error_class;

    /* GSM WCDMA Cause Info */
    gboolean arg_gsm_wcdma_cause_info_set;
    guint16 arg_gsm_wcdma_cause_info_rp_cause;
    guint8 arg_gsm_wcdma_cause_info_tp_cause;

    /* Message Delivery Failure Type */
    gboolean arg_message_delivery_failure_type_set;
    guint8 arg_message_delivery_failure_type;
};

#define QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_MESSAGE_ID 0x10
#define QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_CDMA_CAUSE_CODE 0x11
#define QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_CDMA_ERROR_CLASS 0x12
#define QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_GSM_WCDMA_CAUSE_INFO 0x13
#define QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_MESSAGE_DELIVERY_FAILURE_TYPE 0x14

gboolean
qmi_message_wms_send_from_memory_storage_output_get_result (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
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
qmi_message_wms_send_from_memory_storage_output_get_message_id (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    guint16 *value_message_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message ID' was not found in the message");
        return FALSE;
    }

    if (value_message_id)
        *value_message_id = self->arg_message_id;

    return TRUE;
}

gboolean
qmi_message_wms_send_from_memory_storage_output_get_cdma_cause_code (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    QmiWmsCdmaCauseCode *value_cdma_cause_code,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_cdma_cause_code_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'CDMA Cause Code' was not found in the message");
        return FALSE;
    }

    if (value_cdma_cause_code)
        *value_cdma_cause_code = (QmiWmsCdmaCauseCode)(self->arg_cdma_cause_code);

    return TRUE;
}

gboolean
qmi_message_wms_send_from_memory_storage_output_get_cdma_error_class (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    QmiWmsCdmaErrorClass *value_cdma_error_class,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_cdma_error_class_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'CDMA Error Class' was not found in the message");
        return FALSE;
    }

    if (value_cdma_error_class)
        *value_cdma_error_class = (QmiWmsCdmaErrorClass)(self->arg_cdma_error_class);

    return TRUE;
}

gboolean
qmi_message_wms_send_from_memory_storage_output_get_gsm_wcdma_cause_info (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    QmiWmsGsmUmtsRpCause *value_gsm_wcdma_cause_info_rp_cause,
    QmiWmsGsmUmtsTpCause *value_gsm_wcdma_cause_info_tp_cause,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_gsm_wcdma_cause_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'GSM WCDMA Cause Info' was not found in the message");
        return FALSE;
    }

    if (value_gsm_wcdma_cause_info_rp_cause)
        *value_gsm_wcdma_cause_info_rp_cause = (QmiWmsGsmUmtsRpCause)(self->arg_gsm_wcdma_cause_info_rp_cause);
    if (value_gsm_wcdma_cause_info_tp_cause)
        *value_gsm_wcdma_cause_info_tp_cause = (QmiWmsGsmUmtsTpCause)(self->arg_gsm_wcdma_cause_info_tp_cause);

    return TRUE;
}

gboolean
qmi_message_wms_send_from_memory_storage_output_get_message_delivery_failure_type (
    QmiMessageWmsSendFromMemoryStorageOutput *self,
    QmiWmsMessageDeliveryFailureType *value_message_delivery_failure_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_message_delivery_failure_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Message Delivery Failure Type' was not found in the message");
        return FALSE;
    }

    if (value_message_delivery_failure_type)
        *value_message_delivery_failure_type = (QmiWmsMessageDeliveryFailureType)(self->arg_message_delivery_failure_type);

    return TRUE;
}

GType
qmi_message_wms_send_from_memory_storage_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsSendFromMemoryStorageOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_send_from_memory_storage_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_send_from_memory_storage_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsSendFromMemoryStorageOutput *
qmi_message_wms_send_from_memory_storage_output_ref (QmiMessageWmsSendFromMemoryStorageOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_send_from_memory_storage_output_unref (QmiMessageWmsSendFromMemoryStorageOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsSendFromMemoryStorageOutput, self);
    }
}

static gchar *
qmi_message_wms_send_from_memory_storage_input_sms_on_ims_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_INPUT_TLV_SMS_ON_IMS, NULL, NULL)) == 0)
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
qmi_message_wms_send_from_memory_storage_input_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_INPUT_TLV_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " storage_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_STORAGE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_storage_type_get_string ((QmiWmsStorageType)tmp));
#elif defined  __QMI_WMS_STORAGE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_storage_type_build_string_from_mask ((QmiWmsStorageType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsStorageType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " memory_index = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " message_mode = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_mode_get_string ((QmiWmsMessageMode)tmp));
#elif defined  __QMI_WMS_MESSAGE_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_mode_build_string_from_mask ((QmiWmsMessageMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageMode
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_message_wms_send_from_memory_storage_output_message_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_MESSAGE_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
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
qmi_message_wms_send_from_memory_storage_output_cdma_cause_code_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_CDMA_CAUSE_CODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_CDMA_CAUSE_CODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_cdma_cause_code_get_string ((QmiWmsCdmaCauseCode)tmp));
#elif defined  __QMI_WMS_CDMA_CAUSE_CODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_cdma_cause_code_build_string_from_mask ((QmiWmsCdmaCauseCode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsCdmaCauseCode
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
qmi_message_wms_send_from_memory_storage_output_cdma_error_class_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_CDMA_ERROR_CLASS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_CDMA_ERROR_CLASS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_cdma_error_class_get_string ((QmiWmsCdmaErrorClass)tmp));
#elif defined  __QMI_WMS_CDMA_ERROR_CLASS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_cdma_error_class_build_string_from_mask ((QmiWmsCdmaErrorClass)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsCdmaErrorClass
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
qmi_message_wms_send_from_memory_storage_output_gsm_wcdma_cause_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_GSM_WCDMA_CAUSE_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " rp_cause = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_GSM_UMTS_RP_CAUSE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_gsm_umts_rp_cause_get_string ((QmiWmsGsmUmtsRpCause)tmp));
#elif defined  __QMI_WMS_GSM_UMTS_RP_CAUSE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_gsm_umts_rp_cause_build_string_from_mask ((QmiWmsGsmUmtsRpCause)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsGsmUmtsRpCause
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " tp_cause = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_GSM_UMTS_TP_CAUSE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_gsm_umts_tp_cause_get_string ((QmiWmsGsmUmtsTpCause)tmp));
#elif defined  __QMI_WMS_GSM_UMTS_TP_CAUSE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_gsm_umts_tp_cause_build_string_from_mask ((QmiWmsGsmUmtsTpCause)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsGsmUmtsTpCause
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

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
qmi_message_wms_send_from_memory_storage_output_message_delivery_failure_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_MESSAGE_DELIVERY_FAILURE_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_MESSAGE_DELIVERY_FAILURE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_message_delivery_failure_type_get_string ((QmiWmsMessageDeliveryFailureType)tmp));
#elif defined  __QMI_WMS_MESSAGE_DELIVERY_FAILURE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_message_delivery_failure_type_build_string_from_mask ((QmiWmsMessageDeliveryFailureType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsMessageDeliveryFailureType
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

struct message_send_from_memory_storage_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_send_from_memory_storage_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_send_from_memory_storage_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_INPUT_TLV_SMS_ON_IMS:
            tlv_type_str = "SMS on IMS";
            translated_value = qmi_message_wms_send_from_memory_storage_input_sms_on_ims_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_INPUT_TLV_INFORMATION:
            tlv_type_str = "Information";
            translated_value = qmi_message_wms_send_from_memory_storage_input_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_MESSAGE_ID:
            tlv_type_str = "Message ID";
            translated_value = qmi_message_wms_send_from_memory_storage_output_message_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_CDMA_CAUSE_CODE:
            tlv_type_str = "CDMA Cause Code";
            translated_value = qmi_message_wms_send_from_memory_storage_output_cdma_cause_code_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_CDMA_ERROR_CLASS:
            tlv_type_str = "CDMA Error Class";
            translated_value = qmi_message_wms_send_from_memory_storage_output_cdma_error_class_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_GSM_WCDMA_CAUSE_INFO:
            tlv_type_str = "GSM WCDMA Cause Info";
            translated_value = qmi_message_wms_send_from_memory_storage_output_gsm_wcdma_cause_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_MESSAGE_DELIVERY_FAILURE_TYPE:
            tlv_type_str = "Message Delivery Failure Type";
            translated_value = qmi_message_wms_send_from_memory_storage_output_message_delivery_failure_type_get_printable (
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
message_send_from_memory_storage_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Send From Memory Storage\" (0x0042)\n",
                            line_prefix);

    {
        struct message_send_from_memory_storage_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_send_from_memory_storage_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsSendFromMemoryStorageOutput *
qmi_message_wms_send_from_memory_storage_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsSendFromMemoryStorageOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE);

    self = g_slice_new0 (QmiMessageWmsSendFromMemoryStorageOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_send_from_memory_storage_output_unref (self);
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
                qmi_message_wms_send_from_memory_storage_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_MESSAGE_ID, NULL, NULL)) == 0) {
                goto qmi_message_wms_send_from_memory_storage_output_message_id_out;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_message_id), NULL))
                goto qmi_message_wms_send_from_memory_storage_output_message_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Message ID' TLV", offset);
            }

            self->arg_message_id_set = TRUE;

qmi_message_wms_send_from_memory_storage_output_message_id_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;
        /* Prerequisite.... */
        if (!(self->arg_result_error_code == QMI_PROTOCOL_ERROR_WMS_CAUSE_CODE))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_CDMA_CAUSE_CODE, NULL, NULL)) == 0) {
                goto qmi_message_wms_send_from_memory_storage_output_cdma_cause_code_out;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_wms_send_from_memory_storage_output_cdma_cause_code_out;
                self->arg_cdma_cause_code = (QmiWmsCdmaCauseCode)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'CDMA Cause Code' TLV", offset);
            }

            self->arg_cdma_cause_code_set = TRUE;

qmi_message_wms_send_from_memory_storage_output_cdma_cause_code_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;
        /* Prerequisite.... */
        if (!(self->arg_result_error_code == QMI_PROTOCOL_ERROR_WMS_CAUSE_CODE))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_CDMA_ERROR_CLASS, NULL, NULL)) == 0) {
                goto qmi_message_wms_send_from_memory_storage_output_cdma_error_class_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_wms_send_from_memory_storage_output_cdma_error_class_out;
                self->arg_cdma_error_class = (QmiWmsCdmaErrorClass)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'CDMA Error Class' TLV", offset);
            }

            self->arg_cdma_error_class_set = TRUE;

qmi_message_wms_send_from_memory_storage_output_cdma_error_class_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;
        /* Prerequisite.... */
        if (!(self->arg_result_error_code == QMI_PROTOCOL_ERROR_WMS_CAUSE_CODE))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_GSM_WCDMA_CAUSE_INFO, NULL, NULL)) == 0) {
                goto qmi_message_wms_send_from_memory_storage_output_gsm_wcdma_cause_info_out;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_wms_send_from_memory_storage_output_gsm_wcdma_cause_info_out;
                self->arg_gsm_wcdma_cause_info_rp_cause = (QmiWmsGsmUmtsRpCause)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_wms_send_from_memory_storage_output_gsm_wcdma_cause_info_out;
                self->arg_gsm_wcdma_cause_info_tp_cause = (QmiWmsGsmUmtsTpCause)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'GSM WCDMA Cause Info' TLV", offset);
            }

            self->arg_gsm_wcdma_cause_info_set = TRUE;

qmi_message_wms_send_from_memory_storage_output_gsm_wcdma_cause_info_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;
        /* Prerequisite.... */
        if (!(self->arg_result_error_code == QMI_PROTOCOL_ERROR_WMS_CAUSE_CODE))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE_OUTPUT_TLV_MESSAGE_DELIVERY_FAILURE_TYPE, NULL, NULL)) == 0) {
                goto qmi_message_wms_send_from_memory_storage_output_message_delivery_failure_type_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_wms_send_from_memory_storage_output_message_delivery_failure_type_out;
                self->arg_message_delivery_failure_type = (QmiWmsMessageDeliveryFailureType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Message Delivery Failure Type' TLV", offset);
            }

            self->arg_message_delivery_failure_type_set = TRUE;

qmi_message_wms_send_from_memory_storage_output_message_delivery_failure_type_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Indication Register */


/* --- Input -- */

struct _QmiMessageWmsIndicationRegisterInput {
    volatile gint ref_count;

    /* Report Transport Network Registration Status */
    gboolean arg_report_transport_network_registration_status_set;
    guint8 arg_report_transport_network_registration_status;
};

#define QMI_MESSAGE_WMS_INDICATION_REGISTER_INPUT_TLV_REPORT_TRANSPORT_NETWORK_REGISTRATION_STATUS 0x11

gboolean
qmi_message_wms_indication_register_input_get_report_transport_network_registration_status (
    QmiMessageWmsIndicationRegisterInput *self,
    gboolean *value_report_transport_network_registration_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_report_transport_network_registration_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Report Transport Network Registration Status' was not found in the message");
        return FALSE;
    }

    if (value_report_transport_network_registration_status)
        *value_report_transport_network_registration_status = (gboolean)(self->arg_report_transport_network_registration_status);

    return TRUE;
}

gboolean
qmi_message_wms_indication_register_input_set_report_transport_network_registration_status (
    QmiMessageWmsIndicationRegisterInput *self,
    gboolean value_report_transport_network_registration_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_report_transport_network_registration_status = (guint8)(value_report_transport_network_registration_status);
    self->arg_report_transport_network_registration_status_set = TRUE;

    return TRUE;
}

GType
qmi_message_wms_indication_register_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsIndicationRegisterInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_indication_register_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_indication_register_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsIndicationRegisterInput *
qmi_message_wms_indication_register_input_ref (QmiMessageWmsIndicationRegisterInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_indication_register_input_unref (QmiMessageWmsIndicationRegisterInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsIndicationRegisterInput, self);
    }
}

QmiMessageWmsIndicationRegisterInput *
qmi_message_wms_indication_register_input_new (void)
{
    QmiMessageWmsIndicationRegisterInput *self;

    self = g_slice_new0 (QmiMessageWmsIndicationRegisterInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_indication_register_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsIndicationRegisterInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_INDICATION_REGISTER);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Report Transport Network Registration Status' TLV */
    if (input->arg_report_transport_network_registration_status_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WMS_INDICATION_REGISTER_INPUT_TLV_REPORT_TRANSPORT_NETWORK_REGISTRATION_STATUS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Report Transport Network Registration Status': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_report_transport_network_registration_status;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Report Transport Network Registration Status': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Report Transport Network Registration Status': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsIndicationRegisterOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_WMS_INDICATION_REGISTER_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_wms_indication_register_output_get_result (
    QmiMessageWmsIndicationRegisterOutput *self,
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
qmi_message_wms_indication_register_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsIndicationRegisterOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_indication_register_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_indication_register_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsIndicationRegisterOutput *
qmi_message_wms_indication_register_output_ref (QmiMessageWmsIndicationRegisterOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_indication_register_output_unref (QmiMessageWmsIndicationRegisterOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsIndicationRegisterOutput, self);
    }
}

static gchar *
qmi_message_wms_indication_register_input_report_transport_network_registration_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_INDICATION_REGISTER_INPUT_TLV_REPORT_TRANSPORT_NETWORK_REGISTRATION_STATUS, NULL, NULL)) == 0)
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

struct message_indication_register_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_indication_register_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_indication_register_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WMS_INDICATION_REGISTER_INPUT_TLV_REPORT_TRANSPORT_NETWORK_REGISTRATION_STATUS:
            tlv_type_str = "Report Transport Network Registration Status";
            translated_value = qmi_message_wms_indication_register_input_report_transport_network_registration_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WMS_INDICATION_REGISTER_OUTPUT_TLV_RESULT:
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
message_indication_register_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Indication Register\" (0x0047)\n",
                            line_prefix);

    {
        struct message_indication_register_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_indication_register_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsIndicationRegisterOutput *
qmi_message_wms_indication_register_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsIndicationRegisterOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_INDICATION_REGISTER);

    self = g_slice_new0 (QmiMessageWmsIndicationRegisterOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_INDICATION_REGISTER_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_indication_register_output_unref (self);
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
                qmi_message_wms_indication_register_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WMS Get Transport Network Registration Status */


/* --- Input -- */

struct _QmiMessageWmsGetTransportNetworkRegistrationStatusInput {
    volatile gint ref_count;
};


GType
qmi_message_wms_get_transport_network_registration_status_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsGetTransportNetworkRegistrationStatusInput"),
                                          (GBoxedCopyFunc) qmi_message_wms_get_transport_network_registration_status_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_get_transport_network_registration_status_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsGetTransportNetworkRegistrationStatusInput *
qmi_message_wms_get_transport_network_registration_status_input_ref (QmiMessageWmsGetTransportNetworkRegistrationStatusInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_get_transport_network_registration_status_input_unref (QmiMessageWmsGetTransportNetworkRegistrationStatusInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsGetTransportNetworkRegistrationStatusInput, self);
    }
}

QmiMessageWmsGetTransportNetworkRegistrationStatusInput *
qmi_message_wms_get_transport_network_registration_status_input_new (void)
{
    QmiMessageWmsGetTransportNetworkRegistrationStatusInput *self;

    self = g_slice_new0 (QmiMessageWmsGetTransportNetworkRegistrationStatusInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wms_get_transport_network_registration_status_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWmsGetTransportNetworkRegistrationStatusInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WMS_GET_TRANSPORT_NETWORK_REGISTRATION_STATUS);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWmsGetTransportNetworkRegistrationStatusOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Registration Status */
    gboolean arg_registration_status_set;
    guint8 arg_registration_status;
};

#define QMI_MESSAGE_WMS_GET_TRANSPORT_NETWORK_REGISTRATION_STATUS_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WMS_GET_TRANSPORT_NETWORK_REGISTRATION_STATUS_OUTPUT_TLV_REGISTRATION_STATUS 0x10

gboolean
qmi_message_wms_get_transport_network_registration_status_output_get_result (
    QmiMessageWmsGetTransportNetworkRegistrationStatusOutput *self,
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
qmi_message_wms_get_transport_network_registration_status_output_get_registration_status (
    QmiMessageWmsGetTransportNetworkRegistrationStatusOutput *self,
    QmiWmsNWRegistration *value_registration_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_registration_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Registration Status' was not found in the message");
        return FALSE;
    }

    if (value_registration_status)
        *value_registration_status = (QmiWmsNWRegistration)(self->arg_registration_status);

    return TRUE;
}

GType
qmi_message_wms_get_transport_network_registration_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWmsGetTransportNetworkRegistrationStatusOutput"),
                                          (GBoxedCopyFunc) qmi_message_wms_get_transport_network_registration_status_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wms_get_transport_network_registration_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWmsGetTransportNetworkRegistrationStatusOutput *
qmi_message_wms_get_transport_network_registration_status_output_ref (QmiMessageWmsGetTransportNetworkRegistrationStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wms_get_transport_network_registration_status_output_unref (QmiMessageWmsGetTransportNetworkRegistrationStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWmsGetTransportNetworkRegistrationStatusOutput, self);
    }
}

static gchar *
qmi_message_wms_get_transport_network_registration_status_output_registration_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_TRANSPORT_NETWORK_REGISTRATION_STATUS_OUTPUT_TLV_REGISTRATION_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WMS_NW_REGISTRATION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wms_nw_registration_get_string ((QmiWmsNWRegistration)tmp));
#elif defined  __QMI_WMS_NW_REGISTRATION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wms_nw_registration_build_string_from_mask ((QmiWmsNWRegistration)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWmsNWRegistration
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

struct message_get_transport_network_registration_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_transport_network_registration_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_transport_network_registration_status_context *ctx)
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
        case QMI_MESSAGE_WMS_GET_TRANSPORT_NETWORK_REGISTRATION_STATUS_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WMS_GET_TRANSPORT_NETWORK_REGISTRATION_STATUS_OUTPUT_TLV_REGISTRATION_STATUS:
            tlv_type_str = "Registration Status";
            translated_value = qmi_message_wms_get_transport_network_registration_status_output_registration_status_get_printable (
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
message_get_transport_network_registration_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Transport Network Registration Status\" (0x004a)\n",
                            line_prefix);

    {
        struct message_get_transport_network_registration_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_transport_network_registration_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWmsGetTransportNetworkRegistrationStatusOutput *
qmi_message_wms_get_transport_network_registration_status_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWmsGetTransportNetworkRegistrationStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WMS_GET_TRANSPORT_NETWORK_REGISTRATION_STATUS);

    self = g_slice_new0 (QmiMessageWmsGetTransportNetworkRegistrationStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_TRANSPORT_NETWORK_REGISTRATION_STATUS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wms_get_transport_network_registration_status_output_unref (self);
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
                qmi_message_wms_get_transport_network_registration_status_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WMS_GET_TRANSPORT_NETWORK_REGISTRATION_STATUS_OUTPUT_TLV_REGISTRATION_STATUS, NULL, NULL)) == 0) {
                goto qmi_message_wms_get_transport_network_registration_status_output_registration_status_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_wms_get_transport_network_registration_status_output_registration_status_out;
                self->arg_registration_status = (QmiWmsNWRegistration)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Registration Status' TLV", offset);
            }

            self->arg_registration_status_set = TRUE;

qmi_message_wms_get_transport_network_registration_status_output_registration_status_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: WMS */


gchar *
__qmi_message_wms_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_WMS_EVENT_REPORT:
            return indication_event_report_get_printable (self, line_prefix);
        case QMI_INDICATION_WMS_SMSC_ADDRESS:
            return indication_smsc_address_get_printable (self, line_prefix);
        case QMI_INDICATION_WMS_TRANSPORT_NETWORK_REGISTRATION_STATUS:
            return indication_transport_network_registration_status_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_WMS_RESET:
                return message_reset_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_SET_EVENT_REPORT:
                return message_set_event_report_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_GET_SUPPORTED_MESSAGES:
                return message_get_supported_messages_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_RAW_SEND:
                return message_raw_send_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_RAW_WRITE:
                return message_raw_write_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_RAW_READ:
                return message_raw_read_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_MODIFY_TAG:
                return message_modify_tag_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_DELETE:
                return message_delete_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_GET_MESSAGE_PROTOCOL:
                return message_get_message_protocol_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_LIST_MESSAGES:
                return message_list_messages_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_SET_ROUTES:
                return message_set_routes_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_GET_ROUTES:
                return message_get_routes_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_SEND_ACK:
                return message_send_ack_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_SET_BROADCAST_ACTIVATION:
                return message_set_broadcast_activation_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_SET_BROADCAST_CONFIG:
                return message_set_broadcast_config_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_GET_BROADCAST_CONFIG:
                return message_get_broadcast_config_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_SEND_FROM_MEMORY_STORAGE:
                return message_send_from_memory_storage_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_INDICATION_REGISTER:
                return message_indication_register_get_printable (self, line_prefix);
            case QMI_MESSAGE_WMS_GET_TRANSPORT_NETWORK_REGISTRATION_STATUS:
                return message_get_transport_network_registration_status_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client WMS */

G_DEFINE_TYPE (QmiClientWms, qmi_client_wms, QMI_TYPE_CLIENT)

enum {
    SIGNAL_EVENT_REPORT,
    SIGNAL_SMSC_ADDRESS,
    SIGNAL_TRANSPORT_NETWORK_REGISTRATION_STATUS,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_WMS_EVENT_REPORT: {
            QmiIndicationWmsEventReportOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_wms_event_report_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Event Report' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_EVENT_REPORT], 0, output);
                qmi_indication_wms_event_report_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_WMS_SMSC_ADDRESS: {
            QmiIndicationWmsSmscAddressOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_wms_smsc_address_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'SMSC Address' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_SMSC_ADDRESS], 0, output);
                qmi_indication_wms_smsc_address_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_WMS_TRANSPORT_NETWORK_REGISTRATION_STATUS: {
            QmiIndicationWmsTransportNetworkRegistrationStatusOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_wms_transport_network_registration_status_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Transport Network Registration Status' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_TRANSPORT_NETWORK_REGISTRATION_STATUS], 0, output);
                qmi_indication_wms_transport_network_registration_status_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_wms_init (QmiClientWms *self)
{
}

static void
qmi_client_wms_class_init (QmiClientWmsClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientWms::event-report:
     * @object: A #QmiClientWms.
     * @output: A #QmiIndicationWmsEventReportOutput.
     *
     * The ::event-report signal gets emitted when a '<link linkend="libqmi-glib-WMS-Event-Report-indication.top_of_page">Event Report</link>' indication is received.
     *
     * Since: 1.0
     */
    signals[SIGNAL_EVENT_REPORT] =
        g_signal_new ("event-report",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_WMS_EVENT_REPORT_OUTPUT);

    /**
     * QmiClientWms::smsc-address:
     * @object: A #QmiClientWms.
     * @output: A #QmiIndicationWmsSmscAddressOutput.
     *
     * The ::smsc-address signal gets emitted when a '<link linkend="libqmi-glib-WMS-SMSC-Address-indication.top_of_page">SMSC Address</link>' indication is received.
     *
     * Since: 1.14
     */
    signals[SIGNAL_SMSC_ADDRESS] =
        g_signal_new ("smsc-address",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_WMS_SMSC_ADDRESS_OUTPUT);

    /**
     * QmiClientWms::transport-network-registration-status:
     * @object: A #QmiClientWms.
     * @output: A #QmiIndicationWmsTransportNetworkRegistrationStatusOutput.
     *
     * The ::transport-network-registration-status signal gets emitted when a '<link linkend="libqmi-glib-WMS-Transport-Network-Registration-Status-indication.top_of_page">Transport Network Registration Status</link>' indication is received.
     *
     * Since: 1.38
     */
    signals[SIGNAL_TRANSPORT_NETWORK_REGISTRATION_STATUS] =
        g_signal_new ("transport-network-registration-status",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_WMS_TRANSPORT_NETWORK_REGISTRATION_STATUS_OUTPUT);
}


QmiMessageWmsResetOutput *
qmi_client_wms_reset_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
reset_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsResetOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_reset_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_reset_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_reset (
    QmiClientWms *self,
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

    request = __qmi_message_wms_reset_request_create (
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
                             (GAsyncReadyCallback)reset_ready,
                             task);
}


QmiMessageWmsSetEventReportOutput *
qmi_client_wms_set_event_report_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_event_report_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsSetEventReportOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_set_event_report_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_set_event_report_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_set_event_report (
    QmiClientWms *self,
    QmiMessageWmsSetEventReportInput *input,
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

    request = __qmi_message_wms_set_event_report_request_create (
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
                             (GAsyncReadyCallback)set_event_report_ready,
                             task);
}


QmiMessageWmsGetSupportedMessagesOutput *
qmi_client_wms_get_supported_messages_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_supported_messages_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsGetSupportedMessagesOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_get_supported_messages_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_get_supported_messages_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_get_supported_messages (
    QmiClientWms *self,
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

    request = __qmi_message_wms_get_supported_messages_request_create (
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
                             (GAsyncReadyCallback)get_supported_messages_ready,
                             task);
}


QmiMessageWmsRawSendOutput *
qmi_client_wms_raw_send_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
raw_send_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsRawSendOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_raw_send_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_raw_send_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_raw_send (
    QmiClientWms *self,
    QmiMessageWmsRawSendInput *input,
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

    request = __qmi_message_wms_raw_send_request_create (
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
                             (GAsyncReadyCallback)raw_send_ready,
                             task);
}


QmiMessageWmsRawWriteOutput *
qmi_client_wms_raw_write_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
raw_write_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsRawWriteOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_raw_write_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_raw_write_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_raw_write (
    QmiClientWms *self,
    QmiMessageWmsRawWriteInput *input,
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

    request = __qmi_message_wms_raw_write_request_create (
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
                             (GAsyncReadyCallback)raw_write_ready,
                             task);
}


QmiMessageWmsRawReadOutput *
qmi_client_wms_raw_read_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
raw_read_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsRawReadOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_raw_read_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_raw_read_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_raw_read (
    QmiClientWms *self,
    QmiMessageWmsRawReadInput *input,
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

    request = __qmi_message_wms_raw_read_request_create (
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
                             (GAsyncReadyCallback)raw_read_ready,
                             task);
}


QmiMessageWmsModifyTagOutput *
qmi_client_wms_modify_tag_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
modify_tag_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsModifyTagOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_modify_tag_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_modify_tag_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_modify_tag (
    QmiClientWms *self,
    QmiMessageWmsModifyTagInput *input,
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

    request = __qmi_message_wms_modify_tag_request_create (
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
                             (GAsyncReadyCallback)modify_tag_ready,
                             task);
}


QmiMessageWmsDeleteOutput *
qmi_client_wms_delete_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
delete_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsDeleteOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_delete_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_delete_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_delete (
    QmiClientWms *self,
    QmiMessageWmsDeleteInput *input,
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

    request = __qmi_message_wms_delete_request_create (
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
                             (GAsyncReadyCallback)delete_ready,
                             task);
}


QmiMessageWmsGetMessageProtocolOutput *
qmi_client_wms_get_message_protocol_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_message_protocol_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsGetMessageProtocolOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_get_message_protocol_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_get_message_protocol_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_get_message_protocol (
    QmiClientWms *self,
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

    request = __qmi_message_wms_get_message_protocol_request_create (
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
                             (GAsyncReadyCallback)get_message_protocol_ready,
                             task);
}


QmiMessageWmsListMessagesOutput *
qmi_client_wms_list_messages_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
list_messages_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsListMessagesOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_list_messages_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_list_messages_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_list_messages (
    QmiClientWms *self,
    QmiMessageWmsListMessagesInput *input,
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

    request = __qmi_message_wms_list_messages_request_create (
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
                             (GAsyncReadyCallback)list_messages_ready,
                             task);
}


QmiMessageWmsSetRoutesOutput *
qmi_client_wms_set_routes_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_routes_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsSetRoutesOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_set_routes_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_set_routes_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_set_routes (
    QmiClientWms *self,
    QmiMessageWmsSetRoutesInput *input,
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

    request = __qmi_message_wms_set_routes_request_create (
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
                             (GAsyncReadyCallback)set_routes_ready,
                             task);
}


QmiMessageWmsGetRoutesOutput *
qmi_client_wms_get_routes_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_routes_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsGetRoutesOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_get_routes_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_get_routes_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_get_routes (
    QmiClientWms *self,
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

    request = __qmi_message_wms_get_routes_request_create (
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
                             (GAsyncReadyCallback)get_routes_ready,
                             task);
}


QmiMessageWmsSendAckOutput *
qmi_client_wms_send_ack_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
send_ack_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsSendAckOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_send_ack_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_send_ack_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_send_ack (
    QmiClientWms *self,
    QmiMessageWmsSendAckInput *input,
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

    request = __qmi_message_wms_send_ack_request_create (
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
                             (GAsyncReadyCallback)send_ack_ready,
                             task);
}


QmiMessageWmsSetBroadcastActivationOutput *
qmi_client_wms_set_broadcast_activation_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_broadcast_activation_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsSetBroadcastActivationOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_set_broadcast_activation_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_set_broadcast_activation_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_set_broadcast_activation (
    QmiClientWms *self,
    QmiMessageWmsSetBroadcastActivationInput *input,
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

    request = __qmi_message_wms_set_broadcast_activation_request_create (
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
                             (GAsyncReadyCallback)set_broadcast_activation_ready,
                             task);
}


QmiMessageWmsSetBroadcastConfigOutput *
qmi_client_wms_set_broadcast_config_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_broadcast_config_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsSetBroadcastConfigOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_set_broadcast_config_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_set_broadcast_config_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_set_broadcast_config (
    QmiClientWms *self,
    QmiMessageWmsSetBroadcastConfigInput *input,
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

    request = __qmi_message_wms_set_broadcast_config_request_create (
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
                             (GAsyncReadyCallback)set_broadcast_config_ready,
                             task);
}


QmiMessageWmsGetBroadcastConfigOutput *
qmi_client_wms_get_broadcast_config_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_broadcast_config_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsGetBroadcastConfigOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_get_broadcast_config_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_get_broadcast_config_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_get_broadcast_config (
    QmiClientWms *self,
    QmiMessageWmsGetBroadcastConfigInput *input,
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

    request = __qmi_message_wms_get_broadcast_config_request_create (
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
                             (GAsyncReadyCallback)get_broadcast_config_ready,
                             task);
}


QmiMessageWmsSendFromMemoryStorageOutput *
qmi_client_wms_send_from_memory_storage_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
send_from_memory_storage_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsSendFromMemoryStorageOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_send_from_memory_storage_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_send_from_memory_storage_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_send_from_memory_storage (
    QmiClientWms *self,
    QmiMessageWmsSendFromMemoryStorageInput *input,
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

    request = __qmi_message_wms_send_from_memory_storage_request_create (
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
                             (GAsyncReadyCallback)send_from_memory_storage_ready,
                             task);
}


QmiMessageWmsIndicationRegisterOutput *
qmi_client_wms_indication_register_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
indication_register_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsIndicationRegisterOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_indication_register_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_indication_register_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_indication_register (
    QmiClientWms *self,
    QmiMessageWmsIndicationRegisterInput *input,
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

    request = __qmi_message_wms_indication_register_request_create (
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
                             (GAsyncReadyCallback)indication_register_ready,
                             task);
}


QmiMessageWmsGetTransportNetworkRegistrationStatusOutput *
qmi_client_wms_get_transport_network_registration_status_finish (
    QmiClientWms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_transport_network_registration_status_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWmsGetTransportNetworkRegistrationStatusOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wms_get_transport_network_registration_status_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wms_get_transport_network_registration_status_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wms_get_transport_network_registration_status (
    QmiClientWms *self,
    QmiMessageWmsGetTransportNetworkRegistrationStatusInput *input,
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

    request = __qmi_message_wms_get_transport_network_registration_status_request_create (
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
                             (GAsyncReadyCallback)get_transport_network_registration_status_ready,
                             task);
}

