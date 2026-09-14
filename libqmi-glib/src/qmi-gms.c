
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

#include "qmi-gms.h"
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
    QMI_MESSAGE_GMS_TEST_SET_VALUE = 0x0F00,
    QMI_MESSAGE_GMS_TEST_GET_VALUE = 0x0F01,
} QmiMessageGms;


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message GMS Test Set Value */


/* --- Input -- */

struct _QmiMessageGmsTestSetValueInput {
    volatile gint ref_count;

    /* Test Optional Value */
    gboolean arg_test_optional_value_set;
    guint8 arg_test_optional_value;

    /* Test Mandatory Value */
    gboolean arg_test_mandatory_value_set;
    guint8 arg_test_mandatory_value;
};

#define QMI_MESSAGE_GMS_TEST_SET_VALUE_INPUT_TLV_TEST_OPTIONAL_VALUE 0x10
#define QMI_MESSAGE_GMS_TEST_SET_VALUE_INPUT_TLV_TEST_MANDATORY_VALUE 0x01

gboolean
qmi_message_gms_test_set_value_input_get_test_optional_value (
    QmiMessageGmsTestSetValueInput *self,
    guint8 *value_test_optional_value,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_test_optional_value_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Test Optional Value' was not found in the message");
        return FALSE;
    }

    if (value_test_optional_value)
        *value_test_optional_value = self->arg_test_optional_value;

    return TRUE;
}

gboolean
qmi_message_gms_test_set_value_input_set_test_optional_value (
    QmiMessageGmsTestSetValueInput *self,
    guint8 value_test_optional_value,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_test_optional_value = value_test_optional_value;
    self->arg_test_optional_value_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_gms_test_set_value_input_get_test_mandatory_value (
    QmiMessageGmsTestSetValueInput *self,
    guint8 *value_test_mandatory_value,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_test_mandatory_value_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Test Mandatory Value' was not found in the message");
        return FALSE;
    }

    if (value_test_mandatory_value)
        *value_test_mandatory_value = self->arg_test_mandatory_value;

    return TRUE;
}

gboolean
qmi_message_gms_test_set_value_input_set_test_mandatory_value (
    QmiMessageGmsTestSetValueInput *self,
    guint8 value_test_mandatory_value,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_test_mandatory_value = value_test_mandatory_value;
    self->arg_test_mandatory_value_set = TRUE;

    return TRUE;
}

GType
qmi_message_gms_test_set_value_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageGmsTestSetValueInput"),
                                          (GBoxedCopyFunc) qmi_message_gms_test_set_value_input_ref,
                                          (GBoxedFreeFunc) qmi_message_gms_test_set_value_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageGmsTestSetValueInput *
qmi_message_gms_test_set_value_input_ref (QmiMessageGmsTestSetValueInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_gms_test_set_value_input_unref (QmiMessageGmsTestSetValueInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageGmsTestSetValueInput, self);
    }
}

QmiMessageGmsTestSetValueInput *
qmi_message_gms_test_set_value_input_new (void)
{
    QmiMessageGmsTestSetValueInput *self;

    self = g_slice_new0 (QmiMessageGmsTestSetValueInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_gms_test_set_value_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageGmsTestSetValueInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_GMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_GMS_TEST_SET_VALUE);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Test Set Value' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Test Optional Value' TLV */
    if (input->arg_test_optional_value_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_GMS_TEST_SET_VALUE_INPUT_TLV_TEST_OPTIONAL_VALUE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Test Optional Value': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_test_optional_value, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Test Optional Value': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Test Optional Value': ");
            return NULL;
        }
    }

    /* Try to add the 'Test Mandatory Value' TLV */
    if (input->arg_test_mandatory_value_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_GMS_TEST_SET_VALUE_INPUT_TLV_TEST_MANDATORY_VALUE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Test Mandatory Value': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_test_mandatory_value, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Test Mandatory Value': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Test Mandatory Value': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Test Mandatory Value' in message 'Test Set Value'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageGmsTestSetValueOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_GMS_TEST_SET_VALUE_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_gms_test_set_value_output_get_result (
    QmiMessageGmsTestSetValueOutput *self,
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
qmi_message_gms_test_set_value_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageGmsTestSetValueOutput"),
                                          (GBoxedCopyFunc) qmi_message_gms_test_set_value_output_ref,
                                          (GBoxedFreeFunc) qmi_message_gms_test_set_value_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageGmsTestSetValueOutput *
qmi_message_gms_test_set_value_output_ref (QmiMessageGmsTestSetValueOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_gms_test_set_value_output_unref (QmiMessageGmsTestSetValueOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageGmsTestSetValueOutput, self);
    }
}

static gchar *
qmi_message_gms_test_set_value_input_test_optional_value_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_GMS_TEST_SET_VALUE_INPUT_TLV_TEST_OPTIONAL_VALUE, NULL, NULL)) == 0)
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
qmi_message_gms_test_set_value_input_test_mandatory_value_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_GMS_TEST_SET_VALUE_INPUT_TLV_TEST_MANDATORY_VALUE, NULL, NULL)) == 0)
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_GMS_TEST_SET_VALUE_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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

