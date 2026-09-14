
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

#include "qmi-dsd.h"
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
    QMI_MESSAGE_DSD_GET_SYSTEM_STATUS = 0x0024,
    QMI_MESSAGE_DSD_SYSTEM_STATUS_CHANGE = 0x0025,
    QMI_MESSAGE_DSD_GET_APN_INFO = 0x0033,
    QMI_MESSAGE_DSD_SET_APN_TYPE = 0x0051,
} QmiMessageDsd;


typedef enum {
    QMI_INDICATION_DSD_SYSTEM_STATUS = 0x0026,
} QmiIndicationDsd;


/*****************************************************************************/
/* INDICATION: Qmi Indication DSD System Status */


/* --- Output -- */

static void
__qmi_indication_dsd_system_status_output_available_systems_system_free (QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem *value)
{
    g_slice_free (QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem, value);
}

static QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem *
__qmi_indication_dsd_system_status_output_available_systems_system_new (void)
{
    return g_slice_new0 (QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem);
}

static QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem *
__qmi_indication_dsd_system_status_output_available_systems_system_copy (const QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem *value)
{
    QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem *copy;

    copy = __qmi_indication_dsd_system_status_output_available_systems_system_new ();
    copy->technology = value->technology;
    copy->rat = value->rat;
    copy->so_mask = value->so_mask;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem, qmi_indication_dsd_system_status_output_available_systems_system, (GBoxedCopyFunc)__qmi_indication_dsd_system_status_output_available_systems_system_copy, (GBoxedFreeFunc)__qmi_indication_dsd_system_status_output_available_systems_system_free)

struct _QmiIndicationDsdSystemStatusOutput {
    volatile gint ref_count;

    /* Available Systems */
    gboolean arg_available_systems_set;
    GArray *arg_available_systems;
    GPtrArray *arg_available_systems_ptr;
};

#define QMI_INDICATION_DSD_SYSTEM_STATUS_OUTPUT_TLV_AVAILABLE_SYSTEMS 0x10

gboolean
qmi_indication_dsd_system_status_output_get_available_systems (
    QmiIndicationDsdSystemStatusOutput *self,
    GArray **value_available_systems,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_available_systems_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Available Systems' was not found in the message");
        return FALSE;
    }

    if (value_available_systems)
        *value_available_systems = self->arg_available_systems;

    return TRUE;
}

gboolean
qmi_indication_dsd_system_status_output_get_available_systems_gir (
    QmiIndicationDsdSystemStatusOutput *self,
    GPtrArray **value_available_systems_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_available_systems_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Available Systems' was not found in the message");
        return FALSE;
    }

    if (value_available_systems_ptr) {
        if (!self->arg_available_systems_ptr) {
            {
                guint available_systems_i;

                self->arg_available_systems_ptr = g_ptr_array_new_full (self->arg_available_systems->len, (GDestroyNotify)__qmi_indication_dsd_system_status_output_available_systems_system_free);
                for (available_systems_i = 0; available_systems_i < self->arg_available_systems->len; available_systems_i++) {
                    QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem *available_systems_aux_from;
                    QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem *available_systems_aux_to;

                    available_systems_aux_from = &g_array_index (self->arg_available_systems, QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem, available_systems_i);

                    available_systems_aux_to = __qmi_indication_dsd_system_status_output_available_systems_system_new ();
                    available_systems_aux_to->technology = (*available_systems_aux_from).technology;
                    available_systems_aux_to->rat = (*available_systems_aux_from).rat;
                    available_systems_aux_to->so_mask = (*available_systems_aux_from).so_mask;

                    g_ptr_array_add (self->arg_available_systems_ptr, available_systems_aux_to);
                }
            }
        }
        *value_available_systems_ptr = self->arg_available_systems_ptr;
    }
    return TRUE;
}

GType
qmi_indication_dsd_system_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationDsdSystemStatusOutput"),
                                          (GBoxedCopyFunc) qmi_indication_dsd_system_status_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_dsd_system_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationDsdSystemStatusOutput *
qmi_indication_dsd_system_status_output_ref (QmiIndicationDsdSystemStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_dsd_system_status_output_unref (QmiIndicationDsdSystemStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_available_systems, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_available_systems, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiIndicationDsdSystemStatusOutput, self);
    }
}

