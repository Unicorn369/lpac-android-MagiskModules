
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

#include "qmi-ssc.h"
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
    QMI_MESSAGE_SSC_CONTROL = 0x0020,
} QmiMessageSsc;


typedef enum {
    QMI_INDICATION_SSC_REPORT_SMALL = 0x0021,
    QMI_INDICATION_SSC_REPORT_LARGE = 0x0022,
} QmiIndicationSsc;


/*****************************************************************************/
/* INDICATION: Qmi Indication SSC Report Small */


/* --- Output -- */

struct _QmiIndicationSscReportSmallOutput {
    volatile gint ref_count;

    /* Data */
    gboolean arg_data_set;
    GArray *arg_data;

    /* Client ID */
    gboolean arg_client_id_set;
    guint64 arg_client_id;
};

#define QMI_INDICATION_SSC_REPORT_SMALL_OUTPUT_TLV_DATA 0x02
#define QMI_INDICATION_SSC_REPORT_SMALL_OUTPUT_TLV_CLIENT_ID 0x01

gboolean
qmi_indication_ssc_report_small_output_get_data (
    QmiIndicationSscReportSmallOutput *self,
    GArray **value_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Data' was not found in the message");
        return FALSE;
    }

    if (value_data)
        *value_data = self->arg_data;

    return TRUE;
}

gboolean
qmi_indication_ssc_report_small_output_get_client_id (
    QmiIndicationSscReportSmallOutput *self,
    guint64 *value_client_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_client_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Client ID' was not found in the message");
        return FALSE;
    }

    if (value_client_id)
        *value_client_id = self->arg_client_id;

    return TRUE;
}

GType
qmi_indication_ssc_report_small_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationSscReportSmallOutput"),
                                          (GBoxedCopyFunc) qmi_indication_ssc_report_small_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_ssc_report_small_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationSscReportSmallOutput *
qmi_indication_ssc_report_small_output_ref (QmiIndicationSscReportSmallOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_ssc_report_small_output_unref (QmiIndicationSscReportSmallOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiIndicationSscReportSmallOutput, self);
    }
}

static gchar *
qmi_indication_ssc_report_small_output_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_SSC_REPORT_SMALL_OUTPUT_TLV_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint data_i;
        guint16 data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (data_i = 0; data_i < data_n_items; data_i++) {
            g_string_append_printf (printable, " [%u] = '", data_i);

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
qmi_indication_ssc_report_small_output_client_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_SSC_REPORT_SMALL_OUTPUT_TLV_CLIENT_ID, NULL, NULL)) == 0)
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

struct indication_report_small_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_report_small_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_report_small_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_SSC_REPORT_SMALL_OUTPUT_TLV_DATA:
            tlv_type_str = "Data";
            translated_value = qmi_indication_ssc_report_small_output_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_SSC_REPORT_SMALL_OUTPUT_TLV_CLIENT_ID:
            tlv_type_str = "Client ID";
            translated_value = qmi_indication_ssc_report_small_output_client_id_get_printable (
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
indication_report_small_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Report Small\" (0x0021)\n",
                            line_prefix);

    {
        struct indication_report_small_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_report_small_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationSscReportSmallOutput *
qmi_indication_ssc_report_small_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationSscReportSmallOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_SSC_REPORT_SMALL);

    self = g_slice_new0 (QmiIndicationSscReportSmallOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_SSC_REPORT_SMALL_OUTPUT_TLV_DATA, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Data TLV: ");
                qmi_indication_ssc_report_small_output_unref (self);
                return NULL;
            }
            {
                guint data_i;
                guint16 data_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(data_n_items), error))
                    goto qmi_indication_ssc_report_small_output_data_out;

                self->arg_data = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)data_n_items);

                for (data_i = 0; data_i < data_n_items; data_i++) {
                    guint8 data_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_aux), error))
                        goto qmi_indication_ssc_report_small_output_data_out;
                    g_array_insert_val (self->arg_data, data_i, data_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Data' TLV", offset);
            }

            self->arg_data_set = TRUE;

qmi_indication_ssc_report_small_output_data_out:
            if (!self->arg_data_set) {
                qmi_indication_ssc_report_small_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_SSC_REPORT_SMALL_OUTPUT_TLV_CLIENT_ID, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Client ID TLV: ");
                qmi_indication_ssc_report_small_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_client_id), error))
                goto qmi_indication_ssc_report_small_output_client_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Client ID' TLV", offset);
            }

            self->arg_client_id_set = TRUE;