struct message_test_set_value_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_test_set_value_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_test_set_value_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_GMS_TEST_SET_VALUE_INPUT_TLV_TEST_OPTIONAL_VALUE:
            tlv_type_str = "Test Optional Value";
            translated_value = qmi_message_gms_test_set_value_input_test_optional_value_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_GMS_TEST_SET_VALUE_INPUT_TLV_TEST_MANDATORY_VALUE:
            tlv_type_str = "Test Mandatory Value";
            translated_value = qmi_message_gms_test_set_value_input_test_mandatory_value_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_GMS_TEST_SET_VALUE_OUTPUT_TLV_RESULT:
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
message_test_set_value_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Test Set Value\" (0x0F00)\n",
                            line_prefix);

    {
        struct message_test_set_value_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_test_set_value_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageGmsTestSetValueOutput *
qmi_message_gms_test_set_value_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageGmsTestSetValueOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_GMS_TEST_SET_VALUE);

    self = g_slice_new0 (QmiMessageGmsTestSetValueOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_GMS_TEST_SET_VALUE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_gms_test_set_value_output_unref (self);
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
                qmi_message_gms_test_set_value_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message GMS Test Get Value */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_gms_test_get_value_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_GMS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_GMS_TEST_GET_VALUE);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageGmsTestGetValueOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Test Mandatory Value */
    gboolean arg_test_mandatory_value_set;
    guint8 arg_test_mandatory_value;

    /* Test Optional Value */
    gboolean arg_test_optional_value_set;
    guint8 arg_test_optional_value;
};

#define QMI_MESSAGE_GMS_TEST_GET_VALUE_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_GMS_TEST_GET_VALUE_OUTPUT_TLV_TEST_MANDATORY_VALUE 0x03
#define QMI_MESSAGE_GMS_TEST_GET_VALUE_OUTPUT_TLV_TEST_OPTIONAL_VALUE 0x10

gboolean
qmi_message_gms_test_get_value_output_get_result (
    QmiMessageGmsTestGetValueOutput *self,
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
qmi_message_gms_test_get_value_output_get_test_mandatory_value (
    QmiMessageGmsTestGetValueOutput *self,
    guint8 *value_test_mandatory_value,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_test_mandatory_value_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Test Mandatory Value' was not found in the message");
        return FALSE;
    }

    if (value_test_mandatory_value)
        *value_test_mandatory_value = self->arg_test_mandatory_value;

    return TRUE;
}

gboolean
qmi_message_gms_test_get_value_output_get_test_optional_value (
    QmiMessageGmsTestGetValueOutput *self,
    guint8 *value_test_optional_value,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_test_optional_value_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Test Optional Value' was not found in the message");
        return FALSE;
    }

    if (value_test_optional_value)
        *value_test_optional_value = self->arg_test_optional_value;

    return TRUE;
}

GType
qmi_message_gms_test_get_value_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageGmsTestGetValueOutput"),
                                          (GBoxedCopyFunc) qmi_message_gms_test_get_value_output_ref,
                                          (GBoxedFreeFunc) qmi_message_gms_test_get_value_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageGmsTestGetValueOutput *
qmi_message_gms_test_get_value_output_ref (QmiMessageGmsTestGetValueOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_gms_test_get_value_output_unref (QmiMessageGmsTestGetValueOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageGmsTestGetValueOutput, self);
    }
}

