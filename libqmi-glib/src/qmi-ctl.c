
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

#include "qmi-ctl.h"
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
    QMI_MESSAGE_CTL_SET_INSTANCE_ID = 0x0020,
    QMI_MESSAGE_CTL_GET_VERSION_INFO = 0x0021,
    QMI_MESSAGE_CTL_ALLOCATE_CID = 0x0022,
    QMI_MESSAGE_CTL_RELEASE_CID = 0x0023,
    QMI_MESSAGE_CTL_SET_DATA_FORMAT = 0x0026,
    QMI_MESSAGE_CTL_SYNC = 0x0027,
    QMI_MESSAGE_CTL_INTERNAL_PROXY_OPEN = 0xFF00,
    QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR = 0xFF22,
    QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR = 0xFF23,
} QmiMessageCtl;


typedef enum {
    QMI_INDICATION_CTL_SYNC = 0x0027,
} QmiIndicationCtl;


/*****************************************************************************/
/* INDICATION: Qmi Indication CTL Sync */


/* --- Output -- */

/* Note: no fields in the Output container */

static gchar *
indication_sync_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Sync\" (0x0027)\n",
                            line_prefix);

    return g_string_free (printable, FALSE);
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Set Instance ID */


/* --- Input -- */

struct _QmiMessageCtlSetInstanceIdInput {
    volatile gint ref_count;

    /* ID */
    gboolean arg_id_set;
    guint8 arg_id;
};

#define QMI_MESSAGE_CTL_SET_INSTANCE_ID_INPUT_TLV_ID 0x01

gboolean
qmi_message_ctl_set_instance_id_input_get_id (
    QmiMessageCtlSetInstanceIdInput *self,
    guint8 *value_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'ID' was not found in the message");
        return FALSE;
    }

    if (value_id)
        *value_id = self->arg_id;

    return TRUE;
}

gboolean
qmi_message_ctl_set_instance_id_input_set_id (
    QmiMessageCtlSetInstanceIdInput *self,
    guint8 value_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_id = value_id;
    self->arg_id_set = TRUE;

    return TRUE;
}

GType
qmi_message_ctl_set_instance_id_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlSetInstanceIdInput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_set_instance_id_input_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_set_instance_id_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlSetInstanceIdInput *
qmi_message_ctl_set_instance_id_input_ref (QmiMessageCtlSetInstanceIdInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_set_instance_id_input_unref (QmiMessageCtlSetInstanceIdInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlSetInstanceIdInput, self);
    }
}

QmiMessageCtlSetInstanceIdInput *
qmi_message_ctl_set_instance_id_input_new (void)
{
    QmiMessageCtlSetInstanceIdInput *self;

    self = g_slice_new0 (QmiMessageCtlSetInstanceIdInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_ctl_set_instance_id_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageCtlSetInstanceIdInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_CTL,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_CTL_SET_INSTANCE_ID);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set Instance ID' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'ID' TLV */
    if (input->arg_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_CTL_SET_INSTANCE_ID_INPUT_TLV_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'ID': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'ID': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'ID': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'ID' in message 'Set Instance ID'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageCtlSetInstanceIdOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Link ID */
    gboolean arg_link_id_set;
    guint16 arg_link_id;
};

#define QMI_MESSAGE_CTL_SET_INSTANCE_ID_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_CTL_SET_INSTANCE_ID_OUTPUT_TLV_LINK_ID 0x01

gboolean
qmi_message_ctl_set_instance_id_output_get_result (
    QmiMessageCtlSetInstanceIdOutput *self,
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
qmi_message_ctl_set_instance_id_output_get_link_id (
    QmiMessageCtlSetInstanceIdOutput *self,
    guint16 *value_link_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_link_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Link ID' was not found in the message");
        return FALSE;
    }

    if (value_link_id)
        *value_link_id = self->arg_link_id;

    return TRUE;
}

GType
qmi_message_ctl_set_instance_id_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlSetInstanceIdOutput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_set_instance_id_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_set_instance_id_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlSetInstanceIdOutput *
qmi_message_ctl_set_instance_id_output_ref (QmiMessageCtlSetInstanceIdOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_set_instance_id_output_unref (QmiMessageCtlSetInstanceIdOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlSetInstanceIdOutput, self);
    }
}

static gchar *
qmi_message_ctl_set_instance_id_input_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_SET_INSTANCE_ID_INPUT_TLV_ID, NULL, NULL)) == 0)
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_CTL_SET_INSTANCE_ID_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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
qmi_message_ctl_set_instance_id_output_link_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_SET_INSTANCE_ID_OUTPUT_TLV_LINK_ID, NULL, NULL)) == 0)
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

struct message_set_instance_id_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_instance_id_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_instance_id_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_CTL_SET_INSTANCE_ID_INPUT_TLV_ID:
            tlv_type_str = "ID";
            translated_value = qmi_message_ctl_set_instance_id_input_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_CTL_SET_INSTANCE_ID_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_CTL_SET_INSTANCE_ID_OUTPUT_TLV_LINK_ID:
            tlv_type_str = "Link ID";
            translated_value = qmi_message_ctl_set_instance_id_output_link_id_get_printable (
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
message_set_instance_id_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Instance ID\" (0x0020)\n",
                            line_prefix);

    {
        struct message_set_instance_id_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_instance_id_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageCtlSetInstanceIdOutput *
qmi_message_ctl_set_instance_id_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageCtlSetInstanceIdOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_CTL_SET_INSTANCE_ID);

    self = g_slice_new0 (QmiMessageCtlSetInstanceIdOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_SET_INSTANCE_ID_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ctl_set_instance_id_output_unref (self);
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
                qmi_message_ctl_set_instance_id_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_SET_INSTANCE_ID_OUTPUT_TLV_LINK_ID, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Link ID TLV: ");
                qmi_message_ctl_set_instance_id_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_link_id), error))
                goto qmi_message_ctl_set_instance_id_output_link_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Link ID' TLV", offset);
            }

            self->arg_link_id_set = TRUE;

qmi_message_ctl_set_instance_id_output_link_id_out:
            if (!self->arg_link_id_set) {
                qmi_message_ctl_set_instance_id_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Get Version Info */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_ctl_get_version_info_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_CTL,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_CTL_GET_VERSION_INFO);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageCtlGetVersionInfoOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Service list */
    gboolean arg_service_list_set;
    GArray *arg_service_list;
};

#define QMI_MESSAGE_CTL_GET_VERSION_INFO_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_CTL_GET_VERSION_INFO_OUTPUT_TLV_SERVICE_LIST 0x01

