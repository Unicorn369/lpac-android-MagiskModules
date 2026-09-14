
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

#include "qmi-wda.h"
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
    QMI_MESSAGE_WDA_GET_SUPPORTED_MESSAGES = 0x001E,
    QMI_MESSAGE_WDA_SET_DATA_FORMAT = 0x0020,
    QMI_MESSAGE_WDA_GET_DATA_FORMAT = 0x0021,
    QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION = 0x002f,
} QmiMessageWda;


typedef enum {
    QMI_INDICATION_WDA_LOOPBACK_CONFIGURATION = 0x002f,
} QmiIndicationWda;


/*****************************************************************************/
/* INDICATION: Qmi Indication WDA Loopback Configuration */


/* --- Output -- */

struct _QmiIndicationWdaLoopbackConfigurationOutput {
    volatile gint ref_count;

    /* Replication factor */
    gboolean arg_replication_factor_set;
    guint32 arg_replication_factor;

    /* Loopback state */
    gboolean arg_loopback_state_set;
    guint8 arg_loopback_state;
};

#define QMI_INDICATION_WDA_LOOPBACK_CONFIGURATION_OUTPUT_TLV_REPLICATION_FACTOR 0x10
#define QMI_INDICATION_WDA_LOOPBACK_CONFIGURATION_OUTPUT_TLV_LOOPBACK_STATE 0x01

gboolean
qmi_indication_wda_loopback_configuration_output_get_replication_factor (
    QmiIndicationWdaLoopbackConfigurationOutput *self,
    guint32 *value_replication_factor,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_replication_factor_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Replication factor' was not found in the message");
        return FALSE;
    }

    if (value_replication_factor)
        *value_replication_factor = self->arg_replication_factor;

    return TRUE;
}

gboolean
qmi_indication_wda_loopback_configuration_output_get_loopback_state (
    QmiIndicationWdaLoopbackConfigurationOutput *self,
    QmiWdaLoopBackState *value_loopback_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_loopback_state_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Loopback state' was not found in the message");
        return FALSE;
    }

    if (value_loopback_state)
        *value_loopback_state = (QmiWdaLoopBackState)(self->arg_loopback_state);

    return TRUE;
}

GType
qmi_indication_wda_loopback_configuration_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationWdaLoopbackConfigurationOutput"),
                                          (GBoxedCopyFunc) qmi_indication_wda_loopback_configuration_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_wda_loopback_configuration_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationWdaLoopbackConfigurationOutput *
qmi_indication_wda_loopback_configuration_output_ref (QmiIndicationWdaLoopbackConfigurationOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_wda_loopback_configuration_output_unref (QmiIndicationWdaLoopbackConfigurationOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationWdaLoopbackConfigurationOutput, self);
    }
}

static gchar *
qmi_indication_wda_loopback_configuration_output_replication_factor_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WDA_LOOPBACK_CONFIGURATION_OUTPUT_TLV_REPLICATION_FACTOR, NULL, NULL)) == 0)
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
qmi_indication_wda_loopback_configuration_output_loopback_state_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WDA_LOOPBACK_CONFIGURATION_OUTPUT_TLV_LOOPBACK_STATE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WDA_LOOP_BACK_STATE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wda_loop_back_state_get_string ((QmiWdaLoopBackState)tmp));
#elif defined  __QMI_WDA_LOOP_BACK_STATE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wda_loop_back_state_build_string_from_mask ((QmiWdaLoopBackState)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWdaLoopBackState
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

struct indication_loopback_configuration_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_loopback_configuration_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_loopback_configuration_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_WDA_LOOPBACK_CONFIGURATION_OUTPUT_TLV_REPLICATION_FACTOR:
            tlv_type_str = "Replication factor";
            translated_value = qmi_indication_wda_loopback_configuration_output_replication_factor_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_WDA_LOOPBACK_CONFIGURATION_OUTPUT_TLV_LOOPBACK_STATE:
            tlv_type_str = "Loopback state";
            translated_value = qmi_indication_wda_loopback_configuration_output_loopback_state_get_printable (
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
indication_loopback_configuration_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Loopback Configuration\" (0x002f)\n",
                            line_prefix);

    {
        struct indication_loopback_configuration_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_loopback_configuration_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationWdaLoopbackConfigurationOutput *
qmi_indication_wda_loopback_configuration_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationWdaLoopbackConfigurationOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_WDA_LOOPBACK_CONFIGURATION);

    self = g_slice_new0 (QmiIndicationWdaLoopbackConfigurationOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WDA_LOOPBACK_CONFIGURATION_OUTPUT_TLV_REPLICATION_FACTOR, NULL, NULL)) == 0) {
                goto qmi_indication_wda_loopback_configuration_output_replication_factor_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_replication_factor), NULL))
                goto qmi_indication_wda_loopback_configuration_output_replication_factor_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Replication factor' TLV", offset);
            }

            self->arg_replication_factor_set = TRUE;

qmi_indication_wda_loopback_configuration_output_replication_factor_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_WDA_LOOPBACK_CONFIGURATION_OUTPUT_TLV_LOOPBACK_STATE, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Loopback state TLV: ");
                qmi_indication_wda_loopback_configuration_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_indication_wda_loopback_configuration_output_loopback_state_out;
                self->arg_loopback_state = (QmiWdaLoopBackState)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Loopback state' TLV", offset);
            }

            self->arg_loopback_state_set = TRUE;

qmi_indication_wda_loopback_configuration_output_loopback_state_out:
            if (!self->arg_loopback_state_set) {
                qmi_indication_wda_loopback_configuration_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDA Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_wda_get_supported_messages_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WDA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WDA_GET_SUPPORTED_MESSAGES);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWdaGetSupportedMessagesOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* List */
    gboolean arg_list_set;
    GArray *arg_list;
};

#define QMI_MESSAGE_WDA_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WDA_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST 0x10

gboolean
qmi_message_wda_get_supported_messages_output_get_result (
    QmiMessageWdaGetSupportedMessagesOutput *self,
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
qmi_message_wda_get_supported_messages_output_get_list (
    QmiMessageWdaGetSupportedMessagesOutput *self,
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
qmi_message_wda_get_supported_messages_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWdaGetSupportedMessagesOutput"),
                                          (GBoxedCopyFunc) qmi_message_wda_get_supported_messages_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wda_get_supported_messages_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWdaGetSupportedMessagesOutput *
qmi_message_wda_get_supported_messages_output_ref (QmiMessageWdaGetSupportedMessagesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wda_get_supported_messages_output_unref (QmiMessageWdaGetSupportedMessagesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_list, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageWdaGetSupportedMessagesOutput, self);
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_WDA_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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
qmi_message_wda_get_supported_messages_output_list_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST, NULL, NULL)) == 0)
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
        case QMI_MESSAGE_WDA_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST:
            tlv_type_str = "List";
            translated_value = qmi_message_wda_get_supported_messages_output_list_get_printable (
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

QmiMessageWdaGetSupportedMessagesOutput *
qmi_message_wda_get_supported_messages_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWdaGetSupportedMessagesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WDA_GET_SUPPORTED_MESSAGES);

    self = g_slice_new0 (QmiMessageWdaGetSupportedMessagesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wda_get_supported_messages_output_unref (self);
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
                qmi_message_wda_get_supported_messages_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST, NULL, NULL)) == 0) {
                goto qmi_message_wda_get_supported_messages_output_list_out;
            }
            {
                guint list_i;
                guint16 list_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(list_n_items), NULL))
                    goto qmi_message_wda_get_supported_messages_output_list_out;

                self->arg_list = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)list_n_items);

                for (list_i = 0; list_i < list_n_items; list_i++) {
                    guint8 list_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(list_aux), NULL))
                        goto qmi_message_wda_get_supported_messages_output_list_out;
                    g_array_insert_val (self->arg_list, list_i, list_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'List' TLV", offset);
            }

            self->arg_list_set = TRUE;

qmi_message_wda_get_supported_messages_output_list_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDA Set Data Format */


/* --- Input -- */

struct _QmiMessageWdaSetDataFormatInput {
    volatile gint ref_count;

    /* Uplink Data Aggregation Max Size */
    gboolean arg_uplink_data_aggregation_max_size_set;
    guint32 arg_uplink_data_aggregation_max_size;

    /* Uplink Data Aggregation Max Datagrams */
    gboolean arg_uplink_data_aggregation_max_datagrams_set;
    guint32 arg_uplink_data_aggregation_max_datagrams;

    /* Endpoint Info */
    gboolean arg_endpoint_info_set;
    guint32 arg_endpoint_info_endpoint_type;
    guint32 arg_endpoint_info_interface_number;

    /* Downlink Data Aggregation Max Size */
    gboolean arg_downlink_data_aggregation_max_size_set;
    guint32 arg_downlink_data_aggregation_max_size;

    /* Downlink Data Aggregation Max Datagrams */
    gboolean arg_downlink_data_aggregation_max_datagrams_set;
    guint32 arg_downlink_data_aggregation_max_datagrams;

    /* NDP Signature */
    gboolean arg_ndp_signature_set;
    guint32 arg_ndp_signature;