qmi_indication_ssc_report_small_output_client_id_out:
            if (!self->arg_client_id_set) {
                qmi_indication_ssc_report_small_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication SSC Report Large */


/* --- Output -- */

struct _QmiIndicationSscReportLargeOutput {
    volatile gint ref_count;

    /* Data */
    gboolean arg_data_set;
    GArray *arg_data;

    /* Client ID */
    gboolean arg_client_id_set;
    guint64 arg_client_id;
};

#define QMI_INDICATION_SSC_REPORT_LARGE_OUTPUT_TLV_DATA 0x02
#define QMI_INDICATION_SSC_REPORT_LARGE_OUTPUT_TLV_CLIENT_ID 0x01

gboolean
qmi_indication_ssc_report_large_output_get_data (
    QmiIndicationSscReportLargeOutput *self,
    GArray **value_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Data' was not found in the message");
        return FALSE;
    }

    if (value_data)
        *value_data = self->arg_data;

    return TRUE;
}

gboolean
qmi_indication_ssc_report_large_output_get_client_id (
    QmiIndicationSscReportLargeOutput *self,
    guint64 *value_client_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_client_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Client ID' was not found in the message");
        return FALSE;
    }

    if (value_client_id)
        *value_client_id = self->arg_client_id;

    return TRUE;
}

GType
qmi_indication_ssc_report_large_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationSscReportLargeOutput"),
                                          (GBoxedCopyFunc) qmi_indication_ssc_report_large_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_ssc_report_large_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationSscReportLargeOutput *
qmi_indication_ssc_report_large_output_ref (QmiIndicationSscReportLargeOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_ssc_report_large_output_unref (QmiIndicationSscReportLargeOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiIndicationSscReportLargeOutput, self);
    }
}

static gchar *
qmi_indication_ssc_report_large_output_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_SSC_REPORT_LARGE_OUTPUT_TLV_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint data_i;
        guint16 data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (data_i = 0; data_i < data_n_items; data_i++) {
            g_string_append_printf (printable, " [%u] = '", data_i);

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
qmi_indication_ssc_report_large_output_client_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_SSC_REPORT_LARGE_OUTPUT_TLV_CLIENT_ID, NULL, NULL)) == 0)
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

struct indication_report_large_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_report_large_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_report_large_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_SSC_REPORT_LARGE_OUTPUT_TLV_DATA:
            tlv_type_str = "Data";
            translated_value = qmi_indication_ssc_report_large_output_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_SSC_REPORT_LARGE_OUTPUT_TLV_CLIENT_ID:
            tlv_type_str = "Client ID";
            translated_value = qmi_indication_ssc_report_large_output_client_id_get_printable (
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
indication_report_large_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Report Large\" (0x0022)\n",
                            line_prefix);

    {
        struct indication_report_large_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_report_large_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationSscReportLargeOutput *
qmi_indication_ssc_report_large_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationSscReportLargeOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_SSC_REPORT_LARGE);

    self = g_slice_new0 (QmiIndicationSscReportLargeOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_SSC_REPORT_LARGE_OUTPUT_TLV_DATA, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Data TLV: ");
                qmi_indication_ssc_report_large_output_unref (self);
                return NULL;
            }
            {
                guint data_i;
                guint16 data_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(data_n_items), error))
                    goto qmi_indication_ssc_report_large_output_data_out;

                self->arg_data = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)data_n_items);

                for (data_i = 0; data_i < data_n_items; data_i++) {
                    guint8 data_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_aux), error))
                        goto qmi_indication_ssc_report_large_output_data_out;
                    g_array_insert_val (self->arg_data, data_i, data_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Data' TLV", offset);
            }

            self->arg_data_set = TRUE;

qmi_indication_ssc_report_large_output_data_out:
            if (!self->arg_data_set) {
                qmi_indication_ssc_report_large_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_SSC_REPORT_LARGE_OUTPUT_TLV_CLIENT_ID, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Client ID TLV: ");
                qmi_indication_ssc_report_large_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_client_id), error))
                goto qmi_indication_ssc_report_large_output_client_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Client ID' TLV", offset);
            }

            self->arg_client_id_set = TRUE;

qmi_indication_ssc_report_large_output_client_id_out:
            if (!self->arg_client_id_set) {
                qmi_indication_ssc_report_large_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message SSC Control */


/* --- Input -- */

struct _QmiMessageSscControlInput {
    volatile gint ref_count;

    /* Report Type */
    gboolean arg_report_type_set;
    guint8 arg_report_type;

    /* Data */
    gboolean arg_data_set;
    GArray *arg_data;
};

#define QMI_MESSAGE_SSC_CONTROL_INPUT_TLV_REPORT_TYPE 0x10
#define QMI_MESSAGE_SSC_CONTROL_INPUT_TLV_DATA 0x01

gboolean
qmi_message_ssc_control_input_get_report_type (
    QmiMessageSscControlInput *self,
    QmiSscReportType *value_report_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_report_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Report Type' was not found in the message");
        return FALSE;
    }

    if (value_report_type)
        *value_report_type = (QmiSscReportType)(self->arg_report_type);

    return TRUE;
}

