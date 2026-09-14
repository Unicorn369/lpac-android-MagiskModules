
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

#include "qmi-oma.h"
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
    QMI_MESSAGE_OMA_RESET = 0x0000,
    QMI_MESSAGE_OMA_SET_EVENT_REPORT = 0x0001,
    QMI_MESSAGE_OMA_START_SESSION = 0x0020,
    QMI_MESSAGE_OMA_CANCEL_SESSION = 0x0021,
    QMI_MESSAGE_OMA_GET_SESSION_INFO = 0x0022,
    QMI_MESSAGE_OMA_SEND_SELECTION = 0x0023,
    QMI_MESSAGE_OMA_GET_FEATURE_SETTING = 0x0024,
    QMI_MESSAGE_OMA_SET_FEATURE_SETTING = 0x0025,
} QmiMessageOma;


typedef enum {
    QMI_INDICATION_OMA_EVENT_REPORT = 0x0001,
} QmiIndicationOma;


/*****************************************************************************/
/* INDICATION: Qmi Indication OMA Event Report */


/* --- Output -- */

struct _QmiIndicationOmaEventReportOutput {
    volatile gint ref_count;

    /* Session Fail Reason */
    gboolean arg_session_fail_reason_set;
    guint8 arg_session_fail_reason;

    /* Session State */
    gboolean arg_session_state_set;
    guint8 arg_session_state;

    /* Network Initiated Alert */
    gboolean arg_network_initiated_alert_set;
    guint8 arg_network_initiated_alert_session_type;
    guint16 arg_network_initiated_alert_session_id;
};

#define QMI_INDICATION_OMA_EVENT_REPORT_OUTPUT_TLV_SESSION_FAIL_REASON 0x12
#define QMI_INDICATION_OMA_EVENT_REPORT_OUTPUT_TLV_SESSION_STATE 0x11
#define QMI_INDICATION_OMA_EVENT_REPORT_OUTPUT_TLV_NETWORK_INITIATED_ALERT 0x10

gboolean
qmi_indication_oma_event_report_output_get_session_fail_reason (
    QmiIndicationOmaEventReportOutput *self,
    QmiOmaSessionFailedReason *value_session_fail_reason,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_fail_reason_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session Fail Reason' was not found in the message");
        return FALSE;
    }

    if (value_session_fail_reason)
        *value_session_fail_reason = (QmiOmaSessionFailedReason)(self->arg_session_fail_reason);

    return TRUE;
}

gboolean
qmi_indication_oma_event_report_output_get_session_state (
    QmiIndicationOmaEventReportOutput *self,
    QmiOmaSessionState *value_session_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_state_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session State' was not found in the message");
        return FALSE;
    }

    if (value_session_state)
        *value_session_state = (QmiOmaSessionState)(self->arg_session_state);

    return TRUE;
}

gboolean
qmi_indication_oma_event_report_output_get_network_initiated_alert (
    QmiIndicationOmaEventReportOutput *self,
    QmiOmaSessionType *value_network_initiated_alert_session_type,
    guint16 *value_network_initiated_alert_session_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_network_initiated_alert_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Network Initiated Alert' was not found in the message");
        return FALSE;
    }

    if (value_network_initiated_alert_session_type)
        *value_network_initiated_alert_session_type = (QmiOmaSessionType)(self->arg_network_initiated_alert_session_type);
    if (value_network_initiated_alert_session_id)
        *value_network_initiated_alert_session_id = self->arg_network_initiated_alert_session_id;

    return TRUE;
}

GType
qmi_indication_oma_event_report_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationOmaEventReportOutput"),
                                          (GBoxedCopyFunc) qmi_indication_oma_event_report_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_oma_event_report_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationOmaEventReportOutput *
qmi_indication_oma_event_report_output_ref (QmiIndicationOmaEventReportOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_oma_event_report_output_unref (QmiIndicationOmaEventReportOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationOmaEventReportOutput, self);
    }
}

static gchar *
qmi_indication_oma_event_report_output_session_fail_reason_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_OMA_EVENT_REPORT_OUTPUT_TLV_SESSION_FAIL_REASON, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_OMA_SESSION_FAILED_REASON_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_oma_session_failed_reason_get_string ((QmiOmaSessionFailedReason)tmp));
#elif defined  __QMI_OMA_SESSION_FAILED_REASON_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_oma_session_failed_reason_build_string_from_mask ((QmiOmaSessionFailedReason)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiOmaSessionFailedReason
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
qmi_indication_oma_event_report_output_session_state_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_OMA_EVENT_REPORT_OUTPUT_TLV_SESSION_STATE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_OMA_SESSION_STATE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_oma_session_state_get_string ((QmiOmaSessionState)tmp));
#elif defined  __QMI_OMA_SESSION_STATE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_oma_session_state_build_string_from_mask ((QmiOmaSessionState)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiOmaSessionState
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
qmi_indication_oma_event_report_output_network_initiated_alert_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_OMA_EVENT_REPORT_OUTPUT_TLV_NETWORK_INITIATED_ALERT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " session_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_OMA_SESSION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_oma_session_type_get_string ((QmiOmaSessionType)tmp));
#elif defined  __QMI_OMA_SESSION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_oma_session_type_build_string_from_mask ((QmiOmaSessionType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiOmaSessionType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " session_id = '");

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
        case QMI_INDICATION_OMA_EVENT_REPORT_OUTPUT_TLV_SESSION_FAIL_REASON:
            tlv_type_str = "Session Fail Reason";
            translated_value = qmi_indication_oma_event_report_output_session_fail_reason_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_OMA_EVENT_REPORT_OUTPUT_TLV_SESSION_STATE:
            tlv_type_str = "Session State";
            translated_value = qmi_indication_oma_event_report_output_session_state_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_OMA_EVENT_REPORT_OUTPUT_TLV_NETWORK_INITIATED_ALERT:
            tlv_type_str = "Network Initiated Alert";
            translated_value = qmi_indication_oma_event_report_output_network_initiated_alert_get_printable (
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

QmiIndicationOmaEventReportOutput *
qmi_indication_oma_event_report_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationOmaEventReportOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_OMA_EVENT_REPORT);

    self = g_slice_new0 (QmiIndicationOmaEventReportOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_OMA_EVENT_REPORT_OUTPUT_TLV_SESSION_FAIL_REASON, NULL, NULL)) == 0) {
                goto qmi_indication_oma_event_report_output_session_fail_reason_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_oma_event_report_output_session_fail_reason_out;
                self->arg_session_fail_reason = (QmiOmaSessionFailedReason)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Session Fail Reason' TLV", offset);
            }

            self->arg_session_fail_reason_set = TRUE;

qmi_indication_oma_event_report_output_session_fail_reason_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_OMA_EVENT_REPORT_OUTPUT_TLV_SESSION_STATE, NULL, NULL)) == 0) {
                goto qmi_indication_oma_event_report_output_session_state_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_oma_event_report_output_session_state_out;
                self->arg_session_state = (QmiOmaSessionState)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Session State' TLV", offset);
            }

            self->arg_session_state_set = TRUE;

