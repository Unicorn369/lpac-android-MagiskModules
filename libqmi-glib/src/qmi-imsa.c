
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

#include "qmi-imsa.h"
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
    QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS = 0x0020,
    QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS = 0x0021,
    QMI_MESSAGE_IMSA_REGISTER_INDICATIONS = 0x0022,
    QMI_MESSAGE_IMSA_BIND = 0x0033,
} QmiMessageImsa;


typedef enum {
    QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED = 0x0023,
    QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED = 0x0024,
} QmiIndicationImsa;


/*****************************************************************************/
/* INDICATION: Qmi Indication IMSA IMS Registration Status Changed */


/* --- Output -- */

struct _QmiIndicationImsaImsRegistrationStatusChangedOutput {
    volatile gint ref_count;

    /* IMS Registration Technology */
    gboolean arg_ims_registration_technology_set;
    guint32 arg_ims_registration_technology;

    /* IMS Registration Error Message */
    gboolean arg_ims_registration_error_message_set;
    gchar *arg_ims_registration_error_message;

    /* IMS Registration Error Code */
    gboolean arg_ims_registration_error_code_set;
    guint16 arg_ims_registration_error_code;

    /* IMS Registration Status */
    gboolean arg_ims_registration_status_set;
    guint32 arg_ims_registration_status;
};

#define QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_TECHNOLOGY 0x13
#define QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_ERROR_MESSAGE 0x12
#define QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_ERROR_CODE 0x10
#define QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_STATUS 0x11

gboolean
qmi_indication_imsa_ims_registration_status_changed_output_get_ims_registration_technology (
    QmiIndicationImsaImsRegistrationStatusChangedOutput *self,
    QmiImsaRegistrationTechnology *value_ims_registration_technology,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_registration_technology_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Registration Technology' was not found in the message");
        return FALSE;
    }

    if (value_ims_registration_technology)
        *value_ims_registration_technology = (QmiImsaRegistrationTechnology)(self->arg_ims_registration_technology);

    return TRUE;
}

gboolean
qmi_indication_imsa_ims_registration_status_changed_output_get_ims_registration_error_message (
    QmiIndicationImsaImsRegistrationStatusChangedOutput *self,
    const gchar **value_ims_registration_error_message,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_registration_error_message_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Registration Error Message' was not found in the message");
        return FALSE;
    }

    if (value_ims_registration_error_message)
        *value_ims_registration_error_message = self->arg_ims_registration_error_message;

    return TRUE;
}

gboolean
qmi_indication_imsa_ims_registration_status_changed_output_get_ims_registration_error_code (
    QmiIndicationImsaImsRegistrationStatusChangedOutput *self,
    guint16 *value_ims_registration_error_code,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_registration_error_code_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Registration Error Code' was not found in the message");
        return FALSE;
    }

    if (value_ims_registration_error_code)
        *value_ims_registration_error_code = self->arg_ims_registration_error_code;

    return TRUE;
}

gboolean
qmi_indication_imsa_ims_registration_status_changed_output_get_ims_registration_status (
    QmiIndicationImsaImsRegistrationStatusChangedOutput *self,
    QmiImsaImsRegistrationStatus *value_ims_registration_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_registration_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Registration Status' was not found in the message");
        return FALSE;
    }

    if (value_ims_registration_status)
        *value_ims_registration_status = (QmiImsaImsRegistrationStatus)(self->arg_ims_registration_status);

    return TRUE;
}

GType
qmi_indication_imsa_ims_registration_status_changed_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationImsaImsRegistrationStatusChangedOutput"),
                                          (GBoxedCopyFunc) qmi_indication_imsa_ims_registration_status_changed_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_imsa_ims_registration_status_changed_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationImsaImsRegistrationStatusChangedOutput *
qmi_indication_imsa_ims_registration_status_changed_output_ref (QmiIndicationImsaImsRegistrationStatusChangedOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_imsa_ims_registration_status_changed_output_unref (QmiIndicationImsaImsRegistrationStatusChangedOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_ims_registration_error_message, (GDestroyNotify)g_free);
        g_slice_free (QmiIndicationImsaImsRegistrationStatusChangedOutput, self);
    }
}

static gchar *
qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_technology_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_registration_technology_get_string ((QmiImsaRegistrationTechnology)tmp));
#elif defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_registration_technology_build_string_from_mask ((QmiImsaRegistrationTechnology)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaRegistrationTechnology
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
qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_error_message_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_ERROR_MESSAGE, NULL, NULL)) == 0)
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
qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_error_code_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_ERROR_CODE, NULL, NULL)) == 0)
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
qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_IMS_REGISTRATION_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_ims_registration_status_get_string ((QmiImsaImsRegistrationStatus)tmp));
#elif defined  __QMI_IMSA_IMS_REGISTRATION_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_ims_registration_status_build_string_from_mask ((QmiImsaImsRegistrationStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaImsRegistrationStatus
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

struct indication_ims_registration_status_changed_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_ims_registration_status_changed_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_ims_registration_status_changed_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_TECHNOLOGY:
            tlv_type_str = "IMS Registration Technology";
            translated_value = qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_technology_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_ERROR_MESSAGE:
            tlv_type_str = "IMS Registration Error Message";
            translated_value = qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_error_message_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_ERROR_CODE:
            tlv_type_str = "IMS Registration Error Code";
            translated_value = qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_error_code_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_STATUS:
            tlv_type_str = "IMS Registration Status";
            translated_value = qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_status_get_printable (
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
indication_ims_registration_status_changed_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"IMS Registration Status Changed\" (0x0023)\n",
                            line_prefix);

    {
        struct indication_ims_registration_status_changed_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_ims_registration_status_changed_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationImsaImsRegistrationStatusChangedOutput *
qmi_indication_imsa_ims_registration_status_changed_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationImsaImsRegistrationStatusChangedOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED);

    self = g_slice_new0 (QmiIndicationImsaImsRegistrationStatusChangedOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_technology_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_technology_out;
                self->arg_ims_registration_technology = (QmiImsaRegistrationTechnology)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Registration Technology' TLV", offset);
            }

            self->arg_ims_registration_technology_set = TRUE;

qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_technology_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_ERROR_MESSAGE, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_error_message_out;
            }
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 0, &(self->arg_ims_registration_error_message), NULL))
                goto qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_error_message_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Registration Error Message' TLV", offset);
            }

            self->arg_ims_registration_error_message_set = TRUE;

qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_error_message_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_ERROR_CODE, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_error_code_out;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_ims_registration_error_code), NULL))
                goto qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_error_code_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Registration Error Code' TLV", offset);
            }

            self->arg_ims_registration_error_code_set = TRUE;

qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_error_code_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT_TLV_IMS_REGISTRATION_STATUS, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_status_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_status_out;
                self->arg_ims_registration_status = (QmiImsaImsRegistrationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Registration Status' TLV", offset);
            }

            self->arg_ims_registration_status_set = TRUE;

qmi_indication_imsa_ims_registration_status_changed_output_ims_registration_status_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication IMSA IMS Services Status Changed */


/* --- Output -- */

struct _QmiIndicationImsaImsServicesStatusChangedOutput {
    volatile gint ref_count;

    /* IMS Video Share Service Registration Technology */
    gboolean arg_ims_video_share_service_registration_technology_set;
    guint32 arg_ims_video_share_service_registration_technology;

    /* IMS Video Share Service Status */
    gboolean arg_ims_video_share_service_status_set;
    guint32 arg_ims_video_share_service_status;

    /* IMS UE to TAS Service Registration Technology */
    gboolean arg_ims_ue_to_tas_service_registration_technology_set;
    guint32 arg_ims_ue_to_tas_service_registration_technology;

    /* IMS UE to TAS Service Status */
    gboolean arg_ims_ue_to_tas_service_status_set;
    guint32 arg_ims_ue_to_tas_service_status;

    /* IMS Video Telephony Service Registration Technology */
    gboolean arg_ims_video_telephony_service_registration_technology_set;
    guint32 arg_ims_video_telephony_service_registration_technology;

    /* IMS Voice Service Registration Technology */
    gboolean arg_ims_voice_service_registration_technology_set;
    guint32 arg_ims_voice_service_registration_technology;

    /* IMS SMS Service Registration Technology */
    gboolean arg_ims_sms_service_registration_technology_set;
    guint32 arg_ims_sms_service_registration_technology;

    /* IMS Video Telephony Service Status */
    gboolean arg_ims_video_telephony_service_status_set;
    guint32 arg_ims_video_telephony_service_status;