gboolean
qmi_message_ssc_control_input_set_report_type (
    QmiMessageSscControlInput *self,
    QmiSscReportType value_report_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_report_type = (guint8)(value_report_type);
    self->arg_report_type_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_ssc_control_input_get_data (
    QmiMessageSscControlInput *self,
    GArray **value_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Data' was not found in the message");
        return FALSE;
    }

    if (value_data)
        *value_data = self->arg_data;

    return TRUE;
}

gboolean
qmi_message_ssc_control_input_set_data (
    QmiMessageSscControlInput *self,
    GArray *value_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_data, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_data, (GDestroyNotify)g_ptr_array_unref);
    self->arg_data = g_array_ref (value_data);
    self->arg_data_set = TRUE;

    return TRUE;
}

GType
qmi_message_ssc_control_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageSscControlInput"),
                                          (GBoxedCopyFunc) qmi_message_ssc_control_input_ref,
                                          (GBoxedFreeFunc) qmi_message_ssc_control_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageSscControlInput *
qmi_message_ssc_control_input_ref (QmiMessageSscControlInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ssc_control_input_unref (QmiMessageSscControlInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageSscControlInput, self);
    }
}

QmiMessageSscControlInput *
qmi_message_ssc_control_input_new (void)
{
    QmiMessageSscControlInput *self;

    self = g_slice_new0 (QmiMessageSscControlInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_ssc_control_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageSscControlInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_SSC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_SSC_CONTROL);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Control' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Report Type' TLV */
    if (input->arg_report_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_SSC_CONTROL_INPUT_TLV_REPORT_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Report Type': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_report_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Report Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Report Type': ");
            return NULL;
        }
    }

    /* Try to add the 'Data' TLV */
    if (input->arg_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_SSC_CONTROL_INPUT_TLV_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Data': ");
            return NULL;
        }

        {
            guint data_i;
            guint16 data_n_items;

            /* Write the number of items in the array first */
            data_n_items = (guint16) input->arg_data->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, data_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Data': ");
                return NULL;
            }

            for (data_i = 0; data_i < input->arg_data->len; data_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_data, guint8,data_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Data': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Data': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Data' in message 'Control'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageSscControlOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Client ID */
    gboolean arg_client_id_set;
    guint64 arg_client_id;

    /* Response */
    gboolean arg_response_set;
    guint32 arg_response;
};

#define QMI_MESSAGE_SSC_CONTROL_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_SSC_CONTROL_OUTPUT_TLV_CLIENT_ID 0x10
#define QMI_MESSAGE_SSC_CONTROL_OUTPUT_TLV_RESPONSE 0x11

gboolean
qmi_message_ssc_control_output_get_result (
    QmiMessageSscControlOutput *self,
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
qmi_message_ssc_control_output_get_client_id (
    QmiMessageSscControlOutput *self,
    guint64 *value_client_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_client_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Client ID' was not found in the message");
        return FALSE;
    }

    if (value_client_id)
        *value_client_id = self->arg_client_id;

    return TRUE;
}

gboolean
qmi_message_ssc_control_output_get_response (
    QmiMessageSscControlOutput *self,
    guint32 *value_response,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response' was not found in the message");
        return FALSE;
    }

    if (value_response)
        *value_response = self->arg_response;

    return TRUE;
}

GType
qmi_message_ssc_control_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageSscControlOutput"),
                                          (GBoxedCopyFunc) qmi_message_ssc_control_output_ref,
                                          (GBoxedFreeFunc) qmi_message_ssc_control_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageSscControlOutput *
qmi_message_ssc_control_output_ref (QmiMessageSscControlOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_ssc_control_output_unref (QmiMessageSscControlOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageSscControlOutput, self);
    }
}

static gchar *
qmi_message_ssc_control_input_report_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_SSC_CONTROL_INPUT_TLV_REPORT_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_SSC_REPORT_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_ssc_report_type_get_string ((QmiSscReportType)tmp));
#elif defined  __QMI_SSC_REPORT_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_ssc_report_type_build_string_from_mask ((QmiSscReportType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiSscReportType
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
qmi_message_ssc_control_input_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_SSC_CONTROL_INPUT_TLV_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint data_i;
        guint16 data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (data_i = 0; data_i < data_n_items; data_i++) {
            g_string_append_printf (printable, " [%u] = '", data_i);

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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_SSC_CONTROL_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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
qmi_message_ssc_control_output_client_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_SSC_CONTROL_OUTPUT_TLV_CLIENT_ID, NULL, NULL)) == 0)
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
qmi_message_ssc_control_output_response_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_SSC_CONTROL_OUTPUT_TLV_RESPONSE, NULL, NULL)) == 0)
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