gboolean
qmi_message_ctl_get_version_info_output_get_result (
    QmiMessageCtlGetVersionInfoOutput *self,
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
qmi_message_ctl_get_version_info_output_get_service_list (
    QmiMessageCtlGetVersionInfoOutput *self,
    GArray **value_service_list,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_service_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Service list' was not found in the message");
        return FALSE;
    }

    if (value_service_list)
        *value_service_list = self->arg_service_list;

    return TRUE;
}

GType
qmi_message_ctl_get_version_info_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlGetVersionInfoOutput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_get_version_info_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_get_version_info_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlGetVersionInfoOutput *
qmi_message_ctl_get_version_info_output_ref (QmiMessageCtlGetVersionInfoOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_get_version_info_output_unref (QmiMessageCtlGetVersionInfoOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_service_list, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageCtlGetVersionInfoOutput, self);
    }
}

static gchar *
qmi_message_ctl_get_version_info_output_service_list_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_GET_VERSION_INFO_OUTPUT_TLV_SERVICE_LIST, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint service_list_i;
        guint8 service_list_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(service_list_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (service_list_i = 0; service_list_i < service_list_n_items; service_list_i++) {
            g_string_append_printf (printable, " [%u] = '", service_list_i);
            g_string_append (printable, "[");
            g_string_append (printable, " service = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_SERVICE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_service_get_string ((QmiService)tmp));
#elif defined  __QMI_SERVICE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_service_build_string_from_mask ((QmiService)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiService
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " major_version = '");

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " minor_version = '");

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

struct message_get_version_info_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_version_info_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_version_info_context *ctx)
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
        case QMI_MESSAGE_CTL_GET_VERSION_INFO_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_CTL_GET_VERSION_INFO_OUTPUT_TLV_SERVICE_LIST:
            tlv_type_str = "Service list";
            translated_value = qmi_message_ctl_get_version_info_output_service_list_get_printable (
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
message_get_version_info_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Version Info\" (0x0021)\n",
                            line_prefix);

    {
        struct message_get_version_info_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_version_info_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageCtlGetVersionInfoOutput *
qmi_message_ctl_get_version_info_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageCtlGetVersionInfoOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_CTL_GET_VERSION_INFO);

    self = g_slice_new0 (QmiMessageCtlGetVersionInfoOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_GET_VERSION_INFO_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ctl_get_version_info_output_unref (self);
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
                qmi_message_ctl_get_version_info_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_GET_VERSION_INFO_OUTPUT_TLV_SERVICE_LIST, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Service list TLV: ");
                qmi_message_ctl_get_version_info_output_unref (self);
                return NULL;
            }
            {
                guint service_list_i;
                guint8 service_list_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(service_list_n_items), error))
                    goto qmi_message_ctl_get_version_info_output_service_list_out;

                self->arg_service_list = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessageCtlGetVersionInfoOutputServiceListService),
                    (guint)service_list_n_items);

                for (service_list_i = 0; service_list_i < service_list_n_items; service_list_i++) {
                    QmiMessageCtlGetVersionInfoOutputServiceListService service_list_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                            goto qmi_message_ctl_get_version_info_output_service_list_out;
                        service_list_aux.service = (QmiService)tmp;
                    }
                    if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(service_list_aux.major_version), error))
                        goto qmi_message_ctl_get_version_info_output_service_list_out;
                    if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(service_list_aux.minor_version), error))
                        goto qmi_message_ctl_get_version_info_output_service_list_out;
                    g_array_insert_val (self->arg_service_list, service_list_i, service_list_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Service list' TLV", offset);
            }

            self->arg_service_list_set = TRUE;

qmi_message_ctl_get_version_info_output_service_list_out:
            if (!self->arg_service_list_set) {
                qmi_message_ctl_get_version_info_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Allocate CID */


/* --- Input -- */

struct _QmiMessageCtlAllocateCidInput {
    volatile gint ref_count;

    /* Service */
    gboolean arg_service_set;
    guint8 arg_service;
};

#define QMI_MESSAGE_CTL_ALLOCATE_CID_INPUT_TLV_SERVICE 0x01

gboolean
qmi_message_ctl_allocate_cid_input_get_service (
    QmiMessageCtlAllocateCidInput *self,
    QmiService *value_service,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_service_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Service' was not found in the message");
        return FALSE;
    }

    if (value_service)
        *value_service = (QmiService)(self->arg_service);

    return TRUE;
}

gboolean
qmi_message_ctl_allocate_cid_input_set_service (
    QmiMessageCtlAllocateCidInput *self,
    QmiService value_service,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_service = (guint8)(value_service);
    self->arg_service_set = TRUE;

    return TRUE;
}

GType
qmi_message_ctl_allocate_cid_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlAllocateCidInput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_allocate_cid_input_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_allocate_cid_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlAllocateCidInput *
qmi_message_ctl_allocate_cid_input_ref (QmiMessageCtlAllocateCidInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_allocate_cid_input_unref (QmiMessageCtlAllocateCidInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlAllocateCidInput, self);
    }
}

QmiMessageCtlAllocateCidInput *
qmi_message_ctl_allocate_cid_input_new (void)
{
    QmiMessageCtlAllocateCidInput *self;

    self = g_slice_new0 (QmiMessageCtlAllocateCidInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_ctl_allocate_cid_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageCtlAllocateCidInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_CTL,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_CTL_ALLOCATE_CID);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Allocate CID' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Service' TLV */
    if (input->arg_service_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_CTL_ALLOCATE_CID_INPUT_TLV_SERVICE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Service': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_service;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Service': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Service': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Service' in message 'Allocate CID'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageCtlAllocateCidOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Allocation Info */
    gboolean arg_allocation_info_set;
    guint8 arg_allocation_info_service;
    guint8 arg_allocation_info_cid;
};

#define QMI_MESSAGE_CTL_ALLOCATE_CID_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_CTL_ALLOCATE_CID_OUTPUT_TLV_ALLOCATION_INFO 0x01

gboolean
qmi_message_ctl_allocate_cid_output_get_result (
    QmiMessageCtlAllocateCidOutput *self,
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
qmi_message_ctl_allocate_cid_output_get_allocation_info (
    QmiMessageCtlAllocateCidOutput *self,
    QmiService *value_allocation_info_service,
    guint8 *value_allocation_info_cid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_allocation_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Allocation Info' was not found in the message");
        return FALSE;
    }

    if (value_allocation_info_service)
        *value_allocation_info_service = (QmiService)(self->arg_allocation_info_service);
    if (value_allocation_info_cid)
        *value_allocation_info_cid = self->arg_allocation_info_cid;

    return TRUE;
}

GType
qmi_message_ctl_allocate_cid_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlAllocateCidOutput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_allocate_cid_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_allocate_cid_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlAllocateCidOutput *
qmi_message_ctl_allocate_cid_output_ref (QmiMessageCtlAllocateCidOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_allocate_cid_output_unref (QmiMessageCtlAllocateCidOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlAllocateCidOutput, self);
    }
}

