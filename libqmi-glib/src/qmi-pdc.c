
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

#include "qmi-pdc.h"
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
    QMI_MESSAGE_PDC_RESET = 0x0000,
    QMI_MESSAGE_PDC_REGISTER = 0x20,
    QMI_MESSAGE_PDC_CONFIG_CHANGE = 0x21,
    QMI_MESSAGE_PDC_GET_SELECTED_CONFIG = 0x22,
    QMI_MESSAGE_PDC_SET_SELECTED_CONFIG = 0x23,
    QMI_MESSAGE_PDC_LIST_CONFIGS = 0x24,
    QMI_MESSAGE_PDC_DELETE_CONFIG = 0x25,
    QMI_MESSAGE_PDC_LOAD_CONFIG = 0x26,
    QMI_MESSAGE_PDC_ACTIVATE_CONFIG = 0x27,
    QMI_MESSAGE_PDC_GET_CONFIG_INFO = 0x28,
    QMI_MESSAGE_PDC_GET_CONFIG_LIMITS = 0x29,
    QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO = 0x2A,
    QMI_MESSAGE_PDC_DEACTIVATE_CONFIG = 0x2B,
} QmiMessagePdc;


typedef enum {
    QMI_INDICATION_PDC_GET_SELECTED_CONFIG = 0x22,
    QMI_INDICATION_PDC_SET_SELECTED_CONFIG = 0x23,
    QMI_INDICATION_PDC_LIST_CONFIGS = 0x24,
    QMI_INDICATION_PDC_LOAD_CONFIG = 0x26,
    QMI_INDICATION_PDC_ACTIVATE_CONFIG = 0x27,
    QMI_INDICATION_PDC_GET_CONFIG_INFO = 0x28,
    QMI_INDICATION_PDC_DEACTIVATE_CONFIG = 0x2B,
    QMI_INDICATION_PDC_REFRESH = 0x2F,
} QmiIndicationPdc;


/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Get Selected Config */


/* --- Output -- */

struct _QmiIndicationPdcGetSelectedConfigOutput {
    volatile gint ref_count;

    /* Pending Id */
    gboolean arg_pending_id_set;
    GArray *arg_pending_id;

    /* Active Id */
    gboolean arg_active_id_set;
    GArray *arg_active_id;

    /* Indication Result */
    gboolean arg_indication_result_set;
    guint16 arg_indication_result;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;
};

#define QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_PENDING_ID 0x12
#define QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_ACTIVE_ID 0x11
#define QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_INDICATION_RESULT 0x01
#define QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN 0x10

gboolean
qmi_indication_pdc_get_selected_config_output_get_pending_id (
    QmiIndicationPdcGetSelectedConfigOutput *self,
    GArray **value_pending_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_pending_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Pending Id' was not found in the message");
        return FALSE;
    }

    if (value_pending_id)
        *value_pending_id = self->arg_pending_id;

    return TRUE;
}

gboolean
qmi_indication_pdc_get_selected_config_output_get_active_id (
    QmiIndicationPdcGetSelectedConfigOutput *self,
    GArray **value_active_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_active_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Active Id' was not found in the message");
        return FALSE;
    }

    if (value_active_id)
        *value_active_id = self->arg_active_id;

    return TRUE;
}

gboolean
qmi_indication_pdc_get_selected_config_output_get_indication_result (
    QmiIndicationPdcGetSelectedConfigOutput *self,
    guint16 *value_indication_result,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Result' was not found in the message");
        return FALSE;
    }

    if (value_indication_result)
        *value_indication_result = self->arg_indication_result;

    return TRUE;
}

gboolean
qmi_indication_pdc_get_selected_config_output_get_token (
    QmiIndicationPdcGetSelectedConfigOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

GType
qmi_indication_pdc_get_selected_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationPdcGetSelectedConfigOutput"),
                                          (GBoxedCopyFunc) qmi_indication_pdc_get_selected_config_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_pdc_get_selected_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationPdcGetSelectedConfigOutput *
qmi_indication_pdc_get_selected_config_output_ref (QmiIndicationPdcGetSelectedConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_pdc_get_selected_config_output_unref (QmiIndicationPdcGetSelectedConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_pending_id, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_active_id, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiIndicationPdcGetSelectedConfigOutput, self);
    }
}

static gchar *
qmi_indication_pdc_get_selected_config_output_pending_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_PENDING_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint pending_id_i;
        guint8 pending_id_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(pending_id_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (pending_id_i = 0; pending_id_i < pending_id_n_items; pending_id_i++) {
            g_string_append_printf (printable, " [%u] = '", pending_id_i);

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
qmi_indication_pdc_get_selected_config_output_active_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_ACTIVE_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint active_id_i;
        guint8 active_id_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(active_id_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (active_id_i = 0; active_id_i < active_id_n_items; active_id_i++) {
            g_string_append_printf (printable, " [%u] = '", active_id_i);

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
qmi_indication_pdc_get_selected_config_output_indication_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_INDICATION_RESULT, NULL, NULL)) == 0)
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
qmi_indication_pdc_get_selected_config_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct indication_get_selected_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_get_selected_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_get_selected_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_PENDING_ID:
            tlv_type_str = "Pending Id";
            translated_value = qmi_indication_pdc_get_selected_config_output_pending_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_ACTIVE_ID:
            tlv_type_str = "Active Id";
            translated_value = qmi_indication_pdc_get_selected_config_output_active_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_INDICATION_RESULT:
            tlv_type_str = "Indication Result";
            translated_value = qmi_indication_pdc_get_selected_config_output_indication_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_indication_pdc_get_selected_config_output_token_get_printable (
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
indication_get_selected_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Selected Config\" (0x22)\n",
                            line_prefix);

    {
        struct indication_get_selected_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_get_selected_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationPdcGetSelectedConfigOutput *
qmi_indication_pdc_get_selected_config_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationPdcGetSelectedConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_PDC_GET_SELECTED_CONFIG);

    self = g_slice_new0 (QmiIndicationPdcGetSelectedConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_PENDING_ID, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_get_selected_config_output_pending_id_out;
            }
            {
                guint pending_id_i;
                guint8 pending_id_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(pending_id_n_items), NULL))
                    goto qmi_indication_pdc_get_selected_config_output_pending_id_out;

                self->arg_pending_id = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)pending_id_n_items);

                for (pending_id_i = 0; pending_id_i < pending_id_n_items; pending_id_i++) {
                    guint8 pending_id_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(pending_id_aux), NULL))
                        goto qmi_indication_pdc_get_selected_config_output_pending_id_out;
                    g_array_insert_val (self->arg_pending_id, pending_id_i, pending_id_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Pending Id' TLV", offset);
            }

            self->arg_pending_id_set = TRUE;

qmi_indication_pdc_get_selected_config_output_pending_id_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_ACTIVE_ID, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_get_selected_config_output_active_id_out;
            }
            {
                guint active_id_i;
                guint8 active_id_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(active_id_n_items), NULL))
                    goto qmi_indication_pdc_get_selected_config_output_active_id_out;

                self->arg_active_id = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)active_id_n_items);

                for (active_id_i = 0; active_id_i < active_id_n_items; active_id_i++) {
                    guint8 active_id_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(active_id_aux), NULL))
                        goto qmi_indication_pdc_get_selected_config_output_active_id_out;
                    g_array_insert_val (self->arg_active_id, active_id_i, active_id_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Active Id' TLV", offset);
            }

            self->arg_active_id_set = TRUE;

qmi_indication_pdc_get_selected_config_output_active_id_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_INDICATION_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Result TLV: ");
                qmi_indication_pdc_get_selected_config_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_indication_result), error))
                goto qmi_indication_pdc_get_selected_config_output_indication_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Result' TLV", offset);
            }

            self->arg_indication_result_set = TRUE;

qmi_indication_pdc_get_selected_config_output_indication_result_out:
            if (!self->arg_indication_result_set) {
                qmi_indication_pdc_get_selected_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_get_selected_config_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_indication_pdc_get_selected_config_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_indication_pdc_get_selected_config_output_token_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Set Selected Config */


/* --- Output -- */

struct _QmiIndicationPdcSetSelectedConfigOutput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Indication Result */
    gboolean arg_indication_result_set;
    guint16 arg_indication_result;
};

#define QMI_INDICATION_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN 0x10
#define QMI_INDICATION_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_INDICATION_RESULT 0x01

gboolean
qmi_indication_pdc_set_selected_config_output_get_token (
    QmiIndicationPdcSetSelectedConfigOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_indication_pdc_set_selected_config_output_get_indication_result (
    QmiIndicationPdcSetSelectedConfigOutput *self,
    guint16 *value_indication_result,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Result' was not found in the message");
        return FALSE;
    }

    if (value_indication_result)
        *value_indication_result = self->arg_indication_result;

    return TRUE;
}

GType
qmi_indication_pdc_set_selected_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationPdcSetSelectedConfigOutput"),
                                          (GBoxedCopyFunc) qmi_indication_pdc_set_selected_config_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_pdc_set_selected_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationPdcSetSelectedConfigOutput *
qmi_indication_pdc_set_selected_config_output_ref (QmiIndicationPdcSetSelectedConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_pdc_set_selected_config_output_unref (QmiIndicationPdcSetSelectedConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationPdcSetSelectedConfigOutput, self);
    }
}

static gchar *
qmi_indication_pdc_set_selected_config_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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
qmi_indication_pdc_set_selected_config_output_indication_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_INDICATION_RESULT, NULL, NULL)) == 0)
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

struct indication_set_selected_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_set_selected_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_set_selected_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_indication_pdc_set_selected_config_output_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_INDICATION_RESULT:
            tlv_type_str = "Indication Result";
            translated_value = qmi_indication_pdc_set_selected_config_output_indication_result_get_printable (
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
indication_set_selected_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Selected Config\" (0x23)\n",
                            line_prefix);

    {
        struct indication_set_selected_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_set_selected_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationPdcSetSelectedConfigOutput *
qmi_indication_pdc_set_selected_config_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationPdcSetSelectedConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_PDC_SET_SELECTED_CONFIG);

    self = g_slice_new0 (QmiIndicationPdcSetSelectedConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_set_selected_config_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_indication_pdc_set_selected_config_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_indication_pdc_set_selected_config_output_token_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_INDICATION_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Result TLV: ");
                qmi_indication_pdc_set_selected_config_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_indication_result), error))
                goto qmi_indication_pdc_set_selected_config_output_indication_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Result' TLV", offset);
            }

            self->arg_indication_result_set = TRUE;

qmi_indication_pdc_set_selected_config_output_indication_result_out:
            if (!self->arg_indication_result_set) {
                qmi_indication_pdc_set_selected_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC List Configs */


/* --- Output -- */

static void
__qmi_indication_pdc_list_configs_output_configs_element_clear (QmiIndicationPdcListConfigsOutputConfigsElement *value)
{
    g_clear_pointer (&value->id, (GDestroyNotify)g_array_unref);
}

static void
__qmi_indication_pdc_list_configs_output_configs_element_free (QmiIndicationPdcListConfigsOutputConfigsElement *value)
{
    __qmi_indication_pdc_list_configs_output_configs_element_clear (value);
    g_slice_free (QmiIndicationPdcListConfigsOutputConfigsElement, value);
}

static QmiIndicationPdcListConfigsOutputConfigsElement *
__qmi_indication_pdc_list_configs_output_configs_element_new (void)
{
    return g_slice_new0 (QmiIndicationPdcListConfigsOutputConfigsElement);
}

static QmiIndicationPdcListConfigsOutputConfigsElement *
__qmi_indication_pdc_list_configs_output_configs_element_copy (const QmiIndicationPdcListConfigsOutputConfigsElement *value)
{
    QmiIndicationPdcListConfigsOutputConfigsElement *copy;

    copy = __qmi_indication_pdc_list_configs_output_configs_element_new ();
    copy->config_type = value->config_type;
    copy->id = g_array_ref (value->id);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiIndicationPdcListConfigsOutputConfigsElement, qmi_indication_pdc_list_configs_output_configs_element, (GBoxedCopyFunc)__qmi_indication_pdc_list_configs_output_configs_element_copy, (GBoxedFreeFunc)__qmi_indication_pdc_list_configs_output_configs_element_free)

struct _QmiIndicationPdcListConfigsOutput {
    volatile gint ref_count;

    /* Configs */
    gboolean arg_configs_set;
    GArray *arg_configs;
    GPtrArray *arg_configs_ptr;

    /* Indication Result */
    gboolean arg_indication_result_set;
    guint16 arg_indication_result;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;
};

#define QMI_INDICATION_PDC_LIST_CONFIGS_OUTPUT_TLV_CONFIGS 0x11
#define QMI_INDICATION_PDC_LIST_CONFIGS_OUTPUT_TLV_INDICATION_RESULT 0x01
#define QMI_INDICATION_PDC_LIST_CONFIGS_OUTPUT_TLV_TOKEN 0x10

gboolean
qmi_indication_pdc_list_configs_output_get_configs (
    QmiIndicationPdcListConfigsOutput *self,
    GArray **value_configs,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_configs_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Configs' was not found in the message");
        return FALSE;
    }

    if (value_configs)
        *value_configs = self->arg_configs;

    return TRUE;
}

gboolean
qmi_indication_pdc_list_configs_output_get_configs_gir (
    QmiIndicationPdcListConfigsOutput *self,
    GPtrArray **value_configs_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_configs_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Configs' was not found in the message");
        return FALSE;
    }

    if (value_configs_ptr) {
        if (!self->arg_configs_ptr) {
            {
                guint configs_i;

                self->arg_configs_ptr = g_ptr_array_new_full (self->arg_configs->len, (GDestroyNotify)__qmi_indication_pdc_list_configs_output_configs_element_free);
                for (configs_i = 0; configs_i < self->arg_configs->len; configs_i++) {
                    QmiIndicationPdcListConfigsOutputConfigsElement *configs_aux_from;
                    QmiIndicationPdcListConfigsOutputConfigsElement *configs_aux_to;

                    configs_aux_from = &g_array_index (self->arg_configs, QmiIndicationPdcListConfigsOutputConfigsElement, configs_i);

                    configs_aux_to = __qmi_indication_pdc_list_configs_output_configs_element_new ();
                    configs_aux_to->config_type = (*configs_aux_from).config_type;
                    configs_aux_to->id = g_array_ref ((*configs_aux_from).id);

                    g_ptr_array_add (self->arg_configs_ptr, configs_aux_to);
                }
            }
        }
        *value_configs_ptr = self->arg_configs_ptr;
    }
    return TRUE;
}

gboolean
qmi_indication_pdc_list_configs_output_get_indication_result (
    QmiIndicationPdcListConfigsOutput *self,
    guint16 *value_indication_result,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Result' was not found in the message");
        return FALSE;
    }

    if (value_indication_result)
        *value_indication_result = self->arg_indication_result;

    return TRUE;
}

gboolean
qmi_indication_pdc_list_configs_output_get_token (
    QmiIndicationPdcListConfigsOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

GType
qmi_indication_pdc_list_configs_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationPdcListConfigsOutput"),
                                          (GBoxedCopyFunc) qmi_indication_pdc_list_configs_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_pdc_list_configs_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationPdcListConfigsOutput *
qmi_indication_pdc_list_configs_output_ref (QmiIndicationPdcListConfigsOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_pdc_list_configs_output_unref (QmiIndicationPdcListConfigsOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_configs, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_configs, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiIndicationPdcListConfigsOutput, self);
    }
}

