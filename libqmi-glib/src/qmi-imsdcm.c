
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

#include "qmi-imsdcm.h"
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
    QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST = 0x0020,
    QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST = 0x0021,
} QmiMessageImsdcm;


typedef enum {
    QMI_INDICATION_IMSDCM_PDP_ACTIVATE = 0x0020,
} QmiIndicationImsdcm;


/*****************************************************************************/
/* INDICATION: Qmi Indication IMSDCM PDP Activate */


/* --- Output -- */

struct _QmiIndicationImsdcmPdpActivateOutput {
    volatile gint ref_count;

    /* Instance Id */
    gboolean arg_instance_id_set;
    guint32 arg_instance_id;

    /* Address Info */
    gboolean arg_address_info_set;
    guint32 arg_address_info_ip_family;
    gchar *arg_address_info_address;

    /* PDP Request Sequence Number */
    gboolean arg_pdp_request_sequence_number_set;
    guint32 arg_pdp_request_sequence_number;

    /* PDP Id */
    gboolean arg_pdp_id_set;
    guint8 arg_pdp_id;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_INSTANCE_ID 0x12
#define QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_ADDRESS_INFO 0x11
#define QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_PDP_REQUEST_SEQUENCE_NUMBER 0x10
#define QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_PDP_ID 0x01
#define QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_indication_imsdcm_pdp_activate_output_get_instance_id (
    QmiIndicationImsdcmPdpActivateOutput *self,
    QmiImsDcmInstanceId *value_instance_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_instance_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Instance Id' was not found in the message");
        return FALSE;
    }

    if (value_instance_id)
        *value_instance_id = (QmiImsDcmInstanceId)(self->arg_instance_id);

    return TRUE;
}

gboolean
qmi_indication_imsdcm_pdp_activate_output_get_address_info (
    QmiIndicationImsdcmPdpActivateOutput *self,
    QmiImsDcmIpFamiliy *value_address_info_ip_family,
    const gchar **value_address_info_address,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_address_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Address Info' was not found in the message");
        return FALSE;
    }

    if (value_address_info_ip_family)
        *value_address_info_ip_family = (QmiImsDcmIpFamiliy)(self->arg_address_info_ip_family);
    if (value_address_info_address)
        *value_address_info_address = self->arg_address_info_address;

    return TRUE;
}

gboolean
qmi_indication_imsdcm_pdp_activate_output_get_pdp_request_sequence_number (
    QmiIndicationImsdcmPdpActivateOutput *self,
    guint32 *value_pdp_request_sequence_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_pdp_request_sequence_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'PDP Request Sequence Number' was not found in the message");
        return FALSE;
    }

    if (value_pdp_request_sequence_number)
        *value_pdp_request_sequence_number = self->arg_pdp_request_sequence_number;

    return TRUE;
}

gboolean
qmi_indication_imsdcm_pdp_activate_output_get_pdp_id (
    QmiIndicationImsdcmPdpActivateOutput *self,
    guint8 *value_pdp_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_pdp_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'PDP Id' was not found in the message");
        return FALSE;
    }

    if (value_pdp_id)
        *value_pdp_id = self->arg_pdp_id;

    return TRUE;
}

gboolean
qmi_indication_imsdcm_pdp_activate_output_get_result (
    QmiIndicationImsdcmPdpActivateOutput *self,
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
qmi_indication_imsdcm_pdp_activate_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationImsdcmPdpActivateOutput"),
                                          (GBoxedCopyFunc) qmi_indication_imsdcm_pdp_activate_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_imsdcm_pdp_activate_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationImsdcmPdpActivateOutput *
qmi_indication_imsdcm_pdp_activate_output_ref (QmiIndicationImsdcmPdpActivateOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_imsdcm_pdp_activate_output_unref (QmiIndicationImsdcmPdpActivateOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_address_info_address, (GDestroyNotify)g_free);
        g_slice_free (QmiIndicationImsdcmPdpActivateOutput, self);
    }
}

static gchar *
qmi_indication_imsdcm_pdp_activate_output_instance_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_INSTANCE_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMS_DCM_INSTANCE_ID_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ims_dcm_instance_id_get_string ((QmiImsDcmInstanceId)tmp));
#elif defined  __QMI_IMS_DCM_INSTANCE_ID_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ims_dcm_instance_id_build_string_from_mask ((QmiImsDcmInstanceId)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsDcmInstanceId
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
qmi_indication_imsdcm_pdp_activate_output_address_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_ADDRESS_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " ip_family = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMS_DCM_IP_FAMILIY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ims_dcm_ip_familiy_get_string ((QmiImsDcmIpFamiliy)tmp));
#elif defined  __QMI_IMS_DCM_IP_FAMILIY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ims_dcm_ip_familiy_build_string_from_mask ((QmiImsDcmIpFamiliy)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsDcmIpFamiliy
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " address = '");

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

