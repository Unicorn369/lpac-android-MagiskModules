
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

#include "qmi-pds.h"
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
    QMI_MESSAGE_PDS_RESET = 0x0000,
    QMI_MESSAGE_PDS_SET_EVENT_REPORT = 0x0001,
    QMI_MESSAGE_PDS_GET_GPS_SERVICE_STATE = 0x0020,
    QMI_MESSAGE_PDS_SET_GPS_SERVICE_STATE = 0x0021,
    QMI_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION = 0x0029,
    QMI_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION = 0x002A,
    QMI_MESSAGE_PDS_GET_AGPS_CONFIG = 0x002E,
    QMI_MESSAGE_PDS_SET_AGPS_CONFIG = 0x002F,
    QMI_MESSAGE_PDS_GET_AUTO_TRACKING_STATE = 0x0030,
    QMI_MESSAGE_PDS_SET_AUTO_TRACKING_STATE = 0x0031,
} QmiMessagePds;


typedef enum {
    QMI_INDICATION_PDS_EVENT_REPORT = 0x0001,
    QMI_INDICATION_PDS_GPS_READY = 0x0060,
} QmiIndicationPds;


/*****************************************************************************/
/* INDICATION: Qmi Indication PDS Event Report */


/* --- Output -- */

struct _QmiIndicationPdsEventReportOutput {
    volatile gint ref_count;

    /* Position Session Status */
    gboolean arg_position_session_status_set;
    guint8 arg_position_session_status;

    /* Extended NMEA Position */
    gboolean arg_extended_nmea_position_set;
    gint8 arg_extended_nmea_position_operation_mode;
    gchar *arg_extended_nmea_position_nmea;

    /* NMEA Position */
    gboolean arg_nmea_position_set;
    gchar *arg_nmea_position;
};

#define QMI_INDICATION_PDS_EVENT_REPORT_OUTPUT_TLV_POSITION_SESSION_STATUS 0x12
#define QMI_INDICATION_PDS_EVENT_REPORT_OUTPUT_TLV_EXTENDED_NMEA_POSITION 0x11
#define QMI_INDICATION_PDS_EVENT_REPORT_OUTPUT_TLV_NMEA_POSITION 0x10

gboolean
qmi_indication_pds_event_report_output_get_position_session_status (
    QmiIndicationPdsEventReportOutput *self,
    QmiPdsPositionSessionStatus *value_position_session_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_position_session_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Position Session Status' was not found in the message");
        return FALSE;
    }

    if (value_position_session_status)
        *value_position_session_status = (QmiPdsPositionSessionStatus)(self->arg_position_session_status);

    return TRUE;
}

gboolean
qmi_indication_pds_event_report_output_get_extended_nmea_position (
    QmiIndicationPdsEventReportOutput *self,
    QmiPdsOperationMode *value_extended_nmea_position_operation_mode,
    const gchar **value_extended_nmea_position_nmea,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_extended_nmea_position_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Extended NMEA Position' was not found in the message");
        return FALSE;
    }

    if (value_extended_nmea_position_operation_mode)
        *value_extended_nmea_position_operation_mode = (QmiPdsOperationMode)(self->arg_extended_nmea_position_operation_mode);
    if (value_extended_nmea_position_nmea)
        *value_extended_nmea_position_nmea = self->arg_extended_nmea_position_nmea;

    return TRUE;
}

gboolean
qmi_indication_pds_event_report_output_get_nmea_position (
    QmiIndicationPdsEventReportOutput *self,
    const gchar **value_nmea_position,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_nmea_position_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'NMEA Position' was not found in the message");
        return FALSE;
    }

    if (value_nmea_position)
        *value_nmea_position = self->arg_nmea_position;

    return TRUE;
}

GType
qmi_indication_pds_event_report_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationPdsEventReportOutput"),
                                          (GBoxedCopyFunc) qmi_indication_pds_event_report_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_pds_event_report_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationPdsEventReportOutput *
qmi_indication_pds_event_report_output_ref (QmiIndicationPdsEventReportOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_pds_event_report_output_unref (QmiIndicationPdsEventReportOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_extended_nmea_position_nmea, (GDestroyNotify)g_free);
        g_clear_pointer (&self->arg_nmea_position, (GDestroyNotify)g_free);
        g_slice_free (QmiIndicationPdsEventReportOutput, self);
    }
}

static gchar *
qmi_indication_pds_event_report_output_position_session_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDS_EVENT_REPORT_OUTPUT_TLV_POSITION_SESSION_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDS_POSITION_SESSION_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pds_position_session_status_get_string ((QmiPdsPositionSessionStatus)tmp));
#elif defined  __QMI_PDS_POSITION_SESSION_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pds_position_session_status_build_string_from_mask ((QmiPdsPositionSessionStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdsPositionSessionStatus
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
qmi_indication_pds_event_report_output_extended_nmea_position_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDS_EVENT_REPORT_OUTPUT_TLV_EXTENDED_NMEA_POSITION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " operation_mode = '");

    {
        gint8 tmp;

        if (!qmi_message_tlv_read_gint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDS_OPERATION_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pds_operation_mode_get_string ((QmiPdsOperationMode)tmp));
#elif defined  __QMI_PDS_OPERATION_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pds_operation_mode_build_string_from_mask ((QmiPdsOperationMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdsOperationMode
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " nmea = '");

    {
        g_autofree gchar *tmp = NULL;

        if (!qmi_message_tlv_read_string (message, init_offset, &offset, 2, 200, &tmp, &error))
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

static gchar *
qmi_indication_pds_event_report_output_nmea_position_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDS_EVENT_REPORT_OUTPUT_TLV_NMEA_POSITION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        g_autofree gchar *tmp = NULL;

        if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 200, &tmp, &error))
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
        case QMI_INDICATION_PDS_EVENT_REPORT_OUTPUT_TLV_POSITION_SESSION_STATUS:
            tlv_type_str = "Position Session Status";
            translated_value = qmi_indication_pds_event_report_output_position_session_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDS_EVENT_REPORT_OUTPUT_TLV_EXTENDED_NMEA_POSITION:
            tlv_type_str = "Extended NMEA Position";
            translated_value = qmi_indication_pds_event_report_output_extended_nmea_position_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDS_EVENT_REPORT_OUTPUT_TLV_NMEA_POSITION:
            tlv_type_str = "NMEA Position";
            translated_value = qmi_indication_pds_event_report_output_nmea_position_get_printable (
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

QmiIndicationPdsEventReportOutput *
qmi_indication_pds_event_report_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationPdsEventReportOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_PDS_EVENT_REPORT);

    self = g_slice_new0 (QmiIndicationPdsEventReportOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDS_EVENT_REPORT_OUTPUT_TLV_POSITION_SESSION_STATUS, NULL, NULL)) == 0) {
                goto qmi_indication_pds_event_report_output_position_session_status_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_pds_event_report_output_position_session_status_out;
                self->arg_position_session_status = (QmiPdsPositionSessionStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Position Session Status' TLV", offset);
            }

            self->arg_position_session_status_set = TRUE;

qmi_indication_pds_event_report_output_position_session_status_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDS_EVENT_REPORT_OUTPUT_TLV_EXTENDED_NMEA_POSITION, NULL, NULL)) == 0) {
                goto qmi_indication_pds_event_report_output_extended_nmea_position_out;
            }
            {
                gint8 tmp;

                if (!qmi_message_tlv_read_gint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_pds_event_report_output_extended_nmea_position_out;
                self->arg_extended_nmea_position_operation_mode = (QmiPdsOperationMode)tmp;
            }
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 2, 200, &(self->arg_extended_nmea_position_nmea), NULL))
                goto qmi_indication_pds_event_report_output_extended_nmea_position_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Extended NMEA Position' TLV", offset);
            }

            self->arg_extended_nmea_position_set = TRUE;

qmi_indication_pds_event_report_output_extended_nmea_position_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDS_EVENT_REPORT_OUTPUT_TLV_NMEA_POSITION, NULL, NULL)) == 0) {
                goto qmi_indication_pds_event_report_output_nmea_position_out;
            }
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 200, &(self->arg_nmea_position), NULL))
                goto qmi_indication_pds_event_report_output_nmea_position_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'NMEA Position' TLV", offset);
            }

            self->arg_nmea_position_set = TRUE;

qmi_indication_pds_event_report_output_nmea_position_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication PDS GPS Ready */


/* --- Output -- */

/* Note: no fields in the Output container */