static gchar *
qmi_indication_pdc_list_configs_output_configs_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LIST_CONFIGS_OUTPUT_TLV_CONFIGS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint configs_i;
        guint8 configs_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(configs_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (configs_i = 0; configs_i < configs_n_items; configs_i++) {
            g_string_append_printf (printable, " [%u] = '", configs_i);
            g_string_append (printable, "[");
            g_string_append (printable, " config_type = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiPdcConfigurationType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " id = '");
            {
                guint id_i;
                guint8 id_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(id_n_items), &error))
                    goto out;

                g_string_append (printable, "{");

                for (id_i = 0; id_i < id_n_items; id_i++) {
                    g_string_append_printf (printable, " [%u] = '", id_i);

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
qmi_indication_pdc_list_configs_output_indication_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LIST_CONFIGS_OUTPUT_TLV_INDICATION_RESULT, NULL, NULL)) == 0)
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
qmi_indication_pdc_list_configs_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LIST_CONFIGS_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct indication_list_configs_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_list_configs_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_list_configs_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_PDC_LIST_CONFIGS_OUTPUT_TLV_CONFIGS:
            tlv_type_str = "Configs";
            translated_value = qmi_indication_pdc_list_configs_output_configs_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_LIST_CONFIGS_OUTPUT_TLV_INDICATION_RESULT:
            tlv_type_str = "Indication Result";
            translated_value = qmi_indication_pdc_list_configs_output_indication_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_LIST_CONFIGS_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_indication_pdc_list_configs_output_token_get_printable (
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
indication_list_configs_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"List Configs\" (0x24)\n",
                            line_prefix);

    {
        struct indication_list_configs_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_list_configs_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationPdcListConfigsOutput *
qmi_indication_pdc_list_configs_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationPdcListConfigsOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_PDC_LIST_CONFIGS);

    self = g_slice_new0 (QmiIndicationPdcListConfigsOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LIST_CONFIGS_OUTPUT_TLV_CONFIGS, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_list_configs_output_configs_out;
            }
            {
                guint configs_i;
                guint8 configs_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(configs_n_items), NULL))
                    goto qmi_indication_pdc_list_configs_output_configs_out;

                self->arg_configs = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiIndicationPdcListConfigsOutputConfigsElement),
                    (guint)configs_n_items);

                g_array_set_clear_func (self->arg_configs, (GDestroyNotify)__qmi_indication_pdc_list_configs_output_configs_element_clear);

                for (configs_i = 0; configs_i < configs_n_items; configs_i++) {
                    QmiIndicationPdcListConfigsOutputConfigsElement configs_aux;

                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_indication_pdc_list_configs_output_configs_out;
                        configs_aux.config_type = (QmiPdcConfigurationType)tmp;
                    }
                    {
                        guint id_i;
                        guint8 id_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(id_n_items), NULL))
                            goto qmi_indication_pdc_list_configs_output_configs_out;

                        configs_aux.id = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (guint8),
                            (guint)id_n_items);

                        for (id_i = 0; id_i < id_n_items; id_i++) {
                            guint8 id_aux;

                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(id_aux), NULL))
                                goto qmi_indication_pdc_list_configs_output_configs_out;
                            g_array_insert_val (configs_aux.id, id_i, id_aux);
                        }
                    }
                    g_array_insert_val (self->arg_configs, configs_i, configs_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Configs' TLV", offset);
            }

            self->arg_configs_set = TRUE;

qmi_indication_pdc_list_configs_output_configs_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LIST_CONFIGS_OUTPUT_TLV_INDICATION_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Result TLV: ");
                qmi_indication_pdc_list_configs_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_indication_result), error))
                goto qmi_indication_pdc_list_configs_output_indication_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Result' TLV", offset);
            }

            self->arg_indication_result_set = TRUE;

qmi_indication_pdc_list_configs_output_indication_result_out:
            if (!self->arg_indication_result_set) {
                qmi_indication_pdc_list_configs_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LIST_CONFIGS_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_list_configs_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_indication_pdc_list_configs_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_indication_pdc_list_configs_output_token_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Load Config */


/* --- Output -- */

struct _QmiIndicationPdcLoadConfigOutput {
    volatile gint ref_count;

    /* Frame Reset */
    gboolean arg_frame_reset_set;
    guint8 arg_frame_reset;

    /* Remaining Size */
    gboolean arg_remaining_size_set;
    guint32 arg_remaining_size;

    /* Received */
    gboolean arg_received_set;
    guint32 arg_received;

    /* Indication Result */
    gboolean arg_indication_result_set;
    guint16 arg_indication_result;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;
};

#define QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_FRAME_RESET 0x13
#define QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_REMAINING_SIZE 0x12
#define QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_RECEIVED 0x11
#define QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_INDICATION_RESULT 0x01
#define QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_TOKEN 0x10

gboolean
qmi_indication_pdc_load_config_output_get_frame_reset (
    QmiIndicationPdcLoadConfigOutput *self,
    gboolean *value_frame_reset,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_frame_reset_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Frame Reset' was not found in the message");
        return FALSE;
    }

    if (value_frame_reset)
        *value_frame_reset = (gboolean)(self->arg_frame_reset);

    return TRUE;
}

gboolean
qmi_indication_pdc_load_config_output_get_remaining_size (
    QmiIndicationPdcLoadConfigOutput *self,
    guint32 *value_remaining_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_remaining_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Remaining Size' was not found in the message");
        return FALSE;
    }

    if (value_remaining_size)
        *value_remaining_size = self->arg_remaining_size;

    return TRUE;
}

gboolean
qmi_indication_pdc_load_config_output_get_received (
    QmiIndicationPdcLoadConfigOutput *self,
    guint32 *value_received,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_received_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Received' was not found in the message");
        return FALSE;
    }

    if (value_received)
        *value_received = self->arg_received;

    return TRUE;
}

gboolean
qmi_indication_pdc_load_config_output_get_indication_result (
    QmiIndicationPdcLoadConfigOutput *self,
    guint16 *value_indication_result,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Result' was not found in the message");
        return FALSE;
    }

    if (value_indication_result)
        *value_indication_result = self->arg_indication_result;

    return TRUE;
}

gboolean
qmi_indication_pdc_load_config_output_get_token (
    QmiIndicationPdcLoadConfigOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

GType
qmi_indication_pdc_load_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationPdcLoadConfigOutput"),
                                          (GBoxedCopyFunc) qmi_indication_pdc_load_config_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_pdc_load_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationPdcLoadConfigOutput *
qmi_indication_pdc_load_config_output_ref (QmiIndicationPdcLoadConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_pdc_load_config_output_unref (QmiIndicationPdcLoadConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationPdcLoadConfigOutput, self);
    }
}

static gchar *
qmi_indication_pdc_load_config_output_frame_reset_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_FRAME_RESET, NULL, NULL)) == 0)
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
qmi_indication_pdc_load_config_output_remaining_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_REMAINING_SIZE, NULL, NULL)) == 0)
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
qmi_indication_pdc_load_config_output_received_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_RECEIVED, NULL, NULL)) == 0)
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
qmi_indication_pdc_load_config_output_indication_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_INDICATION_RESULT, NULL, NULL)) == 0)
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
qmi_indication_pdc_load_config_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct indication_load_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_load_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_load_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_FRAME_RESET:
            tlv_type_str = "Frame Reset";
            translated_value = qmi_indication_pdc_load_config_output_frame_reset_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_REMAINING_SIZE:
            tlv_type_str = "Remaining Size";
            translated_value = qmi_indication_pdc_load_config_output_remaining_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_RECEIVED:
            tlv_type_str = "Received";
            translated_value = qmi_indication_pdc_load_config_output_received_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_INDICATION_RESULT:
            tlv_type_str = "Indication Result";
            translated_value = qmi_indication_pdc_load_config_output_indication_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_indication_pdc_load_config_output_token_get_printable (
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
indication_load_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Load Config\" (0x26)\n",
                            line_prefix);

    {
        struct indication_load_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_load_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationPdcLoadConfigOutput *
qmi_indication_pdc_load_config_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationPdcLoadConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_PDC_LOAD_CONFIG);

    self = g_slice_new0 (QmiIndicationPdcLoadConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_FRAME_RESET, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_load_config_output_frame_reset_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_pdc_load_config_output_frame_reset_out;
                self->arg_frame_reset = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Frame Reset' TLV", offset);
            }

            self->arg_frame_reset_set = TRUE;

qmi_indication_pdc_load_config_output_frame_reset_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_REMAINING_SIZE, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_load_config_output_remaining_size_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_remaining_size), NULL))
                goto qmi_indication_pdc_load_config_output_remaining_size_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Remaining Size' TLV", offset);
            }

            self->arg_remaining_size_set = TRUE;

qmi_indication_pdc_load_config_output_remaining_size_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_RECEIVED, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_load_config_output_received_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_received), NULL))
                goto qmi_indication_pdc_load_config_output_received_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Received' TLV", offset);
            }

            self->arg_received_set = TRUE;

qmi_indication_pdc_load_config_output_received_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_INDICATION_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Result TLV: ");
                qmi_indication_pdc_load_config_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_indication_result), error))
                goto qmi_indication_pdc_load_config_output_indication_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Result' TLV", offset);
            }

            self->arg_indication_result_set = TRUE;

qmi_indication_pdc_load_config_output_indication_result_out:
            if (!self->arg_indication_result_set) {
                qmi_indication_pdc_load_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_LOAD_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_load_config_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_indication_pdc_load_config_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_indication_pdc_load_config_output_token_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Activate Config */


/* --- Output -- */

struct _QmiIndicationPdcActivateConfigOutput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Indication Result */
    gboolean arg_indication_result_set;
    guint16 arg_indication_result;
};

#define QMI_INDICATION_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_TOKEN 0x10
#define QMI_INDICATION_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_INDICATION_RESULT 0x01

gboolean
qmi_indication_pdc_activate_config_output_get_token (
    QmiIndicationPdcActivateConfigOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_indication_pdc_activate_config_output_get_indication_result (
    QmiIndicationPdcActivateConfigOutput *self,
    guint16 *value_indication_result,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Result' was not found in the message");
        return FALSE;
    }

    if (value_indication_result)
        *value_indication_result = self->arg_indication_result;

    return TRUE;
}

GType
qmi_indication_pdc_activate_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationPdcActivateConfigOutput"),
                                          (GBoxedCopyFunc) qmi_indication_pdc_activate_config_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_pdc_activate_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationPdcActivateConfigOutput *
qmi_indication_pdc_activate_config_output_ref (QmiIndicationPdcActivateConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_pdc_activate_config_output_unref (QmiIndicationPdcActivateConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationPdcActivateConfigOutput, self);
    }
}

static gchar *
qmi_indication_pdc_activate_config_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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
qmi_indication_pdc_activate_config_output_indication_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_INDICATION_RESULT, NULL, NULL)) == 0)
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

struct indication_activate_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_activate_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_activate_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_indication_pdc_activate_config_output_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_INDICATION_RESULT:
            tlv_type_str = "Indication Result";
            translated_value = qmi_indication_pdc_activate_config_output_indication_result_get_printable (
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
indication_activate_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Activate Config\" (0x27)\n",
                            line_prefix);

    {
        struct indication_activate_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_activate_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationPdcActivateConfigOutput *
qmi_indication_pdc_activate_config_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationPdcActivateConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_PDC_ACTIVATE_CONFIG);

    self = g_slice_new0 (QmiIndicationPdcActivateConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_activate_config_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_indication_pdc_activate_config_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_indication_pdc_activate_config_output_token_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_INDICATION_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Result TLV: ");
                qmi_indication_pdc_activate_config_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_indication_result), error))
                goto qmi_indication_pdc_activate_config_output_indication_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Result' TLV", offset);
            }

            self->arg_indication_result_set = TRUE;

qmi_indication_pdc_activate_config_output_indication_result_out:
            if (!self->arg_indication_result_set) {
                qmi_indication_pdc_activate_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Get Config Info */


/* --- Output -- */

struct _QmiIndicationPdcGetConfigInfoOutput {
    volatile gint ref_count;

    /* Version */
    gboolean arg_version_set;
    guint32 arg_version;

    /* Description */
    gboolean arg_description_set;
    gchar *arg_description;

    /* Total Size */
    gboolean arg_total_size_set;
    guint32 arg_total_size;

    /* Indication Result */
    gboolean arg_indication_result_set;
    guint16 arg_indication_result;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;
};

#define QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_VERSION 0x13
#define QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_DESCRIPTION 0x12
#define QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_TOTAL_SIZE 0x11
#define QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_INDICATION_RESULT 0x01
#define QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_TOKEN 0x10

gboolean
qmi_indication_pdc_get_config_info_output_get_version (
    QmiIndicationPdcGetConfigInfoOutput *self,
    guint32 *value_version,
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

gboolean
qmi_indication_pdc_get_config_info_output_get_description (
    QmiIndicationPdcGetConfigInfoOutput *self,
    const gchar **value_description,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_description_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Description' was not found in the message");
        return FALSE;
    }

    if (value_description)
        *value_description = self->arg_description;

    return TRUE;
}

gboolean
qmi_indication_pdc_get_config_info_output_get_total_size (
    QmiIndicationPdcGetConfigInfoOutput *self,
    guint32 *value_total_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_total_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Total Size' was not found in the message");
        return FALSE;
    }

    if (value_total_size)
        *value_total_size = self->arg_total_size;

    return TRUE;
}

gboolean
qmi_indication_pdc_get_config_info_output_get_indication_result (
    QmiIndicationPdcGetConfigInfoOutput *self,
    guint16 *value_indication_result,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Result' was not found in the message");
        return FALSE;
    }

    if (value_indication_result)
        *value_indication_result = self->arg_indication_result;

    return TRUE;
}

gboolean
qmi_indication_pdc_get_config_info_output_get_token (
    QmiIndicationPdcGetConfigInfoOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

GType
qmi_indication_pdc_get_config_info_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationPdcGetConfigInfoOutput"),
                                          (GBoxedCopyFunc) qmi_indication_pdc_get_config_info_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_pdc_get_config_info_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationPdcGetConfigInfoOutput *
qmi_indication_pdc_get_config_info_output_ref (QmiIndicationPdcGetConfigInfoOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_pdc_get_config_info_output_unref (QmiIndicationPdcGetConfigInfoOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_description, (GDestroyNotify)g_free);
        g_slice_free (QmiIndicationPdcGetConfigInfoOutput, self);
    }
}

