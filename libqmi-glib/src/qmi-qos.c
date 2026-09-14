
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

#include "qmi-qos.h"
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
    QMI_MESSAGE_QOS_RESET = 0x0000,
    QMI_MESSAGE_QOS_GET_FLOW_STATUS = 0x0026,
    QMI_MESSAGE_QOS_GET_NETWORK_STATUS = 0x0027,
    QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT = 0x002B,
    QMI_MESSAGE_QOS_BIND_SUBSCRIPTION = 0x002D,
    QMI_MESSAGE_QOS_GET_BIND_SUBSCRIPTION = 0x002E,
    QMI_MESSAGE_QOS_SWI_READ_DATA_STATS = 0x5556,
} QmiMessageQos;


typedef enum {
    QMI_INDICATION_QOS_FLOW_STATUS = 0x0026,
    QMI_INDICATION_QOS_NETWORK_STATUS = 0x0027,
} QmiIndicationQos;


/*****************************************************************************/
/* INDICATION: Qmi Indication QOS Flow Status */


/* --- Output -- */

struct _QmiIndicationQosFlowStatusOutput {
    volatile gint ref_count;

    /* Value */
    gboolean arg_value_set;
    guint32 arg_value_qos_id;
    guint8 arg_value_status;
    guint8 arg_value_event;
};

#define QMI_INDICATION_QOS_FLOW_STATUS_OUTPUT_TLV_VALUE 0x01

gboolean
qmi_indication_qos_flow_status_output_get_value (
    QmiIndicationQosFlowStatusOutput *self,
    guint32 *value_value_qos_id,
    QmiQosStatus *value_value_status,
    QmiQosEvent *value_value_event,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_value_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Value' was not found in the message");
        return FALSE;
    }

    if (value_value_qos_id)
        *value_value_qos_id = self->arg_value_qos_id;
    if (value_value_status)
        *value_value_status = (QmiQosStatus)(self->arg_value_status);
    if (value_value_event)
        *value_value_event = (QmiQosEvent)(self->arg_value_event);

    return TRUE;
}

GType
qmi_indication_qos_flow_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationQosFlowStatusOutput"),
                                          (GBoxedCopyFunc) qmi_indication_qos_flow_status_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_qos_flow_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationQosFlowStatusOutput *
qmi_indication_qos_flow_status_output_ref (QmiIndicationQosFlowStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_qos_flow_status_output_unref (QmiIndicationQosFlowStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationQosFlowStatusOutput, self);
    }
}

static gchar *
qmi_indication_qos_flow_status_output_value_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_QOS_FLOW_STATUS_OUTPUT_TLV_VALUE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " qos_id = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " status = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_QOS_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_qos_status_get_string ((QmiQosStatus)tmp));
#elif defined  __QMI_QOS_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_qos_status_build_string_from_mask ((QmiQosStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiQosStatus
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " event = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_QOS_EVENT_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_qos_event_get_string ((QmiQosEvent)tmp));
#elif defined  __QMI_QOS_EVENT_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_qos_event_build_string_from_mask ((QmiQosEvent)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiQosEvent
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

struct indication_flow_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_flow_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_flow_status_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_QOS_FLOW_STATUS_OUTPUT_TLV_VALUE:
            tlv_type_str = "Value";
            translated_value = qmi_indication_qos_flow_status_output_value_get_printable (
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
indication_flow_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Flow Status\" (0x0026)\n",
                            line_prefix);

    {
        struct indication_flow_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_flow_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationQosFlowStatusOutput *
qmi_indication_qos_flow_status_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationQosFlowStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_QOS_FLOW_STATUS);

    self = g_slice_new0 (QmiIndicationQosFlowStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_QOS_FLOW_STATUS_OUTPUT_TLV_VALUE, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Value TLV: ");
                qmi_indication_qos_flow_status_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_value_qos_id), error))
                goto qmi_indication_qos_flow_status_output_value_out;
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_indication_qos_flow_status_output_value_out;
                self->arg_value_status = (QmiQosStatus)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_indication_qos_flow_status_output_value_out;
                self->arg_value_event = (QmiQosEvent)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Value' TLV", offset);
            }

            self->arg_value_set = TRUE;

qmi_indication_qos_flow_status_output_value_out:
            if (!self->arg_value_set) {
                qmi_indication_qos_flow_status_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication QOS Network Status */


/* --- Output -- */

struct _QmiIndicationQosNetworkStatusOutput {
    volatile gint ref_count;

    /* QoS Supported */
    gboolean arg_qos_supported_set;
    guint8 arg_qos_supported;
};

#define QMI_INDICATION_QOS_NETWORK_STATUS_OUTPUT_TLV_QOS_SUPPORTED 0x01

gboolean
qmi_indication_qos_network_status_output_get_qos_supported (
    QmiIndicationQosNetworkStatusOutput *self,
    gboolean *value_qos_supported,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_qos_supported_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'QoS Supported' was not found in the message");
        return FALSE;
    }

    if (value_qos_supported)
        *value_qos_supported = (gboolean)(self->arg_qos_supported);

    return TRUE;
}

GType
qmi_indication_qos_network_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationQosNetworkStatusOutput"),
                                          (GBoxedCopyFunc) qmi_indication_qos_network_status_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_qos_network_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationQosNetworkStatusOutput *
qmi_indication_qos_network_status_output_ref (QmiIndicationQosNetworkStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_qos_network_status_output_unref (QmiIndicationQosNetworkStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationQosNetworkStatusOutput, self);
    }
}

static gchar *
qmi_indication_qos_network_status_output_qos_supported_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_QOS_NETWORK_STATUS_OUTPUT_TLV_QOS_SUPPORTED, NULL, NULL)) == 0)
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

struct indication_network_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_network_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_network_status_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_QOS_NETWORK_STATUS_OUTPUT_TLV_QOS_SUPPORTED:
            tlv_type_str = "QoS Supported";
            translated_value = qmi_indication_qos_network_status_output_qos_supported_get_printable (
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
indication_network_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Network Status\" (0x0027)\n",
                            line_prefix);

    {
        struct indication_network_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_network_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationQosNetworkStatusOutput *
qmi_indication_qos_network_status_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationQosNetworkStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_QOS_NETWORK_STATUS);

    self = g_slice_new0 (QmiIndicationQosNetworkStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_QOS_NETWORK_STATUS_OUTPUT_TLV_QOS_SUPPORTED, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory QoS Supported TLV: ");
                qmi_indication_qos_network_status_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_indication_qos_network_status_output_qos_supported_out;
                self->arg_qos_supported = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'QoS Supported' TLV", offset);
            }

            self->arg_qos_supported_set = TRUE;

