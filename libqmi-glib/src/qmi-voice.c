
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

#include "qmi-voice.h"
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
    QMI_MESSAGE_VOICE_INDICATION_REGISTER = 0x0003,
    QMI_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES = 0x001E,
    QMI_MESSAGE_VOICE_DIAL_CALL = 0x0020,
    QMI_MESSAGE_VOICE_END_CALL = 0x0021,
    QMI_MESSAGE_VOICE_ANSWER_CALL = 0x0022,
    QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO = 0x002F,
    QMI_MESSAGE_VOICE_MANAGE_CALLS = 0x0031,
    QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE = 0x0033,
    QMI_MESSAGE_VOICE_GET_CALL_WAITING = 0x0034,
    QMI_MESSAGE_VOICE_ORIGINATE_USSD = 0x003A,
    QMI_MESSAGE_VOICE_ANSWER_USSD = 0x003B,
    QMI_MESSAGE_VOICE_CANCEL_USSD = 0x003C,
    QMI_MESSAGE_VOICE_GET_CONFIG = 0x0041,
    QMI_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT = 0x0043,
    QMI_MESSAGE_VOICE_BURST_DTMF = 0x0028,
    QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF = 0x0029,
    QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF = 0x002A,
} QmiMessageVoice;


typedef enum {
    QMI_INDICATION_VOICE_ALL_CALL_STATUS = 0x002E,
    QMI_INDICATION_VOICE_SUPPLEMENTARY_SERVICE = 0x0032,
    QMI_INDICATION_VOICE_RELEASE_USSD = 0x003D,
    QMI_INDICATION_VOICE_USSD = 0x003E,
    QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT = 0x0043,
} QmiIndicationVoice;


/*****************************************************************************/
/* INDICATION: Qmi Indication VOICE All Call Status */


/* --- Output -- */

static void
__qmi_indication_voice_all_call_status_output_remote_party_number_call_clear (QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall *value)
{
    g_clear_pointer (&value->type, (GDestroyNotify)g_free);
}

static void
__qmi_indication_voice_all_call_status_output_remote_party_number_call_free (QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall *value)
{
    __qmi_indication_voice_all_call_status_output_remote_party_number_call_clear (value);
    g_slice_free (QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall, value);
}

static QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall *
__qmi_indication_voice_all_call_status_output_remote_party_number_call_new (void)
{
    return g_slice_new0 (QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall);
}

static QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall *
__qmi_indication_voice_all_call_status_output_remote_party_number_call_copy (const QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall *value)
{
    QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall *copy;

    copy = __qmi_indication_voice_all_call_status_output_remote_party_number_call_new ();
    copy->id = value->id;
    copy->presentation_indicator = value->presentation_indicator;
    copy->type = g_strdup (value->type);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall, qmi_indication_voice_all_call_status_output_remote_party_number_call, (GBoxedCopyFunc)__qmi_indication_voice_all_call_status_output_remote_party_number_call_copy, (GBoxedFreeFunc)__qmi_indication_voice_all_call_status_output_remote_party_number_call_free)

static void
__qmi_indication_voice_all_call_status_output_call_information_call_free (QmiIndicationVoiceAllCallStatusOutputCallInformationCall *value)
{
    g_slice_free (QmiIndicationVoiceAllCallStatusOutputCallInformationCall, value);
}

static QmiIndicationVoiceAllCallStatusOutputCallInformationCall *
__qmi_indication_voice_all_call_status_output_call_information_call_new (void)
{
    return g_slice_new0 (QmiIndicationVoiceAllCallStatusOutputCallInformationCall);
}

static QmiIndicationVoiceAllCallStatusOutputCallInformationCall *
__qmi_indication_voice_all_call_status_output_call_information_call_copy (const QmiIndicationVoiceAllCallStatusOutputCallInformationCall *value)
{
    QmiIndicationVoiceAllCallStatusOutputCallInformationCall *copy;

    copy = __qmi_indication_voice_all_call_status_output_call_information_call_new ();
    copy->id = value->id;
    copy->state = value->state;
    copy->type = value->type;
    copy->direction = value->direction;
    copy->mode = value->mode;
    copy->multipart_indicator = value->multipart_indicator;
    copy->als = value->als;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiIndicationVoiceAllCallStatusOutputCallInformationCall, qmi_indication_voice_all_call_status_output_call_information_call, (GBoxedCopyFunc)__qmi_indication_voice_all_call_status_output_call_information_call_copy, (GBoxedFreeFunc)__qmi_indication_voice_all_call_status_output_call_information_call_free)

struct _QmiIndicationVoiceAllCallStatusOutput {
    volatile gint ref_count;

    /* Remote Party Number */
    gboolean arg_remote_party_number_set;
    GArray *arg_remote_party_number;
    GPtrArray *arg_remote_party_number_ptr;

    /* Call Information */
    gboolean arg_call_information_set;
    GArray *arg_call_information;
    GPtrArray *arg_call_information_ptr;
};

#define QMI_INDICATION_VOICE_ALL_CALL_STATUS_OUTPUT_TLV_REMOTE_PARTY_NUMBER 0x10
#define QMI_INDICATION_VOICE_ALL_CALL_STATUS_OUTPUT_TLV_CALL_INFORMATION 0x01

gboolean
qmi_indication_voice_all_call_status_output_get_remote_party_number (
    QmiIndicationVoiceAllCallStatusOutput *self,
    GArray **value_remote_party_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_remote_party_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Remote Party Number' was not found in the message");
        return FALSE;
    }

    if (value_remote_party_number)
        *value_remote_party_number = self->arg_remote_party_number;

    return TRUE;
}

gboolean
qmi_indication_voice_all_call_status_output_get_remote_party_number_gir (
    QmiIndicationVoiceAllCallStatusOutput *self,
    GPtrArray **value_remote_party_number_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_remote_party_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Remote Party Number' was not found in the message");
        return FALSE;
    }

    if (value_remote_party_number_ptr) {
        if (!self->arg_remote_party_number_ptr) {
            {
                guint remote_party_number_i;

                self->arg_remote_party_number_ptr = g_ptr_array_new_full (self->arg_remote_party_number->len, (GDestroyNotify)__qmi_indication_voice_all_call_status_output_remote_party_number_call_free);
                for (remote_party_number_i = 0; remote_party_number_i < self->arg_remote_party_number->len; remote_party_number_i++) {
                    QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall *remote_party_number_aux_from;
                    QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall *remote_party_number_aux_to;

                    remote_party_number_aux_from = &g_array_index (self->arg_remote_party_number, QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall, remote_party_number_i);

                    remote_party_number_aux_to = __qmi_indication_voice_all_call_status_output_remote_party_number_call_new ();
                    remote_party_number_aux_to->id = (*remote_party_number_aux_from).id;
                    remote_party_number_aux_to->presentation_indicator = (*remote_party_number_aux_from).presentation_indicator;
                    remote_party_number_aux_to->type = g_strdup ((*remote_party_number_aux_from).type);

                    g_ptr_array_add (self->arg_remote_party_number_ptr, remote_party_number_aux_to);
                }
            }
        }
        *value_remote_party_number_ptr = self->arg_remote_party_number_ptr;
    }
    return TRUE;
}

gboolean
qmi_indication_voice_all_call_status_output_get_call_information (
    QmiIndicationVoiceAllCallStatusOutput *self,
    GArray **value_call_information,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call Information' was not found in the message");
        return FALSE;
    }

    if (value_call_information)
        *value_call_information = self->arg_call_information;

    return TRUE;
}

gboolean
qmi_indication_voice_all_call_status_output_get_call_information_gir (
    QmiIndicationVoiceAllCallStatusOutput *self,
    GPtrArray **value_call_information_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call Information' was not found in the message");
        return FALSE;
    }

    if (value_call_information_ptr) {
        if (!self->arg_call_information_ptr) {
            {
                guint call_information_i;

                self->arg_call_information_ptr = g_ptr_array_new_full (self->arg_call_information->len, (GDestroyNotify)__qmi_indication_voice_all_call_status_output_call_information_call_free);
                for (call_information_i = 0; call_information_i < self->arg_call_information->len; call_information_i++) {
                    QmiIndicationVoiceAllCallStatusOutputCallInformationCall *call_information_aux_from;
                    QmiIndicationVoiceAllCallStatusOutputCallInformationCall *call_information_aux_to;

                    call_information_aux_from = &g_array_index (self->arg_call_information, QmiIndicationVoiceAllCallStatusOutputCallInformationCall, call_information_i);

                    call_information_aux_to = __qmi_indication_voice_all_call_status_output_call_information_call_new ();
                    call_information_aux_to->id = (*call_information_aux_from).id;
                    call_information_aux_to->state = (*call_information_aux_from).state;
                    call_information_aux_to->type = (*call_information_aux_from).type;
                    call_information_aux_to->direction = (*call_information_aux_from).direction;
                    call_information_aux_to->mode = (*call_information_aux_from).mode;
                    call_information_aux_to->multipart_indicator = (*call_information_aux_from).multipart_indicator;
                    call_information_aux_to->als = (*call_information_aux_from).als;

                    g_ptr_array_add (self->arg_call_information_ptr, call_information_aux_to);
                }
            }
        }
        *value_call_information_ptr = self->arg_call_information_ptr;
    }
    return TRUE;
}

GType
qmi_indication_voice_all_call_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationVoiceAllCallStatusOutput"),
                                          (GBoxedCopyFunc) qmi_indication_voice_all_call_status_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_voice_all_call_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationVoiceAllCallStatusOutput *
qmi_indication_voice_all_call_status_output_ref (QmiIndicationVoiceAllCallStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_voice_all_call_status_output_unref (QmiIndicationVoiceAllCallStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_remote_party_number, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_remote_party_number, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_call_information, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_call_information, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiIndicationVoiceAllCallStatusOutput, self);
    }
}

static gchar *
qmi_indication_voice_all_call_status_output_remote_party_number_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ALL_CALL_STATUS_OUTPUT_TLV_REMOTE_PARTY_NUMBER, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint remote_party_number_i;
        guint8 remote_party_number_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(remote_party_number_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (remote_party_number_i = 0; remote_party_number_i < remote_party_number_n_items; remote_party_number_i++) {
            g_string_append_printf (printable, " [%u] = '", remote_party_number_i);
            g_string_append (printable, "[");
            g_string_append (printable, " id = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " presentation_indicator = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
#if defined  __QMI_VOICE_PRESENTATION_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_voice_presentation_get_string ((QmiVoicePresentation)tmp));
#elif defined  __QMI_VOICE_PRESENTATION_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_voice_presentation_build_string_from_mask ((QmiVoicePresentation)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiVoicePresentation
#endif
                } else {
                    g_string_append_printf (printable, "'###'");
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " type = '");

            {
                g_autofree gchar *tmp = NULL;

                if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append (printable, tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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
qmi_indication_voice_all_call_status_output_call_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ALL_CALL_STATUS_OUTPUT_TLV_CALL_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint call_information_i;
        guint8 call_information_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(call_information_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (call_information_i = 0; call_information_i < call_information_n_items; call_information_i++) {
            g_string_append_printf (printable, " [%u] = '", call_information_i);
            g_string_append (printable, "[");
            g_string_append (printable, " id = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " state = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_VOICE_CALL_STATE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_voice_call_state_get_string ((QmiVoiceCallState)tmp));
#elif defined  __QMI_VOICE_CALL_STATE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_voice_call_state_build_string_from_mask ((QmiVoiceCallState)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiVoiceCallState
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_VOICE_CALL_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_voice_call_type_get_string ((QmiVoiceCallType)tmp));
#elif defined  __QMI_VOICE_CALL_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_voice_call_type_build_string_from_mask ((QmiVoiceCallType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiVoiceCallType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " direction = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_VOICE_CALL_DIRECTION_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_voice_call_direction_get_string ((QmiVoiceCallDirection)tmp));
#elif defined  __QMI_VOICE_CALL_DIRECTION_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_voice_call_direction_build_string_from_mask ((QmiVoiceCallDirection)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiVoiceCallDirection
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " mode = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_VOICE_CALL_MODE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_voice_call_mode_get_string ((QmiVoiceCallMode)tmp));
#elif defined  __QMI_VOICE_CALL_MODE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_voice_call_mode_build_string_from_mask ((QmiVoiceCallMode)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiVoiceCallMode
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " multipart_indicator = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " als = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_VOICE_ALS_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_voice_als_get_string ((QmiVoiceAls)tmp));
#elif defined  __QMI_VOICE_ALS_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_voice_als_build_string_from_mask ((QmiVoiceAls)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiVoiceAls
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

struct indication_all_call_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_all_call_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_all_call_status_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_VOICE_ALL_CALL_STATUS_OUTPUT_TLV_REMOTE_PARTY_NUMBER:
            tlv_type_str = "Remote Party Number";
            translated_value = qmi_indication_voice_all_call_status_output_remote_party_number_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_INDICATION_VOICE_ALL_CALL_STATUS_OUTPUT_TLV_CALL_INFORMATION:
            tlv_type_str = "Call Information";
            translated_value = qmi_indication_voice_all_call_status_output_call_information_get_printable (
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
indication_all_call_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"All Call Status\" (0x002E)\n",
                            line_prefix);

    {
        struct indication_all_call_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_all_call_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationVoiceAllCallStatusOutput *
qmi_indication_voice_all_call_status_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationVoiceAllCallStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_VOICE_ALL_CALL_STATUS);

    self = g_slice_new0 (QmiIndicationVoiceAllCallStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ALL_CALL_STATUS_OUTPUT_TLV_REMOTE_PARTY_NUMBER, NULL, NULL)) == 0) {
                goto qmi_indication_voice_all_call_status_output_remote_party_number_out;
            }
            {
                guint remote_party_number_i;
                guint8 remote_party_number_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(remote_party_number_n_items), NULL))
                    goto qmi_indication_voice_all_call_status_output_remote_party_number_out;

                self->arg_remote_party_number = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall),
                    (guint)remote_party_number_n_items);

                g_array_set_clear_func (self->arg_remote_party_number, (GDestroyNotify)__qmi_indication_voice_all_call_status_output_remote_party_number_call_clear);

                for (remote_party_number_i = 0; remote_party_number_i < remote_party_number_n_items; remote_party_number_i++) {
                    QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall remote_party_number_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(remote_party_number_aux.id), NULL))
                        goto qmi_indication_voice_all_call_status_output_remote_party_number_out;
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_indication_voice_all_call_status_output_remote_party_number_out;
                        remote_party_number_aux.presentation_indicator = (QmiVoicePresentation)tmp;
                    }
                    if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &(remote_party_number_aux.type), NULL))
                        goto qmi_indication_voice_all_call_status_output_remote_party_number_out;
                    g_array_insert_val (self->arg_remote_party_number, remote_party_number_i, remote_party_number_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Remote Party Number' TLV", offset);
            }

            self->arg_remote_party_number_set = TRUE;

qmi_indication_voice_all_call_status_output_remote_party_number_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ALL_CALL_STATUS_OUTPUT_TLV_CALL_INFORMATION, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Call Information TLV: ");
                qmi_indication_voice_all_call_status_output_unref (self);
                return NULL;
            }
            {
                guint call_information_i;
                guint8 call_information_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(call_information_n_items), error))
                    goto qmi_indication_voice_all_call_status_output_call_information_out;

                self->arg_call_information = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiIndicationVoiceAllCallStatusOutputCallInformationCall),
                    (guint)call_information_n_items);

                for (call_information_i = 0; call_information_i < call_information_n_items; call_information_i++) {
                    QmiIndicationVoiceAllCallStatusOutputCallInformationCall call_information_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(call_information_aux.id), error))
                        goto qmi_indication_voice_all_call_status_output_call_information_out;
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                            goto qmi_indication_voice_all_call_status_output_call_information_out;
                        call_information_aux.state = (QmiVoiceCallState)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                            goto qmi_indication_voice_all_call_status_output_call_information_out;
                        call_information_aux.type = (QmiVoiceCallType)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                            goto qmi_indication_voice_all_call_status_output_call_information_out;
                        call_information_aux.direction = (QmiVoiceCallDirection)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                            goto qmi_indication_voice_all_call_status_output_call_information_out;
                        call_information_aux.mode = (QmiVoiceCallMode)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                            goto qmi_indication_voice_all_call_status_output_call_information_out;
                        call_information_aux.multipart_indicator = (gboolean)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                            goto qmi_indication_voice_all_call_status_output_call_information_out;
                        call_information_aux.als = (QmiVoiceAls)tmp;
                    }
                    g_array_insert_val (self->arg_call_information, call_information_i, call_information_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Call Information' TLV", offset);
            }

            self->arg_call_information_set = TRUE;

qmi_indication_voice_all_call_status_output_call_information_out:
            if (!self->arg_call_information_set) {
                qmi_indication_voice_all_call_status_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication VOICE Supplementary Service */


/* --- Output -- */

struct _QmiIndicationVoiceSupplementaryServiceOutput {
    volatile gint ref_count;

    /* Info */
    gboolean arg_info_set;
    guint8 arg_info_call_id;
    guint8 arg_info_notification_type;
};

#define QMI_INDICATION_VOICE_SUPPLEMENTARY_SERVICE_OUTPUT_TLV_INFO 0x01

gboolean
qmi_indication_voice_supplementary_service_output_get_info (
    QmiIndicationVoiceSupplementaryServiceOutput *self,
    guint8 *value_info_call_id,
    QmiVoiceSupplementaryServiceNotificationType *value_info_notification_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Info' was not found in the message");
        return FALSE;
    }

    if (value_info_call_id)
        *value_info_call_id = self->arg_info_call_id;
    if (value_info_notification_type)
        *value_info_notification_type = (QmiVoiceSupplementaryServiceNotificationType)(self->arg_info_notification_type);

    return TRUE;
}

GType
qmi_indication_voice_supplementary_service_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationVoiceSupplementaryServiceOutput"),
                                          (GBoxedCopyFunc) qmi_indication_voice_supplementary_service_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_voice_supplementary_service_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationVoiceSupplementaryServiceOutput *
qmi_indication_voice_supplementary_service_output_ref (QmiIndicationVoiceSupplementaryServiceOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_voice_supplementary_service_output_unref (QmiIndicationVoiceSupplementaryServiceOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationVoiceSupplementaryServiceOutput, self);
    }
}

static gchar *
qmi_indication_voice_supplementary_service_output_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_SUPPLEMENTARY_SERVICE_OUTPUT_TLV_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " call_id = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " notification_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_SUPPLEMENTARY_SERVICE_NOTIFICATION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_supplementary_service_notification_type_get_string ((QmiVoiceSupplementaryServiceNotificationType)tmp));
#elif defined  __QMI_VOICE_SUPPLEMENTARY_SERVICE_NOTIFICATION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_supplementary_service_notification_type_build_string_from_mask ((QmiVoiceSupplementaryServiceNotificationType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceSupplementaryServiceNotificationType
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

struct indication_supplementary_service_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_supplementary_service_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_supplementary_service_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_VOICE_SUPPLEMENTARY_SERVICE_OUTPUT_TLV_INFO:
            tlv_type_str = "Info";
            translated_value = qmi_indication_voice_supplementary_service_output_info_get_printable (
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
indication_supplementary_service_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Supplementary Service\" (0x0032)\n",
                            line_prefix);

    {
        struct indication_supplementary_service_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_supplementary_service_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationVoiceSupplementaryServiceOutput *
qmi_indication_voice_supplementary_service_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationVoiceSupplementaryServiceOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_VOICE_SUPPLEMENTARY_SERVICE);

    self = g_slice_new0 (QmiIndicationVoiceSupplementaryServiceOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_SUPPLEMENTARY_SERVICE_OUTPUT_TLV_INFO, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Info TLV: ");
                qmi_indication_voice_supplementary_service_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_info_call_id), error))
                goto qmi_indication_voice_supplementary_service_output_info_out;
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_indication_voice_supplementary_service_output_info_out;
                self->arg_info_notification_type = (QmiVoiceSupplementaryServiceNotificationType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Info' TLV", offset);
            }

            self->arg_info_set = TRUE;

qmi_indication_voice_supplementary_service_output_info_out:
            if (!self->arg_info_set) {
                qmi_indication_voice_supplementary_service_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication VOICE Release USSD */


/* --- Output -- */

/* Note: no fields in the Output container */

static gchar *
indication_release_ussd_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Release USSD\" (0x003D)\n",
                            line_prefix);

    return g_string_free (printable, FALSE);
}

/*****************************************************************************/
/* INDICATION: Qmi Indication VOICE USSD */


/* --- Output -- */

struct _QmiIndicationVoiceUssdOutput {
    volatile gint ref_count;

    /* USS Data UTF16 */
    gboolean arg_uss_data_utf16_set;
    GArray *arg_uss_data_utf16;

    /* USS Data */
    gboolean arg_uss_data_set;
    guint8 arg_uss_data_data_coding_scheme;
    GArray *arg_uss_data_data;

    /* User Action */
    gboolean arg_user_action_set;
    guint8 arg_user_action;
};

#define QMI_INDICATION_VOICE_USSD_OUTPUT_TLV_USS_DATA_UTF16 0x11
#define QMI_INDICATION_VOICE_USSD_OUTPUT_TLV_USS_DATA 0x10
#define QMI_INDICATION_VOICE_USSD_OUTPUT_TLV_USER_ACTION 0x01

gboolean
qmi_indication_voice_ussd_output_get_uss_data_utf16 (
    QmiIndicationVoiceUssdOutput *self,
    GArray **value_uss_data_utf16,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uss_data_utf16_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'USS Data UTF16' was not found in the message");
        return FALSE;
    }

    if (value_uss_data_utf16)
        *value_uss_data_utf16 = self->arg_uss_data_utf16;

    return TRUE;
}

gboolean
qmi_indication_voice_ussd_output_get_uss_data (
    QmiIndicationVoiceUssdOutput *self,
    QmiVoiceUssDataCodingScheme *value_uss_data_data_coding_scheme,
    GArray **value_uss_data_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uss_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'USS Data' was not found in the message");
        return FALSE;
    }

    if (value_uss_data_data_coding_scheme)
        *value_uss_data_data_coding_scheme = (QmiVoiceUssDataCodingScheme)(self->arg_uss_data_data_coding_scheme);
    if (value_uss_data_data)
        *value_uss_data_data = self->arg_uss_data_data;

    return TRUE;
}

gboolean
qmi_indication_voice_ussd_output_get_user_action (
    QmiIndicationVoiceUssdOutput *self,
    QmiVoiceUserAction *value_user_action,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_user_action_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'User Action' was not found in the message");
        return FALSE;
    }

    if (value_user_action)
        *value_user_action = (QmiVoiceUserAction)(self->arg_user_action);

    return TRUE;
}

GType
qmi_indication_voice_ussd_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationVoiceUssdOutput"),
                                          (GBoxedCopyFunc) qmi_indication_voice_ussd_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_voice_ussd_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationVoiceUssdOutput *
qmi_indication_voice_ussd_output_ref (QmiIndicationVoiceUssdOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_voice_ussd_output_unref (QmiIndicationVoiceUssdOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_uss_data_utf16, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_uss_data_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiIndicationVoiceUssdOutput, self);
    }
}