static gchar *
indication_gps_ready_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"GPS Ready\" (0x0060)\n",
                            line_prefix);

    return g_string_free (printable, FALSE);
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_pds_reset_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDS_RESET);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdsResetOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDS_RESET_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pds_reset_output_get_result (
    QmiMessagePdsResetOutput *self,
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
qmi_message_pds_reset_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsResetOutput"),
                                          (GBoxedCopyFunc) qmi_message_pds_reset_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_reset_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsResetOutput *
qmi_message_pds_reset_output_ref (QmiMessagePdsResetOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_reset_output_unref (QmiMessagePdsResetOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsResetOutput, self);
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_PDS_RESET_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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
        case QMI_MESSAGE_PDS_RESET_OUTPUT_TLV_RESULT:
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

QmiMessagePdsResetOutput *
qmi_message_pds_reset_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdsResetOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDS_RESET);

    self = g_slice_new0 (QmiMessagePdsResetOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_RESET_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pds_reset_output_unref (self);
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
                qmi_message_pds_reset_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set Event Report */


/* --- Input -- */

struct _QmiMessagePdsSetEventReportInput {
    volatile gint ref_count;

    /* Extended External XTRA Data Request Reporting */
    gboolean arg_extended_external_xtra_data_request_reporting_set;
    guint8 arg_extended_external_xtra_data_request_reporting;

    /* NMEA Debug Strings Reporting */
    gboolean arg_nmea_debug_strings_reporting_set;
    guint8 arg_nmea_debug_strings_reporting;

    /* Heading Uncertainty Reporting */
    gboolean arg_heading_uncertainty_reporting_set;
    guint8 arg_heading_uncertainty_reporting;

    /* Time Source Information Reporting */
    gboolean arg_time_source_information_reporting_set;
    guint8 arg_time_source_information_reporting;

    /* Sensor Data Usage Indicator Reporting */
    gboolean arg_sensor_data_usage_indicator_reporting_set;
    guint8 arg_sensor_data_usage_indicator_reporting;

    /* Position Reliability Indicator Reporting */
    gboolean arg_position_reliability_indicator_reporting_set;
    guint8 arg_position_reliability_indicator_reporting;

    /* Time Sync Request Reporting */
    gboolean arg_time_sync_request_reporting_set;
    guint8 arg_time_sync_request_reporting;

    /* Gyro Data Streaming Ready Reporting */
    gboolean arg_gyro_data_streaming_ready_reporting_set;
    guint8 arg_gyro_data_streaming_ready_reporting;

    /* Accelerometer Data Streaming Ready Reporting */
    gboolean arg_accelerometer_data_streaming_ready_reporting_set;
    guint8 arg_accelerometer_data_streaming_ready_reporting;

    /* PDS Comm Event Reporting */
    gboolean arg_pds_comm_event_reporting_set;
    guint8 arg_pds_comm_event_reporting;

    /* UMTS CP Network Initiated Prompt Reporting */
    gboolean arg_umts_cp_network_initiated_prompt_reporting_set;
    guint8 arg_umts_cp_network_initiated_prompt_reporting;

    /* SUPL Network Initiated Prompt Reporting */
    gboolean arg_supl_network_initiated_prompt_reporting_set;
    guint8 arg_supl_network_initiated_prompt_reporting;

    /* VX Network Initiated Request Reporting */
    gboolean arg_vx_network_initiated_request_reporting_set;
    guint8 arg_vx_network_initiated_request_reporting;

    /* Satellite Information Reporting */
    gboolean arg_satellite_information_reporting_set;
    guint8 arg_satellite_information_reporting;

    /* External WIFI Position Request Reporting */
    gboolean arg_external_wifi_position_request_reporting_set;
    guint8 arg_external_wifi_position_request_reporting;

    /* External Time Injection Request Reporting */
    gboolean arg_external_time_injection_request_reporting_set;
    guint8 arg_external_time_injection_request_reporting;

    /* External XTRA Data Request Reporting */
    gboolean arg_external_xtra_data_request_reporting_set;
    guint8 arg_external_xtra_data_request_reporting;

    /* Parsed Position Reporting */
    gboolean arg_parsed_position_reporting_set;
    guint8 arg_parsed_position_reporting;

    /* Extended NMEA Position Reporting */
    gboolean arg_extended_nmea_position_reporting_set;
    guint8 arg_extended_nmea_position_reporting;

    /* NMEA Position Reporting */
    gboolean arg_nmea_position_reporting_set;
    guint8 arg_nmea_position_reporting;
};

#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTENDED_EXTERNAL_XTRA_DATA_REQUEST_REPORTING 0x23
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_NMEA_DEBUG_STRINGS_REPORTING 0x22
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_HEADING_UNCERTAINTY_REPORTING 0x21
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_TIME_SOURCE_INFORMATION_REPORTING 0x20
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_SENSOR_DATA_USAGE_INDICATOR_REPORTING 0x1F
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_POSITION_RELIABILITY_INDICATOR_REPORTING 0x1E
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_TIME_SYNC_REQUEST_REPORTING 0x1D
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_GYRO_DATA_STREAMING_READY_REPORTING 0x1C
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_ACCELEROMETER_DATA_STREAMING_READY_REPORTING 0x1B
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_PDS_COMM_EVENT_REPORTING 0x1A
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_UMTS_CP_NETWORK_INITIATED_PROMPT_REPORTING 0x19
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_SUPL_NETWORK_INITIATED_PROMPT_REPORTING 0x18
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_VX_NETWORK_INITIATED_REQUEST_REPORTING 0x17
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_SATELLITE_INFORMATION_REPORTING 0x16
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTERNAL_WIFI_POSITION_REQUEST_REPORTING 0x15
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTERNAL_TIME_INJECTION_REQUEST_REPORTING 0x14
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTERNAL_XTRA_DATA_REQUEST_REPORTING 0x13
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_PARSED_POSITION_REPORTING 0x12
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTENDED_NMEA_POSITION_REPORTING 0x11
#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_NMEA_POSITION_REPORTING 0x10

gboolean
qmi_message_pds_set_event_report_input_get_extended_external_xtra_data_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_extended_external_xtra_data_request_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_extended_external_xtra_data_request_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Extended External XTRA Data Request Reporting' was not found in the message");
        return FALSE;
    }

    if (value_extended_external_xtra_data_request_reporting)
        *value_extended_external_xtra_data_request_reporting = (gboolean)(self->arg_extended_external_xtra_data_request_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_extended_external_xtra_data_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_extended_external_xtra_data_request_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_extended_external_xtra_data_request_reporting = (guint8)(value_extended_external_xtra_data_request_reporting);
    self->arg_extended_external_xtra_data_request_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_nmea_debug_strings_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_nmea_debug_strings_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_nmea_debug_strings_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'NMEA Debug Strings Reporting' was not found in the message");
        return FALSE;
    }

    if (value_nmea_debug_strings_reporting)
        *value_nmea_debug_strings_reporting = (gboolean)(self->arg_nmea_debug_strings_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_nmea_debug_strings_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_nmea_debug_strings_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_nmea_debug_strings_reporting = (guint8)(value_nmea_debug_strings_reporting);
    self->arg_nmea_debug_strings_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_heading_uncertainty_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_heading_uncertainty_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_heading_uncertainty_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Heading Uncertainty Reporting' was not found in the message");
        return FALSE;
    }

    if (value_heading_uncertainty_reporting)
        *value_heading_uncertainty_reporting = (gboolean)(self->arg_heading_uncertainty_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_heading_uncertainty_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_heading_uncertainty_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_heading_uncertainty_reporting = (guint8)(value_heading_uncertainty_reporting);
    self->arg_heading_uncertainty_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_time_source_information_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_time_source_information_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_time_source_information_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Time Source Information Reporting' was not found in the message");
        return FALSE;
    }

    if (value_time_source_information_reporting)
        *value_time_source_information_reporting = (gboolean)(self->arg_time_source_information_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_time_source_information_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_time_source_information_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_time_source_information_reporting = (guint8)(value_time_source_information_reporting);
    self->arg_time_source_information_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_sensor_data_usage_indicator_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_sensor_data_usage_indicator_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_sensor_data_usage_indicator_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Sensor Data Usage Indicator Reporting' was not found in the message");
        return FALSE;
    }

    if (value_sensor_data_usage_indicator_reporting)
        *value_sensor_data_usage_indicator_reporting = (gboolean)(self->arg_sensor_data_usage_indicator_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_sensor_data_usage_indicator_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_sensor_data_usage_indicator_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_sensor_data_usage_indicator_reporting = (guint8)(value_sensor_data_usage_indicator_reporting);
    self->arg_sensor_data_usage_indicator_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_position_reliability_indicator_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_position_reliability_indicator_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_position_reliability_indicator_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Position Reliability Indicator Reporting' was not found in the message");
        return FALSE;
    }

    if (value_position_reliability_indicator_reporting)
        *value_position_reliability_indicator_reporting = (gboolean)(self->arg_position_reliability_indicator_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_position_reliability_indicator_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_position_reliability_indicator_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_position_reliability_indicator_reporting = (guint8)(value_position_reliability_indicator_reporting);
    self->arg_position_reliability_indicator_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_time_sync_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_time_sync_request_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_time_sync_request_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Time Sync Request Reporting' was not found in the message");
        return FALSE;
    }

    if (value_time_sync_request_reporting)
        *value_time_sync_request_reporting = (gboolean)(self->arg_time_sync_request_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_time_sync_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_time_sync_request_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_time_sync_request_reporting = (guint8)(value_time_sync_request_reporting);
    self->arg_time_sync_request_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_gyro_data_streaming_ready_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_gyro_data_streaming_ready_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_gyro_data_streaming_ready_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Gyro Data Streaming Ready Reporting' was not found in the message");
        return FALSE;
    }

    if (value_gyro_data_streaming_ready_reporting)
        *value_gyro_data_streaming_ready_reporting = (gboolean)(self->arg_gyro_data_streaming_ready_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_gyro_data_streaming_ready_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_gyro_data_streaming_ready_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_gyro_data_streaming_ready_reporting = (guint8)(value_gyro_data_streaming_ready_reporting);
    self->arg_gyro_data_streaming_ready_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_accelerometer_data_streaming_ready_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_accelerometer_data_streaming_ready_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_accelerometer_data_streaming_ready_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Accelerometer Data Streaming Ready Reporting' was not found in the message");
        return FALSE;
    }

    if (value_accelerometer_data_streaming_ready_reporting)
        *value_accelerometer_data_streaming_ready_reporting = (gboolean)(self->arg_accelerometer_data_streaming_ready_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_accelerometer_data_streaming_ready_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_accelerometer_data_streaming_ready_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_accelerometer_data_streaming_ready_reporting = (guint8)(value_accelerometer_data_streaming_ready_reporting);
    self->arg_accelerometer_data_streaming_ready_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_pds_comm_event_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_pds_comm_event_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_pds_comm_event_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'PDS Comm Event Reporting' was not found in the message");
        return FALSE;
    }

    if (value_pds_comm_event_reporting)
        *value_pds_comm_event_reporting = (gboolean)(self->arg_pds_comm_event_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_pds_comm_event_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_pds_comm_event_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_pds_comm_event_reporting = (guint8)(value_pds_comm_event_reporting);
    self->arg_pds_comm_event_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_umts_cp_network_initiated_prompt_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_umts_cp_network_initiated_prompt_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_umts_cp_network_initiated_prompt_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'UMTS CP Network Initiated Prompt Reporting' was not found in the message");
        return FALSE;
    }

    if (value_umts_cp_network_initiated_prompt_reporting)
        *value_umts_cp_network_initiated_prompt_reporting = (gboolean)(self->arg_umts_cp_network_initiated_prompt_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_umts_cp_network_initiated_prompt_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_umts_cp_network_initiated_prompt_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_umts_cp_network_initiated_prompt_reporting = (guint8)(value_umts_cp_network_initiated_prompt_reporting);
    self->arg_umts_cp_network_initiated_prompt_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_supl_network_initiated_prompt_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_supl_network_initiated_prompt_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_supl_network_initiated_prompt_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'SUPL Network Initiated Prompt Reporting' was not found in the message");
        return FALSE;
    }

    if (value_supl_network_initiated_prompt_reporting)
        *value_supl_network_initiated_prompt_reporting = (gboolean)(self->arg_supl_network_initiated_prompt_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_supl_network_initiated_prompt_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_supl_network_initiated_prompt_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_supl_network_initiated_prompt_reporting = (guint8)(value_supl_network_initiated_prompt_reporting);
    self->arg_supl_network_initiated_prompt_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_vx_network_initiated_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_vx_network_initiated_request_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_vx_network_initiated_request_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'VX Network Initiated Request Reporting' was not found in the message");
        return FALSE;
    }

    if (value_vx_network_initiated_request_reporting)
        *value_vx_network_initiated_request_reporting = (gboolean)(self->arg_vx_network_initiated_request_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_vx_network_initiated_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_vx_network_initiated_request_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_vx_network_initiated_request_reporting = (guint8)(value_vx_network_initiated_request_reporting);
    self->arg_vx_network_initiated_request_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_satellite_information_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_satellite_information_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_satellite_information_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Satellite Information Reporting' was not found in the message");
        return FALSE;
    }

    if (value_satellite_information_reporting)
        *value_satellite_information_reporting = (gboolean)(self->arg_satellite_information_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_satellite_information_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_satellite_information_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_satellite_information_reporting = (guint8)(value_satellite_information_reporting);
    self->arg_satellite_information_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_external_wifi_position_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_external_wifi_position_request_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_external_wifi_position_request_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'External WIFI Position Request Reporting' was not found in the message");
        return FALSE;
    }

    if (value_external_wifi_position_request_reporting)
        *value_external_wifi_position_request_reporting = (gboolean)(self->arg_external_wifi_position_request_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_external_wifi_position_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_external_wifi_position_request_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_external_wifi_position_request_reporting = (guint8)(value_external_wifi_position_request_reporting);
    self->arg_external_wifi_position_request_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_external_time_injection_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_external_time_injection_request_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_external_time_injection_request_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'External Time Injection Request Reporting' was not found in the message");
        return FALSE;
    }

    if (value_external_time_injection_request_reporting)
        *value_external_time_injection_request_reporting = (gboolean)(self->arg_external_time_injection_request_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_external_time_injection_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_external_time_injection_request_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_external_time_injection_request_reporting = (guint8)(value_external_time_injection_request_reporting);
    self->arg_external_time_injection_request_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_external_xtra_data_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_external_xtra_data_request_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_external_xtra_data_request_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'External XTRA Data Request Reporting' was not found in the message");
        return FALSE;
    }

    if (value_external_xtra_data_request_reporting)
        *value_external_xtra_data_request_reporting = (gboolean)(self->arg_external_xtra_data_request_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_external_xtra_data_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_external_xtra_data_request_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_external_xtra_data_request_reporting = (guint8)(value_external_xtra_data_request_reporting);
    self->arg_external_xtra_data_request_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_parsed_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_parsed_position_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_parsed_position_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Parsed Position Reporting' was not found in the message");
        return FALSE;
    }

    if (value_parsed_position_reporting)
        *value_parsed_position_reporting = (gboolean)(self->arg_parsed_position_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_parsed_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_parsed_position_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_parsed_position_reporting = (guint8)(value_parsed_position_reporting);
    self->arg_parsed_position_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_extended_nmea_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_extended_nmea_position_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_extended_nmea_position_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Extended NMEA Position Reporting' was not found in the message");
        return FALSE;
    }

    if (value_extended_nmea_position_reporting)
        *value_extended_nmea_position_reporting = (gboolean)(self->arg_extended_nmea_position_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_extended_nmea_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_extended_nmea_position_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_extended_nmea_position_reporting = (guint8)(value_extended_nmea_position_reporting);
    self->arg_extended_nmea_position_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_get_nmea_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_nmea_position_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_nmea_position_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'NMEA Position Reporting' was not found in the message");
        return FALSE;
    }

    if (value_nmea_position_reporting)
        *value_nmea_position_reporting = (gboolean)(self->arg_nmea_position_reporting);

    return TRUE;
}