    /* Downlink Data Aggregation Protocol */
    gboolean arg_downlink_data_aggregation_protocol_set;
    guint32 arg_downlink_data_aggregation_protocol;

    /* Uplink Data Aggregation Protocol */
    gboolean arg_uplink_data_aggregation_protocol_set;
    guint32 arg_uplink_data_aggregation_protocol;

    /* Link Layer Protocol */
    gboolean arg_link_layer_protocol_set;
    guint32 arg_link_layer_protocol;

    /* QoS Format */
    gboolean arg_qos_format_set;
    guint8 arg_qos_format;
};

#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_SIZE 0x1C
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_DATAGRAMS 0x1B
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_ENDPOINT_INFO 0x17
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_SIZE 0x16
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_DATAGRAMS 0x15
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_NDP_SIGNATURE 0x14
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_DOWNLINK_DATA_AGGREGATION_PROTOCOL 0x13
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_UPLINK_DATA_AGGREGATION_PROTOCOL 0x12
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_LINK_LAYER_PROTOCOL 0x11
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_QOS_FORMAT 0x10

gboolean
qmi_message_wda_set_data_format_input_get_uplink_data_aggregation_max_size (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 *value_uplink_data_aggregation_max_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uplink_data_aggregation_max_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Uplink Data Aggregation Max Size' was not found in the message");
        return FALSE;
    }

    if (value_uplink_data_aggregation_max_size)
        *value_uplink_data_aggregation_max_size = self->arg_uplink_data_aggregation_max_size;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_set_uplink_data_aggregation_max_size (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 value_uplink_data_aggregation_max_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_uplink_data_aggregation_max_size = value_uplink_data_aggregation_max_size;
    self->arg_uplink_data_aggregation_max_size_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_get_uplink_data_aggregation_max_datagrams (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 *value_uplink_data_aggregation_max_datagrams,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uplink_data_aggregation_max_datagrams_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Uplink Data Aggregation Max Datagrams' was not found in the message");
        return FALSE;
    }

    if (value_uplink_data_aggregation_max_datagrams)
        *value_uplink_data_aggregation_max_datagrams = self->arg_uplink_data_aggregation_max_datagrams;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_set_uplink_data_aggregation_max_datagrams (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 value_uplink_data_aggregation_max_datagrams,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_uplink_data_aggregation_max_datagrams = value_uplink_data_aggregation_max_datagrams;
    self->arg_uplink_data_aggregation_max_datagrams_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_get_endpoint_info (
    QmiMessageWdaSetDataFormatInput *self,
    QmiDataEndpointType *value_endpoint_info_endpoint_type,
    guint32 *value_endpoint_info_interface_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_endpoint_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Endpoint Info' was not found in the message");
        return FALSE;
    }

    if (value_endpoint_info_endpoint_type)
        *value_endpoint_info_endpoint_type = (QmiDataEndpointType)(self->arg_endpoint_info_endpoint_type);
    if (value_endpoint_info_interface_number)
        *value_endpoint_info_interface_number = self->arg_endpoint_info_interface_number;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_set_endpoint_info (
    QmiMessageWdaSetDataFormatInput *self,
    QmiDataEndpointType value_endpoint_info_endpoint_type,
    guint32 value_endpoint_info_interface_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_endpoint_info_endpoint_type = (guint32)(value_endpoint_info_endpoint_type);
    self->arg_endpoint_info_interface_number = value_endpoint_info_interface_number;
    self->arg_endpoint_info_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_get_downlink_data_aggregation_max_size (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 *value_downlink_data_aggregation_max_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_downlink_data_aggregation_max_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Downlink Data Aggregation Max Size' was not found in the message");
        return FALSE;
    }

    if (value_downlink_data_aggregation_max_size)
        *value_downlink_data_aggregation_max_size = self->arg_downlink_data_aggregation_max_size;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_set_downlink_data_aggregation_max_size (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 value_downlink_data_aggregation_max_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_downlink_data_aggregation_max_size = value_downlink_data_aggregation_max_size;
    self->arg_downlink_data_aggregation_max_size_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_get_downlink_data_aggregation_max_datagrams (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 *value_downlink_data_aggregation_max_datagrams,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_downlink_data_aggregation_max_datagrams_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Downlink Data Aggregation Max Datagrams' was not found in the message");
        return FALSE;
    }

    if (value_downlink_data_aggregation_max_datagrams)
        *value_downlink_data_aggregation_max_datagrams = self->arg_downlink_data_aggregation_max_datagrams;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_set_downlink_data_aggregation_max_datagrams (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 value_downlink_data_aggregation_max_datagrams,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_downlink_data_aggregation_max_datagrams = value_downlink_data_aggregation_max_datagrams;
    self->arg_downlink_data_aggregation_max_datagrams_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_get_ndp_signature (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 *value_ndp_signature,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ndp_signature_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'NDP Signature' was not found in the message");
        return FALSE;
    }

    if (value_ndp_signature)
        *value_ndp_signature = self->arg_ndp_signature;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_set_ndp_signature (
    QmiMessageWdaSetDataFormatInput *self,
    guint32 value_ndp_signature,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ndp_signature = value_ndp_signature;
    self->arg_ndp_signature_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_get_downlink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaDataAggregationProtocol *value_downlink_data_aggregation_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_downlink_data_aggregation_protocol_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Downlink Data Aggregation Protocol' was not found in the message");
        return FALSE;
    }

    if (value_downlink_data_aggregation_protocol)
        *value_downlink_data_aggregation_protocol = (QmiWdaDataAggregationProtocol)(self->arg_downlink_data_aggregation_protocol);

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_set_downlink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaDataAggregationProtocol value_downlink_data_aggregation_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_downlink_data_aggregation_protocol = (guint32)(value_downlink_data_aggregation_protocol);
    self->arg_downlink_data_aggregation_protocol_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_get_uplink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaDataAggregationProtocol *value_uplink_data_aggregation_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uplink_data_aggregation_protocol_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Uplink Data Aggregation Protocol' was not found in the message");
        return FALSE;
    }

    if (value_uplink_data_aggregation_protocol)
        *value_uplink_data_aggregation_protocol = (QmiWdaDataAggregationProtocol)(self->arg_uplink_data_aggregation_protocol);

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_set_uplink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaDataAggregationProtocol value_uplink_data_aggregation_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_uplink_data_aggregation_protocol = (guint32)(value_uplink_data_aggregation_protocol);
    self->arg_uplink_data_aggregation_protocol_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_get_link_layer_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaLinkLayerProtocol *value_link_layer_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_link_layer_protocol_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Link Layer Protocol' was not found in the message");
        return FALSE;
    }

    if (value_link_layer_protocol)
        *value_link_layer_protocol = (QmiWdaLinkLayerProtocol)(self->arg_link_layer_protocol);

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_set_link_layer_protocol (
    QmiMessageWdaSetDataFormatInput *self,
    QmiWdaLinkLayerProtocol value_link_layer_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_link_layer_protocol = (guint32)(value_link_layer_protocol);
    self->arg_link_layer_protocol_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_get_qos_format (
    QmiMessageWdaSetDataFormatInput *self,
    gboolean *value_qos_format,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_qos_format_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'QoS Format' was not found in the message");
        return FALSE;
    }

    if (value_qos_format)
        *value_qos_format = (gboolean)(self->arg_qos_format);

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_input_set_qos_format (
    QmiMessageWdaSetDataFormatInput *self,
    gboolean value_qos_format,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_qos_format = (guint8)(value_qos_format);
    self->arg_qos_format_set = TRUE;

    return TRUE;
}

GType
qmi_message_wda_set_data_format_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWdaSetDataFormatInput"),
                                          (GBoxedCopyFunc) qmi_message_wda_set_data_format_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wda_set_data_format_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWdaSetDataFormatInput *
qmi_message_wda_set_data_format_input_ref (QmiMessageWdaSetDataFormatInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wda_set_data_format_input_unref (QmiMessageWdaSetDataFormatInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWdaSetDataFormatInput, self);
    }
}

QmiMessageWdaSetDataFormatInput *
qmi_message_wda_set_data_format_input_new (void)
{
    QmiMessageWdaSetDataFormatInput *self;

    self = g_slice_new0 (QmiMessageWdaSetDataFormatInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wda_set_data_format_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWdaSetDataFormatInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WDA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WDA_SET_DATA_FORMAT);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Uplink Data Aggregation Max Size' TLV */
    if (input->arg_uplink_data_aggregation_max_size_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_SIZE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Uplink Data Aggregation Max Size': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_uplink_data_aggregation_max_size, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Uplink Data Aggregation Max Size': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Uplink Data Aggregation Max Size': ");
            return NULL;
        }
    }

    /* Try to add the 'Uplink Data Aggregation Max Datagrams' TLV */
    if (input->arg_uplink_data_aggregation_max_datagrams_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_DATAGRAMS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Uplink Data Aggregation Max Datagrams': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_uplink_data_aggregation_max_datagrams, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Uplink Data Aggregation Max Datagrams': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Uplink Data Aggregation Max Datagrams': ");
            return NULL;
        }
    }

    /* Try to add the 'Endpoint Info' TLV */
    if (input->arg_endpoint_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_ENDPOINT_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Endpoint Info': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_endpoint_info_endpoint_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Endpoint Info': ");
                return NULL;
            }
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_endpoint_info_interface_number, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Endpoint Info': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Endpoint Info': ");
            return NULL;
        }
    }

    /* Try to add the 'Downlink Data Aggregation Max Size' TLV */
    if (input->arg_downlink_data_aggregation_max_size_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_SIZE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Downlink Data Aggregation Max Size': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_downlink_data_aggregation_max_size, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Downlink Data Aggregation Max Size': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Downlink Data Aggregation Max Size': ");
            return NULL;
        }
    }

    /* Try to add the 'Downlink Data Aggregation Max Datagrams' TLV */
    if (input->arg_downlink_data_aggregation_max_datagrams_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_DATAGRAMS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Downlink Data Aggregation Max Datagrams': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_downlink_data_aggregation_max_datagrams, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Downlink Data Aggregation Max Datagrams': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Downlink Data Aggregation Max Datagrams': ");
            return NULL;
        }
    }

    /* Try to add the 'NDP Signature' TLV */
    if (input->arg_ndp_signature_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_NDP_SIGNATURE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'NDP Signature': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_ndp_signature, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'NDP Signature': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'NDP Signature': ");
            return NULL;
        }
    }

    /* Try to add the 'Downlink Data Aggregation Protocol' TLV */
    if (input->arg_downlink_data_aggregation_protocol_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_DOWNLINK_DATA_AGGREGATION_PROTOCOL, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Downlink Data Aggregation Protocol': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_downlink_data_aggregation_protocol;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Downlink Data Aggregation Protocol': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Downlink Data Aggregation Protocol': ");
            return NULL;
        }
    }

    /* Try to add the 'Uplink Data Aggregation Protocol' TLV */
    if (input->arg_uplink_data_aggregation_protocol_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_UPLINK_DATA_AGGREGATION_PROTOCOL, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Uplink Data Aggregation Protocol': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_uplink_data_aggregation_protocol;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Uplink Data Aggregation Protocol': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Uplink Data Aggregation Protocol': ");
            return NULL;
        }
    }

    /* Try to add the 'Link Layer Protocol' TLV */
    if (input->arg_link_layer_protocol_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_LINK_LAYER_PROTOCOL, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Link Layer Protocol': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_link_layer_protocol;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Link Layer Protocol': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Link Layer Protocol': ");
            return NULL;
        }
    }

    /* Try to add the 'QoS Format' TLV */
    if (input->arg_qos_format_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_QOS_FORMAT, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'QoS Format': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_qos_format;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'QoS Format': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'QoS Format': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWdaSetDataFormatOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* QoS Format */
    gboolean arg_qos_format_set;
    guint8 arg_qos_format;

    /* Link Layer Protocol */
    gboolean arg_link_layer_protocol_set;
    guint32 arg_link_layer_protocol;

    /* Uplink Data Aggregation Protocol */
    gboolean arg_uplink_data_aggregation_protocol_set;
    guint32 arg_uplink_data_aggregation_protocol;

    /* Downlink Data Aggregation Protocol */
    gboolean arg_downlink_data_aggregation_protocol_set;
    guint32 arg_downlink_data_aggregation_protocol;

    /* NDP Signature */
    gboolean arg_ndp_signature_set;
    guint32 arg_ndp_signature;

    /* Downlink Data Aggregation Max Datagrams */
    gboolean arg_downlink_data_aggregation_max_datagrams_set;
    guint32 arg_downlink_data_aggregation_max_datagrams;

    /* Downlink Data Aggregation Max Size */
    gboolean arg_downlink_data_aggregation_max_size_set;
    guint32 arg_downlink_data_aggregation_max_size;

    /* Uplink Data Aggregation Max Datagrams */
    gboolean arg_uplink_data_aggregation_max_datagrams_set;
    guint32 arg_uplink_data_aggregation_max_datagrams;

    /* Uplink Data Aggregation Max Size */
    gboolean arg_uplink_data_aggregation_max_size_set;
    guint32 arg_uplink_data_aggregation_max_size;

    /* Download Minimum Padding */
    gboolean arg_download_minimum_padding_set;
    guint32 arg_download_minimum_padding;

    /* Flow Control */
    gboolean arg_flow_control_set;
    guint8 arg_flow_control;
};