static gchar *
qmi_message_gms_test_get_value_output_test_mandatory_value_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_GMS_TEST_GET_VALUE_OUTPUT_TLV_TEST_MANDATORY_VALUE, NULL, NULL)) == 0)
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
qmi_message_gms_test_get_value_output_test_optional_value_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_GMS_TEST_GET_VALUE_OUTPUT_TLV_TEST_OPTIONAL_VALUE, NULL, NULL)) == 0)
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

struct message_test_get_value_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_test_get_value_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_test_get_value_context *ctx)
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
        case QMI_MESSAGE_GMS_TEST_GET_VALUE_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_GMS_TEST_GET_VALUE_OUTPUT_TLV_TEST_MANDATORY_VALUE:
            tlv_type_str = "Test Mandatory Value";
            translated_value = qmi_message_gms_test_get_value_output_test_mandatory_value_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_GMS_TEST_GET_VALUE_OUTPUT_TLV_TEST_OPTIONAL_VALUE:
            tlv_type_str = "Test Optional Value";
            translated_value = qmi_message_gms_test_get_value_output_test_optional_value_get_printable (
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
message_test_get_value_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Test Get Value\" (0x0F01)\n",
                            line_prefix);

    {
        struct message_test_get_value_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_test_get_value_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageGmsTestGetValueOutput *
qmi_message_gms_test_get_value_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageGmsTestGetValueOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_GMS_TEST_GET_VALUE);

    self = g_slice_new0 (QmiMessageGmsTestGetValueOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_GMS_TEST_GET_VALUE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_gms_test_get_value_output_unref (self);
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
                qmi_message_gms_test_get_value_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_GMS_TEST_GET_VALUE_OUTPUT_TLV_TEST_MANDATORY_VALUE, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Test Mandatory Value TLV: ");
                qmi_message_gms_test_get_value_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_test_mandatory_value), error))
                goto qmi_message_gms_test_get_value_output_test_mandatory_value_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Test Mandatory Value' TLV", offset);
            }

            self->arg_test_mandatory_value_set = TRUE;

qmi_message_gms_test_get_value_output_test_mandatory_value_out:
            if (!self->arg_test_mandatory_value_set) {
                qmi_message_gms_test_get_value_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_GMS_TEST_GET_VALUE_OUTPUT_TLV_TEST_OPTIONAL_VALUE, NULL, NULL)) == 0) {
                goto qmi_message_gms_test_get_value_output_test_optional_value_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_test_optional_value), NULL))
                goto qmi_message_gms_test_get_value_output_test_optional_value_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Test Optional Value' TLV", offset);
            }

            self->arg_test_optional_value_set = TRUE;

qmi_message_gms_test_get_value_output_test_optional_value_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: GMS */


gchar *
__qmi_message_gms_get_printable (
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
            case QMI_MESSAGE_GMS_TEST_SET_VALUE:
                return message_test_set_value_get_printable (self, line_prefix);
            case QMI_MESSAGE_GMS_TEST_GET_VALUE:
                return message_test_get_value_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client GMS */

G_DEFINE_TYPE (QmiClientGms, qmi_client_gms, QMI_TYPE_CLIENT)

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
qmi_client_gms_init (QmiClientGms *self)
{
}

static void
qmi_client_gms_class_init (QmiClientGmsClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;
}


QmiMessageGmsTestSetValueOutput *
qmi_client_gms_test_set_value_finish (
    QmiClientGms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
test_set_value_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageGmsTestSetValueOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_gms_test_set_value_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_gms_test_set_value_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_gms_test_set_value (
    QmiClientGms *self,
    QmiMessageGmsTestSetValueInput *input,
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

    request = __qmi_message_gms_test_set_value_request_create (
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
                             (GAsyncReadyCallback)test_set_value_ready,
                             task);
}


QmiMessageGmsTestGetValueOutput *
qmi_client_gms_test_get_value_finish (
    QmiClientGms *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
test_get_value_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageGmsTestGetValueOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_gms_test_get_value_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_gms_test_get_value_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_gms_test_get_value (
    QmiClientGms *self,
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

    request = __qmi_message_gms_test_get_value_request_create (
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
                             (GAsyncReadyCallback)test_get_value_ready,
                             task);
}

