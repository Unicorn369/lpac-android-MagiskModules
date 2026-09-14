
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

#include "qmi-pbm.h"
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
    QMI_MESSAGE_PBM_INDICATION_REGISTER = 0x0001,
    QMI_MESSAGE_PBM_GET_CAPABILITIES = 0x0002,
    QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES = 0x0003,
    QMI_MESSAGE_PBM_GET_EMERGENCY_LIST = 0x000e,
} QmiMessagePbm;


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PBM Indication Register */


/* --- Input -- */

struct _QmiMessagePbmIndicationRegisterInput {
    volatile gint ref_count;

    /* Event Registration Mask */
    gboolean arg_event_registration_mask_set;
    guint32 arg_event_registration_mask;
};

#define QMI_MESSAGE_PBM_INDICATION_REGISTER_INPUT_TLV_EVENT_REGISTRATION_MASK 0x01

gboolean
qmi_message_pbm_indication_register_input_get_event_registration_mask (
    QmiMessagePbmIndicationRegisterInput *self,
    QmiPbmEventRegistrationFlag *value_event_registration_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_event_registration_mask_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Event Registration Mask' was not found in the message");
        return FALSE;
    }

    if (value_event_registration_mask)
        *value_event_registration_mask = (QmiPbmEventRegistrationFlag)(self->arg_event_registration_mask);

    return TRUE;
}

gboolean
qmi_message_pbm_indication_register_input_set_event_registration_mask (
    QmiMessagePbmIndicationRegisterInput *self,
    QmiPbmEventRegistrationFlag value_event_registration_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_event_registration_mask = (guint32)(value_event_registration_mask);
    self->arg_event_registration_mask_set = TRUE;

    return TRUE;
}

GType
qmi_message_pbm_indication_register_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePbmIndicationRegisterInput"),
                                          (GBoxedCopyFunc) qmi_message_pbm_indication_register_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pbm_indication_register_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePbmIndicationRegisterInput *
qmi_message_pbm_indication_register_input_ref (QmiMessagePbmIndicationRegisterInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pbm_indication_register_input_unref (QmiMessagePbmIndicationRegisterInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePbmIndicationRegisterInput, self);
    }
}

QmiMessagePbmIndicationRegisterInput *
qmi_message_pbm_indication_register_input_new (void)
{
    QmiMessagePbmIndicationRegisterInput *self;

    self = g_slice_new0 (QmiMessagePbmIndicationRegisterInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pbm_indication_register_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePbmIndicationRegisterInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PBM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PBM_INDICATION_REGISTER);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Indication Register' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Event Registration Mask' TLV */
    if (input->arg_event_registration_mask_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PBM_INDICATION_REGISTER_INPUT_TLV_EVENT_REGISTRATION_MASK, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Event Registration Mask': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_event_registration_mask;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Event Registration Mask': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Event Registration Mask': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Event Registration Mask' in message 'Indication Register'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePbmIndicationRegisterOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Event Registration Mask */
    gboolean arg_event_registration_mask_set;
    guint32 arg_event_registration_mask;
};

#define QMI_MESSAGE_PBM_INDICATION_REGISTER_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_PBM_INDICATION_REGISTER_OUTPUT_TLV_EVENT_REGISTRATION_MASK 0x10

gboolean
qmi_message_pbm_indication_register_output_get_result (
    QmiMessagePbmIndicationRegisterOutput *self,
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
qmi_message_pbm_indication_register_output_get_event_registration_mask (
    QmiMessagePbmIndicationRegisterOutput *self,
    QmiPbmEventRegistrationFlag *value_event_registration_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_event_registration_mask_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Event Registration Mask' was not found in the message");
        return FALSE;
    }

    if (value_event_registration_mask)
        *value_event_registration_mask = (QmiPbmEventRegistrationFlag)(self->arg_event_registration_mask);

    return TRUE;
}

GType
qmi_message_pbm_indication_register_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePbmIndicationRegisterOutput"),
                                          (GBoxedCopyFunc) qmi_message_pbm_indication_register_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pbm_indication_register_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePbmIndicationRegisterOutput *
qmi_message_pbm_indication_register_output_ref (QmiMessagePbmIndicationRegisterOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pbm_indication_register_output_unref (QmiMessagePbmIndicationRegisterOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePbmIndicationRegisterOutput, self);
    }
}

static gchar *
qmi_message_pbm_indication_register_input_event_registration_mask_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_INDICATION_REGISTER_INPUT_TLV_EVENT_REGISTRATION_MASK, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PBM_EVENT_REGISTRATION_FLAG_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pbm_event_registration_flag_get_string ((QmiPbmEventRegistrationFlag)tmp));
#elif defined  __QMI_PBM_EVENT_REGISTRATION_FLAG_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pbm_event_registration_flag_build_string_from_mask ((QmiPbmEventRegistrationFlag)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPbmEventRegistrationFlag
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_PBM_INDICATION_REGISTER_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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
qmi_message_pbm_indication_register_output_event_registration_mask_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_INDICATION_REGISTER_OUTPUT_TLV_EVENT_REGISTRATION_MASK, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PBM_EVENT_REGISTRATION_FLAG_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pbm_event_registration_flag_get_string ((QmiPbmEventRegistrationFlag)tmp));
#elif defined  __QMI_PBM_EVENT_REGISTRATION_FLAG_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pbm_event_registration_flag_build_string_from_mask ((QmiPbmEventRegistrationFlag)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPbmEventRegistrationFlag
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
        case QMI_MESSAGE_PBM_INDICATION_REGISTER_INPUT_TLV_EVENT_REGISTRATION_MASK:
            tlv_type_str = "Event Registration Mask";
            translated_value = qmi_message_pbm_indication_register_input_event_registration_mask_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PBM_INDICATION_REGISTER_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_INDICATION_REGISTER_OUTPUT_TLV_EVENT_REGISTRATION_MASK:
            tlv_type_str = "Event Registration Mask";
            translated_value = qmi_message_pbm_indication_register_output_event_registration_mask_get_printable (
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
                            "%s  message     = \"Indication Register\" (0x0001)\n",
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

QmiMessagePbmIndicationRegisterOutput *
qmi_message_pbm_indication_register_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePbmIndicationRegisterOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PBM_INDICATION_REGISTER);

    self = g_slice_new0 (QmiMessagePbmIndicationRegisterOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_INDICATION_REGISTER_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pbm_indication_register_output_unref (self);
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
                qmi_message_pbm_indication_register_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_INDICATION_REGISTER_OUTPUT_TLV_EVENT_REGISTRATION_MASK, NULL, NULL)) == 0) {
                goto qmi_message_pbm_indication_register_output_event_registration_mask_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_pbm_indication_register_output_event_registration_mask_out;
                self->arg_event_registration_mask = (QmiPbmEventRegistrationFlag)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Event Registration Mask' TLV", offset);
            }

            self->arg_event_registration_mask_set = TRUE;

qmi_message_pbm_indication_register_output_event_registration_mask_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PBM Get Capabilities */


/* --- Input -- */

struct _QmiMessagePbmGetCapabilitiesInput {
    volatile gint ref_count;

    /* Phonebook Information */
    gboolean arg_phonebook_information_set;
    guint8 arg_phonebook_information_session_type;
    guint16 arg_phonebook_information_phonebook_type;
};

#define QMI_MESSAGE_PBM_GET_CAPABILITIES_INPUT_TLV_PHONEBOOK_INFORMATION 0x01

gboolean
qmi_message_pbm_get_capabilities_input_get_phonebook_information (
    QmiMessagePbmGetCapabilitiesInput *self,
    QmiPbmSessionType *value_phonebook_information_session_type,
    QmiPbmPhonebookType *value_phonebook_information_phonebook_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_phonebook_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Phonebook Information' was not found in the message");
        return FALSE;
    }

    if (value_phonebook_information_session_type)
        *value_phonebook_information_session_type = (QmiPbmSessionType)(self->arg_phonebook_information_session_type);
    if (value_phonebook_information_phonebook_type)
        *value_phonebook_information_phonebook_type = (QmiPbmPhonebookType)(self->arg_phonebook_information_phonebook_type);

    return TRUE;
}

gboolean
qmi_message_pbm_get_capabilities_input_set_phonebook_information (
    QmiMessagePbmGetCapabilitiesInput *self,
    QmiPbmSessionType value_phonebook_information_session_type,
    QmiPbmPhonebookType value_phonebook_information_phonebook_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_phonebook_information_session_type = (guint8)(value_phonebook_information_session_type);
    self->arg_phonebook_information_phonebook_type = (guint16)(value_phonebook_information_phonebook_type);
    self->arg_phonebook_information_set = TRUE;

    return TRUE;
}

GType
qmi_message_pbm_get_capabilities_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePbmGetCapabilitiesInput"),
                                          (GBoxedCopyFunc) qmi_message_pbm_get_capabilities_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pbm_get_capabilities_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePbmGetCapabilitiesInput *
qmi_message_pbm_get_capabilities_input_ref (QmiMessagePbmGetCapabilitiesInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pbm_get_capabilities_input_unref (QmiMessagePbmGetCapabilitiesInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePbmGetCapabilitiesInput, self);
    }
}

QmiMessagePbmGetCapabilitiesInput *
qmi_message_pbm_get_capabilities_input_new (void)
{
    QmiMessagePbmGetCapabilitiesInput *self;

    self = g_slice_new0 (QmiMessagePbmGetCapabilitiesInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pbm_get_capabilities_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePbmGetCapabilitiesInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PBM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PBM_GET_CAPABILITIES);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Get Capabilities' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Phonebook Information' TLV */
    if (input->arg_phonebook_information_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PBM_GET_CAPABILITIES_INPUT_TLV_PHONEBOOK_INFORMATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Phonebook Information': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_phonebook_information_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Phonebook Information': ");
                return NULL;
            }
        }
        {
            guint16 tmp;

            tmp = (guint16) input->arg_phonebook_information_phonebook_type;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Phonebook Information': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Phonebook Information': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Phonebook Information' in message 'Get Capabilities'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePbmGetCapabilitiesOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Capability Basic Information */
    gboolean arg_capability_basic_information_set;
    guint8 arg_capability_basic_information_session_type;
    guint16 arg_capability_basic_information_phonebook_type;
    guint16 arg_capability_basic_information_used_records;
    guint16 arg_capability_basic_information_maximum_records;
    guint8 arg_capability_basic_information_maximum_number_length;
    guint8 arg_capability_basic_information_maximum_name_length;

    /* Group Capability */
    gboolean arg_group_capability_set;
    guint8 arg_group_capability_maximum_groups;
    guint8 arg_group_capability_maximum_group_tag_length;

    /* Additional Number Capability */
    gboolean arg_additional_number_capability_set;
    guint8 arg_additional_number_capability_maximum_additional_numbers;
    guint8 arg_additional_number_capability_maximum_additional_number_length;
    guint8 arg_additional_number_capability_maximum_additional_number_tag_length;

    /* Email Capability */
    gboolean arg_email_capability_set;
    guint8 arg_email_capability_maximum_emails;
    guint8 arg_email_capability_maximum_email_address_length;

    /* Second Name Capability */
    gboolean arg_second_name_capability_set;
    guint8 arg_second_name_capability_maximum_second_name_length;

    /* Hidden Records Capability */
    gboolean arg_hidden_records_capability_set;
    guint8 arg_hidden_records_capability_supported;

    /* Grouping Information Alpha String Capability */
    gboolean arg_grouping_information_alpha_string_capability_set;
    guint8 arg_grouping_information_alpha_string_capability_maximum_records;
    guint8 arg_grouping_information_alpha_string_capability_used_records;
    guint8 arg_grouping_information_alpha_string_capability_maximum_string_length;

    /* Additional Number Alpha String Capability */
    gboolean arg_additional_number_alpha_string_capability_set;
    guint8 arg_additional_number_alpha_string_capability_maximum_records;
    guint8 arg_additional_number_alpha_string_capability_used_records;
    guint8 arg_additional_number_alpha_string_capability_maximum_string_length;
};

#define QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_CAPABILITY_BASIC_INFORMATION 0x10
#define QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_GROUP_CAPABILITY 0x11
#define QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_CAPABILITY 0x12
#define QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_EMAIL_CAPABILITY 0x13
#define QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_SECOND_NAME_CAPABILITY 0x14
#define QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_HIDDEN_RECORDS_CAPABILITY 0x15
#define QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_GROUPING_INFORMATION_ALPHA_STRING_CAPABILITY 0x16
#define QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_ALPHA_STRING_CAPABILITY 0x17