qmi_indication_qos_network_status_output_qos_supported_out:
            if (!self->arg_qos_supported_set) {
                qmi_indication_qos_network_status_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_qos_reset_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_QOS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_QOS_RESET);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageQosResetOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_QOS_RESET_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_qos_reset_output_get_result (
    QmiMessageQosResetOutput *self,
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
qmi_message_qos_reset_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageQosResetOutput"),
                                          (GBoxedCopyFunc) qmi_message_qos_reset_output_ref,
                                          (GBoxedFreeFunc) qmi_message_qos_reset_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageQosResetOutput *
qmi_message_qos_reset_output_ref (QmiMessageQosResetOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_qos_reset_output_unref (QmiMessageQosResetOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageQosResetOutput, self);
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_QOS_RESET_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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
        case QMI_MESSAGE_QOS_RESET_OUTPUT_TLV_RESULT:
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

QmiMessageQosResetOutput *
qmi_message_qos_reset_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageQosResetOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_QOS_RESET);

    self = g_slice_new0 (QmiMessageQosResetOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_RESET_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_qos_reset_output_unref (self);
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
                qmi_message_qos_reset_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Get Flow Status */


/* --- Input -- */

struct _QmiMessageQosGetFlowStatusInput {
    volatile gint ref_count;

    /* Qos Id */
    gboolean arg_qos_id_set;
    guint32 arg_qos_id;
};

#define QMI_MESSAGE_QOS_GET_FLOW_STATUS_INPUT_TLV_QOS_ID 0x01

gboolean
qmi_message_qos_get_flow_status_input_get_qos_id (
    QmiMessageQosGetFlowStatusInput *self,
    guint32 *value_qos_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_qos_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Qos Id' was not found in the message");
        return FALSE;
    }

    if (value_qos_id)
        *value_qos_id = self->arg_qos_id;

    return TRUE;
}

gboolean
qmi_message_qos_get_flow_status_input_set_qos_id (
    QmiMessageQosGetFlowStatusInput *self,
    guint32 value_qos_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_qos_id = value_qos_id;
    self->arg_qos_id_set = TRUE;

    return TRUE;
}

GType
qmi_message_qos_get_flow_status_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageQosGetFlowStatusInput"),
                                          (GBoxedCopyFunc) qmi_message_qos_get_flow_status_input_ref,
                                          (GBoxedFreeFunc) qmi_message_qos_get_flow_status_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageQosGetFlowStatusInput *
qmi_message_qos_get_flow_status_input_ref (QmiMessageQosGetFlowStatusInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_qos_get_flow_status_input_unref (QmiMessageQosGetFlowStatusInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageQosGetFlowStatusInput, self);
    }
}

QmiMessageQosGetFlowStatusInput *
qmi_message_qos_get_flow_status_input_new (void)
{
    QmiMessageQosGetFlowStatusInput *self;

    self = g_slice_new0 (QmiMessageQosGetFlowStatusInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_qos_get_flow_status_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageQosGetFlowStatusInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_QOS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_QOS_GET_FLOW_STATUS);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Get Flow Status' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Qos Id' TLV */
    if (input->arg_qos_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_QOS_GET_FLOW_STATUS_INPUT_TLV_QOS_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Qos Id': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_qos_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Qos Id': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Qos Id': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Qos Id' in message 'Get Flow Status'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageQosGetFlowStatusOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Value */
    gboolean arg_value_set;
    guint8 arg_value;
};

#define QMI_MESSAGE_QOS_GET_FLOW_STATUS_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_QOS_GET_FLOW_STATUS_OUTPUT_TLV_VALUE 0x01

gboolean
qmi_message_qos_get_flow_status_output_get_result (
    QmiMessageQosGetFlowStatusOutput *self,
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
qmi_message_qos_get_flow_status_output_get_value (
    QmiMessageQosGetFlowStatusOutput *self,
    QmiQosStatus *value_value,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_value_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Value' was not found in the message");
        return FALSE;
    }

    if (value_value)
        *value_value = (QmiQosStatus)(self->arg_value);

    return TRUE;
}

GType
qmi_message_qos_get_flow_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageQosGetFlowStatusOutput"),
                                          (GBoxedCopyFunc) qmi_message_qos_get_flow_status_output_ref,
                                          (GBoxedFreeFunc) qmi_message_qos_get_flow_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageQosGetFlowStatusOutput *
qmi_message_qos_get_flow_status_output_ref (QmiMessageQosGetFlowStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_qos_get_flow_status_output_unref (QmiMessageQosGetFlowStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageQosGetFlowStatusOutput, self);
    }
}

static gchar *
qmi_message_qos_get_flow_status_input_qos_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_GET_FLOW_STATUS_INPUT_TLV_QOS_ID, NULL, NULL)) == 0)
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
qmi_message_qos_get_flow_status_output_value_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_GET_FLOW_STATUS_OUTPUT_TLV_VALUE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_QOS_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_qos_status_get_string ((QmiQosStatus)tmp));
#elif defined  __QMI_QOS_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_qos_status_build_string_from_mask ((QmiQosStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiQosStatus
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

struct message_get_flow_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_flow_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_flow_status_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_QOS_GET_FLOW_STATUS_INPUT_TLV_QOS_ID:
            tlv_type_str = "Qos Id";
            translated_value = qmi_message_qos_get_flow_status_input_qos_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_QOS_GET_FLOW_STATUS_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_QOS_GET_FLOW_STATUS_OUTPUT_TLV_VALUE:
            tlv_type_str = "Value";
            translated_value = qmi_message_qos_get_flow_status_output_value_get_printable (
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
message_get_flow_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Flow Status\" (0x0026)\n",
                            line_prefix);

    {
        struct message_get_flow_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_flow_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageQosGetFlowStatusOutput *
qmi_message_qos_get_flow_status_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageQosGetFlowStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_QOS_GET_FLOW_STATUS);

    self = g_slice_new0 (QmiMessageQosGetFlowStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_GET_FLOW_STATUS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_qos_get_flow_status_output_unref (self);
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
                qmi_message_qos_get_flow_status_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_GET_FLOW_STATUS_OUTPUT_TLV_VALUE, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Value TLV: ");
                qmi_message_qos_get_flow_status_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_message_qos_get_flow_status_output_value_out;
                self->arg_value = (QmiQosStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Value' TLV", offset);
            }

            self->arg_value_set = TRUE;

qmi_message_qos_get_flow_status_output_value_out:
            if (!self->arg_value_set) {
                qmi_message_qos_get_flow_status_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Get Network Status */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_qos_get_network_status_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_QOS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_QOS_GET_NETWORK_STATUS);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageQosGetNetworkStatusOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* QoS Supported */
    gboolean arg_qos_supported_set;
    guint8 arg_qos_supported;
};