    /* IMS Voice Service Status */
    gboolean arg_ims_voice_service_status_set;
    guint32 arg_ims_voice_service_status;

    /* IMS SMS Service Status */
    gboolean arg_ims_sms_service_status_set;
    guint32 arg_ims_sms_service_status;
};

#define QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_REGISTRATION_TECHNOLOGY 0x19
#define QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_STATUS 0x18
#define QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_REGISTRATION_TECHNOLOGY 0x17
#define QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_STATUS 0x16
#define QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_REGISTRATION_TECHNOLOGY 0x15
#define QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VOICE_SERVICE_REGISTRATION_TECHNOLOGY 0x14
#define QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_SMS_SERVICE_REGISTRATION_TECHNOLOGY 0x13
#define QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_STATUS 0x12
#define QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VOICE_SERVICE_STATUS 0x11
#define QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_SMS_SERVICE_STATUS 0x10

gboolean
qmi_indication_imsa_ims_services_status_changed_output_get_ims_video_share_service_registration_technology (
    QmiIndicationImsaImsServicesStatusChangedOutput *self,
    QmiImsaRegistrationTechnology *value_ims_video_share_service_registration_technology,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_video_share_service_registration_technology_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Video Share Service Registration Technology' was not found in the message");
        return FALSE;
    }

    if (value_ims_video_share_service_registration_technology)
        *value_ims_video_share_service_registration_technology = (QmiImsaRegistrationTechnology)(self->arg_ims_video_share_service_registration_technology);

    return TRUE;
}

gboolean
qmi_indication_imsa_ims_services_status_changed_output_get_ims_video_share_service_status (
    QmiIndicationImsaImsServicesStatusChangedOutput *self,
    QmiImsaServiceStatus *value_ims_video_share_service_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_video_share_service_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Video Share Service Status' was not found in the message");
        return FALSE;
    }

    if (value_ims_video_share_service_status)
        *value_ims_video_share_service_status = (QmiImsaServiceStatus)(self->arg_ims_video_share_service_status);

    return TRUE;
}

gboolean
qmi_indication_imsa_ims_services_status_changed_output_get_ims_ue_to_tas_service_registration_technology (
    QmiIndicationImsaImsServicesStatusChangedOutput *self,
    QmiImsaRegistrationTechnology *value_ims_ue_to_tas_service_registration_technology,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_ue_to_tas_service_registration_technology_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS UE to TAS Service Registration Technology' was not found in the message");
        return FALSE;
    }

    if (value_ims_ue_to_tas_service_registration_technology)
        *value_ims_ue_to_tas_service_registration_technology = (QmiImsaRegistrationTechnology)(self->arg_ims_ue_to_tas_service_registration_technology);

    return TRUE;
}

gboolean
qmi_indication_imsa_ims_services_status_changed_output_get_ims_ue_to_tas_service_status (
    QmiIndicationImsaImsServicesStatusChangedOutput *self,
    QmiImsaServiceStatus *value_ims_ue_to_tas_service_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_ue_to_tas_service_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS UE to TAS Service Status' was not found in the message");
        return FALSE;
    }

    if (value_ims_ue_to_tas_service_status)
        *value_ims_ue_to_tas_service_status = (QmiImsaServiceStatus)(self->arg_ims_ue_to_tas_service_status);

    return TRUE;
}

gboolean
qmi_indication_imsa_ims_services_status_changed_output_get_ims_video_telephony_service_registration_technology (
    QmiIndicationImsaImsServicesStatusChangedOutput *self,
    QmiImsaRegistrationTechnology *value_ims_video_telephony_service_registration_technology,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_video_telephony_service_registration_technology_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Video Telephony Service Registration Technology' was not found in the message");
        return FALSE;
    }

    if (value_ims_video_telephony_service_registration_technology)
        *value_ims_video_telephony_service_registration_technology = (QmiImsaRegistrationTechnology)(self->arg_ims_video_telephony_service_registration_technology);

    return TRUE;
}

gboolean
qmi_indication_imsa_ims_services_status_changed_output_get_ims_voice_service_registration_technology (
    QmiIndicationImsaImsServicesStatusChangedOutput *self,
    QmiImsaRegistrationTechnology *value_ims_voice_service_registration_technology,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_voice_service_registration_technology_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Voice Service Registration Technology' was not found in the message");
        return FALSE;
    }

    if (value_ims_voice_service_registration_technology)
        *value_ims_voice_service_registration_technology = (QmiImsaRegistrationTechnology)(self->arg_ims_voice_service_registration_technology);

    return TRUE;
}

gboolean
qmi_indication_imsa_ims_services_status_changed_output_get_ims_sms_service_registration_technology (
    QmiIndicationImsaImsServicesStatusChangedOutput *self,
    QmiImsaRegistrationTechnology *value_ims_sms_service_registration_technology,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_sms_service_registration_technology_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS SMS Service Registration Technology' was not found in the message");
        return FALSE;
    }

    if (value_ims_sms_service_registration_technology)
        *value_ims_sms_service_registration_technology = (QmiImsaRegistrationTechnology)(self->arg_ims_sms_service_registration_technology);

    return TRUE;
}

gboolean
qmi_indication_imsa_ims_services_status_changed_output_get_ims_video_telephony_service_status (
    QmiIndicationImsaImsServicesStatusChangedOutput *self,
    QmiImsaServiceStatus *value_ims_video_telephony_service_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_video_telephony_service_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Video Telephony Service Status' was not found in the message");
        return FALSE;
    }

    if (value_ims_video_telephony_service_status)
        *value_ims_video_telephony_service_status = (QmiImsaServiceStatus)(self->arg_ims_video_telephony_service_status);

    return TRUE;
}

gboolean
qmi_indication_imsa_ims_services_status_changed_output_get_ims_voice_service_status (
    QmiIndicationImsaImsServicesStatusChangedOutput *self,
    QmiImsaServiceStatus *value_ims_voice_service_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_voice_service_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Voice Service Status' was not found in the message");
        return FALSE;
    }

    if (value_ims_voice_service_status)
        *value_ims_voice_service_status = (QmiImsaServiceStatus)(self->arg_ims_voice_service_status);

    return TRUE;
}

gboolean
qmi_indication_imsa_ims_services_status_changed_output_get_ims_sms_service_status (
    QmiIndicationImsaImsServicesStatusChangedOutput *self,
    QmiImsaServiceStatus *value_ims_sms_service_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_sms_service_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS SMS Service Status' was not found in the message");
        return FALSE;
    }

    if (value_ims_sms_service_status)
        *value_ims_sms_service_status = (QmiImsaServiceStatus)(self->arg_ims_sms_service_status);

    return TRUE;
}

GType
qmi_indication_imsa_ims_services_status_changed_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationImsaImsServicesStatusChangedOutput"),
                                          (GBoxedCopyFunc) qmi_indication_imsa_ims_services_status_changed_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_imsa_ims_services_status_changed_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationImsaImsServicesStatusChangedOutput *
qmi_indication_imsa_ims_services_status_changed_output_ref (QmiIndicationImsaImsServicesStatusChangedOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_imsa_ims_services_status_changed_output_unref (QmiIndicationImsaImsServicesStatusChangedOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationImsaImsServicesStatusChangedOutput, self);
    }
}