static gchar *
qmi_indication_voice_ussd_output_uss_data_utf16_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_USSD_OUTPUT_TLV_USS_DATA_UTF16, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint uss_data_utf16_i;
        guint8 uss_data_utf16_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(uss_data_utf16_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (uss_data_utf16_i = 0; uss_data_utf16_i < uss_data_utf16_n_items; uss_data_utf16_i++) {
            g_string_append_printf (printable, " [%u] = '", uss_data_utf16_i);

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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
qmi_indication_voice_ussd_output_uss_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_USSD_OUTPUT_TLV_USS_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " data_coding_scheme = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_USS_DATA_CODING_SCHEME_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_uss_data_coding_scheme_get_string ((QmiVoiceUssDataCodingScheme)tmp));
#elif defined  __QMI_VOICE_USS_DATA_CODING_SCHEME_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_uss_data_coding_scheme_build_string_from_mask ((QmiVoiceUssDataCodingScheme)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceUssDataCodingScheme
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " data = '");
    {
        guint data_i;
        guint8 data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (data_i = 0; data_i < data_n_items; data_i++) {
            g_string_append_printf (printable, " [%u] = '", data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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
qmi_indication_voice_ussd_output_user_action_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_USSD_OUTPUT_TLV_USER_ACTION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_USER_ACTION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_user_action_get_string ((QmiVoiceUserAction)tmp));
#elif defined  __QMI_VOICE_USER_ACTION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_user_action_build_string_from_mask ((QmiVoiceUserAction)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceUserAction
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

struct indication_ussd_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_ussd_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_ussd_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_VOICE_USSD_OUTPUT_TLV_USS_DATA_UTF16:
            tlv_type_str = "USS Data UTF16";
            translated_value = qmi_indication_voice_ussd_output_uss_data_utf16_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_INDICATION_VOICE_USSD_OUTPUT_TLV_USS_DATA:
            tlv_type_str = "USS Data";
            translated_value = qmi_indication_voice_ussd_output_uss_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_INDICATION_VOICE_USSD_OUTPUT_TLV_USER_ACTION:
            tlv_type_str = "User Action";
            translated_value = qmi_indication_voice_ussd_output_user_action_get_printable (
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
indication_ussd_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"USSD\" (0x003E)\n",
                            line_prefix);

    {
        struct indication_ussd_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_ussd_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationVoiceUssdOutput *
qmi_indication_voice_ussd_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationVoiceUssdOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_VOICE_USSD);

    self = g_slice_new0 (QmiIndicationVoiceUssdOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_USSD_OUTPUT_TLV_USS_DATA_UTF16, NULL, NULL)) == 0) {
                goto qmi_indication_voice_ussd_output_uss_data_utf16_out;
            }
            {
                guint uss_data_utf16_i;
                guint8 uss_data_utf16_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(uss_data_utf16_n_items), NULL))
                    goto qmi_indication_voice_ussd_output_uss_data_utf16_out;

                self->arg_uss_data_utf16 = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint16),
                    (guint)uss_data_utf16_n_items);

                for (uss_data_utf16_i = 0; uss_data_utf16_i < uss_data_utf16_n_items; uss_data_utf16_i++) {
                    guint16 uss_data_utf16_aux;

                    if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(uss_data_utf16_aux), NULL))
                        goto qmi_indication_voice_ussd_output_uss_data_utf16_out;
                    g_array_insert_val (self->arg_uss_data_utf16, uss_data_utf16_i, uss_data_utf16_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'USS Data UTF16' TLV", offset);
            }

            self->arg_uss_data_utf16_set = TRUE;

qmi_indication_voice_ussd_output_uss_data_utf16_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_USSD_OUTPUT_TLV_USS_DATA, NULL, NULL)) == 0) {
                goto qmi_indication_voice_ussd_output_uss_data_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_voice_ussd_output_uss_data_out;
                self->arg_uss_data_data_coding_scheme = (QmiVoiceUssDataCodingScheme)tmp;
            }
            {
                guint data_i;
                guint8 data_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_n_items), NULL))
                    goto qmi_indication_voice_ussd_output_uss_data_out;

                self->arg_uss_data_data = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)data_n_items);

                for (data_i = 0; data_i < data_n_items; data_i++) {
                    guint8 data_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_aux), NULL))
                        goto qmi_indication_voice_ussd_output_uss_data_out;
                    g_array_insert_val (self->arg_uss_data_data, data_i, data_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'USS Data' TLV", offset);
            }

            self->arg_uss_data_set = TRUE;

qmi_indication_voice_ussd_output_uss_data_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_USSD_OUTPUT_TLV_USER_ACTION, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory User Action TLV: ");
                qmi_indication_voice_ussd_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_indication_voice_ussd_output_user_action_out;
                self->arg_user_action = (QmiVoiceUserAction)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'User Action' TLV", offset);
            }

            self->arg_user_action_set = TRUE;

qmi_indication_voice_ussd_output_user_action_out:
            if (!self->arg_user_action_set) {
                qmi_indication_voice_ussd_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication VOICE Originate USSD No Wait */


/* --- Output -- */

struct _QmiIndicationVoiceOriginateUssdNoWaitOutput {
    volatile gint ref_count;

    /* USS Data UTF16 */
    gboolean arg_uss_data_utf16_set;
    GArray *arg_uss_data_utf16;

    /* Alpha Identifier */
    gboolean arg_alpha_identifier_set;
    guint8 arg_alpha_identifier_data_coding_scheme;
    GArray *arg_alpha_identifier_alpha;

    /* USS Data */
    gboolean arg_uss_data_set;
    guint8 arg_uss_data_data_coding_scheme;
    GArray *arg_uss_data_data;

    /* Failure Cause */
    gboolean arg_failure_cause_set;
    guint16 arg_failure_cause;

    /* Error Code */
    gboolean arg_error_code_set;
    guint16 arg_error_code;
};

#define QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_USS_DATA_UTF16 0x14
#define QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_ALPHA_IDENTIFIER 0x13
#define QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_USS_DATA 0x12
#define QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_FAILURE_CAUSE 0x11
#define QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_ERROR_CODE 0x10

gboolean
qmi_indication_voice_originate_ussd_no_wait_output_get_uss_data_utf16 (
    QmiIndicationVoiceOriginateUssdNoWaitOutput *self,
    GArray **value_uss_data_utf16,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uss_data_utf16_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'USS Data UTF16' was not found in the message");
        return FALSE;
    }

    if (value_uss_data_utf16)
        *value_uss_data_utf16 = self->arg_uss_data_utf16;

    return TRUE;
}

gboolean
qmi_indication_voice_originate_ussd_no_wait_output_get_alpha_identifier (
    QmiIndicationVoiceOriginateUssdNoWaitOutput *self,
    QmiVoiceAlphaDataCodingScheme *value_alpha_identifier_data_coding_scheme,
    GArray **value_alpha_identifier_alpha,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_alpha_identifier_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Alpha Identifier' was not found in the message");
        return FALSE;
    }

    if (value_alpha_identifier_data_coding_scheme)
        *value_alpha_identifier_data_coding_scheme = (QmiVoiceAlphaDataCodingScheme)(self->arg_alpha_identifier_data_coding_scheme);
    if (value_alpha_identifier_alpha)
        *value_alpha_identifier_alpha = self->arg_alpha_identifier_alpha;

    return TRUE;
}

gboolean
qmi_indication_voice_originate_ussd_no_wait_output_get_uss_data (
    QmiIndicationVoiceOriginateUssdNoWaitOutput *self,
    QmiVoiceUssDataCodingScheme *value_uss_data_data_coding_scheme,
    GArray **value_uss_data_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uss_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'USS Data' was not found in the message");
        return FALSE;
    }

    if (value_uss_data_data_coding_scheme)
        *value_uss_data_data_coding_scheme = (QmiVoiceUssDataCodingScheme)(self->arg_uss_data_data_coding_scheme);
    if (value_uss_data_data)
        *value_uss_data_data = self->arg_uss_data_data;

    return TRUE;
}

gboolean
qmi_indication_voice_originate_ussd_no_wait_output_get_failure_cause (
    QmiIndicationVoiceOriginateUssdNoWaitOutput *self,
    QmiVoiceCallEndReason *value_failure_cause,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_failure_cause_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Failure Cause' was not found in the message");
        return FALSE;
    }

    if (value_failure_cause)
        *value_failure_cause = (QmiVoiceCallEndReason)(self->arg_failure_cause);

    return TRUE;
}

gboolean
qmi_indication_voice_originate_ussd_no_wait_output_get_error_code (
    QmiIndicationVoiceOriginateUssdNoWaitOutput *self,
    guint16 *value_error_code,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_error_code_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Error Code' was not found in the message");
        return FALSE;
    }

    if (value_error_code)
        *value_error_code = self->arg_error_code;

    return TRUE;
}

GType
qmi_indication_voice_originate_ussd_no_wait_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationVoiceOriginateUssdNoWaitOutput"),
                                          (GBoxedCopyFunc) qmi_indication_voice_originate_ussd_no_wait_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_voice_originate_ussd_no_wait_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationVoiceOriginateUssdNoWaitOutput *
qmi_indication_voice_originate_ussd_no_wait_output_ref (QmiIndicationVoiceOriginateUssdNoWaitOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_voice_originate_ussd_no_wait_output_unref (QmiIndicationVoiceOriginateUssdNoWaitOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_uss_data_utf16, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_alpha_identifier_alpha, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_uss_data_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiIndicationVoiceOriginateUssdNoWaitOutput, self);
    }
}

static gchar *
qmi_indication_voice_originate_ussd_no_wait_output_uss_data_utf16_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_USS_DATA_UTF16, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint uss_data_utf16_i;
        guint8 uss_data_utf16_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(uss_data_utf16_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (uss_data_utf16_i = 0; uss_data_utf16_i < uss_data_utf16_n_items; uss_data_utf16_i++) {
            g_string_append_printf (printable, " [%u] = '", uss_data_utf16_i);

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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
qmi_indication_voice_originate_ussd_no_wait_output_alpha_identifier_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_ALPHA_IDENTIFIER, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " data_coding_scheme = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_ALPHA_DATA_CODING_SCHEME_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_alpha_data_coding_scheme_get_string ((QmiVoiceAlphaDataCodingScheme)tmp));
#elif defined  __QMI_VOICE_ALPHA_DATA_CODING_SCHEME_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_alpha_data_coding_scheme_build_string_from_mask ((QmiVoiceAlphaDataCodingScheme)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceAlphaDataCodingScheme
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " alpha = '");
    {
        guint alpha_i;
        guint8 alpha_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(alpha_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (alpha_i = 0; alpha_i < alpha_n_items; alpha_i++) {
            g_string_append_printf (printable, " [%u] = '", alpha_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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
qmi_indication_voice_originate_ussd_no_wait_output_uss_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_USS_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " data_coding_scheme = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_USS_DATA_CODING_SCHEME_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_uss_data_coding_scheme_get_string ((QmiVoiceUssDataCodingScheme)tmp));
#elif defined  __QMI_VOICE_USS_DATA_CODING_SCHEME_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_uss_data_coding_scheme_build_string_from_mask ((QmiVoiceUssDataCodingScheme)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceUssDataCodingScheme
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " data = '");
    {
        guint data_i;
        guint8 data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (data_i = 0; data_i < data_n_items; data_i++) {
            g_string_append_printf (printable, " [%u] = '", data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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
qmi_indication_voice_originate_ussd_no_wait_output_failure_cause_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_FAILURE_CAUSE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_CALL_END_REASON_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_call_end_reason_get_string ((QmiVoiceCallEndReason)tmp));
#elif defined  __QMI_VOICE_CALL_END_REASON_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_call_end_reason_build_string_from_mask ((QmiVoiceCallEndReason)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceCallEndReason
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
qmi_indication_voice_originate_ussd_no_wait_output_error_code_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_ERROR_CODE, NULL, NULL)) == 0)
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

struct indication_originate_ussd_no_wait_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_originate_ussd_no_wait_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_originate_ussd_no_wait_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_USS_DATA_UTF16:
            tlv_type_str = "USS Data UTF16";
            translated_value = qmi_indication_voice_originate_ussd_no_wait_output_uss_data_utf16_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_ALPHA_IDENTIFIER:
            tlv_type_str = "Alpha Identifier";
            translated_value = qmi_indication_voice_originate_ussd_no_wait_output_alpha_identifier_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_USS_DATA:
            tlv_type_str = "USS Data";
            translated_value = qmi_indication_voice_originate_ussd_no_wait_output_uss_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_FAILURE_CAUSE:
            tlv_type_str = "Failure Cause";
            translated_value = qmi_indication_voice_originate_ussd_no_wait_output_failure_cause_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_ERROR_CODE:
            tlv_type_str = "Error Code";
            translated_value = qmi_indication_voice_originate_ussd_no_wait_output_error_code_get_printable (
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
indication_originate_ussd_no_wait_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Originate USSD No Wait\" (0x0043)\n",
                            line_prefix);

    {
        struct indication_originate_ussd_no_wait_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_originate_ussd_no_wait_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationVoiceOriginateUssdNoWaitOutput *
qmi_indication_voice_originate_ussd_no_wait_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationVoiceOriginateUssdNoWaitOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT);

    self = g_slice_new0 (QmiIndicationVoiceOriginateUssdNoWaitOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_USS_DATA_UTF16, NULL, NULL)) == 0) {
                goto qmi_indication_voice_originate_ussd_no_wait_output_uss_data_utf16_out;
            }
            {
                guint uss_data_utf16_i;
                guint8 uss_data_utf16_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(uss_data_utf16_n_items), NULL))
                    goto qmi_indication_voice_originate_ussd_no_wait_output_uss_data_utf16_out;

                self->arg_uss_data_utf16 = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint16),
                    (guint)uss_data_utf16_n_items);

                for (uss_data_utf16_i = 0; uss_data_utf16_i < uss_data_utf16_n_items; uss_data_utf16_i++) {
                    guint16 uss_data_utf16_aux;

                    if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(uss_data_utf16_aux), NULL))
                        goto qmi_indication_voice_originate_ussd_no_wait_output_uss_data_utf16_out;
                    g_array_insert_val (self->arg_uss_data_utf16, uss_data_utf16_i, uss_data_utf16_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'USS Data UTF16' TLV", offset);
            }

            self->arg_uss_data_utf16_set = TRUE;

qmi_indication_voice_originate_ussd_no_wait_output_uss_data_utf16_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_ALPHA_IDENTIFIER, NULL, NULL)) == 0) {
                goto qmi_indication_voice_originate_ussd_no_wait_output_alpha_identifier_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_voice_originate_ussd_no_wait_output_alpha_identifier_out;
                self->arg_alpha_identifier_data_coding_scheme = (QmiVoiceAlphaDataCodingScheme)tmp;
            }
            {
                guint alpha_i;
                guint8 alpha_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(alpha_n_items), NULL))
                    goto qmi_indication_voice_originate_ussd_no_wait_output_alpha_identifier_out;

                self->arg_alpha_identifier_alpha = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)alpha_n_items);

                for (alpha_i = 0; alpha_i < alpha_n_items; alpha_i++) {
                    guint8 alpha_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(alpha_aux), NULL))
                        goto qmi_indication_voice_originate_ussd_no_wait_output_alpha_identifier_out;
                    g_array_insert_val (self->arg_alpha_identifier_alpha, alpha_i, alpha_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Alpha Identifier' TLV", offset);
            }

            self->arg_alpha_identifier_set = TRUE;

qmi_indication_voice_originate_ussd_no_wait_output_alpha_identifier_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_USS_DATA, NULL, NULL)) == 0) {
                goto qmi_indication_voice_originate_ussd_no_wait_output_uss_data_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_voice_originate_ussd_no_wait_output_uss_data_out;
                self->arg_uss_data_data_coding_scheme = (QmiVoiceUssDataCodingScheme)tmp;
            }
            {
                guint data_i;
                guint8 data_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_n_items), NULL))
                    goto qmi_indication_voice_originate_ussd_no_wait_output_uss_data_out;

                self->arg_uss_data_data = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)data_n_items);

                for (data_i = 0; data_i < data_n_items; data_i++) {
                    guint8 data_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_aux), NULL))
                        goto qmi_indication_voice_originate_ussd_no_wait_output_uss_data_out;
                    g_array_insert_val (self->arg_uss_data_data, data_i, data_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'USS Data' TLV", offset);
            }

            self->arg_uss_data_set = TRUE;

qmi_indication_voice_originate_ussd_no_wait_output_uss_data_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_FAILURE_CAUSE, NULL, NULL)) == 0) {
                goto qmi_indication_voice_originate_ussd_no_wait_output_failure_cause_out;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_voice_originate_ussd_no_wait_output_failure_cause_out;
                self->arg_failure_cause = (QmiVoiceCallEndReason)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Failure Cause' TLV", offset);
            }

            self->arg_failure_cause_set = TRUE;

qmi_indication_voice_originate_ussd_no_wait_output_failure_cause_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_ERROR_CODE, NULL, NULL)) == 0) {
                goto qmi_indication_voice_originate_ussd_no_wait_output_error_code_out;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_error_code), NULL))
                goto qmi_indication_voice_originate_ussd_no_wait_output_error_code_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Error Code' TLV", offset);
            }

            self->arg_error_code_set = TRUE;

qmi_indication_voice_originate_ussd_no_wait_output_error_code_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Indication Register */


/* --- Input -- */

struct _QmiMessageVoiceIndicationRegisterInput {
    volatile gint ref_count;

    /* MT Page Miss Information Events */
    gboolean arg_mt_page_miss_information_events_set;
    guint8 arg_mt_page_miss_information_events;

    /* Extended Burst Type International Information Events */
    gboolean arg_extended_burst_type_international_information_events_set;
    guint8 arg_extended_burst_type_international_information_events;

    /* Conference Events */
    gboolean arg_conference_events_set;
    guint8 arg_conference_events;

    /* AOC Events */
    gboolean arg_aoc_events_set;
    guint8 arg_aoc_events;

    /* UUS Events */
    gboolean arg_uus_events_set;
    guint8 arg_uus_events;

    /* Modification Events */
    gboolean arg_modification_events_set;
    guint8 arg_modification_events;

    /* USSD Notification Events */
    gboolean arg_ussd_notification_events_set;
    guint8 arg_ussd_notification_events;

    /* Speech Codec Events */
    gboolean arg_speech_codec_events_set;
    guint8 arg_speech_codec_events;

    /* Handover Events */
    gboolean arg_handover_events_set;
    guint8 arg_handover_events;

    /* Call Notification Events */
    gboolean arg_call_notification_events_set;
    guint8 arg_call_notification_events;

    /* Supplementary Service Notification Events */
    gboolean arg_supplementary_service_notification_events_set;
    guint8 arg_supplementary_service_notification_events;

    /* Voice Privacy Events */
    gboolean arg_voice_privacy_events_set;
    guint8 arg_voice_privacy_events;

    /* DTMF Events */
    gboolean arg_dtmf_events_set;
    guint8 arg_dtmf_events;
};

#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_MT_PAGE_MISS_INFORMATION_EVENTS 0x1D
#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_EXTENDED_BURST_TYPE_INTERNATIONAL_INFORMATION_EVENTS 0x1C
#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_CONFERENCE_EVENTS 0x1B
#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_AOC_EVENTS 0x1A
#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_UUS_EVENTS 0x19
#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_MODIFICATION_EVENTS 0x18
#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_USSD_NOTIFICATION_EVENTS 0x16
#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_SPEECH_CODEC_EVENTS 0x15
#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_HANDOVER_EVENTS 0x14
#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_CALL_NOTIFICATION_EVENTS 0x13
#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_SUPPLEMENTARY_SERVICE_NOTIFICATION_EVENTS 0x12
#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_VOICE_PRIVACY_EVENTS 0x11
#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_DTMF_EVENTS 0x10

gboolean
qmi_message_voice_indication_register_input_get_mt_page_miss_information_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_mt_page_miss_information_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_mt_page_miss_information_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'MT Page Miss Information Events' was not found in the message");
        return FALSE;
    }

    if (value_mt_page_miss_information_events)
        *value_mt_page_miss_information_events = (gboolean)(self->arg_mt_page_miss_information_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_mt_page_miss_information_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_mt_page_miss_information_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_mt_page_miss_information_events = (guint8)(value_mt_page_miss_information_events);
    self->arg_mt_page_miss_information_events_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_get_extended_burst_type_international_information_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_extended_burst_type_international_information_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_extended_burst_type_international_information_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Extended Burst Type International Information Events' was not found in the message");
        return FALSE;
    }

    if (value_extended_burst_type_international_information_events)
        *value_extended_burst_type_international_information_events = (gboolean)(self->arg_extended_burst_type_international_information_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_extended_burst_type_international_information_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_extended_burst_type_international_information_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_extended_burst_type_international_information_events = (guint8)(value_extended_burst_type_international_information_events);
    self->arg_extended_burst_type_international_information_events_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_get_conference_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_conference_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_conference_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Conference Events' was not found in the message");
        return FALSE;
    }

    if (value_conference_events)
        *value_conference_events = (gboolean)(self->arg_conference_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_conference_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_conference_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_conference_events = (guint8)(value_conference_events);
    self->arg_conference_events_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_get_aoc_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_aoc_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_aoc_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'AOC Events' was not found in the message");
        return FALSE;
    }

    if (value_aoc_events)
        *value_aoc_events = (gboolean)(self->arg_aoc_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_aoc_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_aoc_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_aoc_events = (guint8)(value_aoc_events);
    self->arg_aoc_events_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_get_uus_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_uus_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uus_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'UUS Events' was not found in the message");
        return FALSE;
    }

    if (value_uus_events)
        *value_uus_events = (gboolean)(self->arg_uus_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_uus_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_uus_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_uus_events = (guint8)(value_uus_events);
    self->arg_uus_events_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_get_modification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_modification_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_modification_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Modification Events' was not found in the message");
        return FALSE;
    }

    if (value_modification_events)
        *value_modification_events = (gboolean)(self->arg_modification_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_modification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_modification_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_modification_events = (guint8)(value_modification_events);
    self->arg_modification_events_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_get_ussd_notification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_ussd_notification_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ussd_notification_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'USSD Notification Events' was not found in the message");
        return FALSE;
    }

    if (value_ussd_notification_events)
        *value_ussd_notification_events = (gboolean)(self->arg_ussd_notification_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_ussd_notification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_ussd_notification_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ussd_notification_events = (guint8)(value_ussd_notification_events);
    self->arg_ussd_notification_events_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_get_speech_codec_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_speech_codec_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_speech_codec_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Speech Codec Events' was not found in the message");
        return FALSE;
    }

    if (value_speech_codec_events)
        *value_speech_codec_events = (gboolean)(self->arg_speech_codec_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_speech_codec_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_speech_codec_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_speech_codec_events = (guint8)(value_speech_codec_events);
    self->arg_speech_codec_events_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_get_handover_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_handover_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_handover_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Handover Events' was not found in the message");
        return FALSE;
    }

    if (value_handover_events)
        *value_handover_events = (gboolean)(self->arg_handover_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_handover_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_handover_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_handover_events = (guint8)(value_handover_events);
    self->arg_handover_events_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_get_call_notification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_call_notification_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_notification_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call Notification Events' was not found in the message");
        return FALSE;
    }

    if (value_call_notification_events)
        *value_call_notification_events = (gboolean)(self->arg_call_notification_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_call_notification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_call_notification_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_call_notification_events = (guint8)(value_call_notification_events);
    self->arg_call_notification_events_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_get_supplementary_service_notification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_supplementary_service_notification_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_supplementary_service_notification_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Supplementary Service Notification Events' was not found in the message");
        return FALSE;
    }

    if (value_supplementary_service_notification_events)
        *value_supplementary_service_notification_events = (gboolean)(self->arg_supplementary_service_notification_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_supplementary_service_notification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_supplementary_service_notification_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_supplementary_service_notification_events = (guint8)(value_supplementary_service_notification_events);
    self->arg_supplementary_service_notification_events_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_get_voice_privacy_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_voice_privacy_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_voice_privacy_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Voice Privacy Events' was not found in the message");
        return FALSE;
    }

    if (value_voice_privacy_events)
        *value_voice_privacy_events = (gboolean)(self->arg_voice_privacy_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_voice_privacy_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_voice_privacy_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_voice_privacy_events = (guint8)(value_voice_privacy_events);
    self->arg_voice_privacy_events_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_get_dtmf_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_dtmf_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_dtmf_events_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'DTMF Events' was not found in the message");
        return FALSE;
    }

    if (value_dtmf_events)
        *value_dtmf_events = (gboolean)(self->arg_dtmf_events);

    return TRUE;
}

