
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

#include "qmi-uim.h"
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
    QMI_MESSAGE_UIM_RESET = 0x0000,
    QMI_MESSAGE_UIM_GET_SUPPORTED_MESSAGES = 0x001E,
    QMI_MESSAGE_UIM_READ_TRANSPARENT = 0x0020,
    QMI_MESSAGE_UIM_READ_RECORD = 0x0021,
    QMI_MESSAGE_UIM_WRITE_RECORD = 0x0023,
    QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES = 0x0024,
    QMI_MESSAGE_UIM_SET_PIN_PROTECTION = 0x0025,
    QMI_MESSAGE_UIM_VERIFY_PIN = 0x0026,
    QMI_MESSAGE_UIM_UNBLOCK_PIN = 0x0027,
    QMI_MESSAGE_UIM_CHANGE_PIN = 0x0028,
    QMI_MESSAGE_UIM_REFRESH_REGISTER = 0x002A,
    QMI_MESSAGE_UIM_REFRESH_COMPLETE = 0x002C,
    QMI_MESSAGE_UIM_REGISTER_EVENTS = 0x002E,
    QMI_MESSAGE_UIM_GET_CARD_STATUS = 0x002F,
    QMI_MESSAGE_UIM_POWER_OFF_SIM = 0x0030,
    QMI_MESSAGE_UIM_POWER_ON_SIM = 0x0031,
    QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION = 0x0038,
    QMI_MESSAGE_UIM_DEPERSONALIZATION = 0x0029,
    QMI_MESSAGE_UIM_GET_CONFIGURATION = 0x003A,
    QMI_MESSAGE_UIM_SEND_APDU = 0x003B,
    QMI_MESSAGE_UIM_LOGICAL_CHANNEL = 0x003F,
    QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL = 0x0042,
    QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL = 0x0044,
    QMI_MESSAGE_UIM_SWITCH_SLOT = 0x0046,
    QMI_MESSAGE_UIM_GET_SLOT_STATUS = 0x0047,
    QMI_MESSAGE_UIM_REMOTE_UNLOCK = 0x005D,
} QmiMessageUim;


typedef enum {
    QMI_INDICATION_UIM_CARD_STATUS = 0x0032,
    QMI_INDICATION_UIM_REFRESH = 0x0033,
    QMI_INDICATION_UIM_SLOT_STATUS = 0x0048,
} QmiIndicationUim;


/*****************************************************************************/
/* INDICATION: Qmi Indication UIM Card Status */


/* --- Output -- */

static void
__qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_v2_clear (QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2 *value)
{
    g_clear_pointer (&value->application_identifier_value, (GDestroyNotify)g_array_unref);
}

static void
__qmi_indication_uim_card_status_output_card_status_cards_element_clear (QmiIndicationUimCardStatusOutputCardStatusCardsElement *value)
{
    g_clear_pointer (&value->applications, (GDestroyNotify)g_array_unref);
}

static void
__qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_v2_free (QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2 *value)
{
    __qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_v2_clear (value);
    g_slice_free (QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2, value);
}

static QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2 *
__qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_v2_new (void)
{
    return g_slice_new0 (QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2);
}

static QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2 *
__qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_v2_copy (const QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2 *value)
{
    QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2 *copy;

    copy = __qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_v2_new ();
    copy->type = value->type;
    copy->state = value->state;
    copy->personalization_state = value->personalization_state;
    copy->personalization_feature = value->personalization_feature;
    copy->personalization_retries = value->personalization_retries;
    copy->personalization_unblock_retries = value->personalization_unblock_retries;
    copy->application_identifier_value = g_array_ref (value->application_identifier_value);
    copy->upin_replaces_pin1 = value->upin_replaces_pin1;
    copy->pin1_state = value->pin1_state;
    copy->pin1_retries = value->pin1_retries;
    copy->puk1_retries = value->puk1_retries;
    copy->pin2_state = value->pin2_state;
    copy->pin2_retries = value->pin2_retries;
    copy->puk2_retries = value->puk2_retries;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2, qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_v2, (GBoxedCopyFunc)__qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_v2_copy, (GBoxedFreeFunc)__qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_v2_free)

static void
__qmi_indication_uim_card_status_output_card_status_cards_element_gir_free (QmiIndicationUimCardStatusOutputCardStatusCardsElementGir *value)
{
    g_clear_pointer (&value->applications, (GDestroyNotify)g_ptr_array_unref);
    g_slice_free (QmiIndicationUimCardStatusOutputCardStatusCardsElementGir, value);
}

static QmiIndicationUimCardStatusOutputCardStatusCardsElementGir *
__qmi_indication_uim_card_status_output_card_status_cards_element_gir_new (void)
{
    return g_slice_new0 (QmiIndicationUimCardStatusOutputCardStatusCardsElementGir);
}

static QmiIndicationUimCardStatusOutputCardStatusCardsElementGir *
__qmi_indication_uim_card_status_output_card_status_cards_element_gir_copy (const QmiIndicationUimCardStatusOutputCardStatusCardsElementGir *value)
{
    QmiIndicationUimCardStatusOutputCardStatusCardsElementGir *copy;

    copy = __qmi_indication_uim_card_status_output_card_status_cards_element_gir_new ();
    copy->card_state = value->card_state;
    copy->upin_state = value->upin_state;
    copy->upin_retries = value->upin_retries;
    copy->upuk_retries = value->upuk_retries;
    copy->error_code = value->error_code;
    copy->applications = g_ptr_array_ref (value->applications);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiIndicationUimCardStatusOutputCardStatusCardsElementGir, qmi_indication_uim_card_status_output_card_status_cards_element_gir, (GBoxedCopyFunc)__qmi_indication_uim_card_status_output_card_status_cards_element_gir_copy, (GBoxedFreeFunc)__qmi_indication_uim_card_status_output_card_status_cards_element_gir_free)

struct _QmiIndicationUimCardStatusOutput {
    volatile gint ref_count;

    /* Card Status */
    gboolean arg_card_status_set;
    guint16 arg_card_status_index_gw_primary;
    guint16 arg_card_status_index_1x_primary;
    guint16 arg_card_status_index_gw_secondary;
    guint16 arg_card_status_index_1x_secondary;
    GArray *arg_card_status_cards;
    GPtrArray *arg_card_status_cards_ptr;
};

#define QMI_INDICATION_UIM_CARD_STATUS_OUTPUT_TLV_CARD_STATUS 0x10

gboolean
qmi_indication_uim_card_status_output_get_card_status (
    QmiIndicationUimCardStatusOutput *self,
    guint16 *value_card_status_index_gw_primary,
    guint16 *value_card_status_index_1x_primary,
    guint16 *value_card_status_index_gw_secondary,
    guint16 *value_card_status_index_1x_secondary,
    GArray **value_card_status_cards,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Status' was not found in the message");
        return FALSE;
    }

    if (value_card_status_index_gw_primary)
        *value_card_status_index_gw_primary = self->arg_card_status_index_gw_primary;
    if (value_card_status_index_1x_primary)
        *value_card_status_index_1x_primary = self->arg_card_status_index_1x_primary;
    if (value_card_status_index_gw_secondary)
        *value_card_status_index_gw_secondary = self->arg_card_status_index_gw_secondary;
    if (value_card_status_index_1x_secondary)
        *value_card_status_index_1x_secondary = self->arg_card_status_index_1x_secondary;
    if (value_card_status_cards)
        *value_card_status_cards = self->arg_card_status_cards;

    return TRUE;
}

gboolean
qmi_indication_uim_card_status_output_get_card_status_gir (
    QmiIndicationUimCardStatusOutput *self,
    guint16 *value_card_status_index_gw_primary,
    guint16 *value_card_status_index_1x_primary,
    guint16 *value_card_status_index_gw_secondary,
    guint16 *value_card_status_index_1x_secondary,
    GPtrArray **value_card_status_cards_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Status' was not found in the message");
        return FALSE;
    }

    if (value_card_status_index_gw_primary)
        *value_card_status_index_gw_primary = self->arg_card_status_index_gw_primary;
    if (value_card_status_index_1x_primary)
        *value_card_status_index_1x_primary = self->arg_card_status_index_1x_primary;
    if (value_card_status_index_gw_secondary)
        *value_card_status_index_gw_secondary = self->arg_card_status_index_gw_secondary;
    if (value_card_status_index_1x_secondary)
        *value_card_status_index_1x_secondary = self->arg_card_status_index_1x_secondary;
    if (value_card_status_cards_ptr) {
        if (!self->arg_card_status_cards_ptr) {
            {
                guint cards_i;

                self->arg_card_status_cards_ptr = g_ptr_array_new_full (self->arg_card_status_cards->len, (GDestroyNotify)__qmi_indication_uim_card_status_output_card_status_cards_element_gir_free);
                for (cards_i = 0; cards_i < self->arg_card_status_cards->len; cards_i++) {
                    QmiIndicationUimCardStatusOutputCardStatusCardsElement *cards_aux_from;
                    QmiIndicationUimCardStatusOutputCardStatusCardsElementGir *cards_aux_to;

                    cards_aux_from = &g_array_index (self->arg_card_status_cards, QmiIndicationUimCardStatusOutputCardStatusCardsElement, cards_i);

                    cards_aux_to = __qmi_indication_uim_card_status_output_card_status_cards_element_gir_new ();
                    cards_aux_to->card_state = (*cards_aux_from).card_state;
                    cards_aux_to->upin_state = (*cards_aux_from).upin_state;
                    cards_aux_to->upin_retries = (*cards_aux_from).upin_retries;
                    cards_aux_to->upuk_retries = (*cards_aux_from).upuk_retries;
                    cards_aux_to->error_code = (*cards_aux_from).error_code;
                    {
                        guint applications_i;

                        cards_aux_to->applications = g_ptr_array_new_full ((*cards_aux_from).applications->len, (GDestroyNotify)__qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_v2_free);
                        for (applications_i = 0; applications_i < (*cards_aux_from).applications->len; applications_i++) {
                            QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2 *applications_aux_from;
                            QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2 *applications_aux_to;

                            applications_aux_from = &g_array_index ((*cards_aux_from).applications, QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2, applications_i);

                            applications_aux_to = __qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_v2_new ();
                            applications_aux_to->type = (*applications_aux_from).type;
                            applications_aux_to->state = (*applications_aux_from).state;
                            applications_aux_to->personalization_state = (*applications_aux_from).personalization_state;
                            applications_aux_to->personalization_feature = (*applications_aux_from).personalization_feature;
                            applications_aux_to->personalization_retries = (*applications_aux_from).personalization_retries;
                            applications_aux_to->personalization_unblock_retries = (*applications_aux_from).personalization_unblock_retries;
                            applications_aux_to->application_identifier_value = g_array_ref ((*applications_aux_from).application_identifier_value);
                            applications_aux_to->upin_replaces_pin1 = (*applications_aux_from).upin_replaces_pin1;
                            applications_aux_to->pin1_state = (*applications_aux_from).pin1_state;
                            applications_aux_to->pin1_retries = (*applications_aux_from).pin1_retries;
                            applications_aux_to->puk1_retries = (*applications_aux_from).puk1_retries;
                            applications_aux_to->pin2_state = (*applications_aux_from).pin2_state;
                            applications_aux_to->pin2_retries = (*applications_aux_from).pin2_retries;
                            applications_aux_to->puk2_retries = (*applications_aux_from).puk2_retries;

                            g_ptr_array_add (cards_aux_to->applications, applications_aux_to);
                        }
                    }

                    g_ptr_array_add (self->arg_card_status_cards_ptr, cards_aux_to);
                }
            }
        }
        *value_card_status_cards_ptr = self->arg_card_status_cards_ptr;
    }
    return TRUE;
}

GType
qmi_indication_uim_card_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationUimCardStatusOutput"),
                                          (GBoxedCopyFunc) qmi_indication_uim_card_status_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_uim_card_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationUimCardStatusOutput *
qmi_indication_uim_card_status_output_ref (QmiIndicationUimCardStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_uim_card_status_output_unref (QmiIndicationUimCardStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_card_status_cards, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_card_status_cards, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiIndicationUimCardStatusOutput, self);
    }
}

static gchar *
qmi_indication_uim_card_status_output_card_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_UIM_CARD_STATUS_OUTPUT_TLV_CARD_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " index_gw_primary = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " index_1x_primary = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " index_gw_secondary = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " index_1x_secondary = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " cards = '");
    {
        guint cards_i;
        guint8 cards_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(cards_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (cards_i = 0; cards_i < cards_n_items; cards_i++) {
            g_string_append_printf (printable, " [%u] = '", cards_i);
            g_string_append (printable, "[");
            g_string_append (printable, " card_state = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_UIM_CARD_STATE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_uim_card_state_get_string ((QmiUimCardState)tmp));
#elif defined  __QMI_UIM_CARD_STATE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_uim_card_state_build_string_from_mask ((QmiUimCardState)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiUimCardState
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " upin_state = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_UIM_PIN_STATE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_uim_pin_state_get_string ((QmiUimPinState)tmp));
#elif defined  __QMI_UIM_PIN_STATE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_uim_pin_state_build_string_from_mask ((QmiUimPinState)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiUimPinState
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " upin_retries = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " upuk_retries = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " error_code = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_UIM_CARD_ERROR_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_uim_card_error_get_string ((QmiUimCardError)tmp));
#elif defined  __QMI_UIM_CARD_ERROR_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_uim_card_error_build_string_from_mask ((QmiUimCardError)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiUimCardError
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " applications = '");
            {
                guint applications_i;
                guint8 applications_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_n_items), &error))
                    goto out;

                g_string_append (printable, "{");

                for (applications_i = 0; applications_i < applications_n_items; applications_i++) {
                    g_string_append_printf (printable, " [%u] = '", applications_i);
                    g_string_append (printable, "[");
                    g_string_append (printable, " type = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_CARD_APPLICATION_TYPE_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_card_application_type_get_string ((QmiUimCardApplicationType)tmp));
#elif defined  __QMI_UIM_CARD_APPLICATION_TYPE_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_card_application_type_build_string_from_mask ((QmiUimCardApplicationType)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimCardApplicationType
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " state = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_CARD_APPLICATION_STATE_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_card_application_state_get_string ((QmiUimCardApplicationState)tmp));
#elif defined  __QMI_UIM_CARD_APPLICATION_STATE_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_card_application_state_build_string_from_mask ((QmiUimCardApplicationState)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimCardApplicationState
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " personalization_state = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_STATE_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_card_application_personalization_state_get_string ((QmiUimCardApplicationPersonalizationState)tmp));
#elif defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_STATE_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_card_application_personalization_state_build_string_from_mask ((QmiUimCardApplicationPersonalizationState)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimCardApplicationPersonalizationState
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " personalization_feature = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_STATUS_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_card_application_personalization_feature_status_get_string ((QmiUimCardApplicationPersonalizationFeatureStatus)tmp));
#elif defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_STATUS_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_card_application_personalization_feature_status_build_string_from_mask ((QmiUimCardApplicationPersonalizationFeatureStatus)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimCardApplicationPersonalizationFeatureStatus
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " personalization_retries = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " personalization_unblock_retries = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " application_identifier_value = '");
                    {
                        guint application_identifier_value_i;
                        guint8 application_identifier_value_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(application_identifier_value_n_items), &error))
                            goto out;

                        g_string_append (printable, "{");

                        for (application_identifier_value_i = 0; application_identifier_value_i < application_identifier_value_n_items; application_identifier_value_i++) {
                            g_string_append_printf (printable, " [%u] = '", application_identifier_value_i);

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
                    }                    g_string_append (printable, "'");
                    g_string_append (printable, " upin_replaces_pin1 = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " pin1_state = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_PIN_STATE_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_pin_state_get_string ((QmiUimPinState)tmp));
#elif defined  __QMI_UIM_PIN_STATE_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_pin_state_build_string_from_mask ((QmiUimPinState)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimPinState
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " pin1_retries = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " puk1_retries = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " pin2_state = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_PIN_STATE_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_pin_state_get_string ((QmiUimPinState)tmp));
#elif defined  __QMI_UIM_PIN_STATE_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_pin_state_build_string_from_mask ((QmiUimPinState)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimPinState
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " pin2_retries = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " puk2_retries = '");

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

struct indication_card_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_card_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_card_status_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_UIM_CARD_STATUS_OUTPUT_TLV_CARD_STATUS:
            tlv_type_str = "Card Status";
            translated_value = qmi_indication_uim_card_status_output_card_status_get_printable (
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
indication_card_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Card Status\" (0x0032)\n",
                            line_prefix);

    {
        struct indication_card_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_card_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationUimCardStatusOutput *
qmi_indication_uim_card_status_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationUimCardStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_UIM_CARD_STATUS);

    self = g_slice_new0 (QmiIndicationUimCardStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_UIM_CARD_STATUS_OUTPUT_TLV_CARD_STATUS, NULL, NULL)) == 0) {
                goto qmi_indication_uim_card_status_output_card_status_out;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_card_status_index_gw_primary), NULL))
                goto qmi_indication_uim_card_status_output_card_status_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_card_status_index_1x_primary), NULL))
                goto qmi_indication_uim_card_status_output_card_status_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_card_status_index_gw_secondary), NULL))
                goto qmi_indication_uim_card_status_output_card_status_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_card_status_index_1x_secondary), NULL))
                goto qmi_indication_uim_card_status_output_card_status_out;
            {
                guint cards_i;
                guint8 cards_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(cards_n_items), NULL))
                    goto qmi_indication_uim_card_status_output_card_status_out;

                self->arg_card_status_cards = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiIndicationUimCardStatusOutputCardStatusCardsElement),
                    (guint)cards_n_items);

                g_array_set_clear_func (self->arg_card_status_cards, (GDestroyNotify)__qmi_indication_uim_card_status_output_card_status_cards_element_clear);

                for (cards_i = 0; cards_i < cards_n_items; cards_i++) {
                    QmiIndicationUimCardStatusOutputCardStatusCardsElement cards_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_indication_uim_card_status_output_card_status_out;
                        cards_aux.card_state = (QmiUimCardState)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_indication_uim_card_status_output_card_status_out;
                        cards_aux.upin_state = (QmiUimPinState)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(cards_aux.upin_retries), NULL))
                        goto qmi_indication_uim_card_status_output_card_status_out;
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(cards_aux.upuk_retries), NULL))
                        goto qmi_indication_uim_card_status_output_card_status_out;
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_indication_uim_card_status_output_card_status_out;
                        cards_aux.error_code = (QmiUimCardError)tmp;
                    }
                    {
                        guint applications_i;
                        guint8 applications_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_n_items), NULL))
                            goto qmi_indication_uim_card_status_output_card_status_out;

                        cards_aux.applications = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2),
                            (guint)applications_n_items);

                        g_array_set_clear_func (cards_aux.applications, (GDestroyNotify)__qmi_indication_uim_card_status_output_card_status_cards_element_applications_element_v2_clear);

                        for (applications_i = 0; applications_i < applications_n_items; applications_i++) {
                            QmiIndicationUimCardStatusOutputCardStatusCardsElementApplicationsElementV2 applications_aux;

                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_indication_uim_card_status_output_card_status_out;
                                applications_aux.type = (QmiUimCardApplicationType)tmp;
                            }
                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_indication_uim_card_status_output_card_status_out;
                                applications_aux.state = (QmiUimCardApplicationState)tmp;
                            }
                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_indication_uim_card_status_output_card_status_out;
                                applications_aux.personalization_state = (QmiUimCardApplicationPersonalizationState)tmp;
                            }
                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_indication_uim_card_status_output_card_status_out;
                                applications_aux.personalization_feature = (QmiUimCardApplicationPersonalizationFeatureStatus)tmp;
                            }
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_aux.personalization_retries), NULL))
                                goto qmi_indication_uim_card_status_output_card_status_out;
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_aux.personalization_unblock_retries), NULL))
                                goto qmi_indication_uim_card_status_output_card_status_out;
                            {
                                guint application_identifier_value_i;
                                guint8 application_identifier_value_n_items;

                                /* Read number of items in the array */
                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(application_identifier_value_n_items), NULL))
                                    goto qmi_indication_uim_card_status_output_card_status_out;

                                applications_aux.application_identifier_value = g_array_sized_new (
                                    FALSE,
                                    FALSE,
                                    sizeof (guint8),
                                    (guint)application_identifier_value_n_items);

                                for (application_identifier_value_i = 0; application_identifier_value_i < application_identifier_value_n_items; application_identifier_value_i++) {
                                    guint8 application_identifier_value_aux;

                                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(application_identifier_value_aux), NULL))
                                        goto qmi_indication_uim_card_status_output_card_status_out;
                                    g_array_insert_val (applications_aux.application_identifier_value, application_identifier_value_i, application_identifier_value_aux);
                                }
                            }
                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_indication_uim_card_status_output_card_status_out;
                                applications_aux.upin_replaces_pin1 = (gboolean)tmp;
                            }
                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_indication_uim_card_status_output_card_status_out;
                                applications_aux.pin1_state = (QmiUimPinState)tmp;
                            }
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_aux.pin1_retries), NULL))
                                goto qmi_indication_uim_card_status_output_card_status_out;
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_aux.puk1_retries), NULL))
                                goto qmi_indication_uim_card_status_output_card_status_out;
                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_indication_uim_card_status_output_card_status_out;
                                applications_aux.pin2_state = (QmiUimPinState)tmp;
                            }
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_aux.pin2_retries), NULL))
                                goto qmi_indication_uim_card_status_output_card_status_out;
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_aux.puk2_retries), NULL))
                                goto qmi_indication_uim_card_status_output_card_status_out;
                            g_array_insert_val (cards_aux.applications, applications_i, applications_aux);
                        }
                    }
                    g_array_insert_val (self->arg_card_status_cards, cards_i, cards_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Card Status' TLV", offset);
            }

            self->arg_card_status_set = TRUE;

qmi_indication_uim_card_status_output_card_status_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication UIM Refresh */


/* --- Output -- */

static void
__qmi_indication_uim_refresh_output_event_files_element_clear (QmiIndicationUimRefreshOutputEventFilesElement *value)
{
    g_clear_pointer (&value->path, (GDestroyNotify)g_array_unref);
}

static void
__qmi_indication_uim_refresh_output_event_files_element_free (QmiIndicationUimRefreshOutputEventFilesElement *value)
{
    __qmi_indication_uim_refresh_output_event_files_element_clear (value);
    g_slice_free (QmiIndicationUimRefreshOutputEventFilesElement, value);
}

static QmiIndicationUimRefreshOutputEventFilesElement *
__qmi_indication_uim_refresh_output_event_files_element_new (void)
{
    return g_slice_new0 (QmiIndicationUimRefreshOutputEventFilesElement);
}

static QmiIndicationUimRefreshOutputEventFilesElement *
__qmi_indication_uim_refresh_output_event_files_element_copy (const QmiIndicationUimRefreshOutputEventFilesElement *value)
{
    QmiIndicationUimRefreshOutputEventFilesElement *copy;

    copy = __qmi_indication_uim_refresh_output_event_files_element_new ();
    copy->file_id = value->file_id;
    copy->path = g_array_ref (value->path);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiIndicationUimRefreshOutputEventFilesElement, qmi_indication_uim_refresh_output_event_files_element, (GBoxedCopyFunc)__qmi_indication_uim_refresh_output_event_files_element_copy, (GBoxedFreeFunc)__qmi_indication_uim_refresh_output_event_files_element_free)

struct _QmiIndicationUimRefreshOutput {
    volatile gint ref_count;

    /* Event */
    gboolean arg_event_set;
    guint8 arg_event_stage;
    guint8 arg_event_mode;
    guint8 arg_event_session_type;
    GArray *arg_event_application_identifier;
    GArray *arg_event_files;
    GPtrArray *arg_event_files_ptr;
};

#define QMI_INDICATION_UIM_REFRESH_OUTPUT_TLV_EVENT 0x10

gboolean
qmi_indication_uim_refresh_output_get_event (
    QmiIndicationUimRefreshOutput *self,
    QmiUimRefreshStage *value_event_stage,
    QmiUimRefreshMode *value_event_mode,
    QmiUimSessionType *value_event_session_type,
    GArray **value_event_application_identifier,
    GArray **value_event_files,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_event_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Event' was not found in the message");
        return FALSE;
    }

    if (value_event_stage)
        *value_event_stage = (QmiUimRefreshStage)(self->arg_event_stage);
    if (value_event_mode)
        *value_event_mode = (QmiUimRefreshMode)(self->arg_event_mode);
    if (value_event_session_type)
        *value_event_session_type = (QmiUimSessionType)(self->arg_event_session_type);
    if (value_event_application_identifier)
        *value_event_application_identifier = self->arg_event_application_identifier;
    if (value_event_files)
        *value_event_files = self->arg_event_files;

    return TRUE;
}

gboolean
qmi_indication_uim_refresh_output_get_event_gir (
    QmiIndicationUimRefreshOutput *self,
    QmiUimRefreshStage *value_event_stage,
    QmiUimRefreshMode *value_event_mode,
    QmiUimSessionType *value_event_session_type,
    GArray **value_event_application_identifier,
    GPtrArray **value_event_files_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_event_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Event' was not found in the message");
        return FALSE;
    }

    if (value_event_stage)
        *value_event_stage = (QmiUimRefreshStage)(self->arg_event_stage);
    if (value_event_mode)
        *value_event_mode = (QmiUimRefreshMode)(self->arg_event_mode);
    if (value_event_session_type)
        *value_event_session_type = (QmiUimSessionType)(self->arg_event_session_type);
    if (value_event_application_identifier)
        *value_event_application_identifier = self->arg_event_application_identifier;
    if (value_event_files_ptr) {
        if (!self->arg_event_files_ptr) {
            {
                guint files_i;

                self->arg_event_files_ptr = g_ptr_array_new_full (self->arg_event_files->len, (GDestroyNotify)__qmi_indication_uim_refresh_output_event_files_element_free);
                for (files_i = 0; files_i < self->arg_event_files->len; files_i++) {
                    QmiIndicationUimRefreshOutputEventFilesElement *files_aux_from;
                    QmiIndicationUimRefreshOutputEventFilesElement *files_aux_to;

                    files_aux_from = &g_array_index (self->arg_event_files, QmiIndicationUimRefreshOutputEventFilesElement, files_i);

                    files_aux_to = __qmi_indication_uim_refresh_output_event_files_element_new ();
                    files_aux_to->file_id = (*files_aux_from).file_id;
                    files_aux_to->path = g_array_ref ((*files_aux_from).path);

                    g_ptr_array_add (self->arg_event_files_ptr, files_aux_to);
                }
            }
        }
        *value_event_files_ptr = self->arg_event_files_ptr;
    }
    return TRUE;
}

GType
qmi_indication_uim_refresh_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationUimRefreshOutput"),
                                          (GBoxedCopyFunc) qmi_indication_uim_refresh_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_uim_refresh_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationUimRefreshOutput *
qmi_indication_uim_refresh_output_ref (QmiIndicationUimRefreshOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_uim_refresh_output_unref (QmiIndicationUimRefreshOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_event_application_identifier, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_event_files, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_event_application_identifier, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_event_files, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiIndicationUimRefreshOutput, self);
    }
}

static gchar *
qmi_indication_uim_refresh_output_event_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_UIM_REFRESH_OUTPUT_TLV_EVENT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " stage = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_REFRESH_STAGE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_refresh_stage_get_string ((QmiUimRefreshStage)tmp));
#elif defined  __QMI_UIM_REFRESH_STAGE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_refresh_stage_build_string_from_mask ((QmiUimRefreshStage)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimRefreshStage
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
#if defined  __QMI_UIM_REFRESH_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_refresh_mode_get_string ((QmiUimRefreshMode)tmp));
#elif defined  __QMI_UIM_REFRESH_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_refresh_mode_build_string_from_mask ((QmiUimRefreshMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimRefreshMode
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " session_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SESSION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_session_type_get_string ((QmiUimSessionType)tmp));
#elif defined  __QMI_UIM_SESSION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_session_type_build_string_from_mask ((QmiUimSessionType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSessionType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " application_identifier = '");
    {
        guint application_identifier_i;
        guint8 application_identifier_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(application_identifier_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (application_identifier_i = 0; application_identifier_i < application_identifier_n_items; application_identifier_i++) {
            g_string_append_printf (printable, " [%u] = '", application_identifier_i);

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
    g_string_append (printable, " files = '");
    {
        guint files_i;
        guint16 files_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(files_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (files_i = 0; files_i < files_n_items; files_i++) {
            g_string_append_printf (printable, " [%u] = '", files_i);
            g_string_append (printable, "[");
            g_string_append (printable, " file_id = '");

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " path = '");
            {
                guint path_i;
                guint8 path_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(path_n_items), &error))
                    goto out;

                g_string_append (printable, "{");

                for (path_i = 0; path_i < path_n_items; path_i++) {
                    g_string_append_printf (printable, " [%u] = '", path_i);

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
        case QMI_INDICATION_UIM_REFRESH_OUTPUT_TLV_EVENT:
            tlv_type_str = "Event";
            translated_value = qmi_indication_uim_refresh_output_event_get_printable (
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
                            "%s  message     = \"Refresh\" (0x0033)\n",
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

QmiIndicationUimRefreshOutput *
qmi_indication_uim_refresh_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationUimRefreshOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_UIM_REFRESH);

    self = g_slice_new0 (QmiIndicationUimRefreshOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_UIM_REFRESH_OUTPUT_TLV_EVENT, NULL, NULL)) == 0) {
                goto qmi_indication_uim_refresh_output_event_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_uim_refresh_output_event_out;
                self->arg_event_stage = (QmiUimRefreshStage)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_uim_refresh_output_event_out;
                self->arg_event_mode = (QmiUimRefreshMode)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_uim_refresh_output_event_out;
                self->arg_event_session_type = (QmiUimSessionType)tmp;
            }
            {
                guint application_identifier_i;
                guint8 application_identifier_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(application_identifier_n_items), NULL))
                    goto qmi_indication_uim_refresh_output_event_out;

                self->arg_event_application_identifier = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)application_identifier_n_items);

                for (application_identifier_i = 0; application_identifier_i < application_identifier_n_items; application_identifier_i++) {
                    guint8 application_identifier_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(application_identifier_aux), NULL))
                        goto qmi_indication_uim_refresh_output_event_out;
                    g_array_insert_val (self->arg_event_application_identifier, application_identifier_i, application_identifier_aux);
                }
            }
            {
                guint files_i;
                guint16 files_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(files_n_items), NULL))
                    goto qmi_indication_uim_refresh_output_event_out;

                self->arg_event_files = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiIndicationUimRefreshOutputEventFilesElement),
                    (guint)files_n_items);

                g_array_set_clear_func (self->arg_event_files, (GDestroyNotify)__qmi_indication_uim_refresh_output_event_files_element_clear);

                for (files_i = 0; files_i < files_n_items; files_i++) {
                    QmiIndicationUimRefreshOutputEventFilesElement files_aux;

                    if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(files_aux.file_id), NULL))
                        goto qmi_indication_uim_refresh_output_event_out;
                    {
                        guint path_i;
                        guint8 path_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(path_n_items), NULL))
                            goto qmi_indication_uim_refresh_output_event_out;

                        files_aux.path = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (guint8),
                            (guint)path_n_items);

                        for (path_i = 0; path_i < path_n_items; path_i++) {
                            guint8 path_aux;

                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(path_aux), NULL))
                                goto qmi_indication_uim_refresh_output_event_out;
                            g_array_insert_val (files_aux.path, path_i, path_aux);
                        }
                    }
                    g_array_insert_val (self->arg_event_files, files_i, files_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Event' TLV", offset);
            }

            self->arg_event_set = TRUE;

qmi_indication_uim_refresh_output_event_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication UIM Slot Status */


/* --- Output -- */

static void
__qmi_slot_eid_element_clear (QmiSlotEidElement *value)
{
    g_clear_pointer (&value->eid, (GDestroyNotify)g_array_unref);
}

static void
__qmi_slot_eid_element_free (QmiSlotEidElement *value)
{
    __qmi_slot_eid_element_clear (value);
    g_slice_free (QmiSlotEidElement, value);
}

static QmiSlotEidElement *
__qmi_slot_eid_element_new (void)
{
    return g_slice_new0 (QmiSlotEidElement);
}

static QmiSlotEidElement *
__qmi_slot_eid_element_copy (const QmiSlotEidElement *value)
{
    QmiSlotEidElement *copy;

    copy = __qmi_slot_eid_element_new ();
    copy->eid = g_array_ref (value->eid);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiSlotEidElement, qmi_slot_eid_element, (GBoxedCopyFunc)__qmi_slot_eid_element_copy, (GBoxedFreeFunc)__qmi_slot_eid_element_free)

static void
__qmi_physical_slot_information_slot_clear (QmiPhysicalSlotInformationSlot *value)
{
    g_clear_pointer (&value->atr_value, (GDestroyNotify)g_array_unref);
}

static void
__qmi_physical_slot_information_slot_free (QmiPhysicalSlotInformationSlot *value)
{
    __qmi_physical_slot_information_slot_clear (value);
    g_slice_free (QmiPhysicalSlotInformationSlot, value);
}

static QmiPhysicalSlotInformationSlot *
__qmi_physical_slot_information_slot_new (void)
{
    return g_slice_new0 (QmiPhysicalSlotInformationSlot);
}

static QmiPhysicalSlotInformationSlot *
__qmi_physical_slot_information_slot_copy (const QmiPhysicalSlotInformationSlot *value)
{
    QmiPhysicalSlotInformationSlot *copy;

    copy = __qmi_physical_slot_information_slot_new ();
    copy->card_protocol = value->card_protocol;
    copy->valid_applications = value->valid_applications;
    copy->atr_value = g_array_ref (value->atr_value);
    copy->is_euicc = value->is_euicc;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiPhysicalSlotInformationSlot, qmi_physical_slot_information_slot, (GBoxedCopyFunc)__qmi_physical_slot_information_slot_copy, (GBoxedFreeFunc)__qmi_physical_slot_information_slot_free)

static void
__qmi_physical_slot_status_slot_clear (QmiPhysicalSlotStatusSlot *value)
{
    g_clear_pointer (&value->iccid, (GDestroyNotify)g_array_unref);
}

static void
__qmi_physical_slot_status_slot_free (QmiPhysicalSlotStatusSlot *value)
{
    __qmi_physical_slot_status_slot_clear (value);
    g_slice_free (QmiPhysicalSlotStatusSlot, value);
}

static QmiPhysicalSlotStatusSlot *
__qmi_physical_slot_status_slot_new (void)
{
    return g_slice_new0 (QmiPhysicalSlotStatusSlot);
}

static QmiPhysicalSlotStatusSlot *
__qmi_physical_slot_status_slot_copy (const QmiPhysicalSlotStatusSlot *value)
{
    QmiPhysicalSlotStatusSlot *copy;

    copy = __qmi_physical_slot_status_slot_new ();
    copy->physical_card_status = value->physical_card_status;
    copy->physical_slot_status = value->physical_slot_status;
    copy->logical_slot = value->logical_slot;
    copy->iccid = g_array_ref (value->iccid);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiPhysicalSlotStatusSlot, qmi_physical_slot_status_slot, (GBoxedCopyFunc)__qmi_physical_slot_status_slot_copy, (GBoxedFreeFunc)__qmi_physical_slot_status_slot_free)

struct _QmiIndicationUimSlotStatusOutput {
    volatile gint ref_count;

    gpointer compat_context;
    GDestroyNotify compat_context_free;

    /* Slot EID */
    gboolean arg_slot_eid_set;
    GArray *arg_slot_eid;
    GPtrArray *arg_slot_eid_ptr;

    /* Physical Slot Information */
    gboolean arg_physical_slot_information_set;
    GArray *arg_physical_slot_information;
    GPtrArray *arg_physical_slot_information_ptr;

    /* Physical Slot Status */
    gboolean arg_physical_slot_status_set;
    GArray *arg_physical_slot_status;
    GPtrArray *arg_physical_slot_status_ptr;
};

#define QMI_INDICATION_UIM_SLOT_STATUS_OUTPUT_TLV_SLOT_EID 0x12
#define QMI_INDICATION_UIM_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_INFORMATION 0x11
#define QMI_INDICATION_UIM_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_STATUS 0x10

gboolean
qmi_indication_uim_slot_status_output_get_slot_eid (
    QmiIndicationUimSlotStatusOutput *self,
    GArray **value_slot_eid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_slot_eid_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Slot EID' was not found in the message");
        return FALSE;
    }

    if (value_slot_eid)
        *value_slot_eid = self->arg_slot_eid;

    return TRUE;
}

gboolean
qmi_indication_uim_slot_status_output_get_slot_eid_gir (
    QmiIndicationUimSlotStatusOutput *self,
    GPtrArray **value_slot_eid_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_slot_eid_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Slot EID' was not found in the message");
        return FALSE;
    }

    if (value_slot_eid_ptr) {
        if (!self->arg_slot_eid_ptr) {
            {
                guint slot_eid_i;

                self->arg_slot_eid_ptr = g_ptr_array_new_full (self->arg_slot_eid->len, (GDestroyNotify)__qmi_slot_eid_element_free);
                for (slot_eid_i = 0; slot_eid_i < self->arg_slot_eid->len; slot_eid_i++) {
                    QmiSlotEidElement *slot_eid_aux_from;
                    QmiSlotEidElement *slot_eid_aux_to;

                    slot_eid_aux_from = &g_array_index (self->arg_slot_eid, QmiSlotEidElement, slot_eid_i);

                    slot_eid_aux_to = __qmi_slot_eid_element_new ();
                    slot_eid_aux_to->eid = g_array_ref ((*slot_eid_aux_from).eid);

                    g_ptr_array_add (self->arg_slot_eid_ptr, slot_eid_aux_to);
                }
            }
        }
        *value_slot_eid_ptr = self->arg_slot_eid_ptr;
    }
    return TRUE;
}

gboolean
qmi_indication_uim_slot_status_output_get_physical_slot_information (
    QmiIndicationUimSlotStatusOutput *self,
    GArray **value_physical_slot_information,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_physical_slot_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Physical Slot Information' was not found in the message");
        return FALSE;
    }

    if (value_physical_slot_information)
        *value_physical_slot_information = self->arg_physical_slot_information;

    return TRUE;
}

gboolean
qmi_indication_uim_slot_status_output_get_physical_slot_information_gir (
    QmiIndicationUimSlotStatusOutput *self,
    GPtrArray **value_physical_slot_information_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_physical_slot_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Physical Slot Information' was not found in the message");
        return FALSE;
    }

    if (value_physical_slot_information_ptr) {
        if (!self->arg_physical_slot_information_ptr) {
            {
                guint physical_slot_information_i;

                self->arg_physical_slot_information_ptr = g_ptr_array_new_full (self->arg_physical_slot_information->len, (GDestroyNotify)__qmi_physical_slot_information_slot_free);
                for (physical_slot_information_i = 0; physical_slot_information_i < self->arg_physical_slot_information->len; physical_slot_information_i++) {
                    QmiPhysicalSlotInformationSlot *physical_slot_information_aux_from;
                    QmiPhysicalSlotInformationSlot *physical_slot_information_aux_to;

                    physical_slot_information_aux_from = &g_array_index (self->arg_physical_slot_information, QmiPhysicalSlotInformationSlot, physical_slot_information_i);

                    physical_slot_information_aux_to = __qmi_physical_slot_information_slot_new ();
                    physical_slot_information_aux_to->card_protocol = (*physical_slot_information_aux_from).card_protocol;
                    physical_slot_information_aux_to->valid_applications = (*physical_slot_information_aux_from).valid_applications;
                    physical_slot_information_aux_to->atr_value = g_array_ref ((*physical_slot_information_aux_from).atr_value);
                    physical_slot_information_aux_to->is_euicc = (*physical_slot_information_aux_from).is_euicc;

                    g_ptr_array_add (self->arg_physical_slot_information_ptr, physical_slot_information_aux_to);
                }
            }
        }
        *value_physical_slot_information_ptr = self->arg_physical_slot_information_ptr;
    }
    return TRUE;
}