static gchar *
qmi_indication_imsa_ims_services_status_changed_output_ims_video_share_service_registration_technology_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_registration_technology_get_string ((QmiImsaRegistrationTechnology)tmp));
#elif defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_registration_technology_build_string_from_mask ((QmiImsaRegistrationTechnology)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaRegistrationTechnology
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
qmi_indication_imsa_ims_services_status_changed_output_ims_video_share_service_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_SERVICE_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_service_status_get_string ((QmiImsaServiceStatus)tmp));
#elif defined  __QMI_IMSA_SERVICE_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_service_status_build_string_from_mask ((QmiImsaServiceStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaServiceStatus
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
qmi_indication_imsa_ims_services_status_changed_output_ims_ue_to_tas_service_registration_technology_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_registration_technology_get_string ((QmiImsaRegistrationTechnology)tmp));
#elif defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_registration_technology_build_string_from_mask ((QmiImsaRegistrationTechnology)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaRegistrationTechnology
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
qmi_indication_imsa_ims_services_status_changed_output_ims_ue_to_tas_service_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_SERVICE_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_service_status_get_string ((QmiImsaServiceStatus)tmp));
#elif defined  __QMI_IMSA_SERVICE_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_service_status_build_string_from_mask ((QmiImsaServiceStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaServiceStatus
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
qmi_indication_imsa_ims_services_status_changed_output_ims_video_telephony_service_registration_technology_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_registration_technology_get_string ((QmiImsaRegistrationTechnology)tmp));
#elif defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_registration_technology_build_string_from_mask ((QmiImsaRegistrationTechnology)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaRegistrationTechnology
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
qmi_indication_imsa_ims_services_status_changed_output_ims_voice_service_registration_technology_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VOICE_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_registration_technology_get_string ((QmiImsaRegistrationTechnology)tmp));
#elif defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_registration_technology_build_string_from_mask ((QmiImsaRegistrationTechnology)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaRegistrationTechnology
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
qmi_indication_imsa_ims_services_status_changed_output_ims_sms_service_registration_technology_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_SMS_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_registration_technology_get_string ((QmiImsaRegistrationTechnology)tmp));
#elif defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_registration_technology_build_string_from_mask ((QmiImsaRegistrationTechnology)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaRegistrationTechnology
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
qmi_indication_imsa_ims_services_status_changed_output_ims_video_telephony_service_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_SERVICE_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_service_status_get_string ((QmiImsaServiceStatus)tmp));
#elif defined  __QMI_IMSA_SERVICE_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_service_status_build_string_from_mask ((QmiImsaServiceStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaServiceStatus
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
qmi_indication_imsa_ims_services_status_changed_output_ims_voice_service_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VOICE_SERVICE_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_SERVICE_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_service_status_get_string ((QmiImsaServiceStatus)tmp));
#elif defined  __QMI_IMSA_SERVICE_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_service_status_build_string_from_mask ((QmiImsaServiceStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaServiceStatus
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
qmi_indication_imsa_ims_services_status_changed_output_ims_sms_service_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_SMS_SERVICE_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_SERVICE_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_service_status_get_string ((QmiImsaServiceStatus)tmp));
#elif defined  __QMI_IMSA_SERVICE_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_service_status_build_string_from_mask ((QmiImsaServiceStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaServiceStatus
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

struct indication_ims_services_status_changed_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_ims_services_status_changed_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_ims_services_status_changed_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_REGISTRATION_TECHNOLOGY:
            tlv_type_str = "IMS Video Share Service Registration Technology";
            translated_value = qmi_indication_imsa_ims_services_status_changed_output_ims_video_share_service_registration_technology_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_STATUS:
            tlv_type_str = "IMS Video Share Service Status";
            translated_value = qmi_indication_imsa_ims_services_status_changed_output_ims_video_share_service_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_REGISTRATION_TECHNOLOGY:
            tlv_type_str = "IMS UE to TAS Service Registration Technology";
            translated_value = qmi_indication_imsa_ims_services_status_changed_output_ims_ue_to_tas_service_registration_technology_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_STATUS:
            tlv_type_str = "IMS UE to TAS Service Status";
            translated_value = qmi_indication_imsa_ims_services_status_changed_output_ims_ue_to_tas_service_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_REGISTRATION_TECHNOLOGY:
            tlv_type_str = "IMS Video Telephony Service Registration Technology";
            translated_value = qmi_indication_imsa_ims_services_status_changed_output_ims_video_telephony_service_registration_technology_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VOICE_SERVICE_REGISTRATION_TECHNOLOGY:
            tlv_type_str = "IMS Voice Service Registration Technology";
            translated_value = qmi_indication_imsa_ims_services_status_changed_output_ims_voice_service_registration_technology_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_SMS_SERVICE_REGISTRATION_TECHNOLOGY:
            tlv_type_str = "IMS SMS Service Registration Technology";
            translated_value = qmi_indication_imsa_ims_services_status_changed_output_ims_sms_service_registration_technology_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_STATUS:
            tlv_type_str = "IMS Video Telephony Service Status";
            translated_value = qmi_indication_imsa_ims_services_status_changed_output_ims_video_telephony_service_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VOICE_SERVICE_STATUS:
            tlv_type_str = "IMS Voice Service Status";
            translated_value = qmi_indication_imsa_ims_services_status_changed_output_ims_voice_service_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_SMS_SERVICE_STATUS:
            tlv_type_str = "IMS SMS Service Status";
            translated_value = qmi_indication_imsa_ims_services_status_changed_output_ims_sms_service_status_get_printable (
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
indication_ims_services_status_changed_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"IMS Services Status Changed\" (0x0024)\n",
                            line_prefix);

    {
        struct indication_ims_services_status_changed_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_ims_services_status_changed_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationImsaImsServicesStatusChangedOutput *
qmi_indication_imsa_ims_services_status_changed_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationImsaImsServicesStatusChangedOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED);

    self = g_slice_new0 (QmiIndicationImsaImsServicesStatusChangedOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_services_status_changed_output_ims_video_share_service_registration_technology_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsa_ims_services_status_changed_output_ims_video_share_service_registration_technology_out;
                self->arg_ims_video_share_service_registration_technology = (QmiImsaRegistrationTechnology)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Video Share Service Registration Technology' TLV", offset);
            }

            self->arg_ims_video_share_service_registration_technology_set = TRUE;

qmi_indication_imsa_ims_services_status_changed_output_ims_video_share_service_registration_technology_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_STATUS, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_services_status_changed_output_ims_video_share_service_status_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsa_ims_services_status_changed_output_ims_video_share_service_status_out;
                self->arg_ims_video_share_service_status = (QmiImsaServiceStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Video Share Service Status' TLV", offset);
            }

            self->arg_ims_video_share_service_status_set = TRUE;

qmi_indication_imsa_ims_services_status_changed_output_ims_video_share_service_status_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_services_status_changed_output_ims_ue_to_tas_service_registration_technology_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsa_ims_services_status_changed_output_ims_ue_to_tas_service_registration_technology_out;
                self->arg_ims_ue_to_tas_service_registration_technology = (QmiImsaRegistrationTechnology)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS UE to TAS Service Registration Technology' TLV", offset);
            }

            self->arg_ims_ue_to_tas_service_registration_technology_set = TRUE;

qmi_indication_imsa_ims_services_status_changed_output_ims_ue_to_tas_service_registration_technology_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_STATUS, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_services_status_changed_output_ims_ue_to_tas_service_status_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsa_ims_services_status_changed_output_ims_ue_to_tas_service_status_out;
                self->arg_ims_ue_to_tas_service_status = (QmiImsaServiceStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS UE to TAS Service Status' TLV", offset);
            }

            self->arg_ims_ue_to_tas_service_status_set = TRUE;

qmi_indication_imsa_ims_services_status_changed_output_ims_ue_to_tas_service_status_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_services_status_changed_output_ims_video_telephony_service_registration_technology_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsa_ims_services_status_changed_output_ims_video_telephony_service_registration_technology_out;
                self->arg_ims_video_telephony_service_registration_technology = (QmiImsaRegistrationTechnology)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Video Telephony Service Registration Technology' TLV", offset);
            }

            self->arg_ims_video_telephony_service_registration_technology_set = TRUE;

qmi_indication_imsa_ims_services_status_changed_output_ims_video_telephony_service_registration_technology_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VOICE_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_services_status_changed_output_ims_voice_service_registration_technology_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsa_ims_services_status_changed_output_ims_voice_service_registration_technology_out;
                self->arg_ims_voice_service_registration_technology = (QmiImsaRegistrationTechnology)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Voice Service Registration Technology' TLV", offset);
            }

            self->arg_ims_voice_service_registration_technology_set = TRUE;

qmi_indication_imsa_ims_services_status_changed_output_ims_voice_service_registration_technology_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_SMS_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_services_status_changed_output_ims_sms_service_registration_technology_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsa_ims_services_status_changed_output_ims_sms_service_registration_technology_out;
                self->arg_ims_sms_service_registration_technology = (QmiImsaRegistrationTechnology)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS SMS Service Registration Technology' TLV", offset);
            }

            self->arg_ims_sms_service_registration_technology_set = TRUE;

qmi_indication_imsa_ims_services_status_changed_output_ims_sms_service_registration_technology_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_STATUS, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_services_status_changed_output_ims_video_telephony_service_status_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsa_ims_services_status_changed_output_ims_video_telephony_service_status_out;
                self->arg_ims_video_telephony_service_status = (QmiImsaServiceStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Video Telephony Service Status' TLV", offset);
            }

            self->arg_ims_video_telephony_service_status_set = TRUE;

