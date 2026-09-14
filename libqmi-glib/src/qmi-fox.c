
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

#include "qmi-fox.h"
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
    QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION = 0x555E,
    QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION = 0x5571,
} QmiMessageFox;


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message FOX Get Firmware Version */


/* --- Input -- */

struct _QmiMessageFoxGetFirmwareVersionInput {
    volatile gint ref_count;

    /* Version Type */
    gboolean arg_version_type_set;
    guint8 arg_version_type;
};

#define QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION_INPUT_TLV_VERSION_TYPE 0x01

gboolean
qmi_message_fox_get_firmware_version_input_get_version_type (
    QmiMessageFoxGetFirmwareVersionInput *self,
    QmiFoxFirmwareVersionType *value_version_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_version_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Version Type' was not found in the message");
        return FALSE;
    }

    if (value_version_type)
        *value_version_type = (QmiFoxFirmwareVersionType)(self->arg_version_type);

    return TRUE;
}

gboolean
qmi_message_fox_get_firmware_version_input_set_version_type (
    QmiMessageFoxGetFirmwareVersionInput *self,
    QmiFoxFirmwareVersionType value_version_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_version_type = (guint8)(value_version_type);
    self->arg_version_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_fox_get_firmware_version_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageFoxGetFirmwareVersionInput"),
                                          (GBoxedCopyFunc) qmi_message_fox_get_firmware_version_input_ref,
                                          (GBoxedFreeFunc) qmi_message_fox_get_firmware_version_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageFoxGetFirmwareVersionInput *
qmi_message_fox_get_firmware_version_input_ref (QmiMessageFoxGetFirmwareVersionInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_fox_get_firmware_version_input_unref (QmiMessageFoxGetFirmwareVersionInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageFoxGetFirmwareVersionInput, self);
    }
}

QmiMessageFoxGetFirmwareVersionInput *
qmi_message_fox_get_firmware_version_input_new (void)
{
    QmiMessageFoxGetFirmwareVersionInput *self;

    self = g_slice_new0 (QmiMessageFoxGetFirmwareVersionInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_fox_get_firmware_version_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageFoxGetFirmwareVersionInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_FOX,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Get Firmware Version' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Version Type' TLV */
    if (input->arg_version_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION_INPUT_TLV_VERSION_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Version Type': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_version_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Version Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Version Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Version Type' in message 'Get Firmware Version'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageFoxGetFirmwareVersionOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Version */
    gboolean arg_version_set;
    gchar *arg_version;
};

#define QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION_OUTPUT_TLV_VERSION 0x01

gboolean
qmi_message_fox_get_firmware_version_output_get_result (
    QmiMessageFoxGetFirmwareVersionOutput *self,
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
qmi_message_fox_get_firmware_version_output_get_version (
    QmiMessageFoxGetFirmwareVersionOutput *self,
    const gchar **value_version,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_version_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Version' was not found in the message");
        return FALSE;
    }

    if (value_version)
        *value_version = self->arg_version;

    return TRUE;
}

GType
qmi_message_fox_get_firmware_version_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageFoxGetFirmwareVersionOutput"),
                                          (GBoxedCopyFunc) qmi_message_fox_get_firmware_version_output_ref,
                                          (GBoxedFreeFunc) qmi_message_fox_get_firmware_version_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageFoxGetFirmwareVersionOutput *
qmi_message_fox_get_firmware_version_output_ref (QmiMessageFoxGetFirmwareVersionOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_fox_get_firmware_version_output_unref (QmiMessageFoxGetFirmwareVersionOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_version, (GDestroyNotify)g_free);
        g_slice_free (QmiMessageFoxGetFirmwareVersionOutput, self);
    }
}

static gchar *
qmi_message_fox_get_firmware_version_input_version_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION_INPUT_TLV_VERSION_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_FOX_FIRMWARE_VERSION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_fox_firmware_version_type_get_string ((QmiFoxFirmwareVersionType)tmp));
#elif defined  __QMI_FOX_FIRMWARE_VERSION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_fox_firmware_version_type_build_string_from_mask ((QmiFoxFirmwareVersionType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiFoxFirmwareVersionType
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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
qmi_message_fox_get_firmware_version_output_version_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION_OUTPUT_TLV_VERSION, NULL, NULL)) == 0)
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