gboolean
qmi_message_pbm_get_capabilities_output_get_result (
    QmiMessagePbmGetCapabilitiesOutput *self,
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
qmi_message_pbm_get_capabilities_output_get_capability_basic_information (
    QmiMessagePbmGetCapabilitiesOutput *self,
    QmiPbmSessionType *value_capability_basic_information_session_type,
    QmiPbmPhonebookType *value_capability_basic_information_phonebook_type,
    guint16 *value_capability_basic_information_used_records,
    guint16 *value_capability_basic_information_maximum_records,
    guint8 *value_capability_basic_information_maximum_number_length,
    guint8 *value_capability_basic_information_maximum_name_length,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_capability_basic_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Capability Basic Information' was not found in the message");
        return FALSE;
    }

    if (value_capability_basic_information_session_type)
        *value_capability_basic_information_session_type = (QmiPbmSessionType)(self->arg_capability_basic_information_session_type);
    if (value_capability_basic_information_phonebook_type)
        *value_capability_basic_information_phonebook_type = (QmiPbmPhonebookType)(self->arg_capability_basic_information_phonebook_type);
    if (value_capability_basic_information_used_records)
        *value_capability_basic_information_used_records = self->arg_capability_basic_information_used_records;
    if (value_capability_basic_information_maximum_records)
        *value_capability_basic_information_maximum_records = self->arg_capability_basic_information_maximum_records;
    if (value_capability_basic_information_maximum_number_length)
        *value_capability_basic_information_maximum_number_length = self->arg_capability_basic_information_maximum_number_length;
    if (value_capability_basic_information_maximum_name_length)
        *value_capability_basic_information_maximum_name_length = self->arg_capability_basic_information_maximum_name_length;

    return TRUE;
}

gboolean
qmi_message_pbm_get_capabilities_output_get_group_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_group_capability_maximum_groups,
    guint8 *value_group_capability_maximum_group_tag_length,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_group_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Group Capability' was not found in the message");
        return FALSE;
    }

    if (value_group_capability_maximum_groups)
        *value_group_capability_maximum_groups = self->arg_group_capability_maximum_groups;
    if (value_group_capability_maximum_group_tag_length)
        *value_group_capability_maximum_group_tag_length = self->arg_group_capability_maximum_group_tag_length;

    return TRUE;
}

gboolean
qmi_message_pbm_get_capabilities_output_get_additional_number_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_additional_number_capability_maximum_additional_numbers,
    guint8 *value_additional_number_capability_maximum_additional_number_length,
    guint8 *value_additional_number_capability_maximum_additional_number_tag_length,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_additional_number_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Additional Number Capability' was not found in the message");
        return FALSE;
    }

    if (value_additional_number_capability_maximum_additional_numbers)
        *value_additional_number_capability_maximum_additional_numbers = self->arg_additional_number_capability_maximum_additional_numbers;
    if (value_additional_number_capability_maximum_additional_number_length)
        *value_additional_number_capability_maximum_additional_number_length = self->arg_additional_number_capability_maximum_additional_number_length;
    if (value_additional_number_capability_maximum_additional_number_tag_length)
        *value_additional_number_capability_maximum_additional_number_tag_length = self->arg_additional_number_capability_maximum_additional_number_tag_length;

    return TRUE;
}

gboolean
qmi_message_pbm_get_capabilities_output_get_email_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_email_capability_maximum_emails,
    guint8 *value_email_capability_maximum_email_address_length,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_email_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Email Capability' was not found in the message");
        return FALSE;
    }

    if (value_email_capability_maximum_emails)
        *value_email_capability_maximum_emails = self->arg_email_capability_maximum_emails;
    if (value_email_capability_maximum_email_address_length)
        *value_email_capability_maximum_email_address_length = self->arg_email_capability_maximum_email_address_length;

    return TRUE;
}

gboolean
qmi_message_pbm_get_capabilities_output_get_second_name_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_second_name_capability_maximum_second_name_length,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_second_name_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Second Name Capability' was not found in the message");
        return FALSE;
    }

    if (value_second_name_capability_maximum_second_name_length)
        *value_second_name_capability_maximum_second_name_length = self->arg_second_name_capability_maximum_second_name_length;

    return TRUE;
}

gboolean
qmi_message_pbm_get_capabilities_output_get_hidden_records_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    gboolean *value_hidden_records_capability_supported,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_hidden_records_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Hidden Records Capability' was not found in the message");
        return FALSE;
    }

    if (value_hidden_records_capability_supported)
        *value_hidden_records_capability_supported = (gboolean)(self->arg_hidden_records_capability_supported);

    return TRUE;
}

gboolean
qmi_message_pbm_get_capabilities_output_get_grouping_information_alpha_string_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_grouping_information_alpha_string_capability_maximum_records,
    guint8 *value_grouping_information_alpha_string_capability_used_records,
    guint8 *value_grouping_information_alpha_string_capability_maximum_string_length,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_grouping_information_alpha_string_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Grouping Information Alpha String Capability' was not found in the message");
        return FALSE;
    }

    if (value_grouping_information_alpha_string_capability_maximum_records)
        *value_grouping_information_alpha_string_capability_maximum_records = self->arg_grouping_information_alpha_string_capability_maximum_records;
    if (value_grouping_information_alpha_string_capability_used_records)
        *value_grouping_information_alpha_string_capability_used_records = self->arg_grouping_information_alpha_string_capability_used_records;
    if (value_grouping_information_alpha_string_capability_maximum_string_length)
        *value_grouping_information_alpha_string_capability_maximum_string_length = self->arg_grouping_information_alpha_string_capability_maximum_string_length;

    return TRUE;
}

gboolean
qmi_message_pbm_get_capabilities_output_get_additional_number_alpha_string_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_additional_number_alpha_string_capability_maximum_records,
    guint8 *value_additional_number_alpha_string_capability_used_records,
    guint8 *value_additional_number_alpha_string_capability_maximum_string_length,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_additional_number_alpha_string_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Additional Number Alpha String Capability' was not found in the message");
        return FALSE;
    }

    if (value_additional_number_alpha_string_capability_maximum_records)
        *value_additional_number_alpha_string_capability_maximum_records = self->arg_additional_number_alpha_string_capability_maximum_records;
    if (value_additional_number_alpha_string_capability_used_records)
        *value_additional_number_alpha_string_capability_used_records = self->arg_additional_number_alpha_string_capability_used_records;
    if (value_additional_number_alpha_string_capability_maximum_string_length)
        *value_additional_number_alpha_string_capability_maximum_string_length = self->arg_additional_number_alpha_string_capability_maximum_string_length;

    return TRUE;
}

GType
qmi_message_pbm_get_capabilities_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePbmGetCapabilitiesOutput"),
                                          (GBoxedCopyFunc) qmi_message_pbm_get_capabilities_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pbm_get_capabilities_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePbmGetCapabilitiesOutput *
qmi_message_pbm_get_capabilities_output_ref (QmiMessagePbmGetCapabilitiesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pbm_get_capabilities_output_unref (QmiMessagePbmGetCapabilitiesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePbmGetCapabilitiesOutput, self);
    }
}

static gchar *
qmi_message_pbm_get_capabilities_input_phonebook_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_INPUT_TLV_PHONEBOOK_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " session_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PBM_SESSION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pbm_session_type_get_string ((QmiPbmSessionType)tmp));
#elif defined  __QMI_PBM_SESSION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pbm_session_type_build_string_from_mask ((QmiPbmSessionType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPbmSessionType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " phonebook_type = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PBM_PHONEBOOK_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pbm_phonebook_type_get_string ((QmiPbmPhonebookType)tmp));
#elif defined  __QMI_PBM_PHONEBOOK_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pbm_phonebook_type_build_string_from_mask ((QmiPbmPhonebookType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPbmPhonebookType
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
qmi_message_pbm_get_capabilities_output_capability_basic_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_CAPABILITY_BASIC_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " session_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PBM_SESSION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pbm_session_type_get_string ((QmiPbmSessionType)tmp));
#elif defined  __QMI_PBM_SESSION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pbm_session_type_build_string_from_mask ((QmiPbmSessionType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPbmSessionType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " phonebook_type = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PBM_PHONEBOOK_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pbm_phonebook_type_get_string ((QmiPbmPhonebookType)tmp));
#elif defined  __QMI_PBM_PHONEBOOK_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pbm_phonebook_type_build_string_from_mask ((QmiPbmPhonebookType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPbmPhonebookType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " used_records = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " maximum_records = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " maximum_number_length = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " maximum_name_length = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
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
qmi_message_pbm_get_capabilities_output_group_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_GROUP_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " maximum_groups = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " maximum_group_tag_length = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
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
qmi_message_pbm_get_capabilities_output_additional_number_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " maximum_additional_numbers = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " maximum_additional_number_length = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " maximum_additional_number_tag_length = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
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
qmi_message_pbm_get_capabilities_output_email_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_EMAIL_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " maximum_emails = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " maximum_email_address_length = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
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
qmi_message_pbm_get_capabilities_output_second_name_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_SECOND_NAME_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " maximum_second_name_length = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
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
qmi_message_pbm_get_capabilities_output_hidden_records_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_HIDDEN_RECORDS_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " supported = '");

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
qmi_message_pbm_get_capabilities_output_grouping_information_alpha_string_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_GROUPING_INFORMATION_ALPHA_STRING_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " maximum_records = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " used_records = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " maximum_string_length = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
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
qmi_message_pbm_get_capabilities_output_additional_number_alpha_string_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_ALPHA_STRING_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " maximum_records = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " used_records = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " maximum_string_length = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
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

struct message_get_capabilities_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_capabilities_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_capabilities_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PBM_GET_CAPABILITIES_INPUT_TLV_PHONEBOOK_INFORMATION:
            tlv_type_str = "Phonebook Information";
            translated_value = qmi_message_pbm_get_capabilities_input_phonebook_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_CAPABILITY_BASIC_INFORMATION:
            tlv_type_str = "Capability Basic Information";
            translated_value = qmi_message_pbm_get_capabilities_output_capability_basic_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_GROUP_CAPABILITY:
            tlv_type_str = "Group Capability";
            translated_value = qmi_message_pbm_get_capabilities_output_group_capability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_CAPABILITY:
            tlv_type_str = "Additional Number Capability";
            translated_value = qmi_message_pbm_get_capabilities_output_additional_number_capability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_EMAIL_CAPABILITY:
            tlv_type_str = "Email Capability";
            translated_value = qmi_message_pbm_get_capabilities_output_email_capability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_SECOND_NAME_CAPABILITY:
            tlv_type_str = "Second Name Capability";
            translated_value = qmi_message_pbm_get_capabilities_output_second_name_capability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_HIDDEN_RECORDS_CAPABILITY:
            tlv_type_str = "Hidden Records Capability";
            translated_value = qmi_message_pbm_get_capabilities_output_hidden_records_capability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_GROUPING_INFORMATION_ALPHA_STRING_CAPABILITY:
            tlv_type_str = "Grouping Information Alpha String Capability";
            translated_value = qmi_message_pbm_get_capabilities_output_grouping_information_alpha_string_capability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_ALPHA_STRING_CAPABILITY:
            tlv_type_str = "Additional Number Alpha String Capability";
            translated_value = qmi_message_pbm_get_capabilities_output_additional_number_alpha_string_capability_get_printable (
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
message_get_capabilities_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Capabilities\" (0x0002)\n",
                            line_prefix);

    {
        struct message_get_capabilities_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_capabilities_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePbmGetCapabilitiesOutput *
qmi_message_pbm_get_capabilities_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePbmGetCapabilitiesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PBM_GET_CAPABILITIES);

    self = g_slice_new0 (QmiMessagePbmGetCapabilitiesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pbm_get_capabilities_output_unref (self);
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
                qmi_message_pbm_get_capabilities_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_CAPABILITY_BASIC_INFORMATION, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_capabilities_output_capability_basic_information_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_pbm_get_capabilities_output_capability_basic_information_out;
                self->arg_capability_basic_information_session_type = (QmiPbmSessionType)tmp;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_pbm_get_capabilities_output_capability_basic_information_out;
                self->arg_capability_basic_information_phonebook_type = (QmiPbmPhonebookType)tmp;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_capability_basic_information_used_records), NULL))
                goto qmi_message_pbm_get_capabilities_output_capability_basic_information_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_capability_basic_information_maximum_records), NULL))
                goto qmi_message_pbm_get_capabilities_output_capability_basic_information_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_capability_basic_information_maximum_number_length), NULL))
                goto qmi_message_pbm_get_capabilities_output_capability_basic_information_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_capability_basic_information_maximum_name_length), NULL))
                goto qmi_message_pbm_get_capabilities_output_capability_basic_information_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Capability Basic Information' TLV", offset);
            }

            self->arg_capability_basic_information_set = TRUE;