qmi_indication_imsa_ims_services_status_changed_output_ims_video_telephony_service_status_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_VOICE_SERVICE_STATUS, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_services_status_changed_output_ims_voice_service_status_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsa_ims_services_status_changed_output_ims_voice_service_status_out;
                self->arg_ims_voice_service_status = (QmiImsaServiceStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Voice Service Status' TLV", offset);
            }

            self->arg_ims_voice_service_status_set = TRUE;

qmi_indication_imsa_ims_services_status_changed_output_ims_voice_service_status_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT_TLV_IMS_SMS_SERVICE_STATUS, NULL, NULL)) == 0) {
                goto qmi_indication_imsa_ims_services_status_changed_output_ims_sms_service_status_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_imsa_ims_services_status_changed_output_ims_sms_service_status_out;
                self->arg_ims_sms_service_status = (QmiImsaServiceStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS SMS Service Status' TLV", offset);
            }

            self->arg_ims_sms_service_status_set = TRUE;

qmi_indication_imsa_ims_services_status_changed_output_ims_sms_service_status_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMSA Get IMS Registration Status */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_imsa_get_ims_registration_status_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_IMSA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageImsaGetImsRegistrationStatusOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* IMS Registration Status */
    gboolean arg_ims_registration_status_set;
    guint32 arg_ims_registration_status;

    /* IMS Registration Error Code */
    gboolean arg_ims_registration_error_code_set;
    guint16 arg_ims_registration_error_code;

    /* IMS Registration Error Message */
    gboolean arg_ims_registration_error_message_set;
    gchar *arg_ims_registration_error_message;

    /* IMS Registration Technology */
    gboolean arg_ims_registration_technology_set;
    guint32 arg_ims_registration_technology;
};

#define QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_STATUS 0x12
#define QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_ERROR_CODE 0x11
#define QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_ERROR_MESSAGE 0x13
#define QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_TECHNOLOGY 0x14

gboolean
qmi_message_imsa_get_ims_registration_status_output_get_result (
    QmiMessageImsaGetImsRegistrationStatusOutput *self,
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
qmi_message_imsa_get_ims_registration_status_output_get_ims_registration_status (
    QmiMessageImsaGetImsRegistrationStatusOutput *self,
    QmiImsaImsRegistrationStatus *value_ims_registration_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_registration_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Registration Status' was not found in the message");
        return FALSE;
    }

    if (value_ims_registration_status)
        *value_ims_registration_status = (QmiImsaImsRegistrationStatus)(self->arg_ims_registration_status);

    return TRUE;
}

gboolean
qmi_message_imsa_get_ims_registration_status_output_get_ims_registration_error_code (
    QmiMessageImsaGetImsRegistrationStatusOutput *self,
    guint16 *value_ims_registration_error_code,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_registration_error_code_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Registration Error Code' was not found in the message");
        return FALSE;
    }

    if (value_ims_registration_error_code)
        *value_ims_registration_error_code = self->arg_ims_registration_error_code;

    return TRUE;
}

gboolean
qmi_message_imsa_get_ims_registration_status_output_get_ims_registration_error_message (
    QmiMessageImsaGetImsRegistrationStatusOutput *self,
    const gchar **value_ims_registration_error_message,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_registration_error_message_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Registration Error Message' was not found in the message");
        return FALSE;
    }

    if (value_ims_registration_error_message)
        *value_ims_registration_error_message = self->arg_ims_registration_error_message;

    return TRUE;
}

gboolean
qmi_message_imsa_get_ims_registration_status_output_get_ims_registration_technology (
    QmiMessageImsaGetImsRegistrationStatusOutput *self,
    QmiImsaRegistrationTechnology *value_ims_registration_technology,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_registration_technology_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Registration Technology' was not found in the message");
        return FALSE;
    }

    if (value_ims_registration_technology)
        *value_ims_registration_technology = (QmiImsaRegistrationTechnology)(self->arg_ims_registration_technology);

    return TRUE;
}

GType
qmi_message_imsa_get_ims_registration_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsaGetImsRegistrationStatusOutput"),
                                          (GBoxedCopyFunc) qmi_message_imsa_get_ims_registration_status_output_ref,
                                          (GBoxedFreeFunc) qmi_message_imsa_get_ims_registration_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsaGetImsRegistrationStatusOutput *
qmi_message_imsa_get_ims_registration_status_output_ref (QmiMessageImsaGetImsRegistrationStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_imsa_get_ims_registration_status_output_unref (QmiMessageImsaGetImsRegistrationStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_ims_registration_error_message, (GDestroyNotify)g_free);
        g_slice_free (QmiMessageImsaGetImsRegistrationStatusOutput, self);
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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
qmi_message_imsa_get_ims_registration_status_output_ims_registration_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_IMS_REGISTRATION_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_ims_registration_status_get_string ((QmiImsaImsRegistrationStatus)tmp));
#elif defined  __QMI_IMSA_IMS_REGISTRATION_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_ims_registration_status_build_string_from_mask ((QmiImsaImsRegistrationStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaImsRegistrationStatus
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
qmi_message_imsa_get_ims_registration_status_output_ims_registration_error_code_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_ERROR_CODE, NULL, NULL)) == 0)
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
qmi_message_imsa_get_ims_registration_status_output_ims_registration_error_message_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_ERROR_MESSAGE, NULL, NULL)) == 0)
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
qmi_message_imsa_get_ims_registration_status_output_ims_registration_technology_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_registration_technology_get_string ((QmiImsaRegistrationTechnology)tmp));
#elif defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_registration_technology_build_string_from_mask ((QmiImsaRegistrationTechnology)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaRegistrationTechnology
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

struct message_get_ims_registration_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_ims_registration_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_ims_registration_status_context *ctx)
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
        case QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_STATUS:
            tlv_type_str = "IMS Registration Status";
            translated_value = qmi_message_imsa_get_ims_registration_status_output_ims_registration_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_ERROR_CODE:
            tlv_type_str = "IMS Registration Error Code";
            translated_value = qmi_message_imsa_get_ims_registration_status_output_ims_registration_error_code_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_ERROR_MESSAGE:
            tlv_type_str = "IMS Registration Error Message";
            translated_value = qmi_message_imsa_get_ims_registration_status_output_ims_registration_error_message_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_TECHNOLOGY:
            tlv_type_str = "IMS Registration Technology";
            translated_value = qmi_message_imsa_get_ims_registration_status_output_ims_registration_technology_get_printable (
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
message_get_ims_registration_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get IMS Registration Status\" (0x0020)\n",
                            line_prefix);

    {
        struct message_get_ims_registration_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_ims_registration_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageImsaGetImsRegistrationStatusOutput *
qmi_message_imsa_get_ims_registration_status_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageImsaGetImsRegistrationStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS);

    self = g_slice_new0 (QmiMessageImsaGetImsRegistrationStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_imsa_get_ims_registration_status_output_unref (self);
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
                qmi_message_imsa_get_ims_registration_status_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_STATUS, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_registration_status_output_ims_registration_status_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsa_get_ims_registration_status_output_ims_registration_status_out;
                self->arg_ims_registration_status = (QmiImsaImsRegistrationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Registration Status' TLV", offset);
            }

            self->arg_ims_registration_status_set = TRUE;

qmi_message_imsa_get_ims_registration_status_output_ims_registration_status_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_ERROR_CODE, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_registration_status_output_ims_registration_error_code_out;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_ims_registration_error_code), NULL))
                goto qmi_message_imsa_get_ims_registration_status_output_ims_registration_error_code_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Registration Error Code' TLV", offset);
            }

            self->arg_ims_registration_error_code_set = TRUE;

qmi_message_imsa_get_ims_registration_status_output_ims_registration_error_code_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_ERROR_MESSAGE, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_registration_status_output_ims_registration_error_message_out;
            }
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 0, &(self->arg_ims_registration_error_message), NULL))
                goto qmi_message_imsa_get_ims_registration_status_output_ims_registration_error_message_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Registration Error Message' TLV", offset);
            }

            self->arg_ims_registration_error_message_set = TRUE;

qmi_message_imsa_get_ims_registration_status_output_ims_registration_error_message_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS_OUTPUT_TLV_IMS_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_registration_status_output_ims_registration_technology_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsa_get_ims_registration_status_output_ims_registration_technology_out;
                self->arg_ims_registration_technology = (QmiImsaRegistrationTechnology)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Registration Technology' TLV", offset);
            }

            self->arg_ims_registration_technology_set = TRUE;