static gchar *
qmi_indication_imsdcm_pdp_activate_output_pdp_request_sequence_number_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_PDP_REQUEST_SEQUENCE_NUMBER, NULL, NULL)) == 0)
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
qmi_indication_imsdcm_pdp_activate_output_pdp_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_PDP_ID, NULL, NULL)) == 0)
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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

struct indication_pdp_activate_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_pdp_activate_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_pdp_activate_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_INSTANCE_ID:
            tlv_type_str = "Instance Id";
            translated_value = qmi_indication_imsdcm_pdp_activate_output_instance_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_ADDRESS_INFO:
            tlv_type_str = "Address Info";
            translated_value = qmi_indication_imsdcm_pdp_activate_output_address_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_PDP_REQUEST_SEQUENCE_NUMBER:
            tlv_type_str = "PDP Request Sequence Number";
            translated_value = qmi_indication_imsdcm_pdp_activate_output_pdp_request_sequence_number_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_PDP_ID:
            tlv_type_str = "PDP Id";
            translated_value = qmi_indication_imsdcm_pdp_activate_output_pdp_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_RESULT:
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
indication_pdp_activate_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"PDP Activate\" (0x0020)\n",
                            line_prefix);

    {
        struct indication_pdp_activate_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_pdp_activate_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationImsdcmPdpActivateOutput *
qmi_indication_imsdcm_pdp_activate_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationImsdcmPdpActivateOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_IMSDCM_PDP_ACTIVATE);

    self = g_slice_new0 (QmiIndicationImsdcmPdpActivateOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_INSTANCE_ID, NULL, NULL)) == 0) {
                goto qmi_indication_imsdcm_pdp_activate_output_instance_id_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsdcm_pdp_activate_output_instance_id_out;
                self->arg_instance_id = (QmiImsDcmInstanceId)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Instance Id' TLV", offset);
            }

            self->arg_instance_id_set = TRUE;

qmi_indication_imsdcm_pdp_activate_output_instance_id_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_ADDRESS_INFO, NULL, NULL)) == 0) {
                goto qmi_indication_imsdcm_pdp_activate_output_address_info_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsdcm_pdp_activate_output_address_info_out;
                self->arg_address_info_ip_family = (QmiImsDcmIpFamiliy)tmp;
            }
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &(self->arg_address_info_address), NULL))
                goto qmi_indication_imsdcm_pdp_activate_output_address_info_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Address Info' TLV", offset);
            }

            self->arg_address_info_set = TRUE;

qmi_indication_imsdcm_pdp_activate_output_address_info_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_PDP_REQUEST_SEQUENCE_NUMBER, NULL, NULL)) == 0) {
                goto qmi_indication_imsdcm_pdp_activate_output_pdp_request_sequence_number_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_pdp_request_sequence_number), NULL))
                goto qmi_indication_imsdcm_pdp_activate_output_pdp_request_sequence_number_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'PDP Request Sequence Number' TLV", offset);
            }

            self->arg_pdp_request_sequence_number_set = TRUE;

qmi_indication_imsdcm_pdp_activate_output_pdp_request_sequence_number_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_PDP_ID, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory PDP Id TLV: ");
                qmi_indication_imsdcm_pdp_activate_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_pdp_id), error))
                goto qmi_indication_imsdcm_pdp_activate_output_pdp_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'PDP Id' TLV", offset);
            }

            self->arg_pdp_id_set = TRUE;