gboolean
qmi_indication_uim_slot_status_output_get_physical_slot_status (
    QmiIndicationUimSlotStatusOutput *self,
    GArray **value_physical_slot_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_physical_slot_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Physical Slot Status' was not found in the message");
        return FALSE;
    }

    if (value_physical_slot_status)
        *value_physical_slot_status = self->arg_physical_slot_status;

    return TRUE;
}

gboolean
qmi_indication_uim_slot_status_output_get_physical_slot_status_gir (
    QmiIndicationUimSlotStatusOutput *self,
    GPtrArray **value_physical_slot_status_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_physical_slot_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Physical Slot Status' was not found in the message");
        return FALSE;
    }

    if (value_physical_slot_status_ptr) {
        if (!self->arg_physical_slot_status_ptr) {
            {
                guint physical_slot_status_i;

                self->arg_physical_slot_status_ptr = g_ptr_array_new_full (self->arg_physical_slot_status->len, (GDestroyNotify)__qmi_physical_slot_status_slot_free);
                for (physical_slot_status_i = 0; physical_slot_status_i < self->arg_physical_slot_status->len; physical_slot_status_i++) {
                    QmiPhysicalSlotStatusSlot *physical_slot_status_aux_from;
                    QmiPhysicalSlotStatusSlot *physical_slot_status_aux_to;

                    physical_slot_status_aux_from = &g_array_index (self->arg_physical_slot_status, QmiPhysicalSlotStatusSlot, physical_slot_status_i);

                    physical_slot_status_aux_to = __qmi_physical_slot_status_slot_new ();
                    physical_slot_status_aux_to->physical_card_status = (*physical_slot_status_aux_from).physical_card_status;
                    physical_slot_status_aux_to->physical_slot_status = (*physical_slot_status_aux_from).physical_slot_status;
                    physical_slot_status_aux_to->logical_slot = (*physical_slot_status_aux_from).logical_slot;
                    physical_slot_status_aux_to->iccid = g_array_ref ((*physical_slot_status_aux_from).iccid);

                    g_ptr_array_add (self->arg_physical_slot_status_ptr, physical_slot_status_aux_to);
                }
            }
        }
        *value_physical_slot_status_ptr = self->arg_physical_slot_status_ptr;
    }
    return TRUE;
}

GType
qmi_indication_uim_slot_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationUimSlotStatusOutput"),
                                          (GBoxedCopyFunc) qmi_indication_uim_slot_status_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_uim_slot_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationUimSlotStatusOutput *
qmi_indication_uim_slot_status_output_ref (QmiIndicationUimSlotStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_uim_slot_status_output_unref (QmiIndicationUimSlotStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        if (self->compat_context && self->compat_context_free)
            self->compat_context_free (self->compat_context);
        g_clear_pointer (&self->arg_slot_eid, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_slot_eid, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_physical_slot_information, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_physical_slot_information, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_physical_slot_status, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_physical_slot_status, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiIndicationUimSlotStatusOutput, self);
    }
}
gpointer
qmi_indication_uim_slot_status_output_get_compat_context (QmiIndicationUimSlotStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    return self->compat_context;
}

void
qmi_indication_uim_slot_status_output_set_compat_context (
    QmiIndicationUimSlotStatusOutput *self,
    gpointer compat_context,
    GDestroyNotify compat_context_free)
{
    g_return_if_fail (self != NULL);

    if (self->compat_context && self->compat_context_free)
        self->compat_context_free (self->compat_context);

    self->compat_context = compat_context;
    self->compat_context_free = compat_context_free;
}

static gchar *
qmi_slot_eid_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_UIM_SLOT_STATUS_OUTPUT_TLV_SLOT_EID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint slot_eid_i;
        guint8 slot_eid_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(slot_eid_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (slot_eid_i = 0; slot_eid_i < slot_eid_n_items; slot_eid_i++) {
            g_string_append_printf (printable, " [%u] = '", slot_eid_i);
            g_string_append (printable, "[");
            g_string_append (printable, " eid = '");
            {
                guint eid_i;
                guint8 eid_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(eid_n_items), &error))
                    goto out;

                g_string_append (printable, "{");

                for (eid_i = 0; eid_i < eid_n_items; eid_i++) {
                    g_string_append_printf (printable, " [%u] = '", eid_i);

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
qmi_physical_slot_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_UIM_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint physical_slot_information_i;
        guint8 physical_slot_information_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(physical_slot_information_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (physical_slot_information_i = 0; physical_slot_information_i < physical_slot_information_n_items; physical_slot_information_i++) {
            g_string_append_printf (printable, " [%u] = '", physical_slot_information_i);
            g_string_append (printable, "[");
            g_string_append (printable, " card_protocol = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_UIM_CARD_PROTOCOL_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_uim_card_protocol_get_string ((QmiUimCardProtocol)tmp));
#elif defined  __QMI_UIM_CARD_PROTOCOL_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_uim_card_protocol_build_string_from_mask ((QmiUimCardProtocol)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiUimCardProtocol
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " valid_applications = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " atr_value = '");
            {
                guint atr_value_i;
                guint8 atr_value_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(atr_value_n_items), &error))
                    goto out;

                g_string_append (printable, "{");

                for (atr_value_i = 0; atr_value_i < atr_value_n_items; atr_value_i++) {
                    g_string_append_printf (printable, " [%u] = '", atr_value_i);

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
            g_string_append (printable, " is_euicc = '");

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
qmi_physical_slot_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_UIM_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint physical_slot_status_i;
        guint8 physical_slot_status_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(physical_slot_status_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (physical_slot_status_i = 0; physical_slot_status_i < physical_slot_status_n_items; physical_slot_status_i++) {
            g_string_append_printf (printable, " [%u] = '", physical_slot_status_i);
            g_string_append (printable, "[");
            g_string_append (printable, " physical_card_status = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_UIM_PHYSICAL_CARD_STATE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_uim_physical_card_state_get_string ((QmiUimPhysicalCardState)tmp));
#elif defined  __QMI_UIM_PHYSICAL_CARD_STATE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_uim_physical_card_state_build_string_from_mask ((QmiUimPhysicalCardState)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiUimPhysicalCardState
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " physical_slot_status = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_UIM_SLOT_STATE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_uim_slot_state_get_string ((QmiUimSlotState)tmp));
#elif defined  __QMI_UIM_SLOT_STATE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_uim_slot_state_build_string_from_mask ((QmiUimSlotState)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiUimSlotState
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " logical_slot = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " iccid = '");
            {
                guint iccid_i;
                guint8 iccid_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(iccid_n_items), &error))
                    goto out;

                g_string_append (printable, "{");

                for (iccid_i = 0; iccid_i < iccid_n_items; iccid_i++) {
                    g_string_append_printf (printable, " [%u] = '", iccid_i);

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

struct indication_slot_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_slot_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_slot_status_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_UIM_SLOT_STATUS_OUTPUT_TLV_SLOT_EID:
            tlv_type_str = "Slot EID";
            translated_value = qmi_slot_eid_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_INDICATION_UIM_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_INFORMATION:
            tlv_type_str = "Physical Slot Information";
            translated_value = qmi_physical_slot_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_UIM_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_STATUS:
            tlv_type_str = "Physical Slot Status";
            translated_value = qmi_physical_slot_status_get_printable (
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
indication_slot_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Slot Status\" (0x0048)\n",
                            line_prefix);

    {
        struct indication_slot_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_slot_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationUimSlotStatusOutput *
qmi_indication_uim_slot_status_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationUimSlotStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_UIM_SLOT_STATUS);

    self = g_slice_new0 (QmiIndicationUimSlotStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_UIM_SLOT_STATUS_OUTPUT_TLV_SLOT_EID, NULL, NULL)) == 0) {
                goto qmi_slot_eid_out;
            }
            {
                guint slot_eid_i;
                guint8 slot_eid_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(slot_eid_n_items), NULL))
                    goto qmi_slot_eid_out;

                self->arg_slot_eid = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiSlotEidElement),
                    (guint)slot_eid_n_items);

                g_array_set_clear_func (self->arg_slot_eid, (GDestroyNotify)__qmi_slot_eid_element_clear);

                for (slot_eid_i = 0; slot_eid_i < slot_eid_n_items; slot_eid_i++) {
                    QmiSlotEidElement slot_eid_aux;

                    {
                        guint eid_i;
                        guint8 eid_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(eid_n_items), NULL))
                            goto qmi_slot_eid_out;

                        slot_eid_aux.eid = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (guint8),
                            (guint)eid_n_items);

                        for (eid_i = 0; eid_i < eid_n_items; eid_i++) {
                            guint8 eid_aux;

                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(eid_aux), NULL))
                                goto qmi_slot_eid_out;
                            g_array_insert_val (slot_eid_aux.eid, eid_i, eid_aux);
                        }
                    }
                    g_array_insert_val (self->arg_slot_eid, slot_eid_i, slot_eid_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Slot EID' TLV", offset);
            }

            self->arg_slot_eid_set = TRUE;

qmi_slot_eid_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_UIM_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_INFORMATION, NULL, NULL)) == 0) {
                goto qmi_physical_slot_information_out;
            }
            {
                guint physical_slot_information_i;
                guint8 physical_slot_information_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(physical_slot_information_n_items), NULL))
                    goto qmi_physical_slot_information_out;

                self->arg_physical_slot_information = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiPhysicalSlotInformationSlot),
                    (guint)physical_slot_information_n_items);

                g_array_set_clear_func (self->arg_physical_slot_information, (GDestroyNotify)__qmi_physical_slot_information_slot_clear);

                for (physical_slot_information_i = 0; physical_slot_information_i < physical_slot_information_n_items; physical_slot_information_i++) {
                    QmiPhysicalSlotInformationSlot physical_slot_information_aux;

                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_physical_slot_information_out;
                        physical_slot_information_aux.card_protocol = (QmiUimCardProtocol)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(physical_slot_information_aux.valid_applications), NULL))
                        goto qmi_physical_slot_information_out;
                    {
                        guint atr_value_i;
                        guint8 atr_value_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(atr_value_n_items), NULL))
                            goto qmi_physical_slot_information_out;

                        physical_slot_information_aux.atr_value = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (guint8),
                            (guint)atr_value_n_items);

                        for (atr_value_i = 0; atr_value_i < atr_value_n_items; atr_value_i++) {
                            guint8 atr_value_aux;

                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(atr_value_aux), NULL))
                                goto qmi_physical_slot_information_out;
                            g_array_insert_val (physical_slot_information_aux.atr_value, atr_value_i, atr_value_aux);
                        }
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_physical_slot_information_out;
                        physical_slot_information_aux.is_euicc = (gboolean)tmp;
                    }
                    g_array_insert_val (self->arg_physical_slot_information, physical_slot_information_i, physical_slot_information_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Physical Slot Information' TLV", offset);
            }

            self->arg_physical_slot_information_set = TRUE;

qmi_physical_slot_information_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_UIM_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_STATUS, NULL, NULL)) == 0) {
                goto qmi_physical_slot_status_out;
            }
            {
                guint physical_slot_status_i;
                guint8 physical_slot_status_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(physical_slot_status_n_items), NULL))
                    goto qmi_physical_slot_status_out;

                self->arg_physical_slot_status = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiPhysicalSlotStatusSlot),
                    (guint)physical_slot_status_n_items);

                g_array_set_clear_func (self->arg_physical_slot_status, (GDestroyNotify)__qmi_physical_slot_status_slot_clear);

                for (physical_slot_status_i = 0; physical_slot_status_i < physical_slot_status_n_items; physical_slot_status_i++) {
                    QmiPhysicalSlotStatusSlot physical_slot_status_aux;

                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_physical_slot_status_out;
                        physical_slot_status_aux.physical_card_status = (QmiUimPhysicalCardState)tmp;
                    }
                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_physical_slot_status_out;
                        physical_slot_status_aux.physical_slot_status = (QmiUimSlotState)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(physical_slot_status_aux.logical_slot), NULL))
                        goto qmi_physical_slot_status_out;
                    {
                        guint iccid_i;
                        guint8 iccid_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(iccid_n_items), NULL))
                            goto qmi_physical_slot_status_out;

                        physical_slot_status_aux.iccid = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (guint8),
                            (guint)iccid_n_items);

                        for (iccid_i = 0; iccid_i < iccid_n_items; iccid_i++) {
                            guint8 iccid_aux;

                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(iccid_aux), NULL))
                                goto qmi_physical_slot_status_out;
                            g_array_insert_val (physical_slot_status_aux.iccid, iccid_i, iccid_aux);
                        }
                    }
                    g_array_insert_val (self->arg_physical_slot_status, physical_slot_status_i, physical_slot_status_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Physical Slot Status' TLV", offset);
            }

            self->arg_physical_slot_status_set = TRUE;

qmi_physical_slot_status_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_uim_reset_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_RESET);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimResetOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_RESET_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_reset_output_get_result (
    QmiMessageUimResetOutput *self,
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
qmi_message_uim_reset_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimResetOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_reset_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_reset_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimResetOutput *
qmi_message_uim_reset_output_ref (QmiMessageUimResetOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_reset_output_unref (QmiMessageUimResetOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimResetOutput, self);
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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_UIM_RESET_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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
        case QMI_MESSAGE_UIM_RESET_OUTPUT_TLV_RESULT:
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

QmiMessageUimResetOutput *
qmi_message_uim_reset_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimResetOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_RESET);

    self = g_slice_new0 (QmiMessageUimResetOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_RESET_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_reset_output_unref (self);
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
                qmi_message_uim_reset_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_uim_get_supported_messages_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_GET_SUPPORTED_MESSAGES);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimGetSupportedMessagesOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* List */
    gboolean arg_list_set;
    GArray *arg_list;
};

#define QMI_MESSAGE_UIM_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST 0x10

gboolean
qmi_message_uim_get_supported_messages_output_get_result (
    QmiMessageUimGetSupportedMessagesOutput *self,
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
qmi_message_uim_get_supported_messages_output_get_list (
    QmiMessageUimGetSupportedMessagesOutput *self,
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
qmi_message_uim_get_supported_messages_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimGetSupportedMessagesOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_get_supported_messages_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_get_supported_messages_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimGetSupportedMessagesOutput *
qmi_message_uim_get_supported_messages_output_ref (QmiMessageUimGetSupportedMessagesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_get_supported_messages_output_unref (QmiMessageUimGetSupportedMessagesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_list, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimGetSupportedMessagesOutput, self);
    }
}

static gchar *
qmi_message_uim_get_supported_messages_output_list_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST, NULL, NULL)) == 0)
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
        case QMI_MESSAGE_UIM_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST:
            tlv_type_str = "List";
            translated_value = qmi_message_uim_get_supported_messages_output_list_get_printable (
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

QmiMessageUimGetSupportedMessagesOutput *
qmi_message_uim_get_supported_messages_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimGetSupportedMessagesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_GET_SUPPORTED_MESSAGES);

    self = g_slice_new0 (QmiMessageUimGetSupportedMessagesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_get_supported_messages_output_unref (self);
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
                qmi_message_uim_get_supported_messages_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_SUPPORTED_MESSAGES_OUTPUT_TLV_LIST, NULL, NULL)) == 0) {
                goto qmi_message_uim_get_supported_messages_output_list_out;
            }
            {
                guint list_i;
                guint16 list_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(list_n_items), NULL))
                    goto qmi_message_uim_get_supported_messages_output_list_out;

                self->arg_list = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)list_n_items);

                for (list_i = 0; list_i < list_n_items; list_i++) {
                    guint8 list_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(list_aux), NULL))
                        goto qmi_message_uim_get_supported_messages_output_list_out;
                    g_array_insert_val (self->arg_list, list_i, list_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'List' TLV", offset);
            }

            self->arg_list_set = TRUE;

qmi_message_uim_get_supported_messages_output_list_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Read Transparent */


/* --- Input -- */

struct _QmiMessageUimReadTransparentInput {
    volatile gint ref_count;

    /* Encrypt Data */
    gboolean arg_encrypt_data_set;
    guint8 arg_encrypt_data;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;

    /* Read Information */
    gboolean arg_read_information_set;
    guint16 arg_read_information_offset;
    guint16 arg_read_information_length;

    /* File */
    gboolean arg_file_set;
    guint16 arg_file_file_id;
    GArray *arg_file_file_path;

    /* Session */
    gboolean arg_session_set;
    guint8 arg_session_session_type;
    GArray *arg_session_application_identifier;
};

#define QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_ENCRYPT_DATA 0x11
#define QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x10
#define QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_READ_INFORMATION 0x03
#define QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_FILE 0x02
#define QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_SESSION 0x01

gboolean
qmi_message_uim_read_transparent_input_get_encrypt_data (
    QmiMessageUimReadTransparentInput *self,
    gboolean *value_encrypt_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_encrypt_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Encrypt Data' was not found in the message");
        return FALSE;
    }

    if (value_encrypt_data)
        *value_encrypt_data = (gboolean)(self->arg_encrypt_data);

    return TRUE;
}

gboolean
qmi_message_uim_read_transparent_input_set_encrypt_data (
    QmiMessageUimReadTransparentInput *self,
    gboolean value_encrypt_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_encrypt_data = (guint8)(value_encrypt_data);
    self->arg_encrypt_data_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_read_transparent_input_get_response_in_indication_token (
    QmiMessageUimReadTransparentInput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

gboolean
qmi_message_uim_read_transparent_input_set_response_in_indication_token (
    QmiMessageUimReadTransparentInput *self,
    guint32 value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_response_in_indication_token = value_response_in_indication_token;
    self->arg_response_in_indication_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_read_transparent_input_get_read_information (
    QmiMessageUimReadTransparentInput *self,
    guint16 *value_read_information_offset,
    guint16 *value_read_information_length,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_read_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Read Information' was not found in the message");
        return FALSE;
    }

    if (value_read_information_offset)
        *value_read_information_offset = self->arg_read_information_offset;
    if (value_read_information_length)
        *value_read_information_length = self->arg_read_information_length;

    return TRUE;
}

gboolean
qmi_message_uim_read_transparent_input_set_read_information (
    QmiMessageUimReadTransparentInput *self,
    guint16 value_read_information_offset,
    guint16 value_read_information_length,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_read_information_offset = value_read_information_offset;
    self->arg_read_information_length = value_read_information_length;
    self->arg_read_information_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_read_transparent_input_get_file (
    QmiMessageUimReadTransparentInput *self,
    guint16 *value_file_file_id,
    GArray **value_file_file_path,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_file_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'File' was not found in the message");
        return FALSE;
    }

    if (value_file_file_id)
        *value_file_file_id = self->arg_file_file_id;
    if (value_file_file_path)
        *value_file_file_path = self->arg_file_file_path;

    return TRUE;
}

gboolean
qmi_message_uim_read_transparent_input_set_file (
    QmiMessageUimReadTransparentInput *self,
    guint16 value_file_file_id,
    GArray *value_file_file_path,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_file_file_id = value_file_file_id;
    g_clear_pointer (&self->arg_file_file_path, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_file_file_path, (GDestroyNotify)g_ptr_array_unref);
    self->arg_file_file_path = g_array_ref (value_file_file_path);
    self->arg_file_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_read_transparent_input_get_session (
    QmiMessageUimReadTransparentInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session' was not found in the message");
        return FALSE;
    }

    if (value_session_session_type)
        *value_session_session_type = (QmiUimSessionType)(self->arg_session_session_type);
    if (value_session_application_identifier)
        *value_session_application_identifier = self->arg_session_application_identifier;

    return TRUE;
}

gboolean
qmi_message_uim_read_transparent_input_set_session (
    QmiMessageUimReadTransparentInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_session_type = (guint8)(value_session_session_type);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_ptr_array_unref);
    self->arg_session_application_identifier = g_array_ref (value_session_application_identifier);
    self->arg_session_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_read_transparent_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimReadTransparentInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_read_transparent_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_read_transparent_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimReadTransparentInput *
qmi_message_uim_read_transparent_input_ref (QmiMessageUimReadTransparentInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_read_transparent_input_unref (QmiMessageUimReadTransparentInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_file_file_path, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimReadTransparentInput, self);
    }
}

QmiMessageUimReadTransparentInput *
qmi_message_uim_read_transparent_input_new (void)
{
    QmiMessageUimReadTransparentInput *self;

    self = g_slice_new0 (QmiMessageUimReadTransparentInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_read_transparent_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimReadTransparentInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_READ_TRANSPARENT);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Read Transparent' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Encrypt Data' TLV */
    if (input->arg_encrypt_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_ENCRYPT_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Encrypt Data': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_encrypt_data;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Encrypt Data': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Encrypt Data': ");
            return NULL;
        }
    }

    /* Try to add the 'Response In Indication Token' TLV */
    if (input->arg_response_in_indication_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Response In Indication Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_response_in_indication_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Response In Indication Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Response In Indication Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Read Information' TLV */
    if (input->arg_read_information_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_READ_INFORMATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Read Information': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_read_information_offset, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Read Information': ");
            return NULL;
        }
        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_read_information_length, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Read Information': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Read Information': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Read Information' in message 'Read Transparent'");
        return NULL;
    }

    /* Try to add the 'File' TLV */
    if (input->arg_file_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_FILE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'File': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_file_file_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'File': ");
            return NULL;
        }
        {
            guint file_path_i;
            guint8 file_path_n_items;

            /* Write the number of items in the array first */
            file_path_n_items = (guint8) input->arg_file_file_path->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, file_path_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'File': ");
                return NULL;
            }

            for (file_path_i = 0; file_path_i < input->arg_file_file_path->len; file_path_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_file_file_path, guint8,file_path_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'File': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'File': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'File' in message 'Read Transparent'");
        return NULL;
    }

    /* Try to add the 'Session' TLV */
    if (input->arg_session_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_SESSION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session': ");
                return NULL;
            }
        }
        {
            guint application_identifier_i;
            guint8 application_identifier_n_items;

            /* Write the number of items in the array first */
            application_identifier_n_items = (guint8) input->arg_session_application_identifier->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, application_identifier_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                return NULL;
            }

            for (application_identifier_i = 0; application_identifier_i < input->arg_session_application_identifier->len; application_identifier_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_session_application_identifier, guint8,application_identifier_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session' in message 'Read Transparent'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimReadTransparentOutput {
    volatile gint ref_count;

    /* Card Result */
    gboolean arg_card_result_set;
    guint8 arg_card_result_sw1;
    guint8 arg_card_result_sw2;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Read result */
    gboolean arg_read_result_set;
    GArray *arg_read_result;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;

    /* Encrypted Data */
    gboolean arg_encrypted_data_set;
    guint8 arg_encrypted_data;
};

#define QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_CARD_RESULT 0x10
#define QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_READ_RESULT 0x11
#define QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x12
#define QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_ENCRYPTED_DATA 0x13

gboolean
qmi_message_uim_read_transparent_output_get_card_result (
    QmiMessageUimReadTransparentOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Result' was not found in the message");
        return FALSE;
    }

    if (value_card_result_sw1)
        *value_card_result_sw1 = self->arg_card_result_sw1;
    if (value_card_result_sw2)
        *value_card_result_sw2 = self->arg_card_result_sw2;

    return TRUE;
}

gboolean
qmi_message_uim_read_transparent_output_get_result (
    QmiMessageUimReadTransparentOutput *self,
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
qmi_message_uim_read_transparent_output_get_read_result (
    QmiMessageUimReadTransparentOutput *self,
    GArray **value_read_result,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_read_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Read result' was not found in the message");
        return FALSE;
    }

    if (value_read_result)
        *value_read_result = self->arg_read_result;

    return TRUE;
}

gboolean
qmi_message_uim_read_transparent_output_get_response_in_indication_token (
    QmiMessageUimReadTransparentOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

gboolean
qmi_message_uim_read_transparent_output_get_encrypted_data (
    QmiMessageUimReadTransparentOutput *self,
    gboolean *value_encrypted_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_encrypted_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Encrypted Data' was not found in the message");
        return FALSE;
    }

    if (value_encrypted_data)
        *value_encrypted_data = (gboolean)(self->arg_encrypted_data);

    return TRUE;
}

GType
qmi_message_uim_read_transparent_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimReadTransparentOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_read_transparent_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_read_transparent_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimReadTransparentOutput *
qmi_message_uim_read_transparent_output_ref (QmiMessageUimReadTransparentOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_read_transparent_output_unref (QmiMessageUimReadTransparentOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_read_result, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimReadTransparentOutput, self);
    }
}

static gchar *
qmi_message_uim_read_transparent_input_encrypt_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_ENCRYPT_DATA, NULL, NULL)) == 0)
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
qmi_message_uim_read_transparent_input_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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
qmi_message_uim_read_transparent_input_read_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_READ_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " offset = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " length = '");

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
qmi_message_uim_read_transparent_input_file_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_FILE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " file_id = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " file_path = '");
    {
        guint file_path_i;
        guint8 file_path_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(file_path_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (file_path_i = 0; file_path_i < file_path_n_items; file_path_i++) {
            g_string_append_printf (printable, " [%u] = '", file_path_i);

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
qmi_uim_session_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_SESSION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " session_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SESSION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_session_type_get_string ((QmiUimSessionType)tmp));
#elif defined  __QMI_UIM_SESSION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_session_type_build_string_from_mask ((QmiUimSessionType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSessionType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " application_identifier = '");
    {
        guint application_identifier_i;
        guint8 application_identifier_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(application_identifier_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (application_identifier_i = 0; application_identifier_i < application_identifier_n_items; application_identifier_i++) {
            g_string_append_printf (printable, " [%u] = '", application_identifier_i);

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
qmi_message_uim_read_transparent_output_card_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " sw1 = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " sw2 = '");

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
qmi_message_uim_read_transparent_output_read_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_READ_RESULT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint read_result_i;
        guint16 read_result_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(read_result_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (read_result_i = 0; read_result_i < read_result_n_items; read_result_i++) {
            g_string_append_printf (printable, " [%u] = '", read_result_i);

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
qmi_message_uim_read_transparent_output_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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
qmi_message_uim_read_transparent_output_encrypted_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_ENCRYPTED_DATA, NULL, NULL)) == 0)
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

struct message_read_transparent_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_read_transparent_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_read_transparent_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_ENCRYPT_DATA:
            tlv_type_str = "Encrypt Data";
            translated_value = qmi_message_uim_read_transparent_input_encrypt_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_read_transparent_input_response_in_indication_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_READ_INFORMATION:
            tlv_type_str = "Read Information";
            translated_value = qmi_message_uim_read_transparent_input_read_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_FILE:
            tlv_type_str = "File";
            translated_value = qmi_message_uim_read_transparent_input_file_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_TRANSPARENT_INPUT_TLV_SESSION:
            tlv_type_str = "Session";
            translated_value = qmi_uim_session_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_CARD_RESULT:
            tlv_type_str = "Card Result";
            translated_value = qmi_message_uim_read_transparent_output_card_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_READ_RESULT:
            tlv_type_str = "Read result";
            translated_value = qmi_message_uim_read_transparent_output_read_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_read_transparent_output_response_in_indication_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_ENCRYPTED_DATA:
            tlv_type_str = "Encrypted Data";
            translated_value = qmi_message_uim_read_transparent_output_encrypted_data_get_printable (
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
message_read_transparent_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Read Transparent\" (0x0020)\n",
                            line_prefix);

    {
        struct message_read_transparent_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_read_transparent_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimReadTransparentOutput *
qmi_message_uim_read_transparent_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimReadTransparentOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_READ_TRANSPARENT);

    self = g_slice_new0 (QmiMessageUimReadTransparentOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0) {
                goto qmi_message_uim_read_transparent_output_card_result_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw1), NULL))
                goto qmi_message_uim_read_transparent_output_card_result_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw2), NULL))
                goto qmi_message_uim_read_transparent_output_card_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Card Result' TLV", offset);
            }

            self->arg_card_result_set = TRUE;

qmi_message_uim_read_transparent_output_card_result_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_read_transparent_output_unref (self);
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
                qmi_message_uim_read_transparent_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_READ_RESULT, NULL, NULL)) == 0) {
                goto qmi_message_uim_read_transparent_output_read_result_out;
            }
            {
                guint read_result_i;
                guint16 read_result_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(read_result_n_items), NULL))
                    goto qmi_message_uim_read_transparent_output_read_result_out;

                self->arg_read_result = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)read_result_n_items);

                for (read_result_i = 0; read_result_i < read_result_n_items; read_result_i++) {
                    guint8 read_result_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(read_result_aux), NULL))
                        goto qmi_message_uim_read_transparent_output_read_result_out;
                    g_array_insert_val (self->arg_read_result, read_result_i, read_result_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Read result' TLV", offset);
            }

            self->arg_read_result_set = TRUE;

qmi_message_uim_read_transparent_output_read_result_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_uim_read_transparent_output_response_in_indication_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_response_in_indication_token), NULL))
                goto qmi_message_uim_read_transparent_output_response_in_indication_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Response In Indication Token' TLV", offset);
            }

            self->arg_response_in_indication_token_set = TRUE;

qmi_message_uim_read_transparent_output_response_in_indication_token_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_TRANSPARENT_OUTPUT_TLV_ENCRYPTED_DATA, NULL, NULL)) == 0) {
                goto qmi_message_uim_read_transparent_output_encrypted_data_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_uim_read_transparent_output_encrypted_data_out;
                self->arg_encrypted_data = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Encrypted Data' TLV", offset);
            }

            self->arg_encrypted_data_set = TRUE;

qmi_message_uim_read_transparent_output_encrypted_data_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Read Record */


/* --- Input -- */

struct _QmiMessageUimReadRecordInput {
    volatile gint ref_count;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;

    /* Last Record */
    gboolean arg_last_record_set;
    guint16 arg_last_record;

    /* Record */
    gboolean arg_record_set;
    guint16 arg_record_record_number;
    guint16 arg_record_record_length;

    /* File */
    gboolean arg_file_set;
    guint16 arg_file_file_id;
    GArray *arg_file_file_path;

    /* Session */
    gboolean arg_session_set;
    guint8 arg_session_session_type;
    GArray *arg_session_application_identifier;
};

#define QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x11
#define QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_LAST_RECORD 0x10
#define QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_RECORD 0x03
#define QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_FILE 0x02
#define QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_SESSION 0x01

gboolean
qmi_message_uim_read_record_input_get_response_in_indication_token (
    QmiMessageUimReadRecordInput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

gboolean
qmi_message_uim_read_record_input_set_response_in_indication_token (
    QmiMessageUimReadRecordInput *self,
    guint32 value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_response_in_indication_token = value_response_in_indication_token;
    self->arg_response_in_indication_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_read_record_input_get_last_record (
    QmiMessageUimReadRecordInput *self,
    guint16 *value_last_record,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_last_record_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Last Record' was not found in the message");
        return FALSE;
    }

    if (value_last_record)
        *value_last_record = self->arg_last_record;

    return TRUE;
}

gboolean
qmi_message_uim_read_record_input_set_last_record (
    QmiMessageUimReadRecordInput *self,
    guint16 value_last_record,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_last_record = value_last_record;
    self->arg_last_record_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_read_record_input_get_record (
    QmiMessageUimReadRecordInput *self,
    guint16 *value_record_record_number,
    guint16 *value_record_record_length,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_record_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Record' was not found in the message");
        return FALSE;
    }

    if (value_record_record_number)
        *value_record_record_number = self->arg_record_record_number;
    if (value_record_record_length)
        *value_record_record_length = self->arg_record_record_length;

    return TRUE;
}

gboolean
qmi_message_uim_read_record_input_set_record (
    QmiMessageUimReadRecordInput *self,
    guint16 value_record_record_number,
    guint16 value_record_record_length,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_record_record_number = value_record_record_number;
    self->arg_record_record_length = value_record_record_length;
    self->arg_record_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_read_record_input_get_file (
    QmiMessageUimReadRecordInput *self,
    guint16 *value_file_file_id,
    GArray **value_file_file_path,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_file_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'File' was not found in the message");
        return FALSE;
    }

    if (value_file_file_id)
        *value_file_file_id = self->arg_file_file_id;
    if (value_file_file_path)
        *value_file_file_path = self->arg_file_file_path;

    return TRUE;
}

gboolean
qmi_message_uim_read_record_input_set_file (
    QmiMessageUimReadRecordInput *self,
    guint16 value_file_file_id,
    GArray *value_file_file_path,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_file_file_id = value_file_file_id;
    g_clear_pointer (&self->arg_file_file_path, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_file_file_path, (GDestroyNotify)g_ptr_array_unref);
    self->arg_file_file_path = g_array_ref (value_file_file_path);
    self->arg_file_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_read_record_input_get_session (
    QmiMessageUimReadRecordInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session' was not found in the message");
        return FALSE;
    }

    if (value_session_session_type)
        *value_session_session_type = (QmiUimSessionType)(self->arg_session_session_type);
    if (value_session_application_identifier)
        *value_session_application_identifier = self->arg_session_application_identifier;

    return TRUE;
}

gboolean
qmi_message_uim_read_record_input_set_session (
    QmiMessageUimReadRecordInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_session_type = (guint8)(value_session_session_type);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_ptr_array_unref);
    self->arg_session_application_identifier = g_array_ref (value_session_application_identifier);
    self->arg_session_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_read_record_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimReadRecordInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_read_record_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_read_record_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimReadRecordInput *
qmi_message_uim_read_record_input_ref (QmiMessageUimReadRecordInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_read_record_input_unref (QmiMessageUimReadRecordInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_file_file_path, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimReadRecordInput, self);
    }
}

QmiMessageUimReadRecordInput *
qmi_message_uim_read_record_input_new (void)
{
    QmiMessageUimReadRecordInput *self;

    self = g_slice_new0 (QmiMessageUimReadRecordInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_read_record_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimReadRecordInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_READ_RECORD);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Read Record' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Response In Indication Token' TLV */
    if (input->arg_response_in_indication_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Response In Indication Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_response_in_indication_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Response In Indication Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Response In Indication Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Last Record' TLV */
    if (input->arg_last_record_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_LAST_RECORD, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Last Record': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_last_record, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Last Record': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Last Record': ");
            return NULL;
        }
    }

    /* Try to add the 'Record' TLV */
    if (input->arg_record_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_RECORD, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Record': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_record_record_number, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Record': ");
            return NULL;
        }
        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_record_record_length, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Record': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Record': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Record' in message 'Read Record'");
        return NULL;
    }

    /* Try to add the 'File' TLV */
    if (input->arg_file_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_FILE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'File': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_file_file_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'File': ");
            return NULL;
        }
        {
            guint file_path_i;
            guint8 file_path_n_items;

            /* Write the number of items in the array first */
            file_path_n_items = (guint8) input->arg_file_file_path->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, file_path_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'File': ");
                return NULL;
            }

            for (file_path_i = 0; file_path_i < input->arg_file_file_path->len; file_path_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_file_file_path, guint8,file_path_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'File': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'File': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'File' in message 'Read Record'");
        return NULL;
    }

    /* Try to add the 'Session' TLV */
    if (input->arg_session_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_SESSION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session': ");
                return NULL;
            }
        }
        {
            guint application_identifier_i;
            guint8 application_identifier_n_items;

            /* Write the number of items in the array first */
            application_identifier_n_items = (guint8) input->arg_session_application_identifier->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, application_identifier_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                return NULL;
            }

            for (application_identifier_i = 0; application_identifier_i < input->arg_session_application_identifier->len; application_identifier_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_session_application_identifier, guint8,application_identifier_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session' in message 'Read Record'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimReadRecordOutput {
    volatile gint ref_count;

    /* Card Result */
    gboolean arg_card_result_set;
    guint8 arg_card_result_sw1;
    guint8 arg_card_result_sw2;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Read Result */
    gboolean arg_read_result_set;
    GArray *arg_read_result;

    /* Additional Read Result */
    gboolean arg_additional_read_result_set;
    GArray *arg_additional_read_result;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;
};

#define QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_CARD_RESULT 0x10
#define QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_READ_RESULT 0x11
#define QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_ADDITIONAL_READ_RESULT 0x12
#define QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x13

gboolean
qmi_message_uim_read_record_output_get_card_result (
    QmiMessageUimReadRecordOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Result' was not found in the message");
        return FALSE;
    }

    if (value_card_result_sw1)
        *value_card_result_sw1 = self->arg_card_result_sw1;
    if (value_card_result_sw2)
        *value_card_result_sw2 = self->arg_card_result_sw2;

    return TRUE;
}

gboolean
qmi_message_uim_read_record_output_get_result (
    QmiMessageUimReadRecordOutput *self,
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
qmi_message_uim_read_record_output_get_read_result (
    QmiMessageUimReadRecordOutput *self,
    GArray **value_read_result,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_read_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Read Result' was not found in the message");
        return FALSE;
    }

    if (value_read_result)
        *value_read_result = self->arg_read_result;

    return TRUE;
}

gboolean
qmi_message_uim_read_record_output_get_additional_read_result (
    QmiMessageUimReadRecordOutput *self,
    GArray **value_additional_read_result,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_additional_read_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Additional Read Result' was not found in the message");
        return FALSE;
    }

    if (value_additional_read_result)
        *value_additional_read_result = self->arg_additional_read_result;

    return TRUE;
}

gboolean
qmi_message_uim_read_record_output_get_response_in_indication_token (
    QmiMessageUimReadRecordOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

GType
qmi_message_uim_read_record_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimReadRecordOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_read_record_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_read_record_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimReadRecordOutput *
qmi_message_uim_read_record_output_ref (QmiMessageUimReadRecordOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_read_record_output_unref (QmiMessageUimReadRecordOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_read_result, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_additional_read_result, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimReadRecordOutput, self);
    }
}