qmi_indication_oma_event_report_output_session_state_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_OMA_EVENT_REPORT_OUTPUT_TLV_NETWORK_INITIATED_ALERT, NULL, NULL)) == 0) {
                goto qmi_indication_oma_event_report_output_network_initiated_alert_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_oma_event_report_output_network_initiated_alert_out;
                self->arg_network_initiated_alert_session_type = (QmiOmaSessionType)tmp;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_network_initiated_alert_session_id), NULL))
                goto qmi_indication_oma_event_report_output_network_initiated_alert_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Network Initiated Alert' TLV", offset);
            }

            self->arg_network_initiated_alert_set = TRUE;

qmi_indication_oma_event_report_output_network_initiated_alert_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_oma_reset_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_OMA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_OMA_RESET);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageOmaResetOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_OMA_RESET_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_oma_reset_output_get_result (
    QmiMessageOmaResetOutput *self,
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
qmi_message_oma_reset_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageOmaResetOutput"),
                                          (GBoxedCopyFunc) qmi_message_oma_reset_output_ref,
                                          (GBoxedFreeFunc) qmi_message_oma_reset_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageOmaResetOutput *
qmi_message_oma_reset_output_ref (QmiMessageOmaResetOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_oma_reset_output_unref (QmiMessageOmaResetOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageOmaResetOutput, self);
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_OMA_RESET_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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
        case QMI_MESSAGE_OMA_RESET_OUTPUT_TLV_RESULT:
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

QmiMessageOmaResetOutput *
qmi_message_oma_reset_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageOmaResetOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_OMA_RESET);

    self = g_slice_new0 (QmiMessageOmaResetOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_RESET_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_oma_reset_output_unref (self);
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
                qmi_message_oma_reset_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Set Event Report */


/* --- Input -- */

struct _QmiMessageOmaSetEventReportInput {
    volatile gint ref_count;

    /* Session State Reporting */
    gboolean arg_session_state_reporting_set;
    guint8 arg_session_state_reporting;

    /* Network Initiated Alert Reporting */
    gboolean arg_network_initiated_alert_reporting_set;
    guint8 arg_network_initiated_alert_reporting;
};

#define QMI_MESSAGE_OMA_SET_EVENT_REPORT_INPUT_TLV_SESSION_STATE_REPORTING 0x11
#define QMI_MESSAGE_OMA_SET_EVENT_REPORT_INPUT_TLV_NETWORK_INITIATED_ALERT_REPORTING 0x10

gboolean
qmi_message_oma_set_event_report_input_get_session_state_reporting (
    QmiMessageOmaSetEventReportInput *self,
    gboolean *value_session_state_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_state_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session State Reporting' was not found in the message");
        return FALSE;
    }

    if (value_session_state_reporting)
        *value_session_state_reporting = (gboolean)(self->arg_session_state_reporting);

    return TRUE;
}

gboolean
qmi_message_oma_set_event_report_input_set_session_state_reporting (
    QmiMessageOmaSetEventReportInput *self,
    gboolean value_session_state_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_state_reporting = (guint8)(value_session_state_reporting);
    self->arg_session_state_reporting_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_oma_set_event_report_input_get_network_initiated_alert_reporting (
    QmiMessageOmaSetEventReportInput *self,
    gboolean *value_network_initiated_alert_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_network_initiated_alert_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Network Initiated Alert Reporting' was not found in the message");
        return FALSE;
    }

    if (value_network_initiated_alert_reporting)
        *value_network_initiated_alert_reporting = (gboolean)(self->arg_network_initiated_alert_reporting);

    return TRUE;
}

gboolean
qmi_message_oma_set_event_report_input_set_network_initiated_alert_reporting (
    QmiMessageOmaSetEventReportInput *self,
    gboolean value_network_initiated_alert_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_network_initiated_alert_reporting = (guint8)(value_network_initiated_alert_reporting);
    self->arg_network_initiated_alert_reporting_set = TRUE;

    return TRUE;
}

GType
qmi_message_oma_set_event_report_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageOmaSetEventReportInput"),
                                          (GBoxedCopyFunc) qmi_message_oma_set_event_report_input_ref,
                                          (GBoxedFreeFunc) qmi_message_oma_set_event_report_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageOmaSetEventReportInput *
qmi_message_oma_set_event_report_input_ref (QmiMessageOmaSetEventReportInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_oma_set_event_report_input_unref (QmiMessageOmaSetEventReportInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageOmaSetEventReportInput, self);
    }
}

QmiMessageOmaSetEventReportInput *
qmi_message_oma_set_event_report_input_new (void)
{
    QmiMessageOmaSetEventReportInput *self;

    self = g_slice_new0 (QmiMessageOmaSetEventReportInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_oma_set_event_report_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageOmaSetEventReportInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_OMA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_OMA_SET_EVENT_REPORT);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Session State Reporting' TLV */
    if (input->arg_session_state_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_OMA_SET_EVENT_REPORT_INPUT_TLV_SESSION_STATE_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session State Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_state_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session State Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session State Reporting': ");
            return NULL;
        }
    }

    /* Try to add the 'Network Initiated Alert Reporting' TLV */
    if (input->arg_network_initiated_alert_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_OMA_SET_EVENT_REPORT_INPUT_TLV_NETWORK_INITIATED_ALERT_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Network Initiated Alert Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_network_initiated_alert_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Network Initiated Alert Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Network Initiated Alert Reporting': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageOmaSetEventReportOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_OMA_SET_EVENT_REPORT_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_oma_set_event_report_output_get_result (
    QmiMessageOmaSetEventReportOutput *self,
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
qmi_message_oma_set_event_report_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageOmaSetEventReportOutput"),
                                          (GBoxedCopyFunc) qmi_message_oma_set_event_report_output_ref,
                                          (GBoxedFreeFunc) qmi_message_oma_set_event_report_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageOmaSetEventReportOutput *
qmi_message_oma_set_event_report_output_ref (QmiMessageOmaSetEventReportOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_oma_set_event_report_output_unref (QmiMessageOmaSetEventReportOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageOmaSetEventReportOutput, self);
    }
}

static gchar *
qmi_message_oma_set_event_report_input_session_state_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_SET_EVENT_REPORT_INPUT_TLV_SESSION_STATE_REPORTING, NULL, NULL)) == 0)
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
qmi_message_oma_set_event_report_input_network_initiated_alert_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_SET_EVENT_REPORT_INPUT_TLV_NETWORK_INITIATED_ALERT_REPORTING, NULL, NULL)) == 0)
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
        case QMI_MESSAGE_OMA_SET_EVENT_REPORT_INPUT_TLV_SESSION_STATE_REPORTING:
            tlv_type_str = "Session State Reporting";
            translated_value = qmi_message_oma_set_event_report_input_session_state_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_OMA_SET_EVENT_REPORT_INPUT_TLV_NETWORK_INITIATED_ALERT_REPORTING:
            tlv_type_str = "Network Initiated Alert Reporting";
            translated_value = qmi_message_oma_set_event_report_input_network_initiated_alert_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_OMA_SET_EVENT_REPORT_OUTPUT_TLV_RESULT:
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