#define QMI_MESSAGE_QOS_GET_NETWORK_STATUS_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_QOS_GET_NETWORK_STATUS_OUTPUT_TLV_QOS_SUPPORTED 0x01

gboolean
qmi_message_qos_get_network_status_output_get_result (
    QmiMessageQosGetNetworkStatusOutput *self,
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
qmi_message_qos_get_network_status_output_get_qos_supported (
    QmiMessageQosGetNetworkStatusOutput *self,
    gboolean *value_qos_supported,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_qos_supported_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'QoS Supported' was not found in the message");
        return FALSE;
    }

    if (value_qos_supported)
        *value_qos_supported = (gboolean)(self->arg_qos_supported);

    return TRUE;
}

GType
qmi_message_qos_get_network_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageQosGetNetworkStatusOutput"),
                                          (GBoxedCopyFunc) qmi_message_qos_get_network_status_output_ref,
                                          (GBoxedFreeFunc) qmi_message_qos_get_network_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageQosGetNetworkStatusOutput *
qmi_message_qos_get_network_status_output_ref (QmiMessageQosGetNetworkStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_qos_get_network_status_output_unref (QmiMessageQosGetNetworkStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageQosGetNetworkStatusOutput, self);
    }
}

static gchar *
qmi_message_qos_get_network_status_output_qos_supported_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_GET_NETWORK_STATUS_OUTPUT_TLV_QOS_SUPPORTED, NULL, NULL)) == 0)
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

struct message_get_network_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_network_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_network_status_context *ctx)
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
        case QMI_MESSAGE_QOS_GET_NETWORK_STATUS_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_QOS_GET_NETWORK_STATUS_OUTPUT_TLV_QOS_SUPPORTED:
            tlv_type_str = "QoS Supported";
            translated_value = qmi_message_qos_get_network_status_output_qos_supported_get_printable (
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
message_get_network_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Network Status\" (0x0027)\n",
                            line_prefix);

    {
        struct message_get_network_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_network_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageQosGetNetworkStatusOutput *
qmi_message_qos_get_network_status_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageQosGetNetworkStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_QOS_GET_NETWORK_STATUS);

    self = g_slice_new0 (QmiMessageQosGetNetworkStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_GET_NETWORK_STATUS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_qos_get_network_status_output_unref (self);
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
                qmi_message_qos_get_network_status_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_GET_NETWORK_STATUS_OUTPUT_TLV_QOS_SUPPORTED, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory QoS Supported TLV: ");
                qmi_message_qos_get_network_status_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_message_qos_get_network_status_output_qos_supported_out;
                self->arg_qos_supported = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'QoS Supported' TLV", offset);
            }

            self->arg_qos_supported_set = TRUE;

qmi_message_qos_get_network_status_output_qos_supported_out:
            if (!self->arg_qos_supported_set) {
                qmi_message_qos_get_network_status_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Bind Mux Data Port */


/* --- Input -- */

struct _QmiMessageQosBindMuxDataPortInput {
    volatile gint ref_count;

    /* Direction */
    gboolean arg_direction_set;
    guint8 arg_direction;

    /* Mux Id */
    gboolean arg_mux_id_set;
    guint8 arg_mux_id;

    /* Endpoint */
    gboolean arg_endpoint_set;
    guint32 arg_endpoint_endpoint_type;
    guint32 arg_endpoint_interface_number;
};

#define QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT_TLV_DIRECTION 0x12
#define QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT_TLV_MUX_ID 0x11
#define QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT_TLV_ENDPOINT 0x10

gboolean
qmi_message_qos_bind_mux_data_port_input_get_direction (
    QmiMessageQosBindMuxDataPortInput *self,
    guint8 *value_direction,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_direction_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Direction' was not found in the message");
        return FALSE;
    }

    if (value_direction)
        *value_direction = self->arg_direction;

    return TRUE;
}

gboolean
qmi_message_qos_bind_mux_data_port_input_set_direction (
    QmiMessageQosBindMuxDataPortInput *self,
    guint8 value_direction,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_direction = value_direction;
    self->arg_direction_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_qos_bind_mux_data_port_input_get_mux_id (
    QmiMessageQosBindMuxDataPortInput *self,
    guint8 *value_mux_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_mux_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Mux Id' was not found in the message");
        return FALSE;
    }

    if (value_mux_id)
        *value_mux_id = self->arg_mux_id;

    return TRUE;
}

gboolean
qmi_message_qos_bind_mux_data_port_input_set_mux_id (
    QmiMessageQosBindMuxDataPortInput *self,
    guint8 value_mux_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_mux_id = value_mux_id;
    self->arg_mux_id_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_qos_bind_mux_data_port_input_get_endpoint (
    QmiMessageQosBindMuxDataPortInput *self,
    QmiDataEndpointType *value_endpoint_endpoint_type,
    guint32 *value_endpoint_interface_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_endpoint_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Endpoint' was not found in the message");
        return FALSE;
    }

    if (value_endpoint_endpoint_type)
        *value_endpoint_endpoint_type = (QmiDataEndpointType)(self->arg_endpoint_endpoint_type);
    if (value_endpoint_interface_number)
        *value_endpoint_interface_number = self->arg_endpoint_interface_number;

    return TRUE;
}

gboolean
qmi_message_qos_bind_mux_data_port_input_set_endpoint (
    QmiMessageQosBindMuxDataPortInput *self,
    QmiDataEndpointType value_endpoint_endpoint_type,
    guint32 value_endpoint_interface_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_endpoint_endpoint_type = (guint32)(value_endpoint_endpoint_type);
    self->arg_endpoint_interface_number = value_endpoint_interface_number;
    self->arg_endpoint_set = TRUE;

    return TRUE;
}