static gchar *
qmi_indication_dsd_system_status_output_available_systems_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_DSD_SYSTEM_STATUS_OUTPUT_TLV_AVAILABLE_SYSTEMS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint available_systems_i;
        guint8 available_systems_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(available_systems_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (available_systems_i = 0; available_systems_i < available_systems_n_items; available_systems_i++) {
            g_string_append_printf (printable, " [%u] = '", available_systems_i);
            g_string_append (printable, "[");
            g_string_append (printable, " technology = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_DSD_DATA_SYSTEM_NETWORK_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_dsd_data_system_network_type_get_string ((QmiDsdDataSystemNetworkType)tmp));
#elif defined  __QMI_DSD_DATA_SYSTEM_NETWORK_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_dsd_data_system_network_type_build_string_from_mask ((QmiDsdDataSystemNetworkType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiDsdDataSystemNetworkType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " rat = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_DSD_RADIO_ACCESS_TECHNOLOGY_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_dsd_radio_access_technology_get_string ((QmiDsdRadioAccessTechnology)tmp));
#elif defined  __QMI_DSD_RADIO_ACCESS_TECHNOLOGY_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_dsd_radio_access_technology_build_string_from_mask ((QmiDsdRadioAccessTechnology)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiDsdRadioAccessTechnology
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " so_mask = '");

            {
                guint64 tmp;

                if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_DSD_SO_MASK_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_dsd_so_mask_get_string ((QmiDsdSoMask)tmp));
#elif defined  __QMI_DSD_SO_MASK_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_dsd_so_mask_build_string_from_mask ((QmiDsdSoMask)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiDsdSoMask
#endif
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

struct indication_system_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_system_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_system_status_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_DSD_SYSTEM_STATUS_OUTPUT_TLV_AVAILABLE_SYSTEMS:
            tlv_type_str = "Available Systems";
            translated_value = qmi_indication_dsd_system_status_output_available_systems_get_printable (
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
indication_system_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"System Status\" (0x0026)\n",
                            line_prefix);

    {
        struct indication_system_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_system_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationDsdSystemStatusOutput *
qmi_indication_dsd_system_status_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationDsdSystemStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_DSD_SYSTEM_STATUS);

    self = g_slice_new0 (QmiIndicationDsdSystemStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_DSD_SYSTEM_STATUS_OUTPUT_TLV_AVAILABLE_SYSTEMS, NULL, NULL)) == 0) {
                goto qmi_indication_dsd_system_status_output_available_systems_out;
            }
            {
                guint available_systems_i;
                guint8 available_systems_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(available_systems_n_items), NULL))
                    goto qmi_indication_dsd_system_status_output_available_systems_out;

                self->arg_available_systems = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem),
                    (guint)available_systems_n_items);

                for (available_systems_i = 0; available_systems_i < available_systems_n_items; available_systems_i++) {
                    QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem available_systems_aux;

                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_indication_dsd_system_status_output_available_systems_out;
                        available_systems_aux.technology = (QmiDsdDataSystemNetworkType)tmp;
                    }
                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_indication_dsd_system_status_output_available_systems_out;
                        available_systems_aux.rat = (QmiDsdRadioAccessTechnology)tmp;
                    }
                    {
                        guint64 tmp;

                        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_indication_dsd_system_status_output_available_systems_out;
                        available_systems_aux.so_mask = (QmiDsdSoMask)tmp;
                    }
                    g_array_insert_val (self->arg_available_systems, available_systems_i, available_systems_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Available Systems' TLV", offset);
            }

            self->arg_available_systems_set = TRUE;

qmi_indication_dsd_system_status_output_available_systems_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DSD Get System Status */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_dsd_get_system_status_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_DSD,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_DSD_GET_SYSTEM_STATUS);

    return g_steal_pointer (&self);
}

/* --- Output -- */

static void
__qmi_message_dsd_get_system_status_output_available_systems_system_free (QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem *value)
{
    g_slice_free (QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem, value);
}

static QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem *
__qmi_message_dsd_get_system_status_output_available_systems_system_new (void)
{
    return g_slice_new0 (QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem);
}

static QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem *
__qmi_message_dsd_get_system_status_output_available_systems_system_copy (const QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem *value)
{
    QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem *copy;

    copy = __qmi_message_dsd_get_system_status_output_available_systems_system_new ();
    copy->technology = value->technology;
    copy->rat = value->rat;
    copy->so_mask = value->so_mask;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem, qmi_message_dsd_get_system_status_output_available_systems_system, (GBoxedCopyFunc)__qmi_message_dsd_get_system_status_output_available_systems_system_copy, (GBoxedFreeFunc)__qmi_message_dsd_get_system_status_output_available_systems_system_free)

struct _QmiMessageDsdGetSystemStatusOutput {
    volatile gint ref_count;