#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_QOS_FORMAT 0x10
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_LINK_LAYER_PROTOCOL 0x11
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_PROTOCOL 0x12
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_PROTOCOL 0x13
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_NDP_SIGNATURE 0x14
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_DATAGRAMS 0x15
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_SIZE 0x16
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_DATAGRAMS 0x17
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_SIZE 0x18
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLOAD_MINIMUM_PADDING 0x1A
#define QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_FLOW_CONTROL 0x1B

gboolean
qmi_message_wda_set_data_format_output_get_result (
    QmiMessageWdaSetDataFormatOutput *self,
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
qmi_message_wda_set_data_format_output_get_qos_format (
    QmiMessageWdaSetDataFormatOutput *self,
    gboolean *value_qos_format,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_qos_format_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'QoS Format' was not found in the message");
        return FALSE;
    }

    if (value_qos_format)
        *value_qos_format = (gboolean)(self->arg_qos_format);

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_output_get_link_layer_protocol (
    QmiMessageWdaSetDataFormatOutput *self,
    QmiWdaLinkLayerProtocol *value_link_layer_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_link_layer_protocol_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Link Layer Protocol' was not found in the message");
        return FALSE;
    }

    if (value_link_layer_protocol)
        *value_link_layer_protocol = (QmiWdaLinkLayerProtocol)(self->arg_link_layer_protocol);

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_output_get_uplink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatOutput *self,
    QmiWdaDataAggregationProtocol *value_uplink_data_aggregation_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uplink_data_aggregation_protocol_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Uplink Data Aggregation Protocol' was not found in the message");
        return FALSE;
    }

    if (value_uplink_data_aggregation_protocol)
        *value_uplink_data_aggregation_protocol = (QmiWdaDataAggregationProtocol)(self->arg_uplink_data_aggregation_protocol);

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_output_get_downlink_data_aggregation_protocol (
    QmiMessageWdaSetDataFormatOutput *self,
    QmiWdaDataAggregationProtocol *value_downlink_data_aggregation_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_downlink_data_aggregation_protocol_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Downlink Data Aggregation Protocol' was not found in the message");
        return FALSE;
    }

    if (value_downlink_data_aggregation_protocol)
        *value_downlink_data_aggregation_protocol = (QmiWdaDataAggregationProtocol)(self->arg_downlink_data_aggregation_protocol);

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_output_get_ndp_signature (
    QmiMessageWdaSetDataFormatOutput *self,
    guint32 *value_ndp_signature,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ndp_signature_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'NDP Signature' was not found in the message");
        return FALSE;
    }

    if (value_ndp_signature)
        *value_ndp_signature = self->arg_ndp_signature;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_output_get_downlink_data_aggregation_max_datagrams (
    QmiMessageWdaSetDataFormatOutput *self,
    guint32 *value_downlink_data_aggregation_max_datagrams,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_downlink_data_aggregation_max_datagrams_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Downlink Data Aggregation Max Datagrams' was not found in the message");
        return FALSE;
    }

    if (value_downlink_data_aggregation_max_datagrams)
        *value_downlink_data_aggregation_max_datagrams = self->arg_downlink_data_aggregation_max_datagrams;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_output_get_downlink_data_aggregation_max_size (
    QmiMessageWdaSetDataFormatOutput *self,
    guint32 *value_downlink_data_aggregation_max_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_downlink_data_aggregation_max_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Downlink Data Aggregation Max Size' was not found in the message");
        return FALSE;
    }

    if (value_downlink_data_aggregation_max_size)
        *value_downlink_data_aggregation_max_size = self->arg_downlink_data_aggregation_max_size;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_output_get_uplink_data_aggregation_max_datagrams (
    QmiMessageWdaSetDataFormatOutput *self,
    guint32 *value_uplink_data_aggregation_max_datagrams,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uplink_data_aggregation_max_datagrams_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Uplink Data Aggregation Max Datagrams' was not found in the message");
        return FALSE;
    }

    if (value_uplink_data_aggregation_max_datagrams)
        *value_uplink_data_aggregation_max_datagrams = self->arg_uplink_data_aggregation_max_datagrams;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_output_get_uplink_data_aggregation_max_size (
    QmiMessageWdaSetDataFormatOutput *self,
    guint32 *value_uplink_data_aggregation_max_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uplink_data_aggregation_max_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Uplink Data Aggregation Max Size' was not found in the message");
        return FALSE;
    }

    if (value_uplink_data_aggregation_max_size)
        *value_uplink_data_aggregation_max_size = self->arg_uplink_data_aggregation_max_size;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_output_get_download_minimum_padding (
    QmiMessageWdaSetDataFormatOutput *self,
    guint32 *value_download_minimum_padding,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_download_minimum_padding_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Download Minimum Padding' was not found in the message");
        return FALSE;
    }

    if (value_download_minimum_padding)
        *value_download_minimum_padding = self->arg_download_minimum_padding;

    return TRUE;
}