static gchar *
qmi_message_ctl_allocate_cid_input_service_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_ALLOCATE_CID_INPUT_TLV_SERVICE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_SERVICE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_service_get_string ((QmiService)tmp));
#elif defined  __QMI_SERVICE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_service_build_string_from_mask ((QmiService)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiService
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
qmi_message_ctl_allocate_cid_output_allocation_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_ALLOCATE_CID_OUTPUT_TLV_ALLOCATION_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " service = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_SERVICE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_service_get_string ((QmiService)tmp));
#elif defined  __QMI_SERVICE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_service_build_string_from_mask ((QmiService)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiService
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " cid = '");

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

struct message_allocate_cid_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_allocate_cid_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_allocate_cid_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_CTL_ALLOCATE_CID_INPUT_TLV_SERVICE:
            tlv_type_str = "Service";
            translated_value = qmi_message_ctl_allocate_cid_input_service_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_CTL_ALLOCATE_CID_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_CTL_ALLOCATE_CID_OUTPUT_TLV_ALLOCATION_INFO:
            tlv_type_str = "Allocation Info";
            translated_value = qmi_message_ctl_allocate_cid_output_allocation_info_get_printable (
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
message_allocate_cid_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Allocate CID\" (0x0022)\n",
                            line_prefix);

    {
        struct message_allocate_cid_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_allocate_cid_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageCtlAllocateCidOutput *
qmi_message_ctl_allocate_cid_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageCtlAllocateCidOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_CTL_ALLOCATE_CID);

    self = g_slice_new0 (QmiMessageCtlAllocateCidOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_ALLOCATE_CID_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ctl_allocate_cid_output_unref (self);
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
                qmi_message_ctl_allocate_cid_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_ALLOCATE_CID_OUTPUT_TLV_ALLOCATION_INFO, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Allocation Info TLV: ");
                qmi_message_ctl_allocate_cid_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_message_ctl_allocate_cid_output_allocation_info_out;
                self->arg_allocation_info_service = (QmiService)tmp;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_allocation_info_cid), error))
                goto qmi_message_ctl_allocate_cid_output_allocation_info_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Allocation Info' TLV", offset);
            }

            self->arg_allocation_info_set = TRUE;

qmi_message_ctl_allocate_cid_output_allocation_info_out:
            if (!self->arg_allocation_info_set) {
                qmi_message_ctl_allocate_cid_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Release CID */


/* --- Input -- */

struct _QmiMessageCtlReleaseCidInput {
    volatile gint ref_count;

    /* Release Info */
    gboolean arg_release_info_set;
    guint8 arg_release_info_service;
    guint8 arg_release_info_cid;
};

#define QMI_MESSAGE_CTL_RELEASE_CID_INPUT_TLV_RELEASE_INFO 0x01

gboolean
qmi_message_ctl_release_cid_input_get_release_info (
    QmiMessageCtlReleaseCidInput *self,
    QmiService *value_release_info_service,
    guint8 *value_release_info_cid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_release_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Release Info' was not found in the message");
        return FALSE;
    }

    if (value_release_info_service)
        *value_release_info_service = (QmiService)(self->arg_release_info_service);
    if (value_release_info_cid)
        *value_release_info_cid = self->arg_release_info_cid;

    return TRUE;
}

gboolean
qmi_message_ctl_release_cid_input_set_release_info (
    QmiMessageCtlReleaseCidInput *self,
    QmiService value_release_info_service,
    guint8 value_release_info_cid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_release_info_service = (guint8)(value_release_info_service);
    self->arg_release_info_cid = value_release_info_cid;
    self->arg_release_info_set = TRUE;

    return TRUE;
}

GType
qmi_message_ctl_release_cid_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlReleaseCidInput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_release_cid_input_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_release_cid_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlReleaseCidInput *
qmi_message_ctl_release_cid_input_ref (QmiMessageCtlReleaseCidInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_release_cid_input_unref (QmiMessageCtlReleaseCidInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlReleaseCidInput, self);
    }
}

QmiMessageCtlReleaseCidInput *
qmi_message_ctl_release_cid_input_new (void)
{
    QmiMessageCtlReleaseCidInput *self;

    self = g_slice_new0 (QmiMessageCtlReleaseCidInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_ctl_release_cid_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageCtlReleaseCidInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_CTL,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_CTL_RELEASE_CID);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Release CID' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Release Info' TLV */
    if (input->arg_release_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_CTL_RELEASE_CID_INPUT_TLV_RELEASE_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Release Info': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_release_info_service;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Release Info': ");
                return NULL;
            }
        }
        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_release_info_cid, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Release Info': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Release Info': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Release Info' in message 'Release CID'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageCtlReleaseCidOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Release Info */
    gboolean arg_release_info_set;
    guint8 arg_release_info_service;
    guint8 arg_release_info_cid;
};

#define QMI_MESSAGE_CTL_RELEASE_CID_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_CTL_RELEASE_CID_OUTPUT_TLV_RELEASE_INFO 0x01

gboolean
qmi_message_ctl_release_cid_output_get_result (
    QmiMessageCtlReleaseCidOutput *self,
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
qmi_message_ctl_release_cid_output_get_release_info (
    QmiMessageCtlReleaseCidOutput *self,
    QmiService *value_release_info_service,
    guint8 *value_release_info_cid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_release_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Release Info' was not found in the message");
        return FALSE;
    }

    if (value_release_info_service)
        *value_release_info_service = (QmiService)(self->arg_release_info_service);
    if (value_release_info_cid)
        *value_release_info_cid = self->arg_release_info_cid;

    return TRUE;
}

GType
qmi_message_ctl_release_cid_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlReleaseCidOutput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_release_cid_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_release_cid_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlReleaseCidOutput *
qmi_message_ctl_release_cid_output_ref (QmiMessageCtlReleaseCidOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_release_cid_output_unref (QmiMessageCtlReleaseCidOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlReleaseCidOutput, self);
    }
}

static gchar *
qmi_message_ctl_release_cid_input_release_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_RELEASE_CID_INPUT_TLV_RELEASE_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " service = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_SERVICE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_service_get_string ((QmiService)tmp));
#elif defined  __QMI_SERVICE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_service_build_string_from_mask ((QmiService)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiService
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " cid = '");

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
qmi_message_ctl_release_cid_output_release_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_RELEASE_CID_OUTPUT_TLV_RELEASE_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " service = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_SERVICE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_service_get_string ((QmiService)tmp));
#elif defined  __QMI_SERVICE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_service_build_string_from_mask ((QmiService)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiService
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " cid = '");

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