GType
qmi_message_qos_bind_mux_data_port_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageQosBindMuxDataPortInput"),
                                          (GBoxedCopyFunc) qmi_message_qos_bind_mux_data_port_input_ref,
                                          (GBoxedFreeFunc) qmi_message_qos_bind_mux_data_port_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageQosBindMuxDataPortInput *
qmi_message_qos_bind_mux_data_port_input_ref (QmiMessageQosBindMuxDataPortInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_qos_bind_mux_data_port_input_unref (QmiMessageQosBindMuxDataPortInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageQosBindMuxDataPortInput, self);
    }
}

QmiMessageQosBindMuxDataPortInput *
qmi_message_qos_bind_mux_data_port_input_new (void)
{
    QmiMessageQosBindMuxDataPortInput *self;

    self = g_slice_new0 (QmiMessageQosBindMuxDataPortInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_qos_bind_mux_data_port_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageQosBindMuxDataPortInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_QOS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Direction' TLV */
    if (input->arg_direction_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT_TLV_DIRECTION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Direction': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_direction, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Direction': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Direction': ");
            return NULL;
        }
    }

    /* Try to add the 'Mux Id' TLV */
    if (input->arg_mux_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT_TLV_MUX_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Mux Id': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_mux_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Mux Id': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Mux Id': ");
            return NULL;
        }
    }

    /* Try to add the 'Endpoint' TLV */
    if (input->arg_endpoint_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT_TLV_ENDPOINT, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Endpoint': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_endpoint_endpoint_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Endpoint': ");
                return NULL;
            }
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_endpoint_interface_number, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Endpoint': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Endpoint': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageQosBindMuxDataPortOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_qos_bind_mux_data_port_output_get_result (
    QmiMessageQosBindMuxDataPortOutput *self,
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
qmi_message_qos_bind_mux_data_port_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageQosBindMuxDataPortOutput"),
                                          (GBoxedCopyFunc) qmi_message_qos_bind_mux_data_port_output_ref,
                                          (GBoxedFreeFunc) qmi_message_qos_bind_mux_data_port_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageQosBindMuxDataPortOutput *
qmi_message_qos_bind_mux_data_port_output_ref (QmiMessageQosBindMuxDataPortOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_qos_bind_mux_data_port_output_unref (QmiMessageQosBindMuxDataPortOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageQosBindMuxDataPortOutput, self);
    }
}

static gchar *
qmi_message_qos_bind_mux_data_port_input_direction_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT_TLV_DIRECTION, NULL, NULL)) == 0)
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
qmi_message_qos_bind_mux_data_port_input_mux_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT_TLV_MUX_ID, NULL, NULL)) == 0)
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
qmi_message_qos_bind_mux_data_port_input_endpoint_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT_TLV_ENDPOINT, NULL, NULL)) == 0)
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

struct message_bind_mux_data_port_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_bind_mux_data_port_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_bind_mux_data_port_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT_TLV_DIRECTION:
            tlv_type_str = "Direction";
            translated_value = qmi_message_qos_bind_mux_data_port_input_direction_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT_TLV_MUX_ID:
            tlv_type_str = "Mux Id";
            translated_value = qmi_message_qos_bind_mux_data_port_input_mux_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT_TLV_ENDPOINT:
            tlv_type_str = "Endpoint";
            translated_value = qmi_message_qos_bind_mux_data_port_input_endpoint_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_OUTPUT_TLV_RESULT:
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
message_bind_mux_data_port_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Bind Mux Data Port\" (0x002B)\n",
                            line_prefix);

    {
        struct message_bind_mux_data_port_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_bind_mux_data_port_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageQosBindMuxDataPortOutput *
qmi_message_qos_bind_mux_data_port_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageQosBindMuxDataPortOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT);

    self = g_slice_new0 (QmiMessageQosBindMuxDataPortOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_qos_bind_mux_data_port_output_unref (self);
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
                qmi_message_qos_bind_mux_data_port_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Bind Subscription */


/* --- Input -- */

struct _QmiMessageQosBindSubscriptionInput {
    volatile gint ref_count;

    /* Subscription Id */
    gboolean arg_subscription_id_set;
    guint32 arg_subscription_id;
};

#define QMI_MESSAGE_QOS_BIND_SUBSCRIPTION_INPUT_TLV_SUBSCRIPTION_ID 0x01

gboolean
qmi_message_qos_bind_subscription_input_get_subscription_id (
    QmiMessageQosBindSubscriptionInput *self,
    QmiSubscriptionType *value_subscription_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_subscription_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Subscription Id' was not found in the message");
        return FALSE;
    }

    if (value_subscription_id)
        *value_subscription_id = (QmiSubscriptionType)(self->arg_subscription_id);

    return TRUE;
}

gboolean
qmi_message_qos_bind_subscription_input_set_subscription_id (
    QmiMessageQosBindSubscriptionInput *self,
    QmiSubscriptionType value_subscription_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_subscription_id = (guint32)(value_subscription_id);
    self->arg_subscription_id_set = TRUE;

    return TRUE;
}

GType
qmi_message_qos_bind_subscription_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageQosBindSubscriptionInput"),
                                          (GBoxedCopyFunc) qmi_message_qos_bind_subscription_input_ref,
                                          (GBoxedFreeFunc) qmi_message_qos_bind_subscription_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageQosBindSubscriptionInput *
qmi_message_qos_bind_subscription_input_ref (QmiMessageQosBindSubscriptionInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_qos_bind_subscription_input_unref (QmiMessageQosBindSubscriptionInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageQosBindSubscriptionInput, self);
    }
}