qmi_message_pbm_get_capabilities_output_capability_basic_information_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_GROUP_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_capabilities_output_group_capability_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_group_capability_maximum_groups), NULL))
                goto qmi_message_pbm_get_capabilities_output_group_capability_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_group_capability_maximum_group_tag_length), NULL))
                goto qmi_message_pbm_get_capabilities_output_group_capability_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Group Capability' TLV", offset);
            }

            self->arg_group_capability_set = TRUE;

qmi_message_pbm_get_capabilities_output_group_capability_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_capabilities_output_additional_number_capability_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_additional_number_capability_maximum_additional_numbers), NULL))
                goto qmi_message_pbm_get_capabilities_output_additional_number_capability_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_additional_number_capability_maximum_additional_number_length), NULL))
                goto qmi_message_pbm_get_capabilities_output_additional_number_capability_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_additional_number_capability_maximum_additional_number_tag_length), NULL))
                goto qmi_message_pbm_get_capabilities_output_additional_number_capability_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Additional Number Capability' TLV", offset);
            }

            self->arg_additional_number_capability_set = TRUE;

qmi_message_pbm_get_capabilities_output_additional_number_capability_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_EMAIL_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_capabilities_output_email_capability_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_email_capability_maximum_emails), NULL))
                goto qmi_message_pbm_get_capabilities_output_email_capability_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_email_capability_maximum_email_address_length), NULL))
                goto qmi_message_pbm_get_capabilities_output_email_capability_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Email Capability' TLV", offset);
            }

            self->arg_email_capability_set = TRUE;

qmi_message_pbm_get_capabilities_output_email_capability_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_SECOND_NAME_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_capabilities_output_second_name_capability_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_second_name_capability_maximum_second_name_length), NULL))
                goto qmi_message_pbm_get_capabilities_output_second_name_capability_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Second Name Capability' TLV", offset);
            }

            self->arg_second_name_capability_set = TRUE;

qmi_message_pbm_get_capabilities_output_second_name_capability_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_HIDDEN_RECORDS_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_capabilities_output_hidden_records_capability_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_pbm_get_capabilities_output_hidden_records_capability_out;
                self->arg_hidden_records_capability_supported = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Hidden Records Capability' TLV", offset);
            }

            self->arg_hidden_records_capability_set = TRUE;

qmi_message_pbm_get_capabilities_output_hidden_records_capability_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_GROUPING_INFORMATION_ALPHA_STRING_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_capabilities_output_grouping_information_alpha_string_capability_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_grouping_information_alpha_string_capability_maximum_records), NULL))
                goto qmi_message_pbm_get_capabilities_output_grouping_information_alpha_string_capability_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_grouping_information_alpha_string_capability_used_records), NULL))
                goto qmi_message_pbm_get_capabilities_output_grouping_information_alpha_string_capability_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_grouping_information_alpha_string_capability_maximum_string_length), NULL))
                goto qmi_message_pbm_get_capabilities_output_grouping_information_alpha_string_capability_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Grouping Information Alpha String Capability' TLV", offset);
            }

            self->arg_grouping_information_alpha_string_capability_set = TRUE;

qmi_message_pbm_get_capabilities_output_grouping_information_alpha_string_capability_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_ALPHA_STRING_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_capabilities_output_additional_number_alpha_string_capability_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_additional_number_alpha_string_capability_maximum_records), NULL))
                goto qmi_message_pbm_get_capabilities_output_additional_number_alpha_string_capability_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_additional_number_alpha_string_capability_used_records), NULL))
                goto qmi_message_pbm_get_capabilities_output_additional_number_alpha_string_capability_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_additional_number_alpha_string_capability_maximum_string_length), NULL))
                goto qmi_message_pbm_get_capabilities_output_additional_number_alpha_string_capability_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Additional Number Alpha String Capability' TLV", offset);
            }

            self->arg_additional_number_alpha_string_capability_set = TRUE;

qmi_message_pbm_get_capabilities_output_additional_number_alpha_string_capability_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PBM Get All Capabilities */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_pbm_get_all_capabilities_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PBM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES);

    return g_steal_pointer (&self);
}

/* --- Output -- */

static void
__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_clear (QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement *value)
{
    g_clear_pointer (&value->phonebooks, (GDestroyNotify)g_array_unref);
}

static void
__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_phonebooks_element_free (QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement *value)
{
    g_slice_free (QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement, value);
}

static QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement *
__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_phonebooks_element_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement);
}

static QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement *
__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_phonebooks_element_copy (const QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement *value)
{
    QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement *copy;

    copy = __qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_phonebooks_element_new ();
    copy->phonebook_type = value->phonebook_type;
    copy->used_records = value->used_records;
    copy->maximum_records = value->maximum_records;
    copy->maximum_number_length = value->maximum_number_length;
    copy->maximum_name_length = value->maximum_name_length;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement, qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_phonebooks_element, (GBoxedCopyFunc)__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_phonebooks_element_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_phonebooks_element_free)

static void
__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_gir_free (QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir *value)
{
    g_clear_pointer (&value->phonebooks, (GDestroyNotify)g_ptr_array_unref);
    g_slice_free (QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir, value);
}

static QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir *
__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_gir_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir);
}

static QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir *
__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_gir_copy (const QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir *value)
{
    QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir *copy;

    copy = __qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_gir_new ();
    copy->session_type = value->session_type;
    copy->phonebooks = g_ptr_array_ref (value->phonebooks);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir, qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_gir, (GBoxedCopyFunc)__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_gir_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_gir_free)

static void
__qmi_message_pbm_get_all_capabilities_output_group_capability_element_free (QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement *value)
{
    g_slice_free (QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement, value);
}

static QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_group_capability_element_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement);
}

static QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_group_capability_element_copy (const QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement *value)
{
    QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement *copy;

    copy = __qmi_message_pbm_get_all_capabilities_output_group_capability_element_new ();
    copy->session_type = value->session_type;
    copy->maximum_groups = value->maximum_groups;
    copy->maximum_group_tag_length = value->maximum_group_tag_length;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement, qmi_message_pbm_get_all_capabilities_output_group_capability_element, (GBoxedCopyFunc)__qmi_message_pbm_get_all_capabilities_output_group_capability_element_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_all_capabilities_output_group_capability_element_free)

static void
__qmi_message_pbm_get_all_capabilities_output_additional_number_capability_element_free (QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement *value)
{
    g_slice_free (QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement, value);
}

static QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_additional_number_capability_element_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement);
}

static QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_additional_number_capability_element_copy (const QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement *value)
{
    QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement *copy;

    copy = __qmi_message_pbm_get_all_capabilities_output_additional_number_capability_element_new ();
    copy->session_type = value->session_type;
    copy->maximum_additional_numbers = value->maximum_additional_numbers;
    copy->maximum_additional_number_length = value->maximum_additional_number_length;
    copy->maximum_additional_number_tag_length = value->maximum_additional_number_tag_length;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement, qmi_message_pbm_get_all_capabilities_output_additional_number_capability_element, (GBoxedCopyFunc)__qmi_message_pbm_get_all_capabilities_output_additional_number_capability_element_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_all_capabilities_output_additional_number_capability_element_free)

static void
__qmi_message_pbm_get_all_capabilities_output_email_capability_element_free (QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement *value)
{
    g_slice_free (QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement, value);
}

static QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_email_capability_element_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement);
}

static QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_email_capability_element_copy (const QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement *value)
{
    QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement *copy;

    copy = __qmi_message_pbm_get_all_capabilities_output_email_capability_element_new ();
    copy->session_type = value->session_type;
    copy->maximum_emails = value->maximum_emails;
    copy->maximum_email_address_length = value->maximum_email_address_length;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement, qmi_message_pbm_get_all_capabilities_output_email_capability_element, (GBoxedCopyFunc)__qmi_message_pbm_get_all_capabilities_output_email_capability_element_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_all_capabilities_output_email_capability_element_free)

static void
__qmi_message_pbm_get_all_capabilities_output_second_name_capability_element_free (QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement *value)
{
    g_slice_free (QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement, value);
}

static QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_second_name_capability_element_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement);
}

static QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_second_name_capability_element_copy (const QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement *value)
{
    QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement *copy;

    copy = __qmi_message_pbm_get_all_capabilities_output_second_name_capability_element_new ();
    copy->session_type = value->session_type;
    copy->maximum_second_name_length = value->maximum_second_name_length;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement, qmi_message_pbm_get_all_capabilities_output_second_name_capability_element, (GBoxedCopyFunc)__qmi_message_pbm_get_all_capabilities_output_second_name_capability_element_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_all_capabilities_output_second_name_capability_element_free)

static void
__qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_element_free (QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement *value)
{
    g_slice_free (QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement, value);
}

static QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_element_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement);
}

static QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_element_copy (const QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement *value)
{
    QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement *copy;

    copy = __qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_element_new ();
    copy->session_type = value->session_type;
    copy->supported = value->supported;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement, qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_element, (GBoxedCopyFunc)__qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_element_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_element_free)

static void
__qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_element_free (QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement *value)
{
    g_slice_free (QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement, value);
}

static QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_element_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement);
}

static QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_element_copy (const QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement *value)
{
    QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement *copy;

    copy = __qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_element_new ();
    copy->session_type = value->session_type;
    copy->maximum_records = value->maximum_records;
    copy->used_records = value->used_records;
    copy->maximum_string_length = value->maximum_string_length;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement, qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_element, (GBoxedCopyFunc)__qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_element_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_element_free)

static void
__qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_element_free (QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement *value)
{
    g_slice_free (QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement, value);
}

static QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_element_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement);
}

static QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement *
__qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_element_copy (const QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement *value)
{
    QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement *copy;

    copy = __qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_element_new ();
    copy->session_type = value->session_type;
    copy->maximum_records = value->maximum_records;
    copy->used_records = value->used_records;
    copy->maximum_string_length = value->maximum_string_length;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement, qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_element, (GBoxedCopyFunc)__qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_element_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_element_free)

struct _QmiMessagePbmGetAllCapabilitiesOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Capability Basic Information */
    gboolean arg_capability_basic_information_set;
    GArray *arg_capability_basic_information;
    GPtrArray *arg_capability_basic_information_ptr;

    /* Group Capability */
    gboolean arg_group_capability_set;
    GArray *arg_group_capability;
    GPtrArray *arg_group_capability_ptr;

    /* Additional Number Capability */
    gboolean arg_additional_number_capability_set;
    GArray *arg_additional_number_capability;
    GPtrArray *arg_additional_number_capability_ptr;

    /* Email Capability */
    gboolean arg_email_capability_set;
    GArray *arg_email_capability;
    GPtrArray *arg_email_capability_ptr;

    /* Second Name Capability */
    gboolean arg_second_name_capability_set;
    GArray *arg_second_name_capability;
    GPtrArray *arg_second_name_capability_ptr;

    /* Hidden Records Capability */
    gboolean arg_hidden_records_capability_set;
    GArray *arg_hidden_records_capability;
    GPtrArray *arg_hidden_records_capability_ptr;

    /* Grouping Information Alpha String Capability */
    gboolean arg_grouping_information_alpha_string_capability_set;
    GArray *arg_grouping_information_alpha_string_capability;
    GPtrArray *arg_grouping_information_alpha_string_capability_ptr;

    /* Additional Number Alpha String Capability */
    gboolean arg_additional_number_alpha_string_capability_set;
    GArray *arg_additional_number_alpha_string_capability;
    GPtrArray *arg_additional_number_alpha_string_capability_ptr;
};

#define QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_CAPABILITY_BASIC_INFORMATION 0x10
#define QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_GROUP_CAPABILITY 0x11
#define QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_CAPABILITY 0x12
#define QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_EMAIL_CAPABILITY 0x13
#define QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_SECOND_NAME_CAPABILITY 0x14
#define QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_HIDDEN_RECORDS_CAPABILITY 0x15
#define QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_GROUPING_INFORMATION_ALPHA_STRING_CAPABILITY 0x16
#define QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_ALPHA_STRING_CAPABILITY 0x17