gboolean
qmi_message_voice_indication_register_input_set_dtmf_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_dtmf_events,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_dtmf_events = (guint8)(value_dtmf_events);
    self->arg_dtmf_events_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_indication_register_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceIndicationRegisterInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_indication_register_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_indication_register_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceIndicationRegisterInput *
qmi_message_voice_indication_register_input_ref (QmiMessageVoiceIndicationRegisterInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_indication_register_input_unref (QmiMessageVoiceIndicationRegisterInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceIndicationRegisterInput, self);
    }
}

QmiMessageVoiceIndicationRegisterInput *
qmi_message_voice_indication_register_input_new (void)
{
    QmiMessageVoiceIndicationRegisterInput *self;

    self = g_slice_new0 (QmiMessageVoiceIndicationRegisterInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_indication_register_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceIndicationRegisterInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_INDICATION_REGISTER);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'MT Page Miss Information Events' TLV */
    if (input->arg_mt_page_miss_information_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_MT_PAGE_MISS_INFORMATION_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'MT Page Miss Information Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_mt_page_miss_information_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'MT Page Miss Information Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'MT Page Miss Information Events': ");
            return NULL;
        }
    }

    /* Try to add the 'Extended Burst Type International Information Events' TLV */
    if (input->arg_extended_burst_type_international_information_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_EXTENDED_BURST_TYPE_INTERNATIONAL_INFORMATION_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Extended Burst Type International Information Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_extended_burst_type_international_information_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Extended Burst Type International Information Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Extended Burst Type International Information Events': ");
            return NULL;
        }
    }

    /* Try to add the 'Conference Events' TLV */
    if (input->arg_conference_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_CONFERENCE_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Conference Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_conference_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Conference Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Conference Events': ");
            return NULL;
        }
    }

    /* Try to add the 'AOC Events' TLV */
    if (input->arg_aoc_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_AOC_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'AOC Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_aoc_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'AOC Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'AOC Events': ");
            return NULL;
        }
    }

    /* Try to add the 'UUS Events' TLV */
    if (input->arg_uus_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_UUS_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'UUS Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_uus_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'UUS Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'UUS Events': ");
            return NULL;
        }
    }

    /* Try to add the 'Modification Events' TLV */
    if (input->arg_modification_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_MODIFICATION_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Modification Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_modification_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Modification Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Modification Events': ");
            return NULL;
        }
    }

    /* Try to add the 'USSD Notification Events' TLV */
    if (input->arg_ussd_notification_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_USSD_NOTIFICATION_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'USSD Notification Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_ussd_notification_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'USSD Notification Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'USSD Notification Events': ");
            return NULL;
        }
    }

    /* Try to add the 'Speech Codec Events' TLV */
    if (input->arg_speech_codec_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_SPEECH_CODEC_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Speech Codec Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_speech_codec_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Speech Codec Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Speech Codec Events': ");
            return NULL;
        }
    }

    /* Try to add the 'Handover Events' TLV */
    if (input->arg_handover_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_HANDOVER_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Handover Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_handover_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Handover Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Handover Events': ");
            return NULL;
        }
    }

    /* Try to add the 'Call Notification Events' TLV */
    if (input->arg_call_notification_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_CALL_NOTIFICATION_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Call Notification Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_call_notification_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Call Notification Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Call Notification Events': ");
            return NULL;
        }
    }

    /* Try to add the 'Supplementary Service Notification Events' TLV */
    if (input->arg_supplementary_service_notification_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_SUPPLEMENTARY_SERVICE_NOTIFICATION_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Supplementary Service Notification Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_supplementary_service_notification_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Supplementary Service Notification Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Supplementary Service Notification Events': ");
            return NULL;
        }
    }

    /* Try to add the 'Voice Privacy Events' TLV */
    if (input->arg_voice_privacy_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_VOICE_PRIVACY_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Voice Privacy Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_voice_privacy_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Voice Privacy Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Voice Privacy Events': ");
            return NULL;
        }
    }

    /* Try to add the 'DTMF Events' TLV */
    if (input->arg_dtmf_events_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_DTMF_EVENTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'DTMF Events': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_dtmf_events;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'DTMF Events': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'DTMF Events': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceIndicationRegisterOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_VOICE_INDICATION_REGISTER_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_voice_indication_register_output_get_result (
    QmiMessageVoiceIndicationRegisterOutput *self,
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
qmi_message_voice_indication_register_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceIndicationRegisterOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_indication_register_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_indication_register_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceIndicationRegisterOutput *
qmi_message_voice_indication_register_output_ref (QmiMessageVoiceIndicationRegisterOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_indication_register_output_unref (QmiMessageVoiceIndicationRegisterOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceIndicationRegisterOutput, self);
    }
}

static gchar *
qmi_message_voice_indication_register_input_mt_page_miss_information_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_MT_PAGE_MISS_INFORMATION_EVENTS, NULL, NULL)) == 0)
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
qmi_message_voice_indication_register_input_extended_burst_type_international_information_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_EXTENDED_BURST_TYPE_INTERNATIONAL_INFORMATION_EVENTS, NULL, NULL)) == 0)
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
qmi_message_voice_indication_register_input_conference_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_CONFERENCE_EVENTS, NULL, NULL)) == 0)
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
qmi_message_voice_indication_register_input_aoc_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_AOC_EVENTS, NULL, NULL)) == 0)
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
qmi_message_voice_indication_register_input_uus_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_UUS_EVENTS, NULL, NULL)) == 0)
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
qmi_message_voice_indication_register_input_modification_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_MODIFICATION_EVENTS, NULL, NULL)) == 0)
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
qmi_message_voice_indication_register_input_ussd_notification_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_USSD_NOTIFICATION_EVENTS, NULL, NULL)) == 0)
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
qmi_message_voice_indication_register_input_speech_codec_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_SPEECH_CODEC_EVENTS, NULL, NULL)) == 0)
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
qmi_message_voice_indication_register_input_handover_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_HANDOVER_EVENTS, NULL, NULL)) == 0)
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
qmi_message_voice_indication_register_input_call_notification_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_CALL_NOTIFICATION_EVENTS, NULL, NULL)) == 0)
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
qmi_message_voice_indication_register_input_supplementary_service_notification_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_SUPPLEMENTARY_SERVICE_NOTIFICATION_EVENTS, NULL, NULL)) == 0)
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
qmi_message_voice_indication_register_input_voice_privacy_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_VOICE_PRIVACY_EVENTS, NULL, NULL)) == 0)
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
qmi_message_voice_indication_register_input_dtmf_events_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_DTMF_EVENTS, NULL, NULL)) == 0)
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_VOICE_INDICATION_REGISTER_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_MT_PAGE_MISS_INFORMATION_EVENTS:
            tlv_type_str = "MT Page Miss Information Events";
            translated_value = qmi_message_voice_indication_register_input_mt_page_miss_information_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_EXTENDED_BURST_TYPE_INTERNATIONAL_INFORMATION_EVENTS:
            tlv_type_str = "Extended Burst Type International Information Events";
            translated_value = qmi_message_voice_indication_register_input_extended_burst_type_international_information_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_CONFERENCE_EVENTS:
            tlv_type_str = "Conference Events";
            translated_value = qmi_message_voice_indication_register_input_conference_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_AOC_EVENTS:
            tlv_type_str = "AOC Events";
            translated_value = qmi_message_voice_indication_register_input_aoc_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_UUS_EVENTS:
            tlv_type_str = "UUS Events";
            translated_value = qmi_message_voice_indication_register_input_uus_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_MODIFICATION_EVENTS:
            tlv_type_str = "Modification Events";
            translated_value = qmi_message_voice_indication_register_input_modification_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_USSD_NOTIFICATION_EVENTS:
            tlv_type_str = "USSD Notification Events";
            translated_value = qmi_message_voice_indication_register_input_ussd_notification_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_SPEECH_CODEC_EVENTS:
            tlv_type_str = "Speech Codec Events";
            translated_value = qmi_message_voice_indication_register_input_speech_codec_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_HANDOVER_EVENTS:
            tlv_type_str = "Handover Events";
            translated_value = qmi_message_voice_indication_register_input_handover_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_CALL_NOTIFICATION_EVENTS:
            tlv_type_str = "Call Notification Events";
            translated_value = qmi_message_voice_indication_register_input_call_notification_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_SUPPLEMENTARY_SERVICE_NOTIFICATION_EVENTS:
            tlv_type_str = "Supplementary Service Notification Events";
            translated_value = qmi_message_voice_indication_register_input_supplementary_service_notification_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_VOICE_PRIVACY_EVENTS:
            tlv_type_str = "Voice Privacy Events";
            translated_value = qmi_message_voice_indication_register_input_voice_privacy_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_INPUT_TLV_DTMF_EVENTS:
            tlv_type_str = "DTMF Events";
            translated_value = qmi_message_voice_indication_register_input_dtmf_events_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_INDICATION_REGISTER_OUTPUT_TLV_RESULT:
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
message_indication_register_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Indication Register\" (0x0003)\n",
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

QmiMessageVoiceIndicationRegisterOutput *
qmi_message_voice_indication_register_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceIndicationRegisterOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_INDICATION_REGISTER);

    self = g_slice_new0 (QmiMessageVoiceIndicationRegisterOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_INDICATION_REGISTER_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_indication_register_output_unref (self);
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
                qmi_message_voice_indication_register_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_voice_get_supported_messages_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceGetSupportedMessagesOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* List */
    gboolean arg_list_set;
    GArray *arg_list;
};

#define QMI_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST 0x10

gboolean
qmi_message_voice_get_supported_messages_output_get_result (
    QmiMessageVoiceGetSupportedMessagesOutput *self,
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
qmi_message_voice_get_supported_messages_output_get_list (
    QmiMessageVoiceGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'List' was not found in the message");
        return FALSE;
    }

    if (value_list)
        *value_list = self->arg_list;

    return TRUE;
}

GType
qmi_message_voice_get_supported_messages_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceGetSupportedMessagesOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_get_supported_messages_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_get_supported_messages_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceGetSupportedMessagesOutput *
qmi_message_voice_get_supported_messages_output_ref (QmiMessageVoiceGetSupportedMessagesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_get_supported_messages_output_unref (QmiMessageVoiceGetSupportedMessagesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_list, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageVoiceGetSupportedMessagesOutput, self);
    }
}

static gchar *
qmi_message_voice_get_supported_messages_output_list_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint list_i;
        guint16 list_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(list_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (list_i = 0; list_i < list_n_items; list_i++) {
            g_string_append_printf (printable, " [%u] = '", list_i);

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

struct message_get_supported_messages_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_supported_messages_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_supported_messages_context *ctx)
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
        case QMI_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST:
            tlv_type_str = "List";
            translated_value = qmi_message_voice_get_supported_messages_output_list_get_printable (
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
message_get_supported_messages_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Supported Messages\" (0x001E)\n",
                            line_prefix);

    {
        struct message_get_supported_messages_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_supported_messages_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceGetSupportedMessagesOutput *
qmi_message_voice_get_supported_messages_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceGetSupportedMessagesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES);

    self = g_slice_new0 (QmiMessageVoiceGetSupportedMessagesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_get_supported_messages_output_unref (self);
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
                qmi_message_voice_get_supported_messages_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST, NULL, NULL)) == 0) {
                goto qmi_message_voice_get_supported_messages_output_list_out;
            }
            {
                guint list_i;
                guint16 list_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(list_n_items), NULL))
                    goto qmi_message_voice_get_supported_messages_output_list_out;

                self->arg_list = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)list_n_items);

                for (list_i = 0; list_i < list_n_items; list_i++) {
                    guint8 list_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(list_aux), NULL))
                        goto qmi_message_voice_get_supported_messages_output_list_out;
                    g_array_insert_val (self->arg_list, list_i, list_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'List' TLV", offset);
            }

            self->arg_list_set = TRUE;

qmi_message_voice_get_supported_messages_output_list_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Dial Call */


/* --- Input -- */

struct _QmiMessageVoiceDialCallInput {
    volatile gint ref_count;

    /* Calling Number */
    gboolean arg_calling_number_set;
    gchar *arg_calling_number;
};

#define QMI_MESSAGE_VOICE_DIAL_CALL_INPUT_TLV_CALLING_NUMBER 0x01

gboolean
qmi_message_voice_dial_call_input_get_calling_number (
    QmiMessageVoiceDialCallInput *self,
    const gchar **value_calling_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_calling_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Calling Number' was not found in the message");
        return FALSE;
    }

    if (value_calling_number)
        *value_calling_number = self->arg_calling_number;

    return TRUE;
}

gboolean
qmi_message_voice_dial_call_input_set_calling_number (
    QmiMessageVoiceDialCallInput *self,
    const gchar *value_calling_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_free (self->arg_calling_number);
    self->arg_calling_number = g_strdup (value_calling_number ? value_calling_number : "");
    self->arg_calling_number_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_dial_call_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceDialCallInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_dial_call_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_dial_call_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceDialCallInput *
qmi_message_voice_dial_call_input_ref (QmiMessageVoiceDialCallInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_dial_call_input_unref (QmiMessageVoiceDialCallInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_calling_number, (GDestroyNotify)g_free);
        g_slice_free (QmiMessageVoiceDialCallInput, self);
    }
}

QmiMessageVoiceDialCallInput *
qmi_message_voice_dial_call_input_new (void)
{
    QmiMessageVoiceDialCallInput *self;

    self = g_slice_new0 (QmiMessageVoiceDialCallInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_dial_call_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceDialCallInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_DIAL_CALL);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Dial Call' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Calling Number' TLV */
    if (input->arg_calling_number_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_DIAL_CALL_INPUT_TLV_CALLING_NUMBER, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Calling Number': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_string (self, 0, input->arg_calling_number, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'Calling Number': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Calling Number': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Calling Number' in message 'Dial Call'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceDialCallOutput {
    volatile gint ref_count;

    /* Call ID */
    gboolean arg_call_id_set;
    guint8 arg_call_id;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_VOICE_DIAL_CALL_OUTPUT_TLV_CALL_ID 0x10
#define QMI_MESSAGE_VOICE_DIAL_CALL_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_voice_dial_call_output_get_call_id (
    QmiMessageVoiceDialCallOutput *self,
    guint8 *value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call ID' was not found in the message");
        return FALSE;
    }

    if (value_call_id)
        *value_call_id = self->arg_call_id;

    return TRUE;
}

gboolean
qmi_message_voice_dial_call_output_get_result (
    QmiMessageVoiceDialCallOutput *self,
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
qmi_message_voice_dial_call_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceDialCallOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_dial_call_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_dial_call_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceDialCallOutput *
qmi_message_voice_dial_call_output_ref (QmiMessageVoiceDialCallOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_dial_call_output_unref (QmiMessageVoiceDialCallOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceDialCallOutput, self);
    }
}

static gchar *
qmi_message_voice_dial_call_input_calling_number_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_DIAL_CALL_INPUT_TLV_CALLING_NUMBER, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        g_autofree gchar *tmp = NULL;

        if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 0, &tmp, &error))
            goto out;
        if (qmi_utils_get_show_personal_info ()) {
            g_string_append (printable, tmp);
        } else {
            g_string_append_printf (printable, "'###'");
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
qmi_message_voice_dial_call_output_call_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_DIAL_CALL_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0)
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

struct message_dial_call_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_dial_call_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_dial_call_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_DIAL_CALL_INPUT_TLV_CALLING_NUMBER:
            tlv_type_str = "Calling Number";
            translated_value = qmi_message_voice_dial_call_input_calling_number_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_DIAL_CALL_OUTPUT_TLV_CALL_ID:
            tlv_type_str = "Call ID";
            translated_value = qmi_message_voice_dial_call_output_call_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_DIAL_CALL_OUTPUT_TLV_RESULT:
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
message_dial_call_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Dial Call\" (0x0020)\n",
                            line_prefix);

    {
        struct message_dial_call_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_dial_call_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceDialCallOutput *
qmi_message_voice_dial_call_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceDialCallOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_DIAL_CALL);

    self = g_slice_new0 (QmiMessageVoiceDialCallOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_DIAL_CALL_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0) {
                goto qmi_message_voice_dial_call_output_call_id_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_call_id), NULL))
                goto qmi_message_voice_dial_call_output_call_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Call ID' TLV", offset);
            }

            self->arg_call_id_set = TRUE;

qmi_message_voice_dial_call_output_call_id_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_DIAL_CALL_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_dial_call_output_unref (self);
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
                qmi_message_voice_dial_call_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE End Call */


/* --- Input -- */

struct _QmiMessageVoiceEndCallInput {
    volatile gint ref_count;

    /* Call ID */
    gboolean arg_call_id_set;
    guint8 arg_call_id;
};

#define QMI_MESSAGE_VOICE_END_CALL_INPUT_TLV_CALL_ID 0x01

gboolean
qmi_message_voice_end_call_input_get_call_id (
    QmiMessageVoiceEndCallInput *self,
    guint8 *value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call ID' was not found in the message");
        return FALSE;
    }

    if (value_call_id)
        *value_call_id = self->arg_call_id;

    return TRUE;
}

gboolean
qmi_message_voice_end_call_input_set_call_id (
    QmiMessageVoiceEndCallInput *self,
    guint8 value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_call_id = value_call_id;
    self->arg_call_id_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_end_call_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceEndCallInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_end_call_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_end_call_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceEndCallInput *
qmi_message_voice_end_call_input_ref (QmiMessageVoiceEndCallInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_end_call_input_unref (QmiMessageVoiceEndCallInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceEndCallInput, self);
    }
}

QmiMessageVoiceEndCallInput *
qmi_message_voice_end_call_input_new (void)
{
    QmiMessageVoiceEndCallInput *self;

    self = g_slice_new0 (QmiMessageVoiceEndCallInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_end_call_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceEndCallInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_END_CALL);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'End Call' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Call ID' TLV */
    if (input->arg_call_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_END_CALL_INPUT_TLV_CALL_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Call ID': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_call_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Call ID': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Call ID': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Call ID' in message 'End Call'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceEndCallOutput {
    volatile gint ref_count;

    /* Call ID */
    gboolean arg_call_id_set;
    guint8 arg_call_id;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_VOICE_END_CALL_OUTPUT_TLV_CALL_ID 0x10
#define QMI_MESSAGE_VOICE_END_CALL_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_voice_end_call_output_get_call_id (
    QmiMessageVoiceEndCallOutput *self,
    guint8 *value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call ID' was not found in the message");
        return FALSE;
    }

    if (value_call_id)
        *value_call_id = self->arg_call_id;

    return TRUE;
}

gboolean
qmi_message_voice_end_call_output_get_result (
    QmiMessageVoiceEndCallOutput *self,
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
qmi_message_voice_end_call_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceEndCallOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_end_call_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_end_call_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceEndCallOutput *
qmi_message_voice_end_call_output_ref (QmiMessageVoiceEndCallOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_end_call_output_unref (QmiMessageVoiceEndCallOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceEndCallOutput, self);
    }
}

static gchar *
qmi_message_voice_end_call_input_call_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_END_CALL_INPUT_TLV_CALL_ID, NULL, NULL)) == 0)
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
qmi_message_voice_end_call_output_call_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_END_CALL_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0)
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

struct message_end_call_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_end_call_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_end_call_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_END_CALL_INPUT_TLV_CALL_ID:
            tlv_type_str = "Call ID";
            translated_value = qmi_message_voice_end_call_input_call_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_END_CALL_OUTPUT_TLV_CALL_ID:
            tlv_type_str = "Call ID";
            translated_value = qmi_message_voice_end_call_output_call_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_END_CALL_OUTPUT_TLV_RESULT:
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
message_end_call_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"End Call\" (0x0021)\n",
                            line_prefix);

    {
        struct message_end_call_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_end_call_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceEndCallOutput *
qmi_message_voice_end_call_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceEndCallOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_END_CALL);

    self = g_slice_new0 (QmiMessageVoiceEndCallOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_END_CALL_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0) {
                goto qmi_message_voice_end_call_output_call_id_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_call_id), NULL))
                goto qmi_message_voice_end_call_output_call_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Call ID' TLV", offset);
            }

            self->arg_call_id_set = TRUE;

qmi_message_voice_end_call_output_call_id_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_END_CALL_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_end_call_output_unref (self);
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
                qmi_message_voice_end_call_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Answer Call */


/* --- Input -- */

struct _QmiMessageVoiceAnswerCallInput {
    volatile gint ref_count;

    /* Call ID */
    gboolean arg_call_id_set;
    guint8 arg_call_id;
};

#define QMI_MESSAGE_VOICE_ANSWER_CALL_INPUT_TLV_CALL_ID 0x01

gboolean
qmi_message_voice_answer_call_input_get_call_id (
    QmiMessageVoiceAnswerCallInput *self,
    guint8 *value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call ID' was not found in the message");
        return FALSE;
    }

    if (value_call_id)
        *value_call_id = self->arg_call_id;

    return TRUE;
}

gboolean
qmi_message_voice_answer_call_input_set_call_id (
    QmiMessageVoiceAnswerCallInput *self,
    guint8 value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_call_id = value_call_id;
    self->arg_call_id_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_answer_call_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceAnswerCallInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_answer_call_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_answer_call_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceAnswerCallInput *
qmi_message_voice_answer_call_input_ref (QmiMessageVoiceAnswerCallInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_answer_call_input_unref (QmiMessageVoiceAnswerCallInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceAnswerCallInput, self);
    }
}

QmiMessageVoiceAnswerCallInput *
qmi_message_voice_answer_call_input_new (void)
{
    QmiMessageVoiceAnswerCallInput *self;

    self = g_slice_new0 (QmiMessageVoiceAnswerCallInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_answer_call_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceAnswerCallInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_ANSWER_CALL);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Answer Call' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Call ID' TLV */
    if (input->arg_call_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_ANSWER_CALL_INPUT_TLV_CALL_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Call ID': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_call_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Call ID': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Call ID': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Call ID' in message 'Answer Call'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceAnswerCallOutput {
    volatile gint ref_count;

    /* Call ID */
    gboolean arg_call_id_set;
    guint8 arg_call_id;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_VOICE_ANSWER_CALL_OUTPUT_TLV_CALL_ID 0x10
#define QMI_MESSAGE_VOICE_ANSWER_CALL_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_voice_answer_call_output_get_call_id (
    QmiMessageVoiceAnswerCallOutput *self,
    guint8 *value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call ID' was not found in the message");
        return FALSE;
    }

    if (value_call_id)
        *value_call_id = self->arg_call_id;

    return TRUE;
}

gboolean
qmi_message_voice_answer_call_output_get_result (
    QmiMessageVoiceAnswerCallOutput *self,
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
qmi_message_voice_answer_call_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceAnswerCallOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_answer_call_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_answer_call_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceAnswerCallOutput *
qmi_message_voice_answer_call_output_ref (QmiMessageVoiceAnswerCallOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_answer_call_output_unref (QmiMessageVoiceAnswerCallOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceAnswerCallOutput, self);
    }
}

static gchar *
qmi_message_voice_answer_call_input_call_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ANSWER_CALL_INPUT_TLV_CALL_ID, NULL, NULL)) == 0)
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
qmi_message_voice_answer_call_output_call_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ANSWER_CALL_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0)
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

struct message_answer_call_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_answer_call_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_answer_call_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_ANSWER_CALL_INPUT_TLV_CALL_ID:
            tlv_type_str = "Call ID";
            translated_value = qmi_message_voice_answer_call_input_call_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_ANSWER_CALL_OUTPUT_TLV_CALL_ID:
            tlv_type_str = "Call ID";
            translated_value = qmi_message_voice_answer_call_output_call_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_ANSWER_CALL_OUTPUT_TLV_RESULT:
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
message_answer_call_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Answer Call\" (0x0022)\n",
                            line_prefix);

    {
        struct message_answer_call_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_answer_call_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceAnswerCallOutput *
qmi_message_voice_answer_call_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceAnswerCallOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_ANSWER_CALL);

    self = g_slice_new0 (QmiMessageVoiceAnswerCallOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ANSWER_CALL_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0) {
                goto qmi_message_voice_answer_call_output_call_id_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_call_id), NULL))
                goto qmi_message_voice_answer_call_output_call_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Call ID' TLV", offset);
            }

            self->arg_call_id_set = TRUE;