struct message_release_cid_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_release_cid_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_release_cid_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_CTL_RELEASE_CID_INPUT_TLV_RELEASE_INFO:
            tlv_type_str = "Release Info";
            translated_value = qmi_message_ctl_release_cid_input_release_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_CTL_RELEASE_CID_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_CTL_RELEASE_CID_OUTPUT_TLV_RELEASE_INFO:
            tlv_type_str = "Release Info";
            translated_value = qmi_message_ctl_release_cid_output_release_info_get_printable (
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
message_release_cid_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Release CID\" (0x0023)\n",
                            line_prefix);

    {
        struct message_release_cid_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_release_cid_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageCtlReleaseCidOutput *
qmi_message_ctl_release_cid_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageCtlReleaseCidOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_CTL_RELEASE_CID);

    self = g_slice_new0 (QmiMessageCtlReleaseCidOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_RELEASE_CID_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ctl_release_cid_output_unref (self);
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
                qmi_message_ctl_release_cid_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_RELEASE_CID_OUTPUT_TLV_RELEASE_INFO, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Release Info TLV: ");
                qmi_message_ctl_release_cid_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_message_ctl_release_cid_output_release_info_out;
                self->arg_release_info_service = (QmiService)tmp;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_release_info_cid), error))
                goto qmi_message_ctl_release_cid_output_release_info_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Release Info' TLV", offset);
            }

            self->arg_release_info_set = TRUE;

qmi_message_ctl_release_cid_output_release_info_out:
            if (!self->arg_release_info_set) {
                qmi_message_ctl_release_cid_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Set Data Format */


/* --- Input -- */

struct _QmiMessageCtlSetDataFormatInput {
    volatile gint ref_count;

    /* Protocol */
    gboolean arg_protocol_set;
    guint16 arg_protocol;

    /* Format */
    gboolean arg_format_set;
    guint8 arg_format;
};

#define QMI_MESSAGE_CTL_SET_DATA_FORMAT_INPUT_TLV_PROTOCOL 0x10
#define QMI_MESSAGE_CTL_SET_DATA_FORMAT_INPUT_TLV_FORMAT 0x01

gboolean
qmi_message_ctl_set_data_format_input_get_protocol (
    QmiMessageCtlSetDataFormatInput *self,
    QmiCtlDataLinkProtocol *value_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_protocol_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Protocol' was not found in the message");
        return FALSE;
    }

    if (value_protocol)
        *value_protocol = (QmiCtlDataLinkProtocol)(self->arg_protocol);

    return TRUE;
}

gboolean
qmi_message_ctl_set_data_format_input_set_protocol (
    QmiMessageCtlSetDataFormatInput *self,
    QmiCtlDataLinkProtocol value_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_protocol = (guint16)(value_protocol);
    self->arg_protocol_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ctl_set_data_format_input_get_format (
    QmiMessageCtlSetDataFormatInput *self,
    QmiCtlDataFormat *value_format,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_format_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Format' was not found in the message");
        return FALSE;
    }

    if (value_format)
        *value_format = (QmiCtlDataFormat)(self->arg_format);

    return TRUE;
}

gboolean
qmi_message_ctl_set_data_format_input_set_format (
    QmiMessageCtlSetDataFormatInput *self,
    QmiCtlDataFormat value_format,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_format = (guint8)(value_format);
    self->arg_format_set = TRUE;

    return TRUE;
}

GType
qmi_message_ctl_set_data_format_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlSetDataFormatInput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_set_data_format_input_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_set_data_format_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlSetDataFormatInput *
qmi_message_ctl_set_data_format_input_ref (QmiMessageCtlSetDataFormatInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_set_data_format_input_unref (QmiMessageCtlSetDataFormatInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlSetDataFormatInput, self);
    }
}

QmiMessageCtlSetDataFormatInput *
qmi_message_ctl_set_data_format_input_new (void)
{
    QmiMessageCtlSetDataFormatInput *self;

    self = g_slice_new0 (QmiMessageCtlSetDataFormatInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_ctl_set_data_format_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageCtlSetDataFormatInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_CTL,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_CTL_SET_DATA_FORMAT);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set Data Format' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Protocol' TLV */
    if (input->arg_protocol_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_CTL_SET_DATA_FORMAT_INPUT_TLV_PROTOCOL, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Protocol': ");
            return NULL;
        }

        {
            guint16 tmp;

            tmp = (guint16) input->arg_protocol;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Protocol': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Protocol': ");
            return NULL;
        }
    }

    /* Try to add the 'Format' TLV */
    if (input->arg_format_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_CTL_SET_DATA_FORMAT_INPUT_TLV_FORMAT, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Format': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_format;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Format': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Format': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Format' in message 'Set Data Format'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageCtlSetDataFormatOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Protocol */
    gboolean arg_protocol_set;
    guint16 arg_protocol;
};

#define QMI_MESSAGE_CTL_SET_DATA_FORMAT_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_CTL_SET_DATA_FORMAT_OUTPUT_TLV_PROTOCOL 0x10

gboolean
qmi_message_ctl_set_data_format_output_get_result (
    QmiMessageCtlSetDataFormatOutput *self,
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
qmi_message_ctl_set_data_format_output_get_protocol (
    QmiMessageCtlSetDataFormatOutput *self,
    QmiCtlDataLinkProtocol *value_protocol,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_protocol_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Protocol' was not found in the message");
        return FALSE;
    }

    if (value_protocol)
        *value_protocol = (QmiCtlDataLinkProtocol)(self->arg_protocol);

    return TRUE;
}

GType
qmi_message_ctl_set_data_format_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlSetDataFormatOutput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_set_data_format_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_set_data_format_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlSetDataFormatOutput *
qmi_message_ctl_set_data_format_output_ref (QmiMessageCtlSetDataFormatOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_set_data_format_output_unref (QmiMessageCtlSetDataFormatOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlSetDataFormatOutput, self);
    }
}