    /* Available Systems */
    gboolean arg_available_systems_set;
    GArray *arg_available_systems;
    GPtrArray *arg_available_systems_ptr;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_DSD_GET_SYSTEM_STATUS_OUTPUT_TLV_AVAILABLE_SYSTEMS 0x10
#define QMI_MESSAGE_DSD_GET_SYSTEM_STATUS_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_dsd_get_system_status_output_get_available_systems (
    QmiMessageDsdGetSystemStatusOutput *self,
    GArray **value_available_systems,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_available_systems_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Available Systems' was not found in the message");
        return FALSE;
    }

    if (value_available_systems)
        *value_available_systems = self->arg_available_systems;

    return TRUE;
}

gboolean
qmi_message_dsd_get_system_status_output_get_available_systems_gir (
    QmiMessageDsdGetSystemStatusOutput *self,
    GPtrArray **value_available_systems_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_available_systems_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Available Systems' was not found in the message");
        return FALSE;
    }

    if (value_available_systems_ptr) {
        if (!self->arg_available_systems_ptr) {
            {
                guint available_systems_i;

                self->arg_available_systems_ptr = g_ptr_array_new_full (self->arg_available_systems->len, (GDestroyNotify)__qmi_message_dsd_get_system_status_output_available_systems_system_free);
                for (available_systems_i = 0; available_systems_i < self->arg_available_systems->len; available_systems_i++) {
                    QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem *available_systems_aux_from;
                    QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem *available_systems_aux_to;

                    available_systems_aux_from = &g_array_index (self->arg_available_systems, QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem, available_systems_i);

                    available_systems_aux_to = __qmi_message_dsd_get_system_status_output_available_systems_system_new ();
                    available_systems_aux_to->technology = (*available_systems_aux_from).technology;
                    available_systems_aux_to->rat = (*available_systems_aux_from).rat;
                    available_systems_aux_to->so_mask = (*available_systems_aux_from).so_mask;

                    g_ptr_array_add (self->arg_available_systems_ptr, available_systems_aux_to);
                }
            }
        }
        *value_available_systems_ptr = self->arg_available_systems_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_dsd_get_system_status_output_get_result (
    QmiMessageDsdGetSystemStatusOutput *self,
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
qmi_message_dsd_get_system_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageDsdGetSystemStatusOutput"),
                                          (GBoxedCopyFunc) qmi_message_dsd_get_system_status_output_ref,
                                          (GBoxedFreeFunc) qmi_message_dsd_get_system_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageDsdGetSystemStatusOutput *
qmi_message_dsd_get_system_status_output_ref (QmiMessageDsdGetSystemStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_dsd_get_system_status_output_unref (QmiMessageDsdGetSystemStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_available_systems, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_available_systems, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageDsdGetSystemStatusOutput, self);
    }
}

static gchar *
qmi_message_dsd_get_system_status_output_available_systems_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DSD_GET_SYSTEM_STATUS_OUTPUT_TLV_AVAILABLE_SYSTEMS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint available_systems_i;
        guint8 available_systems_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(available_systems_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (available_systems_i = 0; available_systems_i < available_systems_n_items; available_systems_i++) {
            g_string_append_printf (printable, " [%u] = '", available_systems_i);
            g_string_append (printable, "[");
            g_string_append (printable, " technology = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_DSD_DATA_SYSTEM_NETWORK_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_dsd_data_system_network_type_get_string ((QmiDsdDataSystemNetworkType)tmp));
#elif defined  __QMI_DSD_DATA_SYSTEM_NETWORK_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_dsd_data_system_network_type_build_string_from_mask ((QmiDsdDataSystemNetworkType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiDsdDataSystemNetworkType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " rat = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_DSD_RADIO_ACCESS_TECHNOLOGY_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_dsd_radio_access_technology_get_string ((QmiDsdRadioAccessTechnology)tmp));
#elif defined  __QMI_DSD_RADIO_ACCESS_TECHNOLOGY_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_dsd_radio_access_technology_build_string_from_mask ((QmiDsdRadioAccessTechnology)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiDsdRadioAccessTechnology
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " so_mask = '");

            {
                guint64 tmp;

                if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_DSD_SO_MASK_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_dsd_so_mask_get_string ((QmiDsdSoMask)tmp));
#elif defined  __QMI_DSD_SO_MASK_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_dsd_so_mask_build_string_from_mask ((QmiDsdSoMask)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiDsdSoMask
#endif
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_DSD_GET_SYSTEM_STATUS_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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

struct message_get_system_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_system_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_system_status_context *ctx)
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
        case QMI_MESSAGE_DSD_GET_SYSTEM_STATUS_OUTPUT_TLV_AVAILABLE_SYSTEMS:
            tlv_type_str = "Available Systems";
            translated_value = qmi_message_dsd_get_system_status_output_available_systems_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_DSD_GET_SYSTEM_STATUS_OUTPUT_TLV_RESULT:
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
message_get_system_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get System Status\" (0x0024)\n",
                            line_prefix);

    {
        struct message_get_system_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_system_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageDsdGetSystemStatusOutput *
qmi_message_dsd_get_system_status_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageDsdGetSystemStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_DSD_GET_SYSTEM_STATUS);

    self = g_slice_new0 (QmiMessageDsdGetSystemStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DSD_GET_SYSTEM_STATUS_OUTPUT_TLV_AVAILABLE_SYSTEMS, NULL, NULL)) == 0) {
                goto qmi_message_dsd_get_system_status_output_available_systems_out;
            }
            {
                guint available_systems_i;
                guint8 available_systems_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(available_systems_n_items), NULL))
                    goto qmi_message_dsd_get_system_status_output_available_systems_out;

                self->arg_available_systems = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem),
                    (guint)available_systems_n_items);

                for (available_systems_i = 0; available_systems_i < available_systems_n_items; available_systems_i++) {
                    QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem available_systems_aux;

                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_message_dsd_get_system_status_output_available_systems_out;
                        available_systems_aux.technology = (QmiDsdDataSystemNetworkType)tmp;
                    }
                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_message_dsd_get_system_status_output_available_systems_out;
                        available_systems_aux.rat = (QmiDsdRadioAccessTechnology)tmp;
                    }
                    {
                        guint64 tmp;

                        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_message_dsd_get_system_status_output_available_systems_out;
                        available_systems_aux.so_mask = (QmiDsdSoMask)tmp;
                    }
                    g_array_insert_val (self->arg_available_systems, available_systems_i, available_systems_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Available Systems' TLV", offset);
            }

            self->arg_available_systems_set = TRUE;