static gchar *
qmi_message_uim_read_record_input_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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
qmi_message_uim_read_record_input_last_record_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_LAST_RECORD, NULL, NULL)) == 0)
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
qmi_message_uim_read_record_input_record_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_RECORD, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " record_number = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " record_length = '");

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
qmi_message_uim_read_record_input_file_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_FILE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " file_id = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " file_path = '");
    {
        guint file_path_i;
        guint8 file_path_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(file_path_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (file_path_i = 0; file_path_i < file_path_n_items; file_path_i++) {
            g_string_append_printf (printable, " [%u] = '", file_path_i);

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
qmi_message_uim_read_record_output_card_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " sw1 = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " sw2 = '");

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
qmi_message_uim_read_record_output_read_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_READ_RESULT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint read_result_i;
        guint16 read_result_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(read_result_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (read_result_i = 0; read_result_i < read_result_n_items; read_result_i++) {
            g_string_append_printf (printable, " [%u] = '", read_result_i);

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
qmi_message_uim_read_record_output_additional_read_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_ADDITIONAL_READ_RESULT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint additional_read_result_i;
        guint16 additional_read_result_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(additional_read_result_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (additional_read_result_i = 0; additional_read_result_i < additional_read_result_n_items; additional_read_result_i++) {
            g_string_append_printf (printable, " [%u] = '", additional_read_result_i);

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
qmi_message_uim_read_record_output_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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

struct message_read_record_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_read_record_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_read_record_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_read_record_input_response_in_indication_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_LAST_RECORD:
            tlv_type_str = "Last Record";
            translated_value = qmi_message_uim_read_record_input_last_record_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_RECORD:
            tlv_type_str = "Record";
            translated_value = qmi_message_uim_read_record_input_record_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_FILE:
            tlv_type_str = "File";
            translated_value = qmi_message_uim_read_record_input_file_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_RECORD_INPUT_TLV_SESSION:
            tlv_type_str = "Session";
            translated_value = qmi_uim_session_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_CARD_RESULT:
            tlv_type_str = "Card Result";
            translated_value = qmi_message_uim_read_record_output_card_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_READ_RESULT:
            tlv_type_str = "Read Result";
            translated_value = qmi_message_uim_read_record_output_read_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_ADDITIONAL_READ_RESULT:
            tlv_type_str = "Additional Read Result";
            translated_value = qmi_message_uim_read_record_output_additional_read_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_read_record_output_response_in_indication_token_get_printable (
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
message_read_record_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Read Record\" (0x0021)\n",
                            line_prefix);

    {
        struct message_read_record_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_read_record_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimReadRecordOutput *
qmi_message_uim_read_record_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimReadRecordOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_READ_RECORD);

    self = g_slice_new0 (QmiMessageUimReadRecordOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0) {
                goto qmi_message_uim_read_record_output_card_result_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw1), NULL))
                goto qmi_message_uim_read_record_output_card_result_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw2), NULL))
                goto qmi_message_uim_read_record_output_card_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Card Result' TLV", offset);
            }

            self->arg_card_result_set = TRUE;

qmi_message_uim_read_record_output_card_result_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_read_record_output_unref (self);
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
                qmi_message_uim_read_record_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_READ_RESULT, NULL, NULL)) == 0) {
                goto qmi_message_uim_read_record_output_read_result_out;
            }
            {
                guint read_result_i;
                guint16 read_result_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(read_result_n_items), NULL))
                    goto qmi_message_uim_read_record_output_read_result_out;

                self->arg_read_result = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)read_result_n_items);

                for (read_result_i = 0; read_result_i < read_result_n_items; read_result_i++) {
                    guint8 read_result_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(read_result_aux), NULL))
                        goto qmi_message_uim_read_record_output_read_result_out;
                    g_array_insert_val (self->arg_read_result, read_result_i, read_result_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Read Result' TLV", offset);
            }

            self->arg_read_result_set = TRUE;

qmi_message_uim_read_record_output_read_result_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_ADDITIONAL_READ_RESULT, NULL, NULL)) == 0) {
                goto qmi_message_uim_read_record_output_additional_read_result_out;
            }
            {
                guint additional_read_result_i;
                guint16 additional_read_result_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(additional_read_result_n_items), NULL))
                    goto qmi_message_uim_read_record_output_additional_read_result_out;

                self->arg_additional_read_result = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)additional_read_result_n_items);

                for (additional_read_result_i = 0; additional_read_result_i < additional_read_result_n_items; additional_read_result_i++) {
                    guint8 additional_read_result_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(additional_read_result_aux), NULL))
                        goto qmi_message_uim_read_record_output_additional_read_result_out;
                    g_array_insert_val (self->arg_additional_read_result, additional_read_result_i, additional_read_result_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Additional Read Result' TLV", offset);
            }

            self->arg_additional_read_result_set = TRUE;

qmi_message_uim_read_record_output_additional_read_result_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_READ_RECORD_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_uim_read_record_output_response_in_indication_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_response_in_indication_token), NULL))
                goto qmi_message_uim_read_record_output_response_in_indication_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Response In Indication Token' TLV", offset);
            }

            self->arg_response_in_indication_token_set = TRUE;

qmi_message_uim_read_record_output_response_in_indication_token_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Write Record */


/* --- Input -- */

struct _QmiMessageUimWriteRecordInput {
    volatile gint ref_count;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;

    /* Write Record */
    gboolean arg_write_record_set;
    guint16 arg_write_record_record_number;
    GArray *arg_write_record_record;

    /* File */
    gboolean arg_file_set;
    guint16 arg_file_file_id;
    GArray *arg_file_file_path;

    /* Session */
    gboolean arg_session_set;
    guint8 arg_session_session_type;
    GArray *arg_session_application_identifier;
};

#define QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x10
#define QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_WRITE_RECORD 0x03
#define QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_FILE 0x02
#define QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_SESSION 0x01

gboolean
qmi_message_uim_write_record_input_get_response_in_indication_token (
    QmiMessageUimWriteRecordInput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

gboolean
qmi_message_uim_write_record_input_set_response_in_indication_token (
    QmiMessageUimWriteRecordInput *self,
    guint32 value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_response_in_indication_token = value_response_in_indication_token;
    self->arg_response_in_indication_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_write_record_input_get_write_record (
    QmiMessageUimWriteRecordInput *self,
    guint16 *value_write_record_record_number,
    GArray **value_write_record_record,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_write_record_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Write Record' was not found in the message");
        return FALSE;
    }

    if (value_write_record_record_number)
        *value_write_record_record_number = self->arg_write_record_record_number;
    if (value_write_record_record)
        *value_write_record_record = self->arg_write_record_record;

    return TRUE;
}

gboolean
qmi_message_uim_write_record_input_set_write_record (
    QmiMessageUimWriteRecordInput *self,
    guint16 value_write_record_record_number,
    GArray *value_write_record_record,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_write_record_record_number = value_write_record_record_number;
    g_clear_pointer (&self->arg_write_record_record, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_write_record_record, (GDestroyNotify)g_ptr_array_unref);
    self->arg_write_record_record = g_array_ref (value_write_record_record);
    self->arg_write_record_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_write_record_input_get_file (
    QmiMessageUimWriteRecordInput *self,
    guint16 *value_file_file_id,
    GArray **value_file_file_path,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_file_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'File' was not found in the message");
        return FALSE;
    }

    if (value_file_file_id)
        *value_file_file_id = self->arg_file_file_id;
    if (value_file_file_path)
        *value_file_file_path = self->arg_file_file_path;

    return TRUE;
}

gboolean
qmi_message_uim_write_record_input_set_file (
    QmiMessageUimWriteRecordInput *self,
    guint16 value_file_file_id,
    GArray *value_file_file_path,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_file_file_id = value_file_file_id;
    g_clear_pointer (&self->arg_file_file_path, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_file_file_path, (GDestroyNotify)g_ptr_array_unref);
    self->arg_file_file_path = g_array_ref (value_file_file_path);
    self->arg_file_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_write_record_input_get_session (
    QmiMessageUimWriteRecordInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session' was not found in the message");
        return FALSE;
    }

    if (value_session_session_type)
        *value_session_session_type = (QmiUimSessionType)(self->arg_session_session_type);
    if (value_session_application_identifier)
        *value_session_application_identifier = self->arg_session_application_identifier;

    return TRUE;
}

gboolean
qmi_message_uim_write_record_input_set_session (
    QmiMessageUimWriteRecordInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_session_type = (guint8)(value_session_session_type);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_ptr_array_unref);
    self->arg_session_application_identifier = g_array_ref (value_session_application_identifier);
    self->arg_session_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_write_record_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimWriteRecordInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_write_record_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_write_record_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimWriteRecordInput *
qmi_message_uim_write_record_input_ref (QmiMessageUimWriteRecordInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_write_record_input_unref (QmiMessageUimWriteRecordInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_write_record_record, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_file_file_path, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimWriteRecordInput, self);
    }
}

QmiMessageUimWriteRecordInput *
qmi_message_uim_write_record_input_new (void)
{
    QmiMessageUimWriteRecordInput *self;

    self = g_slice_new0 (QmiMessageUimWriteRecordInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_write_record_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimWriteRecordInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_WRITE_RECORD);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Write Record' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Response In Indication Token' TLV */
    if (input->arg_response_in_indication_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Response In Indication Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_response_in_indication_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Response In Indication Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Response In Indication Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Write Record' TLV */
    if (input->arg_write_record_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_WRITE_RECORD, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Write Record': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_write_record_record_number, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Write Record': ");
            return NULL;
        }
        {
            guint record_i;
            guint16 record_n_items;

            /* Write the number of items in the array first */
            record_n_items = (guint16) input->arg_write_record_record->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, record_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Write Record': ");
                return NULL;
            }

            for (record_i = 0; record_i < input->arg_write_record_record->len; record_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_write_record_record, guint8,record_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Write Record': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Write Record': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Write Record' in message 'Write Record'");
        return NULL;
    }

    /* Try to add the 'File' TLV */
    if (input->arg_file_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_FILE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'File': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_file_file_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'File': ");
            return NULL;
        }
        {
            guint file_path_i;
            guint8 file_path_n_items;

            /* Write the number of items in the array first */
            file_path_n_items = (guint8) input->arg_file_file_path->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, file_path_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'File': ");
                return NULL;
            }

            for (file_path_i = 0; file_path_i < input->arg_file_file_path->len; file_path_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_file_file_path, guint8,file_path_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'File': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'File': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'File' in message 'Write Record'");
        return NULL;
    }

    /* Try to add the 'Session' TLV */
    if (input->arg_session_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_SESSION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session': ");
                return NULL;
            }
        }
        {
            guint application_identifier_i;
            guint8 application_identifier_n_items;

            /* Write the number of items in the array first */
            application_identifier_n_items = (guint8) input->arg_session_application_identifier->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, application_identifier_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                return NULL;
            }

            for (application_identifier_i = 0; application_identifier_i < input->arg_session_application_identifier->len; application_identifier_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_session_application_identifier, guint8,application_identifier_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session' in message 'Write Record'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimWriteRecordOutput {
    volatile gint ref_count;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;

    /* Card Result */
    gboolean arg_card_result_set;
    guint8 arg_card_result_sw1;
    guint8 arg_card_result_sw2;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_WRITE_RECORD_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x11
#define QMI_MESSAGE_UIM_WRITE_RECORD_OUTPUT_TLV_CARD_RESULT 0x10
#define QMI_MESSAGE_UIM_WRITE_RECORD_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_write_record_output_get_response_in_indication_token (
    QmiMessageUimWriteRecordOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

gboolean
qmi_message_uim_write_record_output_get_card_result (
    QmiMessageUimWriteRecordOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Result' was not found in the message");
        return FALSE;
    }

    if (value_card_result_sw1)
        *value_card_result_sw1 = self->arg_card_result_sw1;
    if (value_card_result_sw2)
        *value_card_result_sw2 = self->arg_card_result_sw2;

    return TRUE;
}

gboolean
qmi_message_uim_write_record_output_get_result (
    QmiMessageUimWriteRecordOutput *self,
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
qmi_message_uim_write_record_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimWriteRecordOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_write_record_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_write_record_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimWriteRecordOutput *
qmi_message_uim_write_record_output_ref (QmiMessageUimWriteRecordOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_write_record_output_unref (QmiMessageUimWriteRecordOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimWriteRecordOutput, self);
    }
}

static gchar *
qmi_message_uim_write_record_input_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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
qmi_message_uim_write_record_input_write_record_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_WRITE_RECORD, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " record_number = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " record = '");
    {
        guint record_i;
        guint16 record_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(record_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (record_i = 0; record_i < record_n_items; record_i++) {
            g_string_append_printf (printable, " [%u] = '", record_i);

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
qmi_message_uim_write_record_input_file_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_FILE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " file_id = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " file_path = '");
    {
        guint file_path_i;
        guint8 file_path_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(file_path_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (file_path_i = 0; file_path_i < file_path_n_items; file_path_i++) {
            g_string_append_printf (printable, " [%u] = '", file_path_i);

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
qmi_message_uim_write_record_output_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_WRITE_RECORD_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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
qmi_message_uim_write_record_output_card_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_WRITE_RECORD_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " sw1 = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " sw2 = '");

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

struct message_write_record_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_write_record_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_write_record_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_write_record_input_response_in_indication_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_WRITE_RECORD:
            tlv_type_str = "Write Record";
            translated_value = qmi_message_uim_write_record_input_write_record_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_FILE:
            tlv_type_str = "File";
            translated_value = qmi_message_uim_write_record_input_file_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_WRITE_RECORD_INPUT_TLV_SESSION:
            tlv_type_str = "Session";
            translated_value = qmi_uim_session_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_WRITE_RECORD_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_write_record_output_response_in_indication_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_WRITE_RECORD_OUTPUT_TLV_CARD_RESULT:
            tlv_type_str = "Card Result";
            translated_value = qmi_message_uim_write_record_output_card_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_WRITE_RECORD_OUTPUT_TLV_RESULT:
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
message_write_record_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Write Record\" (0x0023)\n",
                            line_prefix);

    {
        struct message_write_record_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_write_record_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimWriteRecordOutput *
qmi_message_uim_write_record_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimWriteRecordOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_WRITE_RECORD);

    self = g_slice_new0 (QmiMessageUimWriteRecordOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_WRITE_RECORD_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_uim_write_record_output_response_in_indication_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_response_in_indication_token), NULL))
                goto qmi_message_uim_write_record_output_response_in_indication_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Response In Indication Token' TLV", offset);
            }

            self->arg_response_in_indication_token_set = TRUE;

qmi_message_uim_write_record_output_response_in_indication_token_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_WRITE_RECORD_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0) {
                goto qmi_message_uim_write_record_output_card_result_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw1), NULL))
                goto qmi_message_uim_write_record_output_card_result_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw2), NULL))
                goto qmi_message_uim_write_record_output_card_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Card Result' TLV", offset);
            }

            self->arg_card_result_set = TRUE;

qmi_message_uim_write_record_output_card_result_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_WRITE_RECORD_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_write_record_output_unref (self);
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
                qmi_message_uim_write_record_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get File Attributes */


/* --- Input -- */

struct _QmiMessageUimGetFileAttributesInput {
    volatile gint ref_count;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;

    /* File */
    gboolean arg_file_set;
    guint16 arg_file_file_id;
    GArray *arg_file_file_path;

    /* Session */
    gboolean arg_session_set;
    guint8 arg_session_session_type;
    GArray *arg_session_application_identifier;
};

#define QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x10
#define QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT_TLV_FILE 0x02
#define QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT_TLV_SESSION 0x01

gboolean
qmi_message_uim_get_file_attributes_input_get_response_in_indication_token (
    QmiMessageUimGetFileAttributesInput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

gboolean
qmi_message_uim_get_file_attributes_input_set_response_in_indication_token (
    QmiMessageUimGetFileAttributesInput *self,
    guint32 value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_response_in_indication_token = value_response_in_indication_token;
    self->arg_response_in_indication_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_get_file_attributes_input_get_file (
    QmiMessageUimGetFileAttributesInput *self,
    guint16 *value_file_file_id,
    GArray **value_file_file_path,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_file_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'File' was not found in the message");
        return FALSE;
    }

    if (value_file_file_id)
        *value_file_file_id = self->arg_file_file_id;
    if (value_file_file_path)
        *value_file_file_path = self->arg_file_file_path;

    return TRUE;
}

gboolean
qmi_message_uim_get_file_attributes_input_set_file (
    QmiMessageUimGetFileAttributesInput *self,
    guint16 value_file_file_id,
    GArray *value_file_file_path,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_file_file_id = value_file_file_id;
    g_clear_pointer (&self->arg_file_file_path, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_file_file_path, (GDestroyNotify)g_ptr_array_unref);
    self->arg_file_file_path = g_array_ref (value_file_file_path);
    self->arg_file_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_get_file_attributes_input_get_session (
    QmiMessageUimGetFileAttributesInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session' was not found in the message");
        return FALSE;
    }

    if (value_session_session_type)
        *value_session_session_type = (QmiUimSessionType)(self->arg_session_session_type);
    if (value_session_application_identifier)
        *value_session_application_identifier = self->arg_session_application_identifier;

    return TRUE;
}

gboolean
qmi_message_uim_get_file_attributes_input_set_session (
    QmiMessageUimGetFileAttributesInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_session_type = (guint8)(value_session_session_type);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_ptr_array_unref);
    self->arg_session_application_identifier = g_array_ref (value_session_application_identifier);
    self->arg_session_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_get_file_attributes_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimGetFileAttributesInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_get_file_attributes_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_get_file_attributes_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimGetFileAttributesInput *
qmi_message_uim_get_file_attributes_input_ref (QmiMessageUimGetFileAttributesInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_get_file_attributes_input_unref (QmiMessageUimGetFileAttributesInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_file_file_path, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimGetFileAttributesInput, self);
    }
}

QmiMessageUimGetFileAttributesInput *
qmi_message_uim_get_file_attributes_input_new (void)
{
    QmiMessageUimGetFileAttributesInput *self;

    self = g_slice_new0 (QmiMessageUimGetFileAttributesInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_get_file_attributes_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimGetFileAttributesInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Get File Attributes' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Response In Indication Token' TLV */
    if (input->arg_response_in_indication_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Response In Indication Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_response_in_indication_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Response In Indication Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Response In Indication Token': ");
            return NULL;
        }
    }

    /* Try to add the 'File' TLV */
    if (input->arg_file_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT_TLV_FILE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'File': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_file_file_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'File': ");
            return NULL;
        }
        {
            guint file_path_i;
            guint8 file_path_n_items;

            /* Write the number of items in the array first */
            file_path_n_items = (guint8) input->arg_file_file_path->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, file_path_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'File': ");
                return NULL;
            }

            for (file_path_i = 0; file_path_i < input->arg_file_file_path->len; file_path_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_file_file_path, guint8,file_path_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'File': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'File': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'File' in message 'Get File Attributes'");
        return NULL;
    }

    /* Try to add the 'Session' TLV */
    if (input->arg_session_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT_TLV_SESSION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session': ");
                return NULL;
            }
        }
        {
            guint application_identifier_i;
            guint8 application_identifier_n_items;

            /* Write the number of items in the array first */
            application_identifier_n_items = (guint8) input->arg_session_application_identifier->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, application_identifier_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                return NULL;
            }

            for (application_identifier_i = 0; application_identifier_i < input->arg_session_application_identifier->len; application_identifier_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_session_application_identifier, guint8,application_identifier_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session' in message 'Get File Attributes'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimGetFileAttributesOutput {
    volatile gint ref_count;

    /* Card Result */
    gboolean arg_card_result_set;
    guint8 arg_card_result_sw1;
    guint8 arg_card_result_sw2;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* File Attributes */
    gboolean arg_file_attributes_set;
    guint16 arg_file_attributes_file_size;
    guint16 arg_file_attributes_file_id;
    guint8 arg_file_attributes_file_type;
    guint16 arg_file_attributes_record_size;
    guint16 arg_file_attributes_record_count;
    guint8 arg_file_attributes_read_security_attributes_logic;
    guint16 arg_file_attributes_read_security_attributes;
    guint8 arg_file_attributes_write_security_attributes_logic;
    guint16 arg_file_attributes_write_security_attributes;
    guint8 arg_file_attributes_increase_security_attributes_logic;
    guint16 arg_file_attributes_increase_security_attributes;
    guint8 arg_file_attributes_deactivate_security_attributes_logic;
    guint16 arg_file_attributes_deactivate_security_attributes;
    guint8 arg_file_attributes_activate_security_attributes_logic;
    guint16 arg_file_attributes_activate_security_attributes;
    GArray *arg_file_attributes_raw_data;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;
};

#define QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_CARD_RESULT 0x10
#define QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_FILE_ATTRIBUTES 0x11
#define QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x12

gboolean
qmi_message_uim_get_file_attributes_output_get_card_result (
    QmiMessageUimGetFileAttributesOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Result' was not found in the message");
        return FALSE;
    }

    if (value_card_result_sw1)
        *value_card_result_sw1 = self->arg_card_result_sw1;
    if (value_card_result_sw2)
        *value_card_result_sw2 = self->arg_card_result_sw2;

    return TRUE;
}

gboolean
qmi_message_uim_get_file_attributes_output_get_result (
    QmiMessageUimGetFileAttributesOutput *self,
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
qmi_message_uim_get_file_attributes_output_get_file_attributes (
    QmiMessageUimGetFileAttributesOutput *self,
    guint16 *value_file_attributes_file_size,
    guint16 *value_file_attributes_file_id,
    QmiUimFileType *value_file_attributes_file_type,
    guint16 *value_file_attributes_record_size,
    guint16 *value_file_attributes_record_count,
    QmiUimSecurityAttributeLogic *value_file_attributes_read_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_read_security_attributes,
    QmiUimSecurityAttributeLogic *value_file_attributes_write_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_write_security_attributes,
    QmiUimSecurityAttributeLogic *value_file_attributes_increase_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_increase_security_attributes,
    QmiUimSecurityAttributeLogic *value_file_attributes_deactivate_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_deactivate_security_attributes,
    QmiUimSecurityAttributeLogic *value_file_attributes_activate_security_attributes_logic,
    QmiUimSecurityAttribute *value_file_attributes_activate_security_attributes,
    GArray **value_file_attributes_raw_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_file_attributes_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'File Attributes' was not found in the message");
        return FALSE;
    }

    if (value_file_attributes_file_size)
        *value_file_attributes_file_size = self->arg_file_attributes_file_size;
    if (value_file_attributes_file_id)
        *value_file_attributes_file_id = self->arg_file_attributes_file_id;
    if (value_file_attributes_file_type)
        *value_file_attributes_file_type = (QmiUimFileType)(self->arg_file_attributes_file_type);
    if (value_file_attributes_record_size)
        *value_file_attributes_record_size = self->arg_file_attributes_record_size;
    if (value_file_attributes_record_count)
        *value_file_attributes_record_count = self->arg_file_attributes_record_count;
    if (value_file_attributes_read_security_attributes_logic)
        *value_file_attributes_read_security_attributes_logic = (QmiUimSecurityAttributeLogic)(self->arg_file_attributes_read_security_attributes_logic);
    if (value_file_attributes_read_security_attributes)
        *value_file_attributes_read_security_attributes = (QmiUimSecurityAttribute)(self->arg_file_attributes_read_security_attributes);
    if (value_file_attributes_write_security_attributes_logic)
        *value_file_attributes_write_security_attributes_logic = (QmiUimSecurityAttributeLogic)(self->arg_file_attributes_write_security_attributes_logic);
    if (value_file_attributes_write_security_attributes)
        *value_file_attributes_write_security_attributes = (QmiUimSecurityAttribute)(self->arg_file_attributes_write_security_attributes);
    if (value_file_attributes_increase_security_attributes_logic)
        *value_file_attributes_increase_security_attributes_logic = (QmiUimSecurityAttributeLogic)(self->arg_file_attributes_increase_security_attributes_logic);
    if (value_file_attributes_increase_security_attributes)
        *value_file_attributes_increase_security_attributes = (QmiUimSecurityAttribute)(self->arg_file_attributes_increase_security_attributes);
    if (value_file_attributes_deactivate_security_attributes_logic)
        *value_file_attributes_deactivate_security_attributes_logic = (QmiUimSecurityAttributeLogic)(self->arg_file_attributes_deactivate_security_attributes_logic);
    if (value_file_attributes_deactivate_security_attributes)
        *value_file_attributes_deactivate_security_attributes = (QmiUimSecurityAttribute)(self->arg_file_attributes_deactivate_security_attributes);
    if (value_file_attributes_activate_security_attributes_logic)
        *value_file_attributes_activate_security_attributes_logic = (QmiUimSecurityAttributeLogic)(self->arg_file_attributes_activate_security_attributes_logic);
    if (value_file_attributes_activate_security_attributes)
        *value_file_attributes_activate_security_attributes = (QmiUimSecurityAttribute)(self->arg_file_attributes_activate_security_attributes);
    if (value_file_attributes_raw_data)
        *value_file_attributes_raw_data = self->arg_file_attributes_raw_data;

    return TRUE;
}

gboolean
qmi_message_uim_get_file_attributes_output_get_response_in_indication_token (
    QmiMessageUimGetFileAttributesOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

GType
qmi_message_uim_get_file_attributes_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimGetFileAttributesOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_get_file_attributes_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_get_file_attributes_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimGetFileAttributesOutput *
qmi_message_uim_get_file_attributes_output_ref (QmiMessageUimGetFileAttributesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_get_file_attributes_output_unref (QmiMessageUimGetFileAttributesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_file_attributes_raw_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimGetFileAttributesOutput, self);
    }
}

static gchar *
qmi_message_uim_get_file_attributes_input_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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
qmi_message_uim_get_file_attributes_input_file_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT_TLV_FILE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " file_id = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " file_path = '");
    {
        guint file_path_i;
        guint8 file_path_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(file_path_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (file_path_i = 0; file_path_i < file_path_n_items; file_path_i++) {
            g_string_append_printf (printable, " [%u] = '", file_path_i);

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
qmi_message_uim_get_file_attributes_output_card_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " sw1 = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " sw2 = '");

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
qmi_message_uim_get_file_attributes_output_file_attributes_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_FILE_ATTRIBUTES, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " file_size = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " file_id = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " file_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_FILE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_file_type_get_string ((QmiUimFileType)tmp));
#elif defined  __QMI_UIM_FILE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_file_type_build_string_from_mask ((QmiUimFileType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimFileType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " record_size = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " record_count = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " read_security_attributes_logic = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_security_attribute_logic_get_string ((QmiUimSecurityAttributeLogic)tmp));
#elif defined  __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_security_attribute_logic_build_string_from_mask ((QmiUimSecurityAttributeLogic)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSecurityAttributeLogic
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " read_security_attributes = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SECURITY_ATTRIBUTE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_security_attribute_get_string ((QmiUimSecurityAttribute)tmp));
#elif defined  __QMI_UIM_SECURITY_ATTRIBUTE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_security_attribute_build_string_from_mask ((QmiUimSecurityAttribute)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSecurityAttribute
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " write_security_attributes_logic = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_security_attribute_logic_get_string ((QmiUimSecurityAttributeLogic)tmp));
#elif defined  __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_security_attribute_logic_build_string_from_mask ((QmiUimSecurityAttributeLogic)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSecurityAttributeLogic
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " write_security_attributes = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SECURITY_ATTRIBUTE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_security_attribute_get_string ((QmiUimSecurityAttribute)tmp));
#elif defined  __QMI_UIM_SECURITY_ATTRIBUTE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_security_attribute_build_string_from_mask ((QmiUimSecurityAttribute)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSecurityAttribute
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " increase_security_attributes_logic = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_security_attribute_logic_get_string ((QmiUimSecurityAttributeLogic)tmp));
#elif defined  __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_security_attribute_logic_build_string_from_mask ((QmiUimSecurityAttributeLogic)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSecurityAttributeLogic
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " increase_security_attributes = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SECURITY_ATTRIBUTE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_security_attribute_get_string ((QmiUimSecurityAttribute)tmp));
#elif defined  __QMI_UIM_SECURITY_ATTRIBUTE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_security_attribute_build_string_from_mask ((QmiUimSecurityAttribute)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSecurityAttribute
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " deactivate_security_attributes_logic = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_security_attribute_logic_get_string ((QmiUimSecurityAttributeLogic)tmp));
#elif defined  __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_security_attribute_logic_build_string_from_mask ((QmiUimSecurityAttributeLogic)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSecurityAttributeLogic
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " deactivate_security_attributes = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SECURITY_ATTRIBUTE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_security_attribute_get_string ((QmiUimSecurityAttribute)tmp));
#elif defined  __QMI_UIM_SECURITY_ATTRIBUTE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_security_attribute_build_string_from_mask ((QmiUimSecurityAttribute)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSecurityAttribute
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " activate_security_attributes_logic = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_security_attribute_logic_get_string ((QmiUimSecurityAttributeLogic)tmp));
#elif defined  __QMI_UIM_SECURITY_ATTRIBUTE_LOGIC_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_security_attribute_logic_build_string_from_mask ((QmiUimSecurityAttributeLogic)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSecurityAttributeLogic
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " activate_security_attributes = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SECURITY_ATTRIBUTE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_security_attribute_get_string ((QmiUimSecurityAttribute)tmp));
#elif defined  __QMI_UIM_SECURITY_ATTRIBUTE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_security_attribute_build_string_from_mask ((QmiUimSecurityAttribute)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSecurityAttribute
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " raw_data = '");
    {
        guint raw_data_i;
        guint16 raw_data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(raw_data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (raw_data_i = 0; raw_data_i < raw_data_n_items; raw_data_i++) {
            g_string_append_printf (printable, " [%u] = '", raw_data_i);

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
qmi_message_uim_get_file_attributes_output_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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

struct message_get_file_attributes_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_file_attributes_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_file_attributes_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_get_file_attributes_input_response_in_indication_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT_TLV_FILE:
            tlv_type_str = "File";
            translated_value = qmi_message_uim_get_file_attributes_input_file_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_INPUT_TLV_SESSION:
            tlv_type_str = "Session";
            translated_value = qmi_uim_session_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_CARD_RESULT:
            tlv_type_str = "Card Result";
            translated_value = qmi_message_uim_get_file_attributes_output_card_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_FILE_ATTRIBUTES:
            tlv_type_str = "File Attributes";
            translated_value = qmi_message_uim_get_file_attributes_output_file_attributes_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_get_file_attributes_output_response_in_indication_token_get_printable (
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
message_get_file_attributes_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get File Attributes\" (0x0024)\n",
                            line_prefix);

    {
        struct message_get_file_attributes_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_file_attributes_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimGetFileAttributesOutput *
qmi_message_uim_get_file_attributes_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimGetFileAttributesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES);

    self = g_slice_new0 (QmiMessageUimGetFileAttributesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0) {
                goto qmi_message_uim_get_file_attributes_output_card_result_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw1), NULL))
                goto qmi_message_uim_get_file_attributes_output_card_result_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw2), NULL))
                goto qmi_message_uim_get_file_attributes_output_card_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Card Result' TLV", offset);
            }

            self->arg_card_result_set = TRUE;

qmi_message_uim_get_file_attributes_output_card_result_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_get_file_attributes_output_unref (self);
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
                qmi_message_uim_get_file_attributes_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_FILE_ATTRIBUTES, NULL, NULL)) == 0) {
                goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_file_attributes_file_size), NULL))
                goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_file_attributes_file_id), NULL))
                goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
                self->arg_file_attributes_file_type = (QmiUimFileType)tmp;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_file_attributes_record_size), NULL))
                goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_file_attributes_record_count), NULL))
                goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
                self->arg_file_attributes_read_security_attributes_logic = (QmiUimSecurityAttributeLogic)tmp;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
                self->arg_file_attributes_read_security_attributes = (QmiUimSecurityAttribute)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
                self->arg_file_attributes_write_security_attributes_logic = (QmiUimSecurityAttributeLogic)tmp;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
                self->arg_file_attributes_write_security_attributes = (QmiUimSecurityAttribute)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
                self->arg_file_attributes_increase_security_attributes_logic = (QmiUimSecurityAttributeLogic)tmp;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
                self->arg_file_attributes_increase_security_attributes = (QmiUimSecurityAttribute)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
                self->arg_file_attributes_deactivate_security_attributes_logic = (QmiUimSecurityAttributeLogic)tmp;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
                self->arg_file_attributes_deactivate_security_attributes = (QmiUimSecurityAttribute)tmp;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
                self->arg_file_attributes_activate_security_attributes_logic = (QmiUimSecurityAttributeLogic)tmp;
            }
            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
                self->arg_file_attributes_activate_security_attributes = (QmiUimSecurityAttribute)tmp;
            }
            {
                guint raw_data_i;
                guint16 raw_data_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(raw_data_n_items), NULL))
                    goto qmi_message_uim_get_file_attributes_output_file_attributes_out;

                self->arg_file_attributes_raw_data = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)raw_data_n_items);

                for (raw_data_i = 0; raw_data_i < raw_data_n_items; raw_data_i++) {
                    guint8 raw_data_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(raw_data_aux), NULL))
                        goto qmi_message_uim_get_file_attributes_output_file_attributes_out;
                    g_array_insert_val (self->arg_file_attributes_raw_data, raw_data_i, raw_data_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'File Attributes' TLV", offset);
            }

            self->arg_file_attributes_set = TRUE;

qmi_message_uim_get_file_attributes_output_file_attributes_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_uim_get_file_attributes_output_response_in_indication_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_response_in_indication_token), NULL))
                goto qmi_message_uim_get_file_attributes_output_response_in_indication_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Response In Indication Token' TLV", offset);
            }

            self->arg_response_in_indication_token_set = TRUE;

qmi_message_uim_get_file_attributes_output_response_in_indication_token_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Set PIN Protection */


/* --- Input -- */

struct _QmiMessageUimSetPinProtectionInput {
    volatile gint ref_count;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;

    /* Info */
    gboolean arg_info_set;
    guint8 arg_info_pin_id;
    guint8 arg_info_pin_enabled;
    gchar *arg_info_pin_value;

    /* Session */
    gboolean arg_session_set;
    guint8 arg_session_session_type;
    GArray *arg_session_application_identifier;
};

#define QMI_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x11
#define QMI_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT_TLV_INFO 0x02
#define QMI_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT_TLV_SESSION 0x01

gboolean
qmi_message_uim_set_pin_protection_input_get_response_in_indication_token (
    QmiMessageUimSetPinProtectionInput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

gboolean
qmi_message_uim_set_pin_protection_input_set_response_in_indication_token (
    QmiMessageUimSetPinProtectionInput *self,
    guint32 value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_response_in_indication_token = value_response_in_indication_token;
    self->arg_response_in_indication_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_set_pin_protection_input_get_info (
    QmiMessageUimSetPinProtectionInput *self,
    QmiUimPinId *value_info_pin_id,
    gboolean *value_info_pin_enabled,
    const gchar **value_info_pin_value,
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

    if (value_info_pin_id)
        *value_info_pin_id = (QmiUimPinId)(self->arg_info_pin_id);
    if (value_info_pin_enabled)
        *value_info_pin_enabled = (gboolean)(self->arg_info_pin_enabled);
    if (value_info_pin_value)
        *value_info_pin_value = self->arg_info_pin_value;

    return TRUE;
}

gboolean
qmi_message_uim_set_pin_protection_input_set_info (
    QmiMessageUimSetPinProtectionInput *self,
    QmiUimPinId value_info_pin_id,
    gboolean value_info_pin_enabled,
    const gchar *value_info_pin_value,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_info_pin_id = (guint8)(value_info_pin_id);
    self->arg_info_pin_enabled = (guint8)(value_info_pin_enabled);
    g_free (self->arg_info_pin_value);
    self->arg_info_pin_value = g_strdup (value_info_pin_value ? value_info_pin_value : "");
    self->arg_info_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_set_pin_protection_input_get_session (
    QmiMessageUimSetPinProtectionInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session' was not found in the message");
        return FALSE;
    }

    if (value_session_session_type)
        *value_session_session_type = (QmiUimSessionType)(self->arg_session_session_type);
    if (value_session_application_identifier)
        *value_session_application_identifier = self->arg_session_application_identifier;

    return TRUE;
}

gboolean
qmi_message_uim_set_pin_protection_input_set_session (
    QmiMessageUimSetPinProtectionInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_session_type = (guint8)(value_session_session_type);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_ptr_array_unref);
    self->arg_session_application_identifier = g_array_ref (value_session_application_identifier);
    self->arg_session_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_set_pin_protection_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimSetPinProtectionInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_set_pin_protection_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_set_pin_protection_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimSetPinProtectionInput *
qmi_message_uim_set_pin_protection_input_ref (QmiMessageUimSetPinProtectionInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_set_pin_protection_input_unref (QmiMessageUimSetPinProtectionInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_info_pin_value, (GDestroyNotify)g_free);
        g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimSetPinProtectionInput, self);
    }
}

QmiMessageUimSetPinProtectionInput *
qmi_message_uim_set_pin_protection_input_new (void)
{
    QmiMessageUimSetPinProtectionInput *self;

    self = g_slice_new0 (QmiMessageUimSetPinProtectionInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_set_pin_protection_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimSetPinProtectionInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_SET_PIN_PROTECTION);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set PIN Protection' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Response In Indication Token' TLV */
    if (input->arg_response_in_indication_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Response In Indication Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_response_in_indication_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Response In Indication Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Response In Indication Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Info' TLV */
    if (input->arg_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT_TLV_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Info': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_info_pin_id;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Info': ");
                return NULL;
            }
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_info_pin_enabled;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Info': ");
                return NULL;
            }
        }
        if (!qmi_message_tlv_write_string (self, 1, input->arg_info_pin_value, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'Info': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Info': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Info' in message 'Set PIN Protection'");
        return NULL;
    }

    /* Try to add the 'Session' TLV */
    if (input->arg_session_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT_TLV_SESSION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session': ");
                return NULL;
            }
        }
        {
            guint application_identifier_i;
            guint8 application_identifier_n_items;

            /* Write the number of items in the array first */
            application_identifier_n_items = (guint8) input->arg_session_application_identifier->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, application_identifier_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                return NULL;
            }

            for (application_identifier_i = 0; application_identifier_i < input->arg_session_application_identifier->len; application_identifier_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_session_application_identifier, guint8,application_identifier_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session' in message 'Set PIN Protection'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimSetPinProtectionOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Retries Remaining */
    gboolean arg_retries_remaining_set;
    guint8 arg_retries_remaining_verify_retries_left;
    guint8 arg_retries_remaining_unblock_retries_left;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;
};

#define QMI_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT_TLV_RETRIES_REMAINING 0x10
#define QMI_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x12

gboolean
qmi_message_uim_set_pin_protection_output_get_result (
    QmiMessageUimSetPinProtectionOutput *self,
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
qmi_message_uim_set_pin_protection_output_get_retries_remaining (
    QmiMessageUimSetPinProtectionOutput *self,
    guint8 *value_retries_remaining_verify_retries_left,
    guint8 *value_retries_remaining_unblock_retries_left,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_retries_remaining_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Retries Remaining' was not found in the message");
        return FALSE;
    }

    if (value_retries_remaining_verify_retries_left)
        *value_retries_remaining_verify_retries_left = self->arg_retries_remaining_verify_retries_left;
    if (value_retries_remaining_unblock_retries_left)
        *value_retries_remaining_unblock_retries_left = self->arg_retries_remaining_unblock_retries_left;

    return TRUE;
}

gboolean
qmi_message_uim_set_pin_protection_output_get_response_in_indication_token (
    QmiMessageUimSetPinProtectionOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

GType
qmi_message_uim_set_pin_protection_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimSetPinProtectionOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_set_pin_protection_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_set_pin_protection_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimSetPinProtectionOutput *
qmi_message_uim_set_pin_protection_output_ref (QmiMessageUimSetPinProtectionOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_set_pin_protection_output_unref (QmiMessageUimSetPinProtectionOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimSetPinProtectionOutput, self);
    }
}