static gchar *
qmi_message_ctl_set_data_format_input_protocol_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_SET_DATA_FORMAT_INPUT_TLV_PROTOCOL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_CTL_DATA_LINK_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ctl_data_link_protocol_get_string ((QmiCtlDataLinkProtocol)tmp));
#elif defined  __QMI_CTL_DATA_LINK_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ctl_data_link_protocol_build_string_from_mask ((QmiCtlDataLinkProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiCtlDataLinkProtocol
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
qmi_message_ctl_set_data_format_input_format_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_SET_DATA_FORMAT_INPUT_TLV_FORMAT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_CTL_DATA_FORMAT_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ctl_data_format_get_string ((QmiCtlDataFormat)tmp));
#elif defined  __QMI_CTL_DATA_FORMAT_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ctl_data_format_build_string_from_mask ((QmiCtlDataFormat)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiCtlDataFormat
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
qmi_message_ctl_set_data_format_output_protocol_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_SET_DATA_FORMAT_OUTPUT_TLV_PROTOCOL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_CTL_DATA_LINK_PROTOCOL_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ctl_data_link_protocol_get_string ((QmiCtlDataLinkProtocol)tmp));
#elif defined  __QMI_CTL_DATA_LINK_PROTOCOL_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ctl_data_link_protocol_build_string_from_mask ((QmiCtlDataLinkProtocol)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiCtlDataLinkProtocol
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
        case QMI_MESSAGE_CTL_SET_DATA_FORMAT_INPUT_TLV_PROTOCOL:
            tlv_type_str = "Protocol";
            translated_value = qmi_message_ctl_set_data_format_input_protocol_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_CTL_SET_DATA_FORMAT_INPUT_TLV_FORMAT:
            tlv_type_str = "Format";
            translated_value = qmi_message_ctl_set_data_format_input_format_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_CTL_SET_DATA_FORMAT_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_CTL_SET_DATA_FORMAT_OUTPUT_TLV_PROTOCOL:
            tlv_type_str = "Protocol";
            translated_value = qmi_message_ctl_set_data_format_output_protocol_get_printable (
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
                            "%s  message     = \"Set Data Format\" (0x0026)\n",
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

QmiMessageCtlSetDataFormatOutput *
qmi_message_ctl_set_data_format_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageCtlSetDataFormatOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_CTL_SET_DATA_FORMAT);

    self = g_slice_new0 (QmiMessageCtlSetDataFormatOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_SET_DATA_FORMAT_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ctl_set_data_format_output_unref (self);
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
                qmi_message_ctl_set_data_format_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_SET_DATA_FORMAT_OUTPUT_TLV_PROTOCOL, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Protocol TLV: ");
                qmi_message_ctl_set_data_format_output_unref (self);
                return NULL;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_message_ctl_set_data_format_output_protocol_out;
                self->arg_protocol = (QmiCtlDataLinkProtocol)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Protocol' TLV", offset);
            }

            self->arg_protocol_set = TRUE;

qmi_message_ctl_set_data_format_output_protocol_out:
            if (!self->arg_protocol_set) {
                qmi_message_ctl_set_data_format_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Sync */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_ctl_sync_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_CTL,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_CTL_SYNC);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageCtlSyncOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_CTL_SYNC_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_ctl_sync_output_get_result (
    QmiMessageCtlSyncOutput *self,
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
qmi_message_ctl_sync_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlSyncOutput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_sync_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_sync_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlSyncOutput *
qmi_message_ctl_sync_output_ref (QmiMessageCtlSyncOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_sync_output_unref (QmiMessageCtlSyncOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlSyncOutput, self);
    }
}

struct message_sync_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_sync_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_sync_context *ctx)
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
        case QMI_MESSAGE_CTL_SYNC_OUTPUT_TLV_RESULT:
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
message_sync_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Sync\" (0x0027)\n",
                            line_prefix);

    {
        struct message_sync_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_sync_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageCtlSyncOutput *
qmi_message_ctl_sync_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageCtlSyncOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_CTL_SYNC);

    self = g_slice_new0 (QmiMessageCtlSyncOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_SYNC_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ctl_sync_output_unref (self);
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
                qmi_message_ctl_sync_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Internal Proxy Open */


/* --- Input -- */

struct _QmiMessageCtlInternalProxyOpenInput {
    volatile gint ref_count;

    /* Device Path */
    gboolean arg_device_path_set;
    gchar *arg_device_path;
};

#define QMI_MESSAGE_CTL_INTERNAL_PROXY_OPEN_INPUT_TLV_DEVICE_PATH 0x01

gboolean
qmi_message_ctl_internal_proxy_open_input_get_device_path (
    QmiMessageCtlInternalProxyOpenInput *self,
    const gchar **value_device_path,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_device_path_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Device Path' was not found in the message");
        return FALSE;
    }

    if (value_device_path)
        *value_device_path = self->arg_device_path;

    return TRUE;
}

gboolean
qmi_message_ctl_internal_proxy_open_input_set_device_path (
    QmiMessageCtlInternalProxyOpenInput *self,
    const gchar *value_device_path,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_free (self->arg_device_path);
    self->arg_device_path = g_strdup (value_device_path ? value_device_path : "");
    self->arg_device_path_set = TRUE;

    return TRUE;
}

GType
qmi_message_ctl_internal_proxy_open_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlInternalProxyOpenInput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_internal_proxy_open_input_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_internal_proxy_open_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlInternalProxyOpenInput *
qmi_message_ctl_internal_proxy_open_input_ref (QmiMessageCtlInternalProxyOpenInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_internal_proxy_open_input_unref (QmiMessageCtlInternalProxyOpenInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_device_path, (GDestroyNotify)g_free);
        g_slice_free (QmiMessageCtlInternalProxyOpenInput, self);
    }
}

QmiMessageCtlInternalProxyOpenInput *
qmi_message_ctl_internal_proxy_open_input_new (void)
{
    QmiMessageCtlInternalProxyOpenInput *self;

    self = g_slice_new0 (QmiMessageCtlInternalProxyOpenInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_ctl_internal_proxy_open_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageCtlInternalProxyOpenInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_CTL,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_CTL_INTERNAL_PROXY_OPEN);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Internal Proxy Open' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Device Path' TLV */
    if (input->arg_device_path_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_CTL_INTERNAL_PROXY_OPEN_INPUT_TLV_DEVICE_PATH, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Device Path': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_string (self, 0, input->arg_device_path, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'Device Path': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Device Path': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Device Path' in message 'Internal Proxy Open'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageCtlInternalProxyOpenOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_CTL_INTERNAL_PROXY_OPEN_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_ctl_internal_proxy_open_output_get_result (
    QmiMessageCtlInternalProxyOpenOutput *self,
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
qmi_message_ctl_internal_proxy_open_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlInternalProxyOpenOutput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_internal_proxy_open_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_internal_proxy_open_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlInternalProxyOpenOutput *
qmi_message_ctl_internal_proxy_open_output_ref (QmiMessageCtlInternalProxyOpenOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_internal_proxy_open_output_unref (QmiMessageCtlInternalProxyOpenOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlInternalProxyOpenOutput, self);
    }
}

static gchar *
qmi_message_ctl_internal_proxy_open_input_device_path_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_INTERNAL_PROXY_OPEN_INPUT_TLV_DEVICE_PATH, NULL, NULL)) == 0)
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