qmi_indication_imsdcm_pdp_activate_output_pdp_id_out:
            if (!self->arg_pdp_id_set) {
                qmi_indication_imsdcm_pdp_activate_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_indication_imsdcm_pdp_activate_output_unref (self);
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
                qmi_indication_imsdcm_pdp_activate_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMSDCM PDP Activate Request */


/* --- Input -- */

struct _QmiMessageImsdcmPdpActivateRequestInput {
    volatile gint ref_count;

    /* Instance Id */
    gboolean arg_instance_id_set;
    guint32 arg_instance_id;

    /* PDP Slot Id */
    gboolean arg_pdp_slot_id_set;
    guint32 arg_pdp_slot_id;

    /* PDP Subscription Id */
    gboolean arg_pdp_subscription_id_set;
    guint32 arg_pdp_subscription_id;

    /* PDP Request Sequence Number */
    gboolean arg_pdp_request_sequence_number_set;
    guint32 arg_pdp_request_sequence_number;

    /* Connection Parameters */
    gboolean arg_connection_parameters_set;
    gchar *arg_connection_parameters_apn;
    guint32 arg_connection_parameters_apn_type;
    guint32 arg_connection_parameters_rat_type;
    guint32 arg_connection_parameters_ip_family;
    guint32 arg_connection_parameters_wds_profile_number;
};

#define QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_INSTANCE_ID 0x13
#define QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_PDP_SLOT_ID 0x12
#define QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_PDP_SUBSCRIPTION_ID 0x11
#define QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_PDP_REQUEST_SEQUENCE_NUMBER 0x10
#define QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_CONNECTION_PARAMETERS 0x01

gboolean
qmi_message_imsdcm_pdp_activate_request_input_get_instance_id (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    QmiImsDcmInstanceId *value_instance_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_instance_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Instance Id' was not found in the message");
        return FALSE;
    }

    if (value_instance_id)
        *value_instance_id = (QmiImsDcmInstanceId)(self->arg_instance_id);

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_activate_request_input_set_instance_id (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    QmiImsDcmInstanceId value_instance_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_instance_id = (guint32)(value_instance_id);
    self->arg_instance_id_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_activate_request_input_get_pdp_slot_id (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    guint32 *value_pdp_slot_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_pdp_slot_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'PDP Slot Id' was not found in the message");
        return FALSE;
    }

    if (value_pdp_slot_id)
        *value_pdp_slot_id = self->arg_pdp_slot_id;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_activate_request_input_set_pdp_slot_id (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    guint32 value_pdp_slot_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_pdp_slot_id = value_pdp_slot_id;
    self->arg_pdp_slot_id_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_activate_request_input_get_pdp_subscription_id (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    guint32 *value_pdp_subscription_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_pdp_subscription_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'PDP Subscription Id' was not found in the message");
        return FALSE;
    }

    if (value_pdp_subscription_id)
        *value_pdp_subscription_id = self->arg_pdp_subscription_id;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_activate_request_input_set_pdp_subscription_id (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    guint32 value_pdp_subscription_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_pdp_subscription_id = value_pdp_subscription_id;
    self->arg_pdp_subscription_id_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_activate_request_input_get_pdp_request_sequence_number (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    guint32 *value_pdp_request_sequence_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_pdp_request_sequence_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'PDP Request Sequence Number' was not found in the message");
        return FALSE;
    }

    if (value_pdp_request_sequence_number)
        *value_pdp_request_sequence_number = self->arg_pdp_request_sequence_number;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_activate_request_input_set_pdp_request_sequence_number (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    guint32 value_pdp_request_sequence_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_pdp_request_sequence_number = value_pdp_request_sequence_number;
    self->arg_pdp_request_sequence_number_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_activate_request_input_get_connection_parameters (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    const gchar **value_connection_parameters_apn,
    QmiImsDcmApnType *value_connection_parameters_apn_type,
    QmiImsDcmRatType *value_connection_parameters_rat_type,
    QmiImsDcmIpFamiliy *value_connection_parameters_ip_family,
    guint32 *value_connection_parameters_wds_profile_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_connection_parameters_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Connection Parameters' was not found in the message");
        return FALSE;
    }

    if (value_connection_parameters_apn)
        *value_connection_parameters_apn = self->arg_connection_parameters_apn;
    if (value_connection_parameters_apn_type)
        *value_connection_parameters_apn_type = (QmiImsDcmApnType)(self->arg_connection_parameters_apn_type);
    if (value_connection_parameters_rat_type)
        *value_connection_parameters_rat_type = (QmiImsDcmRatType)(self->arg_connection_parameters_rat_type);
    if (value_connection_parameters_ip_family)
        *value_connection_parameters_ip_family = (QmiImsDcmIpFamiliy)(self->arg_connection_parameters_ip_family);
    if (value_connection_parameters_wds_profile_number)
        *value_connection_parameters_wds_profile_number = self->arg_connection_parameters_wds_profile_number;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_activate_request_input_set_connection_parameters (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    const gchar *value_connection_parameters_apn,
    QmiImsDcmApnType value_connection_parameters_apn_type,
    QmiImsDcmRatType value_connection_parameters_rat_type,
    QmiImsDcmIpFamiliy value_connection_parameters_ip_family,
    guint32 value_connection_parameters_wds_profile_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_free (self->arg_connection_parameters_apn);
    self->arg_connection_parameters_apn = g_strdup (value_connection_parameters_apn ? value_connection_parameters_apn : "");
    self->arg_connection_parameters_apn_type = (guint32)(value_connection_parameters_apn_type);
    self->arg_connection_parameters_rat_type = (guint32)(value_connection_parameters_rat_type);
    self->arg_connection_parameters_ip_family = (guint32)(value_connection_parameters_ip_family);
    self->arg_connection_parameters_wds_profile_number = value_connection_parameters_wds_profile_number;
    self->arg_connection_parameters_set = TRUE;

    return TRUE;
}

GType
qmi_message_imsdcm_pdp_activate_request_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsdcmPdpActivateRequestInput"),
                                          (GBoxedCopyFunc) qmi_message_imsdcm_pdp_activate_request_input_ref,
                                          (GBoxedFreeFunc) qmi_message_imsdcm_pdp_activate_request_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsdcmPdpActivateRequestInput *
qmi_message_imsdcm_pdp_activate_request_input_ref (QmiMessageImsdcmPdpActivateRequestInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_imsdcm_pdp_activate_request_input_unref (QmiMessageImsdcmPdpActivateRequestInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_connection_parameters_apn, (GDestroyNotify)g_free);
        g_slice_free (QmiMessageImsdcmPdpActivateRequestInput, self);
    }
}

QmiMessageImsdcmPdpActivateRequestInput *
qmi_message_imsdcm_pdp_activate_request_input_new (void)
{
    QmiMessageImsdcmPdpActivateRequestInput *self;

    self = g_slice_new0 (QmiMessageImsdcmPdpActivateRequestInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_imsdcm_pdp_activate_request_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageImsdcmPdpActivateRequestInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_IMSDCM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'PDP Activate Request' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Instance Id' TLV */
    if (input->arg_instance_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_INSTANCE_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Instance Id': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_instance_id;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Instance Id': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Instance Id': ");
            return NULL;
        }
    }

    /* Try to add the 'PDP Slot Id' TLV */
    if (input->arg_pdp_slot_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_PDP_SLOT_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'PDP Slot Id': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_pdp_slot_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'PDP Slot Id': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'PDP Slot Id': ");
            return NULL;
        }
    }

    /* Try to add the 'PDP Subscription Id' TLV */
    if (input->arg_pdp_subscription_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_PDP_SUBSCRIPTION_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'PDP Subscription Id': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_pdp_subscription_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'PDP Subscription Id': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'PDP Subscription Id': ");
            return NULL;
        }
    }

    /* Try to add the 'PDP Request Sequence Number' TLV */
    if (input->arg_pdp_request_sequence_number_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_PDP_REQUEST_SEQUENCE_NUMBER, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'PDP Request Sequence Number': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_pdp_request_sequence_number, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'PDP Request Sequence Number': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'PDP Request Sequence Number': ");
            return NULL;
        }
    }

    /* Try to add the 'Connection Parameters' TLV */
    if (input->arg_connection_parameters_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_CONNECTION_PARAMETERS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Connection Parameters': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_string (self, 1, input->arg_connection_parameters_apn, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'Connection Parameters': ");
            return NULL;
        }
        {
            guint32 tmp;

            tmp = (guint32) input->arg_connection_parameters_apn_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Connection Parameters': ");
                return NULL;
            }
        }
        {
            guint32 tmp;

            tmp = (guint32) input->arg_connection_parameters_rat_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Connection Parameters': ");
                return NULL;
            }
        }
        {
            guint32 tmp;

            tmp = (guint32) input->arg_connection_parameters_ip_family;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Connection Parameters': ");
                return NULL;
            }
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_connection_parameters_wds_profile_number, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Connection Parameters': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Connection Parameters': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Connection Parameters' in message 'PDP Activate Request'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageImsdcmPdpActivateRequestOutput {
    volatile gint ref_count;

    /* Instance Id */
    gboolean arg_instance_id_set;
    guint32 arg_instance_id;

    /* PDP Request Sequence Number */
    gboolean arg_pdp_request_sequence_number_set;
    guint32 arg_pdp_request_sequence_number;

    /* PDP Id */
    gboolean arg_pdp_id_set;
    guint8 arg_pdp_id;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_INSTANCE_ID 0x12