static gchar *
qmi_message_uim_set_pin_protection_input_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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
qmi_message_uim_set_pin_protection_input_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT_TLV_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " pin_id = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_PIN_ID_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_pin_id_get_string ((QmiUimPinId)tmp));
#elif defined  __QMI_UIM_PIN_ID_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_pin_id_build_string_from_mask ((QmiUimPinId)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimPinId
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " pin_enabled = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " pin_value = '");

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
qmi_message_uim_set_pin_protection_output_retries_remaining_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT_TLV_RETRIES_REMAINING, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " verify_retries_left = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " unblock_retries_left = '");

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
qmi_message_uim_set_pin_protection_output_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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

struct message_set_pin_protection_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_pin_protection_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_pin_protection_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_set_pin_protection_input_response_in_indication_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT_TLV_INFO:
            tlv_type_str = "Info";
            translated_value = qmi_message_uim_set_pin_protection_input_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_UIM_SET_PIN_PROTECTION_INPUT_TLV_SESSION:
            tlv_type_str = "Session";
            translated_value = qmi_uim_session_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT_TLV_RETRIES_REMAINING:
            tlv_type_str = "Retries Remaining";
            translated_value = qmi_message_uim_set_pin_protection_output_retries_remaining_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_set_pin_protection_output_response_in_indication_token_get_printable (
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
message_set_pin_protection_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set PIN Protection\" (0x0025)\n",
                            line_prefix);

    {
        struct message_set_pin_protection_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_pin_protection_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimSetPinProtectionOutput *
qmi_message_uim_set_pin_protection_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimSetPinProtectionOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_SET_PIN_PROTECTION);

    self = g_slice_new0 (QmiMessageUimSetPinProtectionOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_set_pin_protection_output_unref (self);
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
                qmi_message_uim_set_pin_protection_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT_TLV_RETRIES_REMAINING, NULL, NULL)) == 0) {
                goto qmi_message_uim_set_pin_protection_output_retries_remaining_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_retries_remaining_verify_retries_left), NULL))
                goto qmi_message_uim_set_pin_protection_output_retries_remaining_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_retries_remaining_unblock_retries_left), NULL))
                goto qmi_message_uim_set_pin_protection_output_retries_remaining_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Retries Remaining' TLV", offset);
            }

            self->arg_retries_remaining_set = TRUE;

qmi_message_uim_set_pin_protection_output_retries_remaining_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SET_PIN_PROTECTION_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_uim_set_pin_protection_output_response_in_indication_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_response_in_indication_token), NULL))
                goto qmi_message_uim_set_pin_protection_output_response_in_indication_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Response In Indication Token' TLV", offset);
            }

            self->arg_response_in_indication_token_set = TRUE;

qmi_message_uim_set_pin_protection_output_response_in_indication_token_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Verify PIN */


/* --- Input -- */

struct _QmiMessageUimVerifyPinInput {
    volatile gint ref_count;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;

    /* Info */
    gboolean arg_info_set;
    guint8 arg_info_pin_id;
    gchar *arg_info_pin_value;

    /* Session */
    gboolean arg_session_set;
    guint8 arg_session_session_type;
    GArray *arg_session_application_identifier;
};

#define QMI_MESSAGE_UIM_VERIFY_PIN_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x12
#define QMI_MESSAGE_UIM_VERIFY_PIN_INPUT_TLV_INFO 0x02
#define QMI_MESSAGE_UIM_VERIFY_PIN_INPUT_TLV_SESSION 0x01

gboolean
qmi_message_uim_verify_pin_input_get_response_in_indication_token (
    QmiMessageUimVerifyPinInput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

gboolean
qmi_message_uim_verify_pin_input_set_response_in_indication_token (
    QmiMessageUimVerifyPinInput *self,
    guint32 value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_response_in_indication_token = value_response_in_indication_token;
    self->arg_response_in_indication_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_verify_pin_input_get_info (
    QmiMessageUimVerifyPinInput *self,
    QmiUimPinId *value_info_pin_id,
    const gchar **value_info_pin_value,
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

    if (value_info_pin_id)
        *value_info_pin_id = (QmiUimPinId)(self->arg_info_pin_id);
    if (value_info_pin_value)
        *value_info_pin_value = self->arg_info_pin_value;

    return TRUE;
}

gboolean
qmi_message_uim_verify_pin_input_set_info (
    QmiMessageUimVerifyPinInput *self,
    QmiUimPinId value_info_pin_id,
    const gchar *value_info_pin_value,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_info_pin_id = (guint8)(value_info_pin_id);
    g_free (self->arg_info_pin_value);
    self->arg_info_pin_value = g_strdup (value_info_pin_value ? value_info_pin_value : "");
    self->arg_info_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_verify_pin_input_get_session (
    QmiMessageUimVerifyPinInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session' was not found in the message");
        return FALSE;
    }

    if (value_session_session_type)
        *value_session_session_type = (QmiUimSessionType)(self->arg_session_session_type);
    if (value_session_application_identifier)
        *value_session_application_identifier = self->arg_session_application_identifier;

    return TRUE;
}

gboolean
qmi_message_uim_verify_pin_input_set_session (
    QmiMessageUimVerifyPinInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_session_type = (guint8)(value_session_session_type);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_ptr_array_unref);
    self->arg_session_application_identifier = g_array_ref (value_session_application_identifier);
    self->arg_session_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_verify_pin_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimVerifyPinInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_verify_pin_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_verify_pin_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimVerifyPinInput *
qmi_message_uim_verify_pin_input_ref (QmiMessageUimVerifyPinInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_verify_pin_input_unref (QmiMessageUimVerifyPinInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_info_pin_value, (GDestroyNotify)g_free);
        g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimVerifyPinInput, self);
    }
}

QmiMessageUimVerifyPinInput *
qmi_message_uim_verify_pin_input_new (void)
{
    QmiMessageUimVerifyPinInput *self;

    self = g_slice_new0 (QmiMessageUimVerifyPinInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_verify_pin_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimVerifyPinInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_VERIFY_PIN);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Verify PIN' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Response In Indication Token' TLV */
    if (input->arg_response_in_indication_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_VERIFY_PIN_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Response In Indication Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_response_in_indication_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Response In Indication Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Response In Indication Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Info' TLV */
    if (input->arg_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_VERIFY_PIN_INPUT_TLV_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Info': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_info_pin_id;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Info': ");
                return NULL;
            }
        }
        if (!qmi_message_tlv_write_string (self, 1, input->arg_info_pin_value, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'Info': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Info': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Info' in message 'Verify PIN'");
        return NULL;
    }

    /* Try to add the 'Session' TLV */
    if (input->arg_session_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_VERIFY_PIN_INPUT_TLV_SESSION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session': ");
                return NULL;
            }
        }
        {
            guint application_identifier_i;
            guint8 application_identifier_n_items;

            /* Write the number of items in the array first */
            application_identifier_n_items = (guint8) input->arg_session_application_identifier->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, application_identifier_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                return NULL;
            }

            for (application_identifier_i = 0; application_identifier_i < input->arg_session_application_identifier->len; application_identifier_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_session_application_identifier, guint8,application_identifier_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session' in message 'Verify PIN'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimVerifyPinOutput {
    volatile gint ref_count;

    /* Card Result */
    gboolean arg_card_result_set;
    guint8 arg_card_result_sw1;
    guint8 arg_card_result_sw2;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Retries Remaining */
    gboolean arg_retries_remaining_set;
    guint8 arg_retries_remaining_verify_retries_left;
    guint8 arg_retries_remaining_unblock_retries_left;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;
};

#define QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_CARD_RESULT 0x13
#define QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_RETRIES_REMAINING 0x10
#define QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x12

gboolean
qmi_message_uim_verify_pin_output_get_card_result (
    QmiMessageUimVerifyPinOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Result' was not found in the message");
        return FALSE;
    }

    if (value_card_result_sw1)
        *value_card_result_sw1 = self->arg_card_result_sw1;
    if (value_card_result_sw2)
        *value_card_result_sw2 = self->arg_card_result_sw2;

    return TRUE;
}

gboolean
qmi_message_uim_verify_pin_output_get_result (
    QmiMessageUimVerifyPinOutput *self,
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
qmi_message_uim_verify_pin_output_get_retries_remaining (
    QmiMessageUimVerifyPinOutput *self,
    guint8 *value_retries_remaining_verify_retries_left,
    guint8 *value_retries_remaining_unblock_retries_left,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_retries_remaining_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Retries Remaining' was not found in the message");
        return FALSE;
    }

    if (value_retries_remaining_verify_retries_left)
        *value_retries_remaining_verify_retries_left = self->arg_retries_remaining_verify_retries_left;
    if (value_retries_remaining_unblock_retries_left)
        *value_retries_remaining_unblock_retries_left = self->arg_retries_remaining_unblock_retries_left;

    return TRUE;
}

gboolean
qmi_message_uim_verify_pin_output_get_response_in_indication_token (
    QmiMessageUimVerifyPinOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

GType
qmi_message_uim_verify_pin_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimVerifyPinOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_verify_pin_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_verify_pin_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimVerifyPinOutput *
qmi_message_uim_verify_pin_output_ref (QmiMessageUimVerifyPinOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_verify_pin_output_unref (QmiMessageUimVerifyPinOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimVerifyPinOutput, self);
    }
}

static gchar *
qmi_message_uim_verify_pin_input_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_VERIFY_PIN_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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
qmi_message_uim_verify_pin_input_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_VERIFY_PIN_INPUT_TLV_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " pin_id = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_PIN_ID_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_pin_id_get_string ((QmiUimPinId)tmp));
#elif defined  __QMI_UIM_PIN_ID_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_pin_id_build_string_from_mask ((QmiUimPinId)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimPinId
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " pin_value = '");

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
qmi_message_uim_verify_pin_output_card_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " sw1 = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " sw2 = '");

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
qmi_message_uim_verify_pin_output_retries_remaining_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_RETRIES_REMAINING, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " verify_retries_left = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " unblock_retries_left = '");

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
qmi_message_uim_verify_pin_output_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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

struct message_verify_pin_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_verify_pin_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_verify_pin_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_VERIFY_PIN_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_verify_pin_input_response_in_indication_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_VERIFY_PIN_INPUT_TLV_INFO:
            tlv_type_str = "Info";
            translated_value = qmi_message_uim_verify_pin_input_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_UIM_VERIFY_PIN_INPUT_TLV_SESSION:
            tlv_type_str = "Session";
            translated_value = qmi_uim_session_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_CARD_RESULT:
            tlv_type_str = "Card Result";
            translated_value = qmi_message_uim_verify_pin_output_card_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_RETRIES_REMAINING:
            tlv_type_str = "Retries Remaining";
            translated_value = qmi_message_uim_verify_pin_output_retries_remaining_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_verify_pin_output_response_in_indication_token_get_printable (
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
message_verify_pin_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Verify PIN\" (0x0026)\n",
                            line_prefix);

    {
        struct message_verify_pin_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_verify_pin_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimVerifyPinOutput *
qmi_message_uim_verify_pin_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimVerifyPinOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_VERIFY_PIN);

    self = g_slice_new0 (QmiMessageUimVerifyPinOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0) {
                goto qmi_message_uim_verify_pin_output_card_result_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw1), NULL))
                goto qmi_message_uim_verify_pin_output_card_result_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw2), NULL))
                goto qmi_message_uim_verify_pin_output_card_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Card Result' TLV", offset);
            }

            self->arg_card_result_set = TRUE;

qmi_message_uim_verify_pin_output_card_result_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_verify_pin_output_unref (self);
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
                qmi_message_uim_verify_pin_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_RETRIES_REMAINING, NULL, NULL)) == 0) {
                goto qmi_message_uim_verify_pin_output_retries_remaining_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_retries_remaining_verify_retries_left), NULL))
                goto qmi_message_uim_verify_pin_output_retries_remaining_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_retries_remaining_unblock_retries_left), NULL))
                goto qmi_message_uim_verify_pin_output_retries_remaining_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Retries Remaining' TLV", offset);
            }

            self->arg_retries_remaining_set = TRUE;

qmi_message_uim_verify_pin_output_retries_remaining_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_VERIFY_PIN_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_uim_verify_pin_output_response_in_indication_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_response_in_indication_token), NULL))
                goto qmi_message_uim_verify_pin_output_response_in_indication_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Response In Indication Token' TLV", offset);
            }

            self->arg_response_in_indication_token_set = TRUE;

qmi_message_uim_verify_pin_output_response_in_indication_token_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Unblock PIN */


/* --- Input -- */

struct _QmiMessageUimUnblockPinInput {
    volatile gint ref_count;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;

    /* Info */
    gboolean arg_info_set;
    guint8 arg_info_pin_id;
    gchar *arg_info_puk;
    gchar *arg_info_new_pin;

    /* Session */
    gboolean arg_session_set;
    guint8 arg_session_session_type;
    GArray *arg_session_application_identifier;
};

#define QMI_MESSAGE_UIM_UNBLOCK_PIN_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x11
#define QMI_MESSAGE_UIM_UNBLOCK_PIN_INPUT_TLV_INFO 0x02
#define QMI_MESSAGE_UIM_UNBLOCK_PIN_INPUT_TLV_SESSION 0x01

gboolean
qmi_message_uim_unblock_pin_input_get_response_in_indication_token (
    QmiMessageUimUnblockPinInput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

gboolean
qmi_message_uim_unblock_pin_input_set_response_in_indication_token (
    QmiMessageUimUnblockPinInput *self,
    guint32 value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_response_in_indication_token = value_response_in_indication_token;
    self->arg_response_in_indication_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_unblock_pin_input_get_info (
    QmiMessageUimUnblockPinInput *self,
    QmiUimPinId *value_info_pin_id,
    const gchar **value_info_puk,
    const gchar **value_info_new_pin,
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

    if (value_info_pin_id)
        *value_info_pin_id = (QmiUimPinId)(self->arg_info_pin_id);
    if (value_info_puk)
        *value_info_puk = self->arg_info_puk;
    if (value_info_new_pin)
        *value_info_new_pin = self->arg_info_new_pin;

    return TRUE;
}

gboolean
qmi_message_uim_unblock_pin_input_set_info (
    QmiMessageUimUnblockPinInput *self,
    QmiUimPinId value_info_pin_id,
    const gchar *value_info_puk,
    const gchar *value_info_new_pin,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_info_pin_id = (guint8)(value_info_pin_id);
    g_free (self->arg_info_puk);
    self->arg_info_puk = g_strdup (value_info_puk ? value_info_puk : "");
    g_free (self->arg_info_new_pin);
    self->arg_info_new_pin = g_strdup (value_info_new_pin ? value_info_new_pin : "");
    self->arg_info_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_unblock_pin_input_get_session (
    QmiMessageUimUnblockPinInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session' was not found in the message");
        return FALSE;
    }

    if (value_session_session_type)
        *value_session_session_type = (QmiUimSessionType)(self->arg_session_session_type);
    if (value_session_application_identifier)
        *value_session_application_identifier = self->arg_session_application_identifier;

    return TRUE;
}

gboolean
qmi_message_uim_unblock_pin_input_set_session (
    QmiMessageUimUnblockPinInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_session_type = (guint8)(value_session_session_type);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_ptr_array_unref);
    self->arg_session_application_identifier = g_array_ref (value_session_application_identifier);
    self->arg_session_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_unblock_pin_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimUnblockPinInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_unblock_pin_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_unblock_pin_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimUnblockPinInput *
qmi_message_uim_unblock_pin_input_ref (QmiMessageUimUnblockPinInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_unblock_pin_input_unref (QmiMessageUimUnblockPinInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_info_puk, (GDestroyNotify)g_free);
        g_clear_pointer (&self->arg_info_new_pin, (GDestroyNotify)g_free);
        g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimUnblockPinInput, self);
    }
}

QmiMessageUimUnblockPinInput *
qmi_message_uim_unblock_pin_input_new (void)
{
    QmiMessageUimUnblockPinInput *self;

    self = g_slice_new0 (QmiMessageUimUnblockPinInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_unblock_pin_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimUnblockPinInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_UNBLOCK_PIN);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Unblock PIN' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Response In Indication Token' TLV */
    if (input->arg_response_in_indication_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_UNBLOCK_PIN_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Response In Indication Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_response_in_indication_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Response In Indication Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Response In Indication Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Info' TLV */
    if (input->arg_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_UNBLOCK_PIN_INPUT_TLV_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Info': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_info_pin_id;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Info': ");
                return NULL;
            }
        }
        if (!qmi_message_tlv_write_string (self, 1, input->arg_info_puk, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'Info': ");
            return NULL;
        }
        if (!qmi_message_tlv_write_string (self, 1, input->arg_info_new_pin, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'Info': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Info': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Info' in message 'Unblock PIN'");
        return NULL;
    }

    /* Try to add the 'Session' TLV */
    if (input->arg_session_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_UNBLOCK_PIN_INPUT_TLV_SESSION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session': ");
                return NULL;
            }
        }
        {
            guint application_identifier_i;
            guint8 application_identifier_n_items;

            /* Write the number of items in the array first */
            application_identifier_n_items = (guint8) input->arg_session_application_identifier->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, application_identifier_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                return NULL;
            }

            for (application_identifier_i = 0; application_identifier_i < input->arg_session_application_identifier->len; application_identifier_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_session_application_identifier, guint8,application_identifier_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session' in message 'Unblock PIN'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimUnblockPinOutput {
    volatile gint ref_count;

    /* Card Result */
    gboolean arg_card_result_set;
    guint8 arg_card_result_sw1;
    guint8 arg_card_result_sw2;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Retries Remaining */
    gboolean arg_retries_remaining_set;
    guint8 arg_retries_remaining_verify_retries_left;
    guint8 arg_retries_remaining_unblock_retries_left;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;
};

#define QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_CARD_RESULT 0x13
#define QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_RETRIES_REMAINING 0x10
#define QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x12

gboolean
qmi_message_uim_unblock_pin_output_get_card_result (
    QmiMessageUimUnblockPinOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Result' was not found in the message");
        return FALSE;
    }

    if (value_card_result_sw1)
        *value_card_result_sw1 = self->arg_card_result_sw1;
    if (value_card_result_sw2)
        *value_card_result_sw2 = self->arg_card_result_sw2;

    return TRUE;
}

gboolean
qmi_message_uim_unblock_pin_output_get_result (
    QmiMessageUimUnblockPinOutput *self,
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
qmi_message_uim_unblock_pin_output_get_retries_remaining (
    QmiMessageUimUnblockPinOutput *self,
    guint8 *value_retries_remaining_verify_retries_left,
    guint8 *value_retries_remaining_unblock_retries_left,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_retries_remaining_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Retries Remaining' was not found in the message");
        return FALSE;
    }

    if (value_retries_remaining_verify_retries_left)
        *value_retries_remaining_verify_retries_left = self->arg_retries_remaining_verify_retries_left;
    if (value_retries_remaining_unblock_retries_left)
        *value_retries_remaining_unblock_retries_left = self->arg_retries_remaining_unblock_retries_left;

    return TRUE;
}

gboolean
qmi_message_uim_unblock_pin_output_get_response_in_indication_token (
    QmiMessageUimUnblockPinOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

GType
qmi_message_uim_unblock_pin_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimUnblockPinOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_unblock_pin_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_unblock_pin_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimUnblockPinOutput *
qmi_message_uim_unblock_pin_output_ref (QmiMessageUimUnblockPinOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_unblock_pin_output_unref (QmiMessageUimUnblockPinOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimUnblockPinOutput, self);
    }
}

static gchar *
qmi_message_uim_unblock_pin_input_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_UNBLOCK_PIN_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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
qmi_message_uim_unblock_pin_input_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_UNBLOCK_PIN_INPUT_TLV_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " pin_id = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_PIN_ID_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_pin_id_get_string ((QmiUimPinId)tmp));
#elif defined  __QMI_UIM_PIN_ID_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_pin_id_build_string_from_mask ((QmiUimPinId)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimPinId
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " puk = '");

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
    g_string_append (printable, " new_pin = '");

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
qmi_message_uim_unblock_pin_output_card_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " sw1 = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " sw2 = '");

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
qmi_message_uim_unblock_pin_output_retries_remaining_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_RETRIES_REMAINING, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " verify_retries_left = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " unblock_retries_left = '");

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
qmi_message_uim_unblock_pin_output_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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

struct message_unblock_pin_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_unblock_pin_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_unblock_pin_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_UNBLOCK_PIN_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_unblock_pin_input_response_in_indication_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_UNBLOCK_PIN_INPUT_TLV_INFO:
            tlv_type_str = "Info";
            translated_value = qmi_message_uim_unblock_pin_input_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_UIM_UNBLOCK_PIN_INPUT_TLV_SESSION:
            tlv_type_str = "Session";
            translated_value = qmi_uim_session_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_CARD_RESULT:
            tlv_type_str = "Card Result";
            translated_value = qmi_message_uim_unblock_pin_output_card_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_RETRIES_REMAINING:
            tlv_type_str = "Retries Remaining";
            translated_value = qmi_message_uim_unblock_pin_output_retries_remaining_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_unblock_pin_output_response_in_indication_token_get_printable (
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
message_unblock_pin_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Unblock PIN\" (0x0027)\n",
                            line_prefix);

    {
        struct message_unblock_pin_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_unblock_pin_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimUnblockPinOutput *
qmi_message_uim_unblock_pin_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimUnblockPinOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_UNBLOCK_PIN);

    self = g_slice_new0 (QmiMessageUimUnblockPinOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0) {
                goto qmi_message_uim_unblock_pin_output_card_result_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw1), NULL))
                goto qmi_message_uim_unblock_pin_output_card_result_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw2), NULL))
                goto qmi_message_uim_unblock_pin_output_card_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Card Result' TLV", offset);
            }

            self->arg_card_result_set = TRUE;

qmi_message_uim_unblock_pin_output_card_result_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_unblock_pin_output_unref (self);
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
                qmi_message_uim_unblock_pin_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_RETRIES_REMAINING, NULL, NULL)) == 0) {
                goto qmi_message_uim_unblock_pin_output_retries_remaining_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_retries_remaining_verify_retries_left), NULL))
                goto qmi_message_uim_unblock_pin_output_retries_remaining_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_retries_remaining_unblock_retries_left), NULL))
                goto qmi_message_uim_unblock_pin_output_retries_remaining_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Retries Remaining' TLV", offset);
            }

            self->arg_retries_remaining_set = TRUE;

qmi_message_uim_unblock_pin_output_retries_remaining_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_UNBLOCK_PIN_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_uim_unblock_pin_output_response_in_indication_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_response_in_indication_token), NULL))
                goto qmi_message_uim_unblock_pin_output_response_in_indication_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Response In Indication Token' TLV", offset);
            }

            self->arg_response_in_indication_token_set = TRUE;

qmi_message_uim_unblock_pin_output_response_in_indication_token_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Change PIN */


/* --- Input -- */

struct _QmiMessageUimChangePinInput {
    volatile gint ref_count;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;

    /* Info */
    gboolean arg_info_set;
    guint8 arg_info_pin_id;
    gchar *arg_info_old_pin;
    gchar *arg_info_new_pin;

    /* Session */
    gboolean arg_session_set;
    guint8 arg_session_session_type;
    GArray *arg_session_application_identifier;
};

#define QMI_MESSAGE_UIM_CHANGE_PIN_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x11
#define QMI_MESSAGE_UIM_CHANGE_PIN_INPUT_TLV_INFO 0x02
#define QMI_MESSAGE_UIM_CHANGE_PIN_INPUT_TLV_SESSION 0x01

gboolean
qmi_message_uim_change_pin_input_get_response_in_indication_token (
    QmiMessageUimChangePinInput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

gboolean
qmi_message_uim_change_pin_input_set_response_in_indication_token (
    QmiMessageUimChangePinInput *self,
    guint32 value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_response_in_indication_token = value_response_in_indication_token;
    self->arg_response_in_indication_token_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_change_pin_input_get_info (
    QmiMessageUimChangePinInput *self,
    QmiUimPinId *value_info_pin_id,
    const gchar **value_info_old_pin,
    const gchar **value_info_new_pin,
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

    if (value_info_pin_id)
        *value_info_pin_id = (QmiUimPinId)(self->arg_info_pin_id);
    if (value_info_old_pin)
        *value_info_old_pin = self->arg_info_old_pin;
    if (value_info_new_pin)
        *value_info_new_pin = self->arg_info_new_pin;

    return TRUE;
}

gboolean
qmi_message_uim_change_pin_input_set_info (
    QmiMessageUimChangePinInput *self,
    QmiUimPinId value_info_pin_id,
    const gchar *value_info_old_pin,
    const gchar *value_info_new_pin,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_info_pin_id = (guint8)(value_info_pin_id);
    g_free (self->arg_info_old_pin);
    self->arg_info_old_pin = g_strdup (value_info_old_pin ? value_info_old_pin : "");
    g_free (self->arg_info_new_pin);
    self->arg_info_new_pin = g_strdup (value_info_new_pin ? value_info_new_pin : "");
    self->arg_info_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_change_pin_input_get_session (
    QmiMessageUimChangePinInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session' was not found in the message");
        return FALSE;
    }

    if (value_session_session_type)
        *value_session_session_type = (QmiUimSessionType)(self->arg_session_session_type);
    if (value_session_application_identifier)
        *value_session_application_identifier = self->arg_session_application_identifier;

    return TRUE;
}

gboolean
qmi_message_uim_change_pin_input_set_session (
    QmiMessageUimChangePinInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_session_type = (guint8)(value_session_session_type);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_ptr_array_unref);
    self->arg_session_application_identifier = g_array_ref (value_session_application_identifier);
    self->arg_session_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_change_pin_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimChangePinInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_change_pin_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_change_pin_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimChangePinInput *
qmi_message_uim_change_pin_input_ref (QmiMessageUimChangePinInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_change_pin_input_unref (QmiMessageUimChangePinInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_info_old_pin, (GDestroyNotify)g_free);
        g_clear_pointer (&self->arg_info_new_pin, (GDestroyNotify)g_free);
        g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimChangePinInput, self);
    }
}

QmiMessageUimChangePinInput *
qmi_message_uim_change_pin_input_new (void)
{
    QmiMessageUimChangePinInput *self;

    self = g_slice_new0 (QmiMessageUimChangePinInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_change_pin_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimChangePinInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_CHANGE_PIN);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Change PIN' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Response In Indication Token' TLV */
    if (input->arg_response_in_indication_token_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_CHANGE_PIN_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Response In Indication Token': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_response_in_indication_token, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Response In Indication Token': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Response In Indication Token': ");
            return NULL;
        }
    }

    /* Try to add the 'Info' TLV */
    if (input->arg_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_CHANGE_PIN_INPUT_TLV_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Info': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_info_pin_id;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Info': ");
                return NULL;
            }
        }
        if (!qmi_message_tlv_write_string (self, 1, input->arg_info_old_pin, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'Info': ");
            return NULL;
        }
        if (!qmi_message_tlv_write_string (self, 1, input->arg_info_new_pin, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'Info': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Info': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Info' in message 'Change PIN'");
        return NULL;
    }

    /* Try to add the 'Session' TLV */
    if (input->arg_session_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_CHANGE_PIN_INPUT_TLV_SESSION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session': ");
                return NULL;
            }
        }
        {
            guint application_identifier_i;
            guint8 application_identifier_n_items;

            /* Write the number of items in the array first */
            application_identifier_n_items = (guint8) input->arg_session_application_identifier->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, application_identifier_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                return NULL;
            }

            for (application_identifier_i = 0; application_identifier_i < input->arg_session_application_identifier->len; application_identifier_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_session_application_identifier, guint8,application_identifier_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session' in message 'Change PIN'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimChangePinOutput {
    volatile gint ref_count;

    /* Card Result */
    gboolean arg_card_result_set;
    guint8 arg_card_result_sw1;
    guint8 arg_card_result_sw2;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Retries Remaining */
    gboolean arg_retries_remaining_set;
    guint8 arg_retries_remaining_verify_retries_left;
    guint8 arg_retries_remaining_unblock_retries_left;

    /* Response In Indication Token */
    gboolean arg_response_in_indication_token_set;
    guint32 arg_response_in_indication_token;
};

#define QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_CARD_RESULT 0x13
#define QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_RETRIES_REMAINING 0x10
#define QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN 0x12

gboolean
qmi_message_uim_change_pin_output_get_card_result (
    QmiMessageUimChangePinOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Result' was not found in the message");
        return FALSE;
    }

    if (value_card_result_sw1)
        *value_card_result_sw1 = self->arg_card_result_sw1;
    if (value_card_result_sw2)
        *value_card_result_sw2 = self->arg_card_result_sw2;

    return TRUE;
}

gboolean
qmi_message_uim_change_pin_output_get_result (
    QmiMessageUimChangePinOutput *self,
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
qmi_message_uim_change_pin_output_get_retries_remaining (
    QmiMessageUimChangePinOutput *self,
    guint8 *value_retries_remaining_verify_retries_left,
    guint8 *value_retries_remaining_unblock_retries_left,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_retries_remaining_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Retries Remaining' was not found in the message");
        return FALSE;
    }

    if (value_retries_remaining_verify_retries_left)
        *value_retries_remaining_verify_retries_left = self->arg_retries_remaining_verify_retries_left;
    if (value_retries_remaining_unblock_retries_left)
        *value_retries_remaining_unblock_retries_left = self->arg_retries_remaining_unblock_retries_left;

    return TRUE;
}

gboolean
qmi_message_uim_change_pin_output_get_response_in_indication_token (
    QmiMessageUimChangePinOutput *self,
    guint32 *value_response_in_indication_token,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_response_in_indication_token_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Response In Indication Token' was not found in the message");
        return FALSE;
    }

    if (value_response_in_indication_token)
        *value_response_in_indication_token = self->arg_response_in_indication_token;

    return TRUE;
}

GType
qmi_message_uim_change_pin_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimChangePinOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_change_pin_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_change_pin_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimChangePinOutput *
qmi_message_uim_change_pin_output_ref (QmiMessageUimChangePinOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_change_pin_output_unref (QmiMessageUimChangePinOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimChangePinOutput, self);
    }
}

static gchar *
qmi_message_uim_change_pin_input_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_CHANGE_PIN_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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
qmi_message_uim_change_pin_input_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_CHANGE_PIN_INPUT_TLV_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " pin_id = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_PIN_ID_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_pin_id_get_string ((QmiUimPinId)tmp));
#elif defined  __QMI_UIM_PIN_ID_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_pin_id_build_string_from_mask ((QmiUimPinId)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimPinId
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " old_pin = '");

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
    g_string_append (printable, " new_pin = '");

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
qmi_message_uim_change_pin_output_card_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " sw1 = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " sw2 = '");

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
qmi_message_uim_change_pin_output_retries_remaining_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_RETRIES_REMAINING, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " verify_retries_left = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " unblock_retries_left = '");

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
qmi_message_uim_change_pin_output_response_in_indication_token_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0)
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

struct message_change_pin_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_change_pin_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_change_pin_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_CHANGE_PIN_INPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_change_pin_input_response_in_indication_token_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_CHANGE_PIN_INPUT_TLV_INFO:
            tlv_type_str = "Info";
            translated_value = qmi_message_uim_change_pin_input_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_UIM_CHANGE_PIN_INPUT_TLV_SESSION:
            tlv_type_str = "Session";
            translated_value = qmi_uim_session_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_CARD_RESULT:
            tlv_type_str = "Card Result";
            translated_value = qmi_message_uim_change_pin_output_card_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_RETRIES_REMAINING:
            tlv_type_str = "Retries Remaining";
            translated_value = qmi_message_uim_change_pin_output_retries_remaining_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN:
            tlv_type_str = "Response In Indication Token";
            translated_value = qmi_message_uim_change_pin_output_response_in_indication_token_get_printable (
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
message_change_pin_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Change PIN\" (0x0028)\n",
                            line_prefix);

    {
        struct message_change_pin_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_change_pin_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimChangePinOutput *
qmi_message_uim_change_pin_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimChangePinOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_CHANGE_PIN);

    self = g_slice_new0 (QmiMessageUimChangePinOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0) {
                goto qmi_message_uim_change_pin_output_card_result_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw1), NULL))
                goto qmi_message_uim_change_pin_output_card_result_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw2), NULL))
                goto qmi_message_uim_change_pin_output_card_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Card Result' TLV", offset);
            }

            self->arg_card_result_set = TRUE;

qmi_message_uim_change_pin_output_card_result_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_change_pin_output_unref (self);
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
                qmi_message_uim_change_pin_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_RETRIES_REMAINING, NULL, NULL)) == 0) {
                goto qmi_message_uim_change_pin_output_retries_remaining_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_retries_remaining_verify_retries_left), NULL))
                goto qmi_message_uim_change_pin_output_retries_remaining_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_retries_remaining_unblock_retries_left), NULL))
                goto qmi_message_uim_change_pin_output_retries_remaining_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Retries Remaining' TLV", offset);
            }

            self->arg_retries_remaining_set = TRUE;

qmi_message_uim_change_pin_output_retries_remaining_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_CHANGE_PIN_OUTPUT_TLV_RESPONSE_IN_INDICATION_TOKEN, NULL, NULL)) == 0) {
                goto qmi_message_uim_change_pin_output_response_in_indication_token_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_response_in_indication_token), NULL))
                goto qmi_message_uim_change_pin_output_response_in_indication_token_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Response In Indication Token' TLV", offset);
            }

            self->arg_response_in_indication_token_set = TRUE;

qmi_message_uim_change_pin_output_response_in_indication_token_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Refresh Register */


/* --- Input -- */

static void
__qmi_message_uim_refresh_register_input_info_files_element_clear (QmiMessageUimRefreshRegisterInputInfoFilesElement *value)
{
    g_clear_pointer (&value->path, (GDestroyNotify)g_array_unref);
}

static void
__qmi_message_uim_refresh_register_input_info_files_element_free (QmiMessageUimRefreshRegisterInputInfoFilesElement *value)
{
    __qmi_message_uim_refresh_register_input_info_files_element_clear (value);
    g_slice_free (QmiMessageUimRefreshRegisterInputInfoFilesElement, value);
}

static QmiMessageUimRefreshRegisterInputInfoFilesElement *
__qmi_message_uim_refresh_register_input_info_files_element_new (void)
{
    return g_slice_new0 (QmiMessageUimRefreshRegisterInputInfoFilesElement);
}

static QmiMessageUimRefreshRegisterInputInfoFilesElement *
__qmi_message_uim_refresh_register_input_info_files_element_copy (const QmiMessageUimRefreshRegisterInputInfoFilesElement *value)
{
    QmiMessageUimRefreshRegisterInputInfoFilesElement *copy;

    copy = __qmi_message_uim_refresh_register_input_info_files_element_new ();
    copy->file_id = value->file_id;
    copy->path = g_array_ref (value->path);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageUimRefreshRegisterInputInfoFilesElement, qmi_message_uim_refresh_register_input_info_files_element, (GBoxedCopyFunc)__qmi_message_uim_refresh_register_input_info_files_element_copy, (GBoxedFreeFunc)__qmi_message_uim_refresh_register_input_info_files_element_free)

struct _QmiMessageUimRefreshRegisterInput {
    volatile gint ref_count;

    /* Info */
    gboolean arg_info_set;
    guint8 arg_info_register_flag;
    guint8 arg_info_vote_for_init;
    GArray *arg_info_files;
    GPtrArray *arg_info_files_ptr;

    /* Session */
    gboolean arg_session_set;
    guint8 arg_session_session_type;
    GArray *arg_session_application_identifier;
};

#define QMI_MESSAGE_UIM_REFRESH_REGISTER_INPUT_TLV_INFO 0x02
#define QMI_MESSAGE_UIM_REFRESH_REGISTER_INPUT_TLV_SESSION 0x01

gboolean
qmi_message_uim_refresh_register_input_get_info (
    QmiMessageUimRefreshRegisterInput *self,
    gboolean *value_info_register_flag,
    gboolean *value_info_vote_for_init,
    GArray **value_info_files,
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

    if (value_info_register_flag)
        *value_info_register_flag = (gboolean)(self->arg_info_register_flag);
    if (value_info_vote_for_init)
        *value_info_vote_for_init = (gboolean)(self->arg_info_vote_for_init);
    if (value_info_files)
        *value_info_files = self->arg_info_files;

    return TRUE;
}