struct message_internal_proxy_open_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_internal_proxy_open_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_internal_proxy_open_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_CTL_INTERNAL_PROXY_OPEN_INPUT_TLV_DEVICE_PATH:
            tlv_type_str = "Device Path";
            translated_value = qmi_message_ctl_internal_proxy_open_input_device_path_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_CTL_INTERNAL_PROXY_OPEN_OUTPUT_TLV_RESULT:
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
message_internal_proxy_open_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Internal Proxy Open\" (0xFF00)\n",
                            line_prefix);

    {
        struct message_internal_proxy_open_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_internal_proxy_open_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageCtlInternalProxyOpenOutput *
qmi_message_ctl_internal_proxy_open_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageCtlInternalProxyOpenOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_CTL_INTERNAL_PROXY_OPEN);

    self = g_slice_new0 (QmiMessageCtlInternalProxyOpenOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_INTERNAL_PROXY_OPEN_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ctl_internal_proxy_open_output_unref (self);
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
                qmi_message_ctl_internal_proxy_open_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Internal Allocate CID QRTR */


/* --- Input -- */

struct _QmiMessageCtlInternalAllocateCidQrtrInput {
    volatile gint ref_count;

    /* Service */
    gboolean arg_service_set;
    guint16 arg_service;
};

#define QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_INPUT_TLV_SERVICE 0x01

gboolean
qmi_message_ctl_internal_allocate_cid_qrtr_input_get_service (
    QmiMessageCtlInternalAllocateCidQrtrInput *self,
    QmiService *value_service,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_service_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Service' was not found in the message");
        return FALSE;
    }

    if (value_service)
        *value_service = (QmiService)(self->arg_service);

    return TRUE;
}

gboolean
qmi_message_ctl_internal_allocate_cid_qrtr_input_set_service (
    QmiMessageCtlInternalAllocateCidQrtrInput *self,
    QmiService value_service,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_service = (guint16)(value_service);
    self->arg_service_set = TRUE;

    return TRUE;
}

GType
qmi_message_ctl_internal_allocate_cid_qrtr_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlInternalAllocateCidQrtrInput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_internal_allocate_cid_qrtr_input_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_internal_allocate_cid_qrtr_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlInternalAllocateCidQrtrInput *
qmi_message_ctl_internal_allocate_cid_qrtr_input_ref (QmiMessageCtlInternalAllocateCidQrtrInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_internal_allocate_cid_qrtr_input_unref (QmiMessageCtlInternalAllocateCidQrtrInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlInternalAllocateCidQrtrInput, self);
    }
}

QmiMessageCtlInternalAllocateCidQrtrInput *
qmi_message_ctl_internal_allocate_cid_qrtr_input_new (void)
{
    QmiMessageCtlInternalAllocateCidQrtrInput *self;

    self = g_slice_new0 (QmiMessageCtlInternalAllocateCidQrtrInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_ctl_internal_allocate_cid_qrtr_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageCtlInternalAllocateCidQrtrInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_CTL,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Internal Allocate CID QRTR' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Service' TLV */
    if (input->arg_service_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_INPUT_TLV_SERVICE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Service': ");
            return NULL;
        }

        {
            guint16 tmp;

            tmp = (guint16) input->arg_service;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Service': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Service': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Service' in message 'Internal Allocate CID QRTR'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageCtlInternalAllocateCidQrtrOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Allocation Info */
    gboolean arg_allocation_info_set;
    guint16 arg_allocation_info_service;
    guint8 arg_allocation_info_cid;
};

#define QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_OUTPUT_TLV_ALLOCATION_INFO 0x01

gboolean
qmi_message_ctl_internal_allocate_cid_qrtr_output_get_result (
    QmiMessageCtlInternalAllocateCidQrtrOutput *self,
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
qmi_message_ctl_internal_allocate_cid_qrtr_output_get_allocation_info (
    QmiMessageCtlInternalAllocateCidQrtrOutput *self,
    QmiService *value_allocation_info_service,
    guint8 *value_allocation_info_cid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_allocation_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Allocation Info' was not found in the message");
        return FALSE;
    }

    if (value_allocation_info_service)
        *value_allocation_info_service = (QmiService)(self->arg_allocation_info_service);
    if (value_allocation_info_cid)
        *value_allocation_info_cid = self->arg_allocation_info_cid;

    return TRUE;
}

GType
qmi_message_ctl_internal_allocate_cid_qrtr_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlInternalAllocateCidQrtrOutput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_internal_allocate_cid_qrtr_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_internal_allocate_cid_qrtr_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlInternalAllocateCidQrtrOutput *
qmi_message_ctl_internal_allocate_cid_qrtr_output_ref (QmiMessageCtlInternalAllocateCidQrtrOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_internal_allocate_cid_qrtr_output_unref (QmiMessageCtlInternalAllocateCidQrtrOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlInternalAllocateCidQrtrOutput, self);
    }
}

static gchar *
qmi_message_ctl_internal_allocate_cid_qrtr_input_service_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_INPUT_TLV_SERVICE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_SERVICE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_service_get_string ((QmiService)tmp));
#elif defined  __QMI_SERVICE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_service_build_string_from_mask ((QmiService)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiService
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
qmi_message_ctl_internal_allocate_cid_qrtr_output_allocation_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_OUTPUT_TLV_ALLOCATION_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " service = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_SERVICE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_service_get_string ((QmiService)tmp));
#elif defined  __QMI_SERVICE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_service_build_string_from_mask ((QmiService)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiService
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " cid = '");

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

struct message_internal_allocate_cid_qrtr_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_internal_allocate_cid_qrtr_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_internal_allocate_cid_qrtr_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_INPUT_TLV_SERVICE:
            tlv_type_str = "Service";
            translated_value = qmi_message_ctl_internal_allocate_cid_qrtr_input_service_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_OUTPUT_TLV_ALLOCATION_INFO:
            tlv_type_str = "Allocation Info";
            translated_value = qmi_message_ctl_internal_allocate_cid_qrtr_output_allocation_info_get_printable (
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
message_internal_allocate_cid_qrtr_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Internal Allocate CID QRTR\" (0xFF22)\n",
                            line_prefix);

    {
        struct message_internal_allocate_cid_qrtr_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_internal_allocate_cid_qrtr_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageCtlInternalAllocateCidQrtrOutput *
qmi_message_ctl_internal_allocate_cid_qrtr_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageCtlInternalAllocateCidQrtrOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR);

    self = g_slice_new0 (QmiMessageCtlInternalAllocateCidQrtrOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ctl_internal_allocate_cid_qrtr_output_unref (self);
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
                qmi_message_ctl_internal_allocate_cid_qrtr_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_OUTPUT_TLV_ALLOCATION_INFO, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Allocation Info TLV: ");
                qmi_message_ctl_internal_allocate_cid_qrtr_output_unref (self);
                return NULL;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_message_ctl_internal_allocate_cid_qrtr_output_allocation_info_out;
                self->arg_allocation_info_service = (QmiService)tmp;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_allocation_info_cid), error))
                goto qmi_message_ctl_internal_allocate_cid_qrtr_output_allocation_info_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Allocation Info' TLV", offset);
            }

            self->arg_allocation_info_set = TRUE;