#define QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_PDP_REQUEST_SEQUENCE_NUMBER 0x11
#define QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_PDP_ID 0x10
#define QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_imsdcm_pdp_activate_request_output_get_instance_id (
    QmiMessageImsdcmPdpActivateRequestOutput *self,
    QmiImsDcmInstanceId *value_instance_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_instance_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Instance Id' was not found in the message");
        return FALSE;
    }

    if (value_instance_id)
        *value_instance_id = (QmiImsDcmInstanceId)(self->arg_instance_id);

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_activate_request_output_get_pdp_request_sequence_number (
    QmiMessageImsdcmPdpActivateRequestOutput *self,
    guint32 *value_pdp_request_sequence_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_pdp_request_sequence_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'PDP Request Sequence Number' was not found in the message");
        return FALSE;
    }

    if (value_pdp_request_sequence_number)
        *value_pdp_request_sequence_number = self->arg_pdp_request_sequence_number;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_activate_request_output_get_pdp_id (
    QmiMessageImsdcmPdpActivateRequestOutput *self,
    guint8 *value_pdp_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_pdp_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'PDP Id' was not found in the message");
        return FALSE;
    }

    if (value_pdp_id)
        *value_pdp_id = self->arg_pdp_id;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_activate_request_output_get_result (
    QmiMessageImsdcmPdpActivateRequestOutput *self,
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
qmi_message_imsdcm_pdp_activate_request_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsdcmPdpActivateRequestOutput"),
                                          (GBoxedCopyFunc) qmi_message_imsdcm_pdp_activate_request_output_ref,
                                          (GBoxedFreeFunc) qmi_message_imsdcm_pdp_activate_request_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsdcmPdpActivateRequestOutput *
qmi_message_imsdcm_pdp_activate_request_output_ref (QmiMessageImsdcmPdpActivateRequestOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_imsdcm_pdp_activate_request_output_unref (QmiMessageImsdcmPdpActivateRequestOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsdcmPdpActivateRequestOutput, self);
    }
}