struct message_control_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_control_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_control_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_SSC_CONTROL_INPUT_TLV_REPORT_TYPE:
            tlv_type_str = "Report Type";
            translated_value = qmi_message_ssc_control_input_report_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_SSC_CONTROL_INPUT_TLV_DATA:
            tlv_type_str = "Data";
            translated_value = qmi_message_ssc_control_input_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_SSC_CONTROL_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_SSC_CONTROL_OUTPUT_TLV_CLIENT_ID:
            tlv_type_str = "Client ID";
            translated_value = qmi_message_ssc_control_output_client_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_SSC_CONTROL_OUTPUT_TLV_RESPONSE:
            tlv_type_str = "Response";
            translated_value = qmi_message_ssc_control_output_response_get_printable (
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
message_control_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Control\" (0x0020)\n",
                            line_prefix);

    {
        struct message_control_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_control_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageSscControlOutput *
qmi_message_ssc_control_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageSscControlOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_SSC_CONTROL);

    self = g_slice_new0 (QmiMessageSscControlOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_SSC_CONTROL_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_ssc_control_output_unref (self);
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
                qmi_message_ssc_control_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_SSC_CONTROL_OUTPUT_TLV_CLIENT_ID, NULL, NULL)) == 0) {
                goto qmi_message_ssc_control_output_client_id_out;
            }
            if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_client_id), NULL))
                goto qmi_message_ssc_control_output_client_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Client ID' TLV", offset);
            }

            self->arg_client_id_set = TRUE;

qmi_message_ssc_control_output_client_id_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_SSC_CONTROL_OUTPUT_TLV_RESPONSE, NULL, NULL)) == 0) {
                goto qmi_message_ssc_control_output_response_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_response), NULL))
                goto qmi_message_ssc_control_output_response_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Response' TLV", offset);
            }

            self->arg_response_set = TRUE;

qmi_message_ssc_control_output_response_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: SSC */


gchar *
__qmi_message_ssc_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_SSC_REPORT_SMALL:
            return indication_report_small_get_printable (self, line_prefix);
        case QMI_INDICATION_SSC_REPORT_LARGE:
            return indication_report_large_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_SSC_CONTROL:
                return message_control_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client SSC */

G_DEFINE_TYPE (QmiClientSsc, qmi_client_ssc, QMI_TYPE_CLIENT)

enum {
    SIGNAL_REPORT_SMALL,
    SIGNAL_REPORT_LARGE,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_SSC_REPORT_SMALL: {
            QmiIndicationSscReportSmallOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_ssc_report_small_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Report Small' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_REPORT_SMALL], 0, output);
                qmi_indication_ssc_report_small_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_SSC_REPORT_LARGE: {
            QmiIndicationSscReportLargeOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_ssc_report_large_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Report Large' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_REPORT_LARGE], 0, output);
                qmi_indication_ssc_report_large_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_ssc_init (QmiClientSsc *self)
{
}

static void
qmi_client_ssc_class_init (QmiClientSscClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientSsc::report-small:
     * @object: A #QmiClientSsc.
     * @output: A #QmiIndicationSscReportSmallOutput.
     *
     * The ::report-small signal gets emitted when a '<link linkend="libqmi-glib-SSC-Report-Small-indication.top_of_page">Report Small</link>' indication is received.
     *
     * Since: 1.34
     */
    signals[SIGNAL_REPORT_SMALL] =
        g_signal_new ("report-small",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_SSC_REPORT_SMALL_OUTPUT);

    /**
     * QmiClientSsc::report-large:
     * @object: A #QmiClientSsc.
     * @output: A #QmiIndicationSscReportLargeOutput.
     *
     * The ::report-large signal gets emitted when a '<link linkend="libqmi-glib-SSC-Report-Large-indication.top_of_page">Report Large</link>' indication is received.
     *
     * Since: 1.34
     */
    signals[SIGNAL_REPORT_LARGE] =
        g_signal_new ("report-large",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_SSC_REPORT_LARGE_OUTPUT);
}


QmiMessageSscControlOutput *
qmi_client_ssc_control_finish (
    QmiClientSsc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
control_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageSscControlOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_ssc_control_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_ssc_control_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_ssc_control (
    QmiClientSsc *self,
    QmiMessageSscControlInput *input,
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

    request = __qmi_message_ssc_control_request_create (
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
                             (GAsyncReadyCallback)control_ready,
                             task);
}