qmi_message_ctl_internal_allocate_cid_qrtr_output_allocation_info_out:
            if (!self->arg_allocation_info_set) {
                qmi_message_ctl_internal_allocate_cid_qrtr_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Internal Release CID QRTR */


/* --- Input -- */

struct _QmiMessageCtlInternalReleaseCidQrtrInput {
    volatile gint ref_count;

    /* Release Info */
    gboolean arg_release_info_set;
    guint16 arg_release_info_service;
    guint8 arg_release_info_cid;
};

#define QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_INPUT_TLV_RELEASE_INFO 0x01

gboolean
qmi_message_ctl_internal_release_cid_qrtr_input_get_release_info (
    QmiMessageCtlInternalReleaseCidQrtrInput *self,
    QmiService *value_release_info_service,
    guint8 *value_release_info_cid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_release_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Release Info' was not found in the message");
        return FALSE;
    }

    if (value_release_info_service)
        *value_release_info_service = (QmiService)(self->arg_release_info_service);
    if (value_release_info_cid)
        *value_release_info_cid = self->arg_release_info_cid;

    return TRUE;
}

gboolean
qmi_message_ctl_internal_release_cid_qrtr_input_set_release_info (
    QmiMessageCtlInternalReleaseCidQrtrInput *self,
    QmiService value_release_info_service,
    guint8 value_release_info_cid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_release_info_service = (guint16)(value_release_info_service);
    self->arg_release_info_cid = value_release_info_cid;
    self->arg_release_info_set = TRUE;

    return TRUE;
}

GType
qmi_message_ctl_internal_release_cid_qrtr_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlInternalReleaseCidQrtrInput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_internal_release_cid_qrtr_input_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_internal_release_cid_qrtr_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlInternalReleaseCidQrtrInput *
qmi_message_ctl_internal_release_cid_qrtr_input_ref (QmiMessageCtlInternalReleaseCidQrtrInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_internal_release_cid_qrtr_input_unref (QmiMessageCtlInternalReleaseCidQrtrInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlInternalReleaseCidQrtrInput, self);
    }
}

QmiMessageCtlInternalReleaseCidQrtrInput *
qmi_message_ctl_internal_release_cid_qrtr_input_new (void)
{
    QmiMessageCtlInternalReleaseCidQrtrInput *self;

    self = g_slice_new0 (QmiMessageCtlInternalReleaseCidQrtrInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_ctl_internal_release_cid_qrtr_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageCtlInternalReleaseCidQrtrInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_CTL,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Internal Release CID QRTR' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Release Info' TLV */
    if (input->arg_release_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_INPUT_TLV_RELEASE_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Release Info': ");
            return NULL;
        }

        {
            guint16 tmp;

            tmp = (guint16) input->arg_release_info_service;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Release Info': ");
                return NULL;
            }
        }
        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_release_info_cid, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Release Info': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Release Info': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Release Info' in message 'Internal Release CID QRTR'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageCtlInternalReleaseCidQrtrOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Release Info */
    gboolean arg_release_info_set;
    guint16 arg_release_info_service;
    guint8 arg_release_info_cid;
};

#define QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_OUTPUT_TLV_RELEASE_INFO 0x01

gboolean
qmi_message_ctl_internal_release_cid_qrtr_output_get_result (
    QmiMessageCtlInternalReleaseCidQrtrOutput *self,
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
qmi_message_ctl_internal_release_cid_qrtr_output_get_release_info (
    QmiMessageCtlInternalReleaseCidQrtrOutput *self,
    QmiService *value_release_info_service,
    guint8 *value_release_info_cid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_release_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Release Info' was not found in the message");
        return FALSE;
    }

    if (value_release_info_service)
        *value_release_info_service = (QmiService)(self->arg_release_info_service);
    if (value_release_info_cid)
        *value_release_info_cid = self->arg_release_info_cid;

    return TRUE;
}

GType
qmi_message_ctl_internal_release_cid_qrtr_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageCtlInternalReleaseCidQrtrOutput"),
                                          (GBoxedCopyFunc) qmi_message_ctl_internal_release_cid_qrtr_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ctl_internal_release_cid_qrtr_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageCtlInternalReleaseCidQrtrOutput *
qmi_message_ctl_internal_release_cid_qrtr_output_ref (QmiMessageCtlInternalReleaseCidQrtrOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ctl_internal_release_cid_qrtr_output_unref (QmiMessageCtlInternalReleaseCidQrtrOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageCtlInternalReleaseCidQrtrOutput, self);
    }
}

static gchar *
qmi_message_ctl_internal_release_cid_qrtr_input_release_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_INPUT_TLV_RELEASE_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " service = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_SERVICE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_service_get_string ((QmiService)tmp));
#elif defined  __QMI_SERVICE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_service_build_string_from_mask ((QmiService)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiService
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " cid = '");

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
qmi_message_ctl_internal_release_cid_qrtr_output_release_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_OUTPUT_TLV_RELEASE_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " service = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_SERVICE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_service_get_string ((QmiService)tmp));
#elif defined  __QMI_SERVICE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_service_build_string_from_mask ((QmiService)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiService
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " cid = '");

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

struct message_internal_release_cid_qrtr_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_internal_release_cid_qrtr_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_internal_release_cid_qrtr_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_INPUT_TLV_RELEASE_INFO:
            tlv_type_str = "Release Info";
            translated_value = qmi_message_ctl_internal_release_cid_qrtr_input_release_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_OUTPUT_TLV_RELEASE_INFO:
            tlv_type_str = "Release Info";
            translated_value = qmi_message_ctl_internal_release_cid_qrtr_output_release_info_get_printable (
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
message_internal_release_cid_qrtr_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Internal Release CID QRTR\" (0xFF23)\n",
                            line_prefix);

    {
        struct message_internal_release_cid_qrtr_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_internal_release_cid_qrtr_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageCtlInternalReleaseCidQrtrOutput *
qmi_message_ctl_internal_release_cid_qrtr_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageCtlInternalReleaseCidQrtrOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR);

    self = g_slice_new0 (QmiMessageCtlInternalReleaseCidQrtrOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ctl_internal_release_cid_qrtr_output_unref (self);
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
                qmi_message_ctl_internal_release_cid_qrtr_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_OUTPUT_TLV_RELEASE_INFO, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Release Info TLV: ");
                qmi_message_ctl_internal_release_cid_qrtr_output_unref (self);
                return NULL;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_message_ctl_internal_release_cid_qrtr_output_release_info_out;
                self->arg_release_info_service = (QmiService)tmp;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_release_info_cid), error))
                goto qmi_message_ctl_internal_release_cid_qrtr_output_release_info_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Release Info' TLV", offset);
            }

            self->arg_release_info_set = TRUE;