static gchar *
qmi_message_imsdcm_pdp_activate_request_input_instance_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_INSTANCE_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMS_DCM_INSTANCE_ID_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ims_dcm_instance_id_get_string ((QmiImsDcmInstanceId)tmp));
#elif defined  __QMI_IMS_DCM_INSTANCE_ID_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ims_dcm_instance_id_build_string_from_mask ((QmiImsDcmInstanceId)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsDcmInstanceId
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
qmi_message_imsdcm_pdp_activate_request_input_pdp_slot_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_PDP_SLOT_ID, NULL, NULL)) == 0)
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
qmi_message_imsdcm_pdp_activate_request_input_pdp_subscription_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_PDP_SUBSCRIPTION_ID, NULL, NULL)) == 0)
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
qmi_message_imsdcm_pdp_activate_request_input_pdp_request_sequence_number_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_PDP_REQUEST_SEQUENCE_NUMBER, NULL, NULL)) == 0)
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
qmi_message_imsdcm_pdp_activate_request_input_connection_parameters_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_CONNECTION_PARAMETERS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " apn = '");

    {
        g_autofree gchar *tmp = NULL;

        if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
            goto out;
        {
            g_string_append (printable, tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " apn_type = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMS_DCM_APN_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ims_dcm_apn_type_get_string ((QmiImsDcmApnType)tmp));
#elif defined  __QMI_IMS_DCM_APN_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ims_dcm_apn_type_build_string_from_mask ((QmiImsDcmApnType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsDcmApnType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " rat_type = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMS_DCM_RAT_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ims_dcm_rat_type_get_string ((QmiImsDcmRatType)tmp));
#elif defined  __QMI_IMS_DCM_RAT_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ims_dcm_rat_type_build_string_from_mask ((QmiImsDcmRatType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsDcmRatType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ip_family = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMS_DCM_IP_FAMILIY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ims_dcm_ip_familiy_get_string ((QmiImsDcmIpFamiliy)tmp));
#elif defined  __QMI_IMS_DCM_IP_FAMILIY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ims_dcm_ip_familiy_build_string_from_mask ((QmiImsDcmIpFamiliy)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsDcmIpFamiliy
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " wds_profile_number = '");

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
qmi_message_imsdcm_pdp_activate_request_output_instance_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_INSTANCE_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMS_DCM_INSTANCE_ID_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ims_dcm_instance_id_get_string ((QmiImsDcmInstanceId)tmp));
#elif defined  __QMI_IMS_DCM_INSTANCE_ID_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ims_dcm_instance_id_build_string_from_mask ((QmiImsDcmInstanceId)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsDcmInstanceId
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
qmi_message_imsdcm_pdp_activate_request_output_pdp_request_sequence_number_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_PDP_REQUEST_SEQUENCE_NUMBER, NULL, NULL)) == 0)
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
qmi_message_imsdcm_pdp_activate_request_output_pdp_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_PDP_ID, NULL, NULL)) == 0)
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