gboolean
qmi_message_pbm_get_all_capabilities_output_get_result (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
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
qmi_message_pbm_get_all_capabilities_output_get_capability_basic_information (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_capability_basic_information,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_capability_basic_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Capability Basic Information' was not found in the message");
        return FALSE;
    }

    if (value_capability_basic_information)
        *value_capability_basic_information = self->arg_capability_basic_information;

    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_capability_basic_information_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_capability_basic_information_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_capability_basic_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Capability Basic Information' was not found in the message");
        return FALSE;
    }

    if (value_capability_basic_information_ptr) {
        if (!self->arg_capability_basic_information_ptr) {
            {
                guint capability_basic_information_i;

                self->arg_capability_basic_information_ptr = g_ptr_array_new_full (self->arg_capability_basic_information->len, (GDestroyNotify)__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_gir_free);
                for (capability_basic_information_i = 0; capability_basic_information_i < self->arg_capability_basic_information->len; capability_basic_information_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement *capability_basic_information_aux_from;
                    QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir *capability_basic_information_aux_to;

                    capability_basic_information_aux_from = &g_array_index (self->arg_capability_basic_information, QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement, capability_basic_information_i);

                    capability_basic_information_aux_to = __qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_gir_new ();
                    capability_basic_information_aux_to->session_type = (*capability_basic_information_aux_from).session_type;
                    {
                        guint phonebooks_i;

                        capability_basic_information_aux_to->phonebooks = g_ptr_array_new_full ((*capability_basic_information_aux_from).phonebooks->len, (GDestroyNotify)__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_phonebooks_element_free);
                        for (phonebooks_i = 0; phonebooks_i < (*capability_basic_information_aux_from).phonebooks->len; phonebooks_i++) {
                            QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement *phonebooks_aux_from;
                            QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement *phonebooks_aux_to;

                            phonebooks_aux_from = &g_array_index ((*capability_basic_information_aux_from).phonebooks, QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement, phonebooks_i);

                            phonebooks_aux_to = __qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_phonebooks_element_new ();
                            phonebooks_aux_to->phonebook_type = (*phonebooks_aux_from).phonebook_type;
                            phonebooks_aux_to->used_records = (*phonebooks_aux_from).used_records;
                            phonebooks_aux_to->maximum_records = (*phonebooks_aux_from).maximum_records;
                            phonebooks_aux_to->maximum_number_length = (*phonebooks_aux_from).maximum_number_length;
                            phonebooks_aux_to->maximum_name_length = (*phonebooks_aux_from).maximum_name_length;

                            g_ptr_array_add (capability_basic_information_aux_to->phonebooks, phonebooks_aux_to);
                        }
                    }

                    g_ptr_array_add (self->arg_capability_basic_information_ptr, capability_basic_information_aux_to);
                }
            }
        }
        *value_capability_basic_information_ptr = self->arg_capability_basic_information_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_group_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_group_capability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_group_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Group Capability' was not found in the message");
        return FALSE;
    }

    if (value_group_capability)
        *value_group_capability = self->arg_group_capability;

    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_group_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_group_capability_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_group_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Group Capability' was not found in the message");
        return FALSE;
    }

    if (value_group_capability_ptr) {
        if (!self->arg_group_capability_ptr) {
            {
                guint group_capability_i;

                self->arg_group_capability_ptr = g_ptr_array_new_full (self->arg_group_capability->len, (GDestroyNotify)__qmi_message_pbm_get_all_capabilities_output_group_capability_element_free);
                for (group_capability_i = 0; group_capability_i < self->arg_group_capability->len; group_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement *group_capability_aux_from;
                    QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement *group_capability_aux_to;

                    group_capability_aux_from = &g_array_index (self->arg_group_capability, QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement, group_capability_i);

                    group_capability_aux_to = __qmi_message_pbm_get_all_capabilities_output_group_capability_element_new ();
                    group_capability_aux_to->session_type = (*group_capability_aux_from).session_type;
                    group_capability_aux_to->maximum_groups = (*group_capability_aux_from).maximum_groups;
                    group_capability_aux_to->maximum_group_tag_length = (*group_capability_aux_from).maximum_group_tag_length;

                    g_ptr_array_add (self->arg_group_capability_ptr, group_capability_aux_to);
                }
            }
        }
        *value_group_capability_ptr = self->arg_group_capability_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_additional_number_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_additional_number_capability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_additional_number_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Additional Number Capability' was not found in the message");
        return FALSE;
    }

    if (value_additional_number_capability)
        *value_additional_number_capability = self->arg_additional_number_capability;

    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_additional_number_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_additional_number_capability_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_additional_number_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Additional Number Capability' was not found in the message");
        return FALSE;
    }

    if (value_additional_number_capability_ptr) {
        if (!self->arg_additional_number_capability_ptr) {
            {
                guint additional_number_capability_i;

                self->arg_additional_number_capability_ptr = g_ptr_array_new_full (self->arg_additional_number_capability->len, (GDestroyNotify)__qmi_message_pbm_get_all_capabilities_output_additional_number_capability_element_free);
                for (additional_number_capability_i = 0; additional_number_capability_i < self->arg_additional_number_capability->len; additional_number_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement *additional_number_capability_aux_from;
                    QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement *additional_number_capability_aux_to;

                    additional_number_capability_aux_from = &g_array_index (self->arg_additional_number_capability, QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement, additional_number_capability_i);

                    additional_number_capability_aux_to = __qmi_message_pbm_get_all_capabilities_output_additional_number_capability_element_new ();
                    additional_number_capability_aux_to->session_type = (*additional_number_capability_aux_from).session_type;
                    additional_number_capability_aux_to->maximum_additional_numbers = (*additional_number_capability_aux_from).maximum_additional_numbers;
                    additional_number_capability_aux_to->maximum_additional_number_length = (*additional_number_capability_aux_from).maximum_additional_number_length;
                    additional_number_capability_aux_to->maximum_additional_number_tag_length = (*additional_number_capability_aux_from).maximum_additional_number_tag_length;

                    g_ptr_array_add (self->arg_additional_number_capability_ptr, additional_number_capability_aux_to);
                }
            }
        }
        *value_additional_number_capability_ptr = self->arg_additional_number_capability_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_email_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_email_capability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_email_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Email Capability' was not found in the message");
        return FALSE;
    }

    if (value_email_capability)
        *value_email_capability = self->arg_email_capability;

    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_email_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_email_capability_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_email_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Email Capability' was not found in the message");
        return FALSE;
    }

    if (value_email_capability_ptr) {
        if (!self->arg_email_capability_ptr) {
            {
                guint email_capability_i;

                self->arg_email_capability_ptr = g_ptr_array_new_full (self->arg_email_capability->len, (GDestroyNotify)__qmi_message_pbm_get_all_capabilities_output_email_capability_element_free);
                for (email_capability_i = 0; email_capability_i < self->arg_email_capability->len; email_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement *email_capability_aux_from;
                    QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement *email_capability_aux_to;

                    email_capability_aux_from = &g_array_index (self->arg_email_capability, QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement, email_capability_i);

                    email_capability_aux_to = __qmi_message_pbm_get_all_capabilities_output_email_capability_element_new ();
                    email_capability_aux_to->session_type = (*email_capability_aux_from).session_type;
                    email_capability_aux_to->maximum_emails = (*email_capability_aux_from).maximum_emails;
                    email_capability_aux_to->maximum_email_address_length = (*email_capability_aux_from).maximum_email_address_length;

                    g_ptr_array_add (self->arg_email_capability_ptr, email_capability_aux_to);
                }
            }
        }
        *value_email_capability_ptr = self->arg_email_capability_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_second_name_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_second_name_capability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_second_name_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Second Name Capability' was not found in the message");
        return FALSE;
    }

    if (value_second_name_capability)
        *value_second_name_capability = self->arg_second_name_capability;

    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_second_name_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_second_name_capability_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_second_name_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Second Name Capability' was not found in the message");
        return FALSE;
    }

    if (value_second_name_capability_ptr) {
        if (!self->arg_second_name_capability_ptr) {
            {
                guint second_name_capability_i;

                self->arg_second_name_capability_ptr = g_ptr_array_new_full (self->arg_second_name_capability->len, (GDestroyNotify)__qmi_message_pbm_get_all_capabilities_output_second_name_capability_element_free);
                for (second_name_capability_i = 0; second_name_capability_i < self->arg_second_name_capability->len; second_name_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement *second_name_capability_aux_from;
                    QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement *second_name_capability_aux_to;

                    second_name_capability_aux_from = &g_array_index (self->arg_second_name_capability, QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement, second_name_capability_i);

                    second_name_capability_aux_to = __qmi_message_pbm_get_all_capabilities_output_second_name_capability_element_new ();
                    second_name_capability_aux_to->session_type = (*second_name_capability_aux_from).session_type;
                    second_name_capability_aux_to->maximum_second_name_length = (*second_name_capability_aux_from).maximum_second_name_length;

                    g_ptr_array_add (self->arg_second_name_capability_ptr, second_name_capability_aux_to);
                }
            }
        }
        *value_second_name_capability_ptr = self->arg_second_name_capability_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_hidden_records_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_hidden_records_capability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_hidden_records_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Hidden Records Capability' was not found in the message");
        return FALSE;
    }

    if (value_hidden_records_capability)
        *value_hidden_records_capability = self->arg_hidden_records_capability;

    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_hidden_records_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_hidden_records_capability_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_hidden_records_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Hidden Records Capability' was not found in the message");
        return FALSE;
    }

    if (value_hidden_records_capability_ptr) {
        if (!self->arg_hidden_records_capability_ptr) {
            {
                guint hidden_records_capability_i;

                self->arg_hidden_records_capability_ptr = g_ptr_array_new_full (self->arg_hidden_records_capability->len, (GDestroyNotify)__qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_element_free);
                for (hidden_records_capability_i = 0; hidden_records_capability_i < self->arg_hidden_records_capability->len; hidden_records_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement *hidden_records_capability_aux_from;
                    QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement *hidden_records_capability_aux_to;

                    hidden_records_capability_aux_from = &g_array_index (self->arg_hidden_records_capability, QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement, hidden_records_capability_i);

                    hidden_records_capability_aux_to = __qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_element_new ();
                    hidden_records_capability_aux_to->session_type = (*hidden_records_capability_aux_from).session_type;
                    hidden_records_capability_aux_to->supported = (*hidden_records_capability_aux_from).supported;

                    g_ptr_array_add (self->arg_hidden_records_capability_ptr, hidden_records_capability_aux_to);
                }
            }
        }
        *value_hidden_records_capability_ptr = self->arg_hidden_records_capability_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_grouping_information_alpha_string_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_grouping_information_alpha_string_capability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_grouping_information_alpha_string_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Grouping Information Alpha String Capability' was not found in the message");
        return FALSE;
    }

    if (value_grouping_information_alpha_string_capability)
        *value_grouping_information_alpha_string_capability = self->arg_grouping_information_alpha_string_capability;

    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_grouping_information_alpha_string_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_grouping_information_alpha_string_capability_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_grouping_information_alpha_string_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Grouping Information Alpha String Capability' was not found in the message");
        return FALSE;
    }

    if (value_grouping_information_alpha_string_capability_ptr) {
        if (!self->arg_grouping_information_alpha_string_capability_ptr) {
            {
                guint grouping_information_alpha_string_capability_i;

                self->arg_grouping_information_alpha_string_capability_ptr = g_ptr_array_new_full (self->arg_grouping_information_alpha_string_capability->len, (GDestroyNotify)__qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_element_free);
                for (grouping_information_alpha_string_capability_i = 0; grouping_information_alpha_string_capability_i < self->arg_grouping_information_alpha_string_capability->len; grouping_information_alpha_string_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement *grouping_information_alpha_string_capability_aux_from;
                    QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement *grouping_information_alpha_string_capability_aux_to;

                    grouping_information_alpha_string_capability_aux_from = &g_array_index (self->arg_grouping_information_alpha_string_capability, QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement, grouping_information_alpha_string_capability_i);

                    grouping_information_alpha_string_capability_aux_to = __qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_element_new ();
                    grouping_information_alpha_string_capability_aux_to->session_type = (*grouping_information_alpha_string_capability_aux_from).session_type;
                    grouping_information_alpha_string_capability_aux_to->maximum_records = (*grouping_information_alpha_string_capability_aux_from).maximum_records;
                    grouping_information_alpha_string_capability_aux_to->used_records = (*grouping_information_alpha_string_capability_aux_from).used_records;
                    grouping_information_alpha_string_capability_aux_to->maximum_string_length = (*grouping_information_alpha_string_capability_aux_from).maximum_string_length;

                    g_ptr_array_add (self->arg_grouping_information_alpha_string_capability_ptr, grouping_information_alpha_string_capability_aux_to);
                }
            }
        }
        *value_grouping_information_alpha_string_capability_ptr = self->arg_grouping_information_alpha_string_capability_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_additional_number_alpha_string_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_additional_number_alpha_string_capability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_additional_number_alpha_string_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Additional Number Alpha String Capability' was not found in the message");
        return FALSE;
    }

    if (value_additional_number_alpha_string_capability)
        *value_additional_number_alpha_string_capability = self->arg_additional_number_alpha_string_capability;

    return TRUE;
}