qmi_message_dsd_get_system_status_output_available_systems_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DSD_GET_SYSTEM_STATUS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_dsd_get_system_status_output_unref (self);
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
                qmi_message_dsd_get_system_status_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DSD System Status Change */


/* --- Input -- */

struct _QmiMessageDsdSystemStatusChangeInput {
    volatile gint ref_count;

    /* Register Indication */
    gboolean arg_register_indication_set;
    guint8 arg_register_indication;
};

#define QMI_MESSAGE_DSD_SYSTEM_STATUS_CHANGE_INPUT_TLV_REGISTER_INDICATION 0x11

gboolean
qmi_message_dsd_system_status_change_input_get_register_indication (
    QmiMessageDsdSystemStatusChangeInput *self,
    gboolean *value_register_indication,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_register_indication_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Register Indication' was not found in the message");
        return FALSE;
    }

    if (value_register_indication)
        *value_register_indication = (gboolean)(self->arg_register_indication);

    return TRUE;
}

gboolean
qmi_message_dsd_system_status_change_input_set_register_indication (
    QmiMessageDsdSystemStatusChangeInput *self,
    gboolean value_register_indication,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_register_indication = (guint8)(value_register_indication);
    self->arg_register_indication_set = TRUE;

    return TRUE;
}

GType
qmi_message_dsd_system_status_change_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageDsdSystemStatusChangeInput"),
                                          (GBoxedCopyFunc) qmi_message_dsd_system_status_change_input_ref,
                                          (GBoxedFreeFunc) qmi_message_dsd_system_status_change_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageDsdSystemStatusChangeInput *
qmi_message_dsd_system_status_change_input_ref (QmiMessageDsdSystemStatusChangeInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_dsd_system_status_change_input_unref (QmiMessageDsdSystemStatusChangeInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageDsdSystemStatusChangeInput, self);
    }
}

QmiMessageDsdSystemStatusChangeInput *
qmi_message_dsd_system_status_change_input_new (void)
{
    QmiMessageDsdSystemStatusChangeInput *self;

    self = g_slice_new0 (QmiMessageDsdSystemStatusChangeInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_dsd_system_status_change_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageDsdSystemStatusChangeInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_DSD,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_DSD_SYSTEM_STATUS_CHANGE);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Register Indication' TLV */
    if (input->arg_register_indication_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_DSD_SYSTEM_STATUS_CHANGE_INPUT_TLV_REGISTER_INDICATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Register Indication': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_register_indication;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Register Indication': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Register Indication': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageDsdSystemStatusChangeOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_DSD_SYSTEM_STATUS_CHANGE_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_dsd_system_status_change_output_get_result (
    QmiMessageDsdSystemStatusChangeOutput *self,
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
qmi_message_dsd_system_status_change_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageDsdSystemStatusChangeOutput"),
                                          (GBoxedCopyFunc) qmi_message_dsd_system_status_change_output_ref,
                                          (GBoxedFreeFunc) qmi_message_dsd_system_status_change_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageDsdSystemStatusChangeOutput *
qmi_message_dsd_system_status_change_output_ref (QmiMessageDsdSystemStatusChangeOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_dsd_system_status_change_output_unref (QmiMessageDsdSystemStatusChangeOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageDsdSystemStatusChangeOutput, self);
    }
}

static gchar *
qmi_message_dsd_system_status_change_input_register_indication_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DSD_SYSTEM_STATUS_CHANGE_INPUT_TLV_REGISTER_INDICATION, NULL, NULL)) == 0)
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