gboolean
qmi_message_pds_set_event_report_input_set_nmea_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_nmea_position_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_nmea_position_reporting = (guint8)(value_nmea_position_reporting);
    self->arg_nmea_position_reporting_set = TRUE;

    return TRUE;
}

GType
qmi_message_pds_set_event_report_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsSetEventReportInput"),
                                          (GBoxedCopyFunc) qmi_message_pds_set_event_report_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_set_event_report_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsSetEventReportInput *
qmi_message_pds_set_event_report_input_ref (QmiMessagePdsSetEventReportInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_set_event_report_input_unref (QmiMessagePdsSetEventReportInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsSetEventReportInput, self);
    }
}

QmiMessagePdsSetEventReportInput *
qmi_message_pds_set_event_report_input_new (void)
{
    QmiMessagePdsSetEventReportInput *self;

    self = g_slice_new0 (QmiMessagePdsSetEventReportInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pds_set_event_report_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdsSetEventReportInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDS_SET_EVENT_REPORT);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Extended External XTRA Data Request Reporting' TLV */
    if (input->arg_extended_external_xtra_data_request_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTENDED_EXTERNAL_XTRA_DATA_REQUEST_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Extended External XTRA Data Request Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_extended_external_xtra_data_request_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Extended External XTRA Data Request Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Extended External XTRA Data Request Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'NMEA Debug Strings Reporting' TLV */
    if (input->arg_nmea_debug_strings_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_NMEA_DEBUG_STRINGS_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'NMEA Debug Strings Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_nmea_debug_strings_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'NMEA Debug Strings Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'NMEA Debug Strings Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'Heading Uncertainty Reporting' TLV */
    if (input->arg_heading_uncertainty_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_HEADING_UNCERTAINTY_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Heading Uncertainty Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_heading_uncertainty_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Heading Uncertainty Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Heading Uncertainty Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'Time Source Information Reporting' TLV */
    if (input->arg_time_source_information_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_TIME_SOURCE_INFORMATION_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Time Source Information Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_time_source_information_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Time Source Information Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Time Source Information Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'Sensor Data Usage Indicator Reporting' TLV */
    if (input->arg_sensor_data_usage_indicator_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_SENSOR_DATA_USAGE_INDICATOR_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Sensor Data Usage Indicator Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_sensor_data_usage_indicator_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Sensor Data Usage Indicator Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Sensor Data Usage Indicator Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'Position Reliability Indicator Reporting' TLV */
    if (input->arg_position_reliability_indicator_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_POSITION_RELIABILITY_INDICATOR_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Position Reliability Indicator Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_position_reliability_indicator_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Position Reliability Indicator Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Position Reliability Indicator Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'Time Sync Request Reporting' TLV */
    if (input->arg_time_sync_request_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_TIME_SYNC_REQUEST_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Time Sync Request Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_time_sync_request_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Time Sync Request Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Time Sync Request Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'Gyro Data Streaming Ready Reporting' TLV */
    if (input->arg_gyro_data_streaming_ready_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_GYRO_DATA_STREAMING_READY_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Gyro Data Streaming Ready Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_gyro_data_streaming_ready_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Gyro Data Streaming Ready Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Gyro Data Streaming Ready Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'Accelerometer Data Streaming Ready Reporting' TLV */
    if (input->arg_accelerometer_data_streaming_ready_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_ACCELEROMETER_DATA_STREAMING_READY_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Accelerometer Data Streaming Ready Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_accelerometer_data_streaming_ready_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Accelerometer Data Streaming Ready Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Accelerometer Data Streaming Ready Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'PDS Comm Event Reporting' TLV */
    if (input->arg_pds_comm_event_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_PDS_COMM_EVENT_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'PDS Comm Event Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_pds_comm_event_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'PDS Comm Event Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'PDS Comm Event Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'UMTS CP Network Initiated Prompt Reporting' TLV */
    if (input->arg_umts_cp_network_initiated_prompt_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_UMTS_CP_NETWORK_INITIATED_PROMPT_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'UMTS CP Network Initiated Prompt Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_umts_cp_network_initiated_prompt_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'UMTS CP Network Initiated Prompt Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'UMTS CP Network Initiated Prompt Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'SUPL Network Initiated Prompt Reporting' TLV */
    if (input->arg_supl_network_initiated_prompt_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_SUPL_NETWORK_INITIATED_PROMPT_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'SUPL Network Initiated Prompt Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_supl_network_initiated_prompt_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'SUPL Network Initiated Prompt Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'SUPL Network Initiated Prompt Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'VX Network Initiated Request Reporting' TLV */
    if (input->arg_vx_network_initiated_request_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_VX_NETWORK_INITIATED_REQUEST_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'VX Network Initiated Request Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_vx_network_initiated_request_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'VX Network Initiated Request Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'VX Network Initiated Request Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'Satellite Information Reporting' TLV */
    if (input->arg_satellite_information_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_SATELLITE_INFORMATION_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Satellite Information Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_satellite_information_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Satellite Information Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Satellite Information Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'External WIFI Position Request Reporting' TLV */
    if (input->arg_external_wifi_position_request_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTERNAL_WIFI_POSITION_REQUEST_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'External WIFI Position Request Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_external_wifi_position_request_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'External WIFI Position Request Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'External WIFI Position Request Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'External Time Injection Request Reporting' TLV */
    if (input->arg_external_time_injection_request_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTERNAL_TIME_INJECTION_REQUEST_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'External Time Injection Request Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_external_time_injection_request_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'External Time Injection Request Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'External Time Injection Request Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'External XTRA Data Request Reporting' TLV */
    if (input->arg_external_xtra_data_request_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTERNAL_XTRA_DATA_REQUEST_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'External XTRA Data Request Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_external_xtra_data_request_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'External XTRA Data Request Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'External XTRA Data Request Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'Parsed Position Reporting' TLV */
    if (input->arg_parsed_position_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_PARSED_POSITION_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Parsed Position Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_parsed_position_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Parsed Position Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Parsed Position Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'Extended NMEA Position Reporting' TLV */
    if (input->arg_extended_nmea_position_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTENDED_NMEA_POSITION_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Extended NMEA Position Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_extended_nmea_position_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Extended NMEA Position Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Extended NMEA Position Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'NMEA Position Reporting' TLV */
    if (input->arg_nmea_position_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_NMEA_POSITION_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'NMEA Position Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_nmea_position_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'NMEA Position Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'NMEA Position Reporting': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdsSetEventReportOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDS_SET_EVENT_REPORT_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pds_set_event_report_output_get_result (
    QmiMessagePdsSetEventReportOutput *self,
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
qmi_message_pds_set_event_report_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsSetEventReportOutput"),
                                          (GBoxedCopyFunc) qmi_message_pds_set_event_report_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_set_event_report_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsSetEventReportOutput *
qmi_message_pds_set_event_report_output_ref (QmiMessagePdsSetEventReportOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_set_event_report_output_unref (QmiMessagePdsSetEventReportOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsSetEventReportOutput, self);
    }
}

static gchar *
qmi_message_pds_set_event_report_input_extended_external_xtra_data_request_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTENDED_EXTERNAL_XTRA_DATA_REQUEST_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_nmea_debug_strings_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_NMEA_DEBUG_STRINGS_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_heading_uncertainty_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_HEADING_UNCERTAINTY_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_time_source_information_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_TIME_SOURCE_INFORMATION_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_sensor_data_usage_indicator_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_SENSOR_DATA_USAGE_INDICATOR_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_position_reliability_indicator_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_POSITION_RELIABILITY_INDICATOR_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_time_sync_request_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_TIME_SYNC_REQUEST_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_gyro_data_streaming_ready_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_GYRO_DATA_STREAMING_READY_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_accelerometer_data_streaming_ready_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_ACCELEROMETER_DATA_STREAMING_READY_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_pds_comm_event_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_PDS_COMM_EVENT_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_umts_cp_network_initiated_prompt_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_UMTS_CP_NETWORK_INITIATED_PROMPT_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_supl_network_initiated_prompt_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_SUPL_NETWORK_INITIATED_PROMPT_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_vx_network_initiated_request_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_VX_NETWORK_INITIATED_REQUEST_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_satellite_information_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_SATELLITE_INFORMATION_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_external_wifi_position_request_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTERNAL_WIFI_POSITION_REQUEST_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_external_time_injection_request_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTERNAL_TIME_INJECTION_REQUEST_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_external_xtra_data_request_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTERNAL_XTRA_DATA_REQUEST_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_parsed_position_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_PARSED_POSITION_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_extended_nmea_position_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTENDED_NMEA_POSITION_REPORTING, NULL, NULL)) == 0)
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
qmi_message_pds_set_event_report_input_nmea_position_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_NMEA_POSITION_REPORTING, NULL, NULL)) == 0)
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
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTENDED_EXTERNAL_XTRA_DATA_REQUEST_REPORTING:
            tlv_type_str = "Extended External XTRA Data Request Reporting";
            translated_value = qmi_message_pds_set_event_report_input_extended_external_xtra_data_request_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_NMEA_DEBUG_STRINGS_REPORTING:
            tlv_type_str = "NMEA Debug Strings Reporting";
            translated_value = qmi_message_pds_set_event_report_input_nmea_debug_strings_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_HEADING_UNCERTAINTY_REPORTING:
            tlv_type_str = "Heading Uncertainty Reporting";
            translated_value = qmi_message_pds_set_event_report_input_heading_uncertainty_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_TIME_SOURCE_INFORMATION_REPORTING:
            tlv_type_str = "Time Source Information Reporting";
            translated_value = qmi_message_pds_set_event_report_input_time_source_information_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_SENSOR_DATA_USAGE_INDICATOR_REPORTING:
            tlv_type_str = "Sensor Data Usage Indicator Reporting";
            translated_value = qmi_message_pds_set_event_report_input_sensor_data_usage_indicator_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_POSITION_RELIABILITY_INDICATOR_REPORTING:
            tlv_type_str = "Position Reliability Indicator Reporting";
            translated_value = qmi_message_pds_set_event_report_input_position_reliability_indicator_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_TIME_SYNC_REQUEST_REPORTING:
            tlv_type_str = "Time Sync Request Reporting";
            translated_value = qmi_message_pds_set_event_report_input_time_sync_request_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_GYRO_DATA_STREAMING_READY_REPORTING:
            tlv_type_str = "Gyro Data Streaming Ready Reporting";
            translated_value = qmi_message_pds_set_event_report_input_gyro_data_streaming_ready_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_ACCELEROMETER_DATA_STREAMING_READY_REPORTING:
            tlv_type_str = "Accelerometer Data Streaming Ready Reporting";
            translated_value = qmi_message_pds_set_event_report_input_accelerometer_data_streaming_ready_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_PDS_COMM_EVENT_REPORTING:
            tlv_type_str = "PDS Comm Event Reporting";
            translated_value = qmi_message_pds_set_event_report_input_pds_comm_event_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_UMTS_CP_NETWORK_INITIATED_PROMPT_REPORTING:
            tlv_type_str = "UMTS CP Network Initiated Prompt Reporting";
            translated_value = qmi_message_pds_set_event_report_input_umts_cp_network_initiated_prompt_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_SUPL_NETWORK_INITIATED_PROMPT_REPORTING:
            tlv_type_str = "SUPL Network Initiated Prompt Reporting";
            translated_value = qmi_message_pds_set_event_report_input_supl_network_initiated_prompt_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_VX_NETWORK_INITIATED_REQUEST_REPORTING:
            tlv_type_str = "VX Network Initiated Request Reporting";
            translated_value = qmi_message_pds_set_event_report_input_vx_network_initiated_request_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_SATELLITE_INFORMATION_REPORTING:
            tlv_type_str = "Satellite Information Reporting";
            translated_value = qmi_message_pds_set_event_report_input_satellite_information_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTERNAL_WIFI_POSITION_REQUEST_REPORTING:
            tlv_type_str = "External WIFI Position Request Reporting";
            translated_value = qmi_message_pds_set_event_report_input_external_wifi_position_request_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTERNAL_TIME_INJECTION_REQUEST_REPORTING:
            tlv_type_str = "External Time Injection Request Reporting";
            translated_value = qmi_message_pds_set_event_report_input_external_time_injection_request_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTERNAL_XTRA_DATA_REQUEST_REPORTING:
            tlv_type_str = "External XTRA Data Request Reporting";
            translated_value = qmi_message_pds_set_event_report_input_external_xtra_data_request_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_PARSED_POSITION_REPORTING:
            tlv_type_str = "Parsed Position Reporting";
            translated_value = qmi_message_pds_set_event_report_input_parsed_position_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_EXTENDED_NMEA_POSITION_REPORTING:
            tlv_type_str = "Extended NMEA Position Reporting";
            translated_value = qmi_message_pds_set_event_report_input_extended_nmea_position_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_INPUT_TLV_NMEA_POSITION_REPORTING:
            tlv_type_str = "NMEA Position Reporting";
            translated_value = qmi_message_pds_set_event_report_input_nmea_position_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDS_SET_EVENT_REPORT_OUTPUT_TLV_RESULT:
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

QmiMessagePdsSetEventReportOutput *
qmi_message_pds_set_event_report_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdsSetEventReportOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDS_SET_EVENT_REPORT);

    self = g_slice_new0 (QmiMessagePdsSetEventReportOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_EVENT_REPORT_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pds_set_event_report_output_unref (self);
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
                qmi_message_pds_set_event_report_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Get GPS Service State */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_pds_get_gps_service_state_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDS_GET_GPS_SERVICE_STATE);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdsGetGpsServiceStateOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* State */
    gboolean arg_state_set;
    guint8 arg_state_gps_service_state;
    guint8 arg_state_tracking_session_state;
};

#define QMI_MESSAGE_PDS_GET_GPS_SERVICE_STATE_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_PDS_GET_GPS_SERVICE_STATE_OUTPUT_TLV_STATE 0x01

gboolean
qmi_message_pds_get_gps_service_state_output_get_result (
    QmiMessagePdsGetGpsServiceStateOutput *self,
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
qmi_message_pds_get_gps_service_state_output_get_state (
    QmiMessagePdsGetGpsServiceStateOutput *self,
    gboolean *value_state_gps_service_state,
    QmiPdsTrackingSessionState *value_state_tracking_session_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_state_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'State' was not found in the message");
        return FALSE;
    }

    if (value_state_gps_service_state)
        *value_state_gps_service_state = (gboolean)(self->arg_state_gps_service_state);
    if (value_state_tracking_session_state)
        *value_state_tracking_session_state = (QmiPdsTrackingSessionState)(self->arg_state_tracking_session_state);

    return TRUE;
}

GType
qmi_message_pds_get_gps_service_state_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsGetGpsServiceStateOutput"),
                                          (GBoxedCopyFunc) qmi_message_pds_get_gps_service_state_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_get_gps_service_state_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsGetGpsServiceStateOutput *
qmi_message_pds_get_gps_service_state_output_ref (QmiMessagePdsGetGpsServiceStateOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_get_gps_service_state_output_unref (QmiMessagePdsGetGpsServiceStateOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsGetGpsServiceStateOutput, self);
    }
}

static gchar *
qmi_message_pds_get_gps_service_state_output_state_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_GPS_SERVICE_STATE_OUTPUT_TLV_STATE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " gps_service_state = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " tracking_session_state = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDS_TRACKING_SESSION_STATE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pds_tracking_session_state_get_string ((QmiPdsTrackingSessionState)tmp));
#elif defined  __QMI_PDS_TRACKING_SESSION_STATE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pds_tracking_session_state_build_string_from_mask ((QmiPdsTrackingSessionState)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdsTrackingSessionState
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

struct message_get_gps_service_state_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_gps_service_state_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_gps_service_state_context *ctx)
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
        case QMI_MESSAGE_PDS_GET_GPS_SERVICE_STATE_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_GET_GPS_SERVICE_STATE_OUTPUT_TLV_STATE:
            tlv_type_str = "State";
            translated_value = qmi_message_pds_get_gps_service_state_output_state_get_printable (
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
message_get_gps_service_state_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get GPS Service State\" (0x0020)\n",
                            line_prefix);

    {
        struct message_get_gps_service_state_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_gps_service_state_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdsGetGpsServiceStateOutput *
qmi_message_pds_get_gps_service_state_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdsGetGpsServiceStateOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDS_GET_GPS_SERVICE_STATE);

    self = g_slice_new0 (QmiMessagePdsGetGpsServiceStateOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_GPS_SERVICE_STATE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pds_get_gps_service_state_output_unref (self);
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
                qmi_message_pds_get_gps_service_state_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_GPS_SERVICE_STATE_OUTPUT_TLV_STATE, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory State TLV: ");
                qmi_message_pds_get_gps_service_state_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_message_pds_get_gps_service_state_output_state_out;
                self->arg_state_gps_service_state = (gboolean)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_message_pds_get_gps_service_state_output_state_out;
                self->arg_state_tracking_session_state = (QmiPdsTrackingSessionState)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'State' TLV", offset);
            }

            self->arg_state_set = TRUE;

qmi_message_pds_get_gps_service_state_output_state_out:
            if (!self->arg_state_set) {
                qmi_message_pds_get_gps_service_state_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set GPS Service State */


/* --- Input -- */

struct _QmiMessagePdsSetGpsServiceStateInput {
    volatile gint ref_count;

    /* State */
    gboolean arg_state_set;
    guint8 arg_state_gps_service_state;
};

#define QMI_MESSAGE_PDS_SET_GPS_SERVICE_STATE_INPUT_TLV_STATE 0x01

gboolean
qmi_message_pds_set_gps_service_state_input_get_state (
    QmiMessagePdsSetGpsServiceStateInput *self,
    gboolean *value_state_gps_service_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_state_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'State' was not found in the message");
        return FALSE;
    }

    if (value_state_gps_service_state)
        *value_state_gps_service_state = (gboolean)(self->arg_state_gps_service_state);

    return TRUE;
}

gboolean
qmi_message_pds_set_gps_service_state_input_set_state (
    QmiMessagePdsSetGpsServiceStateInput *self,
    gboolean value_state_gps_service_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_state_gps_service_state = (guint8)(value_state_gps_service_state);
    self->arg_state_set = TRUE;

    return TRUE;
}

GType
qmi_message_pds_set_gps_service_state_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsSetGpsServiceStateInput"),
                                          (GBoxedCopyFunc) qmi_message_pds_set_gps_service_state_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_set_gps_service_state_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsSetGpsServiceStateInput *
qmi_message_pds_set_gps_service_state_input_ref (QmiMessagePdsSetGpsServiceStateInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_set_gps_service_state_input_unref (QmiMessagePdsSetGpsServiceStateInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsSetGpsServiceStateInput, self);
    }
}

QmiMessagePdsSetGpsServiceStateInput *
qmi_message_pds_set_gps_service_state_input_new (void)
{
    QmiMessagePdsSetGpsServiceStateInput *self;

    self = g_slice_new0 (QmiMessagePdsSetGpsServiceStateInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pds_set_gps_service_state_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdsSetGpsServiceStateInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDS_SET_GPS_SERVICE_STATE);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set GPS Service State' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'State' TLV */
    if (input->arg_state_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_GPS_SERVICE_STATE_INPUT_TLV_STATE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'State': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_state_gps_service_state;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'State': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'State': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'State' in message 'Set GPS Service State'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdsSetGpsServiceStateOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDS_SET_GPS_SERVICE_STATE_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pds_set_gps_service_state_output_get_result (
    QmiMessagePdsSetGpsServiceStateOutput *self,
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
qmi_message_pds_set_gps_service_state_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsSetGpsServiceStateOutput"),
                                          (GBoxedCopyFunc) qmi_message_pds_set_gps_service_state_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_set_gps_service_state_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsSetGpsServiceStateOutput *
qmi_message_pds_set_gps_service_state_output_ref (QmiMessagePdsSetGpsServiceStateOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_set_gps_service_state_output_unref (QmiMessagePdsSetGpsServiceStateOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsSetGpsServiceStateOutput, self);
    }
}

static gchar *
qmi_message_pds_set_gps_service_state_input_state_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_GPS_SERVICE_STATE_INPUT_TLV_STATE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " gps_service_state = '");

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

struct message_set_gps_service_state_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_gps_service_state_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_gps_service_state_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDS_SET_GPS_SERVICE_STATE_INPUT_TLV_STATE:
            tlv_type_str = "State";
            translated_value = qmi_message_pds_set_gps_service_state_input_state_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDS_SET_GPS_SERVICE_STATE_OUTPUT_TLV_RESULT:
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
message_set_gps_service_state_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set GPS Service State\" (0x0021)\n",
                            line_prefix);

    {
        struct message_set_gps_service_state_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_gps_service_state_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdsSetGpsServiceStateOutput *
qmi_message_pds_set_gps_service_state_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdsSetGpsServiceStateOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDS_SET_GPS_SERVICE_STATE);

    self = g_slice_new0 (QmiMessagePdsSetGpsServiceStateOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_GPS_SERVICE_STATE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pds_set_gps_service_state_output_unref (self);
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
                qmi_message_pds_set_gps_service_state_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Get Default Tracking Session */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_pds_get_default_tracking_session_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdsGetDefaultTrackingSessionOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Info */
    gboolean arg_info_set;
    guint8 arg_info_session_operation;
    guint8 arg_info_position_data_timeout;
    guint32 arg_info_interval;
    guint32 arg_info_accuracy_threshold;
};

#define QMI_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION_OUTPUT_TLV_INFO 0x01

gboolean
qmi_message_pds_get_default_tracking_session_output_get_result (
    QmiMessagePdsGetDefaultTrackingSessionOutput *self,
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
qmi_message_pds_get_default_tracking_session_output_get_info (
    QmiMessagePdsGetDefaultTrackingSessionOutput *self,
    QmiPdsOperatingMode *value_info_session_operation,
    guint8 *value_info_position_data_timeout,
    guint32 *value_info_interval,
    guint32 *value_info_accuracy_threshold,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Info' was not found in the message");
        return FALSE;
    }

    if (value_info_session_operation)
        *value_info_session_operation = (QmiPdsOperatingMode)(self->arg_info_session_operation);
    if (value_info_position_data_timeout)
        *value_info_position_data_timeout = self->arg_info_position_data_timeout;
    if (value_info_interval)
        *value_info_interval = self->arg_info_interval;
    if (value_info_accuracy_threshold)
        *value_info_accuracy_threshold = self->arg_info_accuracy_threshold;

    return TRUE;
}

GType
qmi_message_pds_get_default_tracking_session_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsGetDefaultTrackingSessionOutput"),
                                          (GBoxedCopyFunc) qmi_message_pds_get_default_tracking_session_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_get_default_tracking_session_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsGetDefaultTrackingSessionOutput *
qmi_message_pds_get_default_tracking_session_output_ref (QmiMessagePdsGetDefaultTrackingSessionOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_get_default_tracking_session_output_unref (QmiMessagePdsGetDefaultTrackingSessionOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsGetDefaultTrackingSessionOutput, self);
    }
}

static gchar *
qmi_message_pds_get_default_tracking_session_output_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION_OUTPUT_TLV_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " session_operation = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDS_OPERATING_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pds_operating_mode_get_string ((QmiPdsOperatingMode)tmp));
#elif defined  __QMI_PDS_OPERATING_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pds_operating_mode_build_string_from_mask ((QmiPdsOperatingMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdsOperatingMode
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " position_data_timeout = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " interval = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " accuracy_threshold = '");

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

struct message_get_default_tracking_session_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_default_tracking_session_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_default_tracking_session_context *ctx)
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
        case QMI_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION_OUTPUT_TLV_INFO:
            tlv_type_str = "Info";
            translated_value = qmi_message_pds_get_default_tracking_session_output_info_get_printable (
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
message_get_default_tracking_session_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Default Tracking Session\" (0x0029)\n",
                            line_prefix);

    {
        struct message_get_default_tracking_session_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_default_tracking_session_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdsGetDefaultTrackingSessionOutput *
qmi_message_pds_get_default_tracking_session_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdsGetDefaultTrackingSessionOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION);

    self = g_slice_new0 (QmiMessagePdsGetDefaultTrackingSessionOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pds_get_default_tracking_session_output_unref (self);
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
                qmi_message_pds_get_default_tracking_session_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION_OUTPUT_TLV_INFO, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Info TLV: ");
                qmi_message_pds_get_default_tracking_session_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_message_pds_get_default_tracking_session_output_info_out;
                self->arg_info_session_operation = (QmiPdsOperatingMode)tmp;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_info_position_data_timeout), error))
                goto qmi_message_pds_get_default_tracking_session_output_info_out;
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_info_interval), error))
                goto qmi_message_pds_get_default_tracking_session_output_info_out;
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_info_accuracy_threshold), error))
                goto qmi_message_pds_get_default_tracking_session_output_info_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Info' TLV", offset);
            }

            self->arg_info_set = TRUE;