gboolean
qmi_message_pbm_get_all_capabilities_output_get_additional_number_alpha_string_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_additional_number_alpha_string_capability_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_additional_number_alpha_string_capability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Additional Number Alpha String Capability' was not found in the message");
        return FALSE;
    }

    if (value_additional_number_alpha_string_capability_ptr) {
        if (!self->arg_additional_number_alpha_string_capability_ptr) {
            {
                guint additional_number_alpha_string_capability_i;

                self->arg_additional_number_alpha_string_capability_ptr = g_ptr_array_new_full (self->arg_additional_number_alpha_string_capability->len, (GDestroyNotify)__qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_element_free);
                for (additional_number_alpha_string_capability_i = 0; additional_number_alpha_string_capability_i < self->arg_additional_number_alpha_string_capability->len; additional_number_alpha_string_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement *additional_number_alpha_string_capability_aux_from;
                    QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement *additional_number_alpha_string_capability_aux_to;

                    additional_number_alpha_string_capability_aux_from = &g_array_index (self->arg_additional_number_alpha_string_capability, QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement, additional_number_alpha_string_capability_i);

                    additional_number_alpha_string_capability_aux_to = __qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_element_new ();
                    additional_number_alpha_string_capability_aux_to->session_type = (*additional_number_alpha_string_capability_aux_from).session_type;
                    additional_number_alpha_string_capability_aux_to->maximum_records = (*additional_number_alpha_string_capability_aux_from).maximum_records;
                    additional_number_alpha_string_capability_aux_to->used_records = (*additional_number_alpha_string_capability_aux_from).used_records;
                    additional_number_alpha_string_capability_aux_to->maximum_string_length = (*additional_number_alpha_string_capability_aux_from).maximum_string_length;

                    g_ptr_array_add (self->arg_additional_number_alpha_string_capability_ptr, additional_number_alpha_string_capability_aux_to);
                }
            }
        }
        *value_additional_number_alpha_string_capability_ptr = self->arg_additional_number_alpha_string_capability_ptr;
    }
    return TRUE;
}

GType
qmi_message_pbm_get_all_capabilities_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePbmGetAllCapabilitiesOutput"),
                                          (GBoxedCopyFunc) qmi_message_pbm_get_all_capabilities_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pbm_get_all_capabilities_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePbmGetAllCapabilitiesOutput *
qmi_message_pbm_get_all_capabilities_output_ref (QmiMessagePbmGetAllCapabilitiesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pbm_get_all_capabilities_output_unref (QmiMessagePbmGetAllCapabilitiesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_capability_basic_information, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_capability_basic_information, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_group_capability, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_group_capability, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_additional_number_capability, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_additional_number_capability, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_email_capability, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_email_capability, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_second_name_capability, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_second_name_capability, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_hidden_records_capability, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_hidden_records_capability, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_grouping_information_alpha_string_capability, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_grouping_information_alpha_string_capability, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_additional_number_alpha_string_capability, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_additional_number_alpha_string_capability, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessagePbmGetAllCapabilitiesOutput, self);
    }
}

static gchar *
qmi_message_pbm_get_all_capabilities_output_capability_basic_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_CAPABILITY_BASIC_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint capability_basic_information_i;
        guint8 capability_basic_information_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(capability_basic_information_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (capability_basic_information_i = 0; capability_basic_information_i < capability_basic_information_n_items; capability_basic_information_i++) {
            g_string_append_printf (printable, " [%u] = '", capability_basic_information_i);
            g_string_append (printable, "[");
            g_string_append (printable, " session_type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_PBM_SESSION_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_pbm_session_type_get_string ((QmiPbmSessionType)tmp));
#elif defined  __QMI_PBM_SESSION_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_pbm_session_type_build_string_from_mask ((QmiPbmSessionType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiPbmSessionType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " phonebooks = '");
            {
                guint phonebooks_i;
                guint8 phonebooks_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(phonebooks_n_items), &error))
                    goto out;

                g_string_append (printable, "{");

                for (phonebooks_i = 0; phonebooks_i < phonebooks_n_items; phonebooks_i++) {
                    g_string_append_printf (printable, " [%u] = '", phonebooks_i);
                    g_string_append (printable, "[");
                    g_string_append (printable, " phonebook_type = '");

                    {
                        guint16 tmp;

                        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_PBM_PHONEBOOK_TYPE_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_pbm_phonebook_type_get_string ((QmiPbmPhonebookType)tmp));
#elif defined  __QMI_PBM_PHONEBOOK_TYPE_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_pbm_phonebook_type_build_string_from_mask ((QmiPbmPhonebookType)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiPbmPhonebookType
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " used_records = '");

                    {
                        guint16 tmp;

                        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " maximum_records = '");

                    {
                        guint16 tmp;

                        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " maximum_number_length = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " maximum_name_length = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " ]");
                    g_string_append (printable, "'");
                }

                g_string_append (printable, "}");
            }            g_string_append (printable, "'");
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
qmi_message_pbm_get_all_capabilities_output_group_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_GROUP_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint group_capability_i;
        guint8 group_capability_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(group_capability_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (group_capability_i = 0; group_capability_i < group_capability_n_items; group_capability_i++) {
            g_string_append_printf (printable, " [%u] = '", group_capability_i);
            g_string_append (printable, "[");
            g_string_append (printable, " session_type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_PBM_SESSION_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_pbm_session_type_get_string ((QmiPbmSessionType)tmp));
#elif defined  __QMI_PBM_SESSION_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_pbm_session_type_build_string_from_mask ((QmiPbmSessionType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiPbmSessionType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " maximum_groups = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " maximum_group_tag_length = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
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
qmi_message_pbm_get_all_capabilities_output_additional_number_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint additional_number_capability_i;
        guint8 additional_number_capability_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(additional_number_capability_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (additional_number_capability_i = 0; additional_number_capability_i < additional_number_capability_n_items; additional_number_capability_i++) {
            g_string_append_printf (printable, " [%u] = '", additional_number_capability_i);
            g_string_append (printable, "[");
            g_string_append (printable, " session_type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_PBM_SESSION_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_pbm_session_type_get_string ((QmiPbmSessionType)tmp));
#elif defined  __QMI_PBM_SESSION_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_pbm_session_type_build_string_from_mask ((QmiPbmSessionType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiPbmSessionType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " maximum_additional_numbers = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " maximum_additional_number_length = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " maximum_additional_number_tag_length = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
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
qmi_message_pbm_get_all_capabilities_output_email_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_EMAIL_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint email_capability_i;
        guint8 email_capability_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(email_capability_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (email_capability_i = 0; email_capability_i < email_capability_n_items; email_capability_i++) {
            g_string_append_printf (printable, " [%u] = '", email_capability_i);
            g_string_append (printable, "[");
            g_string_append (printable, " session_type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_PBM_SESSION_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_pbm_session_type_get_string ((QmiPbmSessionType)tmp));
#elif defined  __QMI_PBM_SESSION_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_pbm_session_type_build_string_from_mask ((QmiPbmSessionType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiPbmSessionType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " maximum_emails = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " maximum_email_address_length = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
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
qmi_message_pbm_get_all_capabilities_output_second_name_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_SECOND_NAME_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint second_name_capability_i;
        guint8 second_name_capability_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(second_name_capability_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (second_name_capability_i = 0; second_name_capability_i < second_name_capability_n_items; second_name_capability_i++) {
            g_string_append_printf (printable, " [%u] = '", second_name_capability_i);
            g_string_append (printable, "[");
            g_string_append (printable, " session_type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_PBM_SESSION_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_pbm_session_type_get_string ((QmiPbmSessionType)tmp));
#elif defined  __QMI_PBM_SESSION_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_pbm_session_type_build_string_from_mask ((QmiPbmSessionType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiPbmSessionType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " maximum_second_name_length = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
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
qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_HIDDEN_RECORDS_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint hidden_records_capability_i;
        guint8 hidden_records_capability_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(hidden_records_capability_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (hidden_records_capability_i = 0; hidden_records_capability_i < hidden_records_capability_n_items; hidden_records_capability_i++) {
            g_string_append_printf (printable, " [%u] = '", hidden_records_capability_i);
            g_string_append (printable, "[");
            g_string_append (printable, " session_type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_PBM_SESSION_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_pbm_session_type_get_string ((QmiPbmSessionType)tmp));
#elif defined  __QMI_PBM_SESSION_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_pbm_session_type_build_string_from_mask ((QmiPbmSessionType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiPbmSessionType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " supported = '");

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
qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_GROUPING_INFORMATION_ALPHA_STRING_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint grouping_information_alpha_string_capability_i;
        guint8 grouping_information_alpha_string_capability_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(grouping_information_alpha_string_capability_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (grouping_information_alpha_string_capability_i = 0; grouping_information_alpha_string_capability_i < grouping_information_alpha_string_capability_n_items; grouping_information_alpha_string_capability_i++) {
            g_string_append_printf (printable, " [%u] = '", grouping_information_alpha_string_capability_i);
            g_string_append (printable, "[");
            g_string_append (printable, " session_type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_PBM_SESSION_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_pbm_session_type_get_string ((QmiPbmSessionType)tmp));
#elif defined  __QMI_PBM_SESSION_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_pbm_session_type_build_string_from_mask ((QmiPbmSessionType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiPbmSessionType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " maximum_records = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " used_records = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " maximum_string_length = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
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
qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_ALPHA_STRING_CAPABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint additional_number_alpha_string_capability_i;
        guint8 additional_number_alpha_string_capability_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(additional_number_alpha_string_capability_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (additional_number_alpha_string_capability_i = 0; additional_number_alpha_string_capability_i < additional_number_alpha_string_capability_n_items; additional_number_alpha_string_capability_i++) {
            g_string_append_printf (printable, " [%u] = '", additional_number_alpha_string_capability_i);
            g_string_append (printable, "[");
            g_string_append (printable, " session_type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_PBM_SESSION_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_pbm_session_type_get_string ((QmiPbmSessionType)tmp));
#elif defined  __QMI_PBM_SESSION_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_pbm_session_type_build_string_from_mask ((QmiPbmSessionType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiPbmSessionType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " maximum_records = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " used_records = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " maximum_string_length = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
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

struct message_get_all_capabilities_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_all_capabilities_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_all_capabilities_context *ctx)
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
        case QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_CAPABILITY_BASIC_INFORMATION:
            tlv_type_str = "Capability Basic Information";
            translated_value = qmi_message_pbm_get_all_capabilities_output_capability_basic_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_GROUP_CAPABILITY:
            tlv_type_str = "Group Capability";
            translated_value = qmi_message_pbm_get_all_capabilities_output_group_capability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_CAPABILITY:
            tlv_type_str = "Additional Number Capability";
            translated_value = qmi_message_pbm_get_all_capabilities_output_additional_number_capability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_EMAIL_CAPABILITY:
            tlv_type_str = "Email Capability";
            translated_value = qmi_message_pbm_get_all_capabilities_output_email_capability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_SECOND_NAME_CAPABILITY:
            tlv_type_str = "Second Name Capability";
            translated_value = qmi_message_pbm_get_all_capabilities_output_second_name_capability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_HIDDEN_RECORDS_CAPABILITY:
            tlv_type_str = "Hidden Records Capability";
            translated_value = qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_GROUPING_INFORMATION_ALPHA_STRING_CAPABILITY:
            tlv_type_str = "Grouping Information Alpha String Capability";
            translated_value = qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_ALPHA_STRING_CAPABILITY:
            tlv_type_str = "Additional Number Alpha String Capability";
            translated_value = qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_get_printable (
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
message_get_all_capabilities_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get All Capabilities\" (0x0003)\n",
                            line_prefix);

    {
        struct message_get_all_capabilities_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_all_capabilities_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePbmGetAllCapabilitiesOutput *
qmi_message_pbm_get_all_capabilities_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePbmGetAllCapabilitiesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES);

    self = g_slice_new0 (QmiMessagePbmGetAllCapabilitiesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pbm_get_all_capabilities_output_unref (self);
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
                qmi_message_pbm_get_all_capabilities_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_CAPABILITY_BASIC_INFORMATION, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_all_capabilities_output_capability_basic_information_out;
            }
            {
                guint capability_basic_information_i;
                guint8 capability_basic_information_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(capability_basic_information_n_items), NULL))
                    goto qmi_message_pbm_get_all_capabilities_output_capability_basic_information_out;

                self->arg_capability_basic_information = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement),
                    (guint)capability_basic_information_n_items);

                g_array_set_clear_func (self->arg_capability_basic_information, (GDestroyNotify)__qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_clear);

                for (capability_basic_information_i = 0; capability_basic_information_i < capability_basic_information_n_items; capability_basic_information_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement capability_basic_information_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_pbm_get_all_capabilities_output_capability_basic_information_out;
                        capability_basic_information_aux.session_type = (QmiPbmSessionType)tmp;
                    }
                    {
                        guint phonebooks_i;
                        guint8 phonebooks_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(phonebooks_n_items), NULL))
                            goto qmi_message_pbm_get_all_capabilities_output_capability_basic_information_out;

                        capability_basic_information_aux.phonebooks = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement),
                            (guint)phonebooks_n_items);

                        for (phonebooks_i = 0; phonebooks_i < phonebooks_n_items; phonebooks_i++) {
                            QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement phonebooks_aux;

                            {
                                guint16 tmp;

                                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                                    goto qmi_message_pbm_get_all_capabilities_output_capability_basic_information_out;
                                phonebooks_aux.phonebook_type = (QmiPbmPhonebookType)tmp;
                            }
                            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(phonebooks_aux.used_records), NULL))
                                goto qmi_message_pbm_get_all_capabilities_output_capability_basic_information_out;
                            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(phonebooks_aux.maximum_records), NULL))
                                goto qmi_message_pbm_get_all_capabilities_output_capability_basic_information_out;
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(phonebooks_aux.maximum_number_length), NULL))
                                goto qmi_message_pbm_get_all_capabilities_output_capability_basic_information_out;
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(phonebooks_aux.maximum_name_length), NULL))
                                goto qmi_message_pbm_get_all_capabilities_output_capability_basic_information_out;
                            g_array_insert_val (capability_basic_information_aux.phonebooks, phonebooks_i, phonebooks_aux);
                        }
                    }
                    g_array_insert_val (self->arg_capability_basic_information, capability_basic_information_i, capability_basic_information_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Capability Basic Information' TLV", offset);
            }

            self->arg_capability_basic_information_set = TRUE;

qmi_message_pbm_get_all_capabilities_output_capability_basic_information_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_GROUP_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_all_capabilities_output_group_capability_out;
            }
            {
                guint group_capability_i;
                guint8 group_capability_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(group_capability_n_items), NULL))
                    goto qmi_message_pbm_get_all_capabilities_output_group_capability_out;

                self->arg_group_capability = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement),
                    (guint)group_capability_n_items);

                for (group_capability_i = 0; group_capability_i < group_capability_n_items; group_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement group_capability_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_pbm_get_all_capabilities_output_group_capability_out;
                        group_capability_aux.session_type = (QmiPbmSessionType)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(group_capability_aux.maximum_groups), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_group_capability_out;
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(group_capability_aux.maximum_group_tag_length), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_group_capability_out;
                    g_array_insert_val (self->arg_group_capability, group_capability_i, group_capability_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Group Capability' TLV", offset);
            }

            self->arg_group_capability_set = TRUE;

qmi_message_pbm_get_all_capabilities_output_group_capability_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_all_capabilities_output_additional_number_capability_out;
            }
            {
                guint additional_number_capability_i;
                guint8 additional_number_capability_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(additional_number_capability_n_items), NULL))
                    goto qmi_message_pbm_get_all_capabilities_output_additional_number_capability_out;

                self->arg_additional_number_capability = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement),
                    (guint)additional_number_capability_n_items);

                for (additional_number_capability_i = 0; additional_number_capability_i < additional_number_capability_n_items; additional_number_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement additional_number_capability_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_pbm_get_all_capabilities_output_additional_number_capability_out;
                        additional_number_capability_aux.session_type = (QmiPbmSessionType)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(additional_number_capability_aux.maximum_additional_numbers), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_additional_number_capability_out;
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(additional_number_capability_aux.maximum_additional_number_length), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_additional_number_capability_out;
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(additional_number_capability_aux.maximum_additional_number_tag_length), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_additional_number_capability_out;
                    g_array_insert_val (self->arg_additional_number_capability, additional_number_capability_i, additional_number_capability_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Additional Number Capability' TLV", offset);
            }

            self->arg_additional_number_capability_set = TRUE;

qmi_message_pbm_get_all_capabilities_output_additional_number_capability_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_EMAIL_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_all_capabilities_output_email_capability_out;
            }
            {
                guint email_capability_i;
                guint8 email_capability_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(email_capability_n_items), NULL))
                    goto qmi_message_pbm_get_all_capabilities_output_email_capability_out;

                self->arg_email_capability = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement),
                    (guint)email_capability_n_items);

                for (email_capability_i = 0; email_capability_i < email_capability_n_items; email_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement email_capability_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_pbm_get_all_capabilities_output_email_capability_out;
                        email_capability_aux.session_type = (QmiPbmSessionType)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(email_capability_aux.maximum_emails), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_email_capability_out;
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(email_capability_aux.maximum_email_address_length), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_email_capability_out;
                    g_array_insert_val (self->arg_email_capability, email_capability_i, email_capability_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Email Capability' TLV", offset);
            }

            self->arg_email_capability_set = TRUE;

qmi_message_pbm_get_all_capabilities_output_email_capability_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_SECOND_NAME_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_all_capabilities_output_second_name_capability_out;
            }
            {
                guint second_name_capability_i;
                guint8 second_name_capability_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(second_name_capability_n_items), NULL))
                    goto qmi_message_pbm_get_all_capabilities_output_second_name_capability_out;

                self->arg_second_name_capability = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement),
                    (guint)second_name_capability_n_items);

                for (second_name_capability_i = 0; second_name_capability_i < second_name_capability_n_items; second_name_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement second_name_capability_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_pbm_get_all_capabilities_output_second_name_capability_out;
                        second_name_capability_aux.session_type = (QmiPbmSessionType)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(second_name_capability_aux.maximum_second_name_length), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_second_name_capability_out;
                    g_array_insert_val (self->arg_second_name_capability, second_name_capability_i, second_name_capability_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Second Name Capability' TLV", offset);
            }

            self->arg_second_name_capability_set = TRUE;

qmi_message_pbm_get_all_capabilities_output_second_name_capability_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_HIDDEN_RECORDS_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_out;
            }
            {
                guint hidden_records_capability_i;
                guint8 hidden_records_capability_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(hidden_records_capability_n_items), NULL))
                    goto qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_out;

                self->arg_hidden_records_capability = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement),
                    (guint)hidden_records_capability_n_items);

                for (hidden_records_capability_i = 0; hidden_records_capability_i < hidden_records_capability_n_items; hidden_records_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement hidden_records_capability_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_out;
                        hidden_records_capability_aux.session_type = (QmiPbmSessionType)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_out;
                        hidden_records_capability_aux.supported = (gboolean)tmp;
                    }
                    g_array_insert_val (self->arg_hidden_records_capability, hidden_records_capability_i, hidden_records_capability_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Hidden Records Capability' TLV", offset);
            }

            self->arg_hidden_records_capability_set = TRUE;

qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_GROUPING_INFORMATION_ALPHA_STRING_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_out;
            }
            {
                guint grouping_information_alpha_string_capability_i;
                guint8 grouping_information_alpha_string_capability_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(grouping_information_alpha_string_capability_n_items), NULL))
                    goto qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_out;

                self->arg_grouping_information_alpha_string_capability = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement),
                    (guint)grouping_information_alpha_string_capability_n_items);

                for (grouping_information_alpha_string_capability_i = 0; grouping_information_alpha_string_capability_i < grouping_information_alpha_string_capability_n_items; grouping_information_alpha_string_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement grouping_information_alpha_string_capability_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_out;
                        grouping_information_alpha_string_capability_aux.session_type = (QmiPbmSessionType)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(grouping_information_alpha_string_capability_aux.maximum_records), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_out;
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(grouping_information_alpha_string_capability_aux.used_records), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_out;
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(grouping_information_alpha_string_capability_aux.maximum_string_length), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_out;
                    g_array_insert_val (self->arg_grouping_information_alpha_string_capability, grouping_information_alpha_string_capability_i, grouping_information_alpha_string_capability_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Grouping Information Alpha String Capability' TLV", offset);
            }

            self->arg_grouping_information_alpha_string_capability_set = TRUE;

qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT_TLV_ADDITIONAL_NUMBER_ALPHA_STRING_CAPABILITY, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_out;
            }
            {
                guint additional_number_alpha_string_capability_i;
                guint8 additional_number_alpha_string_capability_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(additional_number_alpha_string_capability_n_items), NULL))
                    goto qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_out;

                self->arg_additional_number_alpha_string_capability = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement),
                    (guint)additional_number_alpha_string_capability_n_items);

                for (additional_number_alpha_string_capability_i = 0; additional_number_alpha_string_capability_i < additional_number_alpha_string_capability_n_items; additional_number_alpha_string_capability_i++) {
                    QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement additional_number_alpha_string_capability_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_out;
                        additional_number_alpha_string_capability_aux.session_type = (QmiPbmSessionType)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(additional_number_alpha_string_capability_aux.maximum_records), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_out;
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(additional_number_alpha_string_capability_aux.used_records), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_out;
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(additional_number_alpha_string_capability_aux.maximum_string_length), NULL))
                        goto qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_out;
                    g_array_insert_val (self->arg_additional_number_alpha_string_capability, additional_number_alpha_string_capability_i, additional_number_alpha_string_capability_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Additional Number Alpha String Capability' TLV", offset);
            }

            self->arg_additional_number_alpha_string_capability_set = TRUE;

qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PBM Get Emergency List */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_pbm_get_emergency_list_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PBM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PBM_GET_EMERGENCY_LIST);

    return g_steal_pointer (&self);
}

/* --- Output -- */

static void
__qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element_clear (QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement *value)
{
    g_clear_pointer (&value->emergency_number, (GDestroyNotify)g_free);
}

static void
__qmi_message_pbm_get_emergency_list_output_card_numbers_element_clear (QmiMessagePbmGetEmergencyListOutputCardNumbersElement *value)
{
    g_clear_pointer (&value->emergency_numbers, (GDestroyNotify)g_array_unref);
}

static void
__qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element_free (QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement *value)
{
    __qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element_clear (value);
    g_slice_free (QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement, value);
}

static QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement *
__qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement);
}

static QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement *
__qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element_copy (const QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement *value)
{
    QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement *copy;

    copy = __qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element_new ();
    copy->flags = value->flags;
    copy->emergency_number = g_strdup (value->emergency_number);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement, qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element, (GBoxedCopyFunc)__qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element_free)

static void
__qmi_message_pbm_get_emergency_list_output_card_numbers_element_gir_free (QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir *value)
{
    g_clear_pointer (&value->emergency_numbers, (GDestroyNotify)g_ptr_array_unref);
    g_slice_free (QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir, value);
}

static QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir *
__qmi_message_pbm_get_emergency_list_output_card_numbers_element_gir_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir);
}

static QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir *
__qmi_message_pbm_get_emergency_list_output_card_numbers_element_gir_copy (const QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir *value)
{
    QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir *copy;

    copy = __qmi_message_pbm_get_emergency_list_output_card_numbers_element_gir_new ();
    copy->session_type = value->session_type;
    copy->emergency_numbers = g_ptr_array_ref (value->emergency_numbers);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir, qmi_message_pbm_get_emergency_list_output_card_numbers_element_gir, (GBoxedCopyFunc)__qmi_message_pbm_get_emergency_list_output_card_numbers_element_gir_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_emergency_list_output_card_numbers_element_gir_free)

static void
__qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element_clear (QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement *value)
{
    g_clear_pointer (&value->emergency_number, (GDestroyNotify)g_free);
}