static gchar *
qmi_indication_pdc_get_config_info_output_version_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_VERSION, NULL, NULL)) == 0)
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
qmi_indication_pdc_get_config_info_output_description_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_DESCRIPTION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        g_autofree gchar *tmp = NULL;

        if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
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
qmi_indication_pdc_get_config_info_output_total_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_TOTAL_SIZE, NULL, NULL)) == 0)
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
qmi_indication_pdc_get_config_info_output_indication_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_INDICATION_RESULT, NULL, NULL)) == 0)
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
qmi_indication_pdc_get_config_info_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct indication_get_config_info_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_get_config_info_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_get_config_info_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_VERSION:
            tlv_type_str = "Version";
            translated_value = qmi_indication_pdc_get_config_info_output_version_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_DESCRIPTION:
            tlv_type_str = "Description";
            translated_value = qmi_indication_pdc_get_config_info_output_description_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_TOTAL_SIZE:
            tlv_type_str = "Total Size";
            translated_value = qmi_indication_pdc_get_config_info_output_total_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_INDICATION_RESULT:
            tlv_type_str = "Indication Result";
            translated_value = qmi_indication_pdc_get_config_info_output_indication_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_indication_pdc_get_config_info_output_token_get_printable (
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
indication_get_config_info_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Config Info\" (0x28)\n",
                            line_prefix);

    {
        struct indication_get_config_info_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_get_config_info_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationPdcGetConfigInfoOutput *
qmi_indication_pdc_get_config_info_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationPdcGetConfigInfoOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_PDC_GET_CONFIG_INFO);

    self = g_slice_new0 (QmiIndicationPdcGetConfigInfoOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_VERSION, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_get_config_info_output_version_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_version), NULL))
                goto qmi_indication_pdc_get_config_info_output_version_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Version' TLV", offset);
            }

            self->arg_version_set = TRUE;

qmi_indication_pdc_get_config_info_output_version_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_DESCRIPTION, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_get_config_info_output_description_out;
            }
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &(self->arg_description), NULL))
                goto qmi_indication_pdc_get_config_info_output_description_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Description' TLV", offset);
            }

            self->arg_description_set = TRUE;

qmi_indication_pdc_get_config_info_output_description_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_TOTAL_SIZE, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_get_config_info_output_total_size_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_total_size), NULL))
                goto qmi_indication_pdc_get_config_info_output_total_size_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Total Size' TLV", offset);
            }

            self->arg_total_size_set = TRUE;

qmi_indication_pdc_get_config_info_output_total_size_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_INDICATION_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Result TLV: ");
                qmi_indication_pdc_get_config_info_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_indication_result), error))
                goto qmi_indication_pdc_get_config_info_output_indication_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Result' TLV", offset);
            }

            self->arg_indication_result_set = TRUE;

qmi_indication_pdc_get_config_info_output_indication_result_out:
            if (!self->arg_indication_result_set) {
                qmi_indication_pdc_get_config_info_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_get_config_info_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_indication_pdc_get_config_info_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_indication_pdc_get_config_info_output_token_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Deactivate Config */


/* --- Output -- */

struct _QmiIndicationPdcDeactivateConfigOutput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Indication Result */
    gboolean arg_indication_result_set;
    guint16 arg_indication_result;
};

#define QMI_INDICATION_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_TOKEN 0x10
#define QMI_INDICATION_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_INDICATION_RESULT 0x01

gboolean
qmi_indication_pdc_deactivate_config_output_get_token (
    QmiIndicationPdcDeactivateConfigOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_indication_pdc_deactivate_config_output_get_indication_result (
    QmiIndicationPdcDeactivateConfigOutput *self,
    guint16 *value_indication_result,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Result' was not found in the message");
        return FALSE;
    }

    if (value_indication_result)
        *value_indication_result = self->arg_indication_result;

    return TRUE;
}

GType
qmi_indication_pdc_deactivate_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationPdcDeactivateConfigOutput"),
                                          (GBoxedCopyFunc) qmi_indication_pdc_deactivate_config_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_pdc_deactivate_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationPdcDeactivateConfigOutput *
qmi_indication_pdc_deactivate_config_output_ref (QmiIndicationPdcDeactivateConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_pdc_deactivate_config_output_unref (QmiIndicationPdcDeactivateConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationPdcDeactivateConfigOutput, self);
    }
}

static gchar *
qmi_indication_pdc_deactivate_config_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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
qmi_indication_pdc_deactivate_config_output_indication_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_INDICATION_RESULT, NULL, NULL)) == 0)
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

struct indication_deactivate_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_deactivate_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_deactivate_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_indication_pdc_deactivate_config_output_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_INDICATION_RESULT:
            tlv_type_str = "Indication Result";
            translated_value = qmi_indication_pdc_deactivate_config_output_indication_result_get_printable (
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
indication_deactivate_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Deactivate Config\" (0x2B)\n",
                            line_prefix);

    {
        struct indication_deactivate_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_deactivate_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationPdcDeactivateConfigOutput *
qmi_indication_pdc_deactivate_config_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationPdcDeactivateConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_PDC_DEACTIVATE_CONFIG);

    self = g_slice_new0 (QmiIndicationPdcDeactivateConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_deactivate_config_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_indication_pdc_deactivate_config_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_indication_pdc_deactivate_config_output_token_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_INDICATION_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Result TLV: ");
                qmi_indication_pdc_deactivate_config_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_indication_result), error))
                goto qmi_indication_pdc_deactivate_config_output_indication_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Result' TLV", offset);
            }

            self->arg_indication_result_set = TRUE;

qmi_indication_pdc_deactivate_config_output_indication_result_out:
            if (!self->arg_indication_result_set) {
                qmi_indication_pdc_deactivate_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Refresh */


/* --- Output -- */

struct _QmiIndicationPdcRefreshOutput {
    volatile gint ref_count;

    /* Slot ID */
    gboolean arg_slot_id_set;
    guint32 arg_slot_id;

    /* Subscription ID */
    gboolean arg_subscription_id_set;
    guint32 arg_subscription_id;

    /* Refresh Event */
    gboolean arg_refresh_event_set;
    guint32 arg_refresh_event;
};

#define QMI_INDICATION_PDC_REFRESH_OUTPUT_TLV_SLOT_ID 0x11
#define QMI_INDICATION_PDC_REFRESH_OUTPUT_TLV_SUBSCRIPTION_ID 0x10
#define QMI_INDICATION_PDC_REFRESH_OUTPUT_TLV_REFRESH_EVENT 0x01

gboolean
qmi_indication_pdc_refresh_output_get_slot_id (
    QmiIndicationPdcRefreshOutput *self,
    guint32 *value_slot_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_slot_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Slot ID' was not found in the message");
        return FALSE;
    }

    if (value_slot_id)
        *value_slot_id = self->arg_slot_id;

    return TRUE;
}

gboolean
qmi_indication_pdc_refresh_output_get_subscription_id (
    QmiIndicationPdcRefreshOutput *self,
    guint32 *value_subscription_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_subscription_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Subscription ID' was not found in the message");
        return FALSE;
    }

    if (value_subscription_id)
        *value_subscription_id = self->arg_subscription_id;

    return TRUE;
}

gboolean
qmi_indication_pdc_refresh_output_get_refresh_event (
    QmiIndicationPdcRefreshOutput *self,
    QmiPdcRefreshEventType *value_refresh_event,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_refresh_event_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Refresh Event' was not found in the message");
        return FALSE;
    }

    if (value_refresh_event)
        *value_refresh_event = (QmiPdcRefreshEventType)(self->arg_refresh_event);

    return TRUE;
}

GType
qmi_indication_pdc_refresh_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationPdcRefreshOutput"),
                                          (GBoxedCopyFunc) qmi_indication_pdc_refresh_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_pdc_refresh_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationPdcRefreshOutput *
qmi_indication_pdc_refresh_output_ref (QmiIndicationPdcRefreshOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_pdc_refresh_output_unref (QmiIndicationPdcRefreshOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationPdcRefreshOutput, self);
    }
}

static gchar *
qmi_indication_pdc_refresh_output_slot_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_REFRESH_OUTPUT_TLV_SLOT_ID, NULL, NULL)) == 0)
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
qmi_indication_pdc_refresh_output_subscription_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_REFRESH_OUTPUT_TLV_SUBSCRIPTION_ID, NULL, NULL)) == 0)
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
qmi_indication_pdc_refresh_output_refresh_event_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_REFRESH_OUTPUT_TLV_REFRESH_EVENT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_REFRESH_EVENT_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_refresh_event_type_get_string ((QmiPdcRefreshEventType)tmp));
#elif defined  __QMI_PDC_REFRESH_EVENT_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_refresh_event_type_build_string_from_mask ((QmiPdcRefreshEventType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcRefreshEventType
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

struct indication_refresh_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_refresh_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_refresh_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_PDC_REFRESH_OUTPUT_TLV_SLOT_ID:
            tlv_type_str = "Slot ID";
            translated_value = qmi_indication_pdc_refresh_output_slot_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_REFRESH_OUTPUT_TLV_SUBSCRIPTION_ID:
            tlv_type_str = "Subscription ID";
            translated_value = qmi_indication_pdc_refresh_output_subscription_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_PDC_REFRESH_OUTPUT_TLV_REFRESH_EVENT:
            tlv_type_str = "Refresh Event";
            translated_value = qmi_indication_pdc_refresh_output_refresh_event_get_printable (
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
indication_refresh_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Refresh\" (0x2F)\n",
                            line_prefix);

    {
        struct indication_refresh_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_refresh_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationPdcRefreshOutput *
qmi_indication_pdc_refresh_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationPdcRefreshOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_PDC_REFRESH);

    self = g_slice_new0 (QmiIndicationPdcRefreshOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_REFRESH_OUTPUT_TLV_SLOT_ID, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_refresh_output_slot_id_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_slot_id), NULL))
                goto qmi_indication_pdc_refresh_output_slot_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Slot ID' TLV", offset);
            }

            self->arg_slot_id_set = TRUE;

qmi_indication_pdc_refresh_output_slot_id_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_REFRESH_OUTPUT_TLV_SUBSCRIPTION_ID, NULL, NULL)) == 0) {
                goto qmi_indication_pdc_refresh_output_subscription_id_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_subscription_id), NULL))
                goto qmi_indication_pdc_refresh_output_subscription_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Subscription ID' TLV", offset);
            }

            self->arg_subscription_id_set = TRUE;

qmi_indication_pdc_refresh_output_subscription_id_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_PDC_REFRESH_OUTPUT_TLV_REFRESH_EVENT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Refresh Event TLV: ");
                qmi_indication_pdc_refresh_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_indication_pdc_refresh_output_refresh_event_out;
                self->arg_refresh_event = (QmiPdcRefreshEventType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Refresh Event' TLV", offset);
            }

            self->arg_refresh_event_set = TRUE;

qmi_indication_pdc_refresh_output_refresh_event_out:
            if (!self->arg_refresh_event_set) {
                qmi_indication_pdc_refresh_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_pdc_reset_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_RESET);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcResetOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_RESET_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_reset_output_get_result (
    QmiMessagePdcResetOutput *self,
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
qmi_message_pdc_reset_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcResetOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_reset_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_reset_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcResetOutput *
qmi_message_pdc_reset_output_ref (QmiMessagePdcResetOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_reset_output_unref (QmiMessagePdcResetOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcResetOutput, self);
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_PDC_RESET_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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
        case QMI_MESSAGE_PDC_RESET_OUTPUT_TLV_RESULT:
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

QmiMessagePdcResetOutput *
qmi_message_pdc_reset_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcResetOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_RESET);

    self = g_slice_new0 (QmiMessagePdcResetOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_RESET_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_reset_output_unref (self);
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
                qmi_message_pdc_reset_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Register */


/* --- Input -- */

struct _QmiMessagePdcRegisterInput {
    volatile gint ref_count;

    /* Enable Refresh */
    gboolean arg_enable_refresh_set;
    guint8 arg_enable_refresh;

    /* Enable Reporting */
    gboolean arg_enable_reporting_set;
    guint8 arg_enable_reporting;
};

#define QMI_MESSAGE_PDC_REGISTER_INPUT_TLV_ENABLE_REFRESH 0x11
#define QMI_MESSAGE_PDC_REGISTER_INPUT_TLV_ENABLE_REPORTING 0x10

gboolean
qmi_message_pdc_register_input_get_enable_refresh (
    QmiMessagePdcRegisterInput *self,
    gboolean *value_enable_refresh,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_enable_refresh_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Enable Refresh' was not found in the message");
        return FALSE;
    }

    if (value_enable_refresh)
        *value_enable_refresh = (gboolean)(self->arg_enable_refresh);

    return TRUE;
}

gboolean
qmi_message_pdc_register_input_set_enable_refresh (
    QmiMessagePdcRegisterInput *self,
    gboolean value_enable_refresh,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_enable_refresh = (guint8)(value_enable_refresh);
    self->arg_enable_refresh_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pdc_register_input_get_enable_reporting (
    QmiMessagePdcRegisterInput *self,
    gboolean *value_enable_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_enable_reporting_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Enable Reporting' was not found in the message");
        return FALSE;
    }

    if (value_enable_reporting)
        *value_enable_reporting = (gboolean)(self->arg_enable_reporting);

    return TRUE;
}

gboolean
qmi_message_pdc_register_input_set_enable_reporting (
    QmiMessagePdcRegisterInput *self,
    gboolean value_enable_reporting,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_enable_reporting = (guint8)(value_enable_reporting);
    self->arg_enable_reporting_set = TRUE;

    return TRUE;
}

GType
qmi_message_pdc_register_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcRegisterInput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_register_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_register_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcRegisterInput *
qmi_message_pdc_register_input_ref (QmiMessagePdcRegisterInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_register_input_unref (QmiMessagePdcRegisterInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcRegisterInput, self);
    }
}

QmiMessagePdcRegisterInput *
qmi_message_pdc_register_input_new (void)
{
    QmiMessagePdcRegisterInput *self;

    self = g_slice_new0 (QmiMessagePdcRegisterInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pdc_register_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdcRegisterInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_REGISTER);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Register' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Enable Refresh' TLV */
    if (input->arg_enable_refresh_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_REGISTER_INPUT_TLV_ENABLE_REFRESH, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Enable Refresh': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_enable_refresh;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Enable Refresh': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Enable Refresh': ");
            return NULL;
        }
    }

    /* Try to add the 'Enable Reporting' TLV */
    if (input->arg_enable_reporting_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_REGISTER_INPUT_TLV_ENABLE_REPORTING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Enable Reporting': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_enable_reporting;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Enable Reporting': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Enable Reporting': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Enable Reporting' in message 'Register'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcRegisterOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_REGISTER_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_register_output_get_result (
    QmiMessagePdcRegisterOutput *self,
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
qmi_message_pdc_register_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcRegisterOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_register_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_register_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcRegisterOutput *
qmi_message_pdc_register_output_ref (QmiMessagePdcRegisterOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_register_output_unref (QmiMessagePdcRegisterOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcRegisterOutput, self);
    }
}

static gchar *
qmi_message_pdc_register_input_enable_refresh_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_REGISTER_INPUT_TLV_ENABLE_REFRESH, NULL, NULL)) == 0)
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
qmi_message_pdc_register_input_enable_reporting_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_REGISTER_INPUT_TLV_ENABLE_REPORTING, NULL, NULL)) == 0)
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