qmi_message_pds_get_default_tracking_session_output_info_out:
            if (!self->arg_info_set) {
                qmi_message_pds_get_default_tracking_session_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set Default Tracking Session */


/* --- Input -- */

struct _QmiMessagePdsSetDefaultTrackingSessionInput {
    volatile gint ref_count;

    /* Info */
    gboolean arg_info_set;
    guint8 arg_info_session_operation;
    guint8 arg_info_position_data_timeout;
    guint32 arg_info_interval;
    guint32 arg_info_accuracy_threshold;
};

#define QMI_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION_INPUT_TLV_INFO 0x01

gboolean
qmi_message_pds_set_default_tracking_session_input_get_info (
    QmiMessagePdsSetDefaultTrackingSessionInput *self,
    QmiPdsOperatingMode *value_info_session_operation,
    guint8 *value_info_position_data_timeout,
    guint32 *value_info_interval,
    guint32 *value_info_accuracy_threshold,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Info' was not found in the message");
        return FALSE;
    }

    if (value_info_session_operation)
        *value_info_session_operation = (QmiPdsOperatingMode)(self->arg_info_session_operation);
    if (value_info_position_data_timeout)
        *value_info_position_data_timeout = self->arg_info_position_data_timeout;
    if (value_info_interval)
        *value_info_interval = self->arg_info_interval;
    if (value_info_accuracy_threshold)
        *value_info_accuracy_threshold = self->arg_info_accuracy_threshold;

    return TRUE;
}