gboolean
qmi_message_uim_refresh_register_input_get_info_gir (
    QmiMessageUimRefreshRegisterInput *self,
    gboolean *value_info_register_flag,
    gboolean *value_info_vote_for_init,
    GPtrArray **value_info_files_ptr,
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

    if (value_info_register_flag)
        *value_info_register_flag = (gboolean)(self->arg_info_register_flag);
    if (value_info_vote_for_init)
        *value_info_vote_for_init = (gboolean)(self->arg_info_vote_for_init);
    if (value_info_files_ptr) {
        if (!self->arg_info_files_ptr) {
            {
                guint files_i;

                self->arg_info_files_ptr = g_ptr_array_new_full (self->arg_info_files->len, (GDestroyNotify)__qmi_message_uim_refresh_register_input_info_files_element_free);
                for (files_i = 0; files_i < self->arg_info_files->len; files_i++) {
                    QmiMessageUimRefreshRegisterInputInfoFilesElement *files_aux_from;
                    QmiMessageUimRefreshRegisterInputInfoFilesElement *files_aux_to;

                    files_aux_from = &g_array_index (self->arg_info_files, QmiMessageUimRefreshRegisterInputInfoFilesElement, files_i);

                    files_aux_to = __qmi_message_uim_refresh_register_input_info_files_element_new ();
                    files_aux_to->file_id = (*files_aux_from).file_id;
                    files_aux_to->path = g_array_ref ((*files_aux_from).path);

                    g_ptr_array_add (self->arg_info_files_ptr, files_aux_to);
                }
            }
        }
        *value_info_files_ptr = self->arg_info_files_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_uim_refresh_register_input_set_info (
    QmiMessageUimRefreshRegisterInput *self,
    gboolean value_info_register_flag,
    gboolean value_info_vote_for_init,
    GArray *value_info_files,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_info_register_flag = (guint8)(value_info_register_flag);
    self->arg_info_vote_for_init = (guint8)(value_info_vote_for_init);
    g_clear_pointer (&self->arg_info_files, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_info_files, (GDestroyNotify)g_ptr_array_unref);
    self->arg_info_files = g_array_ref (value_info_files);
    self->arg_info_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_refresh_register_input_set_info_gir (
    QmiMessageUimRefreshRegisterInput *self,
    gboolean value_info_register_flag,
    gboolean value_info_vote_for_init,
    GPtrArray *value_info_files_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_info_register_flag = (guint8)(value_info_register_flag);
    self->arg_info_vote_for_init = (guint8)(value_info_vote_for_init);
    g_clear_pointer (&self->arg_info_files, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_info_files_ptr, (GDestroyNotify)g_ptr_array_unref);
    {
        guint files_i;

        self->arg_info_files = g_array_sized_new (FALSE, FALSE, sizeof (QmiMessageUimRefreshRegisterInputInfoFilesElement), value_info_files_ptr->len);
        for (files_i = 0; files_i < value_info_files_ptr->len; files_i++) {
            QmiMessageUimRefreshRegisterInputInfoFilesElement files_aux_to;
            QmiMessageUimRefreshRegisterInputInfoFilesElement *files_aux_from;

            files_aux_from = g_ptr_array_index (value_info_files_ptr, files_i);

            files_aux_to.file_id = files_aux_from->file_id;
            files_aux_to.path = g_array_ref (files_aux_from->path);

            g_array_append_val (self->arg_info_files, files_aux_to);
        }
    }
    self->arg_info_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_refresh_register_input_get_session (
    QmiMessageUimRefreshRegisterInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session' was not found in the message");
        return FALSE;
    }

    if (value_session_session_type)
        *value_session_session_type = (QmiUimSessionType)(self->arg_session_session_type);
    if (value_session_application_identifier)
        *value_session_application_identifier = self->arg_session_application_identifier;

    return TRUE;
}

gboolean
qmi_message_uim_refresh_register_input_set_session (
    QmiMessageUimRefreshRegisterInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_session_type = (guint8)(value_session_session_type);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_ptr_array_unref);
    self->arg_session_application_identifier = g_array_ref (value_session_application_identifier);
    self->arg_session_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_refresh_register_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimRefreshRegisterInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_refresh_register_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_refresh_register_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimRefreshRegisterInput *
qmi_message_uim_refresh_register_input_ref (QmiMessageUimRefreshRegisterInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_refresh_register_input_unref (QmiMessageUimRefreshRegisterInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_info_files, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_info_files, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimRefreshRegisterInput, self);
    }
}

QmiMessageUimRefreshRegisterInput *
qmi_message_uim_refresh_register_input_new (void)
{
    QmiMessageUimRefreshRegisterInput *self;

    self = g_slice_new0 (QmiMessageUimRefreshRegisterInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_refresh_register_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimRefreshRegisterInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_REFRESH_REGISTER);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Refresh Register' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Info' TLV */
    if (input->arg_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_REFRESH_REGISTER_INPUT_TLV_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Info': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_info_register_flag;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Info': ");
                return NULL;
            }
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_info_vote_for_init;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Info': ");
                return NULL;
            }
        }
        {
            guint files_i;
            guint16 files_n_items;

            /* Write the number of items in the array first */
            files_n_items = (guint16) input->arg_info_files->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, files_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Info': ");
                return NULL;
            }

            for (files_i = 0; files_i < input->arg_info_files->len; files_i++) {
                /* Write the guint16 variable to the buffer */
                if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, g_array_index (input->arg_info_files, QmiMessageUimRefreshRegisterInputInfoFilesElement,files_i).file_id, error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Info': ");
                    return NULL;
                }
                {
                    guint path_i;
                    guint8 path_n_items;

                    /* Write the number of items in the array first */
                    path_n_items = (guint8) g_array_index (input->arg_info_files, QmiMessageUimRefreshRegisterInputInfoFilesElement,files_i).path->len;
                    /* Write the guint8 variable to the buffer */
                    if (!qmi_message_tlv_write_guint8 (self, path_n_items, error)) {
                        g_prefix_error (error, "Cannot write integer in TLV 'Info': ");
                        return NULL;
                    }

                    for (path_i = 0; path_i < g_array_index (input->arg_info_files, QmiMessageUimRefreshRegisterInputInfoFilesElement,files_i).path->len; path_i++) {
                        /* Write the guint8 variable to the buffer */
                        if (!qmi_message_tlv_write_guint8 (self, g_array_index (g_array_index (input->arg_info_files, QmiMessageUimRefreshRegisterInputInfoFilesElement,files_i).path, guint8,path_i), error)) {
                            g_prefix_error (error, "Cannot write integer in TLV 'Info': ");
                            return NULL;
                        }
                    }
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Info': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Info' in message 'Refresh Register'");
        return NULL;
    }

    /* Try to add the 'Session' TLV */
    if (input->arg_session_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_REFRESH_REGISTER_INPUT_TLV_SESSION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session': ");
                return NULL;
            }
        }
        {
            guint application_identifier_i;
            guint8 application_identifier_n_items;

            /* Write the number of items in the array first */
            application_identifier_n_items = (guint8) input->arg_session_application_identifier->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, application_identifier_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                return NULL;
            }

            for (application_identifier_i = 0; application_identifier_i < input->arg_session_application_identifier->len; application_identifier_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_session_application_identifier, guint8,application_identifier_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session' in message 'Refresh Register'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimRefreshRegisterOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_REFRESH_REGISTER_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_refresh_register_output_get_result (
    QmiMessageUimRefreshRegisterOutput *self,
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
qmi_message_uim_refresh_register_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimRefreshRegisterOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_refresh_register_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_refresh_register_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimRefreshRegisterOutput *
qmi_message_uim_refresh_register_output_ref (QmiMessageUimRefreshRegisterOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_refresh_register_output_unref (QmiMessageUimRefreshRegisterOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimRefreshRegisterOutput, self);
    }
}

static gchar *
qmi_message_uim_refresh_register_input_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REFRESH_REGISTER_INPUT_TLV_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " register_flag = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " vote_for_init = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " files = '");
    {
        guint files_i;
        guint16 files_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(files_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (files_i = 0; files_i < files_n_items; files_i++) {
            g_string_append_printf (printable, " [%u] = '", files_i);
            g_string_append (printable, "[");
            g_string_append (printable, " file_id = '");

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " path = '");
            {
                guint path_i;
                guint8 path_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(path_n_items), &error))
                    goto out;

                g_string_append (printable, "{");

                for (path_i = 0; path_i < path_n_items; path_i++) {
                    g_string_append_printf (printable, " [%u] = '", path_i);

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

struct message_refresh_register_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_refresh_register_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_refresh_register_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_REFRESH_REGISTER_INPUT_TLV_INFO:
            tlv_type_str = "Info";
            translated_value = qmi_message_uim_refresh_register_input_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_REFRESH_REGISTER_INPUT_TLV_SESSION:
            tlv_type_str = "Session";
            translated_value = qmi_uim_session_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_REFRESH_REGISTER_OUTPUT_TLV_RESULT:
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
message_refresh_register_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Refresh Register\" (0x002A)\n",
                            line_prefix);

    {
        struct message_refresh_register_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_refresh_register_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimRefreshRegisterOutput *
qmi_message_uim_refresh_register_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimRefreshRegisterOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_REFRESH_REGISTER);

    self = g_slice_new0 (QmiMessageUimRefreshRegisterOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REFRESH_REGISTER_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_refresh_register_output_unref (self);
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
                qmi_message_uim_refresh_register_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Refresh Complete */


/* --- Input -- */

struct _QmiMessageUimRefreshCompleteInput {
    volatile gint ref_count;

    /* Info */
    gboolean arg_info_set;
    guint8 arg_info_refresh_success;

    /* Session */
    gboolean arg_session_set;
    guint8 arg_session_session_type;
    GArray *arg_session_application_identifier;
};

#define QMI_MESSAGE_UIM_REFRESH_COMPLETE_INPUT_TLV_INFO 0x02
#define QMI_MESSAGE_UIM_REFRESH_COMPLETE_INPUT_TLV_SESSION 0x01

gboolean
qmi_message_uim_refresh_complete_input_get_info (
    QmiMessageUimRefreshCompleteInput *self,
    gboolean *value_info_refresh_success,
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

    if (value_info_refresh_success)
        *value_info_refresh_success = (gboolean)(self->arg_info_refresh_success);

    return TRUE;
}

gboolean
qmi_message_uim_refresh_complete_input_set_info (
    QmiMessageUimRefreshCompleteInput *self,
    gboolean value_info_refresh_success,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_info_refresh_success = (guint8)(value_info_refresh_success);
    self->arg_info_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_refresh_complete_input_get_session (
    QmiMessageUimRefreshCompleteInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session' was not found in the message");
        return FALSE;
    }

    if (value_session_session_type)
        *value_session_session_type = (QmiUimSessionType)(self->arg_session_session_type);
    if (value_session_application_identifier)
        *value_session_application_identifier = self->arg_session_application_identifier;

    return TRUE;
}

gboolean
qmi_message_uim_refresh_complete_input_set_session (
    QmiMessageUimRefreshCompleteInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_session_type = (guint8)(value_session_session_type);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_ptr_array_unref);
    self->arg_session_application_identifier = g_array_ref (value_session_application_identifier);
    self->arg_session_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_refresh_complete_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimRefreshCompleteInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_refresh_complete_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_refresh_complete_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimRefreshCompleteInput *
qmi_message_uim_refresh_complete_input_ref (QmiMessageUimRefreshCompleteInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_refresh_complete_input_unref (QmiMessageUimRefreshCompleteInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimRefreshCompleteInput, self);
    }
}

QmiMessageUimRefreshCompleteInput *
qmi_message_uim_refresh_complete_input_new (void)
{
    QmiMessageUimRefreshCompleteInput *self;

    self = g_slice_new0 (QmiMessageUimRefreshCompleteInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_refresh_complete_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimRefreshCompleteInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_REFRESH_COMPLETE);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Refresh Complete' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Info' TLV */
    if (input->arg_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_REFRESH_COMPLETE_INPUT_TLV_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Info': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_info_refresh_success;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Info': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Info': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Info' in message 'Refresh Complete'");
        return NULL;
    }

    /* Try to add the 'Session' TLV */
    if (input->arg_session_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_REFRESH_COMPLETE_INPUT_TLV_SESSION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session': ");
                return NULL;
            }
        }
        {
            guint application_identifier_i;
            guint8 application_identifier_n_items;

            /* Write the number of items in the array first */
            application_identifier_n_items = (guint8) input->arg_session_application_identifier->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, application_identifier_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                return NULL;
            }

            for (application_identifier_i = 0; application_identifier_i < input->arg_session_application_identifier->len; application_identifier_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_session_application_identifier, guint8,application_identifier_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session' in message 'Refresh Complete'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimRefreshCompleteOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_REFRESH_COMPLETE_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_refresh_complete_output_get_result (
    QmiMessageUimRefreshCompleteOutput *self,
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
qmi_message_uim_refresh_complete_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimRefreshCompleteOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_refresh_complete_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_refresh_complete_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimRefreshCompleteOutput *
qmi_message_uim_refresh_complete_output_ref (QmiMessageUimRefreshCompleteOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_refresh_complete_output_unref (QmiMessageUimRefreshCompleteOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimRefreshCompleteOutput, self);
    }
}

static gchar *
qmi_message_uim_refresh_complete_input_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REFRESH_COMPLETE_INPUT_TLV_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " refresh_success = '");

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

struct message_refresh_complete_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_refresh_complete_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_refresh_complete_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_REFRESH_COMPLETE_INPUT_TLV_INFO:
            tlv_type_str = "Info";
            translated_value = qmi_message_uim_refresh_complete_input_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_REFRESH_COMPLETE_INPUT_TLV_SESSION:
            tlv_type_str = "Session";
            translated_value = qmi_uim_session_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_REFRESH_COMPLETE_OUTPUT_TLV_RESULT:
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
message_refresh_complete_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Refresh Complete\" (0x002C)\n",
                            line_prefix);

    {
        struct message_refresh_complete_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_refresh_complete_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimRefreshCompleteOutput *
qmi_message_uim_refresh_complete_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimRefreshCompleteOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_REFRESH_COMPLETE);

    self = g_slice_new0 (QmiMessageUimRefreshCompleteOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REFRESH_COMPLETE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_refresh_complete_output_unref (self);
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
                qmi_message_uim_refresh_complete_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Register Events */


/* --- Input -- */

struct _QmiMessageUimRegisterEventsInput {
    volatile gint ref_count;

    /* Event Registration Mask */
    gboolean arg_event_registration_mask_set;
    guint32 arg_event_registration_mask;
};

#define QMI_MESSAGE_UIM_REGISTER_EVENTS_INPUT_TLV_EVENT_REGISTRATION_MASK 0x01

gboolean
qmi_message_uim_register_events_input_get_event_registration_mask (
    QmiMessageUimRegisterEventsInput *self,
    QmiUimEventRegistrationFlag *value_event_registration_mask,
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
        *value_event_registration_mask = (QmiUimEventRegistrationFlag)(self->arg_event_registration_mask);

    return TRUE;
}

gboolean
qmi_message_uim_register_events_input_set_event_registration_mask (
    QmiMessageUimRegisterEventsInput *self,
    QmiUimEventRegistrationFlag value_event_registration_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_event_registration_mask = (guint32)(value_event_registration_mask);
    self->arg_event_registration_mask_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_register_events_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimRegisterEventsInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_register_events_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_register_events_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimRegisterEventsInput *
qmi_message_uim_register_events_input_ref (QmiMessageUimRegisterEventsInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_register_events_input_unref (QmiMessageUimRegisterEventsInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimRegisterEventsInput, self);
    }
}

QmiMessageUimRegisterEventsInput *
qmi_message_uim_register_events_input_new (void)
{
    QmiMessageUimRegisterEventsInput *self;

    self = g_slice_new0 (QmiMessageUimRegisterEventsInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_register_events_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimRegisterEventsInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_REGISTER_EVENTS);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Register Events' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Event Registration Mask' TLV */
    if (input->arg_event_registration_mask_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_REGISTER_EVENTS_INPUT_TLV_EVENT_REGISTRATION_MASK, error))) {
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
                     "Missing mandatory TLV 'Event Registration Mask' in message 'Register Events'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimRegisterEventsOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Event Registration Mask */
    gboolean arg_event_registration_mask_set;
    guint32 arg_event_registration_mask;
};

#define QMI_MESSAGE_UIM_REGISTER_EVENTS_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_REGISTER_EVENTS_OUTPUT_TLV_EVENT_REGISTRATION_MASK 0x10

gboolean
qmi_message_uim_register_events_output_get_result (
    QmiMessageUimRegisterEventsOutput *self,
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
qmi_message_uim_register_events_output_get_event_registration_mask (
    QmiMessageUimRegisterEventsOutput *self,
    QmiUimEventRegistrationFlag *value_event_registration_mask,
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
        *value_event_registration_mask = (QmiUimEventRegistrationFlag)(self->arg_event_registration_mask);

    return TRUE;
}

GType
qmi_message_uim_register_events_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimRegisterEventsOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_register_events_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_register_events_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimRegisterEventsOutput *
qmi_message_uim_register_events_output_ref (QmiMessageUimRegisterEventsOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_register_events_output_unref (QmiMessageUimRegisterEventsOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimRegisterEventsOutput, self);
    }
}

static gchar *
qmi_message_uim_register_events_input_event_registration_mask_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REGISTER_EVENTS_INPUT_TLV_EVENT_REGISTRATION_MASK, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_EVENT_REGISTRATION_FLAG_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_event_registration_flag_get_string ((QmiUimEventRegistrationFlag)tmp));
#elif defined  __QMI_UIM_EVENT_REGISTRATION_FLAG_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_event_registration_flag_build_string_from_mask ((QmiUimEventRegistrationFlag)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimEventRegistrationFlag
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
qmi_message_uim_register_events_output_event_registration_mask_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REGISTER_EVENTS_OUTPUT_TLV_EVENT_REGISTRATION_MASK, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_EVENT_REGISTRATION_FLAG_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_event_registration_flag_get_string ((QmiUimEventRegistrationFlag)tmp));
#elif defined  __QMI_UIM_EVENT_REGISTRATION_FLAG_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_event_registration_flag_build_string_from_mask ((QmiUimEventRegistrationFlag)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimEventRegistrationFlag
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

struct message_register_events_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_register_events_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_register_events_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_REGISTER_EVENTS_INPUT_TLV_EVENT_REGISTRATION_MASK:
            tlv_type_str = "Event Registration Mask";
            translated_value = qmi_message_uim_register_events_input_event_registration_mask_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_REGISTER_EVENTS_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_REGISTER_EVENTS_OUTPUT_TLV_EVENT_REGISTRATION_MASK:
            tlv_type_str = "Event Registration Mask";
            translated_value = qmi_message_uim_register_events_output_event_registration_mask_get_printable (
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
message_register_events_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Register Events\" (0x002E)\n",
                            line_prefix);

    {
        struct message_register_events_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_register_events_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimRegisterEventsOutput *
qmi_message_uim_register_events_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimRegisterEventsOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_REGISTER_EVENTS);

    self = g_slice_new0 (QmiMessageUimRegisterEventsOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REGISTER_EVENTS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_register_events_output_unref (self);
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
                qmi_message_uim_register_events_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REGISTER_EVENTS_OUTPUT_TLV_EVENT_REGISTRATION_MASK, NULL, NULL)) == 0) {
                goto qmi_message_uim_register_events_output_event_registration_mask_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_message_uim_register_events_output_event_registration_mask_out;
                self->arg_event_registration_mask = (QmiUimEventRegistrationFlag)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Event Registration Mask' TLV", offset);
            }

            self->arg_event_registration_mask_set = TRUE;

qmi_message_uim_register_events_output_event_registration_mask_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get Card Status */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_uim_get_card_status_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_GET_CARD_STATUS);

    return g_steal_pointer (&self);
}

/* --- Output -- */

static void
__qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_v2_clear (QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2 *value)
{
    g_clear_pointer (&value->application_identifier_value, (GDestroyNotify)g_array_unref);
}

static void
__qmi_message_uim_get_card_status_output_card_status_cards_element_clear (QmiMessageUimGetCardStatusOutputCardStatusCardsElement *value)
{
    g_clear_pointer (&value->applications, (GDestroyNotify)g_array_unref);
}

static void
__qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_v2_free (QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2 *value)
{
    __qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_v2_clear (value);
    g_slice_free (QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2, value);
}

static QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2 *
__qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_v2_new (void)
{
    return g_slice_new0 (QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2);
}

static QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2 *
__qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_v2_copy (const QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2 *value)
{
    QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2 *copy;

    copy = __qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_v2_new ();
    copy->type = value->type;
    copy->state = value->state;
    copy->personalization_state = value->personalization_state;
    copy->personalization_feature = value->personalization_feature;
    copy->personalization_retries = value->personalization_retries;
    copy->personalization_unblock_retries = value->personalization_unblock_retries;
    copy->application_identifier_value = g_array_ref (value->application_identifier_value);
    copy->upin_replaces_pin1 = value->upin_replaces_pin1;
    copy->pin1_state = value->pin1_state;
    copy->pin1_retries = value->pin1_retries;
    copy->puk1_retries = value->puk1_retries;
    copy->pin2_state = value->pin2_state;
    copy->pin2_retries = value->pin2_retries;
    copy->puk2_retries = value->puk2_retries;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2, qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_v2, (GBoxedCopyFunc)__qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_v2_copy, (GBoxedFreeFunc)__qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_v2_free)

static void
__qmi_message_uim_get_card_status_output_card_status_cards_element_gir_free (QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir *value)
{
    g_clear_pointer (&value->applications, (GDestroyNotify)g_ptr_array_unref);
    g_slice_free (QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir, value);
}

static QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir *
__qmi_message_uim_get_card_status_output_card_status_cards_element_gir_new (void)
{
    return g_slice_new0 (QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir);
}

static QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir *
__qmi_message_uim_get_card_status_output_card_status_cards_element_gir_copy (const QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir *value)
{
    QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir *copy;

    copy = __qmi_message_uim_get_card_status_output_card_status_cards_element_gir_new ();
    copy->card_state = value->card_state;
    copy->upin_state = value->upin_state;
    copy->upin_retries = value->upin_retries;
    copy->upuk_retries = value->upuk_retries;
    copy->error_code = value->error_code;
    copy->applications = g_ptr_array_ref (value->applications);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir, qmi_message_uim_get_card_status_output_card_status_cards_element_gir, (GBoxedCopyFunc)__qmi_message_uim_get_card_status_output_card_status_cards_element_gir_copy, (GBoxedFreeFunc)__qmi_message_uim_get_card_status_output_card_status_cards_element_gir_free)

struct _QmiMessageUimGetCardStatusOutput {
    volatile gint ref_count;

    /* Card Status */
    gboolean arg_card_status_set;
    guint16 arg_card_status_index_gw_primary;
    guint16 arg_card_status_index_1x_primary;
    guint16 arg_card_status_index_gw_secondary;
    guint16 arg_card_status_index_1x_secondary;
    GArray *arg_card_status_cards;
    GPtrArray *arg_card_status_cards_ptr;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_GET_CARD_STATUS_OUTPUT_TLV_CARD_STATUS 0x10
#define QMI_MESSAGE_UIM_GET_CARD_STATUS_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_get_card_status_output_get_card_status (
    QmiMessageUimGetCardStatusOutput *self,
    guint16 *value_card_status_index_gw_primary,
    guint16 *value_card_status_index_1x_primary,
    guint16 *value_card_status_index_gw_secondary,
    guint16 *value_card_status_index_1x_secondary,
    GArray **value_card_status_cards,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Status' was not found in the message");
        return FALSE;
    }

    if (value_card_status_index_gw_primary)
        *value_card_status_index_gw_primary = self->arg_card_status_index_gw_primary;
    if (value_card_status_index_1x_primary)
        *value_card_status_index_1x_primary = self->arg_card_status_index_1x_primary;
    if (value_card_status_index_gw_secondary)
        *value_card_status_index_gw_secondary = self->arg_card_status_index_gw_secondary;
    if (value_card_status_index_1x_secondary)
        *value_card_status_index_1x_secondary = self->arg_card_status_index_1x_secondary;
    if (value_card_status_cards)
        *value_card_status_cards = self->arg_card_status_cards;

    return TRUE;
}

gboolean
qmi_message_uim_get_card_status_output_get_card_status_gir (
    QmiMessageUimGetCardStatusOutput *self,
    guint16 *value_card_status_index_gw_primary,
    guint16 *value_card_status_index_1x_primary,
    guint16 *value_card_status_index_gw_secondary,
    guint16 *value_card_status_index_1x_secondary,
    GPtrArray **value_card_status_cards_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card Status' was not found in the message");
        return FALSE;
    }

    if (value_card_status_index_gw_primary)
        *value_card_status_index_gw_primary = self->arg_card_status_index_gw_primary;
    if (value_card_status_index_1x_primary)
        *value_card_status_index_1x_primary = self->arg_card_status_index_1x_primary;
    if (value_card_status_index_gw_secondary)
        *value_card_status_index_gw_secondary = self->arg_card_status_index_gw_secondary;
    if (value_card_status_index_1x_secondary)
        *value_card_status_index_1x_secondary = self->arg_card_status_index_1x_secondary;
    if (value_card_status_cards_ptr) {
        if (!self->arg_card_status_cards_ptr) {
            {
                guint cards_i;

                self->arg_card_status_cards_ptr = g_ptr_array_new_full (self->arg_card_status_cards->len, (GDestroyNotify)__qmi_message_uim_get_card_status_output_card_status_cards_element_gir_free);
                for (cards_i = 0; cards_i < self->arg_card_status_cards->len; cards_i++) {
                    QmiMessageUimGetCardStatusOutputCardStatusCardsElement *cards_aux_from;
                    QmiMessageUimGetCardStatusOutputCardStatusCardsElementGir *cards_aux_to;

                    cards_aux_from = &g_array_index (self->arg_card_status_cards, QmiMessageUimGetCardStatusOutputCardStatusCardsElement, cards_i);

                    cards_aux_to = __qmi_message_uim_get_card_status_output_card_status_cards_element_gir_new ();
                    cards_aux_to->card_state = (*cards_aux_from).card_state;
                    cards_aux_to->upin_state = (*cards_aux_from).upin_state;
                    cards_aux_to->upin_retries = (*cards_aux_from).upin_retries;
                    cards_aux_to->upuk_retries = (*cards_aux_from).upuk_retries;
                    cards_aux_to->error_code = (*cards_aux_from).error_code;
                    {
                        guint applications_i;

                        cards_aux_to->applications = g_ptr_array_new_full ((*cards_aux_from).applications->len, (GDestroyNotify)__qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_v2_free);
                        for (applications_i = 0; applications_i < (*cards_aux_from).applications->len; applications_i++) {
                            QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2 *applications_aux_from;
                            QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2 *applications_aux_to;

                            applications_aux_from = &g_array_index ((*cards_aux_from).applications, QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2, applications_i);

                            applications_aux_to = __qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_v2_new ();
                            applications_aux_to->type = (*applications_aux_from).type;
                            applications_aux_to->state = (*applications_aux_from).state;
                            applications_aux_to->personalization_state = (*applications_aux_from).personalization_state;
                            applications_aux_to->personalization_feature = (*applications_aux_from).personalization_feature;
                            applications_aux_to->personalization_retries = (*applications_aux_from).personalization_retries;
                            applications_aux_to->personalization_unblock_retries = (*applications_aux_from).personalization_unblock_retries;
                            applications_aux_to->application_identifier_value = g_array_ref ((*applications_aux_from).application_identifier_value);
                            applications_aux_to->upin_replaces_pin1 = (*applications_aux_from).upin_replaces_pin1;
                            applications_aux_to->pin1_state = (*applications_aux_from).pin1_state;
                            applications_aux_to->pin1_retries = (*applications_aux_from).pin1_retries;
                            applications_aux_to->puk1_retries = (*applications_aux_from).puk1_retries;
                            applications_aux_to->pin2_state = (*applications_aux_from).pin2_state;
                            applications_aux_to->pin2_retries = (*applications_aux_from).pin2_retries;
                            applications_aux_to->puk2_retries = (*applications_aux_from).puk2_retries;

                            g_ptr_array_add (cards_aux_to->applications, applications_aux_to);
                        }
                    }

                    g_ptr_array_add (self->arg_card_status_cards_ptr, cards_aux_to);
                }
            }
        }
        *value_card_status_cards_ptr = self->arg_card_status_cards_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_uim_get_card_status_output_get_result (
    QmiMessageUimGetCardStatusOutput *self,
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
qmi_message_uim_get_card_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimGetCardStatusOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_get_card_status_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_get_card_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimGetCardStatusOutput *
qmi_message_uim_get_card_status_output_ref (QmiMessageUimGetCardStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_get_card_status_output_unref (QmiMessageUimGetCardStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_card_status_cards, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_card_status_cards, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageUimGetCardStatusOutput, self);
    }
}

static gchar *
qmi_message_uim_get_card_status_output_card_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CARD_STATUS_OUTPUT_TLV_CARD_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " index_gw_primary = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " index_1x_primary = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " index_gw_secondary = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " index_1x_secondary = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " cards = '");
    {
        guint cards_i;
        guint8 cards_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(cards_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (cards_i = 0; cards_i < cards_n_items; cards_i++) {
            g_string_append_printf (printable, " [%u] = '", cards_i);
            g_string_append (printable, "[");
            g_string_append (printable, " card_state = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_UIM_CARD_STATE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_uim_card_state_get_string ((QmiUimCardState)tmp));
#elif defined  __QMI_UIM_CARD_STATE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_uim_card_state_build_string_from_mask ((QmiUimCardState)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiUimCardState
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " upin_state = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_UIM_PIN_STATE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_uim_pin_state_get_string ((QmiUimPinState)tmp));
#elif defined  __QMI_UIM_PIN_STATE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_uim_pin_state_build_string_from_mask ((QmiUimPinState)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiUimPinState
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " upin_retries = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " upuk_retries = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " error_code = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_UIM_CARD_ERROR_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_uim_card_error_get_string ((QmiUimCardError)tmp));
#elif defined  __QMI_UIM_CARD_ERROR_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_uim_card_error_build_string_from_mask ((QmiUimCardError)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiUimCardError
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " applications = '");
            {
                guint applications_i;
                guint8 applications_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_n_items), &error))
                    goto out;

                g_string_append (printable, "{");

                for (applications_i = 0; applications_i < applications_n_items; applications_i++) {
                    g_string_append_printf (printable, " [%u] = '", applications_i);
                    g_string_append (printable, "[");
                    g_string_append (printable, " type = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_CARD_APPLICATION_TYPE_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_card_application_type_get_string ((QmiUimCardApplicationType)tmp));
#elif defined  __QMI_UIM_CARD_APPLICATION_TYPE_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_card_application_type_build_string_from_mask ((QmiUimCardApplicationType)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimCardApplicationType
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " state = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_CARD_APPLICATION_STATE_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_card_application_state_get_string ((QmiUimCardApplicationState)tmp));
#elif defined  __QMI_UIM_CARD_APPLICATION_STATE_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_card_application_state_build_string_from_mask ((QmiUimCardApplicationState)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimCardApplicationState
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " personalization_state = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_STATE_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_card_application_personalization_state_get_string ((QmiUimCardApplicationPersonalizationState)tmp));
#elif defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_STATE_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_card_application_personalization_state_build_string_from_mask ((QmiUimCardApplicationPersonalizationState)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimCardApplicationPersonalizationState
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " personalization_feature = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_STATUS_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_card_application_personalization_feature_status_get_string ((QmiUimCardApplicationPersonalizationFeatureStatus)tmp));
#elif defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_STATUS_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_card_application_personalization_feature_status_build_string_from_mask ((QmiUimCardApplicationPersonalizationFeatureStatus)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimCardApplicationPersonalizationFeatureStatus
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " personalization_retries = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " personalization_unblock_retries = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " application_identifier_value = '");
                    {
                        guint application_identifier_value_i;
                        guint8 application_identifier_value_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(application_identifier_value_n_items), &error))
                            goto out;

                        g_string_append (printable, "{");

                        for (application_identifier_value_i = 0; application_identifier_value_i < application_identifier_value_n_items; application_identifier_value_i++) {
                            g_string_append_printf (printable, " [%u] = '", application_identifier_value_i);

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
                    }                    g_string_append (printable, "'");
                    g_string_append (printable, " upin_replaces_pin1 = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " pin1_state = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_PIN_STATE_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_pin_state_get_string ((QmiUimPinState)tmp));
#elif defined  __QMI_UIM_PIN_STATE_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_pin_state_build_string_from_mask ((QmiUimPinState)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimPinState
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " pin1_retries = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " puk1_retries = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " pin2_state = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_PIN_STATE_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_pin_state_get_string ((QmiUimPinState)tmp));
#elif defined  __QMI_UIM_PIN_STATE_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_pin_state_build_string_from_mask ((QmiUimPinState)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimPinState
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " pin2_retries = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " puk2_retries = '");

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

struct message_get_card_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_card_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_card_status_context *ctx)
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
        case QMI_MESSAGE_UIM_GET_CARD_STATUS_OUTPUT_TLV_CARD_STATUS:
            tlv_type_str = "Card Status";
            translated_value = qmi_message_uim_get_card_status_output_card_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_GET_CARD_STATUS_OUTPUT_TLV_RESULT:
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
message_get_card_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Card Status\" (0x002F)\n",
                            line_prefix);

    {
        struct message_get_card_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_card_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimGetCardStatusOutput *
qmi_message_uim_get_card_status_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimGetCardStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_GET_CARD_STATUS);

    self = g_slice_new0 (QmiMessageUimGetCardStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CARD_STATUS_OUTPUT_TLV_CARD_STATUS, NULL, NULL)) == 0) {
                goto qmi_message_uim_get_card_status_output_card_status_out;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_card_status_index_gw_primary), NULL))
                goto qmi_message_uim_get_card_status_output_card_status_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_card_status_index_1x_primary), NULL))
                goto qmi_message_uim_get_card_status_output_card_status_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_card_status_index_gw_secondary), NULL))
                goto qmi_message_uim_get_card_status_output_card_status_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_card_status_index_1x_secondary), NULL))
                goto qmi_message_uim_get_card_status_output_card_status_out;
            {
                guint cards_i;
                guint8 cards_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(cards_n_items), NULL))
                    goto qmi_message_uim_get_card_status_output_card_status_out;

                self->arg_card_status_cards = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessageUimGetCardStatusOutputCardStatusCardsElement),
                    (guint)cards_n_items);

                g_array_set_clear_func (self->arg_card_status_cards, (GDestroyNotify)__qmi_message_uim_get_card_status_output_card_status_cards_element_clear);

                for (cards_i = 0; cards_i < cards_n_items; cards_i++) {
                    QmiMessageUimGetCardStatusOutputCardStatusCardsElement cards_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_uim_get_card_status_output_card_status_out;
                        cards_aux.card_state = (QmiUimCardState)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_uim_get_card_status_output_card_status_out;
                        cards_aux.upin_state = (QmiUimPinState)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(cards_aux.upin_retries), NULL))
                        goto qmi_message_uim_get_card_status_output_card_status_out;
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(cards_aux.upuk_retries), NULL))
                        goto qmi_message_uim_get_card_status_output_card_status_out;
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_uim_get_card_status_output_card_status_out;
                        cards_aux.error_code = (QmiUimCardError)tmp;
                    }
                    {
                        guint applications_i;
                        guint8 applications_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_n_items), NULL))
                            goto qmi_message_uim_get_card_status_output_card_status_out;

                        cards_aux.applications = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2),
                            (guint)applications_n_items);

                        g_array_set_clear_func (cards_aux.applications, (GDestroyNotify)__qmi_message_uim_get_card_status_output_card_status_cards_element_applications_element_v2_clear);

                        for (applications_i = 0; applications_i < applications_n_items; applications_i++) {
                            QmiMessageUimGetCardStatusOutputCardStatusCardsElementApplicationsElementV2 applications_aux;

                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_message_uim_get_card_status_output_card_status_out;
                                applications_aux.type = (QmiUimCardApplicationType)tmp;
                            }
                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_message_uim_get_card_status_output_card_status_out;
                                applications_aux.state = (QmiUimCardApplicationState)tmp;
                            }
                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_message_uim_get_card_status_output_card_status_out;
                                applications_aux.personalization_state = (QmiUimCardApplicationPersonalizationState)tmp;
                            }
                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_message_uim_get_card_status_output_card_status_out;
                                applications_aux.personalization_feature = (QmiUimCardApplicationPersonalizationFeatureStatus)tmp;
                            }
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_aux.personalization_retries), NULL))
                                goto qmi_message_uim_get_card_status_output_card_status_out;
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_aux.personalization_unblock_retries), NULL))
                                goto qmi_message_uim_get_card_status_output_card_status_out;
                            {
                                guint application_identifier_value_i;
                                guint8 application_identifier_value_n_items;

                                /* Read number of items in the array */
                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(application_identifier_value_n_items), NULL))
                                    goto qmi_message_uim_get_card_status_output_card_status_out;

                                applications_aux.application_identifier_value = g_array_sized_new (
                                    FALSE,
                                    FALSE,
                                    sizeof (guint8),
                                    (guint)application_identifier_value_n_items);

                                for (application_identifier_value_i = 0; application_identifier_value_i < application_identifier_value_n_items; application_identifier_value_i++) {
                                    guint8 application_identifier_value_aux;

                                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(application_identifier_value_aux), NULL))
                                        goto qmi_message_uim_get_card_status_output_card_status_out;
                                    g_array_insert_val (applications_aux.application_identifier_value, application_identifier_value_i, application_identifier_value_aux);
                                }
                            }
                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_message_uim_get_card_status_output_card_status_out;
                                applications_aux.upin_replaces_pin1 = (gboolean)tmp;
                            }
                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_message_uim_get_card_status_output_card_status_out;
                                applications_aux.pin1_state = (QmiUimPinState)tmp;
                            }
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_aux.pin1_retries), NULL))
                                goto qmi_message_uim_get_card_status_output_card_status_out;
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_aux.puk1_retries), NULL))
                                goto qmi_message_uim_get_card_status_output_card_status_out;
                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_message_uim_get_card_status_output_card_status_out;
                                applications_aux.pin2_state = (QmiUimPinState)tmp;
                            }
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_aux.pin2_retries), NULL))
                                goto qmi_message_uim_get_card_status_output_card_status_out;
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(applications_aux.puk2_retries), NULL))
                                goto qmi_message_uim_get_card_status_output_card_status_out;
                            g_array_insert_val (cards_aux.applications, applications_i, applications_aux);
                        }
                    }
                    g_array_insert_val (self->arg_card_status_cards, cards_i, cards_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Card Status' TLV", offset);
            }

            self->arg_card_status_set = TRUE;

qmi_message_uim_get_card_status_output_card_status_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CARD_STATUS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_get_card_status_output_unref (self);
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
                qmi_message_uim_get_card_status_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Power Off SIM */


/* --- Input -- */

struct _QmiMessageUimPowerOffSimInput {
    volatile gint ref_count;

    /* Slot */
    gboolean arg_slot_set;
    guint8 arg_slot;
};

#define QMI_MESSAGE_UIM_POWER_OFF_SIM_INPUT_TLV_SLOT 0x01

gboolean
qmi_message_uim_power_off_sim_input_get_slot (
    QmiMessageUimPowerOffSimInput *self,
    guint8 *value_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_slot_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Slot' was not found in the message");
        return FALSE;
    }

    if (value_slot)
        *value_slot = self->arg_slot;

    return TRUE;
}

gboolean
qmi_message_uim_power_off_sim_input_set_slot (
    QmiMessageUimPowerOffSimInput *self,
    guint8 value_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_slot = value_slot;
    self->arg_slot_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_power_off_sim_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimPowerOffSimInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_power_off_sim_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_power_off_sim_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimPowerOffSimInput *
qmi_message_uim_power_off_sim_input_ref (QmiMessageUimPowerOffSimInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_power_off_sim_input_unref (QmiMessageUimPowerOffSimInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimPowerOffSimInput, self);
    }
}

QmiMessageUimPowerOffSimInput *
qmi_message_uim_power_off_sim_input_new (void)
{
    QmiMessageUimPowerOffSimInput *self;

    self = g_slice_new0 (QmiMessageUimPowerOffSimInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_power_off_sim_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimPowerOffSimInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_POWER_OFF_SIM);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Power Off SIM' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Slot' TLV */
    if (input->arg_slot_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_POWER_OFF_SIM_INPUT_TLV_SLOT, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Slot': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_slot, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Slot': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Slot': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Slot' in message 'Power Off SIM'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimPowerOffSimOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_POWER_OFF_SIM_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_power_off_sim_output_get_result (
    QmiMessageUimPowerOffSimOutput *self,
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
qmi_message_uim_power_off_sim_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimPowerOffSimOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_power_off_sim_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_power_off_sim_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimPowerOffSimOutput *
qmi_message_uim_power_off_sim_output_ref (QmiMessageUimPowerOffSimOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_power_off_sim_output_unref (QmiMessageUimPowerOffSimOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimPowerOffSimOutput, self);
    }
}

static gchar *
qmi_message_uim_power_off_sim_input_slot_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_POWER_OFF_SIM_INPUT_TLV_SLOT, NULL, NULL)) == 0)
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

struct message_power_off_sim_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_power_off_sim_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_power_off_sim_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_POWER_OFF_SIM_INPUT_TLV_SLOT:
            tlv_type_str = "Slot";
            translated_value = qmi_message_uim_power_off_sim_input_slot_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_POWER_OFF_SIM_OUTPUT_TLV_RESULT:
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
message_power_off_sim_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Power Off SIM\" (0x0030)\n",
                            line_prefix);

    {
        struct message_power_off_sim_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_power_off_sim_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimPowerOffSimOutput *
qmi_message_uim_power_off_sim_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimPowerOffSimOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_POWER_OFF_SIM);

    self = g_slice_new0 (QmiMessageUimPowerOffSimOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_POWER_OFF_SIM_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_power_off_sim_output_unref (self);
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
                qmi_message_uim_power_off_sim_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Power On SIM */


/* --- Input -- */

struct _QmiMessageUimPowerOnSimInput {
    volatile gint ref_count;

    /* Slot */
    gboolean arg_slot_set;
    guint8 arg_slot;
};

#define QMI_MESSAGE_UIM_POWER_ON_SIM_INPUT_TLV_SLOT 0x01

gboolean
qmi_message_uim_power_on_sim_input_get_slot (
    QmiMessageUimPowerOnSimInput *self,
    guint8 *value_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_slot_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Slot' was not found in the message");
        return FALSE;
    }

    if (value_slot)
        *value_slot = self->arg_slot;

    return TRUE;
}