gboolean
qmi_message_wda_set_data_format_output_get_flow_control (
    QmiMessageWdaSetDataFormatOutput *self,
    guint8 *value_flow_control,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_flow_control_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Flow Control' was not found in the message");
        return FALSE;
    }

    if (value_flow_control)
        *value_flow_control = self->arg_flow_control;

    return TRUE;
}

GType
qmi_message_wda_set_data_format_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWdaSetDataFormatOutput"),
                                          (GBoxedCopyFunc) qmi_message_wda_set_data_format_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wda_set_data_format_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWdaSetDataFormatOutput *
qmi_message_wda_set_data_format_output_ref (QmiMessageWdaSetDataFormatOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wda_set_data_format_output_unref (QmiMessageWdaSetDataFormatOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWdaSetDataFormatOutput, self);
    }
}

static gchar *
qmi_message_wda_set_data_format_input_uplink_data_aggregation_max_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_SIZE, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_input_uplink_data_aggregation_max_datagrams_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_DATAGRAMS, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_input_endpoint_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_ENDPOINT_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " endpoint_type = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_DATA_ENDPOINT_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_data_endpoint_type_get_string ((QmiDataEndpointType)tmp));
#elif defined  __QMI_DATA_ENDPOINT_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_data_endpoint_type_build_string_from_mask ((QmiDataEndpointType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiDataEndpointType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " interface_number = '");

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
qmi_message_wda_set_data_format_input_downlink_data_aggregation_max_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_SIZE, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_input_downlink_data_aggregation_max_datagrams_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_DATAGRAMS, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_input_ndp_signature_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_NDP_SIGNATURE, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_input_downlink_data_aggregation_protocol_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_DOWNLINK_DATA_AGGREGATION_PROTOCOL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wda_data_aggregation_protocol_get_string ((QmiWdaDataAggregationProtocol)tmp));
#elif defined  __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wda_data_aggregation_protocol_build_string_from_mask ((QmiWdaDataAggregationProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWdaDataAggregationProtocol
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
qmi_message_wda_set_data_format_input_uplink_data_aggregation_protocol_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_UPLINK_DATA_AGGREGATION_PROTOCOL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wda_data_aggregation_protocol_get_string ((QmiWdaDataAggregationProtocol)tmp));
#elif defined  __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wda_data_aggregation_protocol_build_string_from_mask ((QmiWdaDataAggregationProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWdaDataAggregationProtocol
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
qmi_message_wda_set_data_format_input_link_layer_protocol_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_LINK_LAYER_PROTOCOL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WDA_LINK_LAYER_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wda_link_layer_protocol_get_string ((QmiWdaLinkLayerProtocol)tmp));
#elif defined  __QMI_WDA_LINK_LAYER_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wda_link_layer_protocol_build_string_from_mask ((QmiWdaLinkLayerProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWdaLinkLayerProtocol
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
qmi_message_wda_set_data_format_input_qos_format_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_QOS_FORMAT, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_output_qos_format_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_QOS_FORMAT, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_output_link_layer_protocol_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_LINK_LAYER_PROTOCOL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WDA_LINK_LAYER_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wda_link_layer_protocol_get_string ((QmiWdaLinkLayerProtocol)tmp));
#elif defined  __QMI_WDA_LINK_LAYER_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wda_link_layer_protocol_build_string_from_mask ((QmiWdaLinkLayerProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWdaLinkLayerProtocol
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
qmi_message_wda_set_data_format_output_uplink_data_aggregation_protocol_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_PROTOCOL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wda_data_aggregation_protocol_get_string ((QmiWdaDataAggregationProtocol)tmp));
#elif defined  __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wda_data_aggregation_protocol_build_string_from_mask ((QmiWdaDataAggregationProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWdaDataAggregationProtocol
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
qmi_message_wda_set_data_format_output_downlink_data_aggregation_protocol_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_PROTOCOL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wda_data_aggregation_protocol_get_string ((QmiWdaDataAggregationProtocol)tmp));
#elif defined  __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wda_data_aggregation_protocol_build_string_from_mask ((QmiWdaDataAggregationProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWdaDataAggregationProtocol
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
qmi_message_wda_set_data_format_output_ndp_signature_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_NDP_SIGNATURE, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_output_downlink_data_aggregation_max_datagrams_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_DATAGRAMS, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_output_downlink_data_aggregation_max_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_SIZE, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_output_uplink_data_aggregation_max_datagrams_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_DATAGRAMS, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_output_uplink_data_aggregation_max_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_SIZE, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_output_download_minimum_padding_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLOAD_MINIMUM_PADDING, NULL, NULL)) == 0)
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
qmi_message_wda_set_data_format_output_flow_control_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_FLOW_CONTROL, NULL, NULL)) == 0)
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

struct message_set_data_format_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_data_format_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_data_format_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_SIZE:
            tlv_type_str = "Uplink Data Aggregation Max Size";
            translated_value = qmi_message_wda_set_data_format_input_uplink_data_aggregation_max_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_DATAGRAMS:
            tlv_type_str = "Uplink Data Aggregation Max Datagrams";
            translated_value = qmi_message_wda_set_data_format_input_uplink_data_aggregation_max_datagrams_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_ENDPOINT_INFO:
            tlv_type_str = "Endpoint Info";
            translated_value = qmi_message_wda_set_data_format_input_endpoint_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_SIZE:
            tlv_type_str = "Downlink Data Aggregation Max Size";
            translated_value = qmi_message_wda_set_data_format_input_downlink_data_aggregation_max_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_DATAGRAMS:
            tlv_type_str = "Downlink Data Aggregation Max Datagrams";
            translated_value = qmi_message_wda_set_data_format_input_downlink_data_aggregation_max_datagrams_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_NDP_SIGNATURE:
            tlv_type_str = "NDP Signature";
            translated_value = qmi_message_wda_set_data_format_input_ndp_signature_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_DOWNLINK_DATA_AGGREGATION_PROTOCOL:
            tlv_type_str = "Downlink Data Aggregation Protocol";
            translated_value = qmi_message_wda_set_data_format_input_downlink_data_aggregation_protocol_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_UPLINK_DATA_AGGREGATION_PROTOCOL:
            tlv_type_str = "Uplink Data Aggregation Protocol";
            translated_value = qmi_message_wda_set_data_format_input_uplink_data_aggregation_protocol_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_LINK_LAYER_PROTOCOL:
            tlv_type_str = "Link Layer Protocol";
            translated_value = qmi_message_wda_set_data_format_input_link_layer_protocol_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_INPUT_TLV_QOS_FORMAT:
            tlv_type_str = "QoS Format";
            translated_value = qmi_message_wda_set_data_format_input_qos_format_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_QOS_FORMAT:
            tlv_type_str = "QoS Format";
            translated_value = qmi_message_wda_set_data_format_output_qos_format_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_LINK_LAYER_PROTOCOL:
            tlv_type_str = "Link Layer Protocol";
            translated_value = qmi_message_wda_set_data_format_output_link_layer_protocol_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_PROTOCOL:
            tlv_type_str = "Uplink Data Aggregation Protocol";
            translated_value = qmi_message_wda_set_data_format_output_uplink_data_aggregation_protocol_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_PROTOCOL:
            tlv_type_str = "Downlink Data Aggregation Protocol";
            translated_value = qmi_message_wda_set_data_format_output_downlink_data_aggregation_protocol_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_NDP_SIGNATURE:
            tlv_type_str = "NDP Signature";
            translated_value = qmi_message_wda_set_data_format_output_ndp_signature_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_DATAGRAMS:
            tlv_type_str = "Downlink Data Aggregation Max Datagrams";
            translated_value = qmi_message_wda_set_data_format_output_downlink_data_aggregation_max_datagrams_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_SIZE:
            tlv_type_str = "Downlink Data Aggregation Max Size";
            translated_value = qmi_message_wda_set_data_format_output_downlink_data_aggregation_max_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_DATAGRAMS:
            tlv_type_str = "Uplink Data Aggregation Max Datagrams";
            translated_value = qmi_message_wda_set_data_format_output_uplink_data_aggregation_max_datagrams_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_SIZE:
            tlv_type_str = "Uplink Data Aggregation Max Size";
            translated_value = qmi_message_wda_set_data_format_output_uplink_data_aggregation_max_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLOAD_MINIMUM_PADDING:
            tlv_type_str = "Download Minimum Padding";
            translated_value = qmi_message_wda_set_data_format_output_download_minimum_padding_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_FLOW_CONTROL:
            tlv_type_str = "Flow Control";
            translated_value = qmi_message_wda_set_data_format_output_flow_control_get_printable (
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
message_set_data_format_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Data Format\" (0x0020)\n",
                            line_prefix);

    {
        struct message_set_data_format_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_data_format_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWdaSetDataFormatOutput *
qmi_message_wda_set_data_format_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWdaSetDataFormatOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WDA_SET_DATA_FORMAT);

    self = g_slice_new0 (QmiMessageWdaSetDataFormatOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wda_set_data_format_output_unref (self);
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
                qmi_message_wda_set_data_format_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_QOS_FORMAT, NULL, NULL)) == 0) {
                goto qmi_message_wda_set_data_format_output_qos_format_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_wda_set_data_format_output_qos_format_out;
                self->arg_qos_format = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'QoS Format' TLV", offset);
            }

            self->arg_qos_format_set = TRUE;