QmiMessageOmaSetEventReportOutput *
qmi_message_oma_set_event_report_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageOmaSetEventReportOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_OMA_SET_EVENT_REPORT);

    self = g_slice_new0 (QmiMessageOmaSetEventReportOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_SET_EVENT_REPORT_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_oma_set_event_report_output_unref (self);
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
                qmi_message_oma_set_event_report_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Start Session */


/* --- Input -- */

struct _QmiMessageOmaStartSessionInput {
    volatile gint ref_count;

    /* Session Type */
    gboolean arg_session_type_set;
    guint8 arg_session_type;
};

#define QMI_MESSAGE_OMA_START_SESSION_INPUT_TLV_SESSION_TYPE 0x10

gboolean
qmi_message_oma_start_session_input_get_session_type (
    QmiMessageOmaStartSessionInput *self,
    QmiOmaSessionType *value_session_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session Type' was not found in the message");
        return FALSE;
    }

    if (value_session_type)
        *value_session_type = (QmiOmaSessionType)(self->arg_session_type);

    return TRUE;
}

gboolean
qmi_message_oma_start_session_input_set_session_type (
    QmiMessageOmaStartSessionInput *self,
    QmiOmaSessionType value_session_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_type = (guint8)(value_session_type);
    self->arg_session_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_oma_start_session_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageOmaStartSessionInput"),
                                          (GBoxedCopyFunc) qmi_message_oma_start_session_input_ref,
                                          (GBoxedFreeFunc) qmi_message_oma_start_session_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageOmaStartSessionInput *
qmi_message_oma_start_session_input_ref (QmiMessageOmaStartSessionInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_oma_start_session_input_unref (QmiMessageOmaStartSessionInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageOmaStartSessionInput, self);
    }
}

QmiMessageOmaStartSessionInput *
qmi_message_oma_start_session_input_new (void)
{
    QmiMessageOmaStartSessionInput *self;

    self = g_slice_new0 (QmiMessageOmaStartSessionInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_oma_start_session_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageOmaStartSessionInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_OMA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_OMA_START_SESSION);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Session Type' TLV */
    if (input->arg_session_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_OMA_START_SESSION_INPUT_TLV_SESSION_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session Type': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session Type': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageOmaStartSessionOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_OMA_START_SESSION_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_oma_start_session_output_get_result (
    QmiMessageOmaStartSessionOutput *self,
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
qmi_message_oma_start_session_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageOmaStartSessionOutput"),
                                          (GBoxedCopyFunc) qmi_message_oma_start_session_output_ref,
                                          (GBoxedFreeFunc) qmi_message_oma_start_session_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageOmaStartSessionOutput *
qmi_message_oma_start_session_output_ref (QmiMessageOmaStartSessionOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_oma_start_session_output_unref (QmiMessageOmaStartSessionOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageOmaStartSessionOutput, self);
    }
}

static gchar *
qmi_message_oma_start_session_input_session_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_START_SESSION_INPUT_TLV_SESSION_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_OMA_SESSION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_oma_session_type_get_string ((QmiOmaSessionType)tmp));
#elif defined  __QMI_OMA_SESSION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_oma_session_type_build_string_from_mask ((QmiOmaSessionType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiOmaSessionType
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

struct message_start_session_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_start_session_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_start_session_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_OMA_START_SESSION_INPUT_TLV_SESSION_TYPE:
            tlv_type_str = "Session Type";
            translated_value = qmi_message_oma_start_session_input_session_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_OMA_START_SESSION_OUTPUT_TLV_RESULT:
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
message_start_session_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Start Session\" (0x0020)\n",
                            line_prefix);

    {
        struct message_start_session_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_start_session_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageOmaStartSessionOutput *
qmi_message_oma_start_session_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageOmaStartSessionOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_OMA_START_SESSION);

    self = g_slice_new0 (QmiMessageOmaStartSessionOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_START_SESSION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_oma_start_session_output_unref (self);
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
                qmi_message_oma_start_session_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Cancel Session */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_oma_cancel_session_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_OMA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_OMA_CANCEL_SESSION);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageOmaCancelSessionOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_OMA_CANCEL_SESSION_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_oma_cancel_session_output_get_result (
    QmiMessageOmaCancelSessionOutput *self,
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
qmi_message_oma_cancel_session_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageOmaCancelSessionOutput"),
                                          (GBoxedCopyFunc) qmi_message_oma_cancel_session_output_ref,
                                          (GBoxedFreeFunc) qmi_message_oma_cancel_session_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageOmaCancelSessionOutput *
qmi_message_oma_cancel_session_output_ref (QmiMessageOmaCancelSessionOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_oma_cancel_session_output_unref (QmiMessageOmaCancelSessionOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageOmaCancelSessionOutput, self);
    }
}

struct message_cancel_session_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_cancel_session_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_cancel_session_context *ctx)
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
        case QMI_MESSAGE_OMA_CANCEL_SESSION_OUTPUT_TLV_RESULT:
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
message_cancel_session_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Cancel Session\" (0x0021)\n",
                            line_prefix);

    {
        struct message_cancel_session_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_cancel_session_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageOmaCancelSessionOutput *
qmi_message_oma_cancel_session_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageOmaCancelSessionOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_OMA_CANCEL_SESSION);

    self = g_slice_new0 (QmiMessageOmaCancelSessionOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_CANCEL_SESSION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_oma_cancel_session_output_unref (self);
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
                qmi_message_oma_cancel_session_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Get Session Info */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_oma_get_session_info_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_OMA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_OMA_GET_SESSION_INFO);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageOmaGetSessionInfoOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Session Info */
    gboolean arg_session_info_set;
    guint8 arg_session_info_session_state;
    guint8 arg_session_info_session_type;

    /* Session Failed Reason */
    gboolean arg_session_failed_reason_set;
    guint8 arg_session_failed_reason;

    /* Retry Info */
    gboolean arg_retry_info_set;
    guint8 arg_retry_info_retry_count;
    guint16 arg_retry_info_retry_pause_timer;
    guint16 arg_retry_info_retry_pause_timer_remaining;

    /* Network Initiated Alert */
    gboolean arg_network_initiated_alert_set;
    guint8 arg_network_initiated_alert_session_type;
    guint16 arg_network_initiated_alert_session_id;
};

#define QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_SESSION_INFO 0x10
#define QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_SESSION_FAILED_REASON 0x11
#define QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_RETRY_INFO 0x12
#define QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_NETWORK_INITIATED_ALERT 0x13