static void
__qmi_message_pbm_get_emergency_list_output_network_numbers_element_clear (QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement *value)
{
    g_clear_pointer (&value->emergency_numbers, (GDestroyNotify)g_array_unref);
}

static void
__qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element_free (QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement *value)
{
    __qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element_clear (value);
    g_slice_free (QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement, value);
}

static QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement *
__qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement);
}

static QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement *
__qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element_copy (const QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement *value)
{
    QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement *copy;

    copy = __qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element_new ();
    copy->flags = value->flags;
    copy->emergency_number = g_strdup (value->emergency_number);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement, qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element, (GBoxedCopyFunc)__qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element_free)

static void
__qmi_message_pbm_get_emergency_list_output_network_numbers_element_gir_free (QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir *value)
{
    g_clear_pointer (&value->emergency_numbers, (GDestroyNotify)g_ptr_array_unref);
    g_slice_free (QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir, value);
}

static QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir *
__qmi_message_pbm_get_emergency_list_output_network_numbers_element_gir_new (void)
{
    return g_slice_new0 (QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir);
}

static QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir *
__qmi_message_pbm_get_emergency_list_output_network_numbers_element_gir_copy (const QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir *value)
{
    QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir *copy;

    copy = __qmi_message_pbm_get_emergency_list_output_network_numbers_element_gir_new ();
    copy->session_type = value->session_type;
    copy->emergency_numbers = g_ptr_array_ref (value->emergency_numbers);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir, qmi_message_pbm_get_emergency_list_output_network_numbers_element_gir, (GBoxedCopyFunc)__qmi_message_pbm_get_emergency_list_output_network_numbers_element_gir_copy, (GBoxedFreeFunc)__qmi_message_pbm_get_emergency_list_output_network_numbers_element_gir_free)

struct _QmiMessagePbmGetEmergencyListOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Hardcoded Numbers */
    gboolean arg_hardcoded_numbers_set;
    GArray *arg_hardcoded_numbers;

    /* NV Numbers */
    gboolean arg_nv_numbers_set;
    GArray *arg_nv_numbers;

    /* Card Numbers */
    gboolean arg_card_numbers_set;
    GArray *arg_card_numbers;
    GPtrArray *arg_card_numbers_ptr;

    /* Network Numbers */
    gboolean arg_network_numbers_set;
    GArray *arg_network_numbers;
    GPtrArray *arg_network_numbers_ptr;
};

#define QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_HARDCODED_NUMBERS 0x10
#define QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_NV_NUMBERS 0x11
#define QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_CARD_NUMBERS 0x12
#define QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_NETWORK_NUMBERS 0x13

gboolean
qmi_message_pbm_get_emergency_list_output_get_result (
    QmiMessagePbmGetEmergencyListOutput *self,
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
qmi_message_pbm_get_emergency_list_output_get_hardcoded_numbers (
    QmiMessagePbmGetEmergencyListOutput *self,
    GArray **value_hardcoded_numbers,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_hardcoded_numbers_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Hardcoded Numbers' was not found in the message");
        return FALSE;
    }

    if (value_hardcoded_numbers)
        *value_hardcoded_numbers = self->arg_hardcoded_numbers;

    return TRUE;
}

gboolean
qmi_message_pbm_get_emergency_list_output_get_nv_numbers (
    QmiMessagePbmGetEmergencyListOutput *self,
    GArray **value_nv_numbers,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_nv_numbers_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'NV Numbers' was not found in the message");
        return FALSE;
    }

    if (value_nv_numbers)
        *value_nv_numbers = self->arg_nv_numbers;

    return TRUE;
}

gboolean
qmi_message_pbm_get_emergency_list_output_get_card_numbers (
    QmiMessagePbmGetEmergencyListOutput *self,
    GArray **value_card_numbers,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_numbers_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Numbers' was not found in the message");
        return FALSE;
    }

    if (value_card_numbers)
        *value_card_numbers = self->arg_card_numbers;

    return TRUE;
}

gboolean
qmi_message_pbm_get_emergency_list_output_get_card_numbers_gir (
    QmiMessagePbmGetEmergencyListOutput *self,
    GPtrArray **value_card_numbers_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_numbers_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Numbers' was not found in the message");
        return FALSE;
    }

    if (value_card_numbers_ptr) {
        if (!self->arg_card_numbers_ptr) {
            {
                guint card_numbers_i;

                self->arg_card_numbers_ptr = g_ptr_array_new_full (self->arg_card_numbers->len, (GDestroyNotify)__qmi_message_pbm_get_emergency_list_output_card_numbers_element_gir_free);
                for (card_numbers_i = 0; card_numbers_i < self->arg_card_numbers->len; card_numbers_i++) {
                    QmiMessagePbmGetEmergencyListOutputCardNumbersElement *card_numbers_aux_from;
                    QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir *card_numbers_aux_to;

                    card_numbers_aux_from = &g_array_index (self->arg_card_numbers, QmiMessagePbmGetEmergencyListOutputCardNumbersElement, card_numbers_i);

                    card_numbers_aux_to = __qmi_message_pbm_get_emergency_list_output_card_numbers_element_gir_new ();
                    card_numbers_aux_to->session_type = (*card_numbers_aux_from).session_type;
                    {
                        guint emergency_numbers_i;

                        card_numbers_aux_to->emergency_numbers = g_ptr_array_new_full ((*card_numbers_aux_from).emergency_numbers->len, (GDestroyNotify)__qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element_free);
                        for (emergency_numbers_i = 0; emergency_numbers_i < (*card_numbers_aux_from).emergency_numbers->len; emergency_numbers_i++) {
                            QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement *emergency_numbers_aux_from;
                            QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement *emergency_numbers_aux_to;

                            emergency_numbers_aux_from = &g_array_index ((*card_numbers_aux_from).emergency_numbers, QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement, emergency_numbers_i);

                            emergency_numbers_aux_to = __qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element_new ();
                            emergency_numbers_aux_to->flags = (*emergency_numbers_aux_from).flags;
                            emergency_numbers_aux_to->emergency_number = g_strdup ((*emergency_numbers_aux_from).emergency_number);

                            g_ptr_array_add (card_numbers_aux_to->emergency_numbers, emergency_numbers_aux_to);
                        }
                    }

                    g_ptr_array_add (self->arg_card_numbers_ptr, card_numbers_aux_to);
                }
            }
        }
        *value_card_numbers_ptr = self->arg_card_numbers_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_pbm_get_emergency_list_output_get_network_numbers (
    QmiMessagePbmGetEmergencyListOutput *self,
    GArray **value_network_numbers,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_network_numbers_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Network Numbers' was not found in the message");
        return FALSE;
    }

    if (value_network_numbers)
        *value_network_numbers = self->arg_network_numbers;

    return TRUE;
}

gboolean
qmi_message_pbm_get_emergency_list_output_get_network_numbers_gir (
    QmiMessagePbmGetEmergencyListOutput *self,
    GPtrArray **value_network_numbers_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_network_numbers_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Network Numbers' was not found in the message");
        return FALSE;
    }

    if (value_network_numbers_ptr) {
        if (!self->arg_network_numbers_ptr) {
            {
                guint network_numbers_i;

                self->arg_network_numbers_ptr = g_ptr_array_new_full (self->arg_network_numbers->len, (GDestroyNotify)__qmi_message_pbm_get_emergency_list_output_network_numbers_element_gir_free);
                for (network_numbers_i = 0; network_numbers_i < self->arg_network_numbers->len; network_numbers_i++) {
                    QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement *network_numbers_aux_from;
                    QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir *network_numbers_aux_to;

                    network_numbers_aux_from = &g_array_index (self->arg_network_numbers, QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement, network_numbers_i);

                    network_numbers_aux_to = __qmi_message_pbm_get_emergency_list_output_network_numbers_element_gir_new ();
                    network_numbers_aux_to->session_type = (*network_numbers_aux_from).session_type;
                    {
                        guint emergency_numbers_i;

                        network_numbers_aux_to->emergency_numbers = g_ptr_array_new_full ((*network_numbers_aux_from).emergency_numbers->len, (GDestroyNotify)__qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element_free);
                        for (emergency_numbers_i = 0; emergency_numbers_i < (*network_numbers_aux_from).emergency_numbers->len; emergency_numbers_i++) {
                            QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement *emergency_numbers_aux_from;
                            QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement *emergency_numbers_aux_to;

                            emergency_numbers_aux_from = &g_array_index ((*network_numbers_aux_from).emergency_numbers, QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement, emergency_numbers_i);

                            emergency_numbers_aux_to = __qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element_new ();
                            emergency_numbers_aux_to->flags = (*emergency_numbers_aux_from).flags;
                            emergency_numbers_aux_to->emergency_number = g_strdup ((*emergency_numbers_aux_from).emergency_number);

                            g_ptr_array_add (network_numbers_aux_to->emergency_numbers, emergency_numbers_aux_to);
                        }
                    }

                    g_ptr_array_add (self->arg_network_numbers_ptr, network_numbers_aux_to);
                }
            }
        }
        *value_network_numbers_ptr = self->arg_network_numbers_ptr;
    }
    return TRUE;
}

GType
qmi_message_pbm_get_emergency_list_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePbmGetEmergencyListOutput"),
                                          (GBoxedCopyFunc) qmi_message_pbm_get_emergency_list_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pbm_get_emergency_list_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePbmGetEmergencyListOutput *
qmi_message_pbm_get_emergency_list_output_ref (QmiMessagePbmGetEmergencyListOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pbm_get_emergency_list_output_unref (QmiMessagePbmGetEmergencyListOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_hardcoded_numbers, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_nv_numbers, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_card_numbers, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_card_numbers, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_network_numbers, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_network_numbers, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessagePbmGetEmergencyListOutput, self);
    }
}