struct message_register_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_register_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_register_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDC_REGISTER_INPUT_TLV_ENABLE_REFRESH:
            tlv_type_str = "Enable Refresh";
            translated_value = qmi_message_pdc_register_input_enable_refresh_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_REGISTER_INPUT_TLV_ENABLE_REPORTING:
            tlv_type_str = "Enable Reporting";
            translated_value = qmi_message_pdc_register_input_enable_reporting_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDC_REGISTER_OUTPUT_TLV_RESULT:
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
message_register_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Register\" (0x20)\n",
                            line_prefix);

    {
        struct message_register_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_register_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdcRegisterOutput *
qmi_message_pdc_register_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcRegisterOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_REGISTER);

    self = g_slice_new0 (QmiMessagePdcRegisterOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_REGISTER_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_register_output_unref (self);
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
                qmi_message_pdc_register_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Config Change */


/* --- Input -- */

struct _QmiMessagePdcConfigChangeInput {
    volatile gint ref_count;

    /* Type With Id v2 */
    gboolean arg_type_with_id_v2_set;
    guint32 arg_type_with_id_v2_config_type;
    GArray *arg_type_with_id_v2_id;
};

#define QMI_MESSAGE_PDC_CONFIG_CHANGE_INPUT_TLV_TYPE_WITH_ID_V2 0x01

gboolean
qmi_message_pdc_config_change_input_get_type_with_id_v2 (
    QmiMessagePdcConfigChangeInput *self,
    QmiPdcConfigurationType *value_type_with_id_v2_config_type,
    GArray **value_type_with_id_v2_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_type_with_id_v2_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Type With Id v2' was not found in the message");
        return FALSE;
    }

    if (value_type_with_id_v2_config_type)
        *value_type_with_id_v2_config_type = (QmiPdcConfigurationType)(self->arg_type_with_id_v2_config_type);
    if (value_type_with_id_v2_id)
        *value_type_with_id_v2_id = self->arg_type_with_id_v2_id;

    return TRUE;
}

gboolean
qmi_message_pdc_config_change_input_set_type_with_id_v2 (
    QmiMessagePdcConfigChangeInput *self,
    QmiPdcConfigurationType value_type_with_id_v2_config_type,
    GArray *value_type_with_id_v2_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_type_with_id_v2_config_type = (guint32)(value_type_with_id_v2_config_type);
    g_clear_pointer (&self->arg_type_with_id_v2_id, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_type_with_id_v2_id, (GDestroyNotify)g_ptr_array_unref);
    self->arg_type_with_id_v2_id = g_array_ref (value_type_with_id_v2_id);
    self->arg_type_with_id_v2_set = TRUE;

    return TRUE;
}

GType
qmi_message_pdc_config_change_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcConfigChangeInput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_config_change_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_config_change_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcConfigChangeInput *
qmi_message_pdc_config_change_input_ref (QmiMessagePdcConfigChangeInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_config_change_input_unref (QmiMessagePdcConfigChangeInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_type_with_id_v2_id, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessagePdcConfigChangeInput, self);
    }
}

QmiMessagePdcConfigChangeInput *
qmi_message_pdc_config_change_input_new (void)
{
    QmiMessagePdcConfigChangeInput *self;

    self = g_slice_new0 (QmiMessagePdcConfigChangeInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pdc_config_change_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdcConfigChangeInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_CONFIG_CHANGE);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Config Change' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Type With Id v2' TLV */
    if (input->arg_type_with_id_v2_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_CONFIG_CHANGE_INPUT_TLV_TYPE_WITH_ID_V2, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Type With Id v2': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_type_with_id_v2_config_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Type With Id v2': ");
                return NULL;
            }
        }
        {
            guint id_i;
            guint8 id_n_items;

            /* Write the number of items in the array first */
            id_n_items = (guint8) input->arg_type_with_id_v2_id->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, id_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Type With Id v2': ");
                return NULL;
            }

            for (id_i = 0; id_i < input->arg_type_with_id_v2_id->len; id_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_type_with_id_v2_id, guint8,id_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Type With Id v2': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Type With Id v2': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Type With Id v2' in message 'Config Change'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcConfigChangeOutput {
    volatile gint ref_count;

    /* Type With Id v2 */
    gboolean arg_type_with_id_v2_set;
    guint32 arg_type_with_id_v2_config_type;
    GArray *arg_type_with_id_v2_id;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_CONFIG_CHANGE_OUTPUT_TLV_TYPE_WITH_ID_V2 0x01
#define QMI_MESSAGE_PDC_CONFIG_CHANGE_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_config_change_output_get_type_with_id_v2 (
    QmiMessagePdcConfigChangeOutput *self,
    QmiPdcConfigurationType *value_type_with_id_v2_config_type,
    GArray **value_type_with_id_v2_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_type_with_id_v2_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Type With Id v2' was not found in the message");
        return FALSE;
    }

    if (value_type_with_id_v2_config_type)
        *value_type_with_id_v2_config_type = (QmiPdcConfigurationType)(self->arg_type_with_id_v2_config_type);
    if (value_type_with_id_v2_id)
        *value_type_with_id_v2_id = self->arg_type_with_id_v2_id;

    return TRUE;
}

gboolean
qmi_message_pdc_config_change_output_get_result (
    QmiMessagePdcConfigChangeOutput *self,
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
qmi_message_pdc_config_change_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcConfigChangeOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_config_change_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_config_change_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcConfigChangeOutput *
qmi_message_pdc_config_change_output_ref (QmiMessagePdcConfigChangeOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_config_change_output_unref (QmiMessagePdcConfigChangeOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_type_with_id_v2_id, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessagePdcConfigChangeOutput, self);
    }
}