gboolean
qmi_message_oma_get_session_info_output_get_result (
    QmiMessageOmaGetSessionInfoOutput *self,
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
qmi_message_oma_get_session_info_output_get_session_info (
    QmiMessageOmaGetSessionInfoOutput *self,
    QmiOmaSessionState *value_session_info_session_state,
    QmiOmaSessionType *value_session_info_session_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session Info' was not found in the message");
        return FALSE;
    }

    if (value_session_info_session_state)
        *value_session_info_session_state = (QmiOmaSessionState)(self->arg_session_info_session_state);
    if (value_session_info_session_type)
        *value_session_info_session_type = (QmiOmaSessionType)(self->arg_session_info_session_type);

    return TRUE;
}

gboolean
qmi_message_oma_get_session_info_output_get_session_failed_reason (
    QmiMessageOmaGetSessionInfoOutput *self,
    QmiOmaSessionFailedReason *value_session_failed_reason,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_failed_reason_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session Failed Reason' was not found in the message");
        return FALSE;
    }

    if (value_session_failed_reason)
        *value_session_failed_reason = (QmiOmaSessionFailedReason)(self->arg_session_failed_reason);

    return TRUE;
}

gboolean
qmi_message_oma_get_session_info_output_get_retry_info (
    QmiMessageOmaGetSessionInfoOutput *self,
    guint8 *value_retry_info_retry_count,
    guint16 *value_retry_info_retry_pause_timer,
    guint16 *value_retry_info_retry_pause_timer_remaining,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_retry_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Retry Info' was not found in the message");
        return FALSE;
    }

    if (value_retry_info_retry_count)
        *value_retry_info_retry_count = self->arg_retry_info_retry_count;
    if (value_retry_info_retry_pause_timer)
        *value_retry_info_retry_pause_timer = self->arg_retry_info_retry_pause_timer;
    if (value_retry_info_retry_pause_timer_remaining)
        *value_retry_info_retry_pause_timer_remaining = self->arg_retry_info_retry_pause_timer_remaining;

    return TRUE;
}

gboolean
qmi_message_oma_get_session_info_output_get_network_initiated_alert (
    QmiMessageOmaGetSessionInfoOutput *self,
    QmiOmaSessionType *value_network_initiated_alert_session_type,
    guint16 *value_network_initiated_alert_session_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_network_initiated_alert_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Network Initiated Alert' was not found in the message");
        return FALSE;
    }

    if (value_network_initiated_alert_session_type)
        *value_network_initiated_alert_session_type = (QmiOmaSessionType)(self->arg_network_initiated_alert_session_type);
    if (value_network_initiated_alert_session_id)
        *value_network_initiated_alert_session_id = self->arg_network_initiated_alert_session_id;

    return TRUE;
}

GType
qmi_message_oma_get_session_info_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageOmaGetSessionInfoOutput"),
                                          (GBoxedCopyFunc) qmi_message_oma_get_session_info_output_ref,
                                          (GBoxedFreeFunc) qmi_message_oma_get_session_info_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageOmaGetSessionInfoOutput *
qmi_message_oma_get_session_info_output_ref (QmiMessageOmaGetSessionInfoOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_oma_get_session_info_output_unref (QmiMessageOmaGetSessionInfoOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageOmaGetSessionInfoOutput, self);
    }
}

static gchar *
qmi_message_oma_get_session_info_output_session_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_SESSION_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " session_state = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_OMA_SESSION_STATE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_oma_session_state_get_string ((QmiOmaSessionState)tmp));
#elif defined  __QMI_OMA_SESSION_STATE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_oma_session_state_build_string_from_mask ((QmiOmaSessionState)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiOmaSessionState
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " session_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_OMA_SESSION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_oma_session_type_get_string ((QmiOmaSessionType)tmp));
#elif defined  __QMI_OMA_SESSION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_oma_session_type_build_string_from_mask ((QmiOmaSessionType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiOmaSessionType
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
qmi_message_oma_get_session_info_output_session_failed_reason_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_SESSION_FAILED_REASON, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_OMA_SESSION_FAILED_REASON_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_oma_session_failed_reason_get_string ((QmiOmaSessionFailedReason)tmp));
#elif defined  __QMI_OMA_SESSION_FAILED_REASON_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_oma_session_failed_reason_build_string_from_mask ((QmiOmaSessionFailedReason)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiOmaSessionFailedReason
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
qmi_message_oma_get_session_info_output_retry_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_RETRY_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " retry_count = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " retry_pause_timer = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " retry_pause_timer_remaining = '");

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
qmi_message_oma_get_session_info_output_network_initiated_alert_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_NETWORK_INITIATED_ALERT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " session_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_OMA_SESSION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_oma_session_type_get_string ((QmiOmaSessionType)tmp));
#elif defined  __QMI_OMA_SESSION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_oma_session_type_build_string_from_mask ((QmiOmaSessionType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiOmaSessionType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " session_id = '");

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

struct message_get_session_info_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_session_info_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_session_info_context *ctx)
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
        case QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_SESSION_INFO:
            tlv_type_str = "Session Info";
            translated_value = qmi_message_oma_get_session_info_output_session_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_SESSION_FAILED_REASON:
            tlv_type_str = "Session Failed Reason";
            translated_value = qmi_message_oma_get_session_info_output_session_failed_reason_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_RETRY_INFO:
            tlv_type_str = "Retry Info";
            translated_value = qmi_message_oma_get_session_info_output_retry_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_NETWORK_INITIATED_ALERT:
            tlv_type_str = "Network Initiated Alert";
            translated_value = qmi_message_oma_get_session_info_output_network_initiated_alert_get_printable (
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
message_get_session_info_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Session Info\" (0x0022)\n",
                            line_prefix);

    {
        struct message_get_session_info_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_session_info_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageOmaGetSessionInfoOutput *
qmi_message_oma_get_session_info_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageOmaGetSessionInfoOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_OMA_GET_SESSION_INFO);

    self = g_slice_new0 (QmiMessageOmaGetSessionInfoOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_oma_get_session_info_output_unref (self);
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
                qmi_message_oma_get_session_info_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_SESSION_INFO, NULL, NULL)) == 0) {
                goto qmi_message_oma_get_session_info_output_session_info_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_oma_get_session_info_output_session_info_out;
                self->arg_session_info_session_state = (QmiOmaSessionState)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_oma_get_session_info_output_session_info_out;
                self->arg_session_info_session_type = (QmiOmaSessionType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Session Info' TLV", offset);
            }

            self->arg_session_info_set = TRUE;

qmi_message_oma_get_session_info_output_session_info_out:
            ;

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_session_info_session_state == QMI_OMA_SESSION_STATE_FAILED))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_SESSION_FAILED_REASON, NULL, NULL)) == 0) {
                goto qmi_message_oma_get_session_info_output_session_failed_reason_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_oma_get_session_info_output_session_failed_reason_out;
                self->arg_session_failed_reason = (QmiOmaSessionFailedReason)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Session Failed Reason' TLV", offset);
            }

            self->arg_session_failed_reason_set = TRUE;