gboolean
qmi_message_pds_set_default_tracking_session_input_set_info (
    QmiMessagePdsSetDefaultTrackingSessionInput *self,
    QmiPdsOperatingMode value_info_session_operation,
    guint8 value_info_position_data_timeout,
    guint32 value_info_interval,
    guint32 value_info_accuracy_threshold,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_info_session_operation = (guint8)(value_info_session_operation);
    self->arg_info_position_data_timeout = value_info_position_data_timeout;
    self->arg_info_interval = value_info_interval;
    self->arg_info_accuracy_threshold = value_info_accuracy_threshold;
    self->arg_info_set = TRUE;

    return TRUE;
}

GType
qmi_message_pds_set_default_tracking_session_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsSetDefaultTrackingSessionInput"),
                                          (GBoxedCopyFunc) qmi_message_pds_set_default_tracking_session_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_set_default_tracking_session_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsSetDefaultTrackingSessionInput *
qmi_message_pds_set_default_tracking_session_input_ref (QmiMessagePdsSetDefaultTrackingSessionInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_set_default_tracking_session_input_unref (QmiMessagePdsSetDefaultTrackingSessionInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsSetDefaultTrackingSessionInput, self);
    }
}

QmiMessagePdsSetDefaultTrackingSessionInput *
qmi_message_pds_set_default_tracking_session_input_new (void)
{
    QmiMessagePdsSetDefaultTrackingSessionInput *self;

    self = g_slice_new0 (QmiMessagePdsSetDefaultTrackingSessionInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pds_set_default_tracking_session_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdsSetDefaultTrackingSessionInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set Default Tracking Session' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Info' TLV */
    if (input->arg_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION_INPUT_TLV_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Info': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_info_session_operation;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Info': ");
                return NULL;
            }
        }
        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_info_position_data_timeout, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Info': ");
            return NULL;
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_info_interval, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Info': ");
            return NULL;
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_info_accuracy_threshold, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Info': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Info': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Info' in message 'Set Default Tracking Session'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdsSetDefaultTrackingSessionOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pds_set_default_tracking_session_output_get_result (
    QmiMessagePdsSetDefaultTrackingSessionOutput *self,
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
qmi_message_pds_set_default_tracking_session_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsSetDefaultTrackingSessionOutput"),
                                          (GBoxedCopyFunc) qmi_message_pds_set_default_tracking_session_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_set_default_tracking_session_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsSetDefaultTrackingSessionOutput *
qmi_message_pds_set_default_tracking_session_output_ref (QmiMessagePdsSetDefaultTrackingSessionOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_set_default_tracking_session_output_unref (QmiMessagePdsSetDefaultTrackingSessionOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsSetDefaultTrackingSessionOutput, self);
    }
}