static gchar *
qmi_message_pdc_config_change_input_type_with_id_v2_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_CONFIG_CHANGE_INPUT_TLV_TYPE_WITH_ID_V2, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " config_type = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcConfigurationType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " id = '");
    {
        guint id_i;
        guint8 id_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(id_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (id_i = 0; id_i < id_n_items; id_i++) {
            g_string_append_printf (printable, " [%u] = '", id_i);

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
qmi_message_pdc_config_change_output_type_with_id_v2_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_CONFIG_CHANGE_OUTPUT_TLV_TYPE_WITH_ID_V2, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " config_type = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcConfigurationType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " id = '");
    {
        guint id_i;
        guint8 id_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(id_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (id_i = 0; id_i < id_n_items; id_i++) {
            g_string_append_printf (printable, " [%u] = '", id_i);

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

struct message_config_change_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_config_change_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_config_change_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDC_CONFIG_CHANGE_INPUT_TLV_TYPE_WITH_ID_V2:
            tlv_type_str = "Type With Id v2";
            translated_value = qmi_message_pdc_config_change_input_type_with_id_v2_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDC_CONFIG_CHANGE_OUTPUT_TLV_TYPE_WITH_ID_V2:
            tlv_type_str = "Type With Id v2";
            translated_value = qmi_message_pdc_config_change_output_type_with_id_v2_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_CONFIG_CHANGE_OUTPUT_TLV_RESULT:
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
message_config_change_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Config Change\" (0x21)\n",
                            line_prefix);

    {
        struct message_config_change_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_config_change_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdcConfigChangeOutput *
qmi_message_pdc_config_change_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcConfigChangeOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_CONFIG_CHANGE);

    self = g_slice_new0 (QmiMessagePdcConfigChangeOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_CONFIG_CHANGE_OUTPUT_TLV_TYPE_WITH_ID_V2, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Type With Id v2 TLV: ");
                qmi_message_pdc_config_change_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_message_pdc_config_change_output_type_with_id_v2_out;
                self->arg_type_with_id_v2_config_type = (QmiPdcConfigurationType)tmp;
            }
            {
                guint id_i;
                guint8 id_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(id_n_items), error))
                    goto qmi_message_pdc_config_change_output_type_with_id_v2_out;

                self->arg_type_with_id_v2_id = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)id_n_items);

                for (id_i = 0; id_i < id_n_items; id_i++) {
                    guint8 id_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(id_aux), error))
                        goto qmi_message_pdc_config_change_output_type_with_id_v2_out;
                    g_array_insert_val (self->arg_type_with_id_v2_id, id_i, id_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Type With Id v2' TLV", offset);
            }

            self->arg_type_with_id_v2_set = TRUE;

qmi_message_pdc_config_change_output_type_with_id_v2_out:
            if (!self->arg_type_with_id_v2_set) {
                qmi_message_pdc_config_change_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_CONFIG_CHANGE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_config_change_output_unref (self);
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
                qmi_message_pdc_config_change_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Get Selected Config */


/* --- Input -- */

struct _QmiMessagePdcGetSelectedConfigInput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Config Type */
    gboolean arg_config_type_set;
    guint32 arg_config_type;
};

#define QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_INPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_INPUT_TLV_CONFIG_TYPE 0x1

gboolean
qmi_message_pdc_get_selected_config_input_get_token (
    QmiMessagePdcGetSelectedConfigInput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_get_selected_config_input_set_token (
    QmiMessagePdcGetSelectedConfigInput *self,
    guint32 value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_token = value_token;
    self->arg_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pdc_get_selected_config_input_get_config_type (
    QmiMessagePdcGetSelectedConfigInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_config_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Config Type' was not found in the message");
        return FALSE;
    }

    if (value_config_type)
        *value_config_type = (QmiPdcConfigurationType)(self->arg_config_type);

    return TRUE;
}

gboolean
qmi_message_pdc_get_selected_config_input_set_config_type (
    QmiMessagePdcGetSelectedConfigInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_config_type = (guint32)(value_config_type);
    self->arg_config_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_pdc_get_selected_config_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcGetSelectedConfigInput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_get_selected_config_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_get_selected_config_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcGetSelectedConfigInput *
qmi_message_pdc_get_selected_config_input_ref (QmiMessagePdcGetSelectedConfigInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_get_selected_config_input_unref (QmiMessagePdcGetSelectedConfigInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcGetSelectedConfigInput, self);
    }
}

QmiMessagePdcGetSelectedConfigInput *
qmi_message_pdc_get_selected_config_input_new (void)
{
    QmiMessagePdcGetSelectedConfigInput *self;

    self = g_slice_new0 (QmiMessagePdcGetSelectedConfigInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pdc_get_selected_config_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdcGetSelectedConfigInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_GET_SELECTED_CONFIG);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Get Selected Config' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Token' TLV */
    if (input->arg_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_INPUT_TLV_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Config Type' TLV */
    if (input->arg_config_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_INPUT_TLV_CONFIG_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Config Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_config_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Config Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Config Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Config Type' in message 'Get Selected Config'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcGetSelectedConfigOutput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_get_selected_config_output_get_token (
    QmiMessagePdcGetSelectedConfigOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_get_selected_config_output_get_result (
    QmiMessagePdcGetSelectedConfigOutput *self,
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
qmi_message_pdc_get_selected_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcGetSelectedConfigOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_get_selected_config_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_get_selected_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcGetSelectedConfigOutput *
qmi_message_pdc_get_selected_config_output_ref (QmiMessagePdcGetSelectedConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_get_selected_config_output_unref (QmiMessagePdcGetSelectedConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcGetSelectedConfigOutput, self);
    }
}

static gchar *
qmi_message_pdc_get_selected_config_input_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_INPUT_TLV_TOKEN, NULL, NULL)) == 0)
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
qmi_message_pdc_get_selected_config_input_config_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_INPUT_TLV_CONFIG_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcConfigurationType
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
qmi_message_pdc_get_selected_config_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct message_get_selected_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_selected_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_selected_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_INPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_get_selected_config_input_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_INPUT_TLV_CONFIG_TYPE:
            tlv_type_str = "Config Type";
            translated_value = qmi_message_pdc_get_selected_config_input_config_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_get_selected_config_output_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_RESULT:
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
message_get_selected_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Selected Config\" (0x22)\n",
                            line_prefix);

    {
        struct message_get_selected_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_selected_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdcGetSelectedConfigOutput *
qmi_message_pdc_get_selected_config_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcGetSelectedConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_GET_SELECTED_CONFIG);

    self = g_slice_new0 (QmiMessagePdcGetSelectedConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_pdc_get_selected_config_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_message_pdc_get_selected_config_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_message_pdc_get_selected_config_output_token_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_SELECTED_CONFIG_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_get_selected_config_output_unref (self);
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
                qmi_message_pdc_get_selected_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Set Selected Config */


/* --- Input -- */

struct _QmiMessagePdcSetSelectedConfigInput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Type With Id v2 */
    gboolean arg_type_with_id_v2_set;
    guint32 arg_type_with_id_v2_config_type;
    GArray *arg_type_with_id_v2_id;
};

#define QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_INPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_INPUT_TLV_TYPE_WITH_ID_V2 0x01

gboolean
qmi_message_pdc_set_selected_config_input_get_token (
    QmiMessagePdcSetSelectedConfigInput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_set_selected_config_input_set_token (
    QmiMessagePdcSetSelectedConfigInput *self,
    guint32 value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_token = value_token;
    self->arg_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pdc_set_selected_config_input_get_type_with_id_v2 (
    QmiMessagePdcSetSelectedConfigInput *self,
    QmiPdcConfigurationType *value_type_with_id_v2_config_type,
    GArray **value_type_with_id_v2_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_type_with_id_v2_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Type With Id v2' was not found in the message");
        return FALSE;
    }

    if (value_type_with_id_v2_config_type)
        *value_type_with_id_v2_config_type = (QmiPdcConfigurationType)(self->arg_type_with_id_v2_config_type);
    if (value_type_with_id_v2_id)
        *value_type_with_id_v2_id = self->arg_type_with_id_v2_id;

    return TRUE;
}

gboolean
qmi_message_pdc_set_selected_config_input_set_type_with_id_v2 (
    QmiMessagePdcSetSelectedConfigInput *self,
    QmiPdcConfigurationType value_type_with_id_v2_config_type,
    GArray *value_type_with_id_v2_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_type_with_id_v2_config_type = (guint32)(value_type_with_id_v2_config_type);
    g_clear_pointer (&self->arg_type_with_id_v2_id, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_type_with_id_v2_id, (GDestroyNotify)g_ptr_array_unref);
    self->arg_type_with_id_v2_id = g_array_ref (value_type_with_id_v2_id);
    self->arg_type_with_id_v2_set = TRUE;

    return TRUE;
}

GType
qmi_message_pdc_set_selected_config_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcSetSelectedConfigInput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_set_selected_config_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_set_selected_config_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcSetSelectedConfigInput *
qmi_message_pdc_set_selected_config_input_ref (QmiMessagePdcSetSelectedConfigInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_set_selected_config_input_unref (QmiMessagePdcSetSelectedConfigInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_type_with_id_v2_id, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessagePdcSetSelectedConfigInput, self);
    }
}

QmiMessagePdcSetSelectedConfigInput *
qmi_message_pdc_set_selected_config_input_new (void)
{
    QmiMessagePdcSetSelectedConfigInput *self;

    self = g_slice_new0 (QmiMessagePdcSetSelectedConfigInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pdc_set_selected_config_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdcSetSelectedConfigInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_SET_SELECTED_CONFIG);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set Selected Config' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Token' TLV */
    if (input->arg_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_INPUT_TLV_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Type With Id v2' TLV */
    if (input->arg_type_with_id_v2_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_INPUT_TLV_TYPE_WITH_ID_V2, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Type With Id v2': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_type_with_id_v2_config_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Type With Id v2': ");
                return NULL;
            }
        }
        {
            guint id_i;
            guint8 id_n_items;

            /* Write the number of items in the array first */
            id_n_items = (guint8) input->arg_type_with_id_v2_id->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, id_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Type With Id v2': ");
                return NULL;
            }

            for (id_i = 0; id_i < input->arg_type_with_id_v2_id->len; id_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_type_with_id_v2_id, guint8,id_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Type With Id v2': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Type With Id v2': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Type With Id v2' in message 'Set Selected Config'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcSetSelectedConfigOutput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_set_selected_config_output_get_token (
    QmiMessagePdcSetSelectedConfigOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_set_selected_config_output_get_result (
    QmiMessagePdcSetSelectedConfigOutput *self,
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
qmi_message_pdc_set_selected_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcSetSelectedConfigOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_set_selected_config_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_set_selected_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcSetSelectedConfigOutput *
qmi_message_pdc_set_selected_config_output_ref (QmiMessagePdcSetSelectedConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_set_selected_config_output_unref (QmiMessagePdcSetSelectedConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcSetSelectedConfigOutput, self);
    }
}

static gchar *
qmi_message_pdc_set_selected_config_input_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_INPUT_TLV_TOKEN, NULL, NULL)) == 0)
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
qmi_message_pdc_set_selected_config_input_type_with_id_v2_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_INPUT_TLV_TYPE_WITH_ID_V2, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " config_type = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcConfigurationType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " id = '");
    {
        guint id_i;
        guint8 id_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(id_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (id_i = 0; id_i < id_n_items; id_i++) {
            g_string_append_printf (printable, " [%u] = '", id_i);

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
qmi_message_pdc_set_selected_config_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct message_set_selected_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_selected_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_selected_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_INPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_set_selected_config_input_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_INPUT_TLV_TYPE_WITH_ID_V2:
            tlv_type_str = "Type With Id v2";
            translated_value = qmi_message_pdc_set_selected_config_input_type_with_id_v2_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_set_selected_config_output_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_RESULT:
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
message_set_selected_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Selected Config\" (0x23)\n",
                            line_prefix);

    {
        struct message_set_selected_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_selected_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdcSetSelectedConfigOutput *
qmi_message_pdc_set_selected_config_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcSetSelectedConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_SET_SELECTED_CONFIG);

    self = g_slice_new0 (QmiMessagePdcSetSelectedConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_pdc_set_selected_config_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_message_pdc_set_selected_config_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_message_pdc_set_selected_config_output_token_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_SET_SELECTED_CONFIG_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_set_selected_config_output_unref (self);
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
                qmi_message_pdc_set_selected_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC List Configs */


/* --- Input -- */

struct _QmiMessagePdcListConfigsInput {
    volatile gint ref_count;

    /* Config Type */
    gboolean arg_config_type_set;
    guint32 arg_config_type;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;
};

#define QMI_MESSAGE_PDC_LIST_CONFIGS_INPUT_TLV_CONFIG_TYPE 0x11
#define QMI_MESSAGE_PDC_LIST_CONFIGS_INPUT_TLV_TOKEN 0x10

gboolean
qmi_message_pdc_list_configs_input_get_config_type (
    QmiMessagePdcListConfigsInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_config_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Config Type' was not found in the message");
        return FALSE;
    }

    if (value_config_type)
        *value_config_type = (QmiPdcConfigurationType)(self->arg_config_type);

    return TRUE;
}

gboolean
qmi_message_pdc_list_configs_input_set_config_type (
    QmiMessagePdcListConfigsInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_config_type = (guint32)(value_config_type);
    self->arg_config_type_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pdc_list_configs_input_get_token (
    QmiMessagePdcListConfigsInput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_list_configs_input_set_token (
    QmiMessagePdcListConfigsInput *self,
    guint32 value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_token = value_token;
    self->arg_token_set = TRUE;

    return TRUE;
}

GType
qmi_message_pdc_list_configs_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcListConfigsInput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_list_configs_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_list_configs_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcListConfigsInput *
qmi_message_pdc_list_configs_input_ref (QmiMessagePdcListConfigsInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_list_configs_input_unref (QmiMessagePdcListConfigsInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcListConfigsInput, self);
    }
}

QmiMessagePdcListConfigsInput *
qmi_message_pdc_list_configs_input_new (void)
{
    QmiMessagePdcListConfigsInput *self;

    self = g_slice_new0 (QmiMessagePdcListConfigsInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pdc_list_configs_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdcListConfigsInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_LIST_CONFIGS);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'List Configs' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Config Type' TLV */
    if (input->arg_config_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_LIST_CONFIGS_INPUT_TLV_CONFIG_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Config Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_config_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Config Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Config Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Config Type' in message 'List Configs'");
        return NULL;
    }

    /* Try to add the 'Token' TLV */
    if (input->arg_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_LIST_CONFIGS_INPUT_TLV_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Token': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcListConfigsOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_LIST_CONFIGS_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_list_configs_output_get_result (
    QmiMessagePdcListConfigsOutput *self,
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
qmi_message_pdc_list_configs_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcListConfigsOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_list_configs_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_list_configs_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcListConfigsOutput *
qmi_message_pdc_list_configs_output_ref (QmiMessagePdcListConfigsOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_list_configs_output_unref (QmiMessagePdcListConfigsOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcListConfigsOutput, self);
    }
}

static gchar *
qmi_message_pdc_list_configs_input_config_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_LIST_CONFIGS_INPUT_TLV_CONFIG_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcConfigurationType
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
qmi_message_pdc_list_configs_input_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_LIST_CONFIGS_INPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct message_list_configs_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_list_configs_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_list_configs_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDC_LIST_CONFIGS_INPUT_TLV_CONFIG_TYPE:
            tlv_type_str = "Config Type";
            translated_value = qmi_message_pdc_list_configs_input_config_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_LIST_CONFIGS_INPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_list_configs_input_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDC_LIST_CONFIGS_OUTPUT_TLV_RESULT:
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
message_list_configs_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"List Configs\" (0x24)\n",
                            line_prefix);

    {
        struct message_list_configs_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_list_configs_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdcListConfigsOutput *
qmi_message_pdc_list_configs_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcListConfigsOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_LIST_CONFIGS);

    self = g_slice_new0 (QmiMessagePdcListConfigsOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_LIST_CONFIGS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_list_configs_output_unref (self);
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
                qmi_message_pdc_list_configs_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Delete Config */


/* --- Input -- */

struct _QmiMessagePdcDeleteConfigInput {
    volatile gint ref_count;

    /* Id */
    gboolean arg_id_set;
    GArray *arg_id;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Config Type */
    gboolean arg_config_type_set;
    guint32 arg_config_type;
};

#define QMI_MESSAGE_PDC_DELETE_CONFIG_INPUT_TLV_ID 0x11
#define QMI_MESSAGE_PDC_DELETE_CONFIG_INPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_DELETE_CONFIG_INPUT_TLV_CONFIG_TYPE 0x1

gboolean
qmi_message_pdc_delete_config_input_get_id (
    QmiMessagePdcDeleteConfigInput *self,
    GArray **value_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Id' was not found in the message");
        return FALSE;
    }

    if (value_id)
        *value_id = self->arg_id;

    return TRUE;
}

gboolean
qmi_message_pdc_delete_config_input_set_id (
    QmiMessagePdcDeleteConfigInput *self,
    GArray *value_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_id, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_id, (GDestroyNotify)g_ptr_array_unref);
    self->arg_id = g_array_ref (value_id);
    self->arg_id_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pdc_delete_config_input_get_token (
    QmiMessagePdcDeleteConfigInput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_delete_config_input_set_token (
    QmiMessagePdcDeleteConfigInput *self,
    guint32 value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_token = value_token;
    self->arg_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pdc_delete_config_input_get_config_type (
    QmiMessagePdcDeleteConfigInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_config_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Config Type' was not found in the message");
        return FALSE;
    }

    if (value_config_type)
        *value_config_type = (QmiPdcConfigurationType)(self->arg_config_type);

    return TRUE;
}

gboolean
qmi_message_pdc_delete_config_input_set_config_type (
    QmiMessagePdcDeleteConfigInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_config_type = (guint32)(value_config_type);
    self->arg_config_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_pdc_delete_config_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcDeleteConfigInput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_delete_config_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_delete_config_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcDeleteConfigInput *
qmi_message_pdc_delete_config_input_ref (QmiMessagePdcDeleteConfigInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_delete_config_input_unref (QmiMessagePdcDeleteConfigInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_id, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessagePdcDeleteConfigInput, self);
    }
}

QmiMessagePdcDeleteConfigInput *
qmi_message_pdc_delete_config_input_new (void)
{
    QmiMessagePdcDeleteConfigInput *self;

    self = g_slice_new0 (QmiMessagePdcDeleteConfigInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pdc_delete_config_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdcDeleteConfigInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_DELETE_CONFIG);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Delete Config' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Id' TLV */
    if (input->arg_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_DELETE_CONFIG_INPUT_TLV_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Id': ");
            return NULL;
        }

        {
            guint id_i;
            guint8 id_n_items;

            /* Write the number of items in the array first */
            id_n_items = (guint8) input->arg_id->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, id_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Id': ");
                return NULL;
            }

            for (id_i = 0; id_i < input->arg_id->len; id_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_id, guint8,id_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Id': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Id': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Id' in message 'Delete Config'");
        return NULL;
    }

    /* Try to add the 'Token' TLV */
    if (input->arg_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_DELETE_CONFIG_INPUT_TLV_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Config Type' TLV */
    if (input->arg_config_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_DELETE_CONFIG_INPUT_TLV_CONFIG_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Config Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_config_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Config Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Config Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Config Type' in message 'Delete Config'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcDeleteConfigOutput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_DELETE_CONFIG_OUTPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_DELETE_CONFIG_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_delete_config_output_get_token (
    QmiMessagePdcDeleteConfigOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_delete_config_output_get_result (
    QmiMessagePdcDeleteConfigOutput *self,
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
qmi_message_pdc_delete_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcDeleteConfigOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_delete_config_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_delete_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcDeleteConfigOutput *
qmi_message_pdc_delete_config_output_ref (QmiMessagePdcDeleteConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_delete_config_output_unref (QmiMessagePdcDeleteConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcDeleteConfigOutput, self);
    }
}

static gchar *
qmi_message_pdc_delete_config_input_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_DELETE_CONFIG_INPUT_TLV_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint id_i;
        guint8 id_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(id_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (id_i = 0; id_i < id_n_items; id_i++) {
            g_string_append_printf (printable, " [%u] = '", id_i);

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
qmi_message_pdc_delete_config_input_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_DELETE_CONFIG_INPUT_TLV_TOKEN, NULL, NULL)) == 0)
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
qmi_message_pdc_delete_config_input_config_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_DELETE_CONFIG_INPUT_TLV_CONFIG_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcConfigurationType
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
qmi_message_pdc_delete_config_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_DELETE_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct message_delete_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_delete_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_delete_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDC_DELETE_CONFIG_INPUT_TLV_ID:
            tlv_type_str = "Id";
            translated_value = qmi_message_pdc_delete_config_input_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_DELETE_CONFIG_INPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_delete_config_input_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_DELETE_CONFIG_INPUT_TLV_CONFIG_TYPE:
            tlv_type_str = "Config Type";
            translated_value = qmi_message_pdc_delete_config_input_config_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDC_DELETE_CONFIG_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_delete_config_output_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_DELETE_CONFIG_OUTPUT_TLV_RESULT:
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
message_delete_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Delete Config\" (0x25)\n",
                            line_prefix);

    {
        struct message_delete_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_delete_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdcDeleteConfigOutput *
qmi_message_pdc_delete_config_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcDeleteConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_DELETE_CONFIG);

    self = g_slice_new0 (QmiMessagePdcDeleteConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_DELETE_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_pdc_delete_config_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_message_pdc_delete_config_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_message_pdc_delete_config_output_token_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_DELETE_CONFIG_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_delete_config_output_unref (self);
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
                qmi_message_pdc_delete_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Load Config */


/* --- Input -- */

struct _QmiMessagePdcLoadConfigInput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Config Chunk */
    gboolean arg_config_chunk_set;
    guint32 arg_config_chunk_type;
    GArray *arg_config_chunk_id;
    guint32 arg_config_chunk_total_size;
    GArray *arg_config_chunk_chunk;
};

#define QMI_MESSAGE_PDC_LOAD_CONFIG_INPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_LOAD_CONFIG_INPUT_TLV_CONFIG_CHUNK 0x1

gboolean
qmi_message_pdc_load_config_input_get_token (
    QmiMessagePdcLoadConfigInput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_load_config_input_set_token (
    QmiMessagePdcLoadConfigInput *self,
    guint32 value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_token = value_token;
    self->arg_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pdc_load_config_input_get_config_chunk (
    QmiMessagePdcLoadConfigInput *self,
    QmiPdcConfigurationType *value_config_chunk_type,
    GArray **value_config_chunk_id,
    guint32 *value_config_chunk_total_size,
    GArray **value_config_chunk_chunk,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_config_chunk_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Config Chunk' was not found in the message");
        return FALSE;
    }

    if (value_config_chunk_type)
        *value_config_chunk_type = (QmiPdcConfigurationType)(self->arg_config_chunk_type);
    if (value_config_chunk_id)
        *value_config_chunk_id = self->arg_config_chunk_id;
    if (value_config_chunk_total_size)
        *value_config_chunk_total_size = self->arg_config_chunk_total_size;
    if (value_config_chunk_chunk)
        *value_config_chunk_chunk = self->arg_config_chunk_chunk;

    return TRUE;
}

gboolean
qmi_message_pdc_load_config_input_set_config_chunk (
    QmiMessagePdcLoadConfigInput *self,
    QmiPdcConfigurationType value_config_chunk_type,
    GArray *value_config_chunk_id,
    guint32 value_config_chunk_total_size,
    GArray *value_config_chunk_chunk,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_config_chunk_type = (guint32)(value_config_chunk_type);
    g_clear_pointer (&self->arg_config_chunk_id, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_config_chunk_id, (GDestroyNotify)g_ptr_array_unref);
    self->arg_config_chunk_id = g_array_ref (value_config_chunk_id);
    self->arg_config_chunk_total_size = value_config_chunk_total_size;
    g_clear_pointer (&self->arg_config_chunk_chunk, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_config_chunk_chunk, (GDestroyNotify)g_ptr_array_unref);
    self->arg_config_chunk_chunk = g_array_ref (value_config_chunk_chunk);
    self->arg_config_chunk_set = TRUE;

    return TRUE;
}

GType
qmi_message_pdc_load_config_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcLoadConfigInput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_load_config_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_load_config_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcLoadConfigInput *
qmi_message_pdc_load_config_input_ref (QmiMessagePdcLoadConfigInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_load_config_input_unref (QmiMessagePdcLoadConfigInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_config_chunk_id, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_config_chunk_chunk, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessagePdcLoadConfigInput, self);
    }
}

QmiMessagePdcLoadConfigInput *
qmi_message_pdc_load_config_input_new (void)
{
    QmiMessagePdcLoadConfigInput *self;

    self = g_slice_new0 (QmiMessagePdcLoadConfigInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pdc_load_config_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdcLoadConfigInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_LOAD_CONFIG);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Load Config' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Token' TLV */
    if (input->arg_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_LOAD_CONFIG_INPUT_TLV_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Config Chunk' TLV */
    if (input->arg_config_chunk_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_LOAD_CONFIG_INPUT_TLV_CONFIG_CHUNK, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Config Chunk': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_config_chunk_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Config Chunk': ");
                return NULL;
            }
        }
        {
            guint id_i;
            guint8 id_n_items;

            /* Write the number of items in the array first */
            id_n_items = (guint8) input->arg_config_chunk_id->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, id_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Config Chunk': ");
                return NULL;
            }

            for (id_i = 0; id_i < input->arg_config_chunk_id->len; id_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_config_chunk_id, guint8,id_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Config Chunk': ");
                    return NULL;
                }
            }
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_config_chunk_total_size, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Config Chunk': ");
            return NULL;
        }
        {
            guint chunk_i;
            guint16 chunk_n_items;

            /* Write the number of items in the array first */
            chunk_n_items = (guint16) input->arg_config_chunk_chunk->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, chunk_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Config Chunk': ");
                return NULL;
            }

            for (chunk_i = 0; chunk_i < input->arg_config_chunk_chunk->len; chunk_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_config_chunk_chunk, guint8,chunk_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Config Chunk': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Config Chunk': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Config Chunk' in message 'Load Config'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcLoadConfigOutput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_LOAD_CONFIG_OUTPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_LOAD_CONFIG_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_load_config_output_get_token (
    QmiMessagePdcLoadConfigOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_load_config_output_get_result (
    QmiMessagePdcLoadConfigOutput *self,
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
qmi_message_pdc_load_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcLoadConfigOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_load_config_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_load_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcLoadConfigOutput *
qmi_message_pdc_load_config_output_ref (QmiMessagePdcLoadConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_load_config_output_unref (QmiMessagePdcLoadConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcLoadConfigOutput, self);
    }
}

static gchar *
qmi_message_pdc_load_config_input_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_LOAD_CONFIG_INPUT_TLV_TOKEN, NULL, NULL)) == 0)
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
qmi_message_pdc_load_config_input_config_chunk_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_LOAD_CONFIG_INPUT_TLV_CONFIG_CHUNK, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " type = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcConfigurationType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " id = '");
    {
        guint id_i;
        guint8 id_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(id_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (id_i = 0; id_i < id_n_items; id_i++) {
            g_string_append_printf (printable, " [%u] = '", id_i);

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
    }    g_string_append (printable, "'");
    g_string_append (printable, " total_size = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " chunk = '");
    {
        guint chunk_i;
        guint16 chunk_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(chunk_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (chunk_i = 0; chunk_i < chunk_n_items; chunk_i++) {
            g_string_append_printf (printable, " [%u] = '", chunk_i);

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
qmi_message_pdc_load_config_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_LOAD_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct message_load_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_load_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_load_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDC_LOAD_CONFIG_INPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_load_config_input_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_LOAD_CONFIG_INPUT_TLV_CONFIG_CHUNK:
            tlv_type_str = "Config Chunk";
            translated_value = qmi_message_pdc_load_config_input_config_chunk_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDC_LOAD_CONFIG_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_load_config_output_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_LOAD_CONFIG_OUTPUT_TLV_RESULT:
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
message_load_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Load Config\" (0x26)\n",
                            line_prefix);

    {
        struct message_load_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_load_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdcLoadConfigOutput *
qmi_message_pdc_load_config_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcLoadConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_LOAD_CONFIG);

    self = g_slice_new0 (QmiMessagePdcLoadConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_LOAD_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_pdc_load_config_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_message_pdc_load_config_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_message_pdc_load_config_output_token_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_LOAD_CONFIG_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_load_config_output_unref (self);
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
                qmi_message_pdc_load_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Activate Config */


/* --- Input -- */

struct _QmiMessagePdcActivateConfigInput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Config Type */
    gboolean arg_config_type_set;
    guint32 arg_config_type;
};

#define QMI_MESSAGE_PDC_ACTIVATE_CONFIG_INPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_ACTIVATE_CONFIG_INPUT_TLV_CONFIG_TYPE 0x1

gboolean
qmi_message_pdc_activate_config_input_get_token (
    QmiMessagePdcActivateConfigInput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_activate_config_input_set_token (
    QmiMessagePdcActivateConfigInput *self,
    guint32 value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_token = value_token;
    self->arg_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pdc_activate_config_input_get_config_type (
    QmiMessagePdcActivateConfigInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_config_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Config Type' was not found in the message");
        return FALSE;
    }

    if (value_config_type)
        *value_config_type = (QmiPdcConfigurationType)(self->arg_config_type);

    return TRUE;
}

gboolean
qmi_message_pdc_activate_config_input_set_config_type (
    QmiMessagePdcActivateConfigInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_config_type = (guint32)(value_config_type);
    self->arg_config_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_pdc_activate_config_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcActivateConfigInput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_activate_config_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_activate_config_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcActivateConfigInput *
qmi_message_pdc_activate_config_input_ref (QmiMessagePdcActivateConfigInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_activate_config_input_unref (QmiMessagePdcActivateConfigInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcActivateConfigInput, self);
    }
}

QmiMessagePdcActivateConfigInput *
qmi_message_pdc_activate_config_input_new (void)
{
    QmiMessagePdcActivateConfigInput *self;

    self = g_slice_new0 (QmiMessagePdcActivateConfigInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pdc_activate_config_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdcActivateConfigInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_ACTIVATE_CONFIG);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Activate Config' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Token' TLV */
    if (input->arg_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_ACTIVATE_CONFIG_INPUT_TLV_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Config Type' TLV */
    if (input->arg_config_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_ACTIVATE_CONFIG_INPUT_TLV_CONFIG_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Config Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_config_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Config Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Config Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Config Type' in message 'Activate Config'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcActivateConfigOutput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_activate_config_output_get_token (
    QmiMessagePdcActivateConfigOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_activate_config_output_get_result (
    QmiMessagePdcActivateConfigOutput *self,
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
qmi_message_pdc_activate_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcActivateConfigOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_activate_config_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_activate_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcActivateConfigOutput *
qmi_message_pdc_activate_config_output_ref (QmiMessagePdcActivateConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_activate_config_output_unref (QmiMessagePdcActivateConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcActivateConfigOutput, self);
    }
}

static gchar *
qmi_message_pdc_activate_config_input_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_ACTIVATE_CONFIG_INPUT_TLV_TOKEN, NULL, NULL)) == 0)
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
qmi_message_pdc_activate_config_input_config_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_ACTIVATE_CONFIG_INPUT_TLV_CONFIG_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcConfigurationType
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
qmi_message_pdc_activate_config_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct message_activate_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_activate_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_activate_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDC_ACTIVATE_CONFIG_INPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_activate_config_input_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_ACTIVATE_CONFIG_INPUT_TLV_CONFIG_TYPE:
            tlv_type_str = "Config Type";
            translated_value = qmi_message_pdc_activate_config_input_config_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_activate_config_output_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_RESULT:
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
message_activate_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Activate Config\" (0x27)\n",
                            line_prefix);

    {
        struct message_activate_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_activate_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdcActivateConfigOutput *
qmi_message_pdc_activate_config_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcActivateConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_ACTIVATE_CONFIG);

    self = g_slice_new0 (QmiMessagePdcActivateConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_pdc_activate_config_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_message_pdc_activate_config_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_message_pdc_activate_config_output_token_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_ACTIVATE_CONFIG_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_activate_config_output_unref (self);
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
                qmi_message_pdc_activate_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Get Config Info */


/* --- Input -- */

struct _QmiMessagePdcGetConfigInfoInput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Type With Id v2 */
    gboolean arg_type_with_id_v2_set;
    guint32 arg_type_with_id_v2_config_type;
    GArray *arg_type_with_id_v2_id;
};

#define QMI_MESSAGE_PDC_GET_CONFIG_INFO_INPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_GET_CONFIG_INFO_INPUT_TLV_TYPE_WITH_ID_V2 0x01

gboolean
qmi_message_pdc_get_config_info_input_get_token (
    QmiMessagePdcGetConfigInfoInput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_get_config_info_input_set_token (
    QmiMessagePdcGetConfigInfoInput *self,
    guint32 value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_token = value_token;
    self->arg_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pdc_get_config_info_input_get_type_with_id_v2 (
    QmiMessagePdcGetConfigInfoInput *self,
    QmiPdcConfigurationType *value_type_with_id_v2_config_type,
    GArray **value_type_with_id_v2_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_type_with_id_v2_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Type With Id v2' was not found in the message");
        return FALSE;
    }

    if (value_type_with_id_v2_config_type)
        *value_type_with_id_v2_config_type = (QmiPdcConfigurationType)(self->arg_type_with_id_v2_config_type);
    if (value_type_with_id_v2_id)
        *value_type_with_id_v2_id = self->arg_type_with_id_v2_id;

    return TRUE;
}

gboolean
qmi_message_pdc_get_config_info_input_set_type_with_id_v2 (
    QmiMessagePdcGetConfigInfoInput *self,
    QmiPdcConfigurationType value_type_with_id_v2_config_type,
    GArray *value_type_with_id_v2_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_type_with_id_v2_config_type = (guint32)(value_type_with_id_v2_config_type);
    g_clear_pointer (&self->arg_type_with_id_v2_id, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_type_with_id_v2_id, (GDestroyNotify)g_ptr_array_unref);
    self->arg_type_with_id_v2_id = g_array_ref (value_type_with_id_v2_id);
    self->arg_type_with_id_v2_set = TRUE;

    return TRUE;
}

GType
qmi_message_pdc_get_config_info_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcGetConfigInfoInput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_get_config_info_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_get_config_info_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcGetConfigInfoInput *
qmi_message_pdc_get_config_info_input_ref (QmiMessagePdcGetConfigInfoInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_get_config_info_input_unref (QmiMessagePdcGetConfigInfoInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_type_with_id_v2_id, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessagePdcGetConfigInfoInput, self);
    }
}

QmiMessagePdcGetConfigInfoInput *
qmi_message_pdc_get_config_info_input_new (void)
{
    QmiMessagePdcGetConfigInfoInput *self;

    self = g_slice_new0 (QmiMessagePdcGetConfigInfoInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pdc_get_config_info_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdcGetConfigInfoInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_GET_CONFIG_INFO);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Get Config Info' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Token' TLV */
    if (input->arg_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_GET_CONFIG_INFO_INPUT_TLV_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Type With Id v2' TLV */
    if (input->arg_type_with_id_v2_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_GET_CONFIG_INFO_INPUT_TLV_TYPE_WITH_ID_V2, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Type With Id v2': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_type_with_id_v2_config_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Type With Id v2': ");
                return NULL;
            }
        }
        {
            guint id_i;
            guint8 id_n_items;

            /* Write the number of items in the array first */
            id_n_items = (guint8) input->arg_type_with_id_v2_id->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, id_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Type With Id v2': ");
                return NULL;
            }

            for (id_i = 0; id_i < input->arg_type_with_id_v2_id->len; id_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_type_with_id_v2_id, guint8,id_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Type With Id v2': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Type With Id v2': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Type With Id v2' in message 'Get Config Info'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcGetConfigInfoOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_GET_CONFIG_INFO_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_get_config_info_output_get_result (
    QmiMessagePdcGetConfigInfoOutput *self,
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
qmi_message_pdc_get_config_info_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcGetConfigInfoOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_get_config_info_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_get_config_info_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcGetConfigInfoOutput *
qmi_message_pdc_get_config_info_output_ref (QmiMessagePdcGetConfigInfoOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_get_config_info_output_unref (QmiMessagePdcGetConfigInfoOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcGetConfigInfoOutput, self);
    }
}

static gchar *
qmi_message_pdc_get_config_info_input_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_CONFIG_INFO_INPUT_TLV_TOKEN, NULL, NULL)) == 0)
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
qmi_message_pdc_get_config_info_input_type_with_id_v2_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_CONFIG_INFO_INPUT_TLV_TYPE_WITH_ID_V2, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " config_type = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcConfigurationType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " id = '");
    {
        guint id_i;
        guint8 id_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(id_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (id_i = 0; id_i < id_n_items; id_i++) {
            g_string_append_printf (printable, " [%u] = '", id_i);

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

struct message_get_config_info_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_config_info_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_config_info_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDC_GET_CONFIG_INFO_INPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_get_config_info_input_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_GET_CONFIG_INFO_INPUT_TLV_TYPE_WITH_ID_V2:
            tlv_type_str = "Type With Id v2";
            translated_value = qmi_message_pdc_get_config_info_input_type_with_id_v2_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDC_GET_CONFIG_INFO_OUTPUT_TLV_RESULT:
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
message_get_config_info_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Config Info\" (0x28)\n",
                            line_prefix);

    {
        struct message_get_config_info_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_config_info_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdcGetConfigInfoOutput *
qmi_message_pdc_get_config_info_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcGetConfigInfoOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_GET_CONFIG_INFO);

    self = g_slice_new0 (QmiMessagePdcGetConfigInfoOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_CONFIG_INFO_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_get_config_info_output_unref (self);
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
                qmi_message_pdc_get_config_info_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Get Config Limits */


/* --- Input -- */

struct _QmiMessagePdcGetConfigLimitsInput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Config Type */
    gboolean arg_config_type_set;
    guint32 arg_config_type;
};

#define QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_INPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_INPUT_TLV_CONFIG_TYPE 0x1

gboolean
qmi_message_pdc_get_config_limits_input_get_token (
    QmiMessagePdcGetConfigLimitsInput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_get_config_limits_input_set_token (
    QmiMessagePdcGetConfigLimitsInput *self,
    guint32 value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_token = value_token;
    self->arg_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pdc_get_config_limits_input_get_config_type (
    QmiMessagePdcGetConfigLimitsInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_config_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Config Type' was not found in the message");
        return FALSE;
    }

    if (value_config_type)
        *value_config_type = (QmiPdcConfigurationType)(self->arg_config_type);

    return TRUE;
}

gboolean
qmi_message_pdc_get_config_limits_input_set_config_type (
    QmiMessagePdcGetConfigLimitsInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_config_type = (guint32)(value_config_type);
    self->arg_config_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_pdc_get_config_limits_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcGetConfigLimitsInput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_get_config_limits_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_get_config_limits_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcGetConfigLimitsInput *
qmi_message_pdc_get_config_limits_input_ref (QmiMessagePdcGetConfigLimitsInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_get_config_limits_input_unref (QmiMessagePdcGetConfigLimitsInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcGetConfigLimitsInput, self);
    }
}

QmiMessagePdcGetConfigLimitsInput *
qmi_message_pdc_get_config_limits_input_new (void)
{
    QmiMessagePdcGetConfigLimitsInput *self;

    self = g_slice_new0 (QmiMessagePdcGetConfigLimitsInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pdc_get_config_limits_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdcGetConfigLimitsInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_GET_CONFIG_LIMITS);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Get Config Limits' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Token' TLV */
    if (input->arg_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_INPUT_TLV_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Config Type' TLV */
    if (input->arg_config_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_INPUT_TLV_CONFIG_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Config Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_config_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Config Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Config Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Config Type' in message 'Get Config Limits'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcGetConfigLimitsOutput {
    volatile gint ref_count;

    /* Current Size */
    gboolean arg_current_size_set;
    guint64 arg_current_size;

    /* Maximum Size */
    gboolean arg_maximum_size_set;
    guint64 arg_maximum_size;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_CURRENT_SIZE 0x12
#define QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_MAXIMUM_SIZE 0x11
#define QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_get_config_limits_output_get_current_size (
    QmiMessagePdcGetConfigLimitsOutput *self,
    guint64 *value_current_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_current_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Current Size' was not found in the message");
        return FALSE;
    }

    if (value_current_size)
        *value_current_size = self->arg_current_size;

    return TRUE;
}

gboolean
qmi_message_pdc_get_config_limits_output_get_maximum_size (
    QmiMessagePdcGetConfigLimitsOutput *self,
    guint64 *value_maximum_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_maximum_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Maximum Size' was not found in the message");
        return FALSE;
    }

    if (value_maximum_size)
        *value_maximum_size = self->arg_maximum_size;

    return TRUE;
}

gboolean
qmi_message_pdc_get_config_limits_output_get_token (
    QmiMessagePdcGetConfigLimitsOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_get_config_limits_output_get_result (
    QmiMessagePdcGetConfigLimitsOutput *self,
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
qmi_message_pdc_get_config_limits_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcGetConfigLimitsOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_get_config_limits_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_get_config_limits_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcGetConfigLimitsOutput *
qmi_message_pdc_get_config_limits_output_ref (QmiMessagePdcGetConfigLimitsOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_get_config_limits_output_unref (QmiMessagePdcGetConfigLimitsOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcGetConfigLimitsOutput, self);
    }
}

static gchar *
qmi_message_pdc_get_config_limits_input_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_INPUT_TLV_TOKEN, NULL, NULL)) == 0)
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
qmi_message_pdc_get_config_limits_input_config_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_INPUT_TLV_CONFIG_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcConfigurationType
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
qmi_message_pdc_get_config_limits_output_current_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_CURRENT_SIZE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT64_FORMAT "", tmp);
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
qmi_message_pdc_get_config_limits_output_maximum_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_MAXIMUM_SIZE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT64_FORMAT "", tmp);
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
qmi_message_pdc_get_config_limits_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct message_get_config_limits_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_config_limits_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_config_limits_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_INPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_get_config_limits_input_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_INPUT_TLV_CONFIG_TYPE:
            tlv_type_str = "Config Type";
            translated_value = qmi_message_pdc_get_config_limits_input_config_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_CURRENT_SIZE:
            tlv_type_str = "Current Size";
            translated_value = qmi_message_pdc_get_config_limits_output_current_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_MAXIMUM_SIZE:
            tlv_type_str = "Maximum Size";
            translated_value = qmi_message_pdc_get_config_limits_output_maximum_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_get_config_limits_output_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_RESULT:
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
message_get_config_limits_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Config Limits\" (0x29)\n",
                            line_prefix);

    {
        struct message_get_config_limits_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_config_limits_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdcGetConfigLimitsOutput *
qmi_message_pdc_get_config_limits_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcGetConfigLimitsOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_GET_CONFIG_LIMITS);

    self = g_slice_new0 (QmiMessagePdcGetConfigLimitsOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_CURRENT_SIZE, NULL, NULL)) == 0) {
                goto qmi_message_pdc_get_config_limits_output_current_size_out;
            }
            if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_current_size), NULL))
                goto qmi_message_pdc_get_config_limits_output_current_size_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Current Size' TLV", offset);
            }

            self->arg_current_size_set = TRUE;