qmi_message_voice_answer_call_output_call_id_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ANSWER_CALL_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_answer_call_output_unref (self);
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
                qmi_message_voice_answer_call_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Get All Call Info */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_voice_get_all_call_info_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO);

    return g_steal_pointer (&self);
}

/* --- Output -- */

static void
__qmi_message_voice_get_all_call_info_output_call_information_call_free (QmiMessageVoiceGetAllCallInfoOutputCallInformationCall *value)
{
    g_slice_free (QmiMessageVoiceGetAllCallInfoOutputCallInformationCall, value);
}

static QmiMessageVoiceGetAllCallInfoOutputCallInformationCall *
__qmi_message_voice_get_all_call_info_output_call_information_call_new (void)
{
    return g_slice_new0 (QmiMessageVoiceGetAllCallInfoOutputCallInformationCall);
}

static QmiMessageVoiceGetAllCallInfoOutputCallInformationCall *
__qmi_message_voice_get_all_call_info_output_call_information_call_copy (const QmiMessageVoiceGetAllCallInfoOutputCallInformationCall *value)
{
    QmiMessageVoiceGetAllCallInfoOutputCallInformationCall *copy;

    copy = __qmi_message_voice_get_all_call_info_output_call_information_call_new ();
    copy->id = value->id;
    copy->state = value->state;
    copy->type = value->type;
    copy->direction = value->direction;
    copy->mode = value->mode;
    copy->multipart_indicator = value->multipart_indicator;
    copy->als = value->als;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageVoiceGetAllCallInfoOutputCallInformationCall, qmi_message_voice_get_all_call_info_output_call_information_call, (GBoxedCopyFunc)__qmi_message_voice_get_all_call_info_output_call_information_call_copy, (GBoxedFreeFunc)__qmi_message_voice_get_all_call_info_output_call_information_call_free)

static void
__qmi_message_voice_get_all_call_info_output_remote_party_number_call_clear (QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall *value)
{
    g_clear_pointer (&value->type, (GDestroyNotify)g_free);
}

static void
__qmi_message_voice_get_all_call_info_output_remote_party_number_call_free (QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall *value)
{
    __qmi_message_voice_get_all_call_info_output_remote_party_number_call_clear (value);
    g_slice_free (QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall, value);
}

static QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall *
__qmi_message_voice_get_all_call_info_output_remote_party_number_call_new (void)
{
    return g_slice_new0 (QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall);
}

static QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall *
__qmi_message_voice_get_all_call_info_output_remote_party_number_call_copy (const QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall *value)
{
    QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall *copy;

    copy = __qmi_message_voice_get_all_call_info_output_remote_party_number_call_new ();
    copy->id = value->id;
    copy->presentation_indicator = value->presentation_indicator;
    copy->type = g_strdup (value->type);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall, qmi_message_voice_get_all_call_info_output_remote_party_number_call, (GBoxedCopyFunc)__qmi_message_voice_get_all_call_info_output_remote_party_number_call_copy, (GBoxedFreeFunc)__qmi_message_voice_get_all_call_info_output_remote_party_number_call_free)

struct _QmiMessageVoiceGetAllCallInfoOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Call Information */
    gboolean arg_call_information_set;
    GArray *arg_call_information;
    GPtrArray *arg_call_information_ptr;

    /* Remote Party Number */
    gboolean arg_remote_party_number_set;
    GArray *arg_remote_party_number;
    GPtrArray *arg_remote_party_number_ptr;
};

#define QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO_OUTPUT_TLV_CALL_INFORMATION 0x10
#define QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO_OUTPUT_TLV_REMOTE_PARTY_NUMBER 0x11

gboolean
qmi_message_voice_get_all_call_info_output_get_result (
    QmiMessageVoiceGetAllCallInfoOutput *self,
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
qmi_message_voice_get_all_call_info_output_get_call_information (
    QmiMessageVoiceGetAllCallInfoOutput *self,
    GArray **value_call_information,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call Information' was not found in the message");
        return FALSE;
    }

    if (value_call_information)
        *value_call_information = self->arg_call_information;

    return TRUE;
}

gboolean
qmi_message_voice_get_all_call_info_output_get_call_information_gir (
    QmiMessageVoiceGetAllCallInfoOutput *self,
    GPtrArray **value_call_information_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call Information' was not found in the message");
        return FALSE;
    }

    if (value_call_information_ptr) {
        if (!self->arg_call_information_ptr) {
            {
                guint call_information_i;

                self->arg_call_information_ptr = g_ptr_array_new_full (self->arg_call_information->len, (GDestroyNotify)__qmi_message_voice_get_all_call_info_output_call_information_call_free);
                for (call_information_i = 0; call_information_i < self->arg_call_information->len; call_information_i++) {
                    QmiMessageVoiceGetAllCallInfoOutputCallInformationCall *call_information_aux_from;
                    QmiMessageVoiceGetAllCallInfoOutputCallInformationCall *call_information_aux_to;

                    call_information_aux_from = &g_array_index (self->arg_call_information, QmiMessageVoiceGetAllCallInfoOutputCallInformationCall, call_information_i);

                    call_information_aux_to = __qmi_message_voice_get_all_call_info_output_call_information_call_new ();
                    call_information_aux_to->id = (*call_information_aux_from).id;
                    call_information_aux_to->state = (*call_information_aux_from).state;
                    call_information_aux_to->type = (*call_information_aux_from).type;
                    call_information_aux_to->direction = (*call_information_aux_from).direction;
                    call_information_aux_to->mode = (*call_information_aux_from).mode;
                    call_information_aux_to->multipart_indicator = (*call_information_aux_from).multipart_indicator;
                    call_information_aux_to->als = (*call_information_aux_from).als;

                    g_ptr_array_add (self->arg_call_information_ptr, call_information_aux_to);
                }
            }
        }
        *value_call_information_ptr = self->arg_call_information_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_voice_get_all_call_info_output_get_remote_party_number (
    QmiMessageVoiceGetAllCallInfoOutput *self,
    GArray **value_remote_party_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_remote_party_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Remote Party Number' was not found in the message");
        return FALSE;
    }

    if (value_remote_party_number)
        *value_remote_party_number = self->arg_remote_party_number;

    return TRUE;
}

gboolean
qmi_message_voice_get_all_call_info_output_get_remote_party_number_gir (
    QmiMessageVoiceGetAllCallInfoOutput *self,
    GPtrArray **value_remote_party_number_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_remote_party_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Remote Party Number' was not found in the message");
        return FALSE;
    }

    if (value_remote_party_number_ptr) {
        if (!self->arg_remote_party_number_ptr) {
            {
                guint remote_party_number_i;

                self->arg_remote_party_number_ptr = g_ptr_array_new_full (self->arg_remote_party_number->len, (GDestroyNotify)__qmi_message_voice_get_all_call_info_output_remote_party_number_call_free);
                for (remote_party_number_i = 0; remote_party_number_i < self->arg_remote_party_number->len; remote_party_number_i++) {
                    QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall *remote_party_number_aux_from;
                    QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall *remote_party_number_aux_to;

                    remote_party_number_aux_from = &g_array_index (self->arg_remote_party_number, QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall, remote_party_number_i);

                    remote_party_number_aux_to = __qmi_message_voice_get_all_call_info_output_remote_party_number_call_new ();
                    remote_party_number_aux_to->id = (*remote_party_number_aux_from).id;
                    remote_party_number_aux_to->presentation_indicator = (*remote_party_number_aux_from).presentation_indicator;
                    remote_party_number_aux_to->type = g_strdup ((*remote_party_number_aux_from).type);

                    g_ptr_array_add (self->arg_remote_party_number_ptr, remote_party_number_aux_to);
                }
            }
        }
        *value_remote_party_number_ptr = self->arg_remote_party_number_ptr;
    }
    return TRUE;
}

GType
qmi_message_voice_get_all_call_info_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceGetAllCallInfoOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_get_all_call_info_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_get_all_call_info_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceGetAllCallInfoOutput *
qmi_message_voice_get_all_call_info_output_ref (QmiMessageVoiceGetAllCallInfoOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_get_all_call_info_output_unref (QmiMessageVoiceGetAllCallInfoOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_call_information, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_call_information, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_remote_party_number, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_remote_party_number, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageVoiceGetAllCallInfoOutput, self);
    }
}

static gchar *
qmi_message_voice_get_all_call_info_output_call_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO_OUTPUT_TLV_CALL_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint call_information_i;
        guint8 call_information_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(call_information_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (call_information_i = 0; call_information_i < call_information_n_items; call_information_i++) {
            g_string_append_printf (printable, " [%u] = '", call_information_i);
            g_string_append (printable, "[");
            g_string_append (printable, " id = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " state = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_VOICE_CALL_STATE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_voice_call_state_get_string ((QmiVoiceCallState)tmp));
#elif defined  __QMI_VOICE_CALL_STATE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_voice_call_state_build_string_from_mask ((QmiVoiceCallState)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiVoiceCallState
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " type = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_VOICE_CALL_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_voice_call_type_get_string ((QmiVoiceCallType)tmp));
#elif defined  __QMI_VOICE_CALL_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_voice_call_type_build_string_from_mask ((QmiVoiceCallType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiVoiceCallType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " direction = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_VOICE_CALL_DIRECTION_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_voice_call_direction_get_string ((QmiVoiceCallDirection)tmp));
#elif defined  __QMI_VOICE_CALL_DIRECTION_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_voice_call_direction_build_string_from_mask ((QmiVoiceCallDirection)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiVoiceCallDirection
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " mode = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_VOICE_CALL_MODE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_voice_call_mode_get_string ((QmiVoiceCallMode)tmp));
#elif defined  __QMI_VOICE_CALL_MODE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_voice_call_mode_build_string_from_mask ((QmiVoiceCallMode)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiVoiceCallMode
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " multipart_indicator = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " als = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_VOICE_ALS_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_voice_als_get_string ((QmiVoiceAls)tmp));
#elif defined  __QMI_VOICE_ALS_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_voice_als_build_string_from_mask ((QmiVoiceAls)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiVoiceAls
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

static gchar *
qmi_message_voice_get_all_call_info_output_remote_party_number_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO_OUTPUT_TLV_REMOTE_PARTY_NUMBER, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint remote_party_number_i;
        guint8 remote_party_number_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(remote_party_number_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (remote_party_number_i = 0; remote_party_number_i < remote_party_number_n_items; remote_party_number_i++) {
            g_string_append_printf (printable, " [%u] = '", remote_party_number_i);
            g_string_append (printable, "[");
            g_string_append (printable, " id = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " presentation_indicator = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
#if defined  __QMI_VOICE_PRESENTATION_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_voice_presentation_get_string ((QmiVoicePresentation)tmp));
#elif defined  __QMI_VOICE_PRESENTATION_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_voice_presentation_build_string_from_mask ((QmiVoicePresentation)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiVoicePresentation
#endif
                } else {
                    g_string_append_printf (printable, "'###'");
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " type = '");

            {
                g_autofree gchar *tmp = NULL;

                if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append (printable, tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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

struct message_get_all_call_info_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_all_call_info_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_all_call_info_context *ctx)
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
        case QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO_OUTPUT_TLV_CALL_INFORMATION:
            tlv_type_str = "Call Information";
            translated_value = qmi_message_voice_get_all_call_info_output_call_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO_OUTPUT_TLV_REMOTE_PARTY_NUMBER:
            tlv_type_str = "Remote Party Number";
            translated_value = qmi_message_voice_get_all_call_info_output_remote_party_number_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
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
message_get_all_call_info_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get All Call Info\" (0x002F)\n",
                            line_prefix);

    {
        struct message_get_all_call_info_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_all_call_info_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceGetAllCallInfoOutput *
qmi_message_voice_get_all_call_info_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceGetAllCallInfoOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO);

    self = g_slice_new0 (QmiMessageVoiceGetAllCallInfoOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_get_all_call_info_output_unref (self);
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
                qmi_message_voice_get_all_call_info_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO_OUTPUT_TLV_CALL_INFORMATION, NULL, NULL)) == 0) {
                goto qmi_message_voice_get_all_call_info_output_call_information_out;
            }
            {
                guint call_information_i;
                guint8 call_information_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(call_information_n_items), NULL))
                    goto qmi_message_voice_get_all_call_info_output_call_information_out;

                self->arg_call_information = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessageVoiceGetAllCallInfoOutputCallInformationCall),
                    (guint)call_information_n_items);

                for (call_information_i = 0; call_information_i < call_information_n_items; call_information_i++) {
                    QmiMessageVoiceGetAllCallInfoOutputCallInformationCall call_information_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(call_information_aux.id), NULL))
                        goto qmi_message_voice_get_all_call_info_output_call_information_out;
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_voice_get_all_call_info_output_call_information_out;
                        call_information_aux.state = (QmiVoiceCallState)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_voice_get_all_call_info_output_call_information_out;
                        call_information_aux.type = (QmiVoiceCallType)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_voice_get_all_call_info_output_call_information_out;
                        call_information_aux.direction = (QmiVoiceCallDirection)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_voice_get_all_call_info_output_call_information_out;
                        call_information_aux.mode = (QmiVoiceCallMode)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_voice_get_all_call_info_output_call_information_out;
                        call_information_aux.multipart_indicator = (gboolean)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_voice_get_all_call_info_output_call_information_out;
                        call_information_aux.als = (QmiVoiceAls)tmp;
                    }
                    g_array_insert_val (self->arg_call_information, call_information_i, call_information_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Call Information' TLV", offset);
            }

            self->arg_call_information_set = TRUE;

qmi_message_voice_get_all_call_info_output_call_information_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO_OUTPUT_TLV_REMOTE_PARTY_NUMBER, NULL, NULL)) == 0) {
                goto qmi_message_voice_get_all_call_info_output_remote_party_number_out;
            }
            {
                guint remote_party_number_i;
                guint8 remote_party_number_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(remote_party_number_n_items), NULL))
                    goto qmi_message_voice_get_all_call_info_output_remote_party_number_out;

                self->arg_remote_party_number = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall),
                    (guint)remote_party_number_n_items);

                g_array_set_clear_func (self->arg_remote_party_number, (GDestroyNotify)__qmi_message_voice_get_all_call_info_output_remote_party_number_call_clear);

                for (remote_party_number_i = 0; remote_party_number_i < remote_party_number_n_items; remote_party_number_i++) {
                    QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall remote_party_number_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(remote_party_number_aux.id), NULL))
                        goto qmi_message_voice_get_all_call_info_output_remote_party_number_out;
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_voice_get_all_call_info_output_remote_party_number_out;
                        remote_party_number_aux.presentation_indicator = (QmiVoicePresentation)tmp;
                    }
                    if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &(remote_party_number_aux.type), NULL))
                        goto qmi_message_voice_get_all_call_info_output_remote_party_number_out;
                    g_array_insert_val (self->arg_remote_party_number, remote_party_number_i, remote_party_number_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Remote Party Number' TLV", offset);
            }

            self->arg_remote_party_number_set = TRUE;

qmi_message_voice_get_all_call_info_output_remote_party_number_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Manage Calls */


/* --- Input -- */

struct _QmiMessageVoiceManageCallsInput {
    volatile gint ref_count;

    /* Call ID */
    gboolean arg_call_id_set;
    guint8 arg_call_id;

    /* Service Type */
    gboolean arg_service_type_set;
    guint8 arg_service_type;
};

#define QMI_MESSAGE_VOICE_MANAGE_CALLS_INPUT_TLV_CALL_ID 0x10
#define QMI_MESSAGE_VOICE_MANAGE_CALLS_INPUT_TLV_SERVICE_TYPE 0x01

gboolean
qmi_message_voice_manage_calls_input_get_call_id (
    QmiMessageVoiceManageCallsInput *self,
    guint8 *value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call ID' was not found in the message");
        return FALSE;
    }

    if (value_call_id)
        *value_call_id = self->arg_call_id;

    return TRUE;
}

gboolean
qmi_message_voice_manage_calls_input_set_call_id (
    QmiMessageVoiceManageCallsInput *self,
    guint8 value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_call_id = value_call_id;
    self->arg_call_id_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_manage_calls_input_get_service_type (
    QmiMessageVoiceManageCallsInput *self,
    QmiVoiceSupplementaryServiceType *value_service_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_service_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Service Type' was not found in the message");
        return FALSE;
    }

    if (value_service_type)
        *value_service_type = (QmiVoiceSupplementaryServiceType)(self->arg_service_type);

    return TRUE;
}

gboolean
qmi_message_voice_manage_calls_input_set_service_type (
    QmiMessageVoiceManageCallsInput *self,
    QmiVoiceSupplementaryServiceType value_service_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_service_type = (guint8)(value_service_type);
    self->arg_service_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_manage_calls_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceManageCallsInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_manage_calls_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_manage_calls_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceManageCallsInput *
qmi_message_voice_manage_calls_input_ref (QmiMessageVoiceManageCallsInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_manage_calls_input_unref (QmiMessageVoiceManageCallsInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceManageCallsInput, self);
    }
}

QmiMessageVoiceManageCallsInput *
qmi_message_voice_manage_calls_input_new (void)
{
    QmiMessageVoiceManageCallsInput *self;

    self = g_slice_new0 (QmiMessageVoiceManageCallsInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_manage_calls_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceManageCallsInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_MANAGE_CALLS);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Manage Calls' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Call ID' TLV */
    if (input->arg_call_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_MANAGE_CALLS_INPUT_TLV_CALL_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Call ID': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_call_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Call ID': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Call ID': ");
            return NULL;
        }
    }

    /* Try to add the 'Service Type' TLV */
    if (input->arg_service_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_MANAGE_CALLS_INPUT_TLV_SERVICE_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Service Type': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_service_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Service Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Service Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Service Type' in message 'Manage Calls'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceManageCallsOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_VOICE_MANAGE_CALLS_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_voice_manage_calls_output_get_result (
    QmiMessageVoiceManageCallsOutput *self,
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
qmi_message_voice_manage_calls_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceManageCallsOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_manage_calls_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_manage_calls_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceManageCallsOutput *
qmi_message_voice_manage_calls_output_ref (QmiMessageVoiceManageCallsOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_manage_calls_output_unref (QmiMessageVoiceManageCallsOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceManageCallsOutput, self);
    }
}

static gchar *
qmi_message_voice_manage_calls_input_call_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_MANAGE_CALLS_INPUT_TLV_CALL_ID, NULL, NULL)) == 0)
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
qmi_message_voice_manage_calls_input_service_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_MANAGE_CALLS_INPUT_TLV_SERVICE_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_SUPPLEMENTARY_SERVICE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_supplementary_service_type_get_string ((QmiVoiceSupplementaryServiceType)tmp));
#elif defined  __QMI_VOICE_SUPPLEMENTARY_SERVICE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_supplementary_service_type_build_string_from_mask ((QmiVoiceSupplementaryServiceType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceSupplementaryServiceType
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

struct message_manage_calls_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_manage_calls_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_manage_calls_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_MANAGE_CALLS_INPUT_TLV_CALL_ID:
            tlv_type_str = "Call ID";
            translated_value = qmi_message_voice_manage_calls_input_call_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_MANAGE_CALLS_INPUT_TLV_SERVICE_TYPE:
            tlv_type_str = "Service Type";
            translated_value = qmi_message_voice_manage_calls_input_service_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_MANAGE_CALLS_OUTPUT_TLV_RESULT:
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
message_manage_calls_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Manage Calls\" (0x0031)\n",
                            line_prefix);

    {
        struct message_manage_calls_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_manage_calls_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceManageCallsOutput *
qmi_message_voice_manage_calls_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceManageCallsOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_MANAGE_CALLS);

    self = g_slice_new0 (QmiMessageVoiceManageCallsOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_MANAGE_CALLS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_manage_calls_output_unref (self);
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
                qmi_message_voice_manage_calls_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Set Supplementary Service */


/* --- Input -- */

struct _QmiMessageVoiceSetSupplementaryServiceInput {
    volatile gint ref_count;

    /* Supplementary Service Information */
    gboolean arg_supplementary_service_information_set;
    guint8 arg_supplementary_service_information_supplementary_service_action;
    guint8 arg_supplementary_service_information_supplementary_service_reason;
};

#define QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_INPUT_TLV_SUPPLEMENTARY_SERVICE_INFORMATION 0x01

gboolean
qmi_message_voice_set_supplementary_service_input_get_supplementary_service_information (
    QmiMessageVoiceSetSupplementaryServiceInput *self,
    QmiVoiceSupplementaryServiceAction *value_supplementary_service_information_supplementary_service_action,
    QmiVoiceSupplementaryServiceReason *value_supplementary_service_information_supplementary_service_reason,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_supplementary_service_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Supplementary Service Information' was not found in the message");
        return FALSE;
    }

    if (value_supplementary_service_information_supplementary_service_action)
        *value_supplementary_service_information_supplementary_service_action = (QmiVoiceSupplementaryServiceAction)(self->arg_supplementary_service_information_supplementary_service_action);
    if (value_supplementary_service_information_supplementary_service_reason)
        *value_supplementary_service_information_supplementary_service_reason = (QmiVoiceSupplementaryServiceReason)(self->arg_supplementary_service_information_supplementary_service_reason);

    return TRUE;
}

gboolean
qmi_message_voice_set_supplementary_service_input_set_supplementary_service_information (
    QmiMessageVoiceSetSupplementaryServiceInput *self,
    QmiVoiceSupplementaryServiceAction value_supplementary_service_information_supplementary_service_action,
    QmiVoiceSupplementaryServiceReason value_supplementary_service_information_supplementary_service_reason,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_supplementary_service_information_supplementary_service_action = (guint8)(value_supplementary_service_information_supplementary_service_action);
    self->arg_supplementary_service_information_supplementary_service_reason = (guint8)(value_supplementary_service_information_supplementary_service_reason);
    self->arg_supplementary_service_information_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_set_supplementary_service_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceSetSupplementaryServiceInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_set_supplementary_service_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_set_supplementary_service_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceSetSupplementaryServiceInput *
qmi_message_voice_set_supplementary_service_input_ref (QmiMessageVoiceSetSupplementaryServiceInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_set_supplementary_service_input_unref (QmiMessageVoiceSetSupplementaryServiceInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceSetSupplementaryServiceInput, self);
    }
}

QmiMessageVoiceSetSupplementaryServiceInput *
qmi_message_voice_set_supplementary_service_input_new (void)
{
    QmiMessageVoiceSetSupplementaryServiceInput *self;

    self = g_slice_new0 (QmiMessageVoiceSetSupplementaryServiceInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_set_supplementary_service_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceSetSupplementaryServiceInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set Supplementary Service' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Supplementary Service Information' TLV */
    if (input->arg_supplementary_service_information_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_INPUT_TLV_SUPPLEMENTARY_SERVICE_INFORMATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Supplementary Service Information': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_supplementary_service_information_supplementary_service_action;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Supplementary Service Information': ");
                return NULL;
            }
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_supplementary_service_information_supplementary_service_reason;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Supplementary Service Information': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Supplementary Service Information': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Supplementary Service Information' in message 'Set Supplementary Service'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceSetSupplementaryServiceOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Service Status */
    gboolean arg_service_status_set;
    guint8 arg_service_status_active;
    guint8 arg_service_status_provisioned;
};

#define QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_OUTPUT_TLV_SERVICE_STATUS 0x15

gboolean
qmi_message_voice_set_supplementary_service_output_get_result (
    QmiMessageVoiceSetSupplementaryServiceOutput *self,
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
qmi_message_voice_set_supplementary_service_output_get_service_status (
    QmiMessageVoiceSetSupplementaryServiceOutput *self,
    gboolean *value_service_status_active,
    gboolean *value_service_status_provisioned,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_service_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Service Status' was not found in the message");
        return FALSE;
    }

    if (value_service_status_active)
        *value_service_status_active = (gboolean)(self->arg_service_status_active);
    if (value_service_status_provisioned)
        *value_service_status_provisioned = (gboolean)(self->arg_service_status_provisioned);

    return TRUE;
}

GType
qmi_message_voice_set_supplementary_service_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceSetSupplementaryServiceOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_set_supplementary_service_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_set_supplementary_service_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceSetSupplementaryServiceOutput *
qmi_message_voice_set_supplementary_service_output_ref (QmiMessageVoiceSetSupplementaryServiceOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_set_supplementary_service_output_unref (QmiMessageVoiceSetSupplementaryServiceOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceSetSupplementaryServiceOutput, self);
    }
}