gboolean
qmi_message_uim_power_on_sim_input_set_slot (
    QmiMessageUimPowerOnSimInput *self,
    guint8 value_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_slot = value_slot;
    self->arg_slot_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_power_on_sim_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimPowerOnSimInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_power_on_sim_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_power_on_sim_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimPowerOnSimInput *
qmi_message_uim_power_on_sim_input_ref (QmiMessageUimPowerOnSimInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_power_on_sim_input_unref (QmiMessageUimPowerOnSimInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimPowerOnSimInput, self);
    }
}

QmiMessageUimPowerOnSimInput *
qmi_message_uim_power_on_sim_input_new (void)
{
    QmiMessageUimPowerOnSimInput *self;

    self = g_slice_new0 (QmiMessageUimPowerOnSimInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_power_on_sim_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimPowerOnSimInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_POWER_ON_SIM);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Power On SIM' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Slot' TLV */
    if (input->arg_slot_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_POWER_ON_SIM_INPUT_TLV_SLOT, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Slot': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_slot, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Slot': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Slot': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Slot' in message 'Power On SIM'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimPowerOnSimOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_POWER_ON_SIM_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_power_on_sim_output_get_result (
    QmiMessageUimPowerOnSimOutput *self,
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
qmi_message_uim_power_on_sim_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimPowerOnSimOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_power_on_sim_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_power_on_sim_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimPowerOnSimOutput *
qmi_message_uim_power_on_sim_output_ref (QmiMessageUimPowerOnSimOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_power_on_sim_output_unref (QmiMessageUimPowerOnSimOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimPowerOnSimOutput, self);
    }
}

static gchar *
qmi_message_uim_power_on_sim_input_slot_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_POWER_ON_SIM_INPUT_TLV_SLOT, NULL, NULL)) == 0)
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

struct message_power_on_sim_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_power_on_sim_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_power_on_sim_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_POWER_ON_SIM_INPUT_TLV_SLOT:
            tlv_type_str = "Slot";
            translated_value = qmi_message_uim_power_on_sim_input_slot_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_POWER_ON_SIM_OUTPUT_TLV_RESULT:
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
message_power_on_sim_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Power On SIM\" (0x0031)\n",
                            line_prefix);

    {
        struct message_power_on_sim_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_power_on_sim_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimPowerOnSimOutput *
qmi_message_uim_power_on_sim_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimPowerOnSimOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_POWER_ON_SIM);

    self = g_slice_new0 (QmiMessageUimPowerOnSimOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_POWER_ON_SIM_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_power_on_sim_output_unref (self);
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
                qmi_message_uim_power_on_sim_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Change Provisioning Session */


/* --- Input -- */

struct _QmiMessageUimChangeProvisioningSessionInput {
    volatile gint ref_count;

    /* Application Information */
    gboolean arg_application_information_set;
    guint8 arg_application_information_slot;
    GArray *arg_application_information_application_identifier;

    /* Session Change */
    gboolean arg_session_change_set;
    guint8 arg_session_change_session_type;
    guint8 arg_session_change_activate;
};

#define QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_INPUT_TLV_APPLICATION_INFORMATION 0x10
#define QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_INPUT_TLV_SESSION_CHANGE 0x01

gboolean
qmi_message_uim_change_provisioning_session_input_get_application_information (
    QmiMessageUimChangeProvisioningSessionInput *self,
    guint8 *value_application_information_slot,
    GArray **value_application_information_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_application_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Application Information' was not found in the message");
        return FALSE;
    }

    if (value_application_information_slot)
        *value_application_information_slot = self->arg_application_information_slot;
    if (value_application_information_application_identifier)
        *value_application_information_application_identifier = self->arg_application_information_application_identifier;

    return TRUE;
}

gboolean
qmi_message_uim_change_provisioning_session_input_set_application_information (
    QmiMessageUimChangeProvisioningSessionInput *self,
    guint8 value_application_information_slot,
    GArray *value_application_information_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_application_information_slot = value_application_information_slot;
    g_clear_pointer (&self->arg_application_information_application_identifier, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_application_information_application_identifier, (GDestroyNotify)g_ptr_array_unref);
    self->arg_application_information_application_identifier = g_array_ref (value_application_information_application_identifier);
    self->arg_application_information_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_change_provisioning_session_input_get_session_change (
    QmiMessageUimChangeProvisioningSessionInput *self,
    QmiUimSessionType *value_session_change_session_type,
    gboolean *value_session_change_activate,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_change_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session Change' was not found in the message");
        return FALSE;
    }

    if (value_session_change_session_type)
        *value_session_change_session_type = (QmiUimSessionType)(self->arg_session_change_session_type);
    if (value_session_change_activate)
        *value_session_change_activate = (gboolean)(self->arg_session_change_activate);

    return TRUE;
}

gboolean
qmi_message_uim_change_provisioning_session_input_set_session_change (
    QmiMessageUimChangeProvisioningSessionInput *self,
    QmiUimSessionType value_session_change_session_type,
    gboolean value_session_change_activate,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_change_session_type = (guint8)(value_session_change_session_type);
    self->arg_session_change_activate = (guint8)(value_session_change_activate);
    self->arg_session_change_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_change_provisioning_session_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimChangeProvisioningSessionInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_change_provisioning_session_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_change_provisioning_session_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimChangeProvisioningSessionInput *
qmi_message_uim_change_provisioning_session_input_ref (QmiMessageUimChangeProvisioningSessionInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_change_provisioning_session_input_unref (QmiMessageUimChangeProvisioningSessionInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_application_information_application_identifier, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimChangeProvisioningSessionInput, self);
    }
}

QmiMessageUimChangeProvisioningSessionInput *
qmi_message_uim_change_provisioning_session_input_new (void)
{
    QmiMessageUimChangeProvisioningSessionInput *self;

    self = g_slice_new0 (QmiMessageUimChangeProvisioningSessionInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_change_provisioning_session_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimChangeProvisioningSessionInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Change Provisioning Session' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Application Information' TLV */
    if (input->arg_application_information_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_INPUT_TLV_APPLICATION_INFORMATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Application Information': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_application_information_slot, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Application Information': ");
            return NULL;
        }
        {
            guint application_identifier_i;
            guint8 application_identifier_n_items;

            /* Write the number of items in the array first */
            application_identifier_n_items = (guint8) input->arg_application_information_application_identifier->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, application_identifier_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Application Information': ");
                return NULL;
            }

            for (application_identifier_i = 0; application_identifier_i < input->arg_application_information_application_identifier->len; application_identifier_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_application_information_application_identifier, guint8,application_identifier_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Application Information': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Application Information': ");
            return NULL;
        }
    }

    /* Try to add the 'Session Change' TLV */
    if (input->arg_session_change_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_INPUT_TLV_SESSION_CHANGE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session Change': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_change_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session Change': ");
                return NULL;
            }
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_change_activate;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session Change': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session Change': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session Change' in message 'Change Provisioning Session'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimChangeProvisioningSessionOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_change_provisioning_session_output_get_result (
    QmiMessageUimChangeProvisioningSessionOutput *self,
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
qmi_message_uim_change_provisioning_session_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimChangeProvisioningSessionOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_change_provisioning_session_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_change_provisioning_session_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimChangeProvisioningSessionOutput *
qmi_message_uim_change_provisioning_session_output_ref (QmiMessageUimChangeProvisioningSessionOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_change_provisioning_session_output_unref (QmiMessageUimChangeProvisioningSessionOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimChangeProvisioningSessionOutput, self);
    }
}

static gchar *
qmi_message_uim_change_provisioning_session_input_application_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_INPUT_TLV_APPLICATION_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " slot = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " application_identifier = '");
    {
        guint application_identifier_i;
        guint8 application_identifier_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(application_identifier_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (application_identifier_i = 0; application_identifier_i < application_identifier_n_items; application_identifier_i++) {
            g_string_append_printf (printable, " [%u] = '", application_identifier_i);

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
qmi_message_uim_change_provisioning_session_input_session_change_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_INPUT_TLV_SESSION_CHANGE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " session_type = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_SESSION_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_session_type_get_string ((QmiUimSessionType)tmp));
#elif defined  __QMI_UIM_SESSION_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_session_type_build_string_from_mask ((QmiUimSessionType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimSessionType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " activate = '");

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

struct message_change_provisioning_session_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_change_provisioning_session_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_change_provisioning_session_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_INPUT_TLV_APPLICATION_INFORMATION:
            tlv_type_str = "Application Information";
            translated_value = qmi_message_uim_change_provisioning_session_input_application_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_INPUT_TLV_SESSION_CHANGE:
            tlv_type_str = "Session Change";
            translated_value = qmi_message_uim_change_provisioning_session_input_session_change_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_OUTPUT_TLV_RESULT:
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
message_change_provisioning_session_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Change Provisioning Session\" (0x0038)\n",
                            line_prefix);

    {
        struct message_change_provisioning_session_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_change_provisioning_session_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimChangeProvisioningSessionOutput *
qmi_message_uim_change_provisioning_session_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimChangeProvisioningSessionOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION);

    self = g_slice_new0 (QmiMessageUimChangeProvisioningSessionOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_change_provisioning_session_output_unref (self);
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
                qmi_message_uim_change_provisioning_session_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Depersonalization */


/* --- Input -- */

struct _QmiMessageUimDepersonalizationInput {
    volatile gint ref_count;

    /* Slot */
    gboolean arg_slot_set;
    guint8 arg_slot;

    /* Info */
    gboolean arg_info_set;
    guint8 arg_info_feature;
    guint8 arg_info_operation;
    gchar *arg_info_control_key;
};

#define QMI_MESSAGE_UIM_DEPERSONALIZATION_INPUT_TLV_SLOT 0x10
#define QMI_MESSAGE_UIM_DEPERSONALIZATION_INPUT_TLV_INFO 0x01

gboolean
qmi_message_uim_depersonalization_input_get_slot (
    QmiMessageUimDepersonalizationInput *self,
    guint8 *value_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_slot_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Slot' was not found in the message");
        return FALSE;
    }

    if (value_slot)
        *value_slot = self->arg_slot;

    return TRUE;
}

gboolean
qmi_message_uim_depersonalization_input_set_slot (
    QmiMessageUimDepersonalizationInput *self,
    guint8 value_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_slot = value_slot;
    self->arg_slot_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_depersonalization_input_get_info (
    QmiMessageUimDepersonalizationInput *self,
    QmiUimCardApplicationPersonalizationFeature *value_info_feature,
    QmiUimDepersonalizationOperation *value_info_operation,
    const gchar **value_info_control_key,
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

    if (value_info_feature)
        *value_info_feature = (QmiUimCardApplicationPersonalizationFeature)(self->arg_info_feature);
    if (value_info_operation)
        *value_info_operation = (QmiUimDepersonalizationOperation)(self->arg_info_operation);
    if (value_info_control_key)
        *value_info_control_key = self->arg_info_control_key;

    return TRUE;
}

gboolean
qmi_message_uim_depersonalization_input_set_info (
    QmiMessageUimDepersonalizationInput *self,
    QmiUimCardApplicationPersonalizationFeature value_info_feature,
    QmiUimDepersonalizationOperation value_info_operation,
    const gchar *value_info_control_key,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_info_feature = (guint8)(value_info_feature);
    self->arg_info_operation = (guint8)(value_info_operation);
    g_free (self->arg_info_control_key);
    self->arg_info_control_key = g_strdup (value_info_control_key ? value_info_control_key : "");
    self->arg_info_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_depersonalization_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimDepersonalizationInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_depersonalization_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_depersonalization_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimDepersonalizationInput *
qmi_message_uim_depersonalization_input_ref (QmiMessageUimDepersonalizationInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_depersonalization_input_unref (QmiMessageUimDepersonalizationInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_info_control_key, (GDestroyNotify)g_free);
        g_slice_free (QmiMessageUimDepersonalizationInput, self);
    }
}

QmiMessageUimDepersonalizationInput *
qmi_message_uim_depersonalization_input_new (void)
{
    QmiMessageUimDepersonalizationInput *self;

    self = g_slice_new0 (QmiMessageUimDepersonalizationInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_depersonalization_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimDepersonalizationInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_DEPERSONALIZATION);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Depersonalization' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Slot' TLV */
    if (input->arg_slot_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_DEPERSONALIZATION_INPUT_TLV_SLOT, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Slot': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_slot, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Slot': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Slot': ");
            return NULL;
        }
    }

    /* Try to add the 'Info' TLV */
    if (input->arg_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_DEPERSONALIZATION_INPUT_TLV_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Info': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_info_feature;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Info': ");
                return NULL;
            }
        }
        {
            guint8 tmp;

            tmp = (guint8) input->arg_info_operation;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Info': ");
                return NULL;
            }
        }
        if (!qmi_message_tlv_write_string (self, 1, input->arg_info_control_key, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'Info': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Info': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Info' in message 'Depersonalization'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimDepersonalizationOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Retries Remaining */
    gboolean arg_retries_remaining_set;
    guint8 arg_retries_remaining_verify_left;
    guint8 arg_retries_remaining_unblock_left;
};

#define QMI_MESSAGE_UIM_DEPERSONALIZATION_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_DEPERSONALIZATION_OUTPUT_TLV_RETRIES_REMAINING 0x10

gboolean
qmi_message_uim_depersonalization_output_get_result (
    QmiMessageUimDepersonalizationOutput *self,
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
qmi_message_uim_depersonalization_output_get_retries_remaining (
    QmiMessageUimDepersonalizationOutput *self,
    guint8 *value_retries_remaining_verify_left,
    guint8 *value_retries_remaining_unblock_left,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_retries_remaining_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Retries Remaining' was not found in the message");
        return FALSE;
    }

    if (value_retries_remaining_verify_left)
        *value_retries_remaining_verify_left = self->arg_retries_remaining_verify_left;
    if (value_retries_remaining_unblock_left)
        *value_retries_remaining_unblock_left = self->arg_retries_remaining_unblock_left;

    return TRUE;
}

GType
qmi_message_uim_depersonalization_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimDepersonalizationOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_depersonalization_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_depersonalization_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimDepersonalizationOutput *
qmi_message_uim_depersonalization_output_ref (QmiMessageUimDepersonalizationOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_depersonalization_output_unref (QmiMessageUimDepersonalizationOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimDepersonalizationOutput, self);
    }
}

static gchar *
qmi_message_uim_depersonalization_input_slot_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_DEPERSONALIZATION_INPUT_TLV_SLOT, NULL, NULL)) == 0)
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
qmi_message_uim_depersonalization_input_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_DEPERSONALIZATION_INPUT_TLV_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " feature = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_card_application_personalization_feature_get_string ((QmiUimCardApplicationPersonalizationFeature)tmp));
#elif defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_card_application_personalization_feature_build_string_from_mask ((QmiUimCardApplicationPersonalizationFeature)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimCardApplicationPersonalizationFeature
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " operation = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_DEPERSONALIZATION_OPERATION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_depersonalization_operation_get_string ((QmiUimDepersonalizationOperation)tmp));
#elif defined  __QMI_UIM_DEPERSONALIZATION_OPERATION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_depersonalization_operation_build_string_from_mask ((QmiUimDepersonalizationOperation)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimDepersonalizationOperation
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " control_key = '");

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
qmi_message_uim_depersonalization_output_retries_remaining_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_DEPERSONALIZATION_OUTPUT_TLV_RETRIES_REMAINING, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " verify_left = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " unblock_left = '");

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

struct message_depersonalization_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_depersonalization_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_depersonalization_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_DEPERSONALIZATION_INPUT_TLV_SLOT:
            tlv_type_str = "Slot";
            translated_value = qmi_message_uim_depersonalization_input_slot_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_DEPERSONALIZATION_INPUT_TLV_INFO:
            tlv_type_str = "Info";
            translated_value = qmi_message_uim_depersonalization_input_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_DEPERSONALIZATION_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_DEPERSONALIZATION_OUTPUT_TLV_RETRIES_REMAINING:
            tlv_type_str = "Retries Remaining";
            translated_value = qmi_message_uim_depersonalization_output_retries_remaining_get_printable (
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
message_depersonalization_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Depersonalization\" (0x0029)\n",
                            line_prefix);

    {
        struct message_depersonalization_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_depersonalization_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimDepersonalizationOutput *
qmi_message_uim_depersonalization_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimDepersonalizationOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_DEPERSONALIZATION);

    self = g_slice_new0 (QmiMessageUimDepersonalizationOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_DEPERSONALIZATION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_depersonalization_output_unref (self);
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
                qmi_message_uim_depersonalization_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* Prerequisite.... */
        if (!(self->arg_result_error_status != QMI_STATUS_SUCCESS))
            break;

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_DEPERSONALIZATION_OUTPUT_TLV_RETRIES_REMAINING, NULL, NULL)) == 0) {
                goto qmi_message_uim_depersonalization_output_retries_remaining_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_retries_remaining_verify_left), NULL))
                goto qmi_message_uim_depersonalization_output_retries_remaining_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_retries_remaining_unblock_left), NULL))
                goto qmi_message_uim_depersonalization_output_retries_remaining_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Retries Remaining' TLV", offset);
            }

            self->arg_retries_remaining_set = TRUE;

qmi_message_uim_depersonalization_output_retries_remaining_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get Configuration */


/* --- Input -- */

struct _QmiMessageUimGetConfigurationInput {
    volatile gint ref_count;

    /* Configuration Mask */
    gboolean arg_configuration_mask_set;
    guint32 arg_configuration_mask;
};

#define QMI_MESSAGE_UIM_GET_CONFIGURATION_INPUT_TLV_CONFIGURATION_MASK 0x10

gboolean
qmi_message_uim_get_configuration_input_get_configuration_mask (
    QmiMessageUimGetConfigurationInput *self,
    QmiUimConfiguration *value_configuration_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_configuration_mask_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Configuration Mask' was not found in the message");
        return FALSE;
    }

    if (value_configuration_mask)
        *value_configuration_mask = (QmiUimConfiguration)(self->arg_configuration_mask);

    return TRUE;
}

gboolean
qmi_message_uim_get_configuration_input_set_configuration_mask (
    QmiMessageUimGetConfigurationInput *self,
    QmiUimConfiguration value_configuration_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_configuration_mask = (guint32)(value_configuration_mask);
    self->arg_configuration_mask_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_get_configuration_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimGetConfigurationInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_get_configuration_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_get_configuration_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimGetConfigurationInput *
qmi_message_uim_get_configuration_input_ref (QmiMessageUimGetConfigurationInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_get_configuration_input_unref (QmiMessageUimGetConfigurationInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimGetConfigurationInput, self);
    }
}

QmiMessageUimGetConfigurationInput *
qmi_message_uim_get_configuration_input_new (void)
{
    QmiMessageUimGetConfigurationInput *self;

    self = g_slice_new0 (QmiMessageUimGetConfigurationInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_get_configuration_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimGetConfigurationInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_GET_CONFIGURATION);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Configuration Mask' TLV */
    if (input->arg_configuration_mask_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_GET_CONFIGURATION_INPUT_TLV_CONFIGURATION_MASK, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Configuration Mask': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_configuration_mask;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Configuration Mask': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Configuration Mask': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

static void
__qmi_message_uim_get_configuration_output_personalization_status_element_free (QmiMessageUimGetConfigurationOutputPersonalizationStatusElement *value)
{
    g_slice_free (QmiMessageUimGetConfigurationOutputPersonalizationStatusElement, value);
}

static QmiMessageUimGetConfigurationOutputPersonalizationStatusElement *
__qmi_message_uim_get_configuration_output_personalization_status_element_new (void)
{
    return g_slice_new0 (QmiMessageUimGetConfigurationOutputPersonalizationStatusElement);
}

static QmiMessageUimGetConfigurationOutputPersonalizationStatusElement *
__qmi_message_uim_get_configuration_output_personalization_status_element_copy (const QmiMessageUimGetConfigurationOutputPersonalizationStatusElement *value)
{
    QmiMessageUimGetConfigurationOutputPersonalizationStatusElement *copy;

    copy = __qmi_message_uim_get_configuration_output_personalization_status_element_new ();
    copy->feature = value->feature;
    copy->verify_left = value->verify_left;
    copy->unblock_left = value->unblock_left;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageUimGetConfigurationOutputPersonalizationStatusElement, qmi_message_uim_get_configuration_output_personalization_status_element, (GBoxedCopyFunc)__qmi_message_uim_get_configuration_output_personalization_status_element_copy, (GBoxedFreeFunc)__qmi_message_uim_get_configuration_output_personalization_status_element_free)

static void
__qmi_message_uim_get_configuration_output_personalization_status_other_element_clear (QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement *value)
{
    g_clear_pointer (&value->slot, (GDestroyNotify)g_array_unref);
}

static void
__qmi_message_uim_get_configuration_output_personalization_status_other_element_slot_element_free (QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement *value)
{
    g_slice_free (QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement, value);
}

static QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement *
__qmi_message_uim_get_configuration_output_personalization_status_other_element_slot_element_new (void)
{
    return g_slice_new0 (QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement);
}

static QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement *
__qmi_message_uim_get_configuration_output_personalization_status_other_element_slot_element_copy (const QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement *value)
{
    QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement *copy;

    copy = __qmi_message_uim_get_configuration_output_personalization_status_other_element_slot_element_new ();
    copy->feature = value->feature;
    copy->verify_left = value->verify_left;
    copy->unblock_left = value->unblock_left;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement, qmi_message_uim_get_configuration_output_personalization_status_other_element_slot_element, (GBoxedCopyFunc)__qmi_message_uim_get_configuration_output_personalization_status_other_element_slot_element_copy, (GBoxedFreeFunc)__qmi_message_uim_get_configuration_output_personalization_status_other_element_slot_element_free)

static void
__qmi_message_uim_get_configuration_output_personalization_status_other_element_gir_free (QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir *value)
{
    g_clear_pointer (&value->slot, (GDestroyNotify)g_ptr_array_unref);
    g_slice_free (QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir, value);
}

static QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir *
__qmi_message_uim_get_configuration_output_personalization_status_other_element_gir_new (void)
{
    return g_slice_new0 (QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir);
}

static QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir *
__qmi_message_uim_get_configuration_output_personalization_status_other_element_gir_copy (const QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir *value)
{
    QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir *copy;

    copy = __qmi_message_uim_get_configuration_output_personalization_status_other_element_gir_new ();
    copy->slot = g_ptr_array_ref (value->slot);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir, qmi_message_uim_get_configuration_output_personalization_status_other_element_gir, (GBoxedCopyFunc)__qmi_message_uim_get_configuration_output_personalization_status_other_element_gir_copy, (GBoxedFreeFunc)__qmi_message_uim_get_configuration_output_personalization_status_other_element_gir_free)

struct _QmiMessageUimGetConfigurationOutput {
    volatile gint ref_count;

    gpointer compat_context;
    GDestroyNotify compat_context_free;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Automatic Selection */
    gboolean arg_automatic_selection_set;
    guint8 arg_automatic_selection;

    /* Personalization Status */
    gboolean arg_personalization_status_set;
    GArray *arg_personalization_status;
    GPtrArray *arg_personalization_status_ptr;

    /* Halt Subscription */
    gboolean arg_halt_subscription_set;
    guint8 arg_halt_subscription;

    /* Personalization Status Other */
    gboolean arg_personalization_status_other_set;
    GArray *arg_personalization_status_other;
    GPtrArray *arg_personalization_status_other_ptr;
};

#define QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_AUTOMATIC_SELECTION 0x10
#define QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_PERSONALIZATION_STATUS 0x11
#define QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_HALT_SUBSCRIPTION 0x12
#define QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_PERSONALIZATION_STATUS_OTHER 0x13

gboolean
qmi_message_uim_get_configuration_output_get_result (
    QmiMessageUimGetConfigurationOutput *self,
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
qmi_message_uim_get_configuration_output_get_automatic_selection (
    QmiMessageUimGetConfigurationOutput *self,
    gboolean *value_automatic_selection,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_automatic_selection_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Automatic Selection' was not found in the message");
        return FALSE;
    }

    if (value_automatic_selection)
        *value_automatic_selection = (gboolean)(self->arg_automatic_selection);

    return TRUE;
}

gboolean
qmi_message_uim_get_configuration_output_get_personalization_status (
    QmiMessageUimGetConfigurationOutput *self,
    GArray **value_personalization_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_personalization_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Personalization Status' was not found in the message");
        return FALSE;
    }

    if (value_personalization_status)
        *value_personalization_status = self->arg_personalization_status;

    return TRUE;
}

gboolean
qmi_message_uim_get_configuration_output_get_personalization_status_gir (
    QmiMessageUimGetConfigurationOutput *self,
    GPtrArray **value_personalization_status_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_personalization_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Personalization Status' was not found in the message");
        return FALSE;
    }

    if (value_personalization_status_ptr) {
        if (!self->arg_personalization_status_ptr) {
            {
                guint personalization_status_i;

                self->arg_personalization_status_ptr = g_ptr_array_new_full (self->arg_personalization_status->len, (GDestroyNotify)__qmi_message_uim_get_configuration_output_personalization_status_element_free);
                for (personalization_status_i = 0; personalization_status_i < self->arg_personalization_status->len; personalization_status_i++) {
                    QmiMessageUimGetConfigurationOutputPersonalizationStatusElement *personalization_status_aux_from;
                    QmiMessageUimGetConfigurationOutputPersonalizationStatusElement *personalization_status_aux_to;

                    personalization_status_aux_from = &g_array_index (self->arg_personalization_status, QmiMessageUimGetConfigurationOutputPersonalizationStatusElement, personalization_status_i);

                    personalization_status_aux_to = __qmi_message_uim_get_configuration_output_personalization_status_element_new ();
                    personalization_status_aux_to->feature = (*personalization_status_aux_from).feature;
                    personalization_status_aux_to->verify_left = (*personalization_status_aux_from).verify_left;
                    personalization_status_aux_to->unblock_left = (*personalization_status_aux_from).unblock_left;

                    g_ptr_array_add (self->arg_personalization_status_ptr, personalization_status_aux_to);
                }
            }
        }
        *value_personalization_status_ptr = self->arg_personalization_status_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_uim_get_configuration_output_get_halt_subscription (
    QmiMessageUimGetConfigurationOutput *self,
    gboolean *value_halt_subscription,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_halt_subscription_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Halt Subscription' was not found in the message");
        return FALSE;
    }

    if (value_halt_subscription)
        *value_halt_subscription = (gboolean)(self->arg_halt_subscription);

    return TRUE;
}

gboolean
qmi_message_uim_get_configuration_output_get_personalization_status_other (
    QmiMessageUimGetConfigurationOutput *self,
    GArray **value_personalization_status_other,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_personalization_status_other_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Personalization Status Other' was not found in the message");
        return FALSE;
    }

    if (value_personalization_status_other)
        *value_personalization_status_other = self->arg_personalization_status_other;

    return TRUE;
}

gboolean
qmi_message_uim_get_configuration_output_get_personalization_status_other_gir (
    QmiMessageUimGetConfigurationOutput *self,
    GPtrArray **value_personalization_status_other_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_personalization_status_other_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Personalization Status Other' was not found in the message");
        return FALSE;
    }

    if (value_personalization_status_other_ptr) {
        if (!self->arg_personalization_status_other_ptr) {
            {
                guint personalization_status_other_i;

                self->arg_personalization_status_other_ptr = g_ptr_array_new_full (self->arg_personalization_status_other->len, (GDestroyNotify)__qmi_message_uim_get_configuration_output_personalization_status_other_element_gir_free);
                for (personalization_status_other_i = 0; personalization_status_other_i < self->arg_personalization_status_other->len; personalization_status_other_i++) {
                    QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement *personalization_status_other_aux_from;
                    QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementGir *personalization_status_other_aux_to;

                    personalization_status_other_aux_from = &g_array_index (self->arg_personalization_status_other, QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement, personalization_status_other_i);

                    personalization_status_other_aux_to = __qmi_message_uim_get_configuration_output_personalization_status_other_element_gir_new ();
                    {
                        guint slot_i;

                        personalization_status_other_aux_to->slot = g_ptr_array_new_full ((*personalization_status_other_aux_from).slot->len, (GDestroyNotify)__qmi_message_uim_get_configuration_output_personalization_status_other_element_slot_element_free);
                        for (slot_i = 0; slot_i < (*personalization_status_other_aux_from).slot->len; slot_i++) {
                            QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement *slot_aux_from;
                            QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement *slot_aux_to;

                            slot_aux_from = &g_array_index ((*personalization_status_other_aux_from).slot, QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement, slot_i);

                            slot_aux_to = __qmi_message_uim_get_configuration_output_personalization_status_other_element_slot_element_new ();
                            slot_aux_to->feature = (*slot_aux_from).feature;
                            slot_aux_to->verify_left = (*slot_aux_from).verify_left;
                            slot_aux_to->unblock_left = (*slot_aux_from).unblock_left;

                            g_ptr_array_add (personalization_status_other_aux_to->slot, slot_aux_to);
                        }
                    }

                    g_ptr_array_add (self->arg_personalization_status_other_ptr, personalization_status_other_aux_to);
                }
            }
        }
        *value_personalization_status_other_ptr = self->arg_personalization_status_other_ptr;
    }
    return TRUE;
}

GType
qmi_message_uim_get_configuration_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimGetConfigurationOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_get_configuration_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_get_configuration_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimGetConfigurationOutput *
qmi_message_uim_get_configuration_output_ref (QmiMessageUimGetConfigurationOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_get_configuration_output_unref (QmiMessageUimGetConfigurationOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        if (self->compat_context && self->compat_context_free)
            self->compat_context_free (self->compat_context);
        g_clear_pointer (&self->arg_personalization_status, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_personalization_status, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_personalization_status_other, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_personalization_status_other, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageUimGetConfigurationOutput, self);
    }
}
gpointer
qmi_message_uim_get_configuration_output_get_compat_context (QmiMessageUimGetConfigurationOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    return self->compat_context;
}

void
qmi_message_uim_get_configuration_output_set_compat_context (
    QmiMessageUimGetConfigurationOutput *self,
    gpointer compat_context,
    GDestroyNotify compat_context_free)
{
    g_return_if_fail (self != NULL);

    if (self->compat_context && self->compat_context_free)
        self->compat_context_free (self->compat_context);

    self->compat_context = compat_context;
    self->compat_context_free = compat_context_free;
}

static gchar *
qmi_message_uim_get_configuration_input_configuration_mask_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CONFIGURATION_INPUT_TLV_CONFIGURATION_MASK, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_CONFIGURATION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_configuration_get_string ((QmiUimConfiguration)tmp));
#elif defined  __QMI_UIM_CONFIGURATION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_configuration_build_string_from_mask ((QmiUimConfiguration)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimConfiguration
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
qmi_message_uim_get_configuration_output_automatic_selection_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_AUTOMATIC_SELECTION, NULL, NULL)) == 0)
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
qmi_message_uim_get_configuration_output_personalization_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_PERSONALIZATION_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint personalization_status_i;
        guint8 personalization_status_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(personalization_status_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (personalization_status_i = 0; personalization_status_i < personalization_status_n_items; personalization_status_i++) {
            g_string_append_printf (printable, " [%u] = '", personalization_status_i);
            g_string_append (printable, "[");
            g_string_append (printable, " feature = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_uim_card_application_personalization_feature_get_string ((QmiUimCardApplicationPersonalizationFeature)tmp));
#elif defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_uim_card_application_personalization_feature_build_string_from_mask ((QmiUimCardApplicationPersonalizationFeature)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiUimCardApplicationPersonalizationFeature
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " verify_left = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " unblock_left = '");

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
qmi_message_uim_get_configuration_output_halt_subscription_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_HALT_SUBSCRIPTION, NULL, NULL)) == 0)
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
qmi_message_uim_get_configuration_output_personalization_status_other_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_PERSONALIZATION_STATUS_OTHER, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint personalization_status_other_i;
        guint8 personalization_status_other_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(personalization_status_other_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (personalization_status_other_i = 0; personalization_status_other_i < personalization_status_other_n_items; personalization_status_other_i++) {
            g_string_append_printf (printable, " [%u] = '", personalization_status_other_i);
            g_string_append (printable, "[");
            g_string_append (printable, " slot = '");
            {
                guint slot_i;
                guint8 slot_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(slot_n_items), &error))
                    goto out;

                g_string_append (printable, "{");

                for (slot_i = 0; slot_i < slot_n_items; slot_i++) {
                    g_string_append_printf (printable, " [%u] = '", slot_i);
                    g_string_append (printable, "[");
                    g_string_append (printable, " feature = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
#if defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_IS_ENUM__
                            g_string_append_printf (printable, "%s", qmi_uim_card_application_personalization_feature_get_string ((QmiUimCardApplicationPersonalizationFeature)tmp));
#elif defined  __QMI_UIM_CARD_APPLICATION_PERSONALIZATION_FEATURE_IS_FLAGS__
                            {
                                g_autofree gchar *flags_str = NULL;

                                flags_str = qmi_uim_card_application_personalization_feature_build_string_from_mask ((QmiUimCardApplicationPersonalizationFeature)tmp);
                                g_string_append_printf (printable, "%s", flags_str);
                            }
#else
# error unexpected public format: QmiUimCardApplicationPersonalizationFeature
#endif
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " verify_left = '");

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                            goto out;
                        {
                            g_string_append_printf (printable, "%u", (guint)tmp);
                        }
                    }
                    g_string_append (printable, "'");
                    g_string_append (printable, " unblock_left = '");

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

struct message_get_configuration_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_configuration_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_configuration_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_GET_CONFIGURATION_INPUT_TLV_CONFIGURATION_MASK:
            tlv_type_str = "Configuration Mask";
            translated_value = qmi_message_uim_get_configuration_input_configuration_mask_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_AUTOMATIC_SELECTION:
            tlv_type_str = "Automatic Selection";
            translated_value = qmi_message_uim_get_configuration_output_automatic_selection_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_PERSONALIZATION_STATUS:
            tlv_type_str = "Personalization Status";
            translated_value = qmi_message_uim_get_configuration_output_personalization_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_HALT_SUBSCRIPTION:
            tlv_type_str = "Halt Subscription";
            translated_value = qmi_message_uim_get_configuration_output_halt_subscription_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_PERSONALIZATION_STATUS_OTHER:
            tlv_type_str = "Personalization Status Other";
            translated_value = qmi_message_uim_get_configuration_output_personalization_status_other_get_printable (
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
message_get_configuration_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Configuration\" (0x003A)\n",
                            line_prefix);

    {
        struct message_get_configuration_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_configuration_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimGetConfigurationOutput *
qmi_message_uim_get_configuration_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimGetConfigurationOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_GET_CONFIGURATION);

    self = g_slice_new0 (QmiMessageUimGetConfigurationOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_get_configuration_output_unref (self);
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
                qmi_message_uim_get_configuration_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_AUTOMATIC_SELECTION, NULL, NULL)) == 0) {
                goto qmi_message_uim_get_configuration_output_automatic_selection_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_uim_get_configuration_output_automatic_selection_out;
                self->arg_automatic_selection = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Automatic Selection' TLV", offset);
            }

            self->arg_automatic_selection_set = TRUE;

qmi_message_uim_get_configuration_output_automatic_selection_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_PERSONALIZATION_STATUS, NULL, NULL)) == 0) {
                goto qmi_message_uim_get_configuration_output_personalization_status_out;
            }
            {
                guint personalization_status_i;
                guint8 personalization_status_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(personalization_status_n_items), NULL))
                    goto qmi_message_uim_get_configuration_output_personalization_status_out;

                self->arg_personalization_status = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessageUimGetConfigurationOutputPersonalizationStatusElement),
                    (guint)personalization_status_n_items);

                for (personalization_status_i = 0; personalization_status_i < personalization_status_n_items; personalization_status_i++) {
                    QmiMessageUimGetConfigurationOutputPersonalizationStatusElement personalization_status_aux;

                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_message_uim_get_configuration_output_personalization_status_out;
                        personalization_status_aux.feature = (QmiUimCardApplicationPersonalizationFeature)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(personalization_status_aux.verify_left), NULL))
                        goto qmi_message_uim_get_configuration_output_personalization_status_out;
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(personalization_status_aux.unblock_left), NULL))
                        goto qmi_message_uim_get_configuration_output_personalization_status_out;
                    g_array_insert_val (self->arg_personalization_status, personalization_status_i, personalization_status_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Personalization Status' TLV", offset);
            }

            self->arg_personalization_status_set = TRUE;

qmi_message_uim_get_configuration_output_personalization_status_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_HALT_SUBSCRIPTION, NULL, NULL)) == 0) {
                goto qmi_message_uim_get_configuration_output_halt_subscription_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_message_uim_get_configuration_output_halt_subscription_out;
                self->arg_halt_subscription = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Halt Subscription' TLV", offset);
            }

            self->arg_halt_subscription_set = TRUE;

qmi_message_uim_get_configuration_output_halt_subscription_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_CONFIGURATION_OUTPUT_TLV_PERSONALIZATION_STATUS_OTHER, NULL, NULL)) == 0) {
                goto qmi_message_uim_get_configuration_output_personalization_status_other_out;
            }
            {
                guint personalization_status_other_i;
                guint8 personalization_status_other_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(personalization_status_other_n_items), NULL))
                    goto qmi_message_uim_get_configuration_output_personalization_status_other_out;

                self->arg_personalization_status_other = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement),
                    (guint)personalization_status_other_n_items);

                g_array_set_clear_func (self->arg_personalization_status_other, (GDestroyNotify)__qmi_message_uim_get_configuration_output_personalization_status_other_element_clear);

                for (personalization_status_other_i = 0; personalization_status_other_i < personalization_status_other_n_items; personalization_status_other_i++) {
                    QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElement personalization_status_other_aux;

                    {
                        guint slot_i;
                        guint8 slot_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(slot_n_items), NULL))
                            goto qmi_message_uim_get_configuration_output_personalization_status_other_out;

                        personalization_status_other_aux.slot = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement),
                            (guint)slot_n_items);

                        for (slot_i = 0; slot_i < slot_n_items; slot_i++) {
                            QmiMessageUimGetConfigurationOutputPersonalizationStatusOtherElementSlotElement slot_aux;

                            {
                                guint8 tmp;

                                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                                    goto qmi_message_uim_get_configuration_output_personalization_status_other_out;
                                slot_aux.feature = (QmiUimCardApplicationPersonalizationFeature)tmp;
                            }
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(slot_aux.verify_left), NULL))
                                goto qmi_message_uim_get_configuration_output_personalization_status_other_out;
                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(slot_aux.unblock_left), NULL))
                                goto qmi_message_uim_get_configuration_output_personalization_status_other_out;
                            g_array_insert_val (personalization_status_other_aux.slot, slot_i, slot_aux);
                        }
                    }
                    g_array_insert_val (self->arg_personalization_status_other, personalization_status_other_i, personalization_status_other_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Personalization Status Other' TLV", offset);
            }

            self->arg_personalization_status_other_set = TRUE;

qmi_message_uim_get_configuration_output_personalization_status_other_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Send APDU */