qmi_message_pdc_get_config_limits_output_current_size_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_MAXIMUM_SIZE, NULL, NULL)) == 0) {
                goto qmi_message_pdc_get_config_limits_output_maximum_size_out;
            }
            if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_maximum_size), NULL))
                goto qmi_message_pdc_get_config_limits_output_maximum_size_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Maximum Size' TLV", offset);
            }

            self->arg_maximum_size_set = TRUE;

qmi_message_pdc_get_config_limits_output_maximum_size_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_pdc_get_config_limits_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_message_pdc_get_config_limits_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_message_pdc_get_config_limits_output_token_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_get_config_limits_output_unref (self);
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
                qmi_message_pdc_get_config_limits_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Get Default Config Info */


/* --- Input -- */

struct _QmiMessagePdcGetDefaultConfigInfoInput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Config Type */
    gboolean arg_config_type_set;
    guint32 arg_config_type;
};

#define QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_INPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_INPUT_TLV_CONFIG_TYPE 0x1

gboolean
qmi_message_pdc_get_default_config_info_input_get_token (
    QmiMessagePdcGetDefaultConfigInfoInput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_get_default_config_info_input_set_token (
    QmiMessagePdcGetDefaultConfigInfoInput *self,
    guint32 value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_token = value_token;
    self->arg_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pdc_get_default_config_info_input_get_config_type (
    QmiMessagePdcGetDefaultConfigInfoInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_config_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Config Type' was not found in the message");
        return FALSE;
    }

    if (value_config_type)
        *value_config_type = (QmiPdcConfigurationType)(self->arg_config_type);

    return TRUE;
}

gboolean
qmi_message_pdc_get_default_config_info_input_set_config_type (
    QmiMessagePdcGetDefaultConfigInfoInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_config_type = (guint32)(value_config_type);
    self->arg_config_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_pdc_get_default_config_info_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcGetDefaultConfigInfoInput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_get_default_config_info_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_get_default_config_info_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcGetDefaultConfigInfoInput *
qmi_message_pdc_get_default_config_info_input_ref (QmiMessagePdcGetDefaultConfigInfoInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_get_default_config_info_input_unref (QmiMessagePdcGetDefaultConfigInfoInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcGetDefaultConfigInfoInput, self);
    }
}

QmiMessagePdcGetDefaultConfigInfoInput *
qmi_message_pdc_get_default_config_info_input_new (void)
{
    QmiMessagePdcGetDefaultConfigInfoInput *self;

    self = g_slice_new0 (QmiMessagePdcGetDefaultConfigInfoInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pdc_get_default_config_info_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdcGetDefaultConfigInfoInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Get Default Config Info' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Token' TLV */
    if (input->arg_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_INPUT_TLV_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Config Type' TLV */
    if (input->arg_config_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_INPUT_TLV_CONFIG_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Config Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_config_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Config Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Config Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Config Type' in message 'Get Default Config Info'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcGetDefaultConfigInfoOutput {
    volatile gint ref_count;

    /* Description */
    gboolean arg_description_set;
    gchar *arg_description;

    /* Total Size */
    gboolean arg_total_size_set;
    guint32 arg_total_size;

    /* Version */
    gboolean arg_version_set;
    guint32 arg_version;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_DESCRIPTION 0x13
#define QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_TOTAL_SIZE 0x12
#define QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_VERSION 0x11
#define QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_get_default_config_info_output_get_description (
    QmiMessagePdcGetDefaultConfigInfoOutput *self,
    const gchar **value_description,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_description_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Description' was not found in the message");
        return FALSE;
    }

    if (value_description)
        *value_description = self->arg_description;

    return TRUE;
}

gboolean
qmi_message_pdc_get_default_config_info_output_get_total_size (
    QmiMessagePdcGetDefaultConfigInfoOutput *self,
    guint32 *value_total_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_total_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Total Size' was not found in the message");
        return FALSE;
    }

    if (value_total_size)
        *value_total_size = self->arg_total_size;

    return TRUE;
}

gboolean
qmi_message_pdc_get_default_config_info_output_get_version (
    QmiMessagePdcGetDefaultConfigInfoOutput *self,
    guint32 *value_version,
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

gboolean
qmi_message_pdc_get_default_config_info_output_get_token (
    QmiMessagePdcGetDefaultConfigInfoOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_get_default_config_info_output_get_result (
    QmiMessagePdcGetDefaultConfigInfoOutput *self,
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
qmi_message_pdc_get_default_config_info_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcGetDefaultConfigInfoOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_get_default_config_info_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_get_default_config_info_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcGetDefaultConfigInfoOutput *
qmi_message_pdc_get_default_config_info_output_ref (QmiMessagePdcGetDefaultConfigInfoOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_get_default_config_info_output_unref (QmiMessagePdcGetDefaultConfigInfoOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_description, (GDestroyNotify)g_free);
        g_slice_free (QmiMessagePdcGetDefaultConfigInfoOutput, self);
    }
}

static gchar *
qmi_message_pdc_get_default_config_info_input_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_INPUT_TLV_TOKEN, NULL, NULL)) == 0)
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
qmi_message_pdc_get_default_config_info_input_config_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_INPUT_TLV_CONFIG_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcConfigurationType
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
qmi_message_pdc_get_default_config_info_output_description_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_DESCRIPTION, NULL, NULL)) == 0)
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
qmi_message_pdc_get_default_config_info_output_total_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_TOTAL_SIZE, NULL, NULL)) == 0)
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
qmi_message_pdc_get_default_config_info_output_version_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_VERSION, NULL, NULL)) == 0)
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
qmi_message_pdc_get_default_config_info_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct message_get_default_config_info_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_default_config_info_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_default_config_info_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_INPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_get_default_config_info_input_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_INPUT_TLV_CONFIG_TYPE:
            tlv_type_str = "Config Type";
            translated_value = qmi_message_pdc_get_default_config_info_input_config_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_DESCRIPTION:
            tlv_type_str = "Description";
            translated_value = qmi_message_pdc_get_default_config_info_output_description_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_TOTAL_SIZE:
            tlv_type_str = "Total Size";
            translated_value = qmi_message_pdc_get_default_config_info_output_total_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_VERSION:
            tlv_type_str = "Version";
            translated_value = qmi_message_pdc_get_default_config_info_output_version_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_get_default_config_info_output_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_RESULT:
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
message_get_default_config_info_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Default Config Info\" (0x2A)\n",
                            line_prefix);

    {
        struct message_get_default_config_info_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_default_config_info_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdcGetDefaultConfigInfoOutput *
qmi_message_pdc_get_default_config_info_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcGetDefaultConfigInfoOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO);

    self = g_slice_new0 (QmiMessagePdcGetDefaultConfigInfoOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_DESCRIPTION, NULL, NULL)) == 0) {
                goto qmi_message_pdc_get_default_config_info_output_description_out;
            }
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 0, &(self->arg_description), NULL))
                goto qmi_message_pdc_get_default_config_info_output_description_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Description' TLV", offset);
            }

            self->arg_description_set = TRUE;