QmiMessageQosBindSubscriptionInput *
qmi_message_qos_bind_subscription_input_new (void)
{
    QmiMessageQosBindSubscriptionInput *self;

    self = g_slice_new0 (QmiMessageQosBindSubscriptionInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_qos_bind_subscription_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageQosBindSubscriptionInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_QOS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_QOS_BIND_SUBSCRIPTION);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Bind Subscription' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Subscription Id' TLV */
    if (input->arg_subscription_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_QOS_BIND_SUBSCRIPTION_INPUT_TLV_SUBSCRIPTION_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Subscription Id': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_subscription_id;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Subscription Id': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Subscription Id': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Subscription Id' in message 'Bind Subscription'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageQosBindSubscriptionOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_QOS_BIND_SUBSCRIPTION_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_qos_bind_subscription_output_get_result (
    QmiMessageQosBindSubscriptionOutput *self,
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
qmi_message_qos_bind_subscription_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageQosBindSubscriptionOutput"),
                                          (GBoxedCopyFunc) qmi_message_qos_bind_subscription_output_ref,
                                          (GBoxedFreeFunc) qmi_message_qos_bind_subscription_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageQosBindSubscriptionOutput *
qmi_message_qos_bind_subscription_output_ref (QmiMessageQosBindSubscriptionOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_qos_bind_subscription_output_unref (QmiMessageQosBindSubscriptionOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageQosBindSubscriptionOutput, self);
    }
}

static gchar *
qmi_message_qos_bind_subscription_input_subscription_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_BIND_SUBSCRIPTION_INPUT_TLV_SUBSCRIPTION_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_SUBSCRIPTION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_subscription_type_get_string ((QmiSubscriptionType)tmp));
#elif defined  __QMI_SUBSCRIPTION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_subscription_type_build_string_from_mask ((QmiSubscriptionType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiSubscriptionType
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

struct message_bind_subscription_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_bind_subscription_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_bind_subscription_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_QOS_BIND_SUBSCRIPTION_INPUT_TLV_SUBSCRIPTION_ID:
            tlv_type_str = "Subscription Id";
            translated_value = qmi_message_qos_bind_subscription_input_subscription_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_QOS_BIND_SUBSCRIPTION_OUTPUT_TLV_RESULT:
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
message_bind_subscription_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Bind Subscription\" (0x002D)\n",
                            line_prefix);

    {
        struct message_bind_subscription_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_bind_subscription_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageQosBindSubscriptionOutput *
qmi_message_qos_bind_subscription_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageQosBindSubscriptionOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_QOS_BIND_SUBSCRIPTION);

    self = g_slice_new0 (QmiMessageQosBindSubscriptionOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_BIND_SUBSCRIPTION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_qos_bind_subscription_output_unref (self);
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
                qmi_message_qos_bind_subscription_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Get Bind Subscription */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_qos_get_bind_subscription_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_QOS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_QOS_GET_BIND_SUBSCRIPTION);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageQosGetBindSubscriptionOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Subscription Id */
    gboolean arg_subscription_id_set;
    guint32 arg_subscription_id;
};

#define QMI_MESSAGE_QOS_GET_BIND_SUBSCRIPTION_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_QOS_GET_BIND_SUBSCRIPTION_OUTPUT_TLV_SUBSCRIPTION_ID 0x10

gboolean
qmi_message_qos_get_bind_subscription_output_get_result (
    QmiMessageQosGetBindSubscriptionOutput *self,
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
qmi_message_qos_get_bind_subscription_output_get_subscription_id (
    QmiMessageQosGetBindSubscriptionOutput *self,
    QmiSubscriptionType *value_subscription_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_subscription_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Subscription Id' was not found in the message");
        return FALSE;
    }

    if (value_subscription_id)
        *value_subscription_id = (QmiSubscriptionType)(self->arg_subscription_id);

    return TRUE;
}

GType
qmi_message_qos_get_bind_subscription_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageQosGetBindSubscriptionOutput"),
                                          (GBoxedCopyFunc) qmi_message_qos_get_bind_subscription_output_ref,
                                          (GBoxedFreeFunc) qmi_message_qos_get_bind_subscription_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageQosGetBindSubscriptionOutput *
qmi_message_qos_get_bind_subscription_output_ref (QmiMessageQosGetBindSubscriptionOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_qos_get_bind_subscription_output_unref (QmiMessageQosGetBindSubscriptionOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageQosGetBindSubscriptionOutput, self);
    }
}

static gchar *
qmi_message_qos_get_bind_subscription_output_subscription_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_GET_BIND_SUBSCRIPTION_OUTPUT_TLV_SUBSCRIPTION_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_SUBSCRIPTION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_subscription_type_get_string ((QmiSubscriptionType)tmp));
#elif defined  __QMI_SUBSCRIPTION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_subscription_type_build_string_from_mask ((QmiSubscriptionType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiSubscriptionType
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

struct message_get_bind_subscription_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_bind_subscription_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_bind_subscription_context *ctx)
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
        case QMI_MESSAGE_QOS_GET_BIND_SUBSCRIPTION_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_QOS_GET_BIND_SUBSCRIPTION_OUTPUT_TLV_SUBSCRIPTION_ID:
            tlv_type_str = "Subscription Id";
            translated_value = qmi_message_qos_get_bind_subscription_output_subscription_id_get_printable (
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
message_get_bind_subscription_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Bind Subscription\" (0x002E)\n",
                            line_prefix);

    {
        struct message_get_bind_subscription_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_bind_subscription_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageQosGetBindSubscriptionOutput *
qmi_message_qos_get_bind_subscription_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageQosGetBindSubscriptionOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_QOS_GET_BIND_SUBSCRIPTION);

    self = g_slice_new0 (QmiMessageQosGetBindSubscriptionOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_GET_BIND_SUBSCRIPTION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_qos_get_bind_subscription_output_unref (self);
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
                qmi_message_qos_get_bind_subscription_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_GET_BIND_SUBSCRIPTION_OUTPUT_TLV_SUBSCRIPTION_ID, NULL, NULL)) == 0) {
                goto qmi_message_qos_get_bind_subscription_output_subscription_id_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_qos_get_bind_subscription_output_subscription_id_out;
                self->arg_subscription_id = (QmiSubscriptionType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Subscription Id' TLV", offset);
            }

            self->arg_subscription_id_set = TRUE;

qmi_message_qos_get_bind_subscription_output_subscription_id_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Swi Read Data Stats */


/* --- Input -- */

struct _QmiMessageQosSwiReadDataStatsInput {
    volatile gint ref_count;

    /* Apn Id */
    gboolean arg_apn_id_set;
    guint32 arg_apn_id;
};

#define QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_INPUT_TLV_APN_ID 0x01

gboolean
qmi_message_qos_swi_read_data_stats_input_get_apn_id (
    QmiMessageQosSwiReadDataStatsInput *self,
    guint32 *value_apn_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_apn_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Apn Id' was not found in the message");
        return FALSE;
    }

    if (value_apn_id)
        *value_apn_id = self->arg_apn_id;

    return TRUE;
}