static gchar *
qmi_message_pbm_get_emergency_list_output_hardcoded_numbers_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_HARDCODED_NUMBERS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint hardcoded_numbers_i;
        guint8 hardcoded_numbers_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(hardcoded_numbers_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (hardcoded_numbers_i = 0; hardcoded_numbers_i < hardcoded_numbers_n_items; hardcoded_numbers_i++) {
            g_string_append_printf (printable, " [%u] = '", hardcoded_numbers_i);

            {
                g_autofree gchar *tmp = NULL;

                if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
                    goto out;
                {
                    g_string_append (printable, tmp);
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
qmi_message_pbm_get_emergency_list_output_nv_numbers_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_NV_NUMBERS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint nv_numbers_i;
        guint8 nv_numbers_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(nv_numbers_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (nv_numbers_i = 0; nv_numbers_i < nv_numbers_n_items; nv_numbers_i++) {
            g_string_append_printf (printable, " [%u] = '", nv_numbers_i);

            {
                g_autofree gchar *tmp = NULL;

                if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
                    goto out;
                {
                    g_string_append (printable, tmp);
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
qmi_message_pbm_get_emergency_list_output_card_numbers_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_CARD_NUMBERS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint card_numbers_i;
        guint8 card_numbers_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(card_numbers_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (card_numbers_i = 0; card_numbers_i < card_numbers_n_items; card_numbers_i++) {
            g_string_append_printf (printable, " [%u] = '", card_numbers_i);
            g_string_append (printable, "[");
            g_string_append (printable, " session_type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_PBM_SESSION_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_pbm_session_type_get_string ((QmiPbmSessionType)tmp));
#elif defined  __QMI_PBM_SESSION_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_pbm_session_type_build_string_from_mask ((QmiPbmSessionType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiPbmSessionType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " emergency_numbers = '");
            {
                guint emergency_numbers_i;
                guint8 emergency_numbers_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(emergency_numbers_n_items), &error))
                    goto out;

                g_string_append (printable, "{");

                for (emergency_numbers_i = 0; emergency_numbers_i < emergency_numbers_n_items; emergency_numbers_i++) {
                    g_string_append_printf (printable, " [%u] = '", emergency_numbers_i);
                    g_string_append (printable, "[");
                    g_string_append (printable, " flags = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_PBM_EMERGENCY_NUMBER_FLAGS_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_pbm_emergency_number_flags_get_string ((QmiPbmEmergencyNumberFlags)tmp));
#elif defined  __QMI_PBM_EMERGENCY_NUMBER_FLAGS_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_pbm_emergency_number_flags_build_string_from_mask ((QmiPbmEmergencyNumberFlags)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiPbmEmergencyNumberFlags
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " emergency_number = '");

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
                    g_string_append (printable, "'");
                }

                g_string_append (printable, "}");
            }            g_string_append (printable, "'");
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
qmi_message_pbm_get_emergency_list_output_network_numbers_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_NETWORK_NUMBERS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint network_numbers_i;
        guint8 network_numbers_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(network_numbers_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (network_numbers_i = 0; network_numbers_i < network_numbers_n_items; network_numbers_i++) {
            g_string_append_printf (printable, " [%u] = '", network_numbers_i);
            g_string_append (printable, "[");
            g_string_append (printable, " session_type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_PBM_SESSION_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_pbm_session_type_get_string ((QmiPbmSessionType)tmp));
#elif defined  __QMI_PBM_SESSION_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_pbm_session_type_build_string_from_mask ((QmiPbmSessionType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiPbmSessionType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " emergency_numbers = '");
            {
                guint emergency_numbers_i;
                guint8 emergency_numbers_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(emergency_numbers_n_items), &error))
                    goto out;

                g_string_append (printable, "{");

                for (emergency_numbers_i = 0; emergency_numbers_i < emergency_numbers_n_items; emergency_numbers_i++) {
                    g_string_append_printf (printable, " [%u] = '", emergency_numbers_i);
                    g_string_append (printable, "[");
                    g_string_append (printable, " flags = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_PBM_EMERGENCY_NUMBER_FLAGS_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_pbm_emergency_number_flags_get_string ((QmiPbmEmergencyNumberFlags)tmp));
#elif defined  __QMI_PBM_EMERGENCY_NUMBER_FLAGS_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_pbm_emergency_number_flags_build_string_from_mask ((QmiPbmEmergencyNumberFlags)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiPbmEmergencyNumberFlags
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " emergency_number = '");

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
                    g_string_append (printable, "'");
                }

                g_string_append (printable, "}");
            }            g_string_append (printable, "'");
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

struct message_get_emergency_list_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_emergency_list_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_emergency_list_context *ctx)
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
        case QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_HARDCODED_NUMBERS:
            tlv_type_str = "Hardcoded Numbers";
            translated_value = qmi_message_pbm_get_emergency_list_output_hardcoded_numbers_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_NV_NUMBERS:
            tlv_type_str = "NV Numbers";
            translated_value = qmi_message_pbm_get_emergency_list_output_nv_numbers_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_CARD_NUMBERS:
            tlv_type_str = "Card Numbers";
            translated_value = qmi_message_pbm_get_emergency_list_output_card_numbers_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_NETWORK_NUMBERS:
            tlv_type_str = "Network Numbers";
            translated_value = qmi_message_pbm_get_emergency_list_output_network_numbers_get_printable (
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
message_get_emergency_list_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Emergency List\" (0x000e)\n",
                            line_prefix);

    {
        struct message_get_emergency_list_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_emergency_list_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePbmGetEmergencyListOutput *
qmi_message_pbm_get_emergency_list_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePbmGetEmergencyListOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PBM_GET_EMERGENCY_LIST);

    self = g_slice_new0 (QmiMessagePbmGetEmergencyListOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pbm_get_emergency_list_output_unref (self);
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
                qmi_message_pbm_get_emergency_list_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_HARDCODED_NUMBERS, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_emergency_list_output_hardcoded_numbers_out;
            }
            {
                guint hardcoded_numbers_i;
                guint8 hardcoded_numbers_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(hardcoded_numbers_n_items), NULL))
                    goto qmi_message_pbm_get_emergency_list_output_hardcoded_numbers_out;

                self->arg_hardcoded_numbers = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (gchar *),
                    (guint)hardcoded_numbers_n_items);

                g_array_set_clear_func (self->arg_hardcoded_numbers, (GDestroyNotify)qmi_helpers_clear_string);

                for (hardcoded_numbers_i = 0; hardcoded_numbers_i < hardcoded_numbers_n_items; hardcoded_numbers_i++) {
                    gchar * hardcoded_numbers_aux;

                    if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &(hardcoded_numbers_aux), NULL))
                        goto qmi_message_pbm_get_emergency_list_output_hardcoded_numbers_out;
                    g_array_insert_val (self->arg_hardcoded_numbers, hardcoded_numbers_i, hardcoded_numbers_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Hardcoded Numbers' TLV", offset);
            }

            self->arg_hardcoded_numbers_set = TRUE;

qmi_message_pbm_get_emergency_list_output_hardcoded_numbers_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_NV_NUMBERS, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_emergency_list_output_nv_numbers_out;
            }
            {
                guint nv_numbers_i;
                guint8 nv_numbers_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(nv_numbers_n_items), NULL))
                    goto qmi_message_pbm_get_emergency_list_output_nv_numbers_out;

                self->arg_nv_numbers = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (gchar *),
                    (guint)nv_numbers_n_items);

                g_array_set_clear_func (self->arg_nv_numbers, (GDestroyNotify)qmi_helpers_clear_string);

                for (nv_numbers_i = 0; nv_numbers_i < nv_numbers_n_items; nv_numbers_i++) {
                    gchar * nv_numbers_aux;

                    if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &(nv_numbers_aux), NULL))
                        goto qmi_message_pbm_get_emergency_list_output_nv_numbers_out;
                    g_array_insert_val (self->arg_nv_numbers, nv_numbers_i, nv_numbers_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'NV Numbers' TLV", offset);
            }

            self->arg_nv_numbers_set = TRUE;

qmi_message_pbm_get_emergency_list_output_nv_numbers_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_CARD_NUMBERS, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_emergency_list_output_card_numbers_out;
            }
            {
                guint card_numbers_i;
                guint8 card_numbers_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(card_numbers_n_items), NULL))
                    goto qmi_message_pbm_get_emergency_list_output_card_numbers_out;

                self->arg_card_numbers = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessagePbmGetEmergencyListOutputCardNumbersElement),
                    (guint)card_numbers_n_items);

                g_array_set_clear_func (self->arg_card_numbers, (GDestroyNotify)__qmi_message_pbm_get_emergency_list_output_card_numbers_element_clear);

                for (card_numbers_i = 0; card_numbers_i < card_numbers_n_items; card_numbers_i++) {
                    QmiMessagePbmGetEmergencyListOutputCardNumbersElement card_numbers_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_pbm_get_emergency_list_output_card_numbers_out;
                        card_numbers_aux.session_type = (QmiPbmSessionType)tmp;
                    }
                    {
                        guint emergency_numbers_i;
                        guint8 emergency_numbers_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(emergency_numbers_n_items), NULL))
                            goto qmi_message_pbm_get_emergency_list_output_card_numbers_out;

                        card_numbers_aux.emergency_numbers = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement),
                            (guint)emergency_numbers_n_items);

                        g_array_set_clear_func (card_numbers_aux.emergency_numbers, (GDestroyNotify)__qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element_clear);

                        for (emergency_numbers_i = 0; emergency_numbers_i < emergency_numbers_n_items; emergency_numbers_i++) {
                            QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement emergency_numbers_aux;

                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_message_pbm_get_emergency_list_output_card_numbers_out;
                                emergency_numbers_aux.flags = (QmiPbmEmergencyNumberFlags)tmp;
                            }
                            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &(emergency_numbers_aux.emergency_number), NULL))
                                goto qmi_message_pbm_get_emergency_list_output_card_numbers_out;
                            g_array_insert_val (card_numbers_aux.emergency_numbers, emergency_numbers_i, emergency_numbers_aux);
                        }
                    }
                    g_array_insert_val (self->arg_card_numbers, card_numbers_i, card_numbers_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Card Numbers' TLV", offset);
            }

            self->arg_card_numbers_set = TRUE;

qmi_message_pbm_get_emergency_list_output_card_numbers_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT_TLV_NETWORK_NUMBERS, NULL, NULL)) == 0) {
                goto qmi_message_pbm_get_emergency_list_output_network_numbers_out;
            }
            {
                guint network_numbers_i;
                guint8 network_numbers_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(network_numbers_n_items), NULL))
                    goto qmi_message_pbm_get_emergency_list_output_network_numbers_out;

                self->arg_network_numbers = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement),
                    (guint)network_numbers_n_items);

                g_array_set_clear_func (self->arg_network_numbers, (GDestroyNotify)__qmi_message_pbm_get_emergency_list_output_network_numbers_element_clear);

                for (network_numbers_i = 0; network_numbers_i < network_numbers_n_items; network_numbers_i++) {
                    QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement network_numbers_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_pbm_get_emergency_list_output_network_numbers_out;
                        network_numbers_aux.session_type = (QmiPbmSessionType)tmp;
                    }
                    {
                        guint emergency_numbers_i;
                        guint8 emergency_numbers_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(emergency_numbers_n_items), NULL))
                            goto qmi_message_pbm_get_emergency_list_output_network_numbers_out;

                        network_numbers_aux.emergency_numbers = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement),
                            (guint)emergency_numbers_n_items);

                        g_array_set_clear_func (network_numbers_aux.emergency_numbers, (GDestroyNotify)__qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element_clear);

                        for (emergency_numbers_i = 0; emergency_numbers_i < emergency_numbers_n_items; emergency_numbers_i++) {
                            QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement emergency_numbers_aux;

                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_message_pbm_get_emergency_list_output_network_numbers_out;
                                emergency_numbers_aux.flags = (QmiPbmEmergencyNumberFlags)tmp;
                            }
                            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &(emergency_numbers_aux.emergency_number), NULL))
                                goto qmi_message_pbm_get_emergency_list_output_network_numbers_out;
                            g_array_insert_val (network_numbers_aux.emergency_numbers, emergency_numbers_i, emergency_numbers_aux);
                        }
                    }
                    g_array_insert_val (self->arg_network_numbers, network_numbers_i, network_numbers_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Network Numbers' TLV", offset);
            }

            self->arg_network_numbers_set = TRUE;

qmi_message_pbm_get_emergency_list_output_network_numbers_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: PBM */


gchar *
__qmi_message_pbm_get_printable (
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
            case QMI_MESSAGE_PBM_INDICATION_REGISTER:
                return message_indication_register_get_printable (self, line_prefix);
            case QMI_MESSAGE_PBM_GET_CAPABILITIES:
                return message_get_capabilities_get_printable (self, line_prefix);
            case QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES:
                return message_get_all_capabilities_get_printable (self, line_prefix);
            case QMI_MESSAGE_PBM_GET_EMERGENCY_LIST:
                return message_get_emergency_list_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client PBM */

G_DEFINE_TYPE (QmiClientPbm, qmi_client_pbm, QMI_TYPE_CLIENT)

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
qmi_client_pbm_init (QmiClientPbm *self)
{
}

static void
qmi_client_pbm_class_init (QmiClientPbmClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;
}


QmiMessagePbmIndicationRegisterOutput *
qmi_client_pbm_indication_register_finish (
    QmiClientPbm *self,
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
    QmiMessagePbmIndicationRegisterOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pbm_indication_register_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pbm_indication_register_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pbm_indication_register (
    QmiClientPbm *self,
    QmiMessagePbmIndicationRegisterInput *input,
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

    request = __qmi_message_pbm_indication_register_request_create (
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


QmiMessagePbmGetCapabilitiesOutput *
qmi_client_pbm_get_capabilities_finish (
    QmiClientPbm *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_capabilities_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePbmGetCapabilitiesOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pbm_get_capabilities_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pbm_get_capabilities_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pbm_get_capabilities (
    QmiClientPbm *self,
    QmiMessagePbmGetCapabilitiesInput *input,
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

    request = __qmi_message_pbm_get_capabilities_request_create (
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
                             (GAsyncReadyCallback)get_capabilities_ready,
                             task);
}


QmiMessagePbmGetAllCapabilitiesOutput *
qmi_client_pbm_get_all_capabilities_finish (
    QmiClientPbm *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_all_capabilities_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePbmGetAllCapabilitiesOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pbm_get_all_capabilities_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pbm_get_all_capabilities_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pbm_get_all_capabilities (
    QmiClientPbm *self,
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

    request = __qmi_message_pbm_get_all_capabilities_request_create (
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
                             (GAsyncReadyCallback)get_all_capabilities_ready,
                             task);
}


QmiMessagePbmGetEmergencyListOutput *
qmi_client_pbm_get_emergency_list_finish (
    QmiClientPbm *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_emergency_list_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePbmGetEmergencyListOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pbm_get_emergency_list_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pbm_get_emergency_list_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pbm_get_emergency_list (
    QmiClientPbm *self,
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

    request = __qmi_message_pbm_get_emergency_list_request_create (
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
                             (GAsyncReadyCallback)get_emergency_list_ready,
                             task);
}