qmi_message_ctl_internal_release_cid_qrtr_output_release_info_out:
            if (!self->arg_release_info_set) {
                qmi_message_ctl_internal_release_cid_qrtr_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: CTL */


gchar *
__qmi_message_ctl_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_CTL_SYNC:
            return indication_sync_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_CTL_SET_INSTANCE_ID:
                return message_set_instance_id_get_printable (self, line_prefix);
            case QMI_MESSAGE_CTL_GET_VERSION_INFO:
                return message_get_version_info_get_printable (self, line_prefix);
            case QMI_MESSAGE_CTL_ALLOCATE_CID:
                return message_allocate_cid_get_printable (self, line_prefix);
            case QMI_MESSAGE_CTL_RELEASE_CID:
                return message_release_cid_get_printable (self, line_prefix);
            case QMI_MESSAGE_CTL_SET_DATA_FORMAT:
                return message_set_data_format_get_printable (self, line_prefix);
            case QMI_MESSAGE_CTL_SYNC:
                return message_sync_get_printable (self, line_prefix);
            case QMI_MESSAGE_CTL_INTERNAL_PROXY_OPEN:
                return message_internal_proxy_open_get_printable (self, line_prefix);
            case QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR:
                return message_internal_allocate_cid_qrtr_get_printable (self, line_prefix);
            case QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR:
                return message_internal_release_cid_qrtr_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client CTL */

G_DEFINE_TYPE (QmiClientCtl, qmi_client_ctl, QMI_TYPE_CLIENT)

enum {
    SIGNAL_SYNC,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_CTL_SYNC: {
            g_signal_emit (self, signals[SIGNAL_SYNC], 0, NULL);
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_ctl_init (QmiClientCtl *self)
{
}

static void
qmi_client_ctl_class_init (QmiClientCtlClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    signals[SIGNAL_SYNC] =
        g_signal_new ("sync",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      0);
}


QmiMessageCtlSetInstanceIdOutput *
qmi_client_ctl_set_instance_id_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_instance_id_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageCtlSetInstanceIdOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ctl_set_instance_id_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ctl_set_instance_id_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ctl_set_instance_id (
    QmiClientCtl *self,
    QmiMessageCtlSetInstanceIdInput *input,
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

    request = __qmi_message_ctl_set_instance_id_request_create (
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
                             (GAsyncReadyCallback)set_instance_id_ready,
                             task);
}


QmiMessageCtlGetVersionInfoOutput *
qmi_client_ctl_get_version_info_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_version_info_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageCtlGetVersionInfoOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ctl_get_version_info_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ctl_get_version_info_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ctl_get_version_info (
    QmiClientCtl *self,
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

    request = __qmi_message_ctl_get_version_info_request_create (
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
                             (GAsyncReadyCallback)get_version_info_ready,
                             task);
}


QmiMessageCtlAllocateCidOutput *
qmi_client_ctl_allocate_cid_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
allocate_cid_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageCtlAllocateCidOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ctl_allocate_cid_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ctl_allocate_cid_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ctl_allocate_cid (
    QmiClientCtl *self,
    QmiMessageCtlAllocateCidInput *input,
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

    request = __qmi_message_ctl_allocate_cid_request_create (
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
                             (GAsyncReadyCallback)allocate_cid_ready,
                             task);
}


QmiMessageCtlReleaseCidOutput *
qmi_client_ctl_release_cid_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
release_cid_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageCtlReleaseCidOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ctl_release_cid_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ctl_release_cid_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ctl_release_cid (
    QmiClientCtl *self,
    QmiMessageCtlReleaseCidInput *input,
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

    request = __qmi_message_ctl_release_cid_request_create (
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
                             (GAsyncReadyCallback)release_cid_ready,
                             task);
}


QmiMessageCtlSetDataFormatOutput *
qmi_client_ctl_set_data_format_finish (
    QmiClientCtl *self,
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
    QmiMessageCtlSetDataFormatOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ctl_set_data_format_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ctl_set_data_format_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ctl_set_data_format (
    QmiClientCtl *self,
    QmiMessageCtlSetDataFormatInput *input,
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

    request = __qmi_message_ctl_set_data_format_request_create (
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


QmiMessageCtlSyncOutput *
qmi_client_ctl_sync_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
sync_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageCtlSyncOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ctl_sync_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ctl_sync_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ctl_sync (
    QmiClientCtl *self,
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

    request = __qmi_message_ctl_sync_request_create (
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
                             (GAsyncReadyCallback)sync_ready,
                             task);
}


QmiMessageCtlInternalProxyOpenOutput *
qmi_client_ctl_internal_proxy_open_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
internal_proxy_open_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageCtlInternalProxyOpenOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ctl_internal_proxy_open_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ctl_internal_proxy_open_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ctl_internal_proxy_open (
    QmiClientCtl *self,
    QmiMessageCtlInternalProxyOpenInput *input,
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

    request = __qmi_message_ctl_internal_proxy_open_request_create (
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
                             (GAsyncReadyCallback)internal_proxy_open_ready,
                             task);
}


QmiMessageCtlInternalAllocateCidQrtrOutput *
qmi_client_ctl_internal_allocate_cid_qrtr_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
internal_allocate_cid_qrtr_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageCtlInternalAllocateCidQrtrOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ctl_internal_allocate_cid_qrtr_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ctl_internal_allocate_cid_qrtr_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ctl_internal_allocate_cid_qrtr (
    QmiClientCtl *self,
    QmiMessageCtlInternalAllocateCidQrtrInput *input,
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

    request = __qmi_message_ctl_internal_allocate_cid_qrtr_request_create (
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
                             (GAsyncReadyCallback)internal_allocate_cid_qrtr_ready,
                             task);
}


QmiMessageCtlInternalReleaseCidQrtrOutput *
qmi_client_ctl_internal_release_cid_qrtr_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
internal_release_cid_qrtr_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageCtlInternalReleaseCidQrtrOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ctl_internal_release_cid_qrtr_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ctl_internal_release_cid_qrtr_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ctl_internal_release_cid_qrtr (
    QmiClientCtl *self,
    QmiMessageCtlInternalReleaseCidQrtrInput *input,
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

    request = __qmi_message_ctl_internal_release_cid_qrtr_request_create (
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
                             (GAsyncReadyCallback)internal_release_cid_qrtr_ready,
                             task);
}