qmi_message_wda_set_data_format_output_qos_format_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_LINK_LAYER_PROTOCOL, NULL, NULL)) == 0) {
                goto qmi_message_wda_set_data_format_output_link_layer_protocol_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_wda_set_data_format_output_link_layer_protocol_out;
                self->arg_link_layer_protocol = (QmiWdaLinkLayerProtocol)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Link Layer Protocol' TLV", offset);
            }

            self->arg_link_layer_protocol_set = TRUE;

qmi_message_wda_set_data_format_output_link_layer_protocol_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_PROTOCOL, NULL, NULL)) == 0) {
                goto qmi_message_wda_set_data_format_output_uplink_data_aggregation_protocol_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_wda_set_data_format_output_uplink_data_aggregation_protocol_out;
                self->arg_uplink_data_aggregation_protocol = (QmiWdaDataAggregationProtocol)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Uplink Data Aggregation Protocol' TLV", offset);
            }

            self->arg_uplink_data_aggregation_protocol_set = TRUE;

qmi_message_wda_set_data_format_output_uplink_data_aggregation_protocol_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_PROTOCOL, NULL, NULL)) == 0) {
                goto qmi_message_wda_set_data_format_output_downlink_data_aggregation_protocol_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_wda_set_data_format_output_downlink_data_aggregation_protocol_out;
                self->arg_downlink_data_aggregation_protocol = (QmiWdaDataAggregationProtocol)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Downlink Data Aggregation Protocol' TLV", offset);
            }

            self->arg_downlink_data_aggregation_protocol_set = TRUE;

qmi_message_wda_set_data_format_output_downlink_data_aggregation_protocol_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_NDP_SIGNATURE, NULL, NULL)) == 0) {
                goto qmi_message_wda_set_data_format_output_ndp_signature_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_ndp_signature), NULL))
                goto qmi_message_wda_set_data_format_output_ndp_signature_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'NDP Signature' TLV", offset);
            }

            self->arg_ndp_signature_set = TRUE;

qmi_message_wda_set_data_format_output_ndp_signature_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_DATAGRAMS, NULL, NULL)) == 0) {
                goto qmi_message_wda_set_data_format_output_downlink_data_aggregation_max_datagrams_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_downlink_data_aggregation_max_datagrams), NULL))
                goto qmi_message_wda_set_data_format_output_downlink_data_aggregation_max_datagrams_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Downlink Data Aggregation Max Datagrams' TLV", offset);
            }

            self->arg_downlink_data_aggregation_max_datagrams_set = TRUE;

qmi_message_wda_set_data_format_output_downlink_data_aggregation_max_datagrams_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_SIZE, NULL, NULL)) == 0) {
                goto qmi_message_wda_set_data_format_output_downlink_data_aggregation_max_size_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_downlink_data_aggregation_max_size), NULL))
                goto qmi_message_wda_set_data_format_output_downlink_data_aggregation_max_size_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Downlink Data Aggregation Max Size' TLV", offset);
            }

            self->arg_downlink_data_aggregation_max_size_set = TRUE;

qmi_message_wda_set_data_format_output_downlink_data_aggregation_max_size_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_DATAGRAMS, NULL, NULL)) == 0) {
                goto qmi_message_wda_set_data_format_output_uplink_data_aggregation_max_datagrams_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_uplink_data_aggregation_max_datagrams), NULL))
                goto qmi_message_wda_set_data_format_output_uplink_data_aggregation_max_datagrams_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Uplink Data Aggregation Max Datagrams' TLV", offset);
            }

            self->arg_uplink_data_aggregation_max_datagrams_set = TRUE;

qmi_message_wda_set_data_format_output_uplink_data_aggregation_max_datagrams_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_SIZE, NULL, NULL)) == 0) {
                goto qmi_message_wda_set_data_format_output_uplink_data_aggregation_max_size_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_uplink_data_aggregation_max_size), NULL))
                goto qmi_message_wda_set_data_format_output_uplink_data_aggregation_max_size_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Uplink Data Aggregation Max Size' TLV", offset);
            }

            self->arg_uplink_data_aggregation_max_size_set = TRUE;

qmi_message_wda_set_data_format_output_uplink_data_aggregation_max_size_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_DOWNLOAD_MINIMUM_PADDING, NULL, NULL)) == 0) {
                goto qmi_message_wda_set_data_format_output_download_minimum_padding_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_download_minimum_padding), NULL))
                goto qmi_message_wda_set_data_format_output_download_minimum_padding_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Download Minimum Padding' TLV", offset);
            }

            self->arg_download_minimum_padding_set = TRUE;

qmi_message_wda_set_data_format_output_download_minimum_padding_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_SET_DATA_FORMAT_OUTPUT_TLV_FLOW_CONTROL, NULL, NULL)) == 0) {
                goto qmi_message_wda_set_data_format_output_flow_control_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_flow_control), NULL))
                goto qmi_message_wda_set_data_format_output_flow_control_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Flow Control' TLV", offset);
            }

            self->arg_flow_control_set = TRUE;

qmi_message_wda_set_data_format_output_flow_control_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDA Get Data Format */


/* --- Input -- */

struct _QmiMessageWdaGetDataFormatInput {
    volatile gint ref_count;

    /* Endpoint Info */
    gboolean arg_endpoint_info_set;
    guint32 arg_endpoint_info_endpoint_type;
    guint32 arg_endpoint_info_interface_number;
};

#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_INPUT_TLV_ENDPOINT_INFO 0x10

gboolean
qmi_message_wda_get_data_format_input_get_endpoint_info (
    QmiMessageWdaGetDataFormatInput *self,
    QmiDataEndpointType *value_endpoint_info_endpoint_type,
    guint32 *value_endpoint_info_interface_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_endpoint_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Endpoint Info' was not found in the message");
        return FALSE;
    }

    if (value_endpoint_info_endpoint_type)
        *value_endpoint_info_endpoint_type = (QmiDataEndpointType)(self->arg_endpoint_info_endpoint_type);
    if (value_endpoint_info_interface_number)
        *value_endpoint_info_interface_number = self->arg_endpoint_info_interface_number;

    return TRUE;
}

gboolean
qmi_message_wda_get_data_format_input_set_endpoint_info (
    QmiMessageWdaGetDataFormatInput *self,
    QmiDataEndpointType value_endpoint_info_endpoint_type,
    guint32 value_endpoint_info_interface_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_endpoint_info_endpoint_type = (guint32)(value_endpoint_info_endpoint_type);
    self->arg_endpoint_info_interface_number = value_endpoint_info_interface_number;
    self->arg_endpoint_info_set = TRUE;

    return TRUE;
}

GType
qmi_message_wda_get_data_format_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWdaGetDataFormatInput"),
                                          (GBoxedCopyFunc) qmi_message_wda_get_data_format_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wda_get_data_format_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWdaGetDataFormatInput *
qmi_message_wda_get_data_format_input_ref (QmiMessageWdaGetDataFormatInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wda_get_data_format_input_unref (QmiMessageWdaGetDataFormatInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWdaGetDataFormatInput, self);
    }
}

QmiMessageWdaGetDataFormatInput *
qmi_message_wda_get_data_format_input_new (void)
{
    QmiMessageWdaGetDataFormatInput *self;

    self = g_slice_new0 (QmiMessageWdaGetDataFormatInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wda_get_data_format_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWdaGetDataFormatInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WDA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WDA_GET_DATA_FORMAT);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Endpoint Info' TLV */
    if (input->arg_endpoint_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_GET_DATA_FORMAT_INPUT_TLV_ENDPOINT_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Endpoint Info': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_endpoint_info_endpoint_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Endpoint Info': ");
                return NULL;
            }
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_endpoint_info_interface_number, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Endpoint Info': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Endpoint Info': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWdaGetDataFormatOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* QoS Format */
    gboolean arg_qos_format_set;
    guint8 arg_qos_format;

    /* Link Layer Protocol */
    gboolean arg_link_layer_protocol_set;
    guint32 arg_link_layer_protocol;

    /* Uplink Data Aggregation Protocol */
    gboolean arg_uplink_data_aggregation_protocol_set;
    guint32 arg_uplink_data_aggregation_protocol;

    /* Downlink Data Aggregation Protocol */
    gboolean arg_downlink_data_aggregation_protocol_set;
    guint32 arg_downlink_data_aggregation_protocol;

    /* NDP Signature */
    gboolean arg_ndp_signature_set;
    guint32 arg_ndp_signature;

    /* Downlink Data Aggregation Max Datagrams */
    gboolean arg_downlink_data_aggregation_max_datagrams_set;
    guint32 arg_downlink_data_aggregation_max_datagrams;

    /* Downlink Data Aggregation Max Size */
    gboolean arg_downlink_data_aggregation_max_size_set;
    guint32 arg_downlink_data_aggregation_max_size;

    /* Uplink Data Aggregation Max Datagrams */
    gboolean arg_uplink_data_aggregation_max_datagrams_set;
    guint32 arg_uplink_data_aggregation_max_datagrams;

    /* Uplink Data Aggregation Max Size */
    gboolean arg_uplink_data_aggregation_max_size_set;
    guint32 arg_uplink_data_aggregation_max_size;

    /* Download Minimum Padding */
    gboolean arg_download_minimum_padding_set;
    guint32 arg_download_minimum_padding;

    /* Flow Control */
    gboolean arg_flow_control_set;
    guint8 arg_flow_control;
};