qmi_message_imsa_get_ims_registration_status_output_ims_registration_technology_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMSA Get IMS Services Status */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_imsa_get_ims_services_status_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_IMSA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageImsaGetImsServicesStatusOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* IMS SMS Service Status */
    gboolean arg_ims_sms_service_status_set;
    guint32 arg_ims_sms_service_status;

    /* IMS Voice Service Status */
    gboolean arg_ims_voice_service_status_set;
    guint32 arg_ims_voice_service_status;

    /* IMS Video Telephony Service Status */
    gboolean arg_ims_video_telephony_service_status_set;
    guint32 arg_ims_video_telephony_service_status;

    /* IMS SMS Service Registration Technology */
    gboolean arg_ims_sms_service_registration_technology_set;
    guint32 arg_ims_sms_service_registration_technology;

    /* IMS Voice Service Registration Technology */
    gboolean arg_ims_voice_service_registration_technology_set;
    guint32 arg_ims_voice_service_registration_technology;

    /* IMS Video Telephony Service Registration Technology */
    gboolean arg_ims_video_telephony_service_registration_technology_set;
    guint32 arg_ims_video_telephony_service_registration_technology;

    /* IMS UE to TAS Service Status */
    gboolean arg_ims_ue_to_tas_service_status_set;
    guint32 arg_ims_ue_to_tas_service_status;

    /* IMS UE to TAS Service Registration Technology */
    gboolean arg_ims_ue_to_tas_service_registration_technology_set;
    guint32 arg_ims_ue_to_tas_service_registration_technology;

    /* IMS Video Share Service Status */
    gboolean arg_ims_video_share_service_status_set;
    guint32 arg_ims_video_share_service_status;

    /* IMS Video Share Service Registration Technology */
    gboolean arg_ims_video_share_service_registration_technology_set;
    guint32 arg_ims_video_share_service_registration_technology;
};

#define QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_SMS_SERVICE_STATUS 0x10
#define QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VOICE_SERVICE_STATUS 0x11
#define QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_STATUS 0x12
#define QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_SMS_SERVICE_REGISTRATION_TECHNOLOGY 0x13
#define QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VOICE_SERVICE_REGISTRATION_TECHNOLOGY 0x14
#define QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_REGISTRATION_TECHNOLOGY 0x15
#define QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_STATUS 0x16
#define QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_REGISTRATION_TECHNOLOGY 0x17
#define QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_STATUS 0x18
#define QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_REGISTRATION_TECHNOLOGY 0x19

gboolean
qmi_message_imsa_get_ims_services_status_output_get_result (
    QmiMessageImsaGetImsServicesStatusOutput *self,
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
qmi_message_imsa_get_ims_services_status_output_get_ims_sms_service_status (
    QmiMessageImsaGetImsServicesStatusOutput *self,
    QmiImsaServiceStatus *value_ims_sms_service_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_sms_service_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS SMS Service Status' was not found in the message");
        return FALSE;
    }

    if (value_ims_sms_service_status)
        *value_ims_sms_service_status = (QmiImsaServiceStatus)(self->arg_ims_sms_service_status);

    return TRUE;
}

gboolean
qmi_message_imsa_get_ims_services_status_output_get_ims_voice_service_status (
    QmiMessageImsaGetImsServicesStatusOutput *self,
    QmiImsaServiceStatus *value_ims_voice_service_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_voice_service_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Voice Service Status' was not found in the message");
        return FALSE;
    }

    if (value_ims_voice_service_status)
        *value_ims_voice_service_status = (QmiImsaServiceStatus)(self->arg_ims_voice_service_status);

    return TRUE;
}

gboolean
qmi_message_imsa_get_ims_services_status_output_get_ims_video_telephony_service_status (
    QmiMessageImsaGetImsServicesStatusOutput *self,
    QmiImsaServiceStatus *value_ims_video_telephony_service_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_video_telephony_service_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Video Telephony Service Status' was not found in the message");
        return FALSE;
    }

    if (value_ims_video_telephony_service_status)
        *value_ims_video_telephony_service_status = (QmiImsaServiceStatus)(self->arg_ims_video_telephony_service_status);

    return TRUE;
}

gboolean
qmi_message_imsa_get_ims_services_status_output_get_ims_sms_service_registration_technology (
    QmiMessageImsaGetImsServicesStatusOutput *self,
    QmiImsaRegistrationTechnology *value_ims_sms_service_registration_technology,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_sms_service_registration_technology_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS SMS Service Registration Technology' was not found in the message");
        return FALSE;
    }

    if (value_ims_sms_service_registration_technology)
        *value_ims_sms_service_registration_technology = (QmiImsaRegistrationTechnology)(self->arg_ims_sms_service_registration_technology);

    return TRUE;
}

gboolean
qmi_message_imsa_get_ims_services_status_output_get_ims_voice_service_registration_technology (
    QmiMessageImsaGetImsServicesStatusOutput *self,
    QmiImsaRegistrationTechnology *value_ims_voice_service_registration_technology,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_voice_service_registration_technology_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Voice Service Registration Technology' was not found in the message");
        return FALSE;
    }

    if (value_ims_voice_service_registration_technology)
        *value_ims_voice_service_registration_technology = (QmiImsaRegistrationTechnology)(self->arg_ims_voice_service_registration_technology);

    return TRUE;
}

gboolean
qmi_message_imsa_get_ims_services_status_output_get_ims_video_telephony_service_registration_technology (
    QmiMessageImsaGetImsServicesStatusOutput *self,
    QmiImsaRegistrationTechnology *value_ims_video_telephony_service_registration_technology,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_video_telephony_service_registration_technology_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Video Telephony Service Registration Technology' was not found in the message");
        return FALSE;
    }

    if (value_ims_video_telephony_service_registration_technology)
        *value_ims_video_telephony_service_registration_technology = (QmiImsaRegistrationTechnology)(self->arg_ims_video_telephony_service_registration_technology);

    return TRUE;
}

gboolean
qmi_message_imsa_get_ims_services_status_output_get_ims_ue_to_tas_service_status (
    QmiMessageImsaGetImsServicesStatusOutput *self,
    QmiImsaServiceStatus *value_ims_ue_to_tas_service_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_ue_to_tas_service_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS UE to TAS Service Status' was not found in the message");
        return FALSE;
    }

    if (value_ims_ue_to_tas_service_status)
        *value_ims_ue_to_tas_service_status = (QmiImsaServiceStatus)(self->arg_ims_ue_to_tas_service_status);

    return TRUE;
}

gboolean
qmi_message_imsa_get_ims_services_status_output_get_ims_ue_to_tas_service_registration_technology (
    QmiMessageImsaGetImsServicesStatusOutput *self,
    QmiImsaRegistrationTechnology *value_ims_ue_to_tas_service_registration_technology,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_ue_to_tas_service_registration_technology_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS UE to TAS Service Registration Technology' was not found in the message");
        return FALSE;
    }

    if (value_ims_ue_to_tas_service_registration_technology)
        *value_ims_ue_to_tas_service_registration_technology = (QmiImsaRegistrationTechnology)(self->arg_ims_ue_to_tas_service_registration_technology);

    return TRUE;
}

gboolean
qmi_message_imsa_get_ims_services_status_output_get_ims_video_share_service_status (
    QmiMessageImsaGetImsServicesStatusOutput *self,
    QmiImsaServiceStatus *value_ims_video_share_service_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_video_share_service_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Video Share Service Status' was not found in the message");
        return FALSE;
    }

    if (value_ims_video_share_service_status)
        *value_ims_video_share_service_status = (QmiImsaServiceStatus)(self->arg_ims_video_share_service_status);

    return TRUE;
}

gboolean
qmi_message_imsa_get_ims_services_status_output_get_ims_video_share_service_registration_technology (
    QmiMessageImsaGetImsServicesStatusOutput *self,
    QmiImsaRegistrationTechnology *value_ims_video_share_service_registration_technology,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_video_share_service_registration_technology_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Video Share Service Registration Technology' was not found in the message");
        return FALSE;
    }

    if (value_ims_video_share_service_registration_technology)
        *value_ims_video_share_service_registration_technology = (QmiImsaRegistrationTechnology)(self->arg_ims_video_share_service_registration_technology);

    return TRUE;
}

GType
qmi_message_imsa_get_ims_services_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsaGetImsServicesStatusOutput"),
                                          (GBoxedCopyFunc) qmi_message_imsa_get_ims_services_status_output_ref,
                                          (GBoxedFreeFunc) qmi_message_imsa_get_ims_services_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsaGetImsServicesStatusOutput *
qmi_message_imsa_get_ims_services_status_output_ref (QmiMessageImsaGetImsServicesStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_imsa_get_ims_services_status_output_unref (QmiMessageImsaGetImsServicesStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsaGetImsServicesStatusOutput, self);
    }
}

static gchar *
qmi_message_imsa_get_ims_services_status_output_ims_sms_service_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_SMS_SERVICE_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_SERVICE_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_service_status_get_string ((QmiImsaServiceStatus)tmp));
#elif defined  __QMI_IMSA_SERVICE_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_service_status_build_string_from_mask ((QmiImsaServiceStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaServiceStatus
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
qmi_message_imsa_get_ims_services_status_output_ims_voice_service_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VOICE_SERVICE_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_SERVICE_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_service_status_get_string ((QmiImsaServiceStatus)tmp));
#elif defined  __QMI_IMSA_SERVICE_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_service_status_build_string_from_mask ((QmiImsaServiceStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaServiceStatus
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
qmi_message_imsa_get_ims_services_status_output_ims_video_telephony_service_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_SERVICE_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_service_status_get_string ((QmiImsaServiceStatus)tmp));
#elif defined  __QMI_IMSA_SERVICE_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_service_status_build_string_from_mask ((QmiImsaServiceStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaServiceStatus
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
qmi_message_imsa_get_ims_services_status_output_ims_sms_service_registration_technology_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_SMS_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_registration_technology_get_string ((QmiImsaRegistrationTechnology)tmp));
#elif defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_registration_technology_build_string_from_mask ((QmiImsaRegistrationTechnology)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaRegistrationTechnology
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
qmi_message_imsa_get_ims_services_status_output_ims_voice_service_registration_technology_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VOICE_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_registration_technology_get_string ((QmiImsaRegistrationTechnology)tmp));
#elif defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_registration_technology_build_string_from_mask ((QmiImsaRegistrationTechnology)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaRegistrationTechnology
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
qmi_message_imsa_get_ims_services_status_output_ims_video_telephony_service_registration_technology_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_registration_technology_get_string ((QmiImsaRegistrationTechnology)tmp));
#elif defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_registration_technology_build_string_from_mask ((QmiImsaRegistrationTechnology)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaRegistrationTechnology
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
qmi_message_imsa_get_ims_services_status_output_ims_ue_to_tas_service_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_SERVICE_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_service_status_get_string ((QmiImsaServiceStatus)tmp));
#elif defined  __QMI_IMSA_SERVICE_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_service_status_build_string_from_mask ((QmiImsaServiceStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaServiceStatus
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
qmi_message_imsa_get_ims_services_status_output_ims_ue_to_tas_service_registration_technology_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_registration_technology_get_string ((QmiImsaRegistrationTechnology)tmp));
#elif defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_registration_technology_build_string_from_mask ((QmiImsaRegistrationTechnology)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaRegistrationTechnology
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
qmi_message_imsa_get_ims_services_status_output_ims_video_share_service_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_SERVICE_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_service_status_get_string ((QmiImsaServiceStatus)tmp));
#elif defined  __QMI_IMSA_SERVICE_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_service_status_build_string_from_mask ((QmiImsaServiceStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaServiceStatus
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
qmi_message_imsa_get_ims_services_status_output_ims_video_share_service_registration_technology_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_imsa_registration_technology_get_string ((QmiImsaRegistrationTechnology)tmp));
#elif defined  __QMI_IMSA_REGISTRATION_TECHNOLOGY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_imsa_registration_technology_build_string_from_mask ((QmiImsaRegistrationTechnology)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiImsaRegistrationTechnology
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

struct message_get_ims_services_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_ims_services_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_ims_services_status_context *ctx)
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
        case QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_SMS_SERVICE_STATUS:
            tlv_type_str = "IMS SMS Service Status";
            translated_value = qmi_message_imsa_get_ims_services_status_output_ims_sms_service_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VOICE_SERVICE_STATUS:
            tlv_type_str = "IMS Voice Service Status";
            translated_value = qmi_message_imsa_get_ims_services_status_output_ims_voice_service_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_STATUS:
            tlv_type_str = "IMS Video Telephony Service Status";
            translated_value = qmi_message_imsa_get_ims_services_status_output_ims_video_telephony_service_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_SMS_SERVICE_REGISTRATION_TECHNOLOGY:
            tlv_type_str = "IMS SMS Service Registration Technology";
            translated_value = qmi_message_imsa_get_ims_services_status_output_ims_sms_service_registration_technology_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VOICE_SERVICE_REGISTRATION_TECHNOLOGY:
            tlv_type_str = "IMS Voice Service Registration Technology";
            translated_value = qmi_message_imsa_get_ims_services_status_output_ims_voice_service_registration_technology_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_REGISTRATION_TECHNOLOGY:
            tlv_type_str = "IMS Video Telephony Service Registration Technology";
            translated_value = qmi_message_imsa_get_ims_services_status_output_ims_video_telephony_service_registration_technology_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_STATUS:
            tlv_type_str = "IMS UE to TAS Service Status";
            translated_value = qmi_message_imsa_get_ims_services_status_output_ims_ue_to_tas_service_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_REGISTRATION_TECHNOLOGY:
            tlv_type_str = "IMS UE to TAS Service Registration Technology";
            translated_value = qmi_message_imsa_get_ims_services_status_output_ims_ue_to_tas_service_registration_technology_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_STATUS:
            tlv_type_str = "IMS Video Share Service Status";
            translated_value = qmi_message_imsa_get_ims_services_status_output_ims_video_share_service_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_REGISTRATION_TECHNOLOGY:
            tlv_type_str = "IMS Video Share Service Registration Technology";
            translated_value = qmi_message_imsa_get_ims_services_status_output_ims_video_share_service_registration_technology_get_printable (
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
message_get_ims_services_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get IMS Services Status\" (0x0021)\n",
                            line_prefix);

    {
        struct message_get_ims_services_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_ims_services_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageImsaGetImsServicesStatusOutput *
qmi_message_imsa_get_ims_services_status_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageImsaGetImsServicesStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS);

    self = g_slice_new0 (QmiMessageImsaGetImsServicesStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_imsa_get_ims_services_status_output_unref (self);
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
                qmi_message_imsa_get_ims_services_status_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_SMS_SERVICE_STATUS, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_services_status_output_ims_sms_service_status_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsa_get_ims_services_status_output_ims_sms_service_status_out;
                self->arg_ims_sms_service_status = (QmiImsaServiceStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS SMS Service Status' TLV", offset);
            }

            self->arg_ims_sms_service_status_set = TRUE;

qmi_message_imsa_get_ims_services_status_output_ims_sms_service_status_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VOICE_SERVICE_STATUS, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_services_status_output_ims_voice_service_status_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsa_get_ims_services_status_output_ims_voice_service_status_out;
                self->arg_ims_voice_service_status = (QmiImsaServiceStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Voice Service Status' TLV", offset);
            }

            self->arg_ims_voice_service_status_set = TRUE;

qmi_message_imsa_get_ims_services_status_output_ims_voice_service_status_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_STATUS, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_services_status_output_ims_video_telephony_service_status_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsa_get_ims_services_status_output_ims_video_telephony_service_status_out;
                self->arg_ims_video_telephony_service_status = (QmiImsaServiceStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Video Telephony Service Status' TLV", offset);
            }

            self->arg_ims_video_telephony_service_status_set = TRUE;

qmi_message_imsa_get_ims_services_status_output_ims_video_telephony_service_status_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_SMS_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_services_status_output_ims_sms_service_registration_technology_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsa_get_ims_services_status_output_ims_sms_service_registration_technology_out;
                self->arg_ims_sms_service_registration_technology = (QmiImsaRegistrationTechnology)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS SMS Service Registration Technology' TLV", offset);
            }

            self->arg_ims_sms_service_registration_technology_set = TRUE;

qmi_message_imsa_get_ims_services_status_output_ims_sms_service_registration_technology_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VOICE_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_services_status_output_ims_voice_service_registration_technology_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsa_get_ims_services_status_output_ims_voice_service_registration_technology_out;
                self->arg_ims_voice_service_registration_technology = (QmiImsaRegistrationTechnology)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Voice Service Registration Technology' TLV", offset);
            }

            self->arg_ims_voice_service_registration_technology_set = TRUE;