static gchar *
qmi_message_voice_set_supplementary_service_input_supplementary_service_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_INPUT_TLV_SUPPLEMENTARY_SERVICE_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " supplementary_service_action = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_SUPPLEMENTARY_SERVICE_ACTION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_supplementary_service_action_get_string ((QmiVoiceSupplementaryServiceAction)tmp));
#elif defined  __QMI_VOICE_SUPPLEMENTARY_SERVICE_ACTION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_supplementary_service_action_build_string_from_mask ((QmiVoiceSupplementaryServiceAction)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceSupplementaryServiceAction
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " supplementary_service_reason = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_SUPPLEMENTARY_SERVICE_REASON_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_supplementary_service_reason_get_string ((QmiVoiceSupplementaryServiceReason)tmp));
#elif defined  __QMI_VOICE_SUPPLEMENTARY_SERVICE_REASON_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_supplementary_service_reason_build_string_from_mask ((QmiVoiceSupplementaryServiceReason)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceSupplementaryServiceReason
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
qmi_message_voice_set_supplementary_service_output_service_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_OUTPUT_TLV_SERVICE_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " active = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " provisioned = '");

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

struct message_set_supplementary_service_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_supplementary_service_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_supplementary_service_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_INPUT_TLV_SUPPLEMENTARY_SERVICE_INFORMATION:
            tlv_type_str = "Supplementary Service Information";
            translated_value = qmi_message_voice_set_supplementary_service_input_supplementary_service_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_OUTPUT_TLV_SERVICE_STATUS:
            tlv_type_str = "Service Status";
            translated_value = qmi_message_voice_set_supplementary_service_output_service_status_get_printable (
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
message_set_supplementary_service_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Supplementary Service\" (0x0033)\n",
                            line_prefix);

    {
        struct message_set_supplementary_service_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_supplementary_service_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceSetSupplementaryServiceOutput *
qmi_message_voice_set_supplementary_service_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceSetSupplementaryServiceOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE);

    self = g_slice_new0 (QmiMessageVoiceSetSupplementaryServiceOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_set_supplementary_service_output_unref (self);
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
                qmi_message_voice_set_supplementary_service_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_OUTPUT_TLV_SERVICE_STATUS, NULL, NULL)) == 0) {
                goto qmi_message_voice_set_supplementary_service_output_service_status_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_set_supplementary_service_output_service_status_out;
                self->arg_service_status_active = (gboolean)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_set_supplementary_service_output_service_status_out;
                self->arg_service_status_provisioned = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Service Status' TLV", offset);
            }

            self->arg_service_status_set = TRUE;

qmi_message_voice_set_supplementary_service_output_service_status_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Get Call Waiting */


/* --- Input -- */

struct _QmiMessageVoiceGetCallWaitingInput {
    volatile gint ref_count;

    /* Service Class */
    gboolean arg_service_class_set;
    guint8 arg_service_class;
};

#define QMI_MESSAGE_VOICE_GET_CALL_WAITING_INPUT_TLV_SERVICE_CLASS 0x10

gboolean
qmi_message_voice_get_call_waiting_input_get_service_class (
    QmiMessageVoiceGetCallWaitingInput *self,
    guint8 *value_service_class,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_service_class_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Service Class' was not found in the message");
        return FALSE;
    }

    if (value_service_class)
        *value_service_class = self->arg_service_class;

    return TRUE;
}

gboolean
qmi_message_voice_get_call_waiting_input_set_service_class (
    QmiMessageVoiceGetCallWaitingInput *self,
    guint8 value_service_class,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_service_class = value_service_class;
    self->arg_service_class_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_get_call_waiting_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceGetCallWaitingInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_get_call_waiting_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_get_call_waiting_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceGetCallWaitingInput *
qmi_message_voice_get_call_waiting_input_ref (QmiMessageVoiceGetCallWaitingInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_get_call_waiting_input_unref (QmiMessageVoiceGetCallWaitingInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceGetCallWaitingInput, self);
    }
}

QmiMessageVoiceGetCallWaitingInput *
qmi_message_voice_get_call_waiting_input_new (void)
{
    QmiMessageVoiceGetCallWaitingInput *self;

    self = g_slice_new0 (QmiMessageVoiceGetCallWaitingInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_get_call_waiting_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceGetCallWaitingInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_GET_CALL_WAITING);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Service Class' TLV */
    if (input->arg_service_class_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_GET_CALL_WAITING_INPUT_TLV_SERVICE_CLASS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Service Class': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_service_class, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Service Class': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Service Class': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceGetCallWaitingOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Service Class */
    gboolean arg_service_class_set;
    guint8 arg_service_class;
};

#define QMI_MESSAGE_VOICE_GET_CALL_WAITING_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_VOICE_GET_CALL_WAITING_OUTPUT_TLV_SERVICE_CLASS 0x10

gboolean
qmi_message_voice_get_call_waiting_output_get_result (
    QmiMessageVoiceGetCallWaitingOutput *self,
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
qmi_message_voice_get_call_waiting_output_get_service_class (
    QmiMessageVoiceGetCallWaitingOutput *self,
    guint8 *value_service_class,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_service_class_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Service Class' was not found in the message");
        return FALSE;
    }

    if (value_service_class)
        *value_service_class = self->arg_service_class;

    return TRUE;
}

GType
qmi_message_voice_get_call_waiting_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceGetCallWaitingOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_get_call_waiting_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_get_call_waiting_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceGetCallWaitingOutput *
qmi_message_voice_get_call_waiting_output_ref (QmiMessageVoiceGetCallWaitingOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_get_call_waiting_output_unref (QmiMessageVoiceGetCallWaitingOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceGetCallWaitingOutput, self);
    }
}

static gchar *
qmi_message_voice_get_call_waiting_input_service_class_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CALL_WAITING_INPUT_TLV_SERVICE_CLASS, NULL, NULL)) == 0)
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
qmi_message_voice_get_call_waiting_output_service_class_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CALL_WAITING_OUTPUT_TLV_SERVICE_CLASS, NULL, NULL)) == 0)
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

struct message_get_call_waiting_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_call_waiting_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_call_waiting_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_GET_CALL_WAITING_INPUT_TLV_SERVICE_CLASS:
            tlv_type_str = "Service Class";
            translated_value = qmi_message_voice_get_call_waiting_input_service_class_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_GET_CALL_WAITING_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CALL_WAITING_OUTPUT_TLV_SERVICE_CLASS:
            tlv_type_str = "Service Class";
            translated_value = qmi_message_voice_get_call_waiting_output_service_class_get_printable (
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
message_get_call_waiting_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Call Waiting\" (0x0034)\n",
                            line_prefix);

    {
        struct message_get_call_waiting_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_call_waiting_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceGetCallWaitingOutput *
qmi_message_voice_get_call_waiting_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceGetCallWaitingOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_GET_CALL_WAITING);

    self = g_slice_new0 (QmiMessageVoiceGetCallWaitingOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CALL_WAITING_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_get_call_waiting_output_unref (self);
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
                qmi_message_voice_get_call_waiting_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CALL_WAITING_OUTPUT_TLV_SERVICE_CLASS, NULL, NULL)) == 0) {
                goto qmi_message_voice_get_call_waiting_output_service_class_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_service_class), NULL))
                goto qmi_message_voice_get_call_waiting_output_service_class_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Service Class' TLV", offset);
            }

            self->arg_service_class_set = TRUE;

qmi_message_voice_get_call_waiting_output_service_class_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Originate USSD */


/* --- Input -- */

struct _QmiMessageVoiceOriginateUssdInput {
    volatile gint ref_count;

    /* USS Data */
    gboolean arg_uss_data_set;
    guint8 arg_uss_data_data_coding_scheme;
    GArray *arg_uss_data_data;
};

#define QMI_MESSAGE_VOICE_ORIGINATE_USSD_INPUT_TLV_USS_DATA 0x01

gboolean
qmi_message_voice_originate_ussd_input_get_uss_data (
    QmiMessageVoiceOriginateUssdInput *self,
    QmiVoiceUssDataCodingScheme *value_uss_data_data_coding_scheme,
    GArray **value_uss_data_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uss_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'USS Data' was not found in the message");
        return FALSE;
    }

    if (value_uss_data_data_coding_scheme)
        *value_uss_data_data_coding_scheme = (QmiVoiceUssDataCodingScheme)(self->arg_uss_data_data_coding_scheme);
    if (value_uss_data_data)
        *value_uss_data_data = self->arg_uss_data_data;

    return TRUE;
}

gboolean
qmi_message_voice_originate_ussd_input_set_uss_data (
    QmiMessageVoiceOriginateUssdInput *self,
    QmiVoiceUssDataCodingScheme value_uss_data_data_coding_scheme,
    GArray *value_uss_data_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_uss_data_data_coding_scheme = (guint8)(value_uss_data_data_coding_scheme);
    g_clear_pointer (&self->arg_uss_data_data, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_uss_data_data, (GDestroyNotify)g_ptr_array_unref);
    self->arg_uss_data_data = g_array_ref (value_uss_data_data);
    self->arg_uss_data_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_originate_ussd_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceOriginateUssdInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_originate_ussd_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_originate_ussd_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceOriginateUssdInput *
qmi_message_voice_originate_ussd_input_ref (QmiMessageVoiceOriginateUssdInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_originate_ussd_input_unref (QmiMessageVoiceOriginateUssdInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_uss_data_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageVoiceOriginateUssdInput, self);
    }
}

QmiMessageVoiceOriginateUssdInput *
qmi_message_voice_originate_ussd_input_new (void)
{
    QmiMessageVoiceOriginateUssdInput *self;

    self = g_slice_new0 (QmiMessageVoiceOriginateUssdInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_originate_ussd_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceOriginateUssdInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_ORIGINATE_USSD);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Originate USSD' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'USS Data' TLV */
    if (input->arg_uss_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_ORIGINATE_USSD_INPUT_TLV_USS_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'USS Data': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_uss_data_data_coding_scheme;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'USS Data': ");
                return NULL;
            }
        }
        {
            guint data_i;
            guint8 data_n_items;

            /* Write the number of items in the array first */
            data_n_items = (guint8) input->arg_uss_data_data->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, data_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'USS Data': ");
                return NULL;
            }

            for (data_i = 0; data_i < input->arg_uss_data_data->len; data_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_uss_data_data, guint8,data_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'USS Data': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'USS Data': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'USS Data' in message 'Originate USSD'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceOriginateUssdOutput {
    volatile gint ref_count;

    /* USS Data UTF16 */
    gboolean arg_uss_data_utf16_set;
    GArray *arg_uss_data_utf16;

    /* Call Control Supplementary Service Type */
    gboolean arg_call_control_supplementary_service_type_set;
    guint8 arg_call_control_supplementary_service_type;

    /* Call ID */
    gboolean arg_call_id_set;
    guint8 arg_call_id;

    /* Call Control Result Type */
    gboolean arg_call_control_result_type_set;
    guint8 arg_call_control_result_type;

    /* USS Data */
    gboolean arg_uss_data_set;
    guint8 arg_uss_data_data_coding_scheme;
    GArray *arg_uss_data_data;

    /* Alpha Identifier */
    gboolean arg_alpha_identifier_set;
    guint8 arg_alpha_identifier_data_coding_scheme;
    GArray *arg_alpha_identifier_alpha;

    /* Failure Cause */
    gboolean arg_failure_cause_set;
    guint16 arg_failure_cause;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_USS_DATA_UTF16 0x16
#define QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_CALL_CONTROL_SUPPLEMENTARY_SERVICE_TYPE 0x15
#define QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_CALL_ID 0x14
#define QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_CALL_CONTROL_RESULT_TYPE 0x13
#define QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_USS_DATA 0x12
#define QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_ALPHA_IDENTIFIER 0x11
#define QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_FAILURE_CAUSE 0x10
#define QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_voice_originate_ussd_output_get_uss_data_utf16 (
    QmiMessageVoiceOriginateUssdOutput *self,
    GArray **value_uss_data_utf16,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uss_data_utf16_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'USS Data UTF16' was not found in the message");
        return FALSE;
    }

    if (value_uss_data_utf16)
        *value_uss_data_utf16 = self->arg_uss_data_utf16;

    return TRUE;
}

gboolean
qmi_message_voice_originate_ussd_output_get_call_control_supplementary_service_type (
    QmiMessageVoiceOriginateUssdOutput *self,
    QmiVoiceCallControlSupplementaryServiceType *value_call_control_supplementary_service_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_control_supplementary_service_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call Control Supplementary Service Type' was not found in the message");
        return FALSE;
    }

    if (value_call_control_supplementary_service_type)
        *value_call_control_supplementary_service_type = (QmiVoiceCallControlSupplementaryServiceType)(self->arg_call_control_supplementary_service_type);

    return TRUE;
}

gboolean
qmi_message_voice_originate_ussd_output_get_call_id (
    QmiMessageVoiceOriginateUssdOutput *self,
    guint8 *value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call ID' was not found in the message");
        return FALSE;
    }

    if (value_call_id)
        *value_call_id = self->arg_call_id;

    return TRUE;
}

gboolean
qmi_message_voice_originate_ussd_output_get_call_control_result_type (
    QmiMessageVoiceOriginateUssdOutput *self,
    QmiVoiceCallControlResultType *value_call_control_result_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_control_result_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call Control Result Type' was not found in the message");
        return FALSE;
    }

    if (value_call_control_result_type)
        *value_call_control_result_type = (QmiVoiceCallControlResultType)(self->arg_call_control_result_type);

    return TRUE;
}

gboolean
qmi_message_voice_originate_ussd_output_get_uss_data (
    QmiMessageVoiceOriginateUssdOutput *self,
    QmiVoiceUssDataCodingScheme *value_uss_data_data_coding_scheme,
    GArray **value_uss_data_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uss_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'USS Data' was not found in the message");
        return FALSE;
    }

    if (value_uss_data_data_coding_scheme)
        *value_uss_data_data_coding_scheme = (QmiVoiceUssDataCodingScheme)(self->arg_uss_data_data_coding_scheme);
    if (value_uss_data_data)
        *value_uss_data_data = self->arg_uss_data_data;

    return TRUE;
}

gboolean
qmi_message_voice_originate_ussd_output_get_alpha_identifier (
    QmiMessageVoiceOriginateUssdOutput *self,
    QmiVoiceAlphaDataCodingScheme *value_alpha_identifier_data_coding_scheme,
    GArray **value_alpha_identifier_alpha,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_alpha_identifier_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Alpha Identifier' was not found in the message");
        return FALSE;
    }

    if (value_alpha_identifier_data_coding_scheme)
        *value_alpha_identifier_data_coding_scheme = (QmiVoiceAlphaDataCodingScheme)(self->arg_alpha_identifier_data_coding_scheme);
    if (value_alpha_identifier_alpha)
        *value_alpha_identifier_alpha = self->arg_alpha_identifier_alpha;

    return TRUE;
}

gboolean
qmi_message_voice_originate_ussd_output_get_failure_cause (
    QmiMessageVoiceOriginateUssdOutput *self,
    QmiVoiceCallEndReason *value_failure_cause,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_failure_cause_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Failure Cause' was not found in the message");
        return FALSE;
    }

    if (value_failure_cause)
        *value_failure_cause = (QmiVoiceCallEndReason)(self->arg_failure_cause);

    return TRUE;
}

gboolean
qmi_message_voice_originate_ussd_output_get_result (
    QmiMessageVoiceOriginateUssdOutput *self,
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
qmi_message_voice_originate_ussd_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceOriginateUssdOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_originate_ussd_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_originate_ussd_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceOriginateUssdOutput *
qmi_message_voice_originate_ussd_output_ref (QmiMessageVoiceOriginateUssdOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_originate_ussd_output_unref (QmiMessageVoiceOriginateUssdOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_uss_data_utf16, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_uss_data_data, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_alpha_identifier_alpha, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageVoiceOriginateUssdOutput, self);
    }
}

static gchar *
qmi_message_voice_originate_ussd_input_uss_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_INPUT_TLV_USS_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " data_coding_scheme = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_USS_DATA_CODING_SCHEME_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_uss_data_coding_scheme_get_string ((QmiVoiceUssDataCodingScheme)tmp));
#elif defined  __QMI_VOICE_USS_DATA_CODING_SCHEME_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_uss_data_coding_scheme_build_string_from_mask ((QmiVoiceUssDataCodingScheme)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceUssDataCodingScheme
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " data = '");
    {
        guint data_i;
        guint8 data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (data_i = 0; data_i < data_n_items; data_i++) {
            g_string_append_printf (printable, " [%u] = '", data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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
qmi_message_voice_originate_ussd_output_uss_data_utf16_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_USS_DATA_UTF16, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint uss_data_utf16_i;
        guint8 uss_data_utf16_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(uss_data_utf16_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (uss_data_utf16_i = 0; uss_data_utf16_i < uss_data_utf16_n_items; uss_data_utf16_i++) {
            g_string_append_printf (printable, " [%u] = '", uss_data_utf16_i);

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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
qmi_message_voice_originate_ussd_output_call_control_supplementary_service_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_CALL_CONTROL_SUPPLEMENTARY_SERVICE_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_CALL_CONTROL_SUPPLEMENTARY_SERVICE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_call_control_supplementary_service_type_get_string ((QmiVoiceCallControlSupplementaryServiceType)tmp));
#elif defined  __QMI_VOICE_CALL_CONTROL_SUPPLEMENTARY_SERVICE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_call_control_supplementary_service_type_build_string_from_mask ((QmiVoiceCallControlSupplementaryServiceType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceCallControlSupplementaryServiceType
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
qmi_message_voice_originate_ussd_output_call_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0)
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
qmi_message_voice_originate_ussd_output_call_control_result_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_CALL_CONTROL_RESULT_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_CALL_CONTROL_RESULT_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_call_control_result_type_get_string ((QmiVoiceCallControlResultType)tmp));
#elif defined  __QMI_VOICE_CALL_CONTROL_RESULT_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_call_control_result_type_build_string_from_mask ((QmiVoiceCallControlResultType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceCallControlResultType
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
qmi_message_voice_originate_ussd_output_uss_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_USS_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " data_coding_scheme = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_USS_DATA_CODING_SCHEME_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_uss_data_coding_scheme_get_string ((QmiVoiceUssDataCodingScheme)tmp));
#elif defined  __QMI_VOICE_USS_DATA_CODING_SCHEME_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_uss_data_coding_scheme_build_string_from_mask ((QmiVoiceUssDataCodingScheme)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceUssDataCodingScheme
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " data = '");
    {
        guint data_i;
        guint8 data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (data_i = 0; data_i < data_n_items; data_i++) {
            g_string_append_printf (printable, " [%u] = '", data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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
qmi_message_voice_originate_ussd_output_alpha_identifier_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_ALPHA_IDENTIFIER, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " data_coding_scheme = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_ALPHA_DATA_CODING_SCHEME_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_alpha_data_coding_scheme_get_string ((QmiVoiceAlphaDataCodingScheme)tmp));
#elif defined  __QMI_VOICE_ALPHA_DATA_CODING_SCHEME_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_alpha_data_coding_scheme_build_string_from_mask ((QmiVoiceAlphaDataCodingScheme)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceAlphaDataCodingScheme
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " alpha = '");
    {
        guint alpha_i;
        guint8 alpha_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(alpha_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (alpha_i = 0; alpha_i < alpha_n_items; alpha_i++) {
            g_string_append_printf (printable, " [%u] = '", alpha_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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
qmi_message_voice_originate_ussd_output_failure_cause_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_FAILURE_CAUSE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_CALL_END_REASON_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_call_end_reason_get_string ((QmiVoiceCallEndReason)tmp));
#elif defined  __QMI_VOICE_CALL_END_REASON_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_call_end_reason_build_string_from_mask ((QmiVoiceCallEndReason)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceCallEndReason
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

struct message_originate_ussd_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_originate_ussd_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_originate_ussd_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_ORIGINATE_USSD_INPUT_TLV_USS_DATA:
            tlv_type_str = "USS Data";
            translated_value = qmi_message_voice_originate_ussd_input_uss_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_USS_DATA_UTF16:
            tlv_type_str = "USS Data UTF16";
            translated_value = qmi_message_voice_originate_ussd_output_uss_data_utf16_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_CALL_CONTROL_SUPPLEMENTARY_SERVICE_TYPE:
            tlv_type_str = "Call Control Supplementary Service Type";
            translated_value = qmi_message_voice_originate_ussd_output_call_control_supplementary_service_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_CALL_ID:
            tlv_type_str = "Call ID";
            translated_value = qmi_message_voice_originate_ussd_output_call_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_CALL_CONTROL_RESULT_TYPE:
            tlv_type_str = "Call Control Result Type";
            translated_value = qmi_message_voice_originate_ussd_output_call_control_result_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_USS_DATA:
            tlv_type_str = "USS Data";
            translated_value = qmi_message_voice_originate_ussd_output_uss_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_ALPHA_IDENTIFIER:
            tlv_type_str = "Alpha Identifier";
            translated_value = qmi_message_voice_originate_ussd_output_alpha_identifier_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_FAILURE_CAUSE:
            tlv_type_str = "Failure Cause";
            translated_value = qmi_message_voice_originate_ussd_output_failure_cause_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_RESULT:
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
message_originate_ussd_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Originate USSD\" (0x003A)\n",
                            line_prefix);

    {
        struct message_originate_ussd_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_originate_ussd_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceOriginateUssdOutput *
qmi_message_voice_originate_ussd_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceOriginateUssdOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_ORIGINATE_USSD);

    self = g_slice_new0 (QmiMessageVoiceOriginateUssdOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_USS_DATA_UTF16, NULL, NULL)) == 0) {
                goto qmi_message_voice_originate_ussd_output_uss_data_utf16_out;
            }
            {
                guint uss_data_utf16_i;
                guint8 uss_data_utf16_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(uss_data_utf16_n_items), NULL))
                    goto qmi_message_voice_originate_ussd_output_uss_data_utf16_out;

                self->arg_uss_data_utf16 = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint16),
                    (guint)uss_data_utf16_n_items);

                for (uss_data_utf16_i = 0; uss_data_utf16_i < uss_data_utf16_n_items; uss_data_utf16_i++) {
                    guint16 uss_data_utf16_aux;

                    if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(uss_data_utf16_aux), NULL))
                        goto qmi_message_voice_originate_ussd_output_uss_data_utf16_out;
                    g_array_insert_val (self->arg_uss_data_utf16, uss_data_utf16_i, uss_data_utf16_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'USS Data UTF16' TLV", offset);
            }

            self->arg_uss_data_utf16_set = TRUE;

qmi_message_voice_originate_ussd_output_uss_data_utf16_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_CALL_CONTROL_SUPPLEMENTARY_SERVICE_TYPE, NULL, NULL)) == 0) {
                goto qmi_message_voice_originate_ussd_output_call_control_supplementary_service_type_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_originate_ussd_output_call_control_supplementary_service_type_out;
                self->arg_call_control_supplementary_service_type = (QmiVoiceCallControlSupplementaryServiceType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Call Control Supplementary Service Type' TLV", offset);
            }

            self->arg_call_control_supplementary_service_type_set = TRUE;

qmi_message_voice_originate_ussd_output_call_control_supplementary_service_type_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0) {
                goto qmi_message_voice_originate_ussd_output_call_id_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_call_id), NULL))
                goto qmi_message_voice_originate_ussd_output_call_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Call ID' TLV", offset);
            }

            self->arg_call_id_set = TRUE;