static gchar *
qmi_message_pds_set_default_tracking_session_input_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION_INPUT_TLV_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " session_operation = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDS_OPERATING_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pds_operating_mode_get_string ((QmiPdsOperatingMode)tmp));
#elif defined  __QMI_PDS_OPERATING_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pds_operating_mode_build_string_from_mask ((QmiPdsOperatingMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdsOperatingMode
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " position_data_timeout = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " interval = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " accuracy_threshold = '");

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

struct message_set_default_tracking_session_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_default_tracking_session_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_default_tracking_session_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION_INPUT_TLV_INFO:
            tlv_type_str = "Info";
            translated_value = qmi_message_pds_set_default_tracking_session_input_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION_OUTPUT_TLV_RESULT:
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
message_set_default_tracking_session_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Default Tracking Session\" (0x002A)\n",
                            line_prefix);

    {
        struct message_set_default_tracking_session_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_default_tracking_session_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdsSetDefaultTrackingSessionOutput *
qmi_message_pds_set_default_tracking_session_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdsSetDefaultTrackingSessionOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION);

    self = g_slice_new0 (QmiMessagePdsSetDefaultTrackingSessionOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pds_set_default_tracking_session_output_unref (self);
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
                qmi_message_pds_set_default_tracking_session_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Get AGPS Config */


/* --- Input -- */

struct _QmiMessagePdsGetAgpsConfigInput {
    volatile gint ref_count;

    /* Network Mode */
    gboolean arg_network_mode_set;
    guint8 arg_network_mode;
};

#define QMI_MESSAGE_PDS_GET_AGPS_CONFIG_INPUT_TLV_NETWORK_MODE 0x12

gboolean
qmi_message_pds_get_agps_config_input_get_network_mode (
    QmiMessagePdsGetAgpsConfigInput *self,
    QmiPdsNetworkMode *value_network_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_network_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Network Mode' was not found in the message");
        return FALSE;
    }

    if (value_network_mode)
        *value_network_mode = (QmiPdsNetworkMode)(self->arg_network_mode);

    return TRUE;
}

gboolean
qmi_message_pds_get_agps_config_input_set_network_mode (
    QmiMessagePdsGetAgpsConfigInput *self,
    QmiPdsNetworkMode value_network_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_network_mode = (guint8)(value_network_mode);
    self->arg_network_mode_set = TRUE;

    return TRUE;
}

GType
qmi_message_pds_get_agps_config_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsGetAgpsConfigInput"),
                                          (GBoxedCopyFunc) qmi_message_pds_get_agps_config_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_get_agps_config_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsGetAgpsConfigInput *
qmi_message_pds_get_agps_config_input_ref (QmiMessagePdsGetAgpsConfigInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_get_agps_config_input_unref (QmiMessagePdsGetAgpsConfigInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsGetAgpsConfigInput, self);
    }
}

QmiMessagePdsGetAgpsConfigInput *
qmi_message_pds_get_agps_config_input_new (void)
{
    QmiMessagePdsGetAgpsConfigInput *self;

    self = g_slice_new0 (QmiMessagePdsGetAgpsConfigInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pds_get_agps_config_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdsGetAgpsConfigInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDS_GET_AGPS_CONFIG);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Network Mode' TLV */
    if (input->arg_network_mode_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_GET_AGPS_CONFIG_INPUT_TLV_NETWORK_MODE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Network Mode': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_network_mode;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Network Mode': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Network Mode': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdsGetAgpsConfigOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Location Server Address */
    gboolean arg_location_server_address_set;
    guint32 arg_location_server_address_ip;
    guint32 arg_location_server_address_port;

    /* Location Server URL */
    gboolean arg_location_server_url_set;
    GArray *arg_location_server_url;
};

#define QMI_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT_TLV_LOCATION_SERVER_ADDRESS 0x10
#define QMI_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT_TLV_LOCATION_SERVER_URL 0x11

gboolean
qmi_message_pds_get_agps_config_output_get_result (
    QmiMessagePdsGetAgpsConfigOutput *self,
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
qmi_message_pds_get_agps_config_output_get_location_server_address (
    QmiMessagePdsGetAgpsConfigOutput *self,
    guint32 *value_location_server_address_ip,
    guint32 *value_location_server_address_port,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_location_server_address_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Location Server Address' was not found in the message");
        return FALSE;
    }

    if (value_location_server_address_ip)
        *value_location_server_address_ip = self->arg_location_server_address_ip;
    if (value_location_server_address_port)
        *value_location_server_address_port = self->arg_location_server_address_port;

    return TRUE;
}

gboolean
qmi_message_pds_get_agps_config_output_get_location_server_url (
    QmiMessagePdsGetAgpsConfigOutput *self,
    GArray **value_location_server_url,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_location_server_url_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Location Server URL' was not found in the message");
        return FALSE;
    }

    if (value_location_server_url)
        *value_location_server_url = self->arg_location_server_url;

    return TRUE;
}

GType
qmi_message_pds_get_agps_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsGetAgpsConfigOutput"),
                                          (GBoxedCopyFunc) qmi_message_pds_get_agps_config_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_get_agps_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsGetAgpsConfigOutput *
qmi_message_pds_get_agps_config_output_ref (QmiMessagePdsGetAgpsConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_get_agps_config_output_unref (QmiMessagePdsGetAgpsConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_location_server_url, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessagePdsGetAgpsConfigOutput, self);
    }
}

static gchar *
qmi_message_pds_get_agps_config_input_network_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_AGPS_CONFIG_INPUT_TLV_NETWORK_MODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDS_NETWORK_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pds_network_mode_get_string ((QmiPdsNetworkMode)tmp));
#elif defined  __QMI_PDS_NETWORK_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pds_network_mode_build_string_from_mask ((QmiPdsNetworkMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdsNetworkMode
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
qmi_message_pds_get_agps_config_output_location_server_address_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT_TLV_LOCATION_SERVER_ADDRESS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " ip = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " port = '");

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
qmi_message_pds_get_agps_config_output_location_server_url_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT_TLV_LOCATION_SERVER_URL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint location_server_url_i;
        guint8 location_server_url_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(location_server_url_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (location_server_url_i = 0; location_server_url_i < location_server_url_n_items; location_server_url_i++) {
            g_string_append_printf (printable, " [%u] = '", location_server_url_i);

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

struct message_get_agps_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_agps_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_agps_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDS_GET_AGPS_CONFIG_INPUT_TLV_NETWORK_MODE:
            tlv_type_str = "Network Mode";
            translated_value = qmi_message_pds_get_agps_config_input_network_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT_TLV_LOCATION_SERVER_ADDRESS:
            tlv_type_str = "Location Server Address";
            translated_value = qmi_message_pds_get_agps_config_output_location_server_address_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT_TLV_LOCATION_SERVER_URL:
            tlv_type_str = "Location Server URL";
            translated_value = qmi_message_pds_get_agps_config_output_location_server_url_get_printable (
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
message_get_agps_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get AGPS Config\" (0x002E)\n",
                            line_prefix);

    {
        struct message_get_agps_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_agps_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdsGetAgpsConfigOutput *
qmi_message_pds_get_agps_config_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdsGetAgpsConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDS_GET_AGPS_CONFIG);

    self = g_slice_new0 (QmiMessagePdsGetAgpsConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pds_get_agps_config_output_unref (self);
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
                qmi_message_pds_get_agps_config_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT_TLV_LOCATION_SERVER_ADDRESS, NULL, NULL)) == 0) {
                goto qmi_message_pds_get_agps_config_output_location_server_address_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_location_server_address_ip), NULL))
                goto qmi_message_pds_get_agps_config_output_location_server_address_out;
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_location_server_address_port), NULL))
                goto qmi_message_pds_get_agps_config_output_location_server_address_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Location Server Address' TLV", offset);
            }

            self->arg_location_server_address_set = TRUE;

qmi_message_pds_get_agps_config_output_location_server_address_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT_TLV_LOCATION_SERVER_URL, NULL, NULL)) == 0) {
                goto qmi_message_pds_get_agps_config_output_location_server_url_out;
            }
            {
                guint location_server_url_i;
                guint8 location_server_url_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(location_server_url_n_items), NULL))
                    goto qmi_message_pds_get_agps_config_output_location_server_url_out;

                self->arg_location_server_url = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)location_server_url_n_items);

                for (location_server_url_i = 0; location_server_url_i < location_server_url_n_items; location_server_url_i++) {
                    guint8 location_server_url_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(location_server_url_aux), NULL))
                        goto qmi_message_pds_get_agps_config_output_location_server_url_out;
                    g_array_insert_val (self->arg_location_server_url, location_server_url_i, location_server_url_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Location Server URL' TLV", offset);
            }

            self->arg_location_server_url_set = TRUE;

qmi_message_pds_get_agps_config_output_location_server_url_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set AGPS Config */


/* --- Input -- */

struct _QmiMessagePdsSetAgpsConfigInput {
    volatile gint ref_count;

    /* Network Mode */
    gboolean arg_network_mode_set;
    guint8 arg_network_mode;

    /* Location Server URL */
    gboolean arg_location_server_url_set;
    GArray *arg_location_server_url;

    /* Location Server Address */
    gboolean arg_location_server_address_set;
    guint32 arg_location_server_address_ip;
    guint32 arg_location_server_address_port;
};

#define QMI_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT_TLV_NETWORK_MODE 0x14
#define QMI_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT_TLV_LOCATION_SERVER_URL 0x11
#define QMI_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT_TLV_LOCATION_SERVER_ADDRESS 0x10

gboolean
qmi_message_pds_set_agps_config_input_get_network_mode (
    QmiMessagePdsSetAgpsConfigInput *self,
    QmiPdsNetworkMode *value_network_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_network_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Network Mode' was not found in the message");
        return FALSE;
    }

    if (value_network_mode)
        *value_network_mode = (QmiPdsNetworkMode)(self->arg_network_mode);

    return TRUE;
}