struct message_pdp_activate_request_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_pdp_activate_request_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_pdp_activate_request_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_INSTANCE_ID:
            tlv_type_str = "Instance Id";
            translated_value = qmi_message_imsdcm_pdp_activate_request_input_instance_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_PDP_SLOT_ID:
            tlv_type_str = "PDP Slot Id";
            translated_value = qmi_message_imsdcm_pdp_activate_request_input_pdp_slot_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_PDP_SUBSCRIPTION_ID:
            tlv_type_str = "PDP Subscription Id";
            translated_value = qmi_message_imsdcm_pdp_activate_request_input_pdp_subscription_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_PDP_REQUEST_SEQUENCE_NUMBER:
            tlv_type_str = "PDP Request Sequence Number";
            translated_value = qmi_message_imsdcm_pdp_activate_request_input_pdp_request_sequence_number_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT_TLV_CONNECTION_PARAMETERS:
            tlv_type_str = "Connection Parameters";
            translated_value = qmi_message_imsdcm_pdp_activate_request_input_connection_parameters_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_INSTANCE_ID:
            tlv_type_str = "Instance Id";
            translated_value = qmi_message_imsdcm_pdp_activate_request_output_instance_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_PDP_REQUEST_SEQUENCE_NUMBER:
            tlv_type_str = "PDP Request Sequence Number";
            translated_value = qmi_message_imsdcm_pdp_activate_request_output_pdp_request_sequence_number_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_PDP_ID:
            tlv_type_str = "PDP Id";
            translated_value = qmi_message_imsdcm_pdp_activate_request_output_pdp_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_RESULT:
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
message_pdp_activate_request_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"PDP Activate Request\" (0x0020)\n",
                            line_prefix);

    {
        struct message_pdp_activate_request_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_pdp_activate_request_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageImsdcmPdpActivateRequestOutput *
qmi_message_imsdcm_pdp_activate_request_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageImsdcmPdpActivateRequestOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST);

    self = g_slice_new0 (QmiMessageImsdcmPdpActivateRequestOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_INSTANCE_ID, NULL, NULL)) == 0) {
                goto qmi_message_imsdcm_pdp_activate_request_output_instance_id_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsdcm_pdp_activate_request_output_instance_id_out;
                self->arg_instance_id = (QmiImsDcmInstanceId)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Instance Id' TLV", offset);
            }

            self->arg_instance_id_set = TRUE;

qmi_message_imsdcm_pdp_activate_request_output_instance_id_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_PDP_REQUEST_SEQUENCE_NUMBER, NULL, NULL)) == 0) {
                goto qmi_message_imsdcm_pdp_activate_request_output_pdp_request_sequence_number_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_pdp_request_sequence_number), NULL))
                goto qmi_message_imsdcm_pdp_activate_request_output_pdp_request_sequence_number_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'PDP Request Sequence Number' TLV", offset);
            }

            self->arg_pdp_request_sequence_number_set = TRUE;

qmi_message_imsdcm_pdp_activate_request_output_pdp_request_sequence_number_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_PDP_ID, NULL, NULL)) == 0) {
                goto qmi_message_imsdcm_pdp_activate_request_output_pdp_id_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_pdp_id), NULL))
                goto qmi_message_imsdcm_pdp_activate_request_output_pdp_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'PDP Id' TLV", offset);
            }

            self->arg_pdp_id_set = TRUE;

qmi_message_imsdcm_pdp_activate_request_output_pdp_id_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_imsdcm_pdp_activate_request_output_unref (self);
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
                qmi_message_imsdcm_pdp_activate_request_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMSDCM PDP Deactivate Request */


/* --- Input -- */

struct _QmiMessageImsdcmPdpDeactivateRequestInput {
    volatile gint ref_count;

    /* Instance Id */
    gboolean arg_instance_id_set;
    guint32 arg_instance_id;

    /* PDP Id */
    gboolean arg_pdp_id_set;
    guint8 arg_pdp_id;
};

#define QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_INPUT_TLV_INSTANCE_ID 0x10
#define QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_INPUT_TLV_PDP_ID 0x01

gboolean
qmi_message_imsdcm_pdp_deactivate_request_input_get_instance_id (
    QmiMessageImsdcmPdpDeactivateRequestInput *self,
    QmiImsDcmInstanceId *value_instance_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_instance_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Instance Id' was not found in the message");
        return FALSE;
    }

    if (value_instance_id)
        *value_instance_id = (QmiImsDcmInstanceId)(self->arg_instance_id);

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_deactivate_request_input_set_instance_id (
    QmiMessageImsdcmPdpDeactivateRequestInput *self,
    QmiImsDcmInstanceId value_instance_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_instance_id = (guint32)(value_instance_id);
    self->arg_instance_id_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_deactivate_request_input_get_pdp_id (
    QmiMessageImsdcmPdpDeactivateRequestInput *self,
    guint8 *value_pdp_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_pdp_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'PDP Id' was not found in the message");
        return FALSE;
    }

    if (value_pdp_id)
        *value_pdp_id = self->arg_pdp_id;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_deactivate_request_input_set_pdp_id (
    QmiMessageImsdcmPdpDeactivateRequestInput *self,
    guint8 value_pdp_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_pdp_id = value_pdp_id;
    self->arg_pdp_id_set = TRUE;

    return TRUE;
}

GType
qmi_message_imsdcm_pdp_deactivate_request_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsdcmPdpDeactivateRequestInput"),
                                          (GBoxedCopyFunc) qmi_message_imsdcm_pdp_deactivate_request_input_ref,
                                          (GBoxedFreeFunc) qmi_message_imsdcm_pdp_deactivate_request_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsdcmPdpDeactivateRequestInput *
qmi_message_imsdcm_pdp_deactivate_request_input_ref (QmiMessageImsdcmPdpDeactivateRequestInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_imsdcm_pdp_deactivate_request_input_unref (QmiMessageImsdcmPdpDeactivateRequestInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsdcmPdpDeactivateRequestInput, self);
    }
}