qmi_message_oma_get_session_info_output_session_failed_reason_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_RETRY_INFO, NULL, NULL)) == 0) {
                goto qmi_message_oma_get_session_info_output_retry_info_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_retry_info_retry_count), NULL))
                goto qmi_message_oma_get_session_info_output_retry_info_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_retry_info_retry_pause_timer), NULL))
                goto qmi_message_oma_get_session_info_output_retry_info_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_retry_info_retry_pause_timer_remaining), NULL))
                goto qmi_message_oma_get_session_info_output_retry_info_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Retry Info' TLV", offset);
            }

            self->arg_retry_info_set = TRUE;

qmi_message_oma_get_session_info_output_retry_info_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT_TLV_NETWORK_INITIATED_ALERT, NULL, NULL)) == 0) {
                goto qmi_message_oma_get_session_info_output_network_initiated_alert_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_oma_get_session_info_output_network_initiated_alert_out;
                self->arg_network_initiated_alert_session_type = (QmiOmaSessionType)tmp;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_network_initiated_alert_session_id), NULL))
                goto qmi_message_oma_get_session_info_output_network_initiated_alert_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Network Initiated Alert' TLV", offset);
            }

            self->arg_network_initiated_alert_set = TRUE;

qmi_message_oma_get_session_info_output_network_initiated_alert_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Send Selection */


/* --- Input -- */

struct _QmiMessageOmaSendSelectionInput {
    volatile gint ref_count;

    /* Network Initiated Alert Selection */
    gboolean arg_network_initiated_alert_selection_set;
    guint8 arg_network_initiated_alert_selection_control_point_selection_accept;
    guint16 arg_network_initiated_alert_selection_session_id;
};

#define QMI_MESSAGE_OMA_SEND_SELECTION_INPUT_TLV_NETWORK_INITIATED_ALERT_SELECTION 0x10

gboolean
qmi_message_oma_send_selection_input_get_network_initiated_alert_selection (
    QmiMessageOmaSendSelectionInput *self,
    gboolean *value_network_initiated_alert_selection_control_point_selection_accept,
    guint16 *value_network_initiated_alert_selection_session_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_network_initiated_alert_selection_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Network Initiated Alert Selection' was not found in the message");
        return FALSE;
    }

    if (value_network_initiated_alert_selection_control_point_selection_accept)
        *value_network_initiated_alert_selection_control_point_selection_accept = (gboolean)(self->arg_network_initiated_alert_selection_control_point_selection_accept);
    if (value_network_initiated_alert_selection_session_id)
        *value_network_initiated_alert_selection_session_id = self->arg_network_initiated_alert_selection_session_id;

    return TRUE;
}

gboolean
qmi_message_oma_send_selection_input_set_network_initiated_alert_selection (
    QmiMessageOmaSendSelectionInput *self,
    gboolean value_network_initiated_alert_selection_control_point_selection_accept,
    guint16 value_network_initiated_alert_selection_session_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_network_initiated_alert_selection_control_point_selection_accept = (guint8)(value_network_initiated_alert_selection_control_point_selection_accept);
    self->arg_network_initiated_alert_selection_session_id = value_network_initiated_alert_selection_session_id;
    self->arg_network_initiated_alert_selection_set = TRUE;

    return TRUE;
}

GType
qmi_message_oma_send_selection_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageOmaSendSelectionInput"),
                                          (GBoxedCopyFunc) qmi_message_oma_send_selection_input_ref,
                                          (GBoxedFreeFunc) qmi_message_oma_send_selection_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageOmaSendSelectionInput *
qmi_message_oma_send_selection_input_ref (QmiMessageOmaSendSelectionInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_oma_send_selection_input_unref (QmiMessageOmaSendSelectionInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageOmaSendSelectionInput, self);
    }
}

QmiMessageOmaSendSelectionInput *
qmi_message_oma_send_selection_input_new (void)
{
    QmiMessageOmaSendSelectionInput *self;

    self = g_slice_new0 (QmiMessageOmaSendSelectionInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_oma_send_selection_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageOmaSendSelectionInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_OMA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_OMA_SEND_SELECTION);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Network Initiated Alert Selection' TLV */
    if (input->arg_network_initiated_alert_selection_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_OMA_SEND_SELECTION_INPUT_TLV_NETWORK_INITIATED_ALERT_SELECTION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Network Initiated Alert Selection': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_network_initiated_alert_selection_control_point_selection_accept;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Network Initiated Alert Selection': ");
                return NULL;
            }
        }
        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_network_initiated_alert_selection_session_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Network Initiated Alert Selection': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Network Initiated Alert Selection': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageOmaSendSelectionOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_OMA_SEND_SELECTION_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_oma_send_selection_output_get_result (
    QmiMessageOmaSendSelectionOutput *self,
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
qmi_message_oma_send_selection_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageOmaSendSelectionOutput"),
                                          (GBoxedCopyFunc) qmi_message_oma_send_selection_output_ref,
                                          (GBoxedFreeFunc) qmi_message_oma_send_selection_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageOmaSendSelectionOutput *
qmi_message_oma_send_selection_output_ref (QmiMessageOmaSendSelectionOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_oma_send_selection_output_unref (QmiMessageOmaSendSelectionOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageOmaSendSelectionOutput, self);
    }
}

static gchar *
qmi_message_oma_send_selection_input_network_initiated_alert_selection_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_SEND_SELECTION_INPUT_TLV_NETWORK_INITIATED_ALERT_SELECTION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " control_point_selection_accept = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " session_id = '");

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

struct message_send_selection_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_send_selection_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_send_selection_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_OMA_SEND_SELECTION_INPUT_TLV_NETWORK_INITIATED_ALERT_SELECTION:
            tlv_type_str = "Network Initiated Alert Selection";
            translated_value = qmi_message_oma_send_selection_input_network_initiated_alert_selection_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_OMA_SEND_SELECTION_OUTPUT_TLV_RESULT:
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
message_send_selection_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Send Selection\" (0x0023)\n",
                            line_prefix);

    {
        struct message_send_selection_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_send_selection_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageOmaSendSelectionOutput *
qmi_message_oma_send_selection_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageOmaSendSelectionOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_OMA_SEND_SELECTION);

    self = g_slice_new0 (QmiMessageOmaSendSelectionOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_SEND_SELECTION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_oma_send_selection_output_unref (self);
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
                qmi_message_oma_send_selection_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Get Feature Setting */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_oma_get_feature_setting_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_OMA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_OMA_GET_FEATURE_SETTING);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageOmaGetFeatureSettingOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Device Provisioning Service Update Config */
    gboolean arg_device_provisioning_service_update_config_set;
    guint8 arg_device_provisioning_service_update_config;

    /* PRL Update Service Config */
    gboolean arg_prl_update_service_config_set;
    guint8 arg_prl_update_service_config;

    /* HFA Feature Config */
    gboolean arg_hfa_feature_config_set;
    guint8 arg_hfa_feature_config;

    /* HFA Feature Done State */
    gboolean arg_hfa_feature_done_state_set;
    guint8 arg_hfa_feature_done_state;
};