gboolean
qmi_message_qos_swi_read_data_stats_input_set_apn_id (
    QmiMessageQosSwiReadDataStatsInput *self,
    guint32 value_apn_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_apn_id = value_apn_id;
    self->arg_apn_id_set = TRUE;

    return TRUE;
}

GType
qmi_message_qos_swi_read_data_stats_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageQosSwiReadDataStatsInput"),
                                          (GBoxedCopyFunc) qmi_message_qos_swi_read_data_stats_input_ref,
                                          (GBoxedFreeFunc) qmi_message_qos_swi_read_data_stats_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageQosSwiReadDataStatsInput *
qmi_message_qos_swi_read_data_stats_input_ref (QmiMessageQosSwiReadDataStatsInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_qos_swi_read_data_stats_input_unref (QmiMessageQosSwiReadDataStatsInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageQosSwiReadDataStatsInput, self);
    }
}

QmiMessageQosSwiReadDataStatsInput *
qmi_message_qos_swi_read_data_stats_input_new (void)
{
    QmiMessageQosSwiReadDataStatsInput *self;

    self = g_slice_new0 (QmiMessageQosSwiReadDataStatsInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_qos_swi_read_data_stats_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageQosSwiReadDataStatsInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_QOS,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_QOS_SWI_READ_DATA_STATS);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Swi Read Data Stats' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Apn Id' TLV */
    if (input->arg_apn_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_INPUT_TLV_APN_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Apn Id': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_apn_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Apn Id': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Apn Id': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Apn Id' in message 'Swi Read Data Stats'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

static void
__qmi_message_qos_swi_read_data_stats_output_flow_element_free (QmiMessageQosSwiReadDataStatsOutputFlowElement *value)
{
    g_slice_free (QmiMessageQosSwiReadDataStatsOutputFlowElement, value);
}

static QmiMessageQosSwiReadDataStatsOutputFlowElement *
__qmi_message_qos_swi_read_data_stats_output_flow_element_new (void)
{
    return g_slice_new0 (QmiMessageQosSwiReadDataStatsOutputFlowElement);
}

static QmiMessageQosSwiReadDataStatsOutputFlowElement *
__qmi_message_qos_swi_read_data_stats_output_flow_element_copy (const QmiMessageQosSwiReadDataStatsOutputFlowElement *value)
{
    QmiMessageQosSwiReadDataStatsOutputFlowElement *copy;

    copy = __qmi_message_qos_swi_read_data_stats_output_flow_element_new ();
    copy->bearer_id = value->bearer_id;
    copy->tx_packets = value->tx_packets;
    copy->tx_packets_dropped = value->tx_packets_dropped;
    copy->tx_bytes = value->tx_bytes;
    copy->tx_bytes_dropped = value->tx_bytes_dropped;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageQosSwiReadDataStatsOutputFlowElement, qmi_message_qos_swi_read_data_stats_output_flow_element, (GBoxedCopyFunc)__qmi_message_qos_swi_read_data_stats_output_flow_element_copy, (GBoxedFreeFunc)__qmi_message_qos_swi_read_data_stats_output_flow_element_free)

struct _QmiMessageQosSwiReadDataStatsOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Apn */
    gboolean arg_apn_set;
    guint32 arg_apn_apn_id;
    guint32 arg_apn_tx_packets;
    guint32 arg_apn_tx_packets_dropped;
    guint32 arg_apn_rx_packets;
    guint64 arg_apn_tx_bytes;
    guint64 arg_apn_tx_bytes_dropped;
    guint64 arg_apn_rx_bytes;

    /* Flow */
    gboolean arg_flow_set;
    GArray *arg_flow;
    GPtrArray *arg_flow_ptr;
};

#define QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT_TLV_APN 0x03
#define QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT_TLV_FLOW 0x04

gboolean
qmi_message_qos_swi_read_data_stats_output_get_result (
    QmiMessageQosSwiReadDataStatsOutput *self,
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
qmi_message_qos_swi_read_data_stats_output_get_apn (
    QmiMessageQosSwiReadDataStatsOutput *self,
    guint32 *value_apn_apn_id,
    guint32 *value_apn_tx_packets,
    guint32 *value_apn_tx_packets_dropped,
    guint32 *value_apn_rx_packets,
    guint64 *value_apn_tx_bytes,
    guint64 *value_apn_tx_bytes_dropped,
    guint64 *value_apn_rx_bytes,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_apn_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Apn' was not found in the message");
        return FALSE;
    }

    if (value_apn_apn_id)
        *value_apn_apn_id = self->arg_apn_apn_id;
    if (value_apn_tx_packets)
        *value_apn_tx_packets = self->arg_apn_tx_packets;
    if (value_apn_tx_packets_dropped)
        *value_apn_tx_packets_dropped = self->arg_apn_tx_packets_dropped;
    if (value_apn_rx_packets)
        *value_apn_rx_packets = self->arg_apn_rx_packets;
    if (value_apn_tx_bytes)
        *value_apn_tx_bytes = self->arg_apn_tx_bytes;
    if (value_apn_tx_bytes_dropped)
        *value_apn_tx_bytes_dropped = self->arg_apn_tx_bytes_dropped;
    if (value_apn_rx_bytes)
        *value_apn_rx_bytes = self->arg_apn_rx_bytes;

    return TRUE;
}

gboolean
qmi_message_qos_swi_read_data_stats_output_get_flow (
    QmiMessageQosSwiReadDataStatsOutput *self,
    GArray **value_flow,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_flow_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Flow' was not found in the message");
        return FALSE;
    }

    if (value_flow)
        *value_flow = self->arg_flow;

    return TRUE;
}