gboolean
qmi_message_pds_set_agps_config_input_set_network_mode (
    QmiMessagePdsSetAgpsConfigInput *self,
    QmiPdsNetworkMode value_network_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_network_mode = (guint8)(value_network_mode);
    self->arg_network_mode_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_agps_config_input_get_location_server_url (
    QmiMessagePdsSetAgpsConfigInput *self,
    GArray **value_location_server_url,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_location_server_url_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Location Server URL' was not found in the message");
        return FALSE;
    }

    if (value_location_server_url)
        *value_location_server_url = self->arg_location_server_url;

    return TRUE;
}

gboolean
qmi_message_pds_set_agps_config_input_set_location_server_url (
    QmiMessagePdsSetAgpsConfigInput *self,
    GArray *value_location_server_url,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_location_server_url, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_location_server_url, (GDestroyNotify)g_ptr_array_unref);
    self->arg_location_server_url = g_array_ref (value_location_server_url);
    self->arg_location_server_url_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pds_set_agps_config_input_get_location_server_address (
    QmiMessagePdsSetAgpsConfigInput *self,
    guint32 *value_location_server_address_ip,
    guint32 *value_location_server_address_port,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_location_server_address_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Location Server Address' was not found in the message");
        return FALSE;
    }

    if (value_location_server_address_ip)
        *value_location_server_address_ip = self->arg_location_server_address_ip;
    if (value_location_server_address_port)
        *value_location_server_address_port = self->arg_location_server_address_port;

    return TRUE;
}

gboolean
qmi_message_pds_set_agps_config_input_set_location_server_address (
    QmiMessagePdsSetAgpsConfigInput *self,
    guint32 value_location_server_address_ip,
    guint32 value_location_server_address_port,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_location_server_address_ip = value_location_server_address_ip;
    self->arg_location_server_address_port = value_location_server_address_port;
    self->arg_location_server_address_set = TRUE;

    return TRUE;
}

GType
qmi_message_pds_set_agps_config_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsSetAgpsConfigInput"),
                                          (GBoxedCopyFunc) qmi_message_pds_set_agps_config_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_set_agps_config_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsSetAgpsConfigInput *
qmi_message_pds_set_agps_config_input_ref (QmiMessagePdsSetAgpsConfigInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_set_agps_config_input_unref (QmiMessagePdsSetAgpsConfigInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_location_server_url, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessagePdsSetAgpsConfigInput, self);
    }
}

QmiMessagePdsSetAgpsConfigInput *
qmi_message_pds_set_agps_config_input_new (void)
{
    QmiMessagePdsSetAgpsConfigInput *self;

    self = g_slice_new0 (QmiMessagePdsSetAgpsConfigInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pds_set_agps_config_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdsSetAgpsConfigInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDS_SET_AGPS_CONFIG);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Network Mode' TLV */
    if (input->arg_network_mode_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT_TLV_NETWORK_MODE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Network Mode': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_network_mode;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Network Mode': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Network Mode': ");
            return NULL;
        }
    }

    /* Try to add the 'Location Server URL' TLV */
    if (input->arg_location_server_url_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT_TLV_LOCATION_SERVER_URL, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Location Server URL': ");
            return NULL;
        }

        {
            guint location_server_url_i;
            guint8 location_server_url_n_items;

            /* Write the number of items in the array first */
            location_server_url_n_items = (guint8) input->arg_location_server_url->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, location_server_url_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Location Server URL': ");
                return NULL;
            }

            for (location_server_url_i = 0; location_server_url_i < input->arg_location_server_url->len; location_server_url_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_location_server_url, guint8,location_server_url_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Location Server URL': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Location Server URL': ");
            return NULL;
        }
    }

    /* Try to add the 'Location Server Address' TLV */
    if (input->arg_location_server_address_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT_TLV_LOCATION_SERVER_ADDRESS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Location Server Address': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_location_server_address_ip, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Location Server Address': ");
            return NULL;
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_location_server_address_port, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Location Server Address': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Location Server Address': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdsSetAgpsConfigOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDS_SET_AGPS_CONFIG_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pds_set_agps_config_output_get_result (
    QmiMessagePdsSetAgpsConfigOutput *self,
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
qmi_message_pds_set_agps_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsSetAgpsConfigOutput"),
                                          (GBoxedCopyFunc) qmi_message_pds_set_agps_config_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_set_agps_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsSetAgpsConfigOutput *
qmi_message_pds_set_agps_config_output_ref (QmiMessagePdsSetAgpsConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_set_agps_config_output_unref (QmiMessagePdsSetAgpsConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsSetAgpsConfigOutput, self);
    }
}

static gchar *
qmi_message_pds_set_agps_config_input_network_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT_TLV_NETWORK_MODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDS_NETWORK_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pds_network_mode_get_string ((QmiPdsNetworkMode)tmp));
#elif defined  __QMI_PDS_NETWORK_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pds_network_mode_build_string_from_mask ((QmiPdsNetworkMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdsNetworkMode
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
qmi_message_pds_set_agps_config_input_location_server_url_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT_TLV_LOCATION_SERVER_URL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint location_server_url_i;
        guint8 location_server_url_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(location_server_url_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (location_server_url_i = 0; location_server_url_i < location_server_url_n_items; location_server_url_i++) {
            g_string_append_printf (printable, " [%u] = '", location_server_url_i);

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

static gchar *
qmi_message_pds_set_agps_config_input_location_server_address_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT_TLV_LOCATION_SERVER_ADDRESS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " ip = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " port = '");

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

struct message_set_agps_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_agps_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_agps_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT_TLV_NETWORK_MODE:
            tlv_type_str = "Network Mode";
            translated_value = qmi_message_pds_set_agps_config_input_network_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT_TLV_LOCATION_SERVER_URL:
            tlv_type_str = "Location Server URL";
            translated_value = qmi_message_pds_set_agps_config_input_location_server_url_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT_TLV_LOCATION_SERVER_ADDRESS:
            tlv_type_str = "Location Server Address";
            translated_value = qmi_message_pds_set_agps_config_input_location_server_address_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDS_SET_AGPS_CONFIG_OUTPUT_TLV_RESULT:
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
message_set_agps_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set AGPS Config\" (0x002F)\n",
                            line_prefix);

    {
        struct message_set_agps_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_agps_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdsSetAgpsConfigOutput *
qmi_message_pds_set_agps_config_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdsSetAgpsConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDS_SET_AGPS_CONFIG);

    self = g_slice_new0 (QmiMessagePdsSetAgpsConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_AGPS_CONFIG_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pds_set_agps_config_output_unref (self);
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
                qmi_message_pds_set_agps_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Get Auto Tracking State */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_pds_get_auto_tracking_state_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDS_GET_AUTO_TRACKING_STATE);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdsGetAutoTrackingStateOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* State */
    gboolean arg_state_set;
    guint8 arg_state_auto_tracking_state;
};

#define QMI_MESSAGE_PDS_GET_AUTO_TRACKING_STATE_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_PDS_GET_AUTO_TRACKING_STATE_OUTPUT_TLV_STATE 0x01

gboolean
qmi_message_pds_get_auto_tracking_state_output_get_result (
    QmiMessagePdsGetAutoTrackingStateOutput *self,
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
qmi_message_pds_get_auto_tracking_state_output_get_state (
    QmiMessagePdsGetAutoTrackingStateOutput *self,
    gboolean *value_state_auto_tracking_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_state_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'State' was not found in the message");
        return FALSE;
    }

    if (value_state_auto_tracking_state)
        *value_state_auto_tracking_state = (gboolean)(self->arg_state_auto_tracking_state);

    return TRUE;
}

GType
qmi_message_pds_get_auto_tracking_state_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsGetAutoTrackingStateOutput"),
                                          (GBoxedCopyFunc) qmi_message_pds_get_auto_tracking_state_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_get_auto_tracking_state_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsGetAutoTrackingStateOutput *
qmi_message_pds_get_auto_tracking_state_output_ref (QmiMessagePdsGetAutoTrackingStateOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_get_auto_tracking_state_output_unref (QmiMessagePdsGetAutoTrackingStateOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsGetAutoTrackingStateOutput, self);
    }
}

static gchar *
qmi_message_pds_get_auto_tracking_state_output_state_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_AUTO_TRACKING_STATE_OUTPUT_TLV_STATE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " auto_tracking_state = '");

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

struct message_get_auto_tracking_state_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_auto_tracking_state_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_auto_tracking_state_context *ctx)
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
        case QMI_MESSAGE_PDS_GET_AUTO_TRACKING_STATE_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDS_GET_AUTO_TRACKING_STATE_OUTPUT_TLV_STATE:
            tlv_type_str = "State";
            translated_value = qmi_message_pds_get_auto_tracking_state_output_state_get_printable (
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
message_get_auto_tracking_state_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Auto Tracking State\" (0x0030)\n",
                            line_prefix);

    {
        struct message_get_auto_tracking_state_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_auto_tracking_state_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdsGetAutoTrackingStateOutput *
qmi_message_pds_get_auto_tracking_state_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdsGetAutoTrackingStateOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDS_GET_AUTO_TRACKING_STATE);

    self = g_slice_new0 (QmiMessagePdsGetAutoTrackingStateOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_AUTO_TRACKING_STATE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pds_get_auto_tracking_state_output_unref (self);
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
                qmi_message_pds_get_auto_tracking_state_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_GET_AUTO_TRACKING_STATE_OUTPUT_TLV_STATE, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory State TLV: ");
                qmi_message_pds_get_auto_tracking_state_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_message_pds_get_auto_tracking_state_output_state_out;
                self->arg_state_auto_tracking_state = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'State' TLV", offset);
            }

            self->arg_state_set = TRUE;

qmi_message_pds_get_auto_tracking_state_output_state_out:
            if (!self->arg_state_set) {
                qmi_message_pds_get_auto_tracking_state_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set Auto Tracking State */


/* --- Input -- */

struct _QmiMessagePdsSetAutoTrackingStateInput {
    volatile gint ref_count;

    /* State */
    gboolean arg_state_set;
    guint8 arg_state_auto_tracking_state;
};

#define QMI_MESSAGE_PDS_SET_AUTO_TRACKING_STATE_INPUT_TLV_STATE 0x01

gboolean
qmi_message_pds_set_auto_tracking_state_input_get_state (
    QmiMessagePdsSetAutoTrackingStateInput *self,
    gboolean *value_state_auto_tracking_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_state_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'State' was not found in the message");
        return FALSE;
    }

    if (value_state_auto_tracking_state)
        *value_state_auto_tracking_state = (gboolean)(self->arg_state_auto_tracking_state);

    return TRUE;
}