#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_QOS_FORMAT 0x10
#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_LINK_LAYER_PROTOCOL 0x11
#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_PROTOCOL 0x12
#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_PROTOCOL 0x13
#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_NDP_SIGNATURE 0x14
#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_DATAGRAMS 0x15
#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_SIZE 0x16
#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_DATAGRAMS 0x17
#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_SIZE 0x18
#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLOAD_MINIMUM_PADDING 0x1A
#define QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_FLOW_CONTROL 0x1B

gboolean
qmi_message_wda_get_data_format_output_get_result (
    QmiMessageWdaGetDataFormatOutput *self,
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
qmi_message_wda_get_data_format_output_get_qos_format (
    QmiMessageWdaGetDataFormatOutput *self,
    gboolean *value_qos_format,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_qos_format_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'QoS Format' was not found in the message");
        return FALSE;
    }

    if (value_qos_format)
        *value_qos_format = (gboolean)(self->arg_qos_format);

    return TRUE;
}

gboolean
qmi_message_wda_get_data_format_output_get_link_layer_protocol (
    QmiMessageWdaGetDataFormatOutput *self,
    QmiWdaLinkLayerProtocol *value_link_layer_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_link_layer_protocol_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Link Layer Protocol' was not found in the message");
        return FALSE;
    }

    if (value_link_layer_protocol)
        *value_link_layer_protocol = (QmiWdaLinkLayerProtocol)(self->arg_link_layer_protocol);

    return TRUE;
}

gboolean
qmi_message_wda_get_data_format_output_get_uplink_data_aggregation_protocol (
    QmiMessageWdaGetDataFormatOutput *self,
    QmiWdaDataAggregationProtocol *value_uplink_data_aggregation_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uplink_data_aggregation_protocol_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Uplink Data Aggregation Protocol' was not found in the message");
        return FALSE;
    }

    if (value_uplink_data_aggregation_protocol)
        *value_uplink_data_aggregation_protocol = (QmiWdaDataAggregationProtocol)(self->arg_uplink_data_aggregation_protocol);

    return TRUE;
}

gboolean
qmi_message_wda_get_data_format_output_get_downlink_data_aggregation_protocol (
    QmiMessageWdaGetDataFormatOutput *self,
    QmiWdaDataAggregationProtocol *value_downlink_data_aggregation_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_downlink_data_aggregation_protocol_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Downlink Data Aggregation Protocol' was not found in the message");
        return FALSE;
    }

    if (value_downlink_data_aggregation_protocol)
        *value_downlink_data_aggregation_protocol = (QmiWdaDataAggregationProtocol)(self->arg_downlink_data_aggregation_protocol);

    return TRUE;
}

gboolean
qmi_message_wda_get_data_format_output_get_ndp_signature (
    QmiMessageWdaGetDataFormatOutput *self,
    guint32 *value_ndp_signature,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ndp_signature_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'NDP Signature' was not found in the message");
        return FALSE;
    }

    if (value_ndp_signature)
        *value_ndp_signature = self->arg_ndp_signature;

    return TRUE;
}

gboolean
qmi_message_wda_get_data_format_output_get_downlink_data_aggregation_max_datagrams (
    QmiMessageWdaGetDataFormatOutput *self,
    guint32 *value_downlink_data_aggregation_max_datagrams,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_downlink_data_aggregation_max_datagrams_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Downlink Data Aggregation Max Datagrams' was not found in the message");
        return FALSE;
    }

    if (value_downlink_data_aggregation_max_datagrams)
        *value_downlink_data_aggregation_max_datagrams = self->arg_downlink_data_aggregation_max_datagrams;

    return TRUE;
}

gboolean
qmi_message_wda_get_data_format_output_get_downlink_data_aggregation_max_size (
    QmiMessageWdaGetDataFormatOutput *self,
    guint32 *value_downlink_data_aggregation_max_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_downlink_data_aggregation_max_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Downlink Data Aggregation Max Size' was not found in the message");
        return FALSE;
    }

    if (value_downlink_data_aggregation_max_size)
        *value_downlink_data_aggregation_max_size = self->arg_downlink_data_aggregation_max_size;

    return TRUE;
}

gboolean
qmi_message_wda_get_data_format_output_get_uplink_data_aggregation_max_datagrams (
    QmiMessageWdaGetDataFormatOutput *self,
    guint32 *value_uplink_data_aggregation_max_datagrams,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uplink_data_aggregation_max_datagrams_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Uplink Data Aggregation Max Datagrams' was not found in the message");
        return FALSE;
    }

    if (value_uplink_data_aggregation_max_datagrams)
        *value_uplink_data_aggregation_max_datagrams = self->arg_uplink_data_aggregation_max_datagrams;

    return TRUE;
}

gboolean
qmi_message_wda_get_data_format_output_get_uplink_data_aggregation_max_size (
    QmiMessageWdaGetDataFormatOutput *self,
    guint32 *value_uplink_data_aggregation_max_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uplink_data_aggregation_max_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Uplink Data Aggregation Max Size' was not found in the message");
        return FALSE;
    }

    if (value_uplink_data_aggregation_max_size)
        *value_uplink_data_aggregation_max_size = self->arg_uplink_data_aggregation_max_size;

    return TRUE;
}

gboolean
qmi_message_wda_get_data_format_output_get_download_minimum_padding (
    QmiMessageWdaGetDataFormatOutput *self,
    guint32 *value_download_minimum_padding,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_download_minimum_padding_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Download Minimum Padding' was not found in the message");
        return FALSE;
    }

    if (value_download_minimum_padding)
        *value_download_minimum_padding = self->arg_download_minimum_padding;

    return TRUE;
}

gboolean
qmi_message_wda_get_data_format_output_get_flow_control (
    QmiMessageWdaGetDataFormatOutput *self,
    guint8 *value_flow_control,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_flow_control_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Flow Control' was not found in the message");
        return FALSE;
    }

    if (value_flow_control)
        *value_flow_control = self->arg_flow_control;

    return TRUE;
}

GType
qmi_message_wda_get_data_format_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWdaGetDataFormatOutput"),
                                          (GBoxedCopyFunc) qmi_message_wda_get_data_format_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wda_get_data_format_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWdaGetDataFormatOutput *
qmi_message_wda_get_data_format_output_ref (QmiMessageWdaGetDataFormatOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wda_get_data_format_output_unref (QmiMessageWdaGetDataFormatOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWdaGetDataFormatOutput, self);
    }
}

static gchar *
qmi_message_wda_get_data_format_input_endpoint_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_INPUT_TLV_ENDPOINT_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " endpoint_type = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_DATA_ENDPOINT_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_data_endpoint_type_get_string ((QmiDataEndpointType)tmp));
#elif defined  __QMI_DATA_ENDPOINT_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_data_endpoint_type_build_string_from_mask ((QmiDataEndpointType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiDataEndpointType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " interface_number = '");

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
qmi_message_wda_get_data_format_output_qos_format_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_QOS_FORMAT, NULL, NULL)) == 0)
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
qmi_message_wda_get_data_format_output_link_layer_protocol_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_LINK_LAYER_PROTOCOL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WDA_LINK_LAYER_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wda_link_layer_protocol_get_string ((QmiWdaLinkLayerProtocol)tmp));
#elif defined  __QMI_WDA_LINK_LAYER_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wda_link_layer_protocol_build_string_from_mask ((QmiWdaLinkLayerProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWdaLinkLayerProtocol
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
qmi_message_wda_get_data_format_output_uplink_data_aggregation_protocol_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_PROTOCOL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wda_data_aggregation_protocol_get_string ((QmiWdaDataAggregationProtocol)tmp));
#elif defined  __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wda_data_aggregation_protocol_build_string_from_mask ((QmiWdaDataAggregationProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWdaDataAggregationProtocol
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
qmi_message_wda_get_data_format_output_downlink_data_aggregation_protocol_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_PROTOCOL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wda_data_aggregation_protocol_get_string ((QmiWdaDataAggregationProtocol)tmp));
#elif defined  __QMI_WDA_DATA_AGGREGATION_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wda_data_aggregation_protocol_build_string_from_mask ((QmiWdaDataAggregationProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWdaDataAggregationProtocol
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
qmi_message_wda_get_data_format_output_ndp_signature_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_NDP_SIGNATURE, NULL, NULL)) == 0)
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
qmi_message_wda_get_data_format_output_downlink_data_aggregation_max_datagrams_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_DATAGRAMS, NULL, NULL)) == 0)
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
qmi_message_wda_get_data_format_output_downlink_data_aggregation_max_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_SIZE, NULL, NULL)) == 0)
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
qmi_message_wda_get_data_format_output_uplink_data_aggregation_max_datagrams_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_DATAGRAMS, NULL, NULL)) == 0)
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
qmi_message_wda_get_data_format_output_uplink_data_aggregation_max_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_SIZE, NULL, NULL)) == 0)
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
qmi_message_wda_get_data_format_output_download_minimum_padding_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLOAD_MINIMUM_PADDING, NULL, NULL)) == 0)
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
qmi_message_wda_get_data_format_output_flow_control_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_FLOW_CONTROL, NULL, NULL)) == 0)
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