qmi_message_voice_originate_ussd_output_call_id_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_CALL_CONTROL_RESULT_TYPE, NULL, NULL)) == 0) {
                goto qmi_message_voice_originate_ussd_output_call_control_result_type_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_originate_ussd_output_call_control_result_type_out;
                self->arg_call_control_result_type = (QmiVoiceCallControlResultType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Call Control Result Type' TLV", offset);
            }

            self->arg_call_control_result_type_set = TRUE;

qmi_message_voice_originate_ussd_output_call_control_result_type_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_USS_DATA, NULL, NULL)) == 0) {
                goto qmi_message_voice_originate_ussd_output_uss_data_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_originate_ussd_output_uss_data_out;
                self->arg_uss_data_data_coding_scheme = (QmiVoiceUssDataCodingScheme)tmp;
            }
            {
                guint data_i;
                guint8 data_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_n_items), NULL))
                    goto qmi_message_voice_originate_ussd_output_uss_data_out;

                self->arg_uss_data_data = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)data_n_items);

                for (data_i = 0; data_i < data_n_items; data_i++) {
                    guint8 data_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_aux), NULL))
                        goto qmi_message_voice_originate_ussd_output_uss_data_out;
                    g_array_insert_val (self->arg_uss_data_data, data_i, data_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'USS Data' TLV", offset);
            }

            self->arg_uss_data_set = TRUE;

qmi_message_voice_originate_ussd_output_uss_data_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_ALPHA_IDENTIFIER, NULL, NULL)) == 0) {
                goto qmi_message_voice_originate_ussd_output_alpha_identifier_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_originate_ussd_output_alpha_identifier_out;
                self->arg_alpha_identifier_data_coding_scheme = (QmiVoiceAlphaDataCodingScheme)tmp;
            }
            {
                guint alpha_i;
                guint8 alpha_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(alpha_n_items), NULL))
                    goto qmi_message_voice_originate_ussd_output_alpha_identifier_out;

                self->arg_alpha_identifier_alpha = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)alpha_n_items);

                for (alpha_i = 0; alpha_i < alpha_n_items; alpha_i++) {
                    guint8 alpha_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(alpha_aux), NULL))
                        goto qmi_message_voice_originate_ussd_output_alpha_identifier_out;
                    g_array_insert_val (self->arg_alpha_identifier_alpha, alpha_i, alpha_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Alpha Identifier' TLV", offset);
            }

            self->arg_alpha_identifier_set = TRUE;

qmi_message_voice_originate_ussd_output_alpha_identifier_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_FAILURE_CAUSE, NULL, NULL)) == 0) {
                goto qmi_message_voice_originate_ussd_output_failure_cause_out;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_voice_originate_ussd_output_failure_cause_out;
                self->arg_failure_cause = (QmiVoiceCallEndReason)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Failure Cause' TLV", offset);
            }

            self->arg_failure_cause_set = TRUE;

qmi_message_voice_originate_ussd_output_failure_cause_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_originate_ussd_output_unref (self);
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
                qmi_message_voice_originate_ussd_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Answer USSD */


/* --- Input -- */

struct _QmiMessageVoiceAnswerUssdInput {
    volatile gint ref_count;

    /* USS Data */
    gboolean arg_uss_data_set;
    guint8 arg_uss_data_data_coding_scheme;
    GArray *arg_uss_data_data;
};

#define QMI_MESSAGE_VOICE_ANSWER_USSD_INPUT_TLV_USS_DATA 0x01

gboolean
qmi_message_voice_answer_ussd_input_get_uss_data (
    QmiMessageVoiceAnswerUssdInput *self,
    QmiVoiceUssDataCodingScheme *value_uss_data_data_coding_scheme,
    GArray **value_uss_data_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uss_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'USS Data' was not found in the message");
        return FALSE;
    }

    if (value_uss_data_data_coding_scheme)
        *value_uss_data_data_coding_scheme = (QmiVoiceUssDataCodingScheme)(self->arg_uss_data_data_coding_scheme);
    if (value_uss_data_data)
        *value_uss_data_data = self->arg_uss_data_data;

    return TRUE;
}

gboolean
qmi_message_voice_answer_ussd_input_set_uss_data (
    QmiMessageVoiceAnswerUssdInput *self,
    QmiVoiceUssDataCodingScheme value_uss_data_data_coding_scheme,
    GArray *value_uss_data_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_uss_data_data_coding_scheme = (guint8)(value_uss_data_data_coding_scheme);
    g_clear_pointer (&self->arg_uss_data_data, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_uss_data_data, (GDestroyNotify)g_ptr_array_unref);
    self->arg_uss_data_data = g_array_ref (value_uss_data_data);
    self->arg_uss_data_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_answer_ussd_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceAnswerUssdInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_answer_ussd_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_answer_ussd_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceAnswerUssdInput *
qmi_message_voice_answer_ussd_input_ref (QmiMessageVoiceAnswerUssdInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_answer_ussd_input_unref (QmiMessageVoiceAnswerUssdInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_uss_data_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageVoiceAnswerUssdInput, self);
    }
}

QmiMessageVoiceAnswerUssdInput *
qmi_message_voice_answer_ussd_input_new (void)
{
    QmiMessageVoiceAnswerUssdInput *self;

    self = g_slice_new0 (QmiMessageVoiceAnswerUssdInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_answer_ussd_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceAnswerUssdInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_ANSWER_USSD);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Answer USSD' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'USS Data' TLV */
    if (input->arg_uss_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_ANSWER_USSD_INPUT_TLV_USS_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'USS Data': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_uss_data_data_coding_scheme;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'USS Data': ");
                return NULL;
            }
        }
        {
            guint data_i;
            guint8 data_n_items;

            /* Write the number of items in the array first */
            data_n_items = (guint8) input->arg_uss_data_data->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, data_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'USS Data': ");
                return NULL;
            }

            for (data_i = 0; data_i < input->arg_uss_data_data->len; data_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_uss_data_data, guint8,data_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'USS Data': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'USS Data': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'USS Data' in message 'Answer USSD'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceAnswerUssdOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_VOICE_ANSWER_USSD_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_voice_answer_ussd_output_get_result (
    QmiMessageVoiceAnswerUssdOutput *self,
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
qmi_message_voice_answer_ussd_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceAnswerUssdOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_answer_ussd_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_answer_ussd_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceAnswerUssdOutput *
qmi_message_voice_answer_ussd_output_ref (QmiMessageVoiceAnswerUssdOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_answer_ussd_output_unref (QmiMessageVoiceAnswerUssdOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceAnswerUssdOutput, self);
    }
}

static gchar *
qmi_message_voice_answer_ussd_input_uss_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ANSWER_USSD_INPUT_TLV_USS_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " data_coding_scheme = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_USS_DATA_CODING_SCHEME_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_uss_data_coding_scheme_get_string ((QmiVoiceUssDataCodingScheme)tmp));
#elif defined  __QMI_VOICE_USS_DATA_CODING_SCHEME_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_uss_data_coding_scheme_build_string_from_mask ((QmiVoiceUssDataCodingScheme)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceUssDataCodingScheme
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " data = '");
    {
        guint data_i;
        guint8 data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (data_i = 0; data_i < data_n_items; data_i++) {
            g_string_append_printf (printable, " [%u] = '", data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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

struct message_answer_ussd_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_answer_ussd_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_answer_ussd_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_ANSWER_USSD_INPUT_TLV_USS_DATA:
            tlv_type_str = "USS Data";
            translated_value = qmi_message_voice_answer_ussd_input_uss_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_ANSWER_USSD_OUTPUT_TLV_RESULT:
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
message_answer_ussd_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Answer USSD\" (0x003B)\n",
                            line_prefix);

    {
        struct message_answer_ussd_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_answer_ussd_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceAnswerUssdOutput *
qmi_message_voice_answer_ussd_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceAnswerUssdOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_ANSWER_USSD);

    self = g_slice_new0 (QmiMessageVoiceAnswerUssdOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ANSWER_USSD_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_answer_ussd_output_unref (self);
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
                qmi_message_voice_answer_ussd_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Cancel USSD */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_voice_cancel_ussd_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_CANCEL_USSD);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceCancelUssdOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_VOICE_CANCEL_USSD_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_voice_cancel_ussd_output_get_result (
    QmiMessageVoiceCancelUssdOutput *self,
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
qmi_message_voice_cancel_ussd_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceCancelUssdOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_cancel_ussd_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_cancel_ussd_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceCancelUssdOutput *
qmi_message_voice_cancel_ussd_output_ref (QmiMessageVoiceCancelUssdOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_cancel_ussd_output_unref (QmiMessageVoiceCancelUssdOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceCancelUssdOutput, self);
    }
}

struct message_cancel_ussd_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_cancel_ussd_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_cancel_ussd_context *ctx)
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
        case QMI_MESSAGE_VOICE_CANCEL_USSD_OUTPUT_TLV_RESULT:
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
message_cancel_ussd_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Cancel USSD\" (0x003C)\n",
                            line_prefix);

    {
        struct message_cancel_ussd_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_cancel_ussd_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceCancelUssdOutput *
qmi_message_voice_cancel_ussd_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceCancelUssdOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_CANCEL_USSD);

    self = g_slice_new0 (QmiMessageVoiceCancelUssdOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_CANCEL_USSD_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_cancel_ussd_output_unref (self);
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
                qmi_message_voice_cancel_ussd_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Get Config */


/* --- Input -- */

struct _QmiMessageVoiceGetConfigInput {
    volatile gint ref_count;

    /* Voice Domain Preference */
    gboolean arg_voice_domain_preference_set;
    guint8 arg_voice_domain_preference;

    /* NAM Index */
    gboolean arg_nam_index_set;
    guint8 arg_nam_index;

    /* Preferred Voice Privacy */
    gboolean arg_preferred_voice_privacy_set;
    guint8 arg_preferred_voice_privacy;

    /* AMR Status */
    gboolean arg_amr_status_set;
    guint8 arg_amr_status;

    /* Preferred Voice Service Option */
    gboolean arg_preferred_voice_service_option_set;
    guint8 arg_preferred_voice_service_option;

    /* TTY Mode */
    gboolean arg_tty_mode_set;
    guint8 arg_tty_mode;

    /* Roam Timer */
    gboolean arg_roam_timer_set;
    guint8 arg_roam_timer;

    /* Air Timer */
    gboolean arg_air_timer_set;
    guint8 arg_air_timer;

    /* Auto Answer */
    gboolean arg_auto_answer_set;
    guint8 arg_auto_answer;
};

#define QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_VOICE_DOMAIN_PREFERENCE 0x18
#define QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_NAM_INDEX 0x17
#define QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_PREFERRED_VOICE_PRIVACY 0x16
#define QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_AMR_STATUS 0x15
#define QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_PREFERRED_VOICE_SERVICE_OPTION 0x14
#define QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_TTY_MODE 0x13
#define QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_ROAM_TIMER 0x12
#define QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_AIR_TIMER 0x11
#define QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_AUTO_ANSWER 0x10

gboolean
qmi_message_voice_get_config_input_get_voice_domain_preference (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_voice_domain_preference,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_voice_domain_preference_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Voice Domain Preference' was not found in the message");
        return FALSE;
    }

    if (value_voice_domain_preference)
        *value_voice_domain_preference = (gboolean)(self->arg_voice_domain_preference);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_set_voice_domain_preference (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_voice_domain_preference,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_voice_domain_preference = (guint8)(value_voice_domain_preference);
    self->arg_voice_domain_preference_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_get_nam_index (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_nam_index,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_nam_index_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'NAM Index' was not found in the message");
        return FALSE;
    }

    if (value_nam_index)
        *value_nam_index = (gboolean)(self->arg_nam_index);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_set_nam_index (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_nam_index,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_nam_index = (guint8)(value_nam_index);
    self->arg_nam_index_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_get_preferred_voice_privacy (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_preferred_voice_privacy,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_preferred_voice_privacy_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Preferred Voice Privacy' was not found in the message");
        return FALSE;
    }

    if (value_preferred_voice_privacy)
        *value_preferred_voice_privacy = (gboolean)(self->arg_preferred_voice_privacy);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_set_preferred_voice_privacy (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_preferred_voice_privacy,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_preferred_voice_privacy = (guint8)(value_preferred_voice_privacy);
    self->arg_preferred_voice_privacy_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_get_amr_status (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_amr_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_amr_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'AMR Status' was not found in the message");
        return FALSE;
    }

    if (value_amr_status)
        *value_amr_status = (gboolean)(self->arg_amr_status);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_set_amr_status (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_amr_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_amr_status = (guint8)(value_amr_status);
    self->arg_amr_status_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_get_preferred_voice_service_option (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_preferred_voice_service_option,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_preferred_voice_service_option_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Preferred Voice Service Option' was not found in the message");
        return FALSE;
    }

    if (value_preferred_voice_service_option)
        *value_preferred_voice_service_option = (gboolean)(self->arg_preferred_voice_service_option);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_set_preferred_voice_service_option (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_preferred_voice_service_option,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_preferred_voice_service_option = (guint8)(value_preferred_voice_service_option);
    self->arg_preferred_voice_service_option_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_get_tty_mode (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_tty_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_tty_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'TTY Mode' was not found in the message");
        return FALSE;
    }

    if (value_tty_mode)
        *value_tty_mode = (gboolean)(self->arg_tty_mode);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_set_tty_mode (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_tty_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_tty_mode = (guint8)(value_tty_mode);
    self->arg_tty_mode_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_get_roam_timer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_roam_timer,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_roam_timer_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Roam Timer' was not found in the message");
        return FALSE;
    }

    if (value_roam_timer)
        *value_roam_timer = (gboolean)(self->arg_roam_timer);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_set_roam_timer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_roam_timer,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_roam_timer = (guint8)(value_roam_timer);
    self->arg_roam_timer_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_get_air_timer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_air_timer,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_air_timer_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Air Timer' was not found in the message");
        return FALSE;
    }

    if (value_air_timer)
        *value_air_timer = (gboolean)(self->arg_air_timer);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_set_air_timer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_air_timer,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_air_timer = (guint8)(value_air_timer);
    self->arg_air_timer_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_get_auto_answer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_auto_answer,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_auto_answer_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Auto Answer' was not found in the message");
        return FALSE;
    }

    if (value_auto_answer)
        *value_auto_answer = (gboolean)(self->arg_auto_answer);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_input_set_auto_answer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_auto_answer,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_auto_answer = (guint8)(value_auto_answer);
    self->arg_auto_answer_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_get_config_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceGetConfigInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_get_config_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_get_config_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceGetConfigInput *
qmi_message_voice_get_config_input_ref (QmiMessageVoiceGetConfigInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_get_config_input_unref (QmiMessageVoiceGetConfigInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceGetConfigInput, self);
    }
}

QmiMessageVoiceGetConfigInput *
qmi_message_voice_get_config_input_new (void)
{
    QmiMessageVoiceGetConfigInput *self;

    self = g_slice_new0 (QmiMessageVoiceGetConfigInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_get_config_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceGetConfigInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_GET_CONFIG);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Voice Domain Preference' TLV */
    if (input->arg_voice_domain_preference_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_VOICE_DOMAIN_PREFERENCE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Voice Domain Preference': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_voice_domain_preference;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Voice Domain Preference': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Voice Domain Preference': ");
            return NULL;
        }
    }

    /* Try to add the 'NAM Index' TLV */
    if (input->arg_nam_index_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_NAM_INDEX, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'NAM Index': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_nam_index;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'NAM Index': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'NAM Index': ");
            return NULL;
        }
    }

    /* Try to add the 'Preferred Voice Privacy' TLV */
    if (input->arg_preferred_voice_privacy_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_PREFERRED_VOICE_PRIVACY, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Preferred Voice Privacy': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_preferred_voice_privacy;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Preferred Voice Privacy': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Preferred Voice Privacy': ");
            return NULL;
        }
    }

    /* Try to add the 'AMR Status' TLV */
    if (input->arg_amr_status_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_AMR_STATUS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'AMR Status': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_amr_status;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'AMR Status': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'AMR Status': ");
            return NULL;
        }
    }

    /* Try to add the 'Preferred Voice Service Option' TLV */
    if (input->arg_preferred_voice_service_option_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_PREFERRED_VOICE_SERVICE_OPTION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Preferred Voice Service Option': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_preferred_voice_service_option;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Preferred Voice Service Option': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Preferred Voice Service Option': ");
            return NULL;
        }
    }

    /* Try to add the 'TTY Mode' TLV */
    if (input->arg_tty_mode_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_TTY_MODE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'TTY Mode': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_tty_mode;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'TTY Mode': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'TTY Mode': ");
            return NULL;
        }
    }

    /* Try to add the 'Roam Timer' TLV */
    if (input->arg_roam_timer_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_ROAM_TIMER, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Roam Timer': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_roam_timer;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Roam Timer': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Roam Timer': ");
            return NULL;
        }
    }

    /* Try to add the 'Air Timer' TLV */
    if (input->arg_air_timer_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_AIR_TIMER, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Air Timer': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_air_timer;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Air Timer': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Air Timer': ");
            return NULL;
        }
    }

    /* Try to add the 'Auto Answer' TLV */
    if (input->arg_auto_answer_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_AUTO_ANSWER, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Auto Answer': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_auto_answer;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Auto Answer': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Auto Answer': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceGetConfigOutput {
    volatile gint ref_count;

    /* Current Voice Domain Preference */
    gboolean arg_current_voice_domain_preference_set;
    guint8 arg_current_voice_domain_preference;

    /* Current Voice Privacy Preference */
    gboolean arg_current_voice_privacy_preference_set;
    guint8 arg_current_voice_privacy_preference;

    /* Current AMR Status */
    gboolean arg_current_amr_status_set;
    guint8 arg_current_amr_status_gsm;
    guint8 arg_current_amr_status_wcdma;

    /* Current Preferred Voice SO */
    gboolean arg_current_preferred_voice_so_set;
    guint8 arg_current_preferred_voice_so_nam_id;
    guint8 arg_current_preferred_voice_so_evrc_capability;
    guint16 arg_current_preferred_voice_so_home_page_voice_service_option;
    guint16 arg_current_preferred_voice_so_home_origination_voice_service_option;
    guint16 arg_current_preferred_voice_so_roaming_origination_voice_service_option;

    /* Current TTY Mode */
    gboolean arg_current_tty_mode_set;
    guint8 arg_current_tty_mode;

    /* Roam Timer Count */
    gboolean arg_roam_timer_count_set;
    guint8 arg_roam_timer_count_nam_id;
    guint32 arg_roam_timer_count_roam_timer;

    /* Air Timer Count */
    gboolean arg_air_timer_count_set;
    guint8 arg_air_timer_count_nam_id;
    guint32 arg_air_timer_count_air_timer;

    /* Auto Answer Status */
    gboolean arg_auto_answer_status_set;
    guint8 arg_auto_answer_status;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_VOICE_DOMAIN_PREFERENCE 0x17
#define QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_VOICE_PRIVACY_PREFERENCE 0x16
#define QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_AMR_STATUS 0x15
#define QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_PREFERRED_VOICE_SO 0x14
#define QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_TTY_MODE 0x13
#define QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_ROAM_TIMER_COUNT 0x12
#define QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_AIR_TIMER_COUNT 0x11
#define QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_AUTO_ANSWER_STATUS 0x10
#define QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_voice_get_config_output_get_current_voice_domain_preference (
    QmiMessageVoiceGetConfigOutput *self,
    QmiVoiceDomain *value_current_voice_domain_preference,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_current_voice_domain_preference_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Current Voice Domain Preference' was not found in the message");
        return FALSE;
    }

    if (value_current_voice_domain_preference)
        *value_current_voice_domain_preference = (QmiVoiceDomain)(self->arg_current_voice_domain_preference);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_output_get_current_voice_privacy_preference (
    QmiMessageVoiceGetConfigOutput *self,
    QmiVoicePrivacy *value_current_voice_privacy_preference,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_current_voice_privacy_preference_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Current Voice Privacy Preference' was not found in the message");
        return FALSE;
    }

    if (value_current_voice_privacy_preference)
        *value_current_voice_privacy_preference = (QmiVoicePrivacy)(self->arg_current_voice_privacy_preference);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_output_get_current_amr_status (
    QmiMessageVoiceGetConfigOutput *self,
    gboolean *value_current_amr_status_gsm,
    QmiVoiceWcdmaAmrStatus *value_current_amr_status_wcdma,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_current_amr_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Current AMR Status' was not found in the message");
        return FALSE;
    }

    if (value_current_amr_status_gsm)
        *value_current_amr_status_gsm = (gboolean)(self->arg_current_amr_status_gsm);
    if (value_current_amr_status_wcdma)
        *value_current_amr_status_wcdma = (QmiVoiceWcdmaAmrStatus)(self->arg_current_amr_status_wcdma);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_output_get_current_preferred_voice_so (
    QmiMessageVoiceGetConfigOutput *self,
    guint8 *value_current_preferred_voice_so_nam_id,
    gboolean *value_current_preferred_voice_so_evrc_capability,
    QmiVoiceServiceOption *value_current_preferred_voice_so_home_page_voice_service_option,
    QmiVoiceServiceOption *value_current_preferred_voice_so_home_origination_voice_service_option,
    QmiVoiceServiceOption *value_current_preferred_voice_so_roaming_origination_voice_service_option,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_current_preferred_voice_so_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Current Preferred Voice SO' was not found in the message");
        return FALSE;
    }

    if (value_current_preferred_voice_so_nam_id)
        *value_current_preferred_voice_so_nam_id = self->arg_current_preferred_voice_so_nam_id;
    if (value_current_preferred_voice_so_evrc_capability)
        *value_current_preferred_voice_so_evrc_capability = (gboolean)(self->arg_current_preferred_voice_so_evrc_capability);
    if (value_current_preferred_voice_so_home_page_voice_service_option)
        *value_current_preferred_voice_so_home_page_voice_service_option = (QmiVoiceServiceOption)(self->arg_current_preferred_voice_so_home_page_voice_service_option);
    if (value_current_preferred_voice_so_home_origination_voice_service_option)
        *value_current_preferred_voice_so_home_origination_voice_service_option = (QmiVoiceServiceOption)(self->arg_current_preferred_voice_so_home_origination_voice_service_option);
    if (value_current_preferred_voice_so_roaming_origination_voice_service_option)
        *value_current_preferred_voice_so_roaming_origination_voice_service_option = (QmiVoiceServiceOption)(self->arg_current_preferred_voice_so_roaming_origination_voice_service_option);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_output_get_current_tty_mode (
    QmiMessageVoiceGetConfigOutput *self,
    QmiVoiceTtyMode *value_current_tty_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_current_tty_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Current TTY Mode' was not found in the message");
        return FALSE;
    }

    if (value_current_tty_mode)
        *value_current_tty_mode = (QmiVoiceTtyMode)(self->arg_current_tty_mode);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_output_get_roam_timer_count (
    QmiMessageVoiceGetConfigOutput *self,
    guint8 *value_roam_timer_count_nam_id,
    guint32 *value_roam_timer_count_roam_timer,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_roam_timer_count_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Roam Timer Count' was not found in the message");
        return FALSE;
    }

    if (value_roam_timer_count_nam_id)
        *value_roam_timer_count_nam_id = self->arg_roam_timer_count_nam_id;
    if (value_roam_timer_count_roam_timer)
        *value_roam_timer_count_roam_timer = self->arg_roam_timer_count_roam_timer;

    return TRUE;
}