gboolean
qmi_message_pds_set_auto_tracking_state_input_set_state (
    QmiMessagePdsSetAutoTrackingStateInput *self,
    gboolean value_state_auto_tracking_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_state_auto_tracking_state = (guint8)(value_state_auto_tracking_state);
    self->arg_state_set = TRUE;

    return TRUE;
}

GType
qmi_message_pds_set_auto_tracking_state_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsSetAutoTrackingStateInput"),
                                          (GBoxedCopyFunc) qmi_message_pds_set_auto_tracking_state_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_set_auto_tracking_state_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsSetAutoTrackingStateInput *
qmi_message_pds_set_auto_tracking_state_input_ref (QmiMessagePdsSetAutoTrackingStateInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_set_auto_tracking_state_input_unref (QmiMessagePdsSetAutoTrackingStateInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsSetAutoTrackingStateInput, self);
    }
}

QmiMessagePdsSetAutoTrackingStateInput *
qmi_message_pds_set_auto_tracking_state_input_new (void)
{
    QmiMessagePdsSetAutoTrackingStateInput *self;

    self = g_slice_new0 (QmiMessagePdsSetAutoTrackingStateInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pds_set_auto_tracking_state_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdsSetAutoTrackingStateInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDS_SET_AUTO_TRACKING_STATE);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set Auto Tracking State' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'State' TLV */
    if (input->arg_state_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDS_SET_AUTO_TRACKING_STATE_INPUT_TLV_STATE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'State': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_state_auto_tracking_state;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'State': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'State': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'State' in message 'Set Auto Tracking State'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdsSetAutoTrackingStateOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDS_SET_AUTO_TRACKING_STATE_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pds_set_auto_tracking_state_output_get_result (
    QmiMessagePdsSetAutoTrackingStateOutput *self,
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
qmi_message_pds_set_auto_tracking_state_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdsSetAutoTrackingStateOutput"),
                                          (GBoxedCopyFunc) qmi_message_pds_set_auto_tracking_state_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pds_set_auto_tracking_state_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdsSetAutoTrackingStateOutput *
qmi_message_pds_set_auto_tracking_state_output_ref (QmiMessagePdsSetAutoTrackingStateOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pds_set_auto_tracking_state_output_unref (QmiMessagePdsSetAutoTrackingStateOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdsSetAutoTrackingStateOutput, self);
    }
}

static gchar *
qmi_message_pds_set_auto_tracking_state_input_state_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_AUTO_TRACKING_STATE_INPUT_TLV_STATE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " auto_tracking_state = '");

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

struct message_set_auto_tracking_state_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_auto_tracking_state_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_auto_tracking_state_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDS_SET_AUTO_TRACKING_STATE_INPUT_TLV_STATE:
            tlv_type_str = "State";
            translated_value = qmi_message_pds_set_auto_tracking_state_input_state_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDS_SET_AUTO_TRACKING_STATE_OUTPUT_TLV_RESULT:
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
message_set_auto_tracking_state_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Auto Tracking State\" (0x0031)\n",
                            line_prefix);

    {
        struct message_set_auto_tracking_state_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_auto_tracking_state_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdsSetAutoTrackingStateOutput *
qmi_message_pds_set_auto_tracking_state_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdsSetAutoTrackingStateOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDS_SET_AUTO_TRACKING_STATE);

    self = g_slice_new0 (QmiMessagePdsSetAutoTrackingStateOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDS_SET_AUTO_TRACKING_STATE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pds_set_auto_tracking_state_output_unref (self);
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
                qmi_message_pds_set_auto_tracking_state_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: PDS */


gchar *
__qmi_message_pds_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_PDS_EVENT_REPORT:
            return indication_event_report_get_printable (self, line_prefix);
        case QMI_INDICATION_PDS_GPS_READY:
            return indication_gps_ready_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_PDS_RESET:
                return message_reset_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDS_SET_EVENT_REPORT:
                return message_set_event_report_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDS_GET_GPS_SERVICE_STATE:
                return message_get_gps_service_state_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDS_SET_GPS_SERVICE_STATE:
                return message_set_gps_service_state_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION:
                return message_get_default_tracking_session_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION:
                return message_set_default_tracking_session_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDS_GET_AGPS_CONFIG:
                return message_get_agps_config_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDS_SET_AGPS_CONFIG:
                return message_set_agps_config_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDS_GET_AUTO_TRACKING_STATE:
                return message_get_auto_tracking_state_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDS_SET_AUTO_TRACKING_STATE:
                return message_set_auto_tracking_state_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client PDS */

G_DEFINE_TYPE (QmiClientPds, qmi_client_pds, QMI_TYPE_CLIENT)

enum {
    SIGNAL_EVENT_REPORT,
    SIGNAL_GPS_READY,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_PDS_EVENT_REPORT: {
            QmiIndicationPdsEventReportOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_pds_event_report_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Event Report' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_EVENT_REPORT], 0, output);
                qmi_indication_pds_event_report_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_PDS_GPS_READY: {
            g_signal_emit (self, signals[SIGNAL_GPS_READY], 0, NULL);
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_pds_init (QmiClientPds *self)
{
}

static void
qmi_client_pds_class_init (QmiClientPdsClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientPds::event-report:
     * @object: A #QmiClientPds.
     * @output: A #QmiIndicationPdsEventReportOutput.
     *
     * The ::event-report signal gets emitted when a '<link linkend="libqmi-glib-PDS-Event-Report-indication.top_of_page">Event Report</link>' indication is received.
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
                      QMI_TYPE_INDICATION_PDS_EVENT_REPORT_OUTPUT);

    /**
     * QmiClientPds::gps-ready:
     * @object: A #QmiClientPds.
     *
     * The ::gps-ready signal gets emitted when a 'GPS Ready' indication is received.
     *
     * Since: 1.14
     */
    signals[SIGNAL_GPS_READY] =
        g_signal_new ("gps-ready",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      0);
}


QmiMessagePdsResetOutput *
qmi_client_pds_reset_finish (
    QmiClientPds *self,
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
    QmiMessagePdsResetOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pds_reset_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pds_reset_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pds_reset (
    QmiClientPds *self,
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

    request = __qmi_message_pds_reset_request_create (
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


QmiMessagePdsSetEventReportOutput *
qmi_client_pds_set_event_report_finish (
    QmiClientPds *self,
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
    QmiMessagePdsSetEventReportOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pds_set_event_report_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pds_set_event_report_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pds_set_event_report (
    QmiClientPds *self,
    QmiMessagePdsSetEventReportInput *input,
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

    request = __qmi_message_pds_set_event_report_request_create (
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


QmiMessagePdsGetGpsServiceStateOutput *
qmi_client_pds_get_gps_service_state_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_gps_service_state_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdsGetGpsServiceStateOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pds_get_gps_service_state_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pds_get_gps_service_state_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pds_get_gps_service_state (
    QmiClientPds *self,
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

    request = __qmi_message_pds_get_gps_service_state_request_create (
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
                             (GAsyncReadyCallback)get_gps_service_state_ready,
                             task);
}


QmiMessagePdsSetGpsServiceStateOutput *
qmi_client_pds_set_gps_service_state_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_gps_service_state_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdsSetGpsServiceStateOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pds_set_gps_service_state_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pds_set_gps_service_state_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pds_set_gps_service_state (
    QmiClientPds *self,
    QmiMessagePdsSetGpsServiceStateInput *input,
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

    request = __qmi_message_pds_set_gps_service_state_request_create (
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
                             (GAsyncReadyCallback)set_gps_service_state_ready,
                             task);
}


QmiMessagePdsGetDefaultTrackingSessionOutput *
qmi_client_pds_get_default_tracking_session_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_default_tracking_session_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdsGetDefaultTrackingSessionOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pds_get_default_tracking_session_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pds_get_default_tracking_session_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pds_get_default_tracking_session (
    QmiClientPds *self,
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

    request = __qmi_message_pds_get_default_tracking_session_request_create (
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
                             (GAsyncReadyCallback)get_default_tracking_session_ready,
                             task);
}


QmiMessagePdsSetDefaultTrackingSessionOutput *
qmi_client_pds_set_default_tracking_session_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_default_tracking_session_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdsSetDefaultTrackingSessionOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pds_set_default_tracking_session_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pds_set_default_tracking_session_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pds_set_default_tracking_session (
    QmiClientPds *self,
    QmiMessagePdsSetDefaultTrackingSessionInput *input,
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

    request = __qmi_message_pds_set_default_tracking_session_request_create (
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
                             (GAsyncReadyCallback)set_default_tracking_session_ready,
                             task);
}


QmiMessagePdsGetAgpsConfigOutput *
qmi_client_pds_get_agps_config_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_agps_config_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdsGetAgpsConfigOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pds_get_agps_config_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pds_get_agps_config_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pds_get_agps_config (
    QmiClientPds *self,
    QmiMessagePdsGetAgpsConfigInput *input,
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

    request = __qmi_message_pds_get_agps_config_request_create (
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
                             (GAsyncReadyCallback)get_agps_config_ready,
                             task);
}


QmiMessagePdsSetAgpsConfigOutput *
qmi_client_pds_set_agps_config_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_agps_config_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdsSetAgpsConfigOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pds_set_agps_config_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pds_set_agps_config_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pds_set_agps_config (
    QmiClientPds *self,
    QmiMessagePdsSetAgpsConfigInput *input,
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

    request = __qmi_message_pds_set_agps_config_request_create (
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
                             (GAsyncReadyCallback)set_agps_config_ready,
                             task);
}


QmiMessagePdsGetAutoTrackingStateOutput *
qmi_client_pds_get_auto_tracking_state_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_auto_tracking_state_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdsGetAutoTrackingStateOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pds_get_auto_tracking_state_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pds_get_auto_tracking_state_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pds_get_auto_tracking_state (
    QmiClientPds *self,
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

    request = __qmi_message_pds_get_auto_tracking_state_request_create (
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
                             (GAsyncReadyCallback)get_auto_tracking_state_ready,
                             task);
}


QmiMessagePdsSetAutoTrackingStateOutput *
qmi_client_pds_set_auto_tracking_state_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_auto_tracking_state_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdsSetAutoTrackingStateOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pds_set_auto_tracking_state_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pds_set_auto_tracking_state_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pds_set_auto_tracking_state (
    QmiClientPds *self,
    QmiMessagePdsSetAutoTrackingStateInput *input,
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

    request = __qmi_message_pds_set_auto_tracking_state_request_create (
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
                             (GAsyncReadyCallback)set_auto_tracking_state_ready,
                             task);
}