struct message_get_firmware_version_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_firmware_version_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_firmware_version_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION_INPUT_TLV_VERSION_TYPE:
            tlv_type_str = "Version Type";
            translated_value = qmi_message_fox_get_firmware_version_input_version_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION_OUTPUT_TLV_VERSION:
            tlv_type_str = "Version";
            translated_value = qmi_message_fox_get_firmware_version_output_version_get_printable (
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
message_get_firmware_version_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Firmware Version\" (0x555E)\n",
                            line_prefix);

    {
        struct message_get_firmware_version_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_firmware_version_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageFoxGetFirmwareVersionOutput *
qmi_message_fox_get_firmware_version_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageFoxGetFirmwareVersionOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION);

    self = g_slice_new0 (QmiMessageFoxGetFirmwareVersionOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_fox_get_firmware_version_output_unref (self);
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
                qmi_message_fox_get_firmware_version_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION_OUTPUT_TLV_VERSION, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Version TLV: ");
                qmi_message_fox_get_firmware_version_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 0, &(self->arg_version), error))
                goto qmi_message_fox_get_firmware_version_output_version_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Version' TLV", offset);
            }

            self->arg_version_set = TRUE;

qmi_message_fox_get_firmware_version_output_version_out:
            if (!self->arg_version_set) {
                qmi_message_fox_get_firmware_version_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message FOX Set FCC Authentication */


/* --- Input -- */

struct _QmiMessageFoxSetFccAuthenticationInput {
    volatile gint ref_count;

    /* Magic String */
    gboolean arg_magic_string_set;
    gchar *arg_magic_string;

    /* Magic Number */
    gboolean arg_magic_number_set;
    guint8 arg_magic_number;
};

#define QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION_INPUT_TLV_MAGIC_STRING 0x01
#define QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION_INPUT_TLV_MAGIC_NUMBER 0x02

gboolean
qmi_message_fox_set_fcc_authentication_input_get_magic_string (
    QmiMessageFoxSetFccAuthenticationInput *self,
    const gchar **value_magic_string,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_magic_string_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Magic String' was not found in the message");
        return FALSE;
    }

    if (value_magic_string)
        *value_magic_string = self->arg_magic_string;

    return TRUE;
}

gboolean
qmi_message_fox_set_fcc_authentication_input_set_magic_string (
    QmiMessageFoxSetFccAuthenticationInput *self,
    const gchar *value_magic_string,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_free (self->arg_magic_string);
    self->arg_magic_string = g_strdup (value_magic_string ? value_magic_string : "");
    self->arg_magic_string_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_fox_set_fcc_authentication_input_get_magic_number (
    QmiMessageFoxSetFccAuthenticationInput *self,
    guint8 *value_magic_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_magic_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Magic Number' was not found in the message");
        return FALSE;
    }

    if (value_magic_number)
        *value_magic_number = self->arg_magic_number;

    return TRUE;
}

gboolean
qmi_message_fox_set_fcc_authentication_input_set_magic_number (
    QmiMessageFoxSetFccAuthenticationInput *self,
    guint8 value_magic_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_magic_number = value_magic_number;
    self->arg_magic_number_set = TRUE;

    return TRUE;
}

GType
qmi_message_fox_set_fcc_authentication_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageFoxSetFccAuthenticationInput"),
                                          (GBoxedCopyFunc) qmi_message_fox_set_fcc_authentication_input_ref,
                                          (GBoxedFreeFunc) qmi_message_fox_set_fcc_authentication_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageFoxSetFccAuthenticationInput *
qmi_message_fox_set_fcc_authentication_input_ref (QmiMessageFoxSetFccAuthenticationInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_fox_set_fcc_authentication_input_unref (QmiMessageFoxSetFccAuthenticationInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_magic_string, (GDestroyNotify)g_free);
        g_slice_free (QmiMessageFoxSetFccAuthenticationInput, self);
    }
}