QmiMessageImsdcmPdpDeactivateRequestInput *
qmi_message_imsdcm_pdp_deactivate_request_input_new (void)
{
    QmiMessageImsdcmPdpDeactivateRequestInput *self;

    self = g_slice_new0 (QmiMessageImsdcmPdpDeactivateRequestInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_imsdcm_pdp_deactivate_request_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageImsdcmPdpDeactivateRequestInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_IMSDCM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'PDP Deactivate Request' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Instance Id' TLV */
    if (input->arg_instance_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_INPUT_TLV_INSTANCE_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Instance Id': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_instance_id;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Instance Id': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Instance Id': ");
            return NULL;
        }
    }

    /* Try to add the 'PDP Id' TLV */
    if (input->arg_pdp_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_INPUT_TLV_PDP_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'PDP Id': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_pdp_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'PDP Id': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'PDP Id': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'PDP Id' in message 'PDP Deactivate Request'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageImsdcmPdpDeactivateRequestOutput {
    volatile gint ref_count;

    /* Instance Id */
    gboolean arg_instance_id_set;
    guint32 arg_instance_id;

    /* PDP Id */
    gboolean arg_pdp_id_set;
    guint8 arg_pdp_id;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_OUTPUT_TLV_INSTANCE_ID 0x11
#define QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_OUTPUT_TLV_PDP_ID 0x10
#define QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_imsdcm_pdp_deactivate_request_output_get_instance_id (
    QmiMessageImsdcmPdpDeactivateRequestOutput *self,
    QmiImsDcmInstanceId *value_instance_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_instance_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Instance Id' was not found in the message");
        return FALSE;
    }

    if (value_instance_id)
        *value_instance_id = (QmiImsDcmInstanceId)(self->arg_instance_id);

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_deactivate_request_output_get_pdp_id (
    QmiMessageImsdcmPdpDeactivateRequestOutput *self,
    guint8 *value_pdp_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_pdp_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'PDP Id' was not found in the message");
        return FALSE;
    }

    if (value_pdp_id)
        *value_pdp_id = self->arg_pdp_id;

    return TRUE;
}

gboolean
qmi_message_imsdcm_pdp_deactivate_request_output_get_result (
    QmiMessageImsdcmPdpDeactivateRequestOutput *self,
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
qmi_message_imsdcm_pdp_deactivate_request_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsdcmPdpDeactivateRequestOutput"),
                                          (GBoxedCopyFunc) qmi_message_imsdcm_pdp_deactivate_request_output_ref,
                                          (GBoxedFreeFunc) qmi_message_imsdcm_pdp_deactivate_request_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsdcmPdpDeactivateRequestOutput *
qmi_message_imsdcm_pdp_deactivate_request_output_ref (QmiMessageImsdcmPdpDeactivateRequestOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_imsdcm_pdp_deactivate_request_output_unref (QmiMessageImsdcmPdpDeactivateRequestOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsdcmPdpDeactivateRequestOutput, self);
    }
}

static gchar *
qmi_message_imsdcm_pdp_deactivate_request_input_instance_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_INPUT_TLV_INSTANCE_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMS_DCM_INSTANCE_ID_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ims_dcm_instance_id_get_string ((QmiImsDcmInstanceId)tmp));
#elif defined  __QMI_IMS_DCM_INSTANCE_ID_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ims_dcm_instance_id_build_string_from_mask ((QmiImsDcmInstanceId)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsDcmInstanceId
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
qmi_message_imsdcm_pdp_deactivate_request_input_pdp_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_INPUT_TLV_PDP_ID, NULL, NULL)) == 0)
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
qmi_message_imsdcm_pdp_deactivate_request_output_instance_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_OUTPUT_TLV_INSTANCE_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMS_DCM_INSTANCE_ID_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ims_dcm_instance_id_get_string ((QmiImsDcmInstanceId)tmp));
#elif defined  __QMI_IMS_DCM_INSTANCE_ID_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ims_dcm_instance_id_build_string_from_mask ((QmiImsDcmInstanceId)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsDcmInstanceId
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
qmi_message_imsdcm_pdp_deactivate_request_output_pdp_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_OUTPUT_TLV_PDP_ID, NULL, NULL)) == 0)
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