gboolean
qmi_message_qos_swi_read_data_stats_output_get_flow_gir (
    QmiMessageQosSwiReadDataStatsOutput *self,
    GPtrArray **value_flow_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_flow_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Flow' was not found in the message");
        return FALSE;
    }

    if (value_flow_ptr) {
        if (!self->arg_flow_ptr) {
            {
                guint flow_i;

                self->arg_flow_ptr = g_ptr_array_new_full (self->arg_flow->len, (GDestroyNotify)__qmi_message_qos_swi_read_data_stats_output_flow_element_free);
                for (flow_i = 0; flow_i < self->arg_flow->len; flow_i++) {
                    QmiMessageQosSwiReadDataStatsOutputFlowElement *flow_aux_from;
                    QmiMessageQosSwiReadDataStatsOutputFlowElement *flow_aux_to;

                    flow_aux_from = &g_array_index (self->arg_flow, QmiMessageQosSwiReadDataStatsOutputFlowElement, flow_i);

                    flow_aux_to = __qmi_message_qos_swi_read_data_stats_output_flow_element_new ();
                    flow_aux_to->bearer_id = (*flow_aux_from).bearer_id;
                    flow_aux_to->tx_packets = (*flow_aux_from).tx_packets;
                    flow_aux_to->tx_packets_dropped = (*flow_aux_from).tx_packets_dropped;
                    flow_aux_to->tx_bytes = (*flow_aux_from).tx_bytes;
                    flow_aux_to->tx_bytes_dropped = (*flow_aux_from).tx_bytes_dropped;

                    g_ptr_array_add (self->arg_flow_ptr, flow_aux_to);
                }
            }
        }
        *value_flow_ptr = self->arg_flow_ptr;
    }
    return TRUE;
}

GType
qmi_message_qos_swi_read_data_stats_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageQosSwiReadDataStatsOutput"),
                                          (GBoxedCopyFunc) qmi_message_qos_swi_read_data_stats_output_ref,
                                          (GBoxedFreeFunc) qmi_message_qos_swi_read_data_stats_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageQosSwiReadDataStatsOutput *
qmi_message_qos_swi_read_data_stats_output_ref (QmiMessageQosSwiReadDataStatsOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_qos_swi_read_data_stats_output_unref (QmiMessageQosSwiReadDataStatsOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_flow, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_flow, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageQosSwiReadDataStatsOutput, self);
    }
}

static gchar *
qmi_message_qos_swi_read_data_stats_input_apn_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_INPUT_TLV_APN_ID, NULL, NULL)) == 0)
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
qmi_message_qos_swi_read_data_stats_output_apn_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT_TLV_APN, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " apn_id = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " tx_packets = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " tx_packets_dropped = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " rx_packets = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " tx_bytes = '");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT64_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " tx_bytes_dropped = '");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT64_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " rx_bytes = '");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT64_FORMAT "", tmp);
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
qmi_message_qos_swi_read_data_stats_output_flow_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT_TLV_FLOW, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint flow_i;
        guint32 flow_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(flow_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (flow_i = 0; flow_i < flow_n_items; flow_i++) {
            g_string_append_printf (printable, " [%u] = '", flow_i);
            g_string_append (printable, "[");
            g_string_append (printable, " bearer_id = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " tx_packets = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " tx_packets_dropped = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " tx_bytes = '");

            {
                guint64 tmp;

                if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT64_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " tx_bytes_dropped = '");

            {
                guint64 tmp;

                if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT64_FORMAT "", tmp);
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

struct message_swi_read_data_stats_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_swi_read_data_stats_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_swi_read_data_stats_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_INPUT_TLV_APN_ID:
            tlv_type_str = "Apn Id";
            translated_value = qmi_message_qos_swi_read_data_stats_input_apn_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT_TLV_APN:
            tlv_type_str = "Apn";
            translated_value = qmi_message_qos_swi_read_data_stats_output_apn_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT_TLV_FLOW:
            tlv_type_str = "Flow";
            translated_value = qmi_message_qos_swi_read_data_stats_output_flow_get_printable (
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
message_swi_read_data_stats_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Swi Read Data Stats\" (0x5556)\n",
                            line_prefix);

    {
        struct message_swi_read_data_stats_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_swi_read_data_stats_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageQosSwiReadDataStatsOutput *
qmi_message_qos_swi_read_data_stats_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageQosSwiReadDataStatsOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_QOS_SWI_READ_DATA_STATS);

    self = g_slice_new0 (QmiMessageQosSwiReadDataStatsOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_qos_swi_read_data_stats_output_unref (self);
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
                qmi_message_qos_swi_read_data_stats_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT_TLV_APN, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Apn TLV: ");
                qmi_message_qos_swi_read_data_stats_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_apn_apn_id), error))
                goto qmi_message_qos_swi_read_data_stats_output_apn_out;
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_apn_tx_packets), error))
                goto qmi_message_qos_swi_read_data_stats_output_apn_out;
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_apn_tx_packets_dropped), error))
                goto qmi_message_qos_swi_read_data_stats_output_apn_out;
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_apn_rx_packets), error))
                goto qmi_message_qos_swi_read_data_stats_output_apn_out;
            if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_apn_tx_bytes), error))
                goto qmi_message_qos_swi_read_data_stats_output_apn_out;
            if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_apn_tx_bytes_dropped), error))
                goto qmi_message_qos_swi_read_data_stats_output_apn_out;
            if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_apn_rx_bytes), error))
                goto qmi_message_qos_swi_read_data_stats_output_apn_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Apn' TLV", offset);
            }

            self->arg_apn_set = TRUE;

qmi_message_qos_swi_read_data_stats_output_apn_out:
            if (!self->arg_apn_set) {
                qmi_message_qos_swi_read_data_stats_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT_TLV_FLOW, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Flow TLV: ");
                qmi_message_qos_swi_read_data_stats_output_unref (self);
                return NULL;
            }
            {
                guint flow_i;
                guint32 flow_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(flow_n_items), error))
                    goto qmi_message_qos_swi_read_data_stats_output_flow_out;

                self->arg_flow = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessageQosSwiReadDataStatsOutputFlowElement),
                    (guint)flow_n_items);

                for (flow_i = 0; flow_i < flow_n_items; flow_i++) {
                    QmiMessageQosSwiReadDataStatsOutputFlowElement flow_aux;

                    if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(flow_aux.bearer_id), error))
                        goto qmi_message_qos_swi_read_data_stats_output_flow_out;
                    if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(flow_aux.tx_packets), error))
                        goto qmi_message_qos_swi_read_data_stats_output_flow_out;
                    if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(flow_aux.tx_packets_dropped), error))
                        goto qmi_message_qos_swi_read_data_stats_output_flow_out;
                    if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(flow_aux.tx_bytes), error))
                        goto qmi_message_qos_swi_read_data_stats_output_flow_out;
                    if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(flow_aux.tx_bytes_dropped), error))
                        goto qmi_message_qos_swi_read_data_stats_output_flow_out;
                    g_array_insert_val (self->arg_flow, flow_i, flow_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Flow' TLV", offset);
            }

            self->arg_flow_set = TRUE;