struct message_system_status_change_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_system_status_change_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_system_status_change_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_DSD_SYSTEM_STATUS_CHANGE_INPUT_TLV_REGISTER_INDICATION:
            tlv_type_str = "Register Indication";
            translated_value = qmi_message_dsd_system_status_change_input_register_indication_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_DSD_SYSTEM_STATUS_CHANGE_OUTPUT_TLV_RESULT:
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
message_system_status_change_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"System Status Change\" (0x0025)\n",
                            line_prefix);

    {
        struct message_system_status_change_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_system_status_change_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageDsdSystemStatusChangeOutput *
qmi_message_dsd_system_status_change_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageDsdSystemStatusChangeOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_DSD_SYSTEM_STATUS_CHANGE);

    self = g_slice_new0 (QmiMessageDsdSystemStatusChangeOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DSD_SYSTEM_STATUS_CHANGE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_dsd_system_status_change_output_unref (self);
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
                qmi_message_dsd_system_status_change_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DSD Get APN Info */


/* --- Input -- */

struct _QmiMessageDsdGetApnInfoInput {
    volatile gint ref_count;

    /* APN Type */
    gboolean arg_apn_type_set;
    guint32 arg_apn_type;
};

#define QMI_MESSAGE_DSD_GET_APN_INFO_INPUT_TLV_APN_TYPE 0x01

gboolean
qmi_message_dsd_get_apn_info_input_get_apn_type (
    QmiMessageDsdGetApnInfoInput *self,
    QmiDsdApnType *value_apn_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_apn_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'APN Type' was not found in the message");
        return FALSE;
    }

    if (value_apn_type)
        *value_apn_type = (QmiDsdApnType)(self->arg_apn_type);

    return TRUE;
}

gboolean
qmi_message_dsd_get_apn_info_input_set_apn_type (
    QmiMessageDsdGetApnInfoInput *self,
    QmiDsdApnType value_apn_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_apn_type = (guint32)(value_apn_type);
    self->arg_apn_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_dsd_get_apn_info_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageDsdGetApnInfoInput"),
                                          (GBoxedCopyFunc) qmi_message_dsd_get_apn_info_input_ref,
                                          (GBoxedFreeFunc) qmi_message_dsd_get_apn_info_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageDsdGetApnInfoInput *
qmi_message_dsd_get_apn_info_input_ref (QmiMessageDsdGetApnInfoInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_dsd_get_apn_info_input_unref (QmiMessageDsdGetApnInfoInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageDsdGetApnInfoInput, self);
    }
}

QmiMessageDsdGetApnInfoInput *
qmi_message_dsd_get_apn_info_input_new (void)
{
    QmiMessageDsdGetApnInfoInput *self;

    self = g_slice_new0 (QmiMessageDsdGetApnInfoInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_dsd_get_apn_info_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageDsdGetApnInfoInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_DSD,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_DSD_GET_APN_INFO);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Get APN Info' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'APN Type' TLV */
    if (input->arg_apn_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_DSD_GET_APN_INFO_INPUT_TLV_APN_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'APN Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_apn_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'APN Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'APN Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'APN Type' in message 'Get APN Info'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageDsdGetApnInfoOutput {
    volatile gint ref_count;

    /* APN Name */
    gboolean arg_apn_name_set;
    gchar *arg_apn_name;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_DSD_GET_APN_INFO_OUTPUT_TLV_APN_NAME 0x10
#define QMI_MESSAGE_DSD_GET_APN_INFO_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_dsd_get_apn_info_output_get_apn_name (
    QmiMessageDsdGetApnInfoOutput *self,
    const gchar **value_apn_name,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_apn_name_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'APN Name' was not found in the message");
        return FALSE;
    }

    if (value_apn_name)
        *value_apn_name = self->arg_apn_name;

    return TRUE;
}