gboolean
qmi_message_voice_get_config_output_get_air_timer_count (
    QmiMessageVoiceGetConfigOutput *self,
    guint8 *value_air_timer_count_nam_id,
    guint32 *value_air_timer_count_air_timer,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_air_timer_count_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Air Timer Count' was not found in the message");
        return FALSE;
    }

    if (value_air_timer_count_nam_id)
        *value_air_timer_count_nam_id = self->arg_air_timer_count_nam_id;
    if (value_air_timer_count_air_timer)
        *value_air_timer_count_air_timer = self->arg_air_timer_count_air_timer;

    return TRUE;
}

gboolean
qmi_message_voice_get_config_output_get_auto_answer_status (
    QmiMessageVoiceGetConfigOutput *self,
    gboolean *value_auto_answer_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_auto_answer_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Auto Answer Status' was not found in the message");
        return FALSE;
    }

    if (value_auto_answer_status)
        *value_auto_answer_status = (gboolean)(self->arg_auto_answer_status);

    return TRUE;
}

gboolean
qmi_message_voice_get_config_output_get_result (
    QmiMessageVoiceGetConfigOutput *self,
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
qmi_message_voice_get_config_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceGetConfigOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_get_config_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_get_config_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceGetConfigOutput *
qmi_message_voice_get_config_output_ref (QmiMessageVoiceGetConfigOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_get_config_output_unref (QmiMessageVoiceGetConfigOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceGetConfigOutput, self);
    }
}

static gchar *
qmi_message_voice_get_config_input_voice_domain_preference_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_VOICE_DOMAIN_PREFERENCE, NULL, NULL)) == 0)
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
qmi_message_voice_get_config_input_nam_index_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_NAM_INDEX, NULL, NULL)) == 0)
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
qmi_message_voice_get_config_input_preferred_voice_privacy_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_PREFERRED_VOICE_PRIVACY, NULL, NULL)) == 0)
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
qmi_message_voice_get_config_input_amr_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_AMR_STATUS, NULL, NULL)) == 0)
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
qmi_message_voice_get_config_input_preferred_voice_service_option_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_PREFERRED_VOICE_SERVICE_OPTION, NULL, NULL)) == 0)
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
qmi_message_voice_get_config_input_tty_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_TTY_MODE, NULL, NULL)) == 0)
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
qmi_message_voice_get_config_input_roam_timer_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_ROAM_TIMER, NULL, NULL)) == 0)
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
qmi_message_voice_get_config_input_air_timer_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_AIR_TIMER, NULL, NULL)) == 0)
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
qmi_message_voice_get_config_input_auto_answer_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_AUTO_ANSWER, NULL, NULL)) == 0)
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
qmi_message_voice_get_config_output_current_voice_domain_preference_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_VOICE_DOMAIN_PREFERENCE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_DOMAIN_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_domain_get_string ((QmiVoiceDomain)tmp));
#elif defined  __QMI_VOICE_DOMAIN_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_domain_build_string_from_mask ((QmiVoiceDomain)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceDomain
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
qmi_message_voice_get_config_output_current_voice_privacy_preference_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_VOICE_PRIVACY_PREFERENCE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_PRIVACY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_privacy_get_string ((QmiVoicePrivacy)tmp));
#elif defined  __QMI_VOICE_PRIVACY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_privacy_build_string_from_mask ((QmiVoicePrivacy)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoicePrivacy
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
qmi_message_voice_get_config_output_current_amr_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_AMR_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " gsm = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " wcdma = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_WCDMA_AMR_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_wcdma_amr_status_get_string ((QmiVoiceWcdmaAmrStatus)tmp));
#elif defined  __QMI_VOICE_WCDMA_AMR_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_wcdma_amr_status_build_string_from_mask ((QmiVoiceWcdmaAmrStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceWcdmaAmrStatus
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
qmi_message_voice_get_config_output_current_preferred_voice_so_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_PREFERRED_VOICE_SO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " nam_id = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " evrc_capability = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " home_page_voice_service_option = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_SERVICE_OPTION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_service_option_get_string ((QmiVoiceServiceOption)tmp));
#elif defined  __QMI_VOICE_SERVICE_OPTION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_service_option_build_string_from_mask ((QmiVoiceServiceOption)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceServiceOption
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " home_origination_voice_service_option = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_SERVICE_OPTION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_service_option_get_string ((QmiVoiceServiceOption)tmp));
#elif defined  __QMI_VOICE_SERVICE_OPTION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_service_option_build_string_from_mask ((QmiVoiceServiceOption)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceServiceOption
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " roaming_origination_voice_service_option = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_SERVICE_OPTION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_service_option_get_string ((QmiVoiceServiceOption)tmp));
#elif defined  __QMI_VOICE_SERVICE_OPTION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_service_option_build_string_from_mask ((QmiVoiceServiceOption)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceServiceOption
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
qmi_message_voice_get_config_output_current_tty_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_TTY_MODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_TTY_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_tty_mode_get_string ((QmiVoiceTtyMode)tmp));
#elif defined  __QMI_VOICE_TTY_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_tty_mode_build_string_from_mask ((QmiVoiceTtyMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceTtyMode
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
qmi_message_voice_get_config_output_roam_timer_count_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_ROAM_TIMER_COUNT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " nam_id = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " roam_timer = '");

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
qmi_message_voice_get_config_output_air_timer_count_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_AIR_TIMER_COUNT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " nam_id = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " air_timer = '");

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
qmi_message_voice_get_config_output_auto_answer_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_AUTO_ANSWER_STATUS, NULL, NULL)) == 0)
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

struct message_get_config_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_config_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_config_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_VOICE_DOMAIN_PREFERENCE:
            tlv_type_str = "Voice Domain Preference";
            translated_value = qmi_message_voice_get_config_input_voice_domain_preference_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_NAM_INDEX:
            tlv_type_str = "NAM Index";
            translated_value = qmi_message_voice_get_config_input_nam_index_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_PREFERRED_VOICE_PRIVACY:
            tlv_type_str = "Preferred Voice Privacy";
            translated_value = qmi_message_voice_get_config_input_preferred_voice_privacy_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_AMR_STATUS:
            tlv_type_str = "AMR Status";
            translated_value = qmi_message_voice_get_config_input_amr_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_PREFERRED_VOICE_SERVICE_OPTION:
            tlv_type_str = "Preferred Voice Service Option";
            translated_value = qmi_message_voice_get_config_input_preferred_voice_service_option_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_TTY_MODE:
            tlv_type_str = "TTY Mode";
            translated_value = qmi_message_voice_get_config_input_tty_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_ROAM_TIMER:
            tlv_type_str = "Roam Timer";
            translated_value = qmi_message_voice_get_config_input_roam_timer_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_AIR_TIMER:
            tlv_type_str = "Air Timer";
            translated_value = qmi_message_voice_get_config_input_air_timer_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_INPUT_TLV_AUTO_ANSWER:
            tlv_type_str = "Auto Answer";
            translated_value = qmi_message_voice_get_config_input_auto_answer_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_VOICE_DOMAIN_PREFERENCE:
            tlv_type_str = "Current Voice Domain Preference";
            translated_value = qmi_message_voice_get_config_output_current_voice_domain_preference_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_VOICE_PRIVACY_PREFERENCE:
            tlv_type_str = "Current Voice Privacy Preference";
            translated_value = qmi_message_voice_get_config_output_current_voice_privacy_preference_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_AMR_STATUS:
            tlv_type_str = "Current AMR Status";
            translated_value = qmi_message_voice_get_config_output_current_amr_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_PREFERRED_VOICE_SO:
            tlv_type_str = "Current Preferred Voice SO";
            translated_value = qmi_message_voice_get_config_output_current_preferred_voice_so_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_TTY_MODE:
            tlv_type_str = "Current TTY Mode";
            translated_value = qmi_message_voice_get_config_output_current_tty_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_ROAM_TIMER_COUNT:
            tlv_type_str = "Roam Timer Count";
            translated_value = qmi_message_voice_get_config_output_roam_timer_count_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_AIR_TIMER_COUNT:
            tlv_type_str = "Air Timer Count";
            translated_value = qmi_message_voice_get_config_output_air_timer_count_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_AUTO_ANSWER_STATUS:
            tlv_type_str = "Auto Answer Status";
            translated_value = qmi_message_voice_get_config_output_auto_answer_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_RESULT:
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
message_get_config_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Config\" (0x0041)\n",
                            line_prefix);

    {
        struct message_get_config_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_config_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceGetConfigOutput *
qmi_message_voice_get_config_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceGetConfigOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_GET_CONFIG);

    self = g_slice_new0 (QmiMessageVoiceGetConfigOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_VOICE_DOMAIN_PREFERENCE, NULL, NULL)) == 0) {
                goto qmi_message_voice_get_config_output_current_voice_domain_preference_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_get_config_output_current_voice_domain_preference_out;
                self->arg_current_voice_domain_preference = (QmiVoiceDomain)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Current Voice Domain Preference' TLV", offset);
            }

            self->arg_current_voice_domain_preference_set = TRUE;

qmi_message_voice_get_config_output_current_voice_domain_preference_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_VOICE_PRIVACY_PREFERENCE, NULL, NULL)) == 0) {
                goto qmi_message_voice_get_config_output_current_voice_privacy_preference_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_get_config_output_current_voice_privacy_preference_out;
                self->arg_current_voice_privacy_preference = (QmiVoicePrivacy)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Current Voice Privacy Preference' TLV", offset);
            }

            self->arg_current_voice_privacy_preference_set = TRUE;

qmi_message_voice_get_config_output_current_voice_privacy_preference_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_AMR_STATUS, NULL, NULL)) == 0) {
                goto qmi_message_voice_get_config_output_current_amr_status_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_get_config_output_current_amr_status_out;
                self->arg_current_amr_status_gsm = (gboolean)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_get_config_output_current_amr_status_out;
                self->arg_current_amr_status_wcdma = (QmiVoiceWcdmaAmrStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Current AMR Status' TLV", offset);
            }

            self->arg_current_amr_status_set = TRUE;

qmi_message_voice_get_config_output_current_amr_status_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_PREFERRED_VOICE_SO, NULL, NULL)) == 0) {
                goto qmi_message_voice_get_config_output_current_preferred_voice_so_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_current_preferred_voice_so_nam_id), NULL))
                goto qmi_message_voice_get_config_output_current_preferred_voice_so_out;
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_get_config_output_current_preferred_voice_so_out;
                self->arg_current_preferred_voice_so_evrc_capability = (gboolean)tmp;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_voice_get_config_output_current_preferred_voice_so_out;
                self->arg_current_preferred_voice_so_home_page_voice_service_option = (QmiVoiceServiceOption)tmp;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_voice_get_config_output_current_preferred_voice_so_out;
                self->arg_current_preferred_voice_so_home_origination_voice_service_option = (QmiVoiceServiceOption)tmp;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_voice_get_config_output_current_preferred_voice_so_out;
                self->arg_current_preferred_voice_so_roaming_origination_voice_service_option = (QmiVoiceServiceOption)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Current Preferred Voice SO' TLV", offset);
            }

            self->arg_current_preferred_voice_so_set = TRUE;

qmi_message_voice_get_config_output_current_preferred_voice_so_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_CURRENT_TTY_MODE, NULL, NULL)) == 0) {
                goto qmi_message_voice_get_config_output_current_tty_mode_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_get_config_output_current_tty_mode_out;
                self->arg_current_tty_mode = (QmiVoiceTtyMode)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Current TTY Mode' TLV", offset);
            }

            self->arg_current_tty_mode_set = TRUE;

qmi_message_voice_get_config_output_current_tty_mode_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_ROAM_TIMER_COUNT, NULL, NULL)) == 0) {
                goto qmi_message_voice_get_config_output_roam_timer_count_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_roam_timer_count_nam_id), NULL))
                goto qmi_message_voice_get_config_output_roam_timer_count_out;
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_roam_timer_count_roam_timer), NULL))
                goto qmi_message_voice_get_config_output_roam_timer_count_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Roam Timer Count' TLV", offset);
            }

            self->arg_roam_timer_count_set = TRUE;

qmi_message_voice_get_config_output_roam_timer_count_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_AIR_TIMER_COUNT, NULL, NULL)) == 0) {
                goto qmi_message_voice_get_config_output_air_timer_count_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_air_timer_count_nam_id), NULL))
                goto qmi_message_voice_get_config_output_air_timer_count_out;
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_air_timer_count_air_timer), NULL))
                goto qmi_message_voice_get_config_output_air_timer_count_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Air Timer Count' TLV", offset);
            }

            self->arg_air_timer_count_set = TRUE;

qmi_message_voice_get_config_output_air_timer_count_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_AUTO_ANSWER_STATUS, NULL, NULL)) == 0) {
                goto qmi_message_voice_get_config_output_auto_answer_status_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_voice_get_config_output_auto_answer_status_out;
                self->arg_auto_answer_status = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Auto Answer Status' TLV", offset);
            }

            self->arg_auto_answer_status_set = TRUE;

qmi_message_voice_get_config_output_auto_answer_status_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_GET_CONFIG_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_get_config_output_unref (self);
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
                qmi_message_voice_get_config_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Originate USSD No Wait */


/* --- Input -- */

struct _QmiMessageVoiceOriginateUssdNoWaitInput {
    volatile gint ref_count;

    /* USS Data */
    gboolean arg_uss_data_set;
    guint8 arg_uss_data_data_coding_scheme;
    GArray *arg_uss_data_data;
};

#define QMI_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT_INPUT_TLV_USS_DATA 0x01

gboolean
qmi_message_voice_originate_ussd_no_wait_input_get_uss_data (
    QmiMessageVoiceOriginateUssdNoWaitInput *self,
    QmiVoiceUssDataCodingScheme *value_uss_data_data_coding_scheme,
    GArray **value_uss_data_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_uss_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'USS Data' was not found in the message");
        return FALSE;
    }

    if (value_uss_data_data_coding_scheme)
        *value_uss_data_data_coding_scheme = (QmiVoiceUssDataCodingScheme)(self->arg_uss_data_data_coding_scheme);
    if (value_uss_data_data)
        *value_uss_data_data = self->arg_uss_data_data;

    return TRUE;
}

gboolean
qmi_message_voice_originate_ussd_no_wait_input_set_uss_data (
    QmiMessageVoiceOriginateUssdNoWaitInput *self,
    QmiVoiceUssDataCodingScheme value_uss_data_data_coding_scheme,
    GArray *value_uss_data_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_uss_data_data_coding_scheme = (guint8)(value_uss_data_data_coding_scheme);
    g_clear_pointer (&self->arg_uss_data_data, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_uss_data_data, (GDestroyNotify)g_ptr_array_unref);
    self->arg_uss_data_data = g_array_ref (value_uss_data_data);
    self->arg_uss_data_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_originate_ussd_no_wait_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceOriginateUssdNoWaitInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_originate_ussd_no_wait_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_originate_ussd_no_wait_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceOriginateUssdNoWaitInput *
qmi_message_voice_originate_ussd_no_wait_input_ref (QmiMessageVoiceOriginateUssdNoWaitInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_originate_ussd_no_wait_input_unref (QmiMessageVoiceOriginateUssdNoWaitInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_uss_data_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageVoiceOriginateUssdNoWaitInput, self);
    }
}

QmiMessageVoiceOriginateUssdNoWaitInput *
qmi_message_voice_originate_ussd_no_wait_input_new (void)
{
    QmiMessageVoiceOriginateUssdNoWaitInput *self;

    self = g_slice_new0 (QmiMessageVoiceOriginateUssdNoWaitInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_originate_ussd_no_wait_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceOriginateUssdNoWaitInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Originate USSD No Wait' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'USS Data' TLV */
    if (input->arg_uss_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT_INPUT_TLV_USS_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'USS Data': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_uss_data_data_coding_scheme;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'USS Data': ");
                return NULL;
            }
        }
        {
            guint data_i;
            guint8 data_n_items;

            /* Write the number of items in the array first */
            data_n_items = (guint8) input->arg_uss_data_data->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, data_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'USS Data': ");
                return NULL;
            }

            for (data_i = 0; data_i < input->arg_uss_data_data->len; data_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_uss_data_data, guint8,data_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'USS Data': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'USS Data': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'USS Data' in message 'Originate USSD No Wait'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceOriginateUssdNoWaitOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_voice_originate_ussd_no_wait_output_get_result (
    QmiMessageVoiceOriginateUssdNoWaitOutput *self,
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
qmi_message_voice_originate_ussd_no_wait_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceOriginateUssdNoWaitOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_originate_ussd_no_wait_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_originate_ussd_no_wait_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceOriginateUssdNoWaitOutput *
qmi_message_voice_originate_ussd_no_wait_output_ref (QmiMessageVoiceOriginateUssdNoWaitOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_originate_ussd_no_wait_output_unref (QmiMessageVoiceOriginateUssdNoWaitOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceOriginateUssdNoWaitOutput, self);
    }
}

static gchar *
qmi_message_voice_originate_ussd_no_wait_input_uss_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT_INPUT_TLV_USS_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " data_coding_scheme = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_VOICE_USS_DATA_CODING_SCHEME_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_voice_uss_data_coding_scheme_get_string ((QmiVoiceUssDataCodingScheme)tmp));
#elif defined  __QMI_VOICE_USS_DATA_CODING_SCHEME_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_voice_uss_data_coding_scheme_build_string_from_mask ((QmiVoiceUssDataCodingScheme)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiVoiceUssDataCodingScheme
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " data = '");
    {
        guint data_i;
        guint8 data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (data_i = 0; data_i < data_n_items; data_i++) {
            g_string_append_printf (printable, " [%u] = '", data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                if (qmi_utils_get_show_personal_info ()) {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                } else {
                    g_string_append_printf (printable, "'###'");
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

struct message_originate_ussd_no_wait_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_originate_ussd_no_wait_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_originate_ussd_no_wait_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT_INPUT_TLV_USS_DATA:
            tlv_type_str = "USS Data";
            translated_value = qmi_message_voice_originate_ussd_no_wait_input_uss_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_RESULT:
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
message_originate_ussd_no_wait_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Originate USSD No Wait\" (0x0043)\n",
                            line_prefix);

    {
        struct message_originate_ussd_no_wait_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_originate_ussd_no_wait_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceOriginateUssdNoWaitOutput *
qmi_message_voice_originate_ussd_no_wait_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceOriginateUssdNoWaitOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT);

    self = g_slice_new0 (QmiMessageVoiceOriginateUssdNoWaitOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_originate_ussd_no_wait_output_unref (self);
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
                qmi_message_voice_originate_ussd_no_wait_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Burst DTMF */


/* --- Input -- */

struct _QmiMessageVoiceBurstDtmfInput {
    volatile gint ref_count;

    /* Data */
    gboolean arg_data_set;
    guint8 arg_data_call_id;
    gchar *arg_data_digit_buffer;
};

#define QMI_MESSAGE_VOICE_BURST_DTMF_INPUT_TLV_DATA 0x01

gboolean
qmi_message_voice_burst_dtmf_input_get_data (
    QmiMessageVoiceBurstDtmfInput *self,
    guint8 *value_data_call_id,
    const gchar **value_data_digit_buffer,
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

    if (value_data_call_id)
        *value_data_call_id = self->arg_data_call_id;
    if (value_data_digit_buffer)
        *value_data_digit_buffer = self->arg_data_digit_buffer;

    return TRUE;
}

gboolean
qmi_message_voice_burst_dtmf_input_set_data (
    QmiMessageVoiceBurstDtmfInput *self,
    guint8 value_data_call_id,
    const gchar *value_data_digit_buffer,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_data_call_id = value_data_call_id;
    g_free (self->arg_data_digit_buffer);
    self->arg_data_digit_buffer = g_strdup (value_data_digit_buffer ? value_data_digit_buffer : "");
    self->arg_data_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_burst_dtmf_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceBurstDtmfInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_burst_dtmf_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_burst_dtmf_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceBurstDtmfInput *
qmi_message_voice_burst_dtmf_input_ref (QmiMessageVoiceBurstDtmfInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_burst_dtmf_input_unref (QmiMessageVoiceBurstDtmfInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_data_digit_buffer, (GDestroyNotify)g_free);
        g_slice_free (QmiMessageVoiceBurstDtmfInput, self);
    }
}

QmiMessageVoiceBurstDtmfInput *
qmi_message_voice_burst_dtmf_input_new (void)
{
    QmiMessageVoiceBurstDtmfInput *self;

    self = g_slice_new0 (QmiMessageVoiceBurstDtmfInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_burst_dtmf_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceBurstDtmfInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_BURST_DTMF);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Burst DTMF' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Data' TLV */
    if (input->arg_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_BURST_DTMF_INPUT_TLV_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Data': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_data_call_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Data': ");
            return NULL;
        }
        if (!qmi_message_tlv_write_string (self, 1, input->arg_data_digit_buffer, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'Data': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Data': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Data' in message 'Burst DTMF'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceBurstDtmfOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Call ID */
    gboolean arg_call_id_set;
    guint8 arg_call_id;
};

#define QMI_MESSAGE_VOICE_BURST_DTMF_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_VOICE_BURST_DTMF_OUTPUT_TLV_CALL_ID 0x10

gboolean
qmi_message_voice_burst_dtmf_output_get_result (
    QmiMessageVoiceBurstDtmfOutput *self,
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
qmi_message_voice_burst_dtmf_output_get_call_id (
    QmiMessageVoiceBurstDtmfOutput *self,
    guint8 *value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call ID' was not found in the message");
        return FALSE;
    }

    if (value_call_id)
        *value_call_id = self->arg_call_id;

    return TRUE;
}

GType
qmi_message_voice_burst_dtmf_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceBurstDtmfOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_burst_dtmf_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_burst_dtmf_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceBurstDtmfOutput *
qmi_message_voice_burst_dtmf_output_ref (QmiMessageVoiceBurstDtmfOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_burst_dtmf_output_unref (QmiMessageVoiceBurstDtmfOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceBurstDtmfOutput, self);
    }
}

static gchar *
qmi_message_voice_burst_dtmf_input_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_BURST_DTMF_INPUT_TLV_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " call_id = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        if (qmi_utils_get_show_personal_info ()) {
            g_string_append_printf (printable, "%u", (guint)tmp);
        } else {
            g_string_append_printf (printable, "'###'");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " digit_buffer = '");

    {
        g_autofree gchar *tmp = NULL;

        if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
            goto out;
        if (qmi_utils_get_show_personal_info ()) {
            g_string_append (printable, tmp);
        } else {
            g_string_append_printf (printable, "'###'");
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
qmi_message_voice_burst_dtmf_output_call_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_BURST_DTMF_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        if (qmi_utils_get_show_personal_info ()) {
            g_string_append_printf (printable, "%u", (guint)tmp);
        } else {
            g_string_append_printf (printable, "'###'");
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

struct message_burst_dtmf_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_burst_dtmf_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_burst_dtmf_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_BURST_DTMF_INPUT_TLV_DATA:
            tlv_type_str = "Data";
            translated_value = qmi_message_voice_burst_dtmf_input_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_BURST_DTMF_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_BURST_DTMF_OUTPUT_TLV_CALL_ID:
            tlv_type_str = "Call ID";
            translated_value = qmi_message_voice_burst_dtmf_output_call_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
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
message_burst_dtmf_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Burst DTMF\" (0x0028)\n",
                            line_prefix);

    {
        struct message_burst_dtmf_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_burst_dtmf_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceBurstDtmfOutput *
qmi_message_voice_burst_dtmf_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceBurstDtmfOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_BURST_DTMF);

    self = g_slice_new0 (QmiMessageVoiceBurstDtmfOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_BURST_DTMF_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_burst_dtmf_output_unref (self);
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
                qmi_message_voice_burst_dtmf_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_BURST_DTMF_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0) {
                goto qmi_message_voice_burst_dtmf_output_call_id_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_call_id), NULL))
                goto qmi_message_voice_burst_dtmf_output_call_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Call ID' TLV", offset);
            }

            self->arg_call_id_set = TRUE;

qmi_message_voice_burst_dtmf_output_call_id_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Start Continuous DTMF */


/* --- Input -- */

struct _QmiMessageVoiceStartContinuousDtmfInput {
    volatile gint ref_count;

    /* Data */
    gboolean arg_data_set;
    guint8 arg_data_call_id;
    guint8 arg_data_digit;
};

#define QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF_INPUT_TLV_DATA 0x01

gboolean
qmi_message_voice_start_continuous_dtmf_input_get_data (
    QmiMessageVoiceStartContinuousDtmfInput *self,
    guint8 *value_data_call_id,
    guint8 *value_data_digit,
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

    if (value_data_call_id)
        *value_data_call_id = self->arg_data_call_id;
    if (value_data_digit)
        *value_data_digit = self->arg_data_digit;

    return TRUE;
}

gboolean
qmi_message_voice_start_continuous_dtmf_input_set_data (
    QmiMessageVoiceStartContinuousDtmfInput *self,
    guint8 value_data_call_id,
    guint8 value_data_digit,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_data_call_id = value_data_call_id;
    self->arg_data_digit = value_data_digit;
    self->arg_data_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_start_continuous_dtmf_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceStartContinuousDtmfInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_start_continuous_dtmf_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_start_continuous_dtmf_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceStartContinuousDtmfInput *
qmi_message_voice_start_continuous_dtmf_input_ref (QmiMessageVoiceStartContinuousDtmfInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_start_continuous_dtmf_input_unref (QmiMessageVoiceStartContinuousDtmfInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceStartContinuousDtmfInput, self);
    }
}

QmiMessageVoiceStartContinuousDtmfInput *
qmi_message_voice_start_continuous_dtmf_input_new (void)
{
    QmiMessageVoiceStartContinuousDtmfInput *self;

    self = g_slice_new0 (QmiMessageVoiceStartContinuousDtmfInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_start_continuous_dtmf_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceStartContinuousDtmfInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Start Continuous DTMF' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Data' TLV */
    if (input->arg_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF_INPUT_TLV_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Data': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_data_call_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Data': ");
            return NULL;
        }
        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_data_digit, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Data': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Data': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Data' in message 'Start Continuous DTMF'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceStartContinuousDtmfOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Call ID */
    gboolean arg_call_id_set;
    guint8 arg_call_id;
};

#define QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF_OUTPUT_TLV_CALL_ID 0x10

gboolean
qmi_message_voice_start_continuous_dtmf_output_get_result (
    QmiMessageVoiceStartContinuousDtmfOutput *self,
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
qmi_message_voice_start_continuous_dtmf_output_get_call_id (
    QmiMessageVoiceStartContinuousDtmfOutput *self,
    guint8 *value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call ID' was not found in the message");
        return FALSE;
    }

    if (value_call_id)
        *value_call_id = self->arg_call_id;

    return TRUE;
}

GType
qmi_message_voice_start_continuous_dtmf_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceStartContinuousDtmfOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_start_continuous_dtmf_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_start_continuous_dtmf_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceStartContinuousDtmfOutput *
qmi_message_voice_start_continuous_dtmf_output_ref (QmiMessageVoiceStartContinuousDtmfOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_start_continuous_dtmf_output_unref (QmiMessageVoiceStartContinuousDtmfOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceStartContinuousDtmfOutput, self);
    }
}

static gchar *
qmi_message_voice_start_continuous_dtmf_input_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF_INPUT_TLV_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " call_id = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        if (qmi_utils_get_show_personal_info ()) {
            g_string_append_printf (printable, "%u", (guint)tmp);
        } else {
            g_string_append_printf (printable, "'###'");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " digit = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        if (qmi_utils_get_show_personal_info ()) {
            g_string_append_printf (printable, "%u", (guint)tmp);
        } else {
            g_string_append_printf (printable, "'###'");
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
qmi_message_voice_start_continuous_dtmf_output_call_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        if (qmi_utils_get_show_personal_info ()) {
            g_string_append_printf (printable, "%u", (guint)tmp);
        } else {
            g_string_append_printf (printable, "'###'");
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

struct message_start_continuous_dtmf_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_start_continuous_dtmf_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_start_continuous_dtmf_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF_INPUT_TLV_DATA:
            tlv_type_str = "Data";
            translated_value = qmi_message_voice_start_continuous_dtmf_input_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF_OUTPUT_TLV_CALL_ID:
            tlv_type_str = "Call ID";
            translated_value = qmi_message_voice_start_continuous_dtmf_output_call_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
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
message_start_continuous_dtmf_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Start Continuous DTMF\" (0x0029)\n",
                            line_prefix);

    {
        struct message_start_continuous_dtmf_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_start_continuous_dtmf_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceStartContinuousDtmfOutput *
qmi_message_voice_start_continuous_dtmf_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceStartContinuousDtmfOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF);

    self = g_slice_new0 (QmiMessageVoiceStartContinuousDtmfOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_start_continuous_dtmf_output_unref (self);
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
                qmi_message_voice_start_continuous_dtmf_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0) {
                goto qmi_message_voice_start_continuous_dtmf_output_call_id_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_call_id), NULL))
                goto qmi_message_voice_start_continuous_dtmf_output_call_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Call ID' TLV", offset);
            }

            self->arg_call_id_set = TRUE;

qmi_message_voice_start_continuous_dtmf_output_call_id_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Stop Continuous DTMF */


/* --- Input -- */

struct _QmiMessageVoiceStopContinuousDtmfInput {
    volatile gint ref_count;

    /* Data */
    gboolean arg_data_set;
    guint8 arg_data_call_id;
};

#define QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_INPUT_TLV_DATA 0x01

gboolean
qmi_message_voice_stop_continuous_dtmf_input_get_data (
    QmiMessageVoiceStopContinuousDtmfInput *self,
    guint8 *value_data_call_id,
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

    if (value_data_call_id)
        *value_data_call_id = self->arg_data_call_id;

    return TRUE;
}

gboolean
qmi_message_voice_stop_continuous_dtmf_input_set_data (
    QmiMessageVoiceStopContinuousDtmfInput *self,
    guint8 value_data_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_data_call_id = value_data_call_id;
    self->arg_data_set = TRUE;

    return TRUE;
}

GType
qmi_message_voice_stop_continuous_dtmf_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceStopContinuousDtmfInput"),
                                          (GBoxedCopyFunc) qmi_message_voice_stop_continuous_dtmf_input_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_stop_continuous_dtmf_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceStopContinuousDtmfInput *
qmi_message_voice_stop_continuous_dtmf_input_ref (QmiMessageVoiceStopContinuousDtmfInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_stop_continuous_dtmf_input_unref (QmiMessageVoiceStopContinuousDtmfInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceStopContinuousDtmfInput, self);
    }
}