qmi_message_qos_swi_read_data_stats_output_flow_out:
            if (!self->arg_flow_set) {
                qmi_message_qos_swi_read_data_stats_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: QOS */


gchar *
__qmi_message_qos_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_QOS_FLOW_STATUS:
            return indication_flow_status_get_printable (self, line_prefix);
        case QMI_INDICATION_QOS_NETWORK_STATUS:
            return indication_network_status_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_QOS_RESET:
                return message_reset_get_printable (self, line_prefix);
            case QMI_MESSAGE_QOS_GET_FLOW_STATUS:
                return message_get_flow_status_get_printable (self, line_prefix);
            case QMI_MESSAGE_QOS_GET_NETWORK_STATUS:
                return message_get_network_status_get_printable (self, line_prefix);
            case QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT:
                return message_bind_mux_data_port_get_printable (self, line_prefix);
            case QMI_MESSAGE_QOS_BIND_SUBSCRIPTION:
                return message_bind_subscription_get_printable (self, line_prefix);
            case QMI_MESSAGE_QOS_GET_BIND_SUBSCRIPTION:
                return message_get_bind_subscription_get_printable (self, line_prefix);
            case QMI_MESSAGE_QOS_SWI_READ_DATA_STATS:
                return message_swi_read_data_stats_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client QOS */

G_DEFINE_TYPE (QmiClientQos, qmi_client_qos, QMI_TYPE_CLIENT)

enum {
    SIGNAL_FLOW_STATUS,
    SIGNAL_NETWORK_STATUS,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_QOS_FLOW_STATUS: {
            QmiIndicationQosFlowStatusOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_qos_flow_status_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Flow Status' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_FLOW_STATUS], 0, output);
                qmi_indication_qos_flow_status_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_QOS_NETWORK_STATUS: {
            QmiIndicationQosNetworkStatusOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_qos_network_status_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Network Status' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_NETWORK_STATUS], 0, output);
                qmi_indication_qos_network_status_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_qos_init (QmiClientQos *self)
{
}

static void
qmi_client_qos_class_init (QmiClientQosClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientQos::flow-status:
     * @object: A #QmiClientQos.
     * @output: A #QmiIndicationQosFlowStatusOutput.
     *
     * The ::flow-status signal gets emitted when a '<link linkend="libqmi-glib-QOS-Flow-Status-indication.top_of_page">Flow Status</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_FLOW_STATUS] =
        g_signal_new ("flow-status",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_QOS_FLOW_STATUS_OUTPUT);

    /**
     * QmiClientQos::network-status:
     * @object: A #QmiClientQos.
     * @output: A #QmiIndicationQosNetworkStatusOutput.
     *
     * The ::network-status signal gets emitted when a '<link linkend="libqmi-glib-QOS-Network-Status-indication.top_of_page">Network Status</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_NETWORK_STATUS] =
        g_signal_new ("network-status",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_QOS_NETWORK_STATUS_OUTPUT);
}


QmiMessageQosResetOutput *
qmi_client_qos_reset_finish (
    QmiClientQos *self,
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
    QmiMessageQosResetOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_qos_reset_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_qos_reset_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_qos_reset (
    QmiClientQos *self,
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

    request = __qmi_message_qos_reset_request_create (
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


QmiMessageQosGetFlowStatusOutput *
qmi_client_qos_get_flow_status_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_flow_status_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageQosGetFlowStatusOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_qos_get_flow_status_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_qos_get_flow_status_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_qos_get_flow_status (
    QmiClientQos *self,
    QmiMessageQosGetFlowStatusInput *input,
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

    request = __qmi_message_qos_get_flow_status_request_create (
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
                             (GAsyncReadyCallback)get_flow_status_ready,
                             task);
}


QmiMessageQosGetNetworkStatusOutput *
qmi_client_qos_get_network_status_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_network_status_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageQosGetNetworkStatusOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_qos_get_network_status_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_qos_get_network_status_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_qos_get_network_status (
    QmiClientQos *self,
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

    request = __qmi_message_qos_get_network_status_request_create (
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
                             (GAsyncReadyCallback)get_network_status_ready,
                             task);
}


QmiMessageQosBindMuxDataPortOutput *
qmi_client_qos_bind_mux_data_port_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
bind_mux_data_port_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageQosBindMuxDataPortOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_qos_bind_mux_data_port_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_qos_bind_mux_data_port_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_qos_bind_mux_data_port (
    QmiClientQos *self,
    QmiMessageQosBindMuxDataPortInput *input,
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

    request = __qmi_message_qos_bind_mux_data_port_request_create (
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
                             (GAsyncReadyCallback)bind_mux_data_port_ready,
                             task);
}


QmiMessageQosBindSubscriptionOutput *
qmi_client_qos_bind_subscription_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
bind_subscription_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageQosBindSubscriptionOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_qos_bind_subscription_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_qos_bind_subscription_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_qos_bind_subscription (
    QmiClientQos *self,
    QmiMessageQosBindSubscriptionInput *input,
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

    request = __qmi_message_qos_bind_subscription_request_create (
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
                             (GAsyncReadyCallback)bind_subscription_ready,
                             task);
}


QmiMessageQosGetBindSubscriptionOutput *
qmi_client_qos_get_bind_subscription_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_bind_subscription_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageQosGetBindSubscriptionOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_qos_get_bind_subscription_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_qos_get_bind_subscription_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_qos_get_bind_subscription (
    QmiClientQos *self,
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

    request = __qmi_message_qos_get_bind_subscription_request_create (
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
                             (GAsyncReadyCallback)get_bind_subscription_ready,
                             task);
}


QmiMessageQosSwiReadDataStatsOutput *
qmi_client_qos_swi_read_data_stats_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
swi_read_data_stats_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageQosSwiReadDataStatsOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_qos_swi_read_data_stats_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_qos_swi_read_data_stats_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_qos_swi_read_data_stats (
    QmiClientQos *self,
    QmiMessageQosSwiReadDataStatsInput *input,
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

    request = __qmi_message_qos_swi_read_data_stats_request_create (
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
                             (GAsyncReadyCallback)swi_read_data_stats_ready,
                             task);
}