/* --- Input -- */

struct _QmiMessageUimSendApduInput {
    volatile gint ref_count;

    /* Procedure bytes */
    gboolean arg_procedure_bytes_set;
    guint8 arg_procedure_bytes;

    /* Channel ID */
    gboolean arg_channel_id_set;
    guint8 arg_channel_id;

    /* APDU */
    gboolean arg_apdu_set;
    GArray *arg_apdu;

    /* Slot */
    gboolean arg_slot_set;
    guint8 arg_slot;
};

#define QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_PROCEDURE_BYTES 0x11
#define QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_CHANNEL_ID 0x10
#define QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_APDU 0x02
#define QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_SLOT 0x01

gboolean
qmi_message_uim_send_apdu_input_get_procedure_bytes (
    QmiMessageUimSendApduInput *self,
    guint8 *value_procedure_bytes,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_procedure_bytes_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Procedure bytes' was not found in the message");
        return FALSE;
    }

    if (value_procedure_bytes)
        *value_procedure_bytes = self->arg_procedure_bytes;

    return TRUE;
}

gboolean
qmi_message_uim_send_apdu_input_set_procedure_bytes (
    QmiMessageUimSendApduInput *self,
    guint8 value_procedure_bytes,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_procedure_bytes = value_procedure_bytes;
    self->arg_procedure_bytes_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_send_apdu_input_get_channel_id (
    QmiMessageUimSendApduInput *self,
    guint8 *value_channel_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_channel_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Channel ID' was not found in the message");
        return FALSE;
    }

    if (value_channel_id)
        *value_channel_id = self->arg_channel_id;

    return TRUE;
}

gboolean
qmi_message_uim_send_apdu_input_set_channel_id (
    QmiMessageUimSendApduInput *self,
    guint8 value_channel_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_channel_id = value_channel_id;
    self->arg_channel_id_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_send_apdu_input_get_apdu (
    QmiMessageUimSendApduInput *self,
    GArray **value_apdu,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_apdu_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'APDU' was not found in the message");
        return FALSE;
    }

    if (value_apdu)
        *value_apdu = self->arg_apdu;

    return TRUE;
}

gboolean
qmi_message_uim_send_apdu_input_set_apdu (
    QmiMessageUimSendApduInput *self,
    GArray *value_apdu,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_apdu, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_apdu, (GDestroyNotify)g_ptr_array_unref);
    self->arg_apdu = g_array_ref (value_apdu);
    self->arg_apdu_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_send_apdu_input_get_slot (
    QmiMessageUimSendApduInput *self,
    guint8 *value_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_slot_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Slot' was not found in the message");
        return FALSE;
    }

    if (value_slot)
        *value_slot = self->arg_slot;

    return TRUE;
}

gboolean
qmi_message_uim_send_apdu_input_set_slot (
    QmiMessageUimSendApduInput *self,
    guint8 value_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_slot = value_slot;
    self->arg_slot_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_send_apdu_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimSendApduInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_send_apdu_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_send_apdu_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimSendApduInput *
qmi_message_uim_send_apdu_input_ref (QmiMessageUimSendApduInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_send_apdu_input_unref (QmiMessageUimSendApduInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_apdu, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimSendApduInput, self);
    }
}

QmiMessageUimSendApduInput *
qmi_message_uim_send_apdu_input_new (void)
{
    QmiMessageUimSendApduInput *self;

    self = g_slice_new0 (QmiMessageUimSendApduInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_send_apdu_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimSendApduInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_SEND_APDU);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Send APDU' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Procedure bytes' TLV */
    if (input->arg_procedure_bytes_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_PROCEDURE_BYTES, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Procedure bytes': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_procedure_bytes, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Procedure bytes': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Procedure bytes': ");
            return NULL;
        }
    }

    /* Try to add the 'Channel ID' TLV */
    if (input->arg_channel_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_CHANNEL_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Channel ID': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_channel_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Channel ID': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Channel ID': ");
            return NULL;
        }
    }

    /* Try to add the 'APDU' TLV */
    if (input->arg_apdu_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_APDU, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'APDU': ");
            return NULL;
        }

        {
            guint apdu_i;
            guint16 apdu_n_items;

            /* Write the number of items in the array first */
            apdu_n_items = (guint16) input->arg_apdu->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, apdu_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'APDU': ");
                return NULL;
            }

            for (apdu_i = 0; apdu_i < input->arg_apdu->len; apdu_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_apdu, guint8,apdu_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'APDU': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'APDU': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'APDU' in message 'Send APDU'");
        return NULL;
    }

    /* Try to add the 'Slot' TLV */
    if (input->arg_slot_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_SLOT, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Slot': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_slot, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Slot': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Slot': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Slot' in message 'Send APDU'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimSendApduOutput {
    volatile gint ref_count;

    /* APDU Response */
    gboolean arg_apdu_response_set;
    GArray *arg_apdu_response;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_SEND_APDU_OUTPUT_TLV_APDU_RESPONSE 0x10
#define QMI_MESSAGE_UIM_SEND_APDU_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_send_apdu_output_get_apdu_response (
    QmiMessageUimSendApduOutput *self,
    GArray **value_apdu_response,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_apdu_response_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'APDU Response' was not found in the message");
        return FALSE;
    }

    if (value_apdu_response)
        *value_apdu_response = self->arg_apdu_response;

    return TRUE;
}

gboolean
qmi_message_uim_send_apdu_output_get_result (
    QmiMessageUimSendApduOutput *self,
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
qmi_message_uim_send_apdu_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimSendApduOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_send_apdu_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_send_apdu_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimSendApduOutput *
qmi_message_uim_send_apdu_output_ref (QmiMessageUimSendApduOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_send_apdu_output_unref (QmiMessageUimSendApduOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_apdu_response, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimSendApduOutput, self);
    }
}

static gchar *
qmi_message_uim_send_apdu_input_procedure_bytes_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_PROCEDURE_BYTES, NULL, NULL)) == 0)
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
qmi_message_uim_send_apdu_input_channel_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_CHANNEL_ID, NULL, NULL)) == 0)
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
qmi_message_uim_send_apdu_input_apdu_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_APDU, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint apdu_i;
        guint16 apdu_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(apdu_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (apdu_i = 0; apdu_i < apdu_n_items; apdu_i++) {
            g_string_append_printf (printable, " [%u] = '", apdu_i);

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
qmi_message_uim_send_apdu_input_slot_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_SLOT, NULL, NULL)) == 0)
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
qmi_message_uim_send_apdu_output_apdu_response_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SEND_APDU_OUTPUT_TLV_APDU_RESPONSE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint apdu_response_i;
        guint16 apdu_response_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(apdu_response_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (apdu_response_i = 0; apdu_response_i < apdu_response_n_items; apdu_response_i++) {
            g_string_append_printf (printable, " [%u] = '", apdu_response_i);

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

struct message_send_apdu_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_send_apdu_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_send_apdu_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_PROCEDURE_BYTES:
            tlv_type_str = "Procedure bytes";
            translated_value = qmi_message_uim_send_apdu_input_procedure_bytes_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_CHANNEL_ID:
            tlv_type_str = "Channel ID";
            translated_value = qmi_message_uim_send_apdu_input_channel_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_APDU:
            tlv_type_str = "APDU";
            translated_value = qmi_message_uim_send_apdu_input_apdu_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_SEND_APDU_INPUT_TLV_SLOT:
            tlv_type_str = "Slot";
            translated_value = qmi_message_uim_send_apdu_input_slot_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_SEND_APDU_OUTPUT_TLV_APDU_RESPONSE:
            tlv_type_str = "APDU Response";
            translated_value = qmi_message_uim_send_apdu_output_apdu_response_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_SEND_APDU_OUTPUT_TLV_RESULT:
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
message_send_apdu_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Send APDU\" (0x003B)\n",
                            line_prefix);

    {
        struct message_send_apdu_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_send_apdu_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimSendApduOutput *
qmi_message_uim_send_apdu_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimSendApduOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_SEND_APDU);

    self = g_slice_new0 (QmiMessageUimSendApduOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SEND_APDU_OUTPUT_TLV_APDU_RESPONSE, NULL, NULL)) == 0) {
                goto qmi_message_uim_send_apdu_output_apdu_response_out;
            }
            {
                guint apdu_response_i;
                guint16 apdu_response_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(apdu_response_n_items), NULL))
                    goto qmi_message_uim_send_apdu_output_apdu_response_out;

                self->arg_apdu_response = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)apdu_response_n_items);

                for (apdu_response_i = 0; apdu_response_i < apdu_response_n_items; apdu_response_i++) {
                    guint8 apdu_response_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(apdu_response_aux), NULL))
                        goto qmi_message_uim_send_apdu_output_apdu_response_out;
                    g_array_insert_val (self->arg_apdu_response, apdu_response_i, apdu_response_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'APDU Response' TLV", offset);
            }

            self->arg_apdu_response_set = TRUE;

qmi_message_uim_send_apdu_output_apdu_response_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SEND_APDU_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_send_apdu_output_unref (self);
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
                qmi_message_uim_send_apdu_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Logical Channel */


/* --- Input -- */

struct _QmiMessageUimLogicalChannelInput {
    volatile gint ref_count;

    /* Terminate Application */
    gboolean arg_terminate_application_set;
    guint8 arg_terminate_application;

    /* File Control Information */
    gboolean arg_file_control_information_set;
    guint8 arg_file_control_information;

    /* Channel ID */
    gboolean arg_channel_id_set;
    guint8 arg_channel_id;

    /* AID */
    gboolean arg_aid_set;
    GArray *arg_aid;

    /* Slot */
    gboolean arg_slot_set;
    guint8 arg_slot;
};

#define QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_TERMINATE_APPLICATION 0x13
#define QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_FILE_CONTROL_INFORMATION 0x12
#define QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_CHANNEL_ID 0x11
#define QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_AID 0x10
#define QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_SLOT 0x01

gboolean
qmi_message_uim_logical_channel_input_get_terminate_application (
    QmiMessageUimLogicalChannelInput *self,
    guint8 *value_terminate_application,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_terminate_application_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Terminate Application' was not found in the message");
        return FALSE;
    }

    if (value_terminate_application)
        *value_terminate_application = self->arg_terminate_application;

    return TRUE;
}

gboolean
qmi_message_uim_logical_channel_input_set_terminate_application (
    QmiMessageUimLogicalChannelInput *self,
    guint8 value_terminate_application,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_terminate_application = value_terminate_application;
    self->arg_terminate_application_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_logical_channel_input_get_file_control_information (
    QmiMessageUimLogicalChannelInput *self,
    QmiUimFileControlInformation *value_file_control_information,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_file_control_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'File Control Information' was not found in the message");
        return FALSE;
    }

    if (value_file_control_information)
        *value_file_control_information = (QmiUimFileControlInformation)(self->arg_file_control_information);

    return TRUE;
}

gboolean
qmi_message_uim_logical_channel_input_set_file_control_information (
    QmiMessageUimLogicalChannelInput *self,
    QmiUimFileControlInformation value_file_control_information,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_file_control_information = (guint8)(value_file_control_information);
    self->arg_file_control_information_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_logical_channel_input_get_channel_id (
    QmiMessageUimLogicalChannelInput *self,
    guint8 *value_channel_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_channel_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Channel ID' was not found in the message");
        return FALSE;
    }

    if (value_channel_id)
        *value_channel_id = self->arg_channel_id;

    return TRUE;
}

gboolean
qmi_message_uim_logical_channel_input_set_channel_id (
    QmiMessageUimLogicalChannelInput *self,
    guint8 value_channel_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_channel_id = value_channel_id;
    self->arg_channel_id_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_logical_channel_input_get_aid (
    QmiMessageUimLogicalChannelInput *self,
    GArray **value_aid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_aid_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'AID' was not found in the message");
        return FALSE;
    }

    if (value_aid)
        *value_aid = self->arg_aid;

    return TRUE;
}

gboolean
qmi_message_uim_logical_channel_input_set_aid (
    QmiMessageUimLogicalChannelInput *self,
    GArray *value_aid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_aid, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_aid, (GDestroyNotify)g_ptr_array_unref);
    self->arg_aid = g_array_ref (value_aid);
    self->arg_aid_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_logical_channel_input_get_slot (
    QmiMessageUimLogicalChannelInput *self,
    guint8 *value_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_slot_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Slot' was not found in the message");
        return FALSE;
    }

    if (value_slot)
        *value_slot = self->arg_slot;

    return TRUE;
}

gboolean
qmi_message_uim_logical_channel_input_set_slot (
    QmiMessageUimLogicalChannelInput *self,
    guint8 value_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_slot = value_slot;
    self->arg_slot_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_logical_channel_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimLogicalChannelInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_logical_channel_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_logical_channel_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimLogicalChannelInput *
qmi_message_uim_logical_channel_input_ref (QmiMessageUimLogicalChannelInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_logical_channel_input_unref (QmiMessageUimLogicalChannelInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_aid, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimLogicalChannelInput, self);
    }
}

QmiMessageUimLogicalChannelInput *
qmi_message_uim_logical_channel_input_new (void)
{
    QmiMessageUimLogicalChannelInput *self;

    self = g_slice_new0 (QmiMessageUimLogicalChannelInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_logical_channel_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimLogicalChannelInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_LOGICAL_CHANNEL);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Logical Channel' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Terminate Application' TLV */
    if (input->arg_terminate_application_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_TERMINATE_APPLICATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Terminate Application': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_terminate_application, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Terminate Application': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Terminate Application': ");
            return NULL;
        }
    }

    /* Try to add the 'File Control Information' TLV */
    if (input->arg_file_control_information_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_FILE_CONTROL_INFORMATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'File Control Information': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_file_control_information;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'File Control Information': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'File Control Information': ");
            return NULL;
        }
    }

    /* Try to add the 'Channel ID' TLV */
    if (input->arg_channel_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_CHANNEL_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Channel ID': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_channel_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Channel ID': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Channel ID': ");
            return NULL;
        }
    }

    /* Try to add the 'AID' TLV */
    if (input->arg_aid_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_AID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'AID': ");
            return NULL;
        }

        {
            guint aid_i;
            guint8 aid_n_items;

            /* Write the number of items in the array first */
            aid_n_items = (guint8) input->arg_aid->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, aid_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'AID': ");
                return NULL;
            }

            for (aid_i = 0; aid_i < input->arg_aid->len; aid_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_aid, guint8,aid_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'AID': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'AID': ");
            return NULL;
        }
    }

    /* Try to add the 'Slot' TLV */
    if (input->arg_slot_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_SLOT, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Slot': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_slot, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Slot': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Slot': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Slot' in message 'Logical Channel'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimLogicalChannelOutput {
    volatile gint ref_count;

    /* Card result */
    gboolean arg_card_result_set;
    guint8 arg_card_result_sw1;
    guint8 arg_card_result_sw2;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Channel ID */
    gboolean arg_channel_id_set;
    guint8 arg_channel_id;

    /* Select Response */
    gboolean arg_select_response_set;
    GArray *arg_select_response;
};

#define QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_CARD_RESULT 0x11
#define QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_CHANNEL_ID 0x10
#define QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_SELECT_RESPONSE 0x12

gboolean
qmi_message_uim_logical_channel_output_get_card_result (
    QmiMessageUimLogicalChannelOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card result' was not found in the message");
        return FALSE;
    }

    if (value_card_result_sw1)
        *value_card_result_sw1 = self->arg_card_result_sw1;
    if (value_card_result_sw2)
        *value_card_result_sw2 = self->arg_card_result_sw2;

    return TRUE;
}

gboolean
qmi_message_uim_logical_channel_output_get_result (
    QmiMessageUimLogicalChannelOutput *self,
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
qmi_message_uim_logical_channel_output_get_channel_id (
    QmiMessageUimLogicalChannelOutput *self,
    guint8 *value_channel_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_channel_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Channel ID' was not found in the message");
        return FALSE;
    }

    if (value_channel_id)
        *value_channel_id = self->arg_channel_id;

    return TRUE;
}

gboolean
qmi_message_uim_logical_channel_output_get_select_response (
    QmiMessageUimLogicalChannelOutput *self,
    GArray **value_select_response,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_select_response_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Select Response' was not found in the message");
        return FALSE;
    }

    if (value_select_response)
        *value_select_response = self->arg_select_response;

    return TRUE;
}

GType
qmi_message_uim_logical_channel_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimLogicalChannelOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_logical_channel_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_logical_channel_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimLogicalChannelOutput *
qmi_message_uim_logical_channel_output_ref (QmiMessageUimLogicalChannelOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_logical_channel_output_unref (QmiMessageUimLogicalChannelOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_select_response, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimLogicalChannelOutput, self);
    }
}

static gchar *
qmi_message_uim_logical_channel_input_terminate_application_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_TERMINATE_APPLICATION, NULL, NULL)) == 0)
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
qmi_message_uim_logical_channel_input_file_control_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_FILE_CONTROL_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_FILE_CONTROL_INFORMATION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_file_control_information_get_string ((QmiUimFileControlInformation)tmp));
#elif defined  __QMI_UIM_FILE_CONTROL_INFORMATION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_file_control_information_build_string_from_mask ((QmiUimFileControlInformation)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimFileControlInformation
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
qmi_message_uim_logical_channel_input_channel_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_CHANNEL_ID, NULL, NULL)) == 0)
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
qmi_message_uim_logical_channel_input_aid_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_AID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint aid_i;
        guint8 aid_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(aid_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (aid_i = 0; aid_i < aid_n_items; aid_i++) {
            g_string_append_printf (printable, " [%u] = '", aid_i);

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
qmi_message_uim_logical_channel_input_slot_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_SLOT, NULL, NULL)) == 0)
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
qmi_message_uim_logical_channel_output_card_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " sw1 = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " sw2 = '");

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
qmi_message_uim_logical_channel_output_channel_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_CHANNEL_ID, NULL, NULL)) == 0)
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
qmi_message_uim_logical_channel_output_select_response_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_SELECT_RESPONSE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint select_response_i;
        guint8 select_response_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(select_response_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (select_response_i = 0; select_response_i < select_response_n_items; select_response_i++) {
            g_string_append_printf (printable, " [%u] = '", select_response_i);

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

struct message_logical_channel_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_logical_channel_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_logical_channel_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_TERMINATE_APPLICATION:
            tlv_type_str = "Terminate Application";
            translated_value = qmi_message_uim_logical_channel_input_terminate_application_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_FILE_CONTROL_INFORMATION:
            tlv_type_str = "File Control Information";
            translated_value = qmi_message_uim_logical_channel_input_file_control_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_CHANNEL_ID:
            tlv_type_str = "Channel ID";
            translated_value = qmi_message_uim_logical_channel_input_channel_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_AID:
            tlv_type_str = "AID";
            translated_value = qmi_message_uim_logical_channel_input_aid_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_LOGICAL_CHANNEL_INPUT_TLV_SLOT:
            tlv_type_str = "Slot";
            translated_value = qmi_message_uim_logical_channel_input_slot_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_CARD_RESULT:
            tlv_type_str = "Card result";
            translated_value = qmi_message_uim_logical_channel_output_card_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_CHANNEL_ID:
            tlv_type_str = "Channel ID";
            translated_value = qmi_message_uim_logical_channel_output_channel_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_SELECT_RESPONSE:
            tlv_type_str = "Select Response";
            translated_value = qmi_message_uim_logical_channel_output_select_response_get_printable (
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
message_logical_channel_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Logical Channel\" (0x003F)\n",
                            line_prefix);

    {
        struct message_logical_channel_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_logical_channel_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimLogicalChannelOutput *
qmi_message_uim_logical_channel_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimLogicalChannelOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_LOGICAL_CHANNEL);

    self = g_slice_new0 (QmiMessageUimLogicalChannelOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0) {
                goto qmi_message_uim_logical_channel_output_card_result_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw1), NULL))
                goto qmi_message_uim_logical_channel_output_card_result_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw2), NULL))
                goto qmi_message_uim_logical_channel_output_card_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Card result' TLV", offset);
            }

            self->arg_card_result_set = TRUE;

qmi_message_uim_logical_channel_output_card_result_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_logical_channel_output_unref (self);
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
                qmi_message_uim_logical_channel_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_CHANNEL_ID, NULL, NULL)) == 0) {
                goto qmi_message_uim_logical_channel_output_channel_id_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_channel_id), NULL))
                goto qmi_message_uim_logical_channel_output_channel_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Channel ID' TLV", offset);
            }

            self->arg_channel_id_set = TRUE;

qmi_message_uim_logical_channel_output_channel_id_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_LOGICAL_CHANNEL_OUTPUT_TLV_SELECT_RESPONSE, NULL, NULL)) == 0) {
                goto qmi_message_uim_logical_channel_output_select_response_out;
            }
            {
                guint select_response_i;
                guint8 select_response_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(select_response_n_items), NULL))
                    goto qmi_message_uim_logical_channel_output_select_response_out;

                self->arg_select_response = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)select_response_n_items);

                for (select_response_i = 0; select_response_i < select_response_n_items; select_response_i++) {
                    guint8 select_response_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(select_response_aux), NULL))
                        goto qmi_message_uim_logical_channel_output_select_response_out;
                    g_array_insert_val (self->arg_select_response, select_response_i, select_response_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Select Response' TLV", offset);
            }

            self->arg_select_response_set = TRUE;

qmi_message_uim_logical_channel_output_select_response_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Open Logical Channel */


/* --- Input -- */

struct _QmiMessageUimOpenLogicalChannelInput {
    volatile gint ref_count;

    /* File Control Information */
    gboolean arg_file_control_information_set;
    guint8 arg_file_control_information;

    /* AID */
    gboolean arg_aid_set;
    GArray *arg_aid;

    /* Slot */
    gboolean arg_slot_set;
    guint8 arg_slot;
};

#define QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_INPUT_TLV_FILE_CONTROL_INFORMATION 0x11
#define QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_INPUT_TLV_AID 0x10
#define QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_INPUT_TLV_SLOT 0x01

gboolean
qmi_message_uim_open_logical_channel_input_get_file_control_information (
    QmiMessageUimOpenLogicalChannelInput *self,
    QmiUimFileControlInformation *value_file_control_information,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_file_control_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'File Control Information' was not found in the message");
        return FALSE;
    }

    if (value_file_control_information)
        *value_file_control_information = (QmiUimFileControlInformation)(self->arg_file_control_information);

    return TRUE;
}

gboolean
qmi_message_uim_open_logical_channel_input_set_file_control_information (
    QmiMessageUimOpenLogicalChannelInput *self,
    QmiUimFileControlInformation value_file_control_information,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_file_control_information = (guint8)(value_file_control_information);
    self->arg_file_control_information_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_open_logical_channel_input_get_aid (
    QmiMessageUimOpenLogicalChannelInput *self,
    GArray **value_aid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_aid_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'AID' was not found in the message");
        return FALSE;
    }

    if (value_aid)
        *value_aid = self->arg_aid;

    return TRUE;
}

gboolean
qmi_message_uim_open_logical_channel_input_set_aid (
    QmiMessageUimOpenLogicalChannelInput *self,
    GArray *value_aid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_aid, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_aid, (GDestroyNotify)g_ptr_array_unref);
    self->arg_aid = g_array_ref (value_aid);
    self->arg_aid_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_open_logical_channel_input_get_slot (
    QmiMessageUimOpenLogicalChannelInput *self,
    guint8 *value_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_slot_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Slot' was not found in the message");
        return FALSE;
    }

    if (value_slot)
        *value_slot = self->arg_slot;

    return TRUE;
}

gboolean
qmi_message_uim_open_logical_channel_input_set_slot (
    QmiMessageUimOpenLogicalChannelInput *self,
    guint8 value_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_slot = value_slot;
    self->arg_slot_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_open_logical_channel_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimOpenLogicalChannelInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_open_logical_channel_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_open_logical_channel_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimOpenLogicalChannelInput *
qmi_message_uim_open_logical_channel_input_ref (QmiMessageUimOpenLogicalChannelInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_open_logical_channel_input_unref (QmiMessageUimOpenLogicalChannelInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_aid, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimOpenLogicalChannelInput, self);
    }
}

QmiMessageUimOpenLogicalChannelInput *
qmi_message_uim_open_logical_channel_input_new (void)
{
    QmiMessageUimOpenLogicalChannelInput *self;

    self = g_slice_new0 (QmiMessageUimOpenLogicalChannelInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_open_logical_channel_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimOpenLogicalChannelInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Open Logical Channel' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'File Control Information' TLV */
    if (input->arg_file_control_information_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_INPUT_TLV_FILE_CONTROL_INFORMATION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'File Control Information': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_file_control_information;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'File Control Information': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'File Control Information': ");
            return NULL;
        }
    }

    /* Try to add the 'AID' TLV */
    if (input->arg_aid_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_INPUT_TLV_AID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'AID': ");
            return NULL;
        }

        {
            guint aid_i;
            guint8 aid_n_items;

            /* Write the number of items in the array first */
            aid_n_items = (guint8) input->arg_aid->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, aid_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'AID': ");
                return NULL;
            }

            for (aid_i = 0; aid_i < input->arg_aid->len; aid_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_aid, guint8,aid_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'AID': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'AID': ");
            return NULL;
        }
    }

    /* Try to add the 'Slot' TLV */
    if (input->arg_slot_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_INPUT_TLV_SLOT, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Slot': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_slot, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Slot': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Slot': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Slot' in message 'Open Logical Channel'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimOpenLogicalChannelOutput {
    volatile gint ref_count;

    /* Card result */
    gboolean arg_card_result_set;
    guint8 arg_card_result_sw1;
    guint8 arg_card_result_sw2;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;

    /* Channel ID */
    gboolean arg_channel_id_set;
    guint8 arg_channel_id;

    /* Select Response */
    gboolean arg_select_response_set;
    GArray *arg_select_response;
};

#define QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_CARD_RESULT 0x11
#define QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_RESULT 0x02
#define QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_CHANNEL_ID 0x10
#define QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_SELECT_RESPONSE 0x12

gboolean
qmi_message_uim_open_logical_channel_output_get_card_result (
    QmiMessageUimOpenLogicalChannelOutput *self,
    guint8 *value_card_result_sw1,
    guint8 *value_card_result_sw2,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_card_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Card result' was not found in the message");
        return FALSE;
    }

    if (value_card_result_sw1)
        *value_card_result_sw1 = self->arg_card_result_sw1;
    if (value_card_result_sw2)
        *value_card_result_sw2 = self->arg_card_result_sw2;

    return TRUE;
}

gboolean
qmi_message_uim_open_logical_channel_output_get_result (
    QmiMessageUimOpenLogicalChannelOutput *self,
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
qmi_message_uim_open_logical_channel_output_get_channel_id (
    QmiMessageUimOpenLogicalChannelOutput *self,
    guint8 *value_channel_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_channel_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Channel ID' was not found in the message");
        return FALSE;
    }

    if (value_channel_id)
        *value_channel_id = self->arg_channel_id;

    return TRUE;
}

gboolean
qmi_message_uim_open_logical_channel_output_get_select_response (
    QmiMessageUimOpenLogicalChannelOutput *self,
    GArray **value_select_response,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_select_response_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Select Response' was not found in the message");
        return FALSE;
    }

    if (value_select_response)
        *value_select_response = self->arg_select_response;

    return TRUE;
}

GType
qmi_message_uim_open_logical_channel_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimOpenLogicalChannelOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_open_logical_channel_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_open_logical_channel_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimOpenLogicalChannelOutput *
qmi_message_uim_open_logical_channel_output_ref (QmiMessageUimOpenLogicalChannelOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_open_logical_channel_output_unref (QmiMessageUimOpenLogicalChannelOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_select_response, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimOpenLogicalChannelOutput, self);
    }
}

static gchar *
qmi_message_uim_open_logical_channel_input_file_control_information_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_INPUT_TLV_FILE_CONTROL_INFORMATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_UIM_FILE_CONTROL_INFORMATION_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_uim_file_control_information_get_string ((QmiUimFileControlInformation)tmp));
#elif defined  __QMI_UIM_FILE_CONTROL_INFORMATION_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_uim_file_control_information_build_string_from_mask ((QmiUimFileControlInformation)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiUimFileControlInformation
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
qmi_message_uim_open_logical_channel_input_aid_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_INPUT_TLV_AID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint aid_i;
        guint8 aid_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(aid_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (aid_i = 0; aid_i < aid_n_items; aid_i++) {
            g_string_append_printf (printable, " [%u] = '", aid_i);

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
qmi_message_uim_open_logical_channel_input_slot_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_INPUT_TLV_SLOT, NULL, NULL)) == 0)
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
qmi_message_uim_open_logical_channel_output_card_result_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " sw1 = '");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " sw2 = '");

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
qmi_message_uim_open_logical_channel_output_channel_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_CHANNEL_ID, NULL, NULL)) == 0)
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
qmi_message_uim_open_logical_channel_output_select_response_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_SELECT_RESPONSE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint select_response_i;
        guint8 select_response_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(select_response_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (select_response_i = 0; select_response_i < select_response_n_items; select_response_i++) {
            g_string_append_printf (printable, " [%u] = '", select_response_i);

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

struct message_open_logical_channel_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_open_logical_channel_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_open_logical_channel_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_INPUT_TLV_FILE_CONTROL_INFORMATION:
            tlv_type_str = "File Control Information";
            translated_value = qmi_message_uim_open_logical_channel_input_file_control_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_INPUT_TLV_AID:
            tlv_type_str = "AID";
            translated_value = qmi_message_uim_open_logical_channel_input_aid_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_INPUT_TLV_SLOT:
            tlv_type_str = "Slot";
            translated_value = qmi_message_uim_open_logical_channel_input_slot_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_CARD_RESULT:
            tlv_type_str = "Card result";
            translated_value = qmi_message_uim_open_logical_channel_output_card_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_CHANNEL_ID:
            tlv_type_str = "Channel ID";
            translated_value = qmi_message_uim_open_logical_channel_output_channel_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_SELECT_RESPONSE:
            tlv_type_str = "Select Response";
            translated_value = qmi_message_uim_open_logical_channel_output_select_response_get_printable (
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
message_open_logical_channel_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Open Logical Channel\" (0x0042)\n",
                            line_prefix);

    {
        struct message_open_logical_channel_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_open_logical_channel_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimOpenLogicalChannelOutput *
qmi_message_uim_open_logical_channel_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimOpenLogicalChannelOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL);

    self = g_slice_new0 (QmiMessageUimOpenLogicalChannelOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_CARD_RESULT, NULL, NULL)) == 0) {
                goto qmi_message_uim_open_logical_channel_output_card_result_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw1), NULL))
                goto qmi_message_uim_open_logical_channel_output_card_result_out;
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_card_result_sw2), NULL))
                goto qmi_message_uim_open_logical_channel_output_card_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Card result' TLV", offset);
            }

            self->arg_card_result_set = TRUE;

qmi_message_uim_open_logical_channel_output_card_result_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_open_logical_channel_output_unref (self);
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
                qmi_message_uim_open_logical_channel_output_unref (self);
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_CHANNEL_ID, NULL, NULL)) == 0) {
                goto qmi_message_uim_open_logical_channel_output_channel_id_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_channel_id), NULL))
                goto qmi_message_uim_open_logical_channel_output_channel_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Channel ID' TLV", offset);
            }

            self->arg_channel_id_set = TRUE;

qmi_message_uim_open_logical_channel_output_channel_id_out:
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

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL_OUTPUT_TLV_SELECT_RESPONSE, NULL, NULL)) == 0) {
                goto qmi_message_uim_open_logical_channel_output_select_response_out;
            }
            {
                guint select_response_i;
                guint8 select_response_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(select_response_n_items), NULL))
                    goto qmi_message_uim_open_logical_channel_output_select_response_out;

                self->arg_select_response = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint8),
                    (guint)select_response_n_items);

                for (select_response_i = 0; select_response_i < select_response_n_items; select_response_i++) {
                    guint8 select_response_aux;

                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(select_response_aux), NULL))
                        goto qmi_message_uim_open_logical_channel_output_select_response_out;
                    g_array_insert_val (self->arg_select_response, select_response_i, select_response_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Select Response' TLV", offset);
            }

            self->arg_select_response_set = TRUE;

qmi_message_uim_open_logical_channel_output_select_response_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Refresh Register All */


/* --- Input -- */

struct _QmiMessageUimRefreshRegisterAllInput {
    volatile gint ref_count;

    /* Info */
    gboolean arg_info_set;
    guint8 arg_info_register_flag;

    /* Session */
    gboolean arg_session_set;
    guint8 arg_session_session_type;
    GArray *arg_session_application_identifier;
};

#define QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL_INPUT_TLV_INFO 0x02
#define QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL_INPUT_TLV_SESSION 0x01

gboolean
qmi_message_uim_refresh_register_all_input_get_info (
    QmiMessageUimRefreshRegisterAllInput *self,
    gboolean *value_info_register_flag,
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

    if (value_info_register_flag)
        *value_info_register_flag = (gboolean)(self->arg_info_register_flag);

    return TRUE;
}

gboolean
qmi_message_uim_refresh_register_all_input_set_info (
    QmiMessageUimRefreshRegisterAllInput *self,
    gboolean value_info_register_flag,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_info_register_flag = (guint8)(value_info_register_flag);
    self->arg_info_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_refresh_register_all_input_get_session (
    QmiMessageUimRefreshRegisterAllInput *self,
    QmiUimSessionType *value_session_session_type,
    GArray **value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session' was not found in the message");
        return FALSE;
    }

    if (value_session_session_type)
        *value_session_session_type = (QmiUimSessionType)(self->arg_session_session_type);
    if (value_session_application_identifier)
        *value_session_application_identifier = self->arg_session_application_identifier;

    return TRUE;
}

gboolean
qmi_message_uim_refresh_register_all_input_set_session (
    QmiMessageUimRefreshRegisterAllInput *self,
    QmiUimSessionType value_session_session_type,
    GArray *value_session_application_identifier,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_session_type = (guint8)(value_session_session_type);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_ptr_array_unref);
    self->arg_session_application_identifier = g_array_ref (value_session_application_identifier);
    self->arg_session_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_refresh_register_all_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimRefreshRegisterAllInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_refresh_register_all_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_refresh_register_all_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimRefreshRegisterAllInput *
qmi_message_uim_refresh_register_all_input_ref (QmiMessageUimRefreshRegisterAllInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_refresh_register_all_input_unref (QmiMessageUimRefreshRegisterAllInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_session_application_identifier, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimRefreshRegisterAllInput, self);
    }
}

QmiMessageUimRefreshRegisterAllInput *
qmi_message_uim_refresh_register_all_input_new (void)
{
    QmiMessageUimRefreshRegisterAllInput *self;

    self = g_slice_new0 (QmiMessageUimRefreshRegisterAllInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_refresh_register_all_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimRefreshRegisterAllInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Refresh Register All' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Info' TLV */
    if (input->arg_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL_INPUT_TLV_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Info': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_info_register_flag;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Info': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Info': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Info' in message 'Refresh Register All'");
        return NULL;
    }

    /* Try to add the 'Session' TLV */
    if (input->arg_session_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL_INPUT_TLV_SESSION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_session_session_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Session': ");
                return NULL;
            }
        }
        {
            guint application_identifier_i;
            guint8 application_identifier_n_items;

            /* Write the number of items in the array first */
            application_identifier_n_items = (guint8) input->arg_session_application_identifier->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, application_identifier_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                return NULL;
            }

            for (application_identifier_i = 0; application_identifier_i < input->arg_session_application_identifier->len; application_identifier_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_session_application_identifier, guint8,application_identifier_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Session': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session' in message 'Refresh Register All'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimRefreshRegisterAllOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_refresh_register_all_output_get_result (
    QmiMessageUimRefreshRegisterAllOutput *self,
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
qmi_message_uim_refresh_register_all_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimRefreshRegisterAllOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_refresh_register_all_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_refresh_register_all_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimRefreshRegisterAllOutput *
qmi_message_uim_refresh_register_all_output_ref (QmiMessageUimRefreshRegisterAllOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_refresh_register_all_output_unref (QmiMessageUimRefreshRegisterAllOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimRefreshRegisterAllOutput, self);
    }
}

static gchar *
qmi_message_uim_refresh_register_all_input_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL_INPUT_TLV_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " register_flag = '");

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

struct message_refresh_register_all_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_refresh_register_all_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_refresh_register_all_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL_INPUT_TLV_INFO:
            tlv_type_str = "Info";
            translated_value = qmi_message_uim_refresh_register_all_input_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL_INPUT_TLV_SESSION:
            tlv_type_str = "Session";
            translated_value = qmi_uim_session_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL_OUTPUT_TLV_RESULT:
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
message_refresh_register_all_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Refresh Register All\" (0x0044)\n",
                            line_prefix);

    {
        struct message_refresh_register_all_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_refresh_register_all_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimRefreshRegisterAllOutput *
qmi_message_uim_refresh_register_all_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimRefreshRegisterAllOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL);

    self = g_slice_new0 (QmiMessageUimRefreshRegisterAllOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_refresh_register_all_output_unref (self);
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
                qmi_message_uim_refresh_register_all_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Switch Slot */


/* --- Input -- */

struct _QmiMessageUimSwitchSlotInput {
    volatile gint ref_count;

    /* Physical Slot */
    gboolean arg_physical_slot_set;
    guint32 arg_physical_slot;

    /* Logical Slot */
    gboolean arg_logical_slot_set;
    guint8 arg_logical_slot;
};

#define QMI_MESSAGE_UIM_SWITCH_SLOT_INPUT_TLV_PHYSICAL_SLOT 0x02
#define QMI_MESSAGE_UIM_SWITCH_SLOT_INPUT_TLV_LOGICAL_SLOT 0x01

gboolean
qmi_message_uim_switch_slot_input_get_physical_slot (
    QmiMessageUimSwitchSlotInput *self,
    guint32 *value_physical_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_physical_slot_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Physical Slot' was not found in the message");
        return FALSE;
    }

    if (value_physical_slot)
        *value_physical_slot = self->arg_physical_slot;

    return TRUE;
}

gboolean
qmi_message_uim_switch_slot_input_set_physical_slot (
    QmiMessageUimSwitchSlotInput *self,
    guint32 value_physical_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_physical_slot = value_physical_slot;
    self->arg_physical_slot_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_switch_slot_input_get_logical_slot (
    QmiMessageUimSwitchSlotInput *self,
    guint8 *value_logical_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_logical_slot_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Logical Slot' was not found in the message");
        return FALSE;
    }

    if (value_logical_slot)
        *value_logical_slot = self->arg_logical_slot;

    return TRUE;
}

gboolean
qmi_message_uim_switch_slot_input_set_logical_slot (
    QmiMessageUimSwitchSlotInput *self,
    guint8 value_logical_slot,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_logical_slot = value_logical_slot;
    self->arg_logical_slot_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_switch_slot_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimSwitchSlotInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_switch_slot_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_switch_slot_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimSwitchSlotInput *
qmi_message_uim_switch_slot_input_ref (QmiMessageUimSwitchSlotInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_switch_slot_input_unref (QmiMessageUimSwitchSlotInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimSwitchSlotInput, self);
    }
}