#define QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_DEVICE_PROVISIONING_SERVICE_UPDATE_CONFIG 0x10
#define QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_PRL_UPDATE_SERVICE_CONFIG 0x11
#define QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_HFA_FEATURE_CONFIG 0x12
#define QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_HFA_FEATURE_DONE_STATE 0x13

gboolean
qmi_message_oma_get_feature_setting_output_get_result (
    QmiMessageOmaGetFeatureSettingOutput *self,
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
qmi_message_oma_get_feature_setting_output_get_device_provisioning_service_update_config (
    QmiMessageOmaGetFeatureSettingOutput *self,
    gboolean *value_device_provisioning_service_update_config,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_device_provisioning_service_update_config_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Device Provisioning Service Update Config' was not found in the message");
        return FALSE;
    }

    if (value_device_provisioning_service_update_config)
        *value_device_provisioning_service_update_config = (gboolean)(self->arg_device_provisioning_service_update_config);

    return TRUE;
}

gboolean
qmi_message_oma_get_feature_setting_output_get_prl_update_service_config (
    QmiMessageOmaGetFeatureSettingOutput *self,
    gboolean *value_prl_update_service_config,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_prl_update_service_config_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'PRL Update Service Config' was not found in the message");
        return FALSE;
    }

    if (value_prl_update_service_config)
        *value_prl_update_service_config = (gboolean)(self->arg_prl_update_service_config);

    return TRUE;
}

gboolean
qmi_message_oma_get_feature_setting_output_get_hfa_feature_config (
    QmiMessageOmaGetFeatureSettingOutput *self,
    gboolean *value_hfa_feature_config,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_hfa_feature_config_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'HFA Feature Config' was not found in the message");
        return FALSE;
    }

    if (value_hfa_feature_config)
        *value_hfa_feature_config = (gboolean)(self->arg_hfa_feature_config);

    return TRUE;
}

gboolean
qmi_message_oma_get_feature_setting_output_get_hfa_feature_done_state (
    QmiMessageOmaGetFeatureSettingOutput *self,
    QmiOmaHfaFeatureDoneState *value_hfa_feature_done_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_hfa_feature_done_state_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'HFA Feature Done State' was not found in the message");
        return FALSE;
    }

    if (value_hfa_feature_done_state)
        *value_hfa_feature_done_state = (QmiOmaHfaFeatureDoneState)(self->arg_hfa_feature_done_state);

    return TRUE;
}

GType
qmi_message_oma_get_feature_setting_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageOmaGetFeatureSettingOutput"),
                                          (GBoxedCopyFunc) qmi_message_oma_get_feature_setting_output_ref,
                                          (GBoxedFreeFunc) qmi_message_oma_get_feature_setting_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageOmaGetFeatureSettingOutput *
qmi_message_oma_get_feature_setting_output_ref (QmiMessageOmaGetFeatureSettingOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_oma_get_feature_setting_output_unref (QmiMessageOmaGetFeatureSettingOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageOmaGetFeatureSettingOutput, self);
    }
}

static gchar *
qmi_message_oma_get_feature_setting_output_device_provisioning_service_update_config_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_DEVICE_PROVISIONING_SERVICE_UPDATE_CONFIG, NULL, NULL)) == 0)
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
qmi_message_oma_get_feature_setting_output_prl_update_service_config_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_PRL_UPDATE_SERVICE_CONFIG, NULL, NULL)) == 0)
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
qmi_message_oma_get_feature_setting_output_hfa_feature_config_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_HFA_FEATURE_CONFIG, NULL, NULL)) == 0)
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
qmi_message_oma_get_feature_setting_output_hfa_feature_done_state_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_HFA_FEATURE_DONE_STATE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_OMA_HFA_FEATURE_DONE_STATE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_oma_hfa_feature_done_state_get_string ((QmiOmaHfaFeatureDoneState)tmp));
#elif defined  __QMI_OMA_HFA_FEATURE_DONE_STATE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_oma_hfa_feature_done_state_build_string_from_mask ((QmiOmaHfaFeatureDoneState)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiOmaHfaFeatureDoneState
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

struct message_get_feature_setting_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_feature_setting_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_feature_setting_context *ctx)
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
        case QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_DEVICE_PROVISIONING_SERVICE_UPDATE_CONFIG:
            tlv_type_str = "Device Provisioning Service Update Config";
            translated_value = qmi_message_oma_get_feature_setting_output_device_provisioning_service_update_config_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_PRL_UPDATE_SERVICE_CONFIG:
            tlv_type_str = "PRL Update Service Config";
            translated_value = qmi_message_oma_get_feature_setting_output_prl_update_service_config_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_HFA_FEATURE_CONFIG:
            tlv_type_str = "HFA Feature Config";
            translated_value = qmi_message_oma_get_feature_setting_output_hfa_feature_config_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_HFA_FEATURE_DONE_STATE:
            tlv_type_str = "HFA Feature Done State";
            translated_value = qmi_message_oma_get_feature_setting_output_hfa_feature_done_state_get_printable (
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
message_get_feature_setting_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Feature Setting\" (0x0024)\n",
                            line_prefix);

    {
        struct message_get_feature_setting_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_feature_setting_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageOmaGetFeatureSettingOutput *
qmi_message_oma_get_feature_setting_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageOmaGetFeatureSettingOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_OMA_GET_FEATURE_SETTING);

    self = g_slice_new0 (QmiMessageOmaGetFeatureSettingOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_oma_get_feature_setting_output_unref (self);
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
                qmi_message_oma_get_feature_setting_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_DEVICE_PROVISIONING_SERVICE_UPDATE_CONFIG, NULL, NULL)) == 0) {
                goto qmi_message_oma_get_feature_setting_output_device_provisioning_service_update_config_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_oma_get_feature_setting_output_device_provisioning_service_update_config_out;
                self->arg_device_provisioning_service_update_config = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Device Provisioning Service Update Config' TLV", offset);
            }

            self->arg_device_provisioning_service_update_config_set = TRUE;

qmi_message_oma_get_feature_setting_output_device_provisioning_service_update_config_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_PRL_UPDATE_SERVICE_CONFIG, NULL, NULL)) == 0) {
                goto qmi_message_oma_get_feature_setting_output_prl_update_service_config_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_oma_get_feature_setting_output_prl_update_service_config_out;
                self->arg_prl_update_service_config = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'PRL Update Service Config' TLV", offset);
            }

            self->arg_prl_update_service_config_set = TRUE;

qmi_message_oma_get_feature_setting_output_prl_update_service_config_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_HFA_FEATURE_CONFIG, NULL, NULL)) == 0) {
                goto qmi_message_oma_get_feature_setting_output_hfa_feature_config_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_oma_get_feature_setting_output_hfa_feature_config_out;
                self->arg_hfa_feature_config = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'HFA Feature Config' TLV", offset);
            }

            self->arg_hfa_feature_config_set = TRUE;