qmi_message_pdc_get_default_config_info_output_description_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_TOTAL_SIZE, NULL, NULL)) == 0) {
                goto qmi_message_pdc_get_default_config_info_output_total_size_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_total_size), NULL))
                goto qmi_message_pdc_get_default_config_info_output_total_size_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Total Size' TLV", offset);
            }

            self->arg_total_size_set = TRUE;

qmi_message_pdc_get_default_config_info_output_total_size_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_VERSION, NULL, NULL)) == 0) {
                goto qmi_message_pdc_get_default_config_info_output_version_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_version), NULL))
                goto qmi_message_pdc_get_default_config_info_output_version_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Version' TLV", offset);
            }

            self->arg_version_set = TRUE;

qmi_message_pdc_get_default_config_info_output_version_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_pdc_get_default_config_info_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_message_pdc_get_default_config_info_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_message_pdc_get_default_config_info_output_token_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_get_default_config_info_output_unref (self);
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
                qmi_message_pdc_get_default_config_info_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Deactivate Config */


/* --- Input -- */

struct _QmiMessagePdcDeactivateConfigInput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Config Type */
    gboolean arg_config_type_set;
    guint32 arg_config_type;
};

#define QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_INPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_INPUT_TLV_CONFIG_TYPE 0x1

gboolean
qmi_message_pdc_deactivate_config_input_get_token (
    QmiMessagePdcDeactivateConfigInput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_deactivate_config_input_set_token (
    QmiMessagePdcDeactivateConfigInput *self,
    guint32 value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_token = value_token;
    self->arg_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_pdc_deactivate_config_input_get_config_type (
    QmiMessagePdcDeactivateConfigInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_config_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Config Type' was not found in the message");
        return FALSE;
    }

    if (value_config_type)
        *value_config_type = (QmiPdcConfigurationType)(self->arg_config_type);

    return TRUE;
}

gboolean
qmi_message_pdc_deactivate_config_input_set_config_type (
    QmiMessagePdcDeactivateConfigInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_config_type = (guint32)(value_config_type);
    self->arg_config_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_pdc_deactivate_config_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcDeactivateConfigInput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_deactivate_config_input_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_deactivate_config_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcDeactivateConfigInput *
qmi_message_pdc_deactivate_config_input_ref (QmiMessagePdcDeactivateConfigInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_deactivate_config_input_unref (QmiMessagePdcDeactivateConfigInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcDeactivateConfigInput, self);
    }
}

QmiMessagePdcDeactivateConfigInput *
qmi_message_pdc_deactivate_config_input_new (void)
{
    QmiMessagePdcDeactivateConfigInput *self;

    self = g_slice_new0 (QmiMessagePdcDeactivateConfigInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_pdc_deactivate_config_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessagePdcDeactivateConfigInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_PDC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_PDC_DEACTIVATE_CONFIG);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Deactivate Config' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Token' TLV */
    if (input->arg_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_INPUT_TLV_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Config Type' TLV */
    if (input->arg_config_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_INPUT_TLV_CONFIG_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Config Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_config_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Config Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Config Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Config Type' in message 'Deactivate Config'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessagePdcDeactivateConfigOutput {
    volatile gint ref_count;

    /* Token */
    gboolean arg_token_set;
    guint32 arg_token;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_TOKEN 0x10
#define QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_pdc_deactivate_config_output_get_token (
    QmiMessagePdcDeactivateConfigOutput *self,
    guint32 *value_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Token' was not found in the message");
        return FALSE;
    }

    if (value_token)
        *value_token = self->arg_token;

    return TRUE;
}

gboolean
qmi_message_pdc_deactivate_config_output_get_result (
    QmiMessagePdcDeactivateConfigOutput *self,
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
qmi_message_pdc_deactivate_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessagePdcDeactivateConfigOutput"),
                                          (GBoxedCopyFunc) qmi_message_pdc_deactivate_config_output_ref,
                                          (GBoxedFreeFunc) qmi_message_pdc_deactivate_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessagePdcDeactivateConfigOutput *
qmi_message_pdc_deactivate_config_output_ref (QmiMessagePdcDeactivateConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_pdc_deactivate_config_output_unref (QmiMessagePdcDeactivateConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessagePdcDeactivateConfigOutput, self);
    }
}

static gchar *
qmi_message_pdc_deactivate_config_input_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_INPUT_TLV_TOKEN, NULL, NULL)) == 0)
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
qmi_message_pdc_deactivate_config_input_config_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_INPUT_TLV_CONFIG_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_PDC_CONFIGURATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_pdc_configuration_type_get_string ((QmiPdcConfigurationType)tmp));
#elif defined  __QMI_PDC_CONFIGURATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_pdc_configuration_type_build_string_from_mask ((QmiPdcConfigurationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiPdcConfigurationType
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
qmi_message_pdc_deactivate_config_output_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0)
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