qmi_message_imsa_get_ims_services_status_output_ims_voice_service_registration_technology_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_TELEPHONY_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_services_status_output_ims_video_telephony_service_registration_technology_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsa_get_ims_services_status_output_ims_video_telephony_service_registration_technology_out;
                self->arg_ims_video_telephony_service_registration_technology = (QmiImsaRegistrationTechnology)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Video Telephony Service Registration Technology' TLV", offset);
            }

            self->arg_ims_video_telephony_service_registration_technology_set = TRUE;

qmi_message_imsa_get_ims_services_status_output_ims_video_telephony_service_registration_technology_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_STATUS, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_services_status_output_ims_ue_to_tas_service_status_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsa_get_ims_services_status_output_ims_ue_to_tas_service_status_out;
                self->arg_ims_ue_to_tas_service_status = (QmiImsaServiceStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS UE to TAS Service Status' TLV", offset);
            }

            self->arg_ims_ue_to_tas_service_status_set = TRUE;

qmi_message_imsa_get_ims_services_status_output_ims_ue_to_tas_service_status_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_UE_TO_TAS_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_services_status_output_ims_ue_to_tas_service_registration_technology_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsa_get_ims_services_status_output_ims_ue_to_tas_service_registration_technology_out;
                self->arg_ims_ue_to_tas_service_registration_technology = (QmiImsaRegistrationTechnology)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS UE to TAS Service Registration Technology' TLV", offset);
            }

            self->arg_ims_ue_to_tas_service_registration_technology_set = TRUE;

qmi_message_imsa_get_ims_services_status_output_ims_ue_to_tas_service_registration_technology_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_STATUS, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_services_status_output_ims_video_share_service_status_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsa_get_ims_services_status_output_ims_video_share_service_status_out;
                self->arg_ims_video_share_service_status = (QmiImsaServiceStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Video Share Service Status' TLV", offset);
            }

            self->arg_ims_video_share_service_status_set = TRUE;

qmi_message_imsa_get_ims_services_status_output_ims_video_share_service_status_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS_OUTPUT_TLV_IMS_VIDEO_SHARE_SERVICE_REGISTRATION_TECHNOLOGY, NULL, NULL)) == 0) {
                goto qmi_message_imsa_get_ims_services_status_output_ims_video_share_service_registration_technology_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_imsa_get_ims_services_status_output_ims_video_share_service_registration_technology_out;
                self->arg_ims_video_share_service_registration_technology = (QmiImsaRegistrationTechnology)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IMS Video Share Service Registration Technology' TLV", offset);
            }

            self->arg_ims_video_share_service_registration_technology_set = TRUE;

qmi_message_imsa_get_ims_services_status_output_ims_video_share_service_registration_technology_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMSA Register Indications */


/* --- Input -- */

struct _QmiMessageImsaRegisterIndicationsInput {
    volatile gint ref_count;

    /* IMS Services Status Changed */
    gboolean arg_ims_services_status_changed_set;
    guint8 arg_ims_services_status_changed;

    /* IMS Registration Status Changed */
    gboolean arg_ims_registration_status_changed_set;
    guint8 arg_ims_registration_status_changed;
};

#define QMI_MESSAGE_IMSA_REGISTER_INDICATIONS_INPUT_TLV_IMS_SERVICES_STATUS_CHANGED 0x11
#define QMI_MESSAGE_IMSA_REGISTER_INDICATIONS_INPUT_TLV_IMS_REGISTRATION_STATUS_CHANGED 0x10

gboolean
qmi_message_imsa_register_indications_input_get_ims_services_status_changed (
    QmiMessageImsaRegisterIndicationsInput *self,
    gboolean *value_ims_services_status_changed,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_services_status_changed_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Services Status Changed' was not found in the message");
        return FALSE;
    }

    if (value_ims_services_status_changed)
        *value_ims_services_status_changed = (gboolean)(self->arg_ims_services_status_changed);

    return TRUE;
}

gboolean
qmi_message_imsa_register_indications_input_set_ims_services_status_changed (
    QmiMessageImsaRegisterIndicationsInput *self,
    gboolean value_ims_services_status_changed,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_services_status_changed = (guint8)(value_ims_services_status_changed);
    self->arg_ims_services_status_changed_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_imsa_register_indications_input_get_ims_registration_status_changed (
    QmiMessageImsaRegisterIndicationsInput *self,
    gboolean *value_ims_registration_status_changed,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ims_registration_status_changed_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IMS Registration Status Changed' was not found in the message");
        return FALSE;
    }

    if (value_ims_registration_status_changed)
        *value_ims_registration_status_changed = (gboolean)(self->arg_ims_registration_status_changed);

    return TRUE;
}

gboolean
qmi_message_imsa_register_indications_input_set_ims_registration_status_changed (
    QmiMessageImsaRegisterIndicationsInput *self,
    gboolean value_ims_registration_status_changed,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ims_registration_status_changed = (guint8)(value_ims_registration_status_changed);
    self->arg_ims_registration_status_changed_set = TRUE;

    return TRUE;
}

GType
qmi_message_imsa_register_indications_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsaRegisterIndicationsInput"),
                                          (GBoxedCopyFunc) qmi_message_imsa_register_indications_input_ref,
                                          (GBoxedFreeFunc) qmi_message_imsa_register_indications_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsaRegisterIndicationsInput *
qmi_message_imsa_register_indications_input_ref (QmiMessageImsaRegisterIndicationsInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_imsa_register_indications_input_unref (QmiMessageImsaRegisterIndicationsInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsaRegisterIndicationsInput, self);
    }
}

QmiMessageImsaRegisterIndicationsInput *
qmi_message_imsa_register_indications_input_new (void)
{
    QmiMessageImsaRegisterIndicationsInput *self;

    self = g_slice_new0 (QmiMessageImsaRegisterIndicationsInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_imsa_register_indications_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageImsaRegisterIndicationsInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_IMSA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_IMSA_REGISTER_INDICATIONS);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'IMS Services Status Changed' TLV */
    if (input->arg_ims_services_status_changed_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMSA_REGISTER_INDICATIONS_INPUT_TLV_IMS_SERVICES_STATUS_CHANGED, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS Services Status Changed': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_services_status_changed;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS Services Status Changed': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS Services Status Changed': ");
            return NULL;
        }
    }

    /* Try to add the 'IMS Registration Status Changed' TLV */
    if (input->arg_ims_registration_status_changed_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMSA_REGISTER_INDICATIONS_INPUT_TLV_IMS_REGISTRATION_STATUS_CHANGED, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IMS Registration Status Changed': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ims_registration_status_changed;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'IMS Registration Status Changed': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IMS Registration Status Changed': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageImsaRegisterIndicationsOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_IMSA_REGISTER_INDICATIONS_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_imsa_register_indications_output_get_result (
    QmiMessageImsaRegisterIndicationsOutput *self,
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
qmi_message_imsa_register_indications_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsaRegisterIndicationsOutput"),
                                          (GBoxedCopyFunc) qmi_message_imsa_register_indications_output_ref,
                                          (GBoxedFreeFunc) qmi_message_imsa_register_indications_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsaRegisterIndicationsOutput *
qmi_message_imsa_register_indications_output_ref (QmiMessageImsaRegisterIndicationsOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_imsa_register_indications_output_unref (QmiMessageImsaRegisterIndicationsOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsaRegisterIndicationsOutput, self);
    }
}

static gchar *
qmi_message_imsa_register_indications_input_ims_services_status_changed_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_REGISTER_INDICATIONS_INPUT_TLV_IMS_SERVICES_STATUS_CHANGED, NULL, NULL)) == 0)
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
qmi_message_imsa_register_indications_input_ims_registration_status_changed_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_REGISTER_INDICATIONS_INPUT_TLV_IMS_REGISTRATION_STATUS_CHANGED, NULL, NULL)) == 0)
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