qmi_message_oma_get_feature_setting_output_hfa_feature_config_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT_TLV_HFA_FEATURE_DONE_STATE, NULL, NULL)) == 0) {
                goto qmi_message_oma_get_feature_setting_output_hfa_feature_done_state_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_oma_get_feature_setting_output_hfa_feature_done_state_out;
                self->arg_hfa_feature_done_state = (QmiOmaHfaFeatureDoneState)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'HFA Feature Done State' TLV", offset);
            }

            self->arg_hfa_feature_done_state_set = TRUE;

qmi_message_oma_get_feature_setting_output_hfa_feature_done_state_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Set Feature Setting */


/* --- Input -- */

struct _QmiMessageOmaSetFeatureSettingInput {
    volatile gint ref_count;

    /* HFA Feature Config */
    gboolean arg_hfa_feature_config_set;
    guint8 arg_hfa_feature_config;

    /* PRL Update Service Config */
    gboolean arg_prl_update_service_config_set;
    guint8 arg_prl_update_service_config;

    /* Device Provisioning Service Update Config */
    gboolean arg_device_provisioning_service_update_config_set;
    guint8 arg_device_provisioning_service_update_config;
};

#define QMI_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT_TLV_HFA_FEATURE_CONFIG 0x12
#define QMI_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT_TLV_PRL_UPDATE_SERVICE_CONFIG 0x11
#define QMI_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT_TLV_DEVICE_PROVISIONING_SERVICE_UPDATE_CONFIG 0x10

gboolean
qmi_message_oma_set_feature_setting_input_get_hfa_feature_config (
    QmiMessageOmaSetFeatureSettingInput *self,
    gboolean *value_hfa_feature_config,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_hfa_feature_config_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'HFA Feature Config' was not found in the message");
        return FALSE;
    }

    if (value_hfa_feature_config)
        *value_hfa_feature_config = (gboolean)(self->arg_hfa_feature_config);

    return TRUE;
}

gboolean
qmi_message_oma_set_feature_setting_input_set_hfa_feature_config (
    QmiMessageOmaSetFeatureSettingInput *self,
    gboolean value_hfa_feature_config,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_hfa_feature_config = (guint8)(value_hfa_feature_config);
    self->arg_hfa_feature_config_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_oma_set_feature_setting_input_get_prl_update_service_config (
    QmiMessageOmaSetFeatureSettingInput *self,
    gboolean *value_prl_update_service_config,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_prl_update_service_config_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'PRL Update Service Config' was not found in the message");
        return FALSE;
    }

    if (value_prl_update_service_config)
        *value_prl_update_service_config = (gboolean)(self->arg_prl_update_service_config);

    return TRUE;
}

gboolean
qmi_message_oma_set_feature_setting_input_set_prl_update_service_config (
    QmiMessageOmaSetFeatureSettingInput *self,
    gboolean value_prl_update_service_config,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_prl_update_service_config = (guint8)(value_prl_update_service_config);
    self->arg_prl_update_service_config_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_oma_set_feature_setting_input_get_device_provisioning_service_update_config (
    QmiMessageOmaSetFeatureSettingInput *self,
    gboolean *value_device_provisioning_service_update_config,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_device_provisioning_service_update_config_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Device Provisioning Service Update Config' was not found in the message");
        return FALSE;
    }

    if (value_device_provisioning_service_update_config)
        *value_device_provisioning_service_update_config = (gboolean)(self->arg_device_provisioning_service_update_config);

    return TRUE;
}

gboolean
qmi_message_oma_set_feature_setting_input_set_device_provisioning_service_update_config (
    QmiMessageOmaSetFeatureSettingInput *self,
    gboolean value_device_provisioning_service_update_config,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_device_provisioning_service_update_config = (guint8)(value_device_provisioning_service_update_config);
    self->arg_device_provisioning_service_update_config_set = TRUE;

    return TRUE;
}

GType
qmi_message_oma_set_feature_setting_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageOmaSetFeatureSettingInput"),
                                          (GBoxedCopyFunc) qmi_message_oma_set_feature_setting_input_ref,
                                          (GBoxedFreeFunc) qmi_message_oma_set_feature_setting_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageOmaSetFeatureSettingInput *
qmi_message_oma_set_feature_setting_input_ref (QmiMessageOmaSetFeatureSettingInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_oma_set_feature_setting_input_unref (QmiMessageOmaSetFeatureSettingInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageOmaSetFeatureSettingInput, self);
    }
}

QmiMessageOmaSetFeatureSettingInput *
qmi_message_oma_set_feature_setting_input_new (void)
{
    QmiMessageOmaSetFeatureSettingInput *self;

    self = g_slice_new0 (QmiMessageOmaSetFeatureSettingInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_oma_set_feature_setting_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageOmaSetFeatureSettingInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_OMA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_OMA_SET_FEATURE_SETTING);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'HFA Feature Config' TLV */
    if (input->arg_hfa_feature_config_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT_TLV_HFA_FEATURE_CONFIG, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'HFA Feature Config': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_hfa_feature_config;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'HFA Feature Config': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'HFA Feature Config': ");
            return NULL;
        }
    }

    /* Try to add the 'PRL Update Service Config' TLV */
    if (input->arg_prl_update_service_config_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT_TLV_PRL_UPDATE_SERVICE_CONFIG, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'PRL Update Service Config': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_prl_update_service_config;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'PRL Update Service Config': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'PRL Update Service Config': ");
            return NULL;
        }
    }

    /* Try to add the 'Device Provisioning Service Update Config' TLV */
    if (input->arg_device_provisioning_service_update_config_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT_TLV_DEVICE_PROVISIONING_SERVICE_UPDATE_CONFIG, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Device Provisioning Service Update Config': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_device_provisioning_service_update_config;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Device Provisioning Service Update Config': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Device Provisioning Service Update Config': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageOmaSetFeatureSettingOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_OMA_SET_FEATURE_SETTING_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_oma_set_feature_setting_output_get_result (
    QmiMessageOmaSetFeatureSettingOutput *self,
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
qmi_message_oma_set_feature_setting_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageOmaSetFeatureSettingOutput"),
                                          (GBoxedCopyFunc) qmi_message_oma_set_feature_setting_output_ref,
                                          (GBoxedFreeFunc) qmi_message_oma_set_feature_setting_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageOmaSetFeatureSettingOutput *
qmi_message_oma_set_feature_setting_output_ref (QmiMessageOmaSetFeatureSettingOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_oma_set_feature_setting_output_unref (QmiMessageOmaSetFeatureSettingOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageOmaSetFeatureSettingOutput, self);
    }
}

static gchar *
qmi_message_oma_set_feature_setting_input_hfa_feature_config_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT_TLV_HFA_FEATURE_CONFIG, NULL, NULL)) == 0)
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
qmi_message_oma_set_feature_setting_input_prl_update_service_config_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT_TLV_PRL_UPDATE_SERVICE_CONFIG, NULL, NULL)) == 0)
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
qmi_message_oma_set_feature_setting_input_device_provisioning_service_update_config_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT_TLV_DEVICE_PROVISIONING_SERVICE_UPDATE_CONFIG, NULL, NULL)) == 0)
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