gboolean
qmi_message_dsd_get_apn_info_output_get_result (
    QmiMessageDsdGetApnInfoOutput *self,
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
qmi_message_dsd_get_apn_info_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageDsdGetApnInfoOutput"),
                                          (GBoxedCopyFunc) qmi_message_dsd_get_apn_info_output_ref,
                                          (GBoxedFreeFunc) qmi_message_dsd_get_apn_info_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageDsdGetApnInfoOutput *
qmi_message_dsd_get_apn_info_output_ref (QmiMessageDsdGetApnInfoOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_dsd_get_apn_info_output_unref (QmiMessageDsdGetApnInfoOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_apn_name, (GDestroyNotify)g_free);
        g_slice_free (QmiMessageDsdGetApnInfoOutput, self);
    }
}

static gchar *
qmi_message_dsd_get_apn_info_input_apn_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DSD_GET_APN_INFO_INPUT_TLV_APN_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_DSD_APN_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_dsd_apn_type_get_string ((QmiDsdApnType)tmp));
#elif defined  __QMI_DSD_APN_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_dsd_apn_type_build_string_from_mask ((QmiDsdApnType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiDsdApnType
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
qmi_message_dsd_get_apn_info_output_apn_name_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DSD_GET_APN_INFO_OUTPUT_TLV_APN_NAME, NULL, NULL)) == 0)
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

struct message_get_apn_info_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_apn_info_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_apn_info_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_DSD_GET_APN_INFO_INPUT_TLV_APN_TYPE:
            tlv_type_str = "APN Type";
            translated_value = qmi_message_dsd_get_apn_info_input_apn_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_DSD_GET_APN_INFO_OUTPUT_TLV_APN_NAME:
            tlv_type_str = "APN Name";
            translated_value = qmi_message_dsd_get_apn_info_output_apn_name_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_DSD_GET_APN_INFO_OUTPUT_TLV_RESULT:
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
message_get_apn_info_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get APN Info\" (0x0033)\n",
                            line_prefix);

    {
        struct message_get_apn_info_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_apn_info_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageDsdGetApnInfoOutput *
qmi_message_dsd_get_apn_info_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageDsdGetApnInfoOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_DSD_GET_APN_INFO);

    self = g_slice_new0 (QmiMessageDsdGetApnInfoOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DSD_GET_APN_INFO_OUTPUT_TLV_APN_NAME, NULL, NULL)) == 0) {
                goto qmi_message_dsd_get_apn_info_output_apn_name_out;
            }
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 0, &(self->arg_apn_name), NULL))
                goto qmi_message_dsd_get_apn_info_output_apn_name_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'APN Name' TLV", offset);
            }

            self->arg_apn_name_set = TRUE;

qmi_message_dsd_get_apn_info_output_apn_name_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DSD_GET_APN_INFO_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_dsd_get_apn_info_output_unref (self);
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
                qmi_message_dsd_get_apn_info_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DSD Set APN Type */


/* --- Input -- */

struct _QmiMessageDsdSetApnTypeInput {
    volatile gint ref_count;

    /* APN Type Preference Mask */
    gboolean arg_apn_type_preference_mask_set;
    guint64 arg_apn_type_preference_mask;

    /* APN Type */
    gboolean arg_apn_type_set;
    gchar *arg_apn_type_name;
    guint64 arg_apn_type_type;
};

#define QMI_MESSAGE_DSD_SET_APN_TYPE_INPUT_TLV_APN_TYPE_PREFERENCE_MASK 0x10
#define QMI_MESSAGE_DSD_SET_APN_TYPE_INPUT_TLV_APN_TYPE 0x01

gboolean
qmi_message_dsd_set_apn_type_input_get_apn_type_preference_mask (
    QmiMessageDsdSetApnTypeInput *self,
    QmiDsdApnTypePreference *value_apn_type_preference_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_apn_type_preference_mask_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'APN Type Preference Mask' was not found in the message");
        return FALSE;
    }

    if (value_apn_type_preference_mask)
        *value_apn_type_preference_mask = (QmiDsdApnTypePreference)(self->arg_apn_type_preference_mask);

    return TRUE;
}

gboolean
qmi_message_dsd_set_apn_type_input_set_apn_type_preference_mask (
    QmiMessageDsdSetApnTypeInput *self,
    QmiDsdApnTypePreference value_apn_type_preference_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_apn_type_preference_mask = (guint64)(value_apn_type_preference_mask);
    self->arg_apn_type_preference_mask_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_dsd_set_apn_type_input_get_apn_type (
    QmiMessageDsdSetApnTypeInput *self,
    const gchar **value_apn_type_name,
    QmiDsdApnTypePreference *value_apn_type_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_apn_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'APN Type' was not found in the message");
        return FALSE;
    }

    if (value_apn_type_name)
        *value_apn_type_name = self->arg_apn_type_name;
    if (value_apn_type_type)
        *value_apn_type_type = (QmiDsdApnTypePreference)(self->arg_apn_type_type);

    return TRUE;
}