struct message_pdp_deactivate_request_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_pdp_deactivate_request_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_pdp_deactivate_request_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_INPUT_TLV_INSTANCE_ID:
            tlv_type_str = "Instance Id";
            translated_value = qmi_message_imsdcm_pdp_deactivate_request_input_instance_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_INPUT_TLV_PDP_ID:
            tlv_type_str = "PDP Id";
            translated_value = qmi_message_imsdcm_pdp_deactivate_request_input_pdp_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_OUTPUT_TLV_INSTANCE_ID:
            tlv_type_str = "Instance Id";
            translated_value = qmi_message_imsdcm_pdp_deactivate_request_output_instance_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_OUTPUT_TLV_PDP_ID:
            tlv_type_str = "PDP Id";
            translated_value = qmi_message_imsdcm_pdp_deactivate_request_output_pdp_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_OUTPUT_TLV_RESULT:
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
message_pdp_deactivate_request_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"PDP Deactivate Request\" (0x0021)\n",
                            line_prefix);

    {
        struct message_pdp_deactivate_request_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_pdp_deactivate_request_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageImsdcmPdpDeactivateRequestOutput *
qmi_message_imsdcm_pdp_deactivate_request_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageImsdcmPdpDeactivateRequestOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST);

    self = g_slice_new0 (QmiMessageImsdcmPdpDeactivateRequestOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_OUTPUT_TLV_INSTANCE_ID, NULL, NULL)) == 0) {
                goto qmi_message_imsdcm_pdp_deactivate_request_output_instance_id_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsdcm_pdp_deactivate_request_output_instance_id_out;
                self->arg_instance_id = (QmiImsDcmInstanceId)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Instance Id' TLV", offset);
            }

            self->arg_instance_id_set = TRUE;

qmi_message_imsdcm_pdp_deactivate_request_output_instance_id_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_OUTPUT_TLV_PDP_ID, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory PDP Id TLV: ");
                qmi_message_imsdcm_pdp_deactivate_request_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_pdp_id), error))
                goto qmi_message_imsdcm_pdp_deactivate_request_output_pdp_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'PDP Id' TLV", offset);
            }

            self->arg_pdp_id_set = TRUE;

qmi_message_imsdcm_pdp_deactivate_request_output_pdp_id_out:
            if (!self->arg_pdp_id_set) {
                qmi_message_imsdcm_pdp_deactivate_request_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_imsdcm_pdp_deactivate_request_output_unref (self);
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
                qmi_message_imsdcm_pdp_deactivate_request_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: IMSDCM */


gchar *
__qmi_message_imsdcm_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_IMSDCM_PDP_ACTIVATE:
            return indication_pdp_activate_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST:
                return message_pdp_activate_request_get_printable (self, line_prefix);
            case QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST:
                return message_pdp_deactivate_request_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client IMSDCM */

G_DEFINE_TYPE (QmiClientImsdcm, qmi_client_imsdcm, QMI_TYPE_CLIENT)

enum {
    SIGNAL_PDP_ACTIVATE,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_IMSDCM_PDP_ACTIVATE: {
            QmiIndicationImsdcmPdpActivateOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_imsdcm_pdp_activate_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'PDP Activate' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_PDP_ACTIVATE], 0, output);
                qmi_indication_imsdcm_pdp_activate_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_imsdcm_init (QmiClientImsdcm *self)
{
}

static void
qmi_client_imsdcm_class_init (QmiClientImsdcmClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientImsdcm::pdp-activate:
     * @object: A #QmiClientImsdcm.
     * @output: A #QmiIndicationImsdcmPdpActivateOutput.
     *
     * The ::pdp-activate signal gets emitted when a '<link linkend="libqmi-glib-IMSDCM-PDP-Activate-indication.top_of_page">PDP Activate</link>' indication is received.
     *
     * Since: 1.37
     */
    signals[SIGNAL_PDP_ACTIVATE] =
        g_signal_new ("pdp-activate",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT);
}


QmiMessageImsdcmPdpActivateRequestOutput *
qmi_client_imsdcm_pdp_activate_request_finish (
    QmiClientImsdcm *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
pdp_activate_request_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageImsdcmPdpActivateRequestOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_imsdcm_pdp_activate_request_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_imsdcm_pdp_activate_request_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_imsdcm_pdp_activate_request (
    QmiClientImsdcm *self,
    QmiMessageImsdcmPdpActivateRequestInput *input,
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

    request = __qmi_message_imsdcm_pdp_activate_request_request_create (
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
                             (GAsyncReadyCallback)pdp_activate_request_ready,
                             task);
}


QmiMessageImsdcmPdpDeactivateRequestOutput *
qmi_client_imsdcm_pdp_deactivate_request_finish (
    QmiClientImsdcm *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
pdp_deactivate_request_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageImsdcmPdpDeactivateRequestOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_imsdcm_pdp_deactivate_request_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_imsdcm_pdp_deactivate_request_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_imsdcm_pdp_deactivate_request (
    QmiClientImsdcm *self,
    QmiMessageImsdcmPdpDeactivateRequestInput *input,
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

    request = __qmi_message_imsdcm_pdp_deactivate_request_request_create (
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
                             (GAsyncReadyCallback)pdp_deactivate_request_ready,
                             task);
}

