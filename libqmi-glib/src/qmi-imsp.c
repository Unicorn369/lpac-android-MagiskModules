
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

#include "qmi-imsp.h"
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
    QMI_MESSAGE_IMSP_GET_ENABLER_STATE = 0x0024,
} QmiMessageImsp;


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMSP Get Enabler State */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_imsp_get_enabler_state_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_IMSP,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_IMSP_GET_ENABLER_STATE);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageImspGetEnablerStateOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Enabler State */
    gboolean arg_enabler_state_set;
    guint32 arg_enabler_state;
};

#define QMI_MESSAGE_IMSP_GET_ENABLER_STATE_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_IMSP_GET_ENABLER_STATE_OUTPUT_TLV_ENABLER_STATE 0x10

gboolean
qmi_message_imsp_get_enabler_state_output_get_result (
    QmiMessageImspGetEnablerStateOutput *self,
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
qmi_message_imsp_get_enabler_state_output_get_enabler_state (
    QmiMessageImspGetEnablerStateOutput *self,
    QmiImspEnablerState *value_enabler_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_enabler_state_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Enabler State' was not found in the message");
        return FALSE;
    }

    if (value_enabler_state)
        *value_enabler_state = (QmiImspEnablerState)(self->arg_enabler_state);

    return TRUE;
}

GType
qmi_message_imsp_get_enabler_state_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImspGetEnablerStateOutput"),
                                          (GBoxedCopyFunc) qmi_message_imsp_get_enabler_state_output_ref,
                                          (GBoxedFreeFunc) qmi_message_imsp_get_enabler_state_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImspGetEnablerStateOutput *
qmi_message_imsp_get_enabler_state_output_ref (QmiMessageImspGetEnablerStateOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_imsp_get_enabler_state_output_unref (QmiMessageImspGetEnablerStateOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImspGetEnablerStateOutput, self);
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_IMSP_GET_ENABLER_STATE_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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

static gchar *
qmi_message_imsp_get_enabler_state_output_enabler_state_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSP_GET_ENABLER_STATE_OUTPUT_TLV_ENABLER_STATE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSP_ENABLER_STATE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsp_enabler_state_get_string ((QmiImspEnablerState)tmp));
#elif defined  __QMI_IMSP_ENABLER_STATE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsp_enabler_state_build_string_from_mask ((QmiImspEnablerState)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImspEnablerState
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

struct message_get_enabler_state_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_enabler_state_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_enabler_state_context *ctx)
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
        case QMI_MESSAGE_IMSP_GET_ENABLER_STATE_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSP_GET_ENABLER_STATE_OUTPUT_TLV_ENABLER_STATE:
            tlv_type_str = "Enabler State";
            translated_value = qmi_message_imsp_get_enabler_state_output_enabler_state_get_printable (
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
message_get_enabler_state_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Enabler State\" (0x0024)\n",
                            line_prefix);

    {
        struct message_get_enabler_state_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_enabler_state_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageImspGetEnablerStateOutput *
qmi_message_imsp_get_enabler_state_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageImspGetEnablerStateOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_IMSP_GET_ENABLER_STATE);

    self = g_slice_new0 (QmiMessageImspGetEnablerStateOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSP_GET_ENABLER_STATE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_imsp_get_enabler_state_output_unref (self);
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
                qmi_message_imsp_get_enabler_state_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSP_GET_ENABLER_STATE_OUTPUT_TLV_ENABLER_STATE, NULL, NULL)) == 0) {
                goto qmi_message_imsp_get_enabler_state_output_enabler_state_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsp_get_enabler_state_output_enabler_state_out;
                self->arg_enabler_state = (QmiImspEnablerState)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Enabler State' TLV", offset);
            }

            self->arg_enabler_state_set = TRUE;

qmi_message_imsp_get_enabler_state_output_enabler_state_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: IMSP */


gchar *
__qmi_message_imsp_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_IMSP_GET_ENABLER_STATE:
                return message_get_enabler_state_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client IMSP */

G_DEFINE_TYPE (QmiClientImsp, qmi_client_imsp, QMI_TYPE_CLIENT)

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        default:
            break;
    }
}

static void
qmi_client_imsp_init (QmiClientImsp *self)
{
}

static void
qmi_client_imsp_class_init (QmiClientImspClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;
}


QmiMessageImspGetEnablerStateOutput *
qmi_client_imsp_get_enabler_state_finish (
    QmiClientImsp *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_enabler_state_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageImspGetEnablerStateOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_imsp_get_enabler_state_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_imsp_get_enabler_state_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_imsp_get_enabler_state (
    QmiClientImsp *self,
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

    request = __qmi_message_imsp_get_enabler_state_request_create (
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
                             (GAsyncReadyCallback)get_enabler_state_ready,
                             task);
}