QmiMessageUimSwitchSlotInput *
qmi_message_uim_switch_slot_input_new (void)
{
    QmiMessageUimSwitchSlotInput *self;

    self = g_slice_new0 (QmiMessageUimSwitchSlotInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_switch_slot_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimSwitchSlotInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_SWITCH_SLOT);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Switch Slot' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Physical Slot' TLV */
    if (input->arg_physical_slot_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_SWITCH_SLOT_INPUT_TLV_PHYSICAL_SLOT, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Physical Slot': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_physical_slot, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Physical Slot': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Physical Slot': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Physical Slot' in message 'Switch Slot'");
        return NULL;
    }

    /* Try to add the 'Logical Slot' TLV */
    if (input->arg_logical_slot_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_SWITCH_SLOT_INPUT_TLV_LOGICAL_SLOT, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Logical Slot': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_logical_slot, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Logical Slot': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Logical Slot': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Logical Slot' in message 'Switch Slot'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimSwitchSlotOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_SWITCH_SLOT_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_switch_slot_output_get_result (
    QmiMessageUimSwitchSlotOutput *self,
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
qmi_message_uim_switch_slot_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimSwitchSlotOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_switch_slot_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_switch_slot_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimSwitchSlotOutput *
qmi_message_uim_switch_slot_output_ref (QmiMessageUimSwitchSlotOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_switch_slot_output_unref (QmiMessageUimSwitchSlotOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimSwitchSlotOutput, self);
    }
}

static gchar *
qmi_message_uim_switch_slot_input_physical_slot_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SWITCH_SLOT_INPUT_TLV_PHYSICAL_SLOT, NULL, NULL)) == 0)
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
qmi_message_uim_switch_slot_input_logical_slot_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SWITCH_SLOT_INPUT_TLV_LOGICAL_SLOT, NULL, NULL)) == 0)
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

struct message_switch_slot_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_switch_slot_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_switch_slot_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_SWITCH_SLOT_INPUT_TLV_PHYSICAL_SLOT:
            tlv_type_str = "Physical Slot";
            translated_value = qmi_message_uim_switch_slot_input_physical_slot_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_SWITCH_SLOT_INPUT_TLV_LOGICAL_SLOT:
            tlv_type_str = "Logical Slot";
            translated_value = qmi_message_uim_switch_slot_input_logical_slot_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_SWITCH_SLOT_OUTPUT_TLV_RESULT:
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
message_switch_slot_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Switch Slot\" (0x0046)\n",
                            line_prefix);

    {
        struct message_switch_slot_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_switch_slot_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimSwitchSlotOutput *
qmi_message_uim_switch_slot_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimSwitchSlotOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_SWITCH_SLOT);

    self = g_slice_new0 (QmiMessageUimSwitchSlotOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_SWITCH_SLOT_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_switch_slot_output_unref (self);
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
                qmi_message_uim_switch_slot_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Get Slot Status */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_uim_get_slot_status_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_GET_SLOT_STATUS);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimGetSlotStatusOutput {
    volatile gint ref_count;

    gpointer compat_context;
    GDestroyNotify compat_context_free;

    /* Slot EID */
    gboolean arg_slot_eid_set;
    GArray *arg_slot_eid;
    GPtrArray *arg_slot_eid_ptr;

    /* Physical Slot Information */
    gboolean arg_physical_slot_information_set;
    GArray *arg_physical_slot_information;
    GPtrArray *arg_physical_slot_information_ptr;

    /* Physical Slot Status */
    gboolean arg_physical_slot_status_set;
    GArray *arg_physical_slot_status;
    GPtrArray *arg_physical_slot_status_ptr;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT_TLV_SLOT_EID 0x12
#define QMI_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_INFORMATION 0x11
#define QMI_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_STATUS 0x10
#define QMI_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_get_slot_status_output_get_slot_eid (
    QmiMessageUimGetSlotStatusOutput *self,
    GArray **value_slot_eid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_slot_eid_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Slot EID' was not found in the message");
        return FALSE;
    }

    if (value_slot_eid)
        *value_slot_eid = self->arg_slot_eid;

    return TRUE;
}

gboolean
qmi_message_uim_get_slot_status_output_get_slot_eid_gir (
    QmiMessageUimGetSlotStatusOutput *self,
    GPtrArray **value_slot_eid_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_slot_eid_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Slot EID' was not found in the message");
        return FALSE;
    }

    if (value_slot_eid_ptr) {
        if (!self->arg_slot_eid_ptr) {
            {
                guint slot_eid_i;

                self->arg_slot_eid_ptr = g_ptr_array_new_full (self->arg_slot_eid->len, (GDestroyNotify)__qmi_slot_eid_element_free);
                for (slot_eid_i = 0; slot_eid_i < self->arg_slot_eid->len; slot_eid_i++) {
                    QmiSlotEidElement *slot_eid_aux_from;
                    QmiSlotEidElement *slot_eid_aux_to;

                    slot_eid_aux_from = &g_array_index (self->arg_slot_eid, QmiSlotEidElement, slot_eid_i);

                    slot_eid_aux_to = __qmi_slot_eid_element_new ();
                    slot_eid_aux_to->eid = g_array_ref ((*slot_eid_aux_from).eid);

                    g_ptr_array_add (self->arg_slot_eid_ptr, slot_eid_aux_to);
                }
            }
        }
        *value_slot_eid_ptr = self->arg_slot_eid_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_uim_get_slot_status_output_get_physical_slot_information (
    QmiMessageUimGetSlotStatusOutput *self,
    GArray **value_physical_slot_information,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_physical_slot_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Physical Slot Information' was not found in the message");
        return FALSE;
    }

    if (value_physical_slot_information)
        *value_physical_slot_information = self->arg_physical_slot_information;

    return TRUE;
}

gboolean
qmi_message_uim_get_slot_status_output_get_physical_slot_information_gir (
    QmiMessageUimGetSlotStatusOutput *self,
    GPtrArray **value_physical_slot_information_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_physical_slot_information_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Physical Slot Information' was not found in the message");
        return FALSE;
    }

    if (value_physical_slot_information_ptr) {
        if (!self->arg_physical_slot_information_ptr) {
            {
                guint physical_slot_information_i;

                self->arg_physical_slot_information_ptr = g_ptr_array_new_full (self->arg_physical_slot_information->len, (GDestroyNotify)__qmi_physical_slot_information_slot_free);
                for (physical_slot_information_i = 0; physical_slot_information_i < self->arg_physical_slot_information->len; physical_slot_information_i++) {
                    QmiPhysicalSlotInformationSlot *physical_slot_information_aux_from;
                    QmiPhysicalSlotInformationSlot *physical_slot_information_aux_to;

                    physical_slot_information_aux_from = &g_array_index (self->arg_physical_slot_information, QmiPhysicalSlotInformationSlot, physical_slot_information_i);

                    physical_slot_information_aux_to = __qmi_physical_slot_information_slot_new ();
                    physical_slot_information_aux_to->card_protocol = (*physical_slot_information_aux_from).card_protocol;
                    physical_slot_information_aux_to->valid_applications = (*physical_slot_information_aux_from).valid_applications;
                    physical_slot_information_aux_to->atr_value = g_array_ref ((*physical_slot_information_aux_from).atr_value);
                    physical_slot_information_aux_to->is_euicc = (*physical_slot_information_aux_from).is_euicc;

                    g_ptr_array_add (self->arg_physical_slot_information_ptr, physical_slot_information_aux_to);
                }
            }
        }
        *value_physical_slot_information_ptr = self->arg_physical_slot_information_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_uim_get_slot_status_output_get_physical_slot_status (
    QmiMessageUimGetSlotStatusOutput *self,
    GArray **value_physical_slot_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_physical_slot_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Physical Slot Status' was not found in the message");
        return FALSE;
    }

    if (value_physical_slot_status)
        *value_physical_slot_status = self->arg_physical_slot_status;

    return TRUE;
}

gboolean
qmi_message_uim_get_slot_status_output_get_physical_slot_status_gir (
    QmiMessageUimGetSlotStatusOutput *self,
    GPtrArray **value_physical_slot_status_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_physical_slot_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Physical Slot Status' was not found in the message");
        return FALSE;
    }

    if (value_physical_slot_status_ptr) {
        if (!self->arg_physical_slot_status_ptr) {
            {
                guint physical_slot_status_i;

                self->arg_physical_slot_status_ptr = g_ptr_array_new_full (self->arg_physical_slot_status->len, (GDestroyNotify)__qmi_physical_slot_status_slot_free);
                for (physical_slot_status_i = 0; physical_slot_status_i < self->arg_physical_slot_status->len; physical_slot_status_i++) {
                    QmiPhysicalSlotStatusSlot *physical_slot_status_aux_from;
                    QmiPhysicalSlotStatusSlot *physical_slot_status_aux_to;

                    physical_slot_status_aux_from = &g_array_index (self->arg_physical_slot_status, QmiPhysicalSlotStatusSlot, physical_slot_status_i);

                    physical_slot_status_aux_to = __qmi_physical_slot_status_slot_new ();
                    physical_slot_status_aux_to->physical_card_status = (*physical_slot_status_aux_from).physical_card_status;
                    physical_slot_status_aux_to->physical_slot_status = (*physical_slot_status_aux_from).physical_slot_status;
                    physical_slot_status_aux_to->logical_slot = (*physical_slot_status_aux_from).logical_slot;
                    physical_slot_status_aux_to->iccid = g_array_ref ((*physical_slot_status_aux_from).iccid);

                    g_ptr_array_add (self->arg_physical_slot_status_ptr, physical_slot_status_aux_to);
                }
            }
        }
        *value_physical_slot_status_ptr = self->arg_physical_slot_status_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_uim_get_slot_status_output_get_result (
    QmiMessageUimGetSlotStatusOutput *self,
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
qmi_message_uim_get_slot_status_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimGetSlotStatusOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_get_slot_status_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_get_slot_status_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimGetSlotStatusOutput *
qmi_message_uim_get_slot_status_output_ref (QmiMessageUimGetSlotStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_get_slot_status_output_unref (QmiMessageUimGetSlotStatusOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        if (self->compat_context && self->compat_context_free)
            self->compat_context_free (self->compat_context);
        g_clear_pointer (&self->arg_slot_eid, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_slot_eid, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_physical_slot_information, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_physical_slot_information, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_physical_slot_status, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_physical_slot_status, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageUimGetSlotStatusOutput, self);
    }
}
gpointer
qmi_message_uim_get_slot_status_output_get_compat_context (QmiMessageUimGetSlotStatusOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    return self->compat_context;
}

void
qmi_message_uim_get_slot_status_output_set_compat_context (
    QmiMessageUimGetSlotStatusOutput *self,
    gpointer compat_context,
    GDestroyNotify compat_context_free)
{
    g_return_if_fail (self != NULL);

    if (self->compat_context && self->compat_context_free)
        self->compat_context_free (self->compat_context);

    self->compat_context = compat_context;
    self->compat_context_free = compat_context_free;
}

struct message_get_slot_status_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_slot_status_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_slot_status_context *ctx)
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
        case QMI_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT_TLV_SLOT_EID:
            tlv_type_str = "Slot EID";
            translated_value = qmi_slot_eid_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_INFORMATION:
            tlv_type_str = "Physical Slot Information";
            translated_value = qmi_physical_slot_information_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_STATUS:
            tlv_type_str = "Physical Slot Status";
            translated_value = qmi_physical_slot_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT_TLV_RESULT:
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
message_get_slot_status_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Slot Status\" (0x0047)\n",
                            line_prefix);

    {
        struct message_get_slot_status_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_slot_status_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimGetSlotStatusOutput *
qmi_message_uim_get_slot_status_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimGetSlotStatusOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_GET_SLOT_STATUS);

    self = g_slice_new0 (QmiMessageUimGetSlotStatusOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT_TLV_SLOT_EID, NULL, NULL)) == 0) {
                goto qmi_slot_eid_out;
            }
            {
                guint slot_eid_i;
                guint8 slot_eid_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(slot_eid_n_items), NULL))
                    goto qmi_slot_eid_out;

                self->arg_slot_eid = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiSlotEidElement),
                    (guint)slot_eid_n_items);

                g_array_set_clear_func (self->arg_slot_eid, (GDestroyNotify)__qmi_slot_eid_element_clear);

                for (slot_eid_i = 0; slot_eid_i < slot_eid_n_items; slot_eid_i++) {
                    QmiSlotEidElement slot_eid_aux;

                    {
                        guint eid_i;
                        guint8 eid_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(eid_n_items), NULL))
                            goto qmi_slot_eid_out;

                        slot_eid_aux.eid = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (guint8),
                            (guint)eid_n_items);

                        for (eid_i = 0; eid_i < eid_n_items; eid_i++) {
                            guint8 eid_aux;

                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(eid_aux), NULL))
                                goto qmi_slot_eid_out;
                            g_array_insert_val (slot_eid_aux.eid, eid_i, eid_aux);
                        }
                    }
                    g_array_insert_val (self->arg_slot_eid, slot_eid_i, slot_eid_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Slot EID' TLV", offset);
            }

            self->arg_slot_eid_set = TRUE;

qmi_slot_eid_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_INFORMATION, NULL, NULL)) == 0) {
                goto qmi_physical_slot_information_out;
            }
            {
                guint physical_slot_information_i;
                guint8 physical_slot_information_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(physical_slot_information_n_items), NULL))
                    goto qmi_physical_slot_information_out;

                self->arg_physical_slot_information = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiPhysicalSlotInformationSlot),
                    (guint)physical_slot_information_n_items);

                g_array_set_clear_func (self->arg_physical_slot_information, (GDestroyNotify)__qmi_physical_slot_information_slot_clear);

                for (physical_slot_information_i = 0; physical_slot_information_i < physical_slot_information_n_items; physical_slot_information_i++) {
                    QmiPhysicalSlotInformationSlot physical_slot_information_aux;

                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_physical_slot_information_out;
                        physical_slot_information_aux.card_protocol = (QmiUimCardProtocol)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(physical_slot_information_aux.valid_applications), NULL))
                        goto qmi_physical_slot_information_out;
                    {
                        guint atr_value_i;
                        guint8 atr_value_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(atr_value_n_items), NULL))
                            goto qmi_physical_slot_information_out;

                        physical_slot_information_aux.atr_value = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (guint8),
                            (guint)atr_value_n_items);

                        for (atr_value_i = 0; atr_value_i < atr_value_n_items; atr_value_i++) {
                            guint8 atr_value_aux;

                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(atr_value_aux), NULL))
                                goto qmi_physical_slot_information_out;
                            g_array_insert_val (physical_slot_information_aux.atr_value, atr_value_i, atr_value_aux);
                        }
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_physical_slot_information_out;
                        physical_slot_information_aux.is_euicc = (gboolean)tmp;
                    }
                    g_array_insert_val (self->arg_physical_slot_information, physical_slot_information_i, physical_slot_information_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Physical Slot Information' TLV", offset);
            }

            self->arg_physical_slot_information_set = TRUE;

qmi_physical_slot_information_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT_TLV_PHYSICAL_SLOT_STATUS, NULL, NULL)) == 0) {
                goto qmi_physical_slot_status_out;
            }
            {
                guint physical_slot_status_i;
                guint8 physical_slot_status_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(physical_slot_status_n_items), NULL))
                    goto qmi_physical_slot_status_out;

                self->arg_physical_slot_status = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiPhysicalSlotStatusSlot),
                    (guint)physical_slot_status_n_items);

                g_array_set_clear_func (self->arg_physical_slot_status, (GDestroyNotify)__qmi_physical_slot_status_slot_clear);

                for (physical_slot_status_i = 0; physical_slot_status_i < physical_slot_status_n_items; physical_slot_status_i++) {
                    QmiPhysicalSlotStatusSlot physical_slot_status_aux;

                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_physical_slot_status_out;
                        physical_slot_status_aux.physical_card_status = (QmiUimPhysicalCardState)tmp;
                    }
                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_physical_slot_status_out;
                        physical_slot_status_aux.physical_slot_status = (QmiUimSlotState)tmp;
                    }
                    if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(physical_slot_status_aux.logical_slot), NULL))
                        goto qmi_physical_slot_status_out;
                    {
                        guint iccid_i;
                        guint8 iccid_n_items;

                        /* Read number of items in the array */
                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(iccid_n_items), NULL))
                            goto qmi_physical_slot_status_out;

                        physical_slot_status_aux.iccid = g_array_sized_new (
                            FALSE,
                            FALSE,
                            sizeof (guint8),
                            (guint)iccid_n_items);

                        for (iccid_i = 0; iccid_i < iccid_n_items; iccid_i++) {
                            guint8 iccid_aux;

                            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(iccid_aux), NULL))
                                goto qmi_physical_slot_status_out;
                            g_array_insert_val (physical_slot_status_aux.iccid, iccid_i, iccid_aux);
                        }
                    }
                    g_array_insert_val (self->arg_physical_slot_status, physical_slot_status_i, physical_slot_status_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Physical Slot Status' TLV", offset);
            }

            self->arg_physical_slot_status_set = TRUE;

qmi_physical_slot_status_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_GET_SLOT_STATUS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_get_slot_status_output_unref (self);
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
                qmi_message_uim_get_slot_status_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message UIM Remote Unlock */


/* --- Input -- */

struct _QmiMessageUimRemoteUnlockInput {
    volatile gint ref_count;

    /* SimLock Extended Data */
    gboolean arg_simlock_extended_data_set;
    GArray *arg_simlock_extended_data;

    /* SimLock Data */
    gboolean arg_simlock_data_set;
    GArray *arg_simlock_data;
};

#define QMI_MESSAGE_UIM_REMOTE_UNLOCK_INPUT_TLV_SIMLOCK_EXTENDED_DATA 0x12
#define QMI_MESSAGE_UIM_REMOTE_UNLOCK_INPUT_TLV_SIMLOCK_DATA 0x10

gboolean
qmi_message_uim_remote_unlock_input_get_simlock_extended_data (
    QmiMessageUimRemoteUnlockInput *self,
    GArray **value_simlock_extended_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_simlock_extended_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'SimLock Extended Data' was not found in the message");
        return FALSE;
    }

    if (value_simlock_extended_data)
        *value_simlock_extended_data = self->arg_simlock_extended_data;

    return TRUE;
}

gboolean
qmi_message_uim_remote_unlock_input_set_simlock_extended_data (
    QmiMessageUimRemoteUnlockInput *self,
    GArray *value_simlock_extended_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_simlock_extended_data, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_simlock_extended_data, (GDestroyNotify)g_ptr_array_unref);
    self->arg_simlock_extended_data = g_array_ref (value_simlock_extended_data);
    self->arg_simlock_extended_data_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_uim_remote_unlock_input_get_simlock_data (
    QmiMessageUimRemoteUnlockInput *self,
    GArray **value_simlock_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_simlock_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'SimLock Data' was not found in the message");
        return FALSE;
    }

    if (value_simlock_data)
        *value_simlock_data = self->arg_simlock_data;

    return TRUE;
}

gboolean
qmi_message_uim_remote_unlock_input_set_simlock_data (
    QmiMessageUimRemoteUnlockInput *self,
    GArray *value_simlock_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_simlock_data, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_simlock_data, (GDestroyNotify)g_ptr_array_unref);
    self->arg_simlock_data = g_array_ref (value_simlock_data);
    self->arg_simlock_data_set = TRUE;

    return TRUE;
}

GType
qmi_message_uim_remote_unlock_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimRemoteUnlockInput"),
                                          (GBoxedCopyFunc) qmi_message_uim_remote_unlock_input_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_remote_unlock_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimRemoteUnlockInput *
qmi_message_uim_remote_unlock_input_ref (QmiMessageUimRemoteUnlockInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_remote_unlock_input_unref (QmiMessageUimRemoteUnlockInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_simlock_extended_data, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_simlock_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageUimRemoteUnlockInput, self);
    }
}

QmiMessageUimRemoteUnlockInput *
qmi_message_uim_remote_unlock_input_new (void)
{
    QmiMessageUimRemoteUnlockInput *self;

    self = g_slice_new0 (QmiMessageUimRemoteUnlockInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_uim_remote_unlock_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageUimRemoteUnlockInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_UIM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_UIM_REMOTE_UNLOCK);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'SimLock Extended Data' TLV */
    if (input->arg_simlock_extended_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_REMOTE_UNLOCK_INPUT_TLV_SIMLOCK_EXTENDED_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'SimLock Extended Data': ");
            return NULL;
        }

        {
            guint simlock_extended_data_i;
            guint16 simlock_extended_data_n_items;

            /* Write the number of items in the array first */
            simlock_extended_data_n_items = (guint16) input->arg_simlock_extended_data->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, simlock_extended_data_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'SimLock Extended Data': ");
                return NULL;
            }

            for (simlock_extended_data_i = 0; simlock_extended_data_i < input->arg_simlock_extended_data->len; simlock_extended_data_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_simlock_extended_data, guint8,simlock_extended_data_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'SimLock Extended Data': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'SimLock Extended Data': ");
            return NULL;
        }
    }

    /* Try to add the 'SimLock Data' TLV */
    if (input->arg_simlock_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_UIM_REMOTE_UNLOCK_INPUT_TLV_SIMLOCK_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'SimLock Data': ");
            return NULL;
        }

        {
            guint simlock_data_i;
            guint16 simlock_data_n_items;

            /* Write the number of items in the array first */
            simlock_data_n_items = (guint16) input->arg_simlock_data->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, simlock_data_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'SimLock Data': ");
                return NULL;
            }

            for (simlock_data_i = 0; simlock_data_i < input->arg_simlock_data->len; simlock_data_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_simlock_data, guint8,simlock_data_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'SimLock Data': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'SimLock Data': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageUimRemoteUnlockOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_UIM_REMOTE_UNLOCK_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_uim_remote_unlock_output_get_result (
    QmiMessageUimRemoteUnlockOutput *self,
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
qmi_message_uim_remote_unlock_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageUimRemoteUnlockOutput"),
                                          (GBoxedCopyFunc) qmi_message_uim_remote_unlock_output_ref,
                                          (GBoxedFreeFunc) qmi_message_uim_remote_unlock_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageUimRemoteUnlockOutput *
qmi_message_uim_remote_unlock_output_ref (QmiMessageUimRemoteUnlockOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_uim_remote_unlock_output_unref (QmiMessageUimRemoteUnlockOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageUimRemoteUnlockOutput, self);
    }
}

static gchar *
qmi_message_uim_remote_unlock_input_simlock_extended_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REMOTE_UNLOCK_INPUT_TLV_SIMLOCK_EXTENDED_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint simlock_extended_data_i;
        guint16 simlock_extended_data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(simlock_extended_data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (simlock_extended_data_i = 0; simlock_extended_data_i < simlock_extended_data_n_items; simlock_extended_data_i++) {
            g_string_append_printf (printable, " [%u] = '", simlock_extended_data_i);

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
qmi_message_uim_remote_unlock_input_simlock_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REMOTE_UNLOCK_INPUT_TLV_SIMLOCK_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint simlock_data_i;
        guint16 simlock_data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(simlock_data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (simlock_data_i = 0; simlock_data_i < simlock_data_n_items; simlock_data_i++) {
            g_string_append_printf (printable, " [%u] = '", simlock_data_i);

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

struct message_remote_unlock_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_remote_unlock_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_remote_unlock_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_UIM_REMOTE_UNLOCK_INPUT_TLV_SIMLOCK_EXTENDED_DATA:
            tlv_type_str = "SimLock Extended Data";
            translated_value = qmi_message_uim_remote_unlock_input_simlock_extended_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        case QMI_MESSAGE_UIM_REMOTE_UNLOCK_INPUT_TLV_SIMLOCK_DATA:
            tlv_type_str = "SimLock Data";
            translated_value = qmi_message_uim_remote_unlock_input_simlock_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            value_has_personal_info = TRUE;
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_UIM_REMOTE_UNLOCK_OUTPUT_TLV_RESULT:
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
message_remote_unlock_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Remote Unlock\" (0x005D)\n",
                            line_prefix);

    {
        struct message_remote_unlock_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_remote_unlock_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageUimRemoteUnlockOutput *
qmi_message_uim_remote_unlock_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageUimRemoteUnlockOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_UIM_REMOTE_UNLOCK);

    self = g_slice_new0 (QmiMessageUimRemoteUnlockOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_UIM_REMOTE_UNLOCK_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_uim_remote_unlock_output_unref (self);
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
                qmi_message_uim_remote_unlock_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: UIM */


gchar *
__qmi_message_uim_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_UIM_CARD_STATUS:
            return indication_card_status_get_printable (self, line_prefix);
        case QMI_INDICATION_UIM_REFRESH:
            return indication_refresh_get_printable (self, line_prefix);
        case QMI_INDICATION_UIM_SLOT_STATUS:
            return indication_slot_status_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_UIM_RESET:
                return message_reset_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_GET_SUPPORTED_MESSAGES:
                return message_get_supported_messages_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_READ_TRANSPARENT:
                return message_read_transparent_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_READ_RECORD:
                return message_read_record_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_WRITE_RECORD:
                return message_write_record_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_GET_FILE_ATTRIBUTES:
                return message_get_file_attributes_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_SET_PIN_PROTECTION:
                return message_set_pin_protection_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_VERIFY_PIN:
                return message_verify_pin_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_UNBLOCK_PIN:
                return message_unblock_pin_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_CHANGE_PIN:
                return message_change_pin_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_REFRESH_REGISTER:
                return message_refresh_register_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_REFRESH_COMPLETE:
                return message_refresh_complete_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_REGISTER_EVENTS:
                return message_register_events_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_GET_CARD_STATUS:
                return message_get_card_status_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_POWER_OFF_SIM:
                return message_power_off_sim_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_POWER_ON_SIM:
                return message_power_on_sim_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_CHANGE_PROVISIONING_SESSION:
                return message_change_provisioning_session_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_DEPERSONALIZATION:
                return message_depersonalization_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_GET_CONFIGURATION:
                return message_get_configuration_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_SEND_APDU:
                return message_send_apdu_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_LOGICAL_CHANNEL:
                return message_logical_channel_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_OPEN_LOGICAL_CHANNEL:
                return message_open_logical_channel_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_REFRESH_REGISTER_ALL:
                return message_refresh_register_all_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_SWITCH_SLOT:
                return message_switch_slot_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_GET_SLOT_STATUS:
                return message_get_slot_status_get_printable (self, line_prefix);
            case QMI_MESSAGE_UIM_REMOTE_UNLOCK:
                return message_remote_unlock_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client UIM */

G_DEFINE_TYPE (QmiClientUim, qmi_client_uim, QMI_TYPE_CLIENT)

enum {
    SIGNAL_CARD_STATUS,
    SIGNAL_REFRESH,
    SIGNAL_SLOT_STATUS,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_UIM_CARD_STATUS: {
            QmiIndicationUimCardStatusOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_uim_card_status_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Card Status' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_CARD_STATUS], 0, output);
                qmi_indication_uim_card_status_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_UIM_REFRESH: {
            QmiIndicationUimRefreshOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_uim_refresh_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Refresh' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_REFRESH], 0, output);
                qmi_indication_uim_refresh_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_UIM_SLOT_STATUS: {
            QmiIndicationUimSlotStatusOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_uim_slot_status_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Slot Status' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_SLOT_STATUS], 0, output);
                qmi_indication_uim_slot_status_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_uim_init (QmiClientUim *self)
{
}

static void
qmi_client_uim_class_init (QmiClientUimClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientUim::card-status:
     * @object: A #QmiClientUim.
     * @output: A #QmiIndicationUimCardStatusOutput.
     *
     * The ::card-status signal gets emitted when a '<link linkend="libqmi-glib-UIM-Card-Status-indication.top_of_page">Card Status</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_CARD_STATUS] =
        g_signal_new ("card-status",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_UIM_CARD_STATUS_OUTPUT);

    /**
     * QmiClientUim::refresh:
     * @object: A #QmiClientUim.
     * @output: A #QmiIndicationUimRefreshOutput.
     *
     * The ::refresh signal gets emitted when a '<link linkend="libqmi-glib-UIM-Refresh-indication.top_of_page">Refresh</link>' indication is received.
     *
     * Since: 1.28
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
                      QMI_TYPE_INDICATION_UIM_REFRESH_OUTPUT);

    /**
     * QmiClientUim::slot-status:
     * @object: A #QmiClientUim.
     * @output: A #QmiIndicationUimSlotStatusOutput.
     *
     * The ::slot-status signal gets emitted when a '<link linkend="libqmi-glib-UIM-Slot-Status-indication.top_of_page">Slot Status</link>' indication is received.
     *
     * Since: 1.26
     */
    signals[SIGNAL_SLOT_STATUS] =
        g_signal_new ("slot-status",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_UIM_SLOT_STATUS_OUTPUT);
}


QmiMessageUimResetOutput *
qmi_client_uim_reset_finish (
    QmiClientUim *self,
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
    QmiMessageUimResetOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_reset_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_reset_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_reset (
    QmiClientUim *self,
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

    request = __qmi_message_uim_reset_request_create (
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


QmiMessageUimGetSupportedMessagesOutput *
qmi_client_uim_get_supported_messages_finish (
    QmiClientUim *self,
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
    QmiMessageUimGetSupportedMessagesOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_get_supported_messages_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_get_supported_messages_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_get_supported_messages (
    QmiClientUim *self,
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

    request = __qmi_message_uim_get_supported_messages_request_create (
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


QmiMessageUimReadTransparentOutput *
qmi_client_uim_read_transparent_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
read_transparent_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimReadTransparentOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_read_transparent_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_read_transparent_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_read_transparent (
    QmiClientUim *self,
    QmiMessageUimReadTransparentInput *input,
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

    request = __qmi_message_uim_read_transparent_request_create (
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
                             (GAsyncReadyCallback)read_transparent_ready,
                             task);
}


QmiMessageUimReadRecordOutput *
qmi_client_uim_read_record_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
read_record_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimReadRecordOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_read_record_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_read_record_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_read_record (
    QmiClientUim *self,
    QmiMessageUimReadRecordInput *input,
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

    request = __qmi_message_uim_read_record_request_create (
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
                             (GAsyncReadyCallback)read_record_ready,
                             task);
}


QmiMessageUimWriteRecordOutput *
qmi_client_uim_write_record_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
write_record_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimWriteRecordOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_write_record_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_write_record_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_write_record (
    QmiClientUim *self,
    QmiMessageUimWriteRecordInput *input,
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

    request = __qmi_message_uim_write_record_request_create (
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
                             (GAsyncReadyCallback)write_record_ready,
                             task);
}


QmiMessageUimGetFileAttributesOutput *
qmi_client_uim_get_file_attributes_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_file_attributes_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimGetFileAttributesOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_get_file_attributes_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_get_file_attributes_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_get_file_attributes (
    QmiClientUim *self,
    QmiMessageUimGetFileAttributesInput *input,
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

    request = __qmi_message_uim_get_file_attributes_request_create (
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
                             (GAsyncReadyCallback)get_file_attributes_ready,
                             task);
}


QmiMessageUimSetPinProtectionOutput *
qmi_client_uim_set_pin_protection_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_pin_protection_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimSetPinProtectionOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_set_pin_protection_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_set_pin_protection_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_set_pin_protection (
    QmiClientUim *self,
    QmiMessageUimSetPinProtectionInput *input,
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

    request = __qmi_message_uim_set_pin_protection_request_create (
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
                             (GAsyncReadyCallback)set_pin_protection_ready,
                             task);
}


QmiMessageUimVerifyPinOutput *
qmi_client_uim_verify_pin_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
verify_pin_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimVerifyPinOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_verify_pin_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_verify_pin_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_verify_pin (
    QmiClientUim *self,
    QmiMessageUimVerifyPinInput *input,
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

    request = __qmi_message_uim_verify_pin_request_create (
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
                             (GAsyncReadyCallback)verify_pin_ready,
                             task);
}


QmiMessageUimUnblockPinOutput *
qmi_client_uim_unblock_pin_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
unblock_pin_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimUnblockPinOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_unblock_pin_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_unblock_pin_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_unblock_pin (
    QmiClientUim *self,
    QmiMessageUimUnblockPinInput *input,
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

    request = __qmi_message_uim_unblock_pin_request_create (
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
                             (GAsyncReadyCallback)unblock_pin_ready,
                             task);
}


QmiMessageUimChangePinOutput *
qmi_client_uim_change_pin_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
change_pin_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimChangePinOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_change_pin_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_change_pin_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_change_pin (
    QmiClientUim *self,
    QmiMessageUimChangePinInput *input,
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

    request = __qmi_message_uim_change_pin_request_create (
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
                             (GAsyncReadyCallback)change_pin_ready,
                             task);
}


QmiMessageUimRefreshRegisterOutput *
qmi_client_uim_refresh_register_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
refresh_register_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimRefreshRegisterOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_refresh_register_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_refresh_register_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_refresh_register (
    QmiClientUim *self,
    QmiMessageUimRefreshRegisterInput *input,
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

    request = __qmi_message_uim_refresh_register_request_create (
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
                             (GAsyncReadyCallback)refresh_register_ready,
                             task);
}


QmiMessageUimRefreshCompleteOutput *
qmi_client_uim_refresh_complete_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
refresh_complete_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimRefreshCompleteOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_refresh_complete_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_refresh_complete_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_refresh_complete (
    QmiClientUim *self,
    QmiMessageUimRefreshCompleteInput *input,
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

    request = __qmi_message_uim_refresh_complete_request_create (
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
                             (GAsyncReadyCallback)refresh_complete_ready,
                             task);
}


QmiMessageUimRegisterEventsOutput *
qmi_client_uim_register_events_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
register_events_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimRegisterEventsOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_register_events_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_register_events_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_register_events (
    QmiClientUim *self,
    QmiMessageUimRegisterEventsInput *input,
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

    request = __qmi_message_uim_register_events_request_create (
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
                             (GAsyncReadyCallback)register_events_ready,
                             task);
}


QmiMessageUimGetCardStatusOutput *
qmi_client_uim_get_card_status_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_card_status_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimGetCardStatusOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_get_card_status_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_get_card_status_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_get_card_status (
    QmiClientUim *self,
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

    request = __qmi_message_uim_get_card_status_request_create (
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
                             (GAsyncReadyCallback)get_card_status_ready,
                             task);
}


QmiMessageUimPowerOffSimOutput *
qmi_client_uim_power_off_sim_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
power_off_sim_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimPowerOffSimOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_power_off_sim_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_power_off_sim_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_power_off_sim (
    QmiClientUim *self,
    QmiMessageUimPowerOffSimInput *input,
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

    request = __qmi_message_uim_power_off_sim_request_create (
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
                             (GAsyncReadyCallback)power_off_sim_ready,
                             task);
}


QmiMessageUimPowerOnSimOutput *
qmi_client_uim_power_on_sim_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
power_on_sim_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimPowerOnSimOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_power_on_sim_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_power_on_sim_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_power_on_sim (
    QmiClientUim *self,
    QmiMessageUimPowerOnSimInput *input,
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

    request = __qmi_message_uim_power_on_sim_request_create (
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
                             (GAsyncReadyCallback)power_on_sim_ready,
                             task);
}


QmiMessageUimChangeProvisioningSessionOutput *
qmi_client_uim_change_provisioning_session_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
change_provisioning_session_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimChangeProvisioningSessionOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_change_provisioning_session_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_change_provisioning_session_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_change_provisioning_session (
    QmiClientUim *self,
    QmiMessageUimChangeProvisioningSessionInput *input,
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

    request = __qmi_message_uim_change_provisioning_session_request_create (
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
                             (GAsyncReadyCallback)change_provisioning_session_ready,
                             task);
}


QmiMessageUimDepersonalizationOutput *
qmi_client_uim_depersonalization_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
depersonalization_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimDepersonalizationOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_depersonalization_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_depersonalization_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_depersonalization (
    QmiClientUim *self,
    QmiMessageUimDepersonalizationInput *input,
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

    request = __qmi_message_uim_depersonalization_request_create (
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
                             (GAsyncReadyCallback)depersonalization_ready,
                             task);
}


QmiMessageUimGetConfigurationOutput *
qmi_client_uim_get_configuration_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_configuration_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimGetConfigurationOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_get_configuration_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_get_configuration_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_get_configuration (
    QmiClientUim *self,
    QmiMessageUimGetConfigurationInput *input,
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

    request = __qmi_message_uim_get_configuration_request_create (
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
                             (GAsyncReadyCallback)get_configuration_ready,
                             task);
}


QmiMessageUimSendApduOutput *
qmi_client_uim_send_apdu_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
send_apdu_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimSendApduOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_send_apdu_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_send_apdu_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_send_apdu (
    QmiClientUim *self,
    QmiMessageUimSendApduInput *input,
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

    request = __qmi_message_uim_send_apdu_request_create (
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
                             (GAsyncReadyCallback)send_apdu_ready,
                             task);
}


QmiMessageUimLogicalChannelOutput *
qmi_client_uim_logical_channel_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
logical_channel_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimLogicalChannelOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_logical_channel_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_logical_channel_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_logical_channel (
    QmiClientUim *self,
    QmiMessageUimLogicalChannelInput *input,
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

    request = __qmi_message_uim_logical_channel_request_create (
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
                             (GAsyncReadyCallback)logical_channel_ready,
                             task);
}


QmiMessageUimOpenLogicalChannelOutput *
qmi_client_uim_open_logical_channel_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
open_logical_channel_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimOpenLogicalChannelOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_open_logical_channel_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_open_logical_channel_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_open_logical_channel (
    QmiClientUim *self,
    QmiMessageUimOpenLogicalChannelInput *input,
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

    request = __qmi_message_uim_open_logical_channel_request_create (
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
                             (GAsyncReadyCallback)open_logical_channel_ready,
                             task);
}


QmiMessageUimRefreshRegisterAllOutput *
qmi_client_uim_refresh_register_all_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
refresh_register_all_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimRefreshRegisterAllOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_refresh_register_all_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_refresh_register_all_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_refresh_register_all (
    QmiClientUim *self,
    QmiMessageUimRefreshRegisterAllInput *input,
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

    request = __qmi_message_uim_refresh_register_all_request_create (
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
                             (GAsyncReadyCallback)refresh_register_all_ready,
                             task);
}


QmiMessageUimSwitchSlotOutput *
qmi_client_uim_switch_slot_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
switch_slot_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimSwitchSlotOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_switch_slot_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_switch_slot_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_switch_slot (
    QmiClientUim *self,
    QmiMessageUimSwitchSlotInput *input,
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

    request = __qmi_message_uim_switch_slot_request_create (
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
                             (GAsyncReadyCallback)switch_slot_ready,
                             task);
}


QmiMessageUimGetSlotStatusOutput *
qmi_client_uim_get_slot_status_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_slot_status_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimGetSlotStatusOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_get_slot_status_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_get_slot_status_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_get_slot_status (
    QmiClientUim *self,
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

    request = __qmi_message_uim_get_slot_status_request_create (
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
                             (GAsyncReadyCallback)get_slot_status_ready,
                             task);
}


QmiMessageUimRemoteUnlockOutput *
qmi_client_uim_remote_unlock_finish (
    QmiClientUim *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
remote_unlock_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageUimRemoteUnlockOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_uim_remote_unlock_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_uim_remote_unlock_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_uim_remote_unlock (
    QmiClientUim *self,
    QmiMessageUimRemoteUnlockInput *input,
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

    request = __qmi_message_uim_remote_unlock_request_create (
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
                             (GAsyncReadyCallback)remote_unlock_ready,
                             task);
}