QmiMessageVoiceStopContinuousDtmfInput *
qmi_message_voice_stop_continuous_dtmf_input_new (void)
{
    QmiMessageVoiceStopContinuousDtmfInput *self;

    self = g_slice_new0 (QmiMessageVoiceStopContinuousDtmfInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_voice_stop_continuous_dtmf_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageVoiceStopContinuousDtmfInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_VOICE,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Stop Continuous DTMF' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Data' TLV */
    if (input->arg_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_INPUT_TLV_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Data': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_data_call_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Data': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Data': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Data' in message 'Stop Continuous DTMF'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageVoiceStopContinuousDtmfOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Call ID */
    gboolean arg_call_id_set;
    guint8 arg_call_id;
};

#define QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_OUTPUT_TLV_CALL_ID 0x10

gboolean
qmi_message_voice_stop_continuous_dtmf_output_get_result (
    QmiMessageVoiceStopContinuousDtmfOutput *self,
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
qmi_message_voice_stop_continuous_dtmf_output_get_call_id (
    QmiMessageVoiceStopContinuousDtmfOutput *self,
    guint8 *value_call_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_call_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Call ID' was not found in the message");
        return FALSE;
    }

    if (value_call_id)
        *value_call_id = self->arg_call_id;

    return TRUE;
}

GType
qmi_message_voice_stop_continuous_dtmf_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageVoiceStopContinuousDtmfOutput"),
                                          (GBoxedCopyFunc) qmi_message_voice_stop_continuous_dtmf_output_ref,
                                          (GBoxedFreeFunc) qmi_message_voice_stop_continuous_dtmf_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageVoiceStopContinuousDtmfOutput *
qmi_message_voice_stop_continuous_dtmf_output_ref (QmiMessageVoiceStopContinuousDtmfOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_voice_stop_continuous_dtmf_output_unref (QmiMessageVoiceStopContinuousDtmfOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageVoiceStopContinuousDtmfOutput, self);
    }
}

static gchar *
qmi_message_voice_stop_continuous_dtmf_input_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_INPUT_TLV_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " call_id = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        if (qmi_utils_get_show_personal_info ()) {
            g_string_append_printf (printable, "%u", (guint)tmp);
        } else {
            g_string_append_printf (printable, "'###'");
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
qmi_message_voice_stop_continuous_dtmf_output_call_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        if (qmi_utils_get_show_personal_info ()) {
            g_string_append_printf (printable, "%u", (guint)tmp);
        } else {
            g_string_append_printf (printable, "'###'");
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

struct message_stop_continuous_dtmf_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_stop_continuous_dtmf_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_stop_continuous_dtmf_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_INPUT_TLV_DATA:
            tlv_type_str = "Data";
            translated_value = qmi_message_voice_stop_continuous_dtmf_input_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_OUTPUT_TLV_CALL_ID:
            tlv_type_str = "Call ID";
            translated_value = qmi_message_voice_stop_continuous_dtmf_output_call_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
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
message_stop_continuous_dtmf_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Stop Continuous DTMF\" (0x002A)\n",
                            line_prefix);

    {
        struct message_stop_continuous_dtmf_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_stop_continuous_dtmf_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageVoiceStopContinuousDtmfOutput *
qmi_message_voice_stop_continuous_dtmf_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageVoiceStopContinuousDtmfOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF);

    self = g_slice_new0 (QmiMessageVoiceStopContinuousDtmfOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_voice_stop_continuous_dtmf_output_unref (self);
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
                qmi_message_voice_stop_continuous_dtmf_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_OUTPUT_TLV_CALL_ID, NULL, NULL)) == 0) {
                goto qmi_message_voice_stop_continuous_dtmf_output_call_id_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_call_id), NULL))
                goto qmi_message_voice_stop_continuous_dtmf_output_call_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Call ID' TLV", offset);
            }

            self->arg_call_id_set = TRUE;

qmi_message_voice_stop_continuous_dtmf_output_call_id_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: VOICE */


gchar *
__qmi_message_voice_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_VOICE_ALL_CALL_STATUS:
            return indication_all_call_status_get_printable (self, line_prefix);
        case QMI_INDICATION_VOICE_SUPPLEMENTARY_SERVICE:
            return indication_supplementary_service_get_printable (self, line_prefix);
        case QMI_INDICATION_VOICE_RELEASE_USSD:
            return indication_release_ussd_get_printable (self, line_prefix);
        case QMI_INDICATION_VOICE_USSD:
            return indication_ussd_get_printable (self, line_prefix);
        case QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT:
            return indication_originate_ussd_no_wait_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_VOICE_INDICATION_REGISTER:
                return message_indication_register_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES:
                return message_get_supported_messages_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_DIAL_CALL:
                return message_dial_call_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_END_CALL:
                return message_end_call_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_ANSWER_CALL:
                return message_answer_call_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO:
                return message_get_all_call_info_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_MANAGE_CALLS:
                return message_manage_calls_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE:
                return message_set_supplementary_service_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_GET_CALL_WAITING:
                return message_get_call_waiting_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_ORIGINATE_USSD:
                return message_originate_ussd_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_ANSWER_USSD:
                return message_answer_ussd_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_CANCEL_USSD:
                return message_cancel_ussd_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_GET_CONFIG:
                return message_get_config_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT:
                return message_originate_ussd_no_wait_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_BURST_DTMF:
                return message_burst_dtmf_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF:
                return message_start_continuous_dtmf_get_printable (self, line_prefix);
            case QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF:
                return message_stop_continuous_dtmf_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client Voice */

G_DEFINE_TYPE (QmiClientVoice, qmi_client_voice, QMI_TYPE_CLIENT)

enum {
    SIGNAL_ALL_CALL_STATUS,
    SIGNAL_SUPPLEMENTARY_SERVICE,
    SIGNAL_RELEASE_USSD,
    SIGNAL_USSD,
    SIGNAL_ORIGINATE_USSD_NO_WAIT,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_VOICE_ALL_CALL_STATUS: {
            QmiIndicationVoiceAllCallStatusOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_voice_all_call_status_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'All Call Status' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_ALL_CALL_STATUS], 0, output);
                qmi_indication_voice_all_call_status_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_VOICE_SUPPLEMENTARY_SERVICE: {
            QmiIndicationVoiceSupplementaryServiceOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_voice_supplementary_service_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Supplementary Service' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_SUPPLEMENTARY_SERVICE], 0, output);
                qmi_indication_voice_supplementary_service_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_VOICE_RELEASE_USSD: {
            g_signal_emit (self, signals[SIGNAL_RELEASE_USSD], 0, NULL);
            break;
        }
        case QMI_INDICATION_VOICE_USSD: {
            QmiIndicationVoiceUssdOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_voice_ussd_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'USSD' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_USSD], 0, output);
                qmi_indication_voice_ussd_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT: {
            QmiIndicationVoiceOriginateUssdNoWaitOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_voice_originate_ussd_no_wait_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Originate USSD No Wait' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_ORIGINATE_USSD_NO_WAIT], 0, output);
                qmi_indication_voice_originate_ussd_no_wait_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_voice_init (QmiClientVoice *self)
{
}

static void
qmi_client_voice_class_init (QmiClientVoiceClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientVoice::all-call-status:
     * @object: A #QmiClientVoice.
     * @output: A #QmiIndicationVoiceAllCallStatusOutput.
     *
     * The ::all-call-status signal gets emitted when a '<link linkend="libqmi-glib-VOICE-All-Call-Status-indication.top_of_page">All Call Status</link>' indication is received.
     *
     * Since: 1.14
     */
    signals[SIGNAL_ALL_CALL_STATUS] =
        g_signal_new ("all-call-status",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_VOICE_ALL_CALL_STATUS_OUTPUT);

    /**
     * QmiClientVoice::supplementary-service:
     * @object: A #QmiClientVoice.
     * @output: A #QmiIndicationVoiceSupplementaryServiceOutput.
     *
     * The ::supplementary-service signal gets emitted when a '<link linkend="libqmi-glib-VOICE-Supplementary-Service-indication.top_of_page">Supplementary Service</link>' indication is received.
     *
     * Since: 1.30
     */
    signals[SIGNAL_SUPPLEMENTARY_SERVICE] =
        g_signal_new ("supplementary-service",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_VOICE_SUPPLEMENTARY_SERVICE_OUTPUT);

    /**
     * QmiClientVoice::release-ussd:
     * @object: A #QmiClientVoice.
     *
     * The ::release-ussd signal gets emitted when a 'Release USSD' indication is received.
     *
     * Since: 1.26
     */
    signals[SIGNAL_RELEASE_USSD] =
        g_signal_new ("release-ussd",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      0);

    /**
     * QmiClientVoice::ussd:
     * @object: A #QmiClientVoice.
     * @output: A #QmiIndicationVoiceUssdOutput.
     *
     * The ::ussd signal gets emitted when a '<link linkend="libqmi-glib-VOICE-USSD-indication.top_of_page">USSD</link>' indication is received.
     *
     * Since: 1.26
     */
    signals[SIGNAL_USSD] =
        g_signal_new ("ussd",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_VOICE_USSD_OUTPUT);

    /**
     * QmiClientVoice::originate-ussd-no-wait:
     * @object: A #QmiClientVoice.
     * @output: A #QmiIndicationVoiceOriginateUssdNoWaitOutput.
     *
     * The ::originate-ussd-no-wait signal gets emitted when a '<link linkend="libqmi-glib-VOICE-Originate-USSD-No-Wait-indication.top_of_page">Originate USSD No Wait</link>' indication is received.
     *
     * Since: 1.26
     */
    signals[SIGNAL_ORIGINATE_USSD_NO_WAIT] =
        g_signal_new ("originate-ussd-no-wait",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT);
}


QmiMessageVoiceIndicationRegisterOutput *
qmi_client_voice_indication_register_finish (
    QmiClientVoice *self,
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
    QmiMessageVoiceIndicationRegisterOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_indication_register_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_indication_register_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_indication_register (
    QmiClientVoice *self,
    QmiMessageVoiceIndicationRegisterInput *input,
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

    request = __qmi_message_voice_indication_register_request_create (
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


QmiMessageVoiceGetSupportedMessagesOutput *
qmi_client_voice_get_supported_messages_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_supported_messages_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceGetSupportedMessagesOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_get_supported_messages_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_get_supported_messages_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_get_supported_messages (
    QmiClientVoice *self,
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

    request = __qmi_message_voice_get_supported_messages_request_create (
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
                             (GAsyncReadyCallback)get_supported_messages_ready,
                             task);
}


QmiMessageVoiceDialCallOutput *
qmi_client_voice_dial_call_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
dial_call_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceDialCallOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_dial_call_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_dial_call_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_dial_call (
    QmiClientVoice *self,
    QmiMessageVoiceDialCallInput *input,
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

    request = __qmi_message_voice_dial_call_request_create (
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
                             (GAsyncReadyCallback)dial_call_ready,
                             task);
}


QmiMessageVoiceEndCallOutput *
qmi_client_voice_end_call_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
end_call_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceEndCallOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_end_call_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_end_call_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_end_call (
    QmiClientVoice *self,
    QmiMessageVoiceEndCallInput *input,
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

    request = __qmi_message_voice_end_call_request_create (
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
                             (GAsyncReadyCallback)end_call_ready,
                             task);
}


QmiMessageVoiceAnswerCallOutput *
qmi_client_voice_answer_call_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
answer_call_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceAnswerCallOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_answer_call_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_answer_call_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_answer_call (
    QmiClientVoice *self,
    QmiMessageVoiceAnswerCallInput *input,
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

    request = __qmi_message_voice_answer_call_request_create (
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
                             (GAsyncReadyCallback)answer_call_ready,
                             task);
}


QmiMessageVoiceGetAllCallInfoOutput *
qmi_client_voice_get_all_call_info_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_all_call_info_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceGetAllCallInfoOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_get_all_call_info_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_get_all_call_info_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_get_all_call_info (
    QmiClientVoice *self,
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

    request = __qmi_message_voice_get_all_call_info_request_create (
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
                             (GAsyncReadyCallback)get_all_call_info_ready,
                             task);
}


QmiMessageVoiceManageCallsOutput *
qmi_client_voice_manage_calls_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
manage_calls_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceManageCallsOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_manage_calls_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_manage_calls_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_manage_calls (
    QmiClientVoice *self,
    QmiMessageVoiceManageCallsInput *input,
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

    request = __qmi_message_voice_manage_calls_request_create (
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
                             (GAsyncReadyCallback)manage_calls_ready,
                             task);
}


QmiMessageVoiceSetSupplementaryServiceOutput *
qmi_client_voice_set_supplementary_service_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_supplementary_service_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceSetSupplementaryServiceOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_set_supplementary_service_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_set_supplementary_service_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_set_supplementary_service (
    QmiClientVoice *self,
    QmiMessageVoiceSetSupplementaryServiceInput *input,
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

    request = __qmi_message_voice_set_supplementary_service_request_create (
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
                             (GAsyncReadyCallback)set_supplementary_service_ready,
                             task);
}


QmiMessageVoiceGetCallWaitingOutput *
qmi_client_voice_get_call_waiting_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_call_waiting_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceGetCallWaitingOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_get_call_waiting_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_get_call_waiting_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_get_call_waiting (
    QmiClientVoice *self,
    QmiMessageVoiceGetCallWaitingInput *input,
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

    request = __qmi_message_voice_get_call_waiting_request_create (
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
                             (GAsyncReadyCallback)get_call_waiting_ready,
                             task);
}


QmiMessageVoiceOriginateUssdOutput *
qmi_client_voice_originate_ussd_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
originate_ussd_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceOriginateUssdOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_originate_ussd_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_originate_ussd_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_originate_ussd (
    QmiClientVoice *self,
    QmiMessageVoiceOriginateUssdInput *input,
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

    request = __qmi_message_voice_originate_ussd_request_create (
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
                             (GAsyncReadyCallback)originate_ussd_ready,
                             task);
}


QmiMessageVoiceAnswerUssdOutput *
qmi_client_voice_answer_ussd_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
answer_ussd_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceAnswerUssdOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_answer_ussd_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_answer_ussd_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_answer_ussd (
    QmiClientVoice *self,
    QmiMessageVoiceAnswerUssdInput *input,
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

    request = __qmi_message_voice_answer_ussd_request_create (
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
                             (GAsyncReadyCallback)answer_ussd_ready,
                             task);
}


QmiMessageVoiceCancelUssdOutput *
qmi_client_voice_cancel_ussd_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
cancel_ussd_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceCancelUssdOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_cancel_ussd_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_cancel_ussd_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_cancel_ussd (
    QmiClientVoice *self,
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

    request = __qmi_message_voice_cancel_ussd_request_create (
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
                             (GAsyncReadyCallback)cancel_ussd_ready,
                             task);
}


QmiMessageVoiceGetConfigOutput *
qmi_client_voice_get_config_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_config_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceGetConfigOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_get_config_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_get_config_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_get_config (
    QmiClientVoice *self,
    QmiMessageVoiceGetConfigInput *input,
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

    request = __qmi_message_voice_get_config_request_create (
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
                             (GAsyncReadyCallback)get_config_ready,
                             task);
}


QmiMessageVoiceOriginateUssdNoWaitOutput *
qmi_client_voice_originate_ussd_no_wait_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
originate_ussd_no_wait_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceOriginateUssdNoWaitOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_originate_ussd_no_wait_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_originate_ussd_no_wait_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_originate_ussd_no_wait (
    QmiClientVoice *self,
    QmiMessageVoiceOriginateUssdNoWaitInput *input,
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

    request = __qmi_message_voice_originate_ussd_no_wait_request_create (
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
                             (GAsyncReadyCallback)originate_ussd_no_wait_ready,
                             task);
}


QmiMessageVoiceBurstDtmfOutput *
qmi_client_voice_burst_dtmf_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
burst_dtmf_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceBurstDtmfOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_burst_dtmf_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_burst_dtmf_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_burst_dtmf (
    QmiClientVoice *self,
    QmiMessageVoiceBurstDtmfInput *input,
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

    request = __qmi_message_voice_burst_dtmf_request_create (
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
                             (GAsyncReadyCallback)burst_dtmf_ready,
                             task);
}


QmiMessageVoiceStartContinuousDtmfOutput *
qmi_client_voice_start_continuous_dtmf_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
start_continuous_dtmf_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceStartContinuousDtmfOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_start_continuous_dtmf_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_start_continuous_dtmf_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_start_continuous_dtmf (
    QmiClientVoice *self,
    QmiMessageVoiceStartContinuousDtmfInput *input,
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

    request = __qmi_message_voice_start_continuous_dtmf_request_create (
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
                             (GAsyncReadyCallback)start_continuous_dtmf_ready,
                             task);
}


QmiMessageVoiceStopContinuousDtmfOutput *
qmi_client_voice_stop_continuous_dtmf_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
stop_continuous_dtmf_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageVoiceStopContinuousDtmfOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_voice_stop_continuous_dtmf_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_voice_stop_continuous_dtmf_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_voice_stop_continuous_dtmf (
    QmiClientVoice *self,
    QmiMessageVoiceStopContinuousDtmfInput *input,
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

    request = __qmi_message_voice_stop_continuous_dtmf_request_create (
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
                             (GAsyncReadyCallback)stop_continuous_dtmf_ready,
                             task);
}