struct message_deactivate_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_deactivate_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_deactivate_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_INPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_deactivate_config_input_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_INPUT_TLV_CONFIG_TYPE:
            tlv_type_str = "Config Type";
            translated_value = qmi_message_pdc_deactivate_config_input_config_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_TOKEN:
            tlv_type_str = "Token";
            translated_value = qmi_message_pdc_deactivate_config_output_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_RESULT:
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
message_deactivate_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Deactivate Config\" (0x2B)\n",
                            line_prefix);

    {
        struct message_deactivate_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_deactivate_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessagePdcDeactivateConfigOutput *
qmi_message_pdc_deactivate_config_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessagePdcDeactivateConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_PDC_DEACTIVATE_CONFIG);

    self = g_slice_new0 (QmiMessagePdcDeactivateConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_pdc_deactivate_config_output_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_token), NULL))
                goto qmi_message_pdc_deactivate_config_output_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Token' TLV", offset);
            }

            self->arg_token_set = TRUE;

qmi_message_pdc_deactivate_config_output_token_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_PDC_DEACTIVATE_CONFIG_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_pdc_deactivate_config_output_unref (self);
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
                qmi_message_pdc_deactivate_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: PDC */


gchar *
__qmi_message_pdc_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_PDC_GET_SELECTED_CONFIG:
            return indication_get_selected_config_get_printable (self, line_prefix);
        case QMI_INDICATION_PDC_SET_SELECTED_CONFIG:
            return indication_set_selected_config_get_printable (self, line_prefix);
        case QMI_INDICATION_PDC_LIST_CONFIGS:
            return indication_list_configs_get_printable (self, line_prefix);
        case QMI_INDICATION_PDC_LOAD_CONFIG:
            return indication_load_config_get_printable (self, line_prefix);
        case QMI_INDICATION_PDC_ACTIVATE_CONFIG:
            return indication_activate_config_get_printable (self, line_prefix);
        case QMI_INDICATION_PDC_GET_CONFIG_INFO:
            return indication_get_config_info_get_printable (self, line_prefix);
        case QMI_INDICATION_PDC_DEACTIVATE_CONFIG:
            return indication_deactivate_config_get_printable (self, line_prefix);
        case QMI_INDICATION_PDC_REFRESH:
            return indication_refresh_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_PDC_RESET:
                return message_reset_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDC_REGISTER:
                return message_register_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDC_CONFIG_CHANGE:
                return message_config_change_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDC_GET_SELECTED_CONFIG:
                return message_get_selected_config_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDC_SET_SELECTED_CONFIG:
                return message_set_selected_config_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDC_LIST_CONFIGS:
                return message_list_configs_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDC_DELETE_CONFIG:
                return message_delete_config_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDC_LOAD_CONFIG:
                return message_load_config_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDC_ACTIVATE_CONFIG:
                return message_activate_config_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDC_GET_CONFIG_INFO:
                return message_get_config_info_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDC_GET_CONFIG_LIMITS:
                return message_get_config_limits_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO:
                return message_get_default_config_info_get_printable (self, line_prefix);
            case QMI_MESSAGE_PDC_DEACTIVATE_CONFIG:
                return message_deactivate_config_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client PDC */

G_DEFINE_TYPE (QmiClientPdc, qmi_client_pdc, QMI_TYPE_CLIENT)

enum {
    SIGNAL_GET_SELECTED_CONFIG,
    SIGNAL_SET_SELECTED_CONFIG,
    SIGNAL_LIST_CONFIGS,
    SIGNAL_LOAD_CONFIG,
    SIGNAL_ACTIVATE_CONFIG,
    SIGNAL_GET_CONFIG_INFO,
    SIGNAL_DEACTIVATE_CONFIG,
    SIGNAL_REFRESH,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_PDC_GET_SELECTED_CONFIG: {
            QmiIndicationPdcGetSelectedConfigOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_pdc_get_selected_config_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Get Selected Config' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_GET_SELECTED_CONFIG], 0, output);
                qmi_indication_pdc_get_selected_config_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_PDC_SET_SELECTED_CONFIG: {
            QmiIndicationPdcSetSelectedConfigOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_pdc_set_selected_config_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Set Selected Config' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_SET_SELECTED_CONFIG], 0, output);
                qmi_indication_pdc_set_selected_config_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_PDC_LIST_CONFIGS: {
            QmiIndicationPdcListConfigsOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_pdc_list_configs_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'List Configs' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_LIST_CONFIGS], 0, output);
                qmi_indication_pdc_list_configs_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_PDC_LOAD_CONFIG: {
            QmiIndicationPdcLoadConfigOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_pdc_load_config_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Load Config' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_LOAD_CONFIG], 0, output);
                qmi_indication_pdc_load_config_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_PDC_ACTIVATE_CONFIG: {
            QmiIndicationPdcActivateConfigOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_pdc_activate_config_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Activate Config' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_ACTIVATE_CONFIG], 0, output);
                qmi_indication_pdc_activate_config_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_PDC_GET_CONFIG_INFO: {
            QmiIndicationPdcGetConfigInfoOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_pdc_get_config_info_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Get Config Info' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_GET_CONFIG_INFO], 0, output);
                qmi_indication_pdc_get_config_info_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_PDC_DEACTIVATE_CONFIG: {
            QmiIndicationPdcDeactivateConfigOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_pdc_deactivate_config_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Deactivate Config' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_DEACTIVATE_CONFIG], 0, output);
                qmi_indication_pdc_deactivate_config_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_PDC_REFRESH: {
            QmiIndicationPdcRefreshOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_pdc_refresh_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Refresh' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_REFRESH], 0, output);
                qmi_indication_pdc_refresh_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_pdc_init (QmiClientPdc *self)
{
}

static void
qmi_client_pdc_class_init (QmiClientPdcClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientPdc::get-selected-config:
     * @object: A #QmiClientPdc.
     * @output: A #QmiIndicationPdcGetSelectedConfigOutput.
     *
     * The ::get-selected-config signal gets emitted when a '<link linkend="libqmi-glib-PDC-Get-Selected-Config-indication.top_of_page">Get Selected Config</link>' indication is received.
     *
     * Since: 1.18
     */
    signals[SIGNAL_GET_SELECTED_CONFIG] =
        g_signal_new ("get-selected-config",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT);

    /**
     * QmiClientPdc::set-selected-config:
     * @object: A #QmiClientPdc.
     * @output: A #QmiIndicationPdcSetSelectedConfigOutput.
     *
     * The ::set-selected-config signal gets emitted when a '<link linkend="libqmi-glib-PDC-Set-Selected-Config-indication.top_of_page">Set Selected Config</link>' indication is received.
     *
     * Since: 1.18
     */
    signals[SIGNAL_SET_SELECTED_CONFIG] =
        g_signal_new ("set-selected-config",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_PDC_SET_SELECTED_CONFIG_OUTPUT);

    /**
     * QmiClientPdc::list-configs:
     * @object: A #QmiClientPdc.
     * @output: A #QmiIndicationPdcListConfigsOutput.
     *
     * The ::list-configs signal gets emitted when a '<link linkend="libqmi-glib-PDC-List-Configs-indication.top_of_page">List Configs</link>' indication is received.
     *
     * Since: 1.18
     */
    signals[SIGNAL_LIST_CONFIGS] =
        g_signal_new ("list-configs",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_PDC_LIST_CONFIGS_OUTPUT);

    /**
     * QmiClientPdc::load-config:
     * @object: A #QmiClientPdc.
     * @output: A #QmiIndicationPdcLoadConfigOutput.
     *
     * The ::load-config signal gets emitted when a '<link linkend="libqmi-glib-PDC-Load-Config-indication.top_of_page">Load Config</link>' indication is received.
     *
     * Since: 1.18
     */
    signals[SIGNAL_LOAD_CONFIG] =
        g_signal_new ("load-config",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_PDC_LOAD_CONFIG_OUTPUT);

    /**
     * QmiClientPdc::activate-config:
     * @object: A #QmiClientPdc.
     * @output: A #QmiIndicationPdcActivateConfigOutput.
     *
     * The ::activate-config signal gets emitted when a '<link linkend="libqmi-glib-PDC-Activate-Config-indication.top_of_page">Activate Config</link>' indication is received.
     *
     * Since: 1.18
     */
    signals[SIGNAL_ACTIVATE_CONFIG] =
        g_signal_new ("activate-config",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_PDC_ACTIVATE_CONFIG_OUTPUT);

    /**
     * QmiClientPdc::get-config-info:
     * @object: A #QmiClientPdc.
     * @output: A #QmiIndicationPdcGetConfigInfoOutput.
     *
     * The ::get-config-info signal gets emitted when a '<link linkend="libqmi-glib-PDC-Get-Config-Info-indication.top_of_page">Get Config Info</link>' indication is received.
     *
     * Since: 1.18
     */
    signals[SIGNAL_GET_CONFIG_INFO] =
        g_signal_new ("get-config-info",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT);

    /**
     * QmiClientPdc::deactivate-config:
     * @object: A #QmiClientPdc.
     * @output: A #QmiIndicationPdcDeactivateConfigOutput.
     *
     * The ::deactivate-config signal gets emitted when a '<link linkend="libqmi-glib-PDC-Deactivate-Config-indication.top_of_page">Deactivate Config</link>' indication is received.
     *
     * Since: 1.18
     */
    signals[SIGNAL_DEACTIVATE_CONFIG] =
        g_signal_new ("deactivate-config",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_PDC_DEACTIVATE_CONFIG_OUTPUT);

    /**
     * QmiClientPdc::refresh:
     * @object: A #QmiClientPdc.
     * @output: A #QmiIndicationPdcRefreshOutput.
     *
     * The ::refresh signal gets emitted when a '<link linkend="libqmi-glib-PDC-Refresh-indication.top_of_page">Refresh</link>' indication is received.
     *
     * Since: 1.32
     */
    signals[SIGNAL_REFRESH] =
        g_signal_new ("refresh",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_PDC_REFRESH_OUTPUT);
}


QmiMessagePdcResetOutput *
qmi_client_pdc_reset_finish (
    QmiClientPdc *self,
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
    QmiMessagePdcResetOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_reset_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_reset_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_reset (
    QmiClientPdc *self,
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

    request = __qmi_message_pdc_reset_request_create (
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


QmiMessagePdcRegisterOutput *
qmi_client_pdc_register_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
register_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdcRegisterOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_register_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_register_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_register (
    QmiClientPdc *self,
    QmiMessagePdcRegisterInput *input,
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

    request = __qmi_message_pdc_register_request_create (
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
                             (GAsyncReadyCallback)register_ready,
                             task);
}


QmiMessagePdcConfigChangeOutput *
qmi_client_pdc_config_change_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
config_change_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdcConfigChangeOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_config_change_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_config_change_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_config_change (
    QmiClientPdc *self,
    QmiMessagePdcConfigChangeInput *input,
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

    request = __qmi_message_pdc_config_change_request_create (
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
                             (GAsyncReadyCallback)config_change_ready,
                             task);
}


QmiMessagePdcGetSelectedConfigOutput *
qmi_client_pdc_get_selected_config_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_selected_config_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdcGetSelectedConfigOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_get_selected_config_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_get_selected_config_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_get_selected_config (
    QmiClientPdc *self,
    QmiMessagePdcGetSelectedConfigInput *input,
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

    request = __qmi_message_pdc_get_selected_config_request_create (
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
                             (GAsyncReadyCallback)get_selected_config_ready,
                             task);
}


QmiMessagePdcSetSelectedConfigOutput *
qmi_client_pdc_set_selected_config_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_selected_config_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdcSetSelectedConfigOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_set_selected_config_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_set_selected_config_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_set_selected_config (
    QmiClientPdc *self,
    QmiMessagePdcSetSelectedConfigInput *input,
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

    request = __qmi_message_pdc_set_selected_config_request_create (
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
                             (GAsyncReadyCallback)set_selected_config_ready,
                             task);
}


QmiMessagePdcListConfigsOutput *
qmi_client_pdc_list_configs_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
list_configs_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdcListConfigsOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_list_configs_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_list_configs_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_list_configs (
    QmiClientPdc *self,
    QmiMessagePdcListConfigsInput *input,
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

    request = __qmi_message_pdc_list_configs_request_create (
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
                             (GAsyncReadyCallback)list_configs_ready,
                             task);
}


QmiMessagePdcDeleteConfigOutput *
qmi_client_pdc_delete_config_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
delete_config_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdcDeleteConfigOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_delete_config_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_delete_config_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_delete_config (
    QmiClientPdc *self,
    QmiMessagePdcDeleteConfigInput *input,
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

    request = __qmi_message_pdc_delete_config_request_create (
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
                             (GAsyncReadyCallback)delete_config_ready,
                             task);
}


QmiMessagePdcLoadConfigOutput *
qmi_client_pdc_load_config_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
load_config_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdcLoadConfigOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_load_config_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_load_config_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_load_config (
    QmiClientPdc *self,
    QmiMessagePdcLoadConfigInput *input,
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

    request = __qmi_message_pdc_load_config_request_create (
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
                             (GAsyncReadyCallback)load_config_ready,
                             task);
}


QmiMessagePdcActivateConfigOutput *
qmi_client_pdc_activate_config_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
activate_config_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdcActivateConfigOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_activate_config_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_activate_config_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_activate_config (
    QmiClientPdc *self,
    QmiMessagePdcActivateConfigInput *input,
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

    request = __qmi_message_pdc_activate_config_request_create (
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
                             (GAsyncReadyCallback)activate_config_ready,
                             task);
}


QmiMessagePdcGetConfigInfoOutput *
qmi_client_pdc_get_config_info_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_config_info_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdcGetConfigInfoOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_get_config_info_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_get_config_info_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_get_config_info (
    QmiClientPdc *self,
    QmiMessagePdcGetConfigInfoInput *input,
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

    request = __qmi_message_pdc_get_config_info_request_create (
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
                             (GAsyncReadyCallback)get_config_info_ready,
                             task);
}


QmiMessagePdcGetConfigLimitsOutput *
qmi_client_pdc_get_config_limits_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_config_limits_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdcGetConfigLimitsOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_get_config_limits_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_get_config_limits_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_get_config_limits (
    QmiClientPdc *self,
    QmiMessagePdcGetConfigLimitsInput *input,
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

    request = __qmi_message_pdc_get_config_limits_request_create (
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
                             (GAsyncReadyCallback)get_config_limits_ready,
                             task);
}


QmiMessagePdcGetDefaultConfigInfoOutput *
qmi_client_pdc_get_default_config_info_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_default_config_info_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdcGetDefaultConfigInfoOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_get_default_config_info_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_get_default_config_info_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_get_default_config_info (
    QmiClientPdc *self,
    QmiMessagePdcGetDefaultConfigInfoInput *input,
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

    request = __qmi_message_pdc_get_default_config_info_request_create (
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
                             (GAsyncReadyCallback)get_default_config_info_ready,
                             task);
}


QmiMessagePdcDeactivateConfigOutput *
qmi_client_pdc_deactivate_config_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
deactivate_config_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessagePdcDeactivateConfigOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_pdc_deactivate_config_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_pdc_deactivate_config_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_pdc_deactivate_config (
    QmiClientPdc *self,
    QmiMessagePdcDeactivateConfigInput *input,
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

    request = __qmi_message_pdc_deactivate_config_request_create (
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
                             (GAsyncReadyCallback)deactivate_config_ready,
                             task);
}