struct message_set_feature_setting_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_feature_setting_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_feature_setting_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT_TLV_HFA_FEATURE_CONFIG:
            tlv_type_str = "HFA Feature Config";
            translated_value = qmi_message_oma_set_feature_setting_input_hfa_feature_config_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT_TLV_PRL_UPDATE_SERVICE_CONFIG:
            tlv_type_str = "PRL Update Service Config";
            translated_value = qmi_message_oma_set_feature_setting_input_prl_update_service_config_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT_TLV_DEVICE_PROVISIONING_SERVICE_UPDATE_CONFIG:
            tlv_type_str = "Device Provisioning Service Update Config";
            translated_value = qmi_message_oma_set_feature_setting_input_device_provisioning_service_update_config_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_OMA_SET_FEATURE_SETTING_OUTPUT_TLV_RESULT:
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
message_set_feature_setting_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Feature Setting\" (0x0025)\n",
                            line_prefix);

    {
        struct message_set_feature_setting_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_feature_setting_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageOmaSetFeatureSettingOutput *
qmi_message_oma_set_feature_setting_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageOmaSetFeatureSettingOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_OMA_SET_FEATURE_SETTING);

    self = g_slice_new0 (QmiMessageOmaSetFeatureSettingOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_OMA_SET_FEATURE_SETTING_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_oma_set_feature_setting_output_unref (self);
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
                qmi_message_oma_set_feature_setting_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: OMA */


gchar *
__qmi_message_oma_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_OMA_EVENT_REPORT:
            return indication_event_report_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_OMA_RESET:
                return message_reset_get_printable (self, line_prefix);
            case QMI_MESSAGE_OMA_SET_EVENT_REPORT:
                return message_set_event_report_get_printable (self, line_prefix);
            case QMI_MESSAGE_OMA_START_SESSION:
                return message_start_session_get_printable (self, line_prefix);
            case QMI_MESSAGE_OMA_CANCEL_SESSION:
                return message_cancel_session_get_printable (self, line_prefix);
            case QMI_MESSAGE_OMA_GET_SESSION_INFO:
                return message_get_session_info_get_printable (self, line_prefix);
            case QMI_MESSAGE_OMA_SEND_SELECTION:
                return message_send_selection_get_printable (self, line_prefix);
            case QMI_MESSAGE_OMA_GET_FEATURE_SETTING:
                return message_get_feature_setting_get_printable (self, line_prefix);
            case QMI_MESSAGE_OMA_SET_FEATURE_SETTING:
                return message_set_feature_setting_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client OMA */

G_DEFINE_TYPE (QmiClientOma, qmi_client_oma, QMI_TYPE_CLIENT)

enum {
    SIGNAL_EVENT_REPORT,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_OMA_EVENT_REPORT: {
            QmiIndicationOmaEventReportOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_oma_event_report_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Event Report' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_EVENT_REPORT], 0, output);
                qmi_indication_oma_event_report_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_oma_init (QmiClientOma *self)
{
}

static void
qmi_client_oma_class_init (QmiClientOmaClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientOma::event-report:
     * @object: A #QmiClientOma.
     * @output: A #QmiIndicationOmaEventReportOutput.
     *
     * The ::event-report signal gets emitted when a '<link linkend="libqmi-glib-OMA-Event-Report-indication.top_of_page">Event Report</link>' indication is received.
     *
     * Since: 1.6
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
                      QMI_TYPE_INDICATION_OMA_EVENT_REPORT_OUTPUT);
}


QmiMessageOmaResetOutput *
qmi_client_oma_reset_finish (
    QmiClientOma *self,
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
    QmiMessageOmaResetOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_oma_reset_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_oma_reset_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_oma_reset (
    QmiClientOma *self,
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

    request = __qmi_message_oma_reset_request_create (
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


QmiMessageOmaSetEventReportOutput *
qmi_client_oma_set_event_report_finish (
    QmiClientOma *self,
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
    QmiMessageOmaSetEventReportOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_oma_set_event_report_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_oma_set_event_report_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_oma_set_event_report (
    QmiClientOma *self,
    QmiMessageOmaSetEventReportInput *input,
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

    request = __qmi_message_oma_set_event_report_request_create (
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


QmiMessageOmaStartSessionOutput *
qmi_client_oma_start_session_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
start_session_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageOmaStartSessionOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_oma_start_session_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_oma_start_session_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_oma_start_session (
    QmiClientOma *self,
    QmiMessageOmaStartSessionInput *input,
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

    request = __qmi_message_oma_start_session_request_create (
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
                             (GAsyncReadyCallback)start_session_ready,
                             task);
}


QmiMessageOmaCancelSessionOutput *
qmi_client_oma_cancel_session_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
cancel_session_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageOmaCancelSessionOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_oma_cancel_session_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_oma_cancel_session_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_oma_cancel_session (
    QmiClientOma *self,
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

    request = __qmi_message_oma_cancel_session_request_create (
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
                             (GAsyncReadyCallback)cancel_session_ready,
                             task);
}


QmiMessageOmaGetSessionInfoOutput *
qmi_client_oma_get_session_info_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_session_info_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageOmaGetSessionInfoOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_oma_get_session_info_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_oma_get_session_info_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_oma_get_session_info (
    QmiClientOma *self,
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

    request = __qmi_message_oma_get_session_info_request_create (
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
                             (GAsyncReadyCallback)get_session_info_ready,
                             task);
}


QmiMessageOmaSendSelectionOutput *
qmi_client_oma_send_selection_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
send_selection_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageOmaSendSelectionOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_oma_send_selection_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_oma_send_selection_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_oma_send_selection (
    QmiClientOma *self,
    QmiMessageOmaSendSelectionInput *input,
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

    request = __qmi_message_oma_send_selection_request_create (
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
                             (GAsyncReadyCallback)send_selection_ready,
                             task);
}


QmiMessageOmaGetFeatureSettingOutput *
qmi_client_oma_get_feature_setting_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_feature_setting_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageOmaGetFeatureSettingOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_oma_get_feature_setting_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_oma_get_feature_setting_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_oma_get_feature_setting (
    QmiClientOma *self,
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

    request = __qmi_message_oma_get_feature_setting_request_create (
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
                             (GAsyncReadyCallback)get_feature_setting_ready,
                             task);
}


QmiMessageOmaSetFeatureSettingOutput *
qmi_client_oma_set_feature_setting_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_feature_setting_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageOmaSetFeatureSettingOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_oma_set_feature_setting_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_oma_set_feature_setting_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_oma_set_feature_setting (
    QmiClientOma *self,
    QmiMessageOmaSetFeatureSettingInput *input,
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

    request = __qmi_message_oma_set_feature_setting_request_create (
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
                             (GAsyncReadyCallback)set_feature_setting_ready,
                             task);
}