struct message_get_data_format_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_data_format_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_data_format_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_INPUT_TLV_ENDPOINT_INFO:
            tlv_type_str = "Endpoint Info";
            translated_value = qmi_message_wda_get_data_format_input_endpoint_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_QOS_FORMAT:
            tlv_type_str = "QoS Format";
            translated_value = qmi_message_wda_get_data_format_output_qos_format_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_LINK_LAYER_PROTOCOL:
            tlv_type_str = "Link Layer Protocol";
            translated_value = qmi_message_wda_get_data_format_output_link_layer_protocol_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_PROTOCOL:
            tlv_type_str = "Uplink Data Aggregation Protocol";
            translated_value = qmi_message_wda_get_data_format_output_uplink_data_aggregation_protocol_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_PROTOCOL:
            tlv_type_str = "Downlink Data Aggregation Protocol";
            translated_value = qmi_message_wda_get_data_format_output_downlink_data_aggregation_protocol_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_NDP_SIGNATURE:
            tlv_type_str = "NDP Signature";
            translated_value = qmi_message_wda_get_data_format_output_ndp_signature_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_DATAGRAMS:
            tlv_type_str = "Downlink Data Aggregation Max Datagrams";
            translated_value = qmi_message_wda_get_data_format_output_downlink_data_aggregation_max_datagrams_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_SIZE:
            tlv_type_str = "Downlink Data Aggregation Max Size";
            translated_value = qmi_message_wda_get_data_format_output_downlink_data_aggregation_max_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_DATAGRAMS:
            tlv_type_str = "Uplink Data Aggregation Max Datagrams";
            translated_value = qmi_message_wda_get_data_format_output_uplink_data_aggregation_max_datagrams_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_SIZE:
            tlv_type_str = "Uplink Data Aggregation Max Size";
            translated_value = qmi_message_wda_get_data_format_output_uplink_data_aggregation_max_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLOAD_MINIMUM_PADDING:
            tlv_type_str = "Download Minimum Padding";
            translated_value = qmi_message_wda_get_data_format_output_download_minimum_padding_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_FLOW_CONTROL:
            tlv_type_str = "Flow Control";
            translated_value = qmi_message_wda_get_data_format_output_flow_control_get_printable (
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
message_get_data_format_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Data Format\" (0x0021)\n",
                            line_prefix);

    {
        struct message_get_data_format_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_data_format_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWdaGetDataFormatOutput *
qmi_message_wda_get_data_format_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWdaGetDataFormatOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WDA_GET_DATA_FORMAT);

    self = g_slice_new0 (QmiMessageWdaGetDataFormatOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wda_get_data_format_output_unref (self);
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
                qmi_message_wda_get_data_format_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_QOS_FORMAT, NULL, NULL)) == 0) {
                goto qmi_message_wda_get_data_format_output_qos_format_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_wda_get_data_format_output_qos_format_out;
                self->arg_qos_format = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'QoS Format' TLV", offset);
            }

            self->arg_qos_format_set = TRUE;

qmi_message_wda_get_data_format_output_qos_format_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_LINK_LAYER_PROTOCOL, NULL, NULL)) == 0) {
                goto qmi_message_wda_get_data_format_output_link_layer_protocol_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_wda_get_data_format_output_link_layer_protocol_out;
                self->arg_link_layer_protocol = (QmiWdaLinkLayerProtocol)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Link Layer Protocol' TLV", offset);
            }

            self->arg_link_layer_protocol_set = TRUE;

qmi_message_wda_get_data_format_output_link_layer_protocol_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_PROTOCOL, NULL, NULL)) == 0) {
                goto qmi_message_wda_get_data_format_output_uplink_data_aggregation_protocol_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_wda_get_data_format_output_uplink_data_aggregation_protocol_out;
                self->arg_uplink_data_aggregation_protocol = (QmiWdaDataAggregationProtocol)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Uplink Data Aggregation Protocol' TLV", offset);
            }

            self->arg_uplink_data_aggregation_protocol_set = TRUE;

qmi_message_wda_get_data_format_output_uplink_data_aggregation_protocol_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_PROTOCOL, NULL, NULL)) == 0) {
                goto qmi_message_wda_get_data_format_output_downlink_data_aggregation_protocol_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_wda_get_data_format_output_downlink_data_aggregation_protocol_out;
                self->arg_downlink_data_aggregation_protocol = (QmiWdaDataAggregationProtocol)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Downlink Data Aggregation Protocol' TLV", offset);
            }

            self->arg_downlink_data_aggregation_protocol_set = TRUE;

qmi_message_wda_get_data_format_output_downlink_data_aggregation_protocol_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_NDP_SIGNATURE, NULL, NULL)) == 0) {
                goto qmi_message_wda_get_data_format_output_ndp_signature_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_ndp_signature), NULL))
                goto qmi_message_wda_get_data_format_output_ndp_signature_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'NDP Signature' TLV", offset);
            }

            self->arg_ndp_signature_set = TRUE;

qmi_message_wda_get_data_format_output_ndp_signature_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_DATAGRAMS, NULL, NULL)) == 0) {
                goto qmi_message_wda_get_data_format_output_downlink_data_aggregation_max_datagrams_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_downlink_data_aggregation_max_datagrams), NULL))
                goto qmi_message_wda_get_data_format_output_downlink_data_aggregation_max_datagrams_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Downlink Data Aggregation Max Datagrams' TLV", offset);
            }

            self->arg_downlink_data_aggregation_max_datagrams_set = TRUE;

qmi_message_wda_get_data_format_output_downlink_data_aggregation_max_datagrams_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLINK_DATA_AGGREGATION_MAX_SIZE, NULL, NULL)) == 0) {
                goto qmi_message_wda_get_data_format_output_downlink_data_aggregation_max_size_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_downlink_data_aggregation_max_size), NULL))
                goto qmi_message_wda_get_data_format_output_downlink_data_aggregation_max_size_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Downlink Data Aggregation Max Size' TLV", offset);
            }

            self->arg_downlink_data_aggregation_max_size_set = TRUE;

qmi_message_wda_get_data_format_output_downlink_data_aggregation_max_size_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_DATAGRAMS, NULL, NULL)) == 0) {
                goto qmi_message_wda_get_data_format_output_uplink_data_aggregation_max_datagrams_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_uplink_data_aggregation_max_datagrams), NULL))
                goto qmi_message_wda_get_data_format_output_uplink_data_aggregation_max_datagrams_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Uplink Data Aggregation Max Datagrams' TLV", offset);
            }

            self->arg_uplink_data_aggregation_max_datagrams_set = TRUE;

qmi_message_wda_get_data_format_output_uplink_data_aggregation_max_datagrams_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_UPLINK_DATA_AGGREGATION_MAX_SIZE, NULL, NULL)) == 0) {
                goto qmi_message_wda_get_data_format_output_uplink_data_aggregation_max_size_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_uplink_data_aggregation_max_size), NULL))
                goto qmi_message_wda_get_data_format_output_uplink_data_aggregation_max_size_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Uplink Data Aggregation Max Size' TLV", offset);
            }

            self->arg_uplink_data_aggregation_max_size_set = TRUE;

qmi_message_wda_get_data_format_output_uplink_data_aggregation_max_size_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_DOWNLOAD_MINIMUM_PADDING, NULL, NULL)) == 0) {
                goto qmi_message_wda_get_data_format_output_download_minimum_padding_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_download_minimum_padding), NULL))
                goto qmi_message_wda_get_data_format_output_download_minimum_padding_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Download Minimum Padding' TLV", offset);
            }

            self->arg_download_minimum_padding_set = TRUE;

qmi_message_wda_get_data_format_output_download_minimum_padding_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_GET_DATA_FORMAT_OUTPUT_TLV_FLOW_CONTROL, NULL, NULL)) == 0) {
                goto qmi_message_wda_get_data_format_output_flow_control_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_flow_control), NULL))
                goto qmi_message_wda_get_data_format_output_flow_control_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Flow Control' TLV", offset);
            }

            self->arg_flow_control_set = TRUE;

qmi_message_wda_get_data_format_output_flow_control_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDA Loopback Configuration */


/* --- Input -- */

struct _QmiMessageWdaLoopbackConfigurationInput {
    volatile gint ref_count;

    /* Replication factor */
    gboolean arg_replication_factor_set;
    guint32 arg_replication_factor;

    /* Loopback state */
    gboolean arg_loopback_state_set;
    guint8 arg_loopback_state;
};