struct message_register_indications_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_register_indications_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_register_indications_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_IMSA_REGISTER_INDICATIONS_INPUT_TLV_IMS_SERVICES_STATUS_CHANGED:
            tlv_type_str = "IMS Services Status Changed";
            translated_value = qmi_message_imsa_register_indications_input_ims_services_status_changed_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_IMSA_REGISTER_INDICATIONS_INPUT_TLV_IMS_REGISTRATION_STATUS_CHANGED:
            tlv_type_str = "IMS Registration Status Changed";
            translated_value = qmi_message_imsa_register_indications_input_ims_registration_status_changed_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_IMSA_REGISTER_INDICATIONS_OUTPUT_TLV_RESULT:
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
message_register_indications_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Register Indications\" (0x0022)\n",
                            line_prefix);

    {
        struct message_register_indications_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_register_indications_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageImsaRegisterIndicationsOutput *
qmi_message_imsa_register_indications_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageImsaRegisterIndicationsOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_IMSA_REGISTER_INDICATIONS);

    self = g_slice_new0 (QmiMessageImsaRegisterIndicationsOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_REGISTER_INDICATIONS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_imsa_register_indications_output_unref (self);
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
                qmi_message_imsa_register_indications_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMSA Bind */


/* --- Input -- */

struct _QmiMessageImsaBindInput {
    volatile gint ref_count;

    /* Binding */
    gboolean arg_binding_set;
    guint32 arg_binding;
};

#define QMI_MESSAGE_IMSA_BIND_INPUT_TLV_BINDING 0x10

gboolean
qmi_message_imsa_bind_input_get_binding (
    QmiMessageImsaBindInput *self,
    guint32 *value_binding,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_binding_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Binding' was not found in the message");
        return FALSE;
    }

    if (value_binding)
        *value_binding = self->arg_binding;

    return TRUE;
}

gboolean
qmi_message_imsa_bind_input_set_binding (
    QmiMessageImsaBindInput *self,
    guint32 value_binding,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_binding = value_binding;
    self->arg_binding_set = TRUE;

    return TRUE;
}

GType
qmi_message_imsa_bind_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsaBindInput"),
                                          (GBoxedCopyFunc) qmi_message_imsa_bind_input_ref,
                                          (GBoxedFreeFunc) qmi_message_imsa_bind_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsaBindInput *
qmi_message_imsa_bind_input_ref (QmiMessageImsaBindInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_imsa_bind_input_unref (QmiMessageImsaBindInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsaBindInput, self);
    }
}

QmiMessageImsaBindInput *
qmi_message_imsa_bind_input_new (void)
{
    QmiMessageImsaBindInput *self;

    self = g_slice_new0 (QmiMessageImsaBindInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_imsa_bind_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageImsaBindInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_IMSA,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_IMSA_BIND);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Binding' TLV */
    if (input->arg_binding_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_IMSA_BIND_INPUT_TLV_BINDING, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Binding': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_binding, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Binding': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Binding': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageImsaBindOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_IMSA_BIND_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_imsa_bind_output_get_result (
    QmiMessageImsaBindOutput *self,
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
qmi_message_imsa_bind_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageImsaBindOutput"),
                                          (GBoxedCopyFunc) qmi_message_imsa_bind_output_ref,
                                          (GBoxedFreeFunc) qmi_message_imsa_bind_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageImsaBindOutput *
qmi_message_imsa_bind_output_ref (QmiMessageImsaBindOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_imsa_bind_output_unref (QmiMessageImsaBindOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageImsaBindOutput, self);
    }
}

static gchar *
qmi_message_imsa_bind_input_binding_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_BIND_INPUT_TLV_BINDING, NULL, NULL)) == 0)
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

struct message_bind_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_bind_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_bind_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_IMSA_BIND_INPUT_TLV_BINDING:
            tlv_type_str = "Binding";
            translated_value = qmi_message_imsa_bind_input_binding_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_IMSA_BIND_OUTPUT_TLV_RESULT:
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
message_bind_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Bind\" (0x0033)\n",
                            line_prefix);

    {
        struct message_bind_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_bind_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageImsaBindOutput *
qmi_message_imsa_bind_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageImsaBindOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_IMSA_BIND);

    self = g_slice_new0 (QmiMessageImsaBindOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_IMSA_BIND_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_imsa_bind_output_unref (self);
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
                qmi_message_imsa_bind_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: IMSA */


gchar *
__qmi_message_imsa_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED:
            return indication_ims_registration_status_changed_get_printable (self, line_prefix);
        case QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED:
            return indication_ims_services_status_changed_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_IMSA_GET_IMS_REGISTRATION_STATUS:
                return message_get_ims_registration_status_get_printable (self, line_prefix);
            case QMI_MESSAGE_IMSA_GET_IMS_SERVICES_STATUS:
                return message_get_ims_services_status_get_printable (self, line_prefix);
            case QMI_MESSAGE_IMSA_REGISTER_INDICATIONS:
                return message_register_indications_get_printable (self, line_prefix);
            case QMI_MESSAGE_IMSA_BIND:
                return message_bind_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client IMSA */

G_DEFINE_TYPE (QmiClientImsa, qmi_client_imsa, QMI_TYPE_CLIENT)

enum {
    SIGNAL_IMS_REGISTRATION_STATUS_CHANGED,
    SIGNAL_IMS_SERVICES_STATUS_CHANGED,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED: {
            QmiIndicationImsaImsRegistrationStatusChangedOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_imsa_ims_registration_status_changed_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'IMS Registration Status Changed' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_IMS_REGISTRATION_STATUS_CHANGED], 0, output);
                qmi_indication_imsa_ims_registration_status_changed_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED: {
            QmiIndicationImsaImsServicesStatusChangedOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_imsa_ims_services_status_changed_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'IMS Services Status Changed' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_IMS_SERVICES_STATUS_CHANGED], 0, output);
                qmi_indication_imsa_ims_services_status_changed_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_imsa_init (QmiClientImsa *self)
{
}

static void
qmi_client_imsa_class_init (QmiClientImsaClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientImsa::ims-registration-status-changed:
     * @object: A #QmiClientImsa.
     * @output: A #QmiIndicationImsaImsRegistrationStatusChangedOutput.
     *
     * The ::ims-registration-status-changed signal gets emitted when a '<link linkend="libqmi-glib-IMSA-IMS-Registration-Status-Changed-indication.top_of_page">IMS Registration Status Changed</link>' indication is received.
     *
     * Since: 1.36
     */
    signals[SIGNAL_IMS_REGISTRATION_STATUS_CHANGED] =
        g_signal_new ("ims-registration-status-changed",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_IMSA_IMS_REGISTRATION_STATUS_CHANGED_OUTPUT);

    /**
     * QmiClientImsa::ims-services-status-changed:
     * @object: A #QmiClientImsa.
     * @output: A #QmiIndicationImsaImsServicesStatusChangedOutput.
     *
     * The ::ims-services-status-changed signal gets emitted when a '<link linkend="libqmi-glib-IMSA-IMS-Services-Status-Changed-indication.top_of_page">IMS Services Status Changed</link>' indication is received.
     *
     * Since: 1.36
     */
    signals[SIGNAL_IMS_SERVICES_STATUS_CHANGED] =
        g_signal_new ("ims-services-status-changed",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_IMSA_IMS_SERVICES_STATUS_CHANGED_OUTPUT);
}


QmiMessageImsaGetImsRegistrationStatusOutput *
qmi_client_imsa_get_ims_registration_status_finish (
    QmiClientImsa *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_ims_registration_status_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageImsaGetImsRegistrationStatusOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_imsa_get_ims_registration_status_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_imsa_get_ims_registration_status_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_imsa_get_ims_registration_status (
    QmiClientImsa *self,
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

    request = __qmi_message_imsa_get_ims_registration_status_request_create (
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
                             (GAsyncReadyCallback)get_ims_registration_status_ready,
                             task);
}


QmiMessageImsaGetImsServicesStatusOutput *
qmi_client_imsa_get_ims_services_status_finish (
    QmiClientImsa *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_ims_services_status_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageImsaGetImsServicesStatusOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_imsa_get_ims_services_status_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_imsa_get_ims_services_status_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_imsa_get_ims_services_status (
    QmiClientImsa *self,
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

    request = __qmi_message_imsa_get_ims_services_status_request_create (
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
                             (GAsyncReadyCallback)get_ims_services_status_ready,
                             task);
}


QmiMessageImsaRegisterIndicationsOutput *
qmi_client_imsa_register_indications_finish (
    QmiClientImsa *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
register_indications_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageImsaRegisterIndicationsOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_imsa_register_indications_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_imsa_register_indications_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_imsa_register_indications (
    QmiClientImsa *self,
    QmiMessageImsaRegisterIndicationsInput *input,
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

    request = __qmi_message_imsa_register_indications_request_create (
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
                             (GAsyncReadyCallback)register_indications_ready,
                             task);
}


QmiMessageImsaBindOutput *
qmi_client_imsa_bind_finish (
    QmiClientImsa *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
bind_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageImsaBindOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_imsa_bind_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_imsa_bind_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_imsa_bind (
    QmiClientImsa *self,
    QmiMessageImsaBindInput *input,
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

    request = __qmi_message_imsa_bind_request_create (
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
                             (GAsyncReadyCallback)bind_ready,
                             task);
}