gboolean
qmi_message_dsd_set_apn_type_input_set_apn_type (
    QmiMessageDsdSetApnTypeInput *self,
    const gchar *value_apn_type_name,
    QmiDsdApnTypePreference value_apn_type_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_free (self->arg_apn_type_name);
    self->arg_apn_type_name = g_strdup (value_apn_type_name ? value_apn_type_name : "");
    self->arg_apn_type_type = (guint64)(value_apn_type_type);
    self->arg_apn_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_dsd_set_apn_type_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageDsdSetApnTypeInput"),
                                          (GBoxedCopyFunc) qmi_message_dsd_set_apn_type_input_ref,
                                          (GBoxedFreeFunc) qmi_message_dsd_set_apn_type_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageDsdSetApnTypeInput *
qmi_message_dsd_set_apn_type_input_ref (QmiMessageDsdSetApnTypeInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_dsd_set_apn_type_input_unref (QmiMessageDsdSetApnTypeInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_apn_type_name, (GDestroyNotify)g_free);
        g_slice_free (QmiMessageDsdSetApnTypeInput, self);
    }
}

QmiMessageDsdSetApnTypeInput *
qmi_message_dsd_set_apn_type_input_new (void)
{
    QmiMessageDsdSetApnTypeInput *self;

    self = g_slice_new0 (QmiMessageDsdSetApnTypeInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_dsd_set_apn_type_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageDsdSetApnTypeInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_DSD,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_DSD_SET_APN_TYPE);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set APN Type' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'APN Type Preference Mask' TLV */
    if (input->arg_apn_type_preference_mask_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_DSD_SET_APN_TYPE_INPUT_TLV_APN_TYPE_PREFERENCE_MASK, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'APN Type Preference Mask': ");
            return NULL;
        }

        {
            guint64 tmp;

            tmp = (guint64) input->arg_apn_type_preference_mask;
            /* Write the guint64 variable to the buffer */
            if (!qmi_message_tlv_write_guint64 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'APN Type Preference Mask': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'APN Type Preference Mask': ");
            return NULL;
        }
    }

    /* Try to add the 'APN Type' TLV */
    if (input->arg_apn_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_DSD_SET_APN_TYPE_INPUT_TLV_APN_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'APN Type': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_string (self, 1, input->arg_apn_type_name, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'APN Type': ");
            return NULL;
        }
        {
            guint64 tmp;

            tmp = (guint64) input->arg_apn_type_type;
            /* Write the guint64 variable to the buffer */
            if (!qmi_message_tlv_write_guint64 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'APN Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'APN Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'APN Type' in message 'Set APN Type'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageDsdSetApnTypeOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_DSD_SET_APN_TYPE_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_dsd_set_apn_type_output_get_result (
    QmiMessageDsdSetApnTypeOutput *self,
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
qmi_message_dsd_set_apn_type_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageDsdSetApnTypeOutput"),
                                          (GBoxedCopyFunc) qmi_message_dsd_set_apn_type_output_ref,
                                          (GBoxedFreeFunc) qmi_message_dsd_set_apn_type_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageDsdSetApnTypeOutput *
qmi_message_dsd_set_apn_type_output_ref (QmiMessageDsdSetApnTypeOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_dsd_set_apn_type_output_unref (QmiMessageDsdSetApnTypeOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageDsdSetApnTypeOutput, self);
    }
}

static gchar *
qmi_message_dsd_set_apn_type_input_apn_type_preference_mask_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DSD_SET_APN_TYPE_INPUT_TLV_APN_TYPE_PREFERENCE_MASK, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_DSD_APN_TYPE_PREFERENCE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_dsd_apn_type_preference_get_string ((QmiDsdApnTypePreference)tmp));
#elif defined  __QMI_DSD_APN_TYPE_PREFERENCE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_dsd_apn_type_preference_build_string_from_mask ((QmiDsdApnTypePreference)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiDsdApnTypePreference
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
qmi_message_dsd_set_apn_type_input_apn_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DSD_SET_APN_TYPE_INPUT_TLV_APN_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " name = '");

    {
        g_autofree gchar *tmp = NULL;

        if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
            goto out;
        {
            g_string_append (printable, tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " type = '");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_DSD_APN_TYPE_PREFERENCE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_dsd_apn_type_preference_get_string ((QmiDsdApnTypePreference)tmp));
#elif defined  __QMI_DSD_APN_TYPE_PREFERENCE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_dsd_apn_type_preference_build_string_from_mask ((QmiDsdApnTypePreference)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiDsdApnTypePreference
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

struct message_set_apn_type_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_apn_type_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_apn_type_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_DSD_SET_APN_TYPE_INPUT_TLV_APN_TYPE_PREFERENCE_MASK:
            tlv_type_str = "APN Type Preference Mask";
            translated_value = qmi_message_dsd_set_apn_type_input_apn_type_preference_mask_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_DSD_SET_APN_TYPE_INPUT_TLV_APN_TYPE:
            tlv_type_str = "APN Type";
            translated_value = qmi_message_dsd_set_apn_type_input_apn_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_DSD_SET_APN_TYPE_OUTPUT_TLV_RESULT:
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
message_set_apn_type_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set APN Type\" (0x0051)\n",
                            line_prefix);

    {
        struct message_set_apn_type_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_apn_type_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageDsdSetApnTypeOutput *
qmi_message_dsd_set_apn_type_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageDsdSetApnTypeOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_DSD_SET_APN_TYPE);

    self = g_slice_new0 (QmiMessageDsdSetApnTypeOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DSD_SET_APN_TYPE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_dsd_set_apn_type_output_unref (self);
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
                qmi_message_dsd_set_apn_type_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: DSD */


gchar *
__qmi_message_dsd_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_DSD_SYSTEM_STATUS:
            return indication_system_status_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_DSD_GET_SYSTEM_STATUS:
                return message_get_system_status_get_printable (self, line_prefix);
            case QMI_MESSAGE_DSD_SYSTEM_STATUS_CHANGE:
                return message_system_status_change_get_printable (self, line_prefix);
            case QMI_MESSAGE_DSD_GET_APN_INFO:
                return message_get_apn_info_get_printable (self, line_prefix);
            case QMI_MESSAGE_DSD_SET_APN_TYPE:
                return message_set_apn_type_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client DSD */

G_DEFINE_TYPE (QmiClientDsd, qmi_client_dsd, QMI_TYPE_CLIENT)

enum {
    SIGNAL_SYSTEM_STATUS,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_DSD_SYSTEM_STATUS: {
            QmiIndicationDsdSystemStatusOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_dsd_system_status_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'System Status' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_SYSTEM_STATUS], 0, output);
                qmi_indication_dsd_system_status_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_dsd_init (QmiClientDsd *self)
{
}

static void
qmi_client_dsd_class_init (QmiClientDsdClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientDsd::system-status:
     * @object: A #QmiClientDsd.
     * @output: A #QmiIndicationDsdSystemStatusOutput.
     *
     * The ::system-status signal gets emitted when a '<link linkend="libqmi-glib-DSD-System-Status-indication.top_of_page">System Status</link>' indication is received.
     *
     * Since: 1.32
     */
    signals[SIGNAL_SYSTEM_STATUS] =
        g_signal_new ("system-status",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_DSD_SYSTEM_STATUS_OUTPUT);
}


QmiMessageDsdGetSystemStatusOutput *
qmi_client_dsd_get_system_status_finish (
    QmiClientDsd *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_system_status_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageDsdGetSystemStatusOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_dsd_get_system_status_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_dsd_get_system_status_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_dsd_get_system_status (
    QmiClientDsd *self,
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

    request = __qmi_message_dsd_get_system_status_request_create (
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
                             (GAsyncReadyCallback)get_system_status_ready,
                             task);
}


QmiMessageDsdSystemStatusChangeOutput *
qmi_client_dsd_system_status_change_finish (
    QmiClientDsd *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
system_status_change_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageDsdSystemStatusChangeOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_dsd_system_status_change_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_dsd_system_status_change_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_dsd_system_status_change (
    QmiClientDsd *self,
    QmiMessageDsdSystemStatusChangeInput *input,
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

    request = __qmi_message_dsd_system_status_change_request_create (
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
                             (GAsyncReadyCallback)system_status_change_ready,
                             task);
}


QmiMessageDsdGetApnInfoOutput *
qmi_client_dsd_get_apn_info_finish (
    QmiClientDsd *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_apn_info_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageDsdGetApnInfoOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_dsd_get_apn_info_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_dsd_get_apn_info_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_dsd_get_apn_info (
    QmiClientDsd *self,
    QmiMessageDsdGetApnInfoInput *input,
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

    request = __qmi_message_dsd_get_apn_info_request_create (
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
                             (GAsyncReadyCallback)get_apn_info_ready,
                             task);
}


QmiMessageDsdSetApnTypeOutput *
qmi_client_dsd_set_apn_type_finish (
    QmiClientDsd *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_apn_type_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageDsdSetApnTypeOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_dsd_set_apn_type_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_dsd_set_apn_type_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_dsd_set_apn_type (
    QmiClientDsd *self,
    QmiMessageDsdSetApnTypeInput *input,
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

    request = __qmi_message_dsd_set_apn_type_request_create (
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
                             (GAsyncReadyCallback)set_apn_type_ready,
                             task);
}