#define QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION_INPUT_TLV_REPLICATION_FACTOR 0x10
#define QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION_INPUT_TLV_LOOPBACK_STATE 0x01

gboolean
qmi_message_wda_loopback_configuration_input_get_replication_factor (
    QmiMessageWdaLoopbackConfigurationInput *self,
    guint32 *value_replication_factor,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_replication_factor_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Replication factor' was not found in the message");
        return FALSE;
    }

    if (value_replication_factor)
        *value_replication_factor = self->arg_replication_factor;

    return TRUE;
}

gboolean
qmi_message_wda_loopback_configuration_input_set_replication_factor (
    QmiMessageWdaLoopbackConfigurationInput *self,
    guint32 value_replication_factor,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_replication_factor = value_replication_factor;
    self->arg_replication_factor_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_wda_loopback_configuration_input_get_loopback_state (
    QmiMessageWdaLoopbackConfigurationInput *self,
    QmiWdaLoopBackState *value_loopback_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_loopback_state_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Loopback state' was not found in the message");
        return FALSE;
    }

    if (value_loopback_state)
        *value_loopback_state = (QmiWdaLoopBackState)(self->arg_loopback_state);

    return TRUE;
}

gboolean
qmi_message_wda_loopback_configuration_input_set_loopback_state (
    QmiMessageWdaLoopbackConfigurationInput *self,
    QmiWdaLoopBackState value_loopback_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_loopback_state = (guint8)(value_loopback_state);
    self->arg_loopback_state_set = TRUE;

    return TRUE;
}

GType
qmi_message_wda_loopback_configuration_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWdaLoopbackConfigurationInput"),
                                          (GBoxedCopyFunc) qmi_message_wda_loopback_configuration_input_ref,
                                          (GBoxedFreeFunc) qmi_message_wda_loopback_configuration_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWdaLoopbackConfigurationInput *
qmi_message_wda_loopback_configuration_input_ref (QmiMessageWdaLoopbackConfigurationInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wda_loopback_configuration_input_unref (QmiMessageWdaLoopbackConfigurationInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWdaLoopbackConfigurationInput, self);
    }
}

QmiMessageWdaLoopbackConfigurationInput *
qmi_message_wda_loopback_configuration_input_new (void)
{
    QmiMessageWdaLoopbackConfigurationInput *self;

    self = g_slice_new0 (QmiMessageWdaLoopbackConfigurationInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_wda_loopback_configuration_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageWdaLoopbackConfigurationInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_WDA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Loopback Configuration' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Replication factor' TLV */
    if (input->arg_replication_factor_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION_INPUT_TLV_REPLICATION_FACTOR, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Replication factor': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_replication_factor, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Replication factor': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Replication factor': ");
            return NULL;
        }
    }

    /* Try to add the 'Loopback state' TLV */
    if (input->arg_loopback_state_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION_INPUT_TLV_LOOPBACK_STATE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Loopback state': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_loopback_state;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Loopback state': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Loopback state': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Loopback state' in message 'Loopback Configuration'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageWdaLoopbackConfigurationOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_wda_loopback_configuration_output_get_result (
    QmiMessageWdaLoopbackConfigurationOutput *self,
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
qmi_message_wda_loopback_configuration_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageWdaLoopbackConfigurationOutput"),
                                          (GBoxedCopyFunc) qmi_message_wda_loopback_configuration_output_ref,
                                          (GBoxedFreeFunc) qmi_message_wda_loopback_configuration_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageWdaLoopbackConfigurationOutput *
qmi_message_wda_loopback_configuration_output_ref (QmiMessageWdaLoopbackConfigurationOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_wda_loopback_configuration_output_unref (QmiMessageWdaLoopbackConfigurationOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageWdaLoopbackConfigurationOutput, self);
    }
}

static gchar *
qmi_message_wda_loopback_configuration_input_replication_factor_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION_INPUT_TLV_REPLICATION_FACTOR, NULL, NULL)) == 0)
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
qmi_message_wda_loopback_configuration_input_loopback_state_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION_INPUT_TLV_LOOPBACK_STATE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_WDA_LOOP_BACK_STATE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_wda_loop_back_state_get_string ((QmiWdaLoopBackState)tmp));
#elif defined  __QMI_WDA_LOOP_BACK_STATE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_wda_loop_back_state_build_string_from_mask ((QmiWdaLoopBackState)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiWdaLoopBackState
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

struct message_loopback_configuration_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_loopback_configuration_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_loopback_configuration_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION_INPUT_TLV_REPLICATION_FACTOR:
            tlv_type_str = "Replication factor";
            translated_value = qmi_message_wda_loopback_configuration_input_replication_factor_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION_INPUT_TLV_LOOPBACK_STATE:
            tlv_type_str = "Loopback state";
            translated_value = qmi_message_wda_loopback_configuration_input_loopback_state_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION_OUTPUT_TLV_RESULT:
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
message_loopback_configuration_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Loopback Configuration\" (0x002f)\n",
                            line_prefix);

    {
        struct message_loopback_configuration_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_loopback_configuration_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageWdaLoopbackConfigurationOutput *
qmi_message_wda_loopback_configuration_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageWdaLoopbackConfigurationOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION);

    self = g_slice_new0 (QmiMessageWdaLoopbackConfigurationOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_wda_loopback_configuration_output_unref (self);
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
                qmi_message_wda_loopback_configuration_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: WDA */


gchar *
__qmi_message_wda_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_WDA_LOOPBACK_CONFIGURATION:
            return indication_loopback_configuration_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_WDA_GET_SUPPORTED_MESSAGES:
                return message_get_supported_messages_get_printable (self, line_prefix);
            case QMI_MESSAGE_WDA_SET_DATA_FORMAT:
                return message_set_data_format_get_printable (self, line_prefix);
            case QMI_MESSAGE_WDA_GET_DATA_FORMAT:
                return message_get_data_format_get_printable (self, line_prefix);
            case QMI_MESSAGE_WDA_LOOPBACK_CONFIGURATION:
                return message_loopback_configuration_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client WDA */

G_DEFINE_TYPE (QmiClientWda, qmi_client_wda, QMI_TYPE_CLIENT)

enum {
    SIGNAL_LOOPBACK_CONFIGURATION,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_WDA_LOOPBACK_CONFIGURATION: {
            QmiIndicationWdaLoopbackConfigurationOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_wda_loopback_configuration_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Loopback Configuration' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_LOOPBACK_CONFIGURATION], 0, output);
                qmi_indication_wda_loopback_configuration_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_wda_init (QmiClientWda *self)
{
}

static void
qmi_client_wda_class_init (QmiClientWdaClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientWda::loopback-configuration:
     * @object: A #QmiClientWda.
     * @output: A #QmiIndicationWdaLoopbackConfigurationOutput.
     *
     * The ::loopback-configuration signal gets emitted when a '<link linkend="libqmi-glib-WDA-Loopback-Configuration-indication.top_of_page">Loopback Configuration</link>' indication is received.
     *
     * Since: 1.36
     */
    signals[SIGNAL_LOOPBACK_CONFIGURATION] =
        g_signal_new ("loopback-configuration",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_WDA_LOOPBACK_CONFIGURATION_OUTPUT);
}


QmiMessageWdaGetSupportedMessagesOutput *
qmi_client_wda_get_supported_messages_finish (
    QmiClientWda *self,
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
    QmiMessageWdaGetSupportedMessagesOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wda_get_supported_messages_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wda_get_supported_messages_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wda_get_supported_messages (
    QmiClientWda *self,
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

    request = __qmi_message_wda_get_supported_messages_request_create (
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


QmiMessageWdaSetDataFormatOutput *
qmi_client_wda_set_data_format_finish (
    QmiClientWda *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_data_format_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWdaSetDataFormatOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wda_set_data_format_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wda_set_data_format_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wda_set_data_format (
    QmiClientWda *self,
    QmiMessageWdaSetDataFormatInput *input,
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

    request = __qmi_message_wda_set_data_format_request_create (
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
                             (GAsyncReadyCallback)set_data_format_ready,
                             task);
}


QmiMessageWdaGetDataFormatOutput *
qmi_client_wda_get_data_format_finish (
    QmiClientWda *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_data_format_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWdaGetDataFormatOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wda_get_data_format_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wda_get_data_format_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wda_get_data_format (
    QmiClientWda *self,
    QmiMessageWdaGetDataFormatInput *input,
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

    request = __qmi_message_wda_get_data_format_request_create (
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
                             (GAsyncReadyCallback)get_data_format_ready,
                             task);
}


QmiMessageWdaLoopbackConfigurationOutput *
qmi_client_wda_loopback_configuration_finish (
    QmiClientWda *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
loopback_configuration_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageWdaLoopbackConfigurationOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_wda_loopback_configuration_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_wda_loopback_configuration_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_wda_loopback_configuration (
    QmiClientWda *self,
    QmiMessageWdaLoopbackConfigurationInput *input,
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

    request = __qmi_message_wda_loopback_configuration_request_create (
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
                             (GAsyncReadyCallback)loopback_configuration_ready,
                             task);
}