QmiMessageFoxSetFccAuthenticationInput *
qmi_message_fox_set_fcc_authentication_input_new (void)
{
    QmiMessageFoxSetFccAuthenticationInput *self;

    self = g_slice_new0 (QmiMessageFoxSetFccAuthenticationInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_fox_set_fcc_authentication_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageFoxSetFccAuthenticationInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_FOX,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set FCC Authentication' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Magic String' TLV */
    if (input->arg_magic_string_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION_INPUT_TLV_MAGIC_STRING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Magic String': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_string (self, 0, input->arg_magic_string, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'Magic String': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Magic String': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Magic String' in message 'Set FCC Authentication'");
        return NULL;
    }

    /* Try to add the 'Magic Number' TLV */
    if (input->arg_magic_number_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION_INPUT_TLV_MAGIC_NUMBER, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Magic Number': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_magic_number, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Magic Number': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Magic Number': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Magic Number' in message 'Set FCC Authentication'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageFoxSetFccAuthenticationOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_fox_set_fcc_authentication_output_get_result (
    QmiMessageFoxSetFccAuthenticationOutput *self,
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
qmi_message_fox_set_fcc_authentication_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageFoxSetFccAuthenticationOutput"),
                                          (GBoxedCopyFunc) qmi_message_fox_set_fcc_authentication_output_ref,
                                          (GBoxedFreeFunc) qmi_message_fox_set_fcc_authentication_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageFoxSetFccAuthenticationOutput *
qmi_message_fox_set_fcc_authentication_output_ref (QmiMessageFoxSetFccAuthenticationOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_fox_set_fcc_authentication_output_unref (QmiMessageFoxSetFccAuthenticationOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageFoxSetFccAuthenticationOutput, self);
    }
}

static gchar *
qmi_message_fox_set_fcc_authentication_input_magic_string_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION_INPUT_TLV_MAGIC_STRING, NULL, NULL)) == 0)
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
qmi_message_fox_set_fcc_authentication_input_magic_number_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION_INPUT_TLV_MAGIC_NUMBER, NULL, NULL)) == 0)
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

struct message_set_fcc_authentication_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_fcc_authentication_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_fcc_authentication_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION_INPUT_TLV_MAGIC_STRING:
            tlv_type_str = "Magic String";
            translated_value = qmi_message_fox_set_fcc_authentication_input_magic_string_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION_INPUT_TLV_MAGIC_NUMBER:
            tlv_type_str = "Magic Number";
            translated_value = qmi_message_fox_set_fcc_authentication_input_magic_number_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION_OUTPUT_TLV_RESULT:
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
message_set_fcc_authentication_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set FCC Authentication\" (0x5571)\n",
                            line_prefix);

    {
        struct message_set_fcc_authentication_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_fcc_authentication_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageFoxSetFccAuthenticationOutput *
qmi_message_fox_set_fcc_authentication_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageFoxSetFccAuthenticationOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION);

    self = g_slice_new0 (QmiMessageFoxSetFccAuthenticationOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_fox_set_fcc_authentication_output_unref (self);
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
                qmi_message_fox_set_fcc_authentication_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: FOX */


gchar *
__qmi_message_fox_get_printable (
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
            case QMI_MESSAGE_FOX_GET_FIRMWARE_VERSION:
                return message_get_firmware_version_get_printable (self, line_prefix);
            case QMI_MESSAGE_FOX_SET_FCC_AUTHENTICATION:
                return message_set_fcc_authentication_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client FOX */

G_DEFINE_TYPE (QmiClientFox, qmi_client_fox, QMI_TYPE_CLIENT)

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
qmi_client_fox_init (QmiClientFox *self)
{
}

static void
qmi_client_fox_class_init (QmiClientFoxClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;
}


QmiMessageFoxGetFirmwareVersionOutput *
qmi_client_fox_get_firmware_version_finish (
    QmiClientFox *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_firmware_version_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageFoxGetFirmwareVersionOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_fox_get_firmware_version_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_fox_get_firmware_version_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_fox_get_firmware_version (
    QmiClientFox *self,
    QmiMessageFoxGetFirmwareVersionInput *input,
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

    request = __qmi_message_fox_get_firmware_version_request_create (
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
                             (GAsyncReadyCallback)get_firmware_version_ready,
                             task);
}


QmiMessageFoxSetFccAuthenticationOutput *
qmi_client_fox_set_fcc_authentication_finish (
    QmiClientFox *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_fcc_authentication_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageFoxSetFccAuthenticationOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_fox_set_fcc_authentication_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_fox_set_fcc_authentication_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_fox_set_fcc_authentication (
    QmiClientFox *self,
    QmiMessageFoxSetFccAuthenticationInput *input,
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

    request = __qmi_message_fox_set_fcc_authentication_request_create (
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
                             (GAsyncReadyCallback)set_fcc_authentication_ready,
                             task);
}

