
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


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

#include "qmi-enums.h"
#include "qmi-enums-voice.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_VOICE__
#define __LIBQMI_GLIB_QMI_VOICE__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_VOICE_INDICATION_REGISTER
#define HAVE_QMI_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES
#define HAVE_QMI_MESSAGE_VOICE_DIAL_CALL
#define HAVE_QMI_MESSAGE_VOICE_END_CALL
#define HAVE_QMI_MESSAGE_VOICE_ANSWER_CALL
#define HAVE_QMI_MESSAGE_VOICE_GET_ALL_CALL_INFO
#define HAVE_QMI_MESSAGE_VOICE_MANAGE_CALLS
#define HAVE_QMI_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE
#define HAVE_QMI_MESSAGE_VOICE_GET_CALL_WAITING
#define HAVE_QMI_MESSAGE_VOICE_ORIGINATE_USSD
#define HAVE_QMI_MESSAGE_VOICE_ANSWER_USSD
#define HAVE_QMI_MESSAGE_VOICE_CANCEL_USSD
#define HAVE_QMI_MESSAGE_VOICE_GET_CONFIG
#define HAVE_QMI_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT
#define HAVE_QMI_MESSAGE_VOICE_BURST_DTMF
#define HAVE_QMI_MESSAGE_VOICE_START_CONTINUOUS_DTMF
#define HAVE_QMI_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF
#define HAVE_QMI_INDICATION_VOICE_ALL_CALL_STATUS
#define HAVE_QMI_INDICATION_VOICE_SUPPLEMENTARY_SERVICE
#define HAVE_QMI_INDICATION_VOICE_RELEASE_USSD
#define HAVE_QMI_INDICATION_VOICE_USSD
#define HAVE_QMI_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT

/*****************************************************************************/
/* INDICATION: Qmi Indication VOICE All Call Status */


/* --- Output -- */


/**
 * QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall:
 * @id: a #guint8.
 * @presentation_indicator: a #QmiVoicePresentation.
 * @type: a string.
 *
 * A QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall struct.
 *
 * Since: 1.14
 */
typedef struct _QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall {
    guint8 id;
    QmiVoicePresentation presentation_indicator;
    gchar *type;
} QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall;

GType qmi_indication_voice_all_call_status_output_remote_party_number_call_get_type (void) G_GNUC_CONST;


/**
 * QmiIndicationVoiceAllCallStatusOutputCallInformationCall:
 * @id: a #guint8.
 * @state: a #QmiVoiceCallState.
 * @type: a #QmiVoiceCallType.
 * @direction: a #QmiVoiceCallDirection.
 * @mode: a #QmiVoiceCallMode.
 * @multipart_indicator: a #gboolean.
 * @als: a #QmiVoiceAls.
 *
 * A QmiIndicationVoiceAllCallStatusOutputCallInformationCall struct.
 *
 * Since: 1.14
 */
typedef struct _QmiIndicationVoiceAllCallStatusOutputCallInformationCall {
    guint8 id;
    QmiVoiceCallState state;
    QmiVoiceCallType type;
    QmiVoiceCallDirection direction;
    QmiVoiceCallMode mode;
    gboolean multipart_indicator;
    QmiVoiceAls als;
} QmiIndicationVoiceAllCallStatusOutputCallInformationCall;

GType qmi_indication_voice_all_call_status_output_call_information_call_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationVoiceAllCallStatusOutput:
 *
 * The #QmiIndicationVoiceAllCallStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiIndicationVoiceAllCallStatusOutput QmiIndicationVoiceAllCallStatusOutput;
GType qmi_indication_voice_all_call_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_VOICE_ALL_CALL_STATUS_OUTPUT (qmi_indication_voice_all_call_status_output_get_type ())


/**
 * qmi_indication_voice_all_call_status_output_get_remote_party_number: (skip)
 * @self: a #QmiIndicationVoiceAllCallStatusOutput.
 * @value_remote_party_number: (out)(optional)(element-type QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall)(transfer none): a placeholder for the output #GArray of #QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Remote Party Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_voice_all_call_status_output_get_remote_party_number (
    QmiIndicationVoiceAllCallStatusOutput *self,
    GArray **value_remote_party_number,
    GError **error);


/**
 * qmi_indication_voice_all_call_status_output_get_remote_party_number_gir: (rename-to qmi_indication_voice_all_call_status_output_get_remote_party_number)
 * @self: a #QmiIndicationVoiceAllCallStatusOutput.
 * @value_remote_party_number_ptr: (out)(optional)(element-type QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall)(transfer none): a placeholder for the output array of #QmiIndicationVoiceAllCallStatusOutputRemotePartyNumberCall elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Remote Party Number' field from @self.
 *
 * Version of qmi_indication_voice_all_call_status_output_get_remote_party_number() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_voice_all_call_status_output_get_remote_party_number_gir (
    QmiIndicationVoiceAllCallStatusOutput *self,
    GPtrArray **value_remote_party_number_ptr,
    GError **error);


/**
 * qmi_indication_voice_all_call_status_output_get_call_information: (skip)
 * @self: a #QmiIndicationVoiceAllCallStatusOutput.
 * @value_call_information: (out)(optional)(element-type QmiIndicationVoiceAllCallStatusOutputCallInformationCall)(transfer none): a placeholder for the output #GArray of #QmiIndicationVoiceAllCallStatusOutputCallInformationCall elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_voice_all_call_status_output_get_call_information (
    QmiIndicationVoiceAllCallStatusOutput *self,
    GArray **value_call_information,
    GError **error);


/**
 * qmi_indication_voice_all_call_status_output_get_call_information_gir: (rename-to qmi_indication_voice_all_call_status_output_get_call_information)
 * @self: a #QmiIndicationVoiceAllCallStatusOutput.
 * @value_call_information_ptr: (out)(optional)(element-type QmiIndicationVoiceAllCallStatusOutputCallInformationCall)(transfer none): a placeholder for the output array of #QmiIndicationVoiceAllCallStatusOutputCallInformationCall elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Information' field from @self.
 *
 * Version of qmi_indication_voice_all_call_status_output_get_call_information() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_voice_all_call_status_output_get_call_information_gir (
    QmiIndicationVoiceAllCallStatusOutput *self,
    GPtrArray **value_call_information_ptr,
    GError **error);


/**
 * qmi_indication_voice_all_call_status_output_ref:
 * @self: a #QmiIndicationVoiceAllCallStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiIndicationVoiceAllCallStatusOutput *qmi_indication_voice_all_call_status_output_ref (QmiIndicationVoiceAllCallStatusOutput *self);

/**
 * qmi_indication_voice_all_call_status_output_unref:
 * @self: a #QmiIndicationVoiceAllCallStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_indication_voice_all_call_status_output_unref (QmiIndicationVoiceAllCallStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationVoiceAllCallStatusOutput, qmi_indication_voice_all_call_status_output_unref)

/**
 * qmi_indication_voice_all_call_status_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationVoiceAllCallStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationVoiceAllCallStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_voice_all_call_status_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationVoiceAllCallStatusOutput *qmi_indication_voice_all_call_status_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication VOICE Supplementary Service */


/* --- Output -- */

/**
 * QmiIndicationVoiceSupplementaryServiceOutput:
 *
 * The #QmiIndicationVoiceSupplementaryServiceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiIndicationVoiceSupplementaryServiceOutput QmiIndicationVoiceSupplementaryServiceOutput;
GType qmi_indication_voice_supplementary_service_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_VOICE_SUPPLEMENTARY_SERVICE_OUTPUT (qmi_indication_voice_supplementary_service_output_get_type ())


/**
 * qmi_indication_voice_supplementary_service_output_get_info:
 * @self: a #QmiIndicationVoiceSupplementaryServiceOutput.
 * @value_info_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_info_notification_type: (out)(optional): a placeholder for the output #QmiVoiceSupplementaryServiceNotificationType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_voice_supplementary_service_output_get_info (
    QmiIndicationVoiceSupplementaryServiceOutput *self,
    guint8 *value_info_call_id,
    QmiVoiceSupplementaryServiceNotificationType *value_info_notification_type,
    GError **error);


/**
 * qmi_indication_voice_supplementary_service_output_ref:
 * @self: a #QmiIndicationVoiceSupplementaryServiceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiIndicationVoiceSupplementaryServiceOutput *qmi_indication_voice_supplementary_service_output_ref (QmiIndicationVoiceSupplementaryServiceOutput *self);

/**
 * qmi_indication_voice_supplementary_service_output_unref:
 * @self: a #QmiIndicationVoiceSupplementaryServiceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_indication_voice_supplementary_service_output_unref (QmiIndicationVoiceSupplementaryServiceOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationVoiceSupplementaryServiceOutput, qmi_indication_voice_supplementary_service_output_unref)

/**
 * qmi_indication_voice_supplementary_service_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationVoiceSupplementaryServiceOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationVoiceSupplementaryServiceOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_voice_supplementary_service_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationVoiceSupplementaryServiceOutput *qmi_indication_voice_supplementary_service_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication VOICE Release USSD */


/* --- Output -- */

/* Note: no fields in the Output container */

/*****************************************************************************/
/* INDICATION: Qmi Indication VOICE USSD */


/* --- Output -- */

/**
 * QmiIndicationVoiceUssdOutput:
 *
 * The #QmiIndicationVoiceUssdOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiIndicationVoiceUssdOutput QmiIndicationVoiceUssdOutput;
GType qmi_indication_voice_ussd_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_VOICE_USSD_OUTPUT (qmi_indication_voice_ussd_output_get_type ())


/**
 * qmi_indication_voice_ussd_output_get_uss_data_utf16:
 * @self: a #QmiIndicationVoiceUssdOutput.
 * @value_uss_data_utf16: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'USS Data UTF16' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_voice_ussd_output_get_uss_data_utf16 (
    QmiIndicationVoiceUssdOutput *self,
    GArray **value_uss_data_utf16,
    GError **error);


/**
 * qmi_indication_voice_ussd_output_get_uss_data:
 * @self: a #QmiIndicationVoiceUssdOutput.
 * @value_uss_data_data_coding_scheme: (out)(optional): a placeholder for the output #QmiVoiceUssDataCodingScheme, or %NULL if not required.
 * @value_uss_data_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'USS Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_voice_ussd_output_get_uss_data (
    QmiIndicationVoiceUssdOutput *self,
    QmiVoiceUssDataCodingScheme *value_uss_data_data_coding_scheme,
    GArray **value_uss_data_data,
    GError **error);


/**
 * qmi_indication_voice_ussd_output_get_user_action:
 * @self: a #QmiIndicationVoiceUssdOutput.
 * @value_user_action: (out)(optional): a placeholder for the output #QmiVoiceUserAction, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'User Action' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_voice_ussd_output_get_user_action (
    QmiIndicationVoiceUssdOutput *self,
    QmiVoiceUserAction *value_user_action,
    GError **error);


/**
 * qmi_indication_voice_ussd_output_ref:
 * @self: a #QmiIndicationVoiceUssdOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiIndicationVoiceUssdOutput *qmi_indication_voice_ussd_output_ref (QmiIndicationVoiceUssdOutput *self);

/**
 * qmi_indication_voice_ussd_output_unref:
 * @self: a #QmiIndicationVoiceUssdOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_indication_voice_ussd_output_unref (QmiIndicationVoiceUssdOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationVoiceUssdOutput, qmi_indication_voice_ussd_output_unref)

/**
 * qmi_indication_voice_ussd_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationVoiceUssdOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationVoiceUssdOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_voice_ussd_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationVoiceUssdOutput *qmi_indication_voice_ussd_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication VOICE Originate USSD No Wait */


/* --- Output -- */

/**
 * QmiIndicationVoiceOriginateUssdNoWaitOutput:
 *
 * The #QmiIndicationVoiceOriginateUssdNoWaitOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiIndicationVoiceOriginateUssdNoWaitOutput QmiIndicationVoiceOriginateUssdNoWaitOutput;
GType qmi_indication_voice_originate_ussd_no_wait_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT (qmi_indication_voice_originate_ussd_no_wait_output_get_type ())


/**
 * qmi_indication_voice_originate_ussd_no_wait_output_get_uss_data_utf16:
 * @self: a #QmiIndicationVoiceOriginateUssdNoWaitOutput.
 * @value_uss_data_utf16: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'USS Data UTF16' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_voice_originate_ussd_no_wait_output_get_uss_data_utf16 (
    QmiIndicationVoiceOriginateUssdNoWaitOutput *self,
    GArray **value_uss_data_utf16,
    GError **error);


/**
 * qmi_indication_voice_originate_ussd_no_wait_output_get_alpha_identifier:
 * @self: a #QmiIndicationVoiceOriginateUssdNoWaitOutput.
 * @value_alpha_identifier_data_coding_scheme: (out)(optional): a placeholder for the output #QmiVoiceAlphaDataCodingScheme, or %NULL if not required.
 * @value_alpha_identifier_alpha: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Alpha Identifier' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_voice_originate_ussd_no_wait_output_get_alpha_identifier (
    QmiIndicationVoiceOriginateUssdNoWaitOutput *self,
    QmiVoiceAlphaDataCodingScheme *value_alpha_identifier_data_coding_scheme,
    GArray **value_alpha_identifier_alpha,
    GError **error);


/**
 * qmi_indication_voice_originate_ussd_no_wait_output_get_uss_data:
 * @self: a #QmiIndicationVoiceOriginateUssdNoWaitOutput.
 * @value_uss_data_data_coding_scheme: (out)(optional): a placeholder for the output #QmiVoiceUssDataCodingScheme, or %NULL if not required.
 * @value_uss_data_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'USS Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_voice_originate_ussd_no_wait_output_get_uss_data (
    QmiIndicationVoiceOriginateUssdNoWaitOutput *self,
    QmiVoiceUssDataCodingScheme *value_uss_data_data_coding_scheme,
    GArray **value_uss_data_data,
    GError **error);


/**
 * qmi_indication_voice_originate_ussd_no_wait_output_get_failure_cause:
 * @self: a #QmiIndicationVoiceOriginateUssdNoWaitOutput.
 * @value_failure_cause: (out)(optional): a placeholder for the output #QmiVoiceCallEndReason, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Failure Cause' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_voice_originate_ussd_no_wait_output_get_failure_cause (
    QmiIndicationVoiceOriginateUssdNoWaitOutput *self,
    QmiVoiceCallEndReason *value_failure_cause,
    GError **error);


/**
 * qmi_indication_voice_originate_ussd_no_wait_output_get_error_code:
 * @self: a #QmiIndicationVoiceOriginateUssdNoWaitOutput.
 * @value_error_code: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Error Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_indication_voice_originate_ussd_no_wait_output_get_error_code (
    QmiIndicationVoiceOriginateUssdNoWaitOutput *self,
    guint16 *value_error_code,
    GError **error);


/**
 * qmi_indication_voice_originate_ussd_no_wait_output_ref:
 * @self: a #QmiIndicationVoiceOriginateUssdNoWaitOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiIndicationVoiceOriginateUssdNoWaitOutput *qmi_indication_voice_originate_ussd_no_wait_output_ref (QmiIndicationVoiceOriginateUssdNoWaitOutput *self);

/**
 * qmi_indication_voice_originate_ussd_no_wait_output_unref:
 * @self: a #QmiIndicationVoiceOriginateUssdNoWaitOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_indication_voice_originate_ussd_no_wait_output_unref (QmiIndicationVoiceOriginateUssdNoWaitOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationVoiceOriginateUssdNoWaitOutput, qmi_indication_voice_originate_ussd_no_wait_output_unref)

/**
 * qmi_indication_voice_originate_ussd_no_wait_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationVoiceOriginateUssdNoWaitOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationVoiceOriginateUssdNoWaitOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_voice_originate_ussd_no_wait_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationVoiceOriginateUssdNoWaitOutput *qmi_indication_voice_originate_ussd_no_wait_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Indication Register */


/* --- Input -- */

/**
 * QmiMessageVoiceIndicationRegisterInput:
 *
 * The #QmiMessageVoiceIndicationRegisterInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageVoiceIndicationRegisterInput QmiMessageVoiceIndicationRegisterInput;
GType qmi_message_voice_indication_register_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_INDICATION_REGISTER_INPUT (qmi_message_voice_indication_register_input_get_type ())


/**
 * qmi_message_voice_indication_register_input_get_mt_page_miss_information_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_mt_page_miss_information_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MT Page Miss Information Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_mt_page_miss_information_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_mt_page_miss_information_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_mt_page_miss_information_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_mt_page_miss_information_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'MT Page Miss Information Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_mt_page_miss_information_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_mt_page_miss_information_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_get_extended_burst_type_international_information_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_extended_burst_type_international_information_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Burst Type International Information Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_extended_burst_type_international_information_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_extended_burst_type_international_information_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_extended_burst_type_international_information_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_extended_burst_type_international_information_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Extended Burst Type International Information Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_extended_burst_type_international_information_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_extended_burst_type_international_information_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_get_conference_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_conference_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Conference Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_conference_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_conference_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_conference_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_conference_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Conference Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_conference_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_conference_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_get_aoc_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_aoc_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'AOC Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_aoc_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_aoc_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_aoc_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_aoc_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'AOC Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_aoc_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_aoc_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_get_uus_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_uus_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UUS Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_uus_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_uus_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_uus_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_uus_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UUS Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_uus_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_uus_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_get_modification_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_modification_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Modification Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_modification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_modification_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_modification_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_modification_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Modification Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_modification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_modification_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_get_ussd_notification_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_ussd_notification_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'USSD Notification Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_ussd_notification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_ussd_notification_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_ussd_notification_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_ussd_notification_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'USSD Notification Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_ussd_notification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_ussd_notification_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_get_speech_codec_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_speech_codec_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Speech Codec Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_speech_codec_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_speech_codec_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_speech_codec_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_speech_codec_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Speech Codec Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_speech_codec_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_speech_codec_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_get_handover_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_handover_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Handover Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_handover_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_handover_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_handover_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_handover_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Handover Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_handover_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_handover_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_get_call_notification_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_call_notification_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Notification Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_call_notification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_call_notification_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_call_notification_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_call_notification_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Call Notification Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_call_notification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_call_notification_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_get_supplementary_service_notification_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_supplementary_service_notification_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Supplementary Service Notification Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_supplementary_service_notification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_supplementary_service_notification_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_supplementary_service_notification_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_supplementary_service_notification_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Supplementary Service Notification Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_supplementary_service_notification_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_supplementary_service_notification_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_get_voice_privacy_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_voice_privacy_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Voice Privacy Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_voice_privacy_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_voice_privacy_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_voice_privacy_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_voice_privacy_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Voice Privacy Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_voice_privacy_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_voice_privacy_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_get_dtmf_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_dtmf_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'DTMF Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_get_dtmf_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean *value_dtmf_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_set_dtmf_events:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 * @value_dtmf_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'DTMF Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_input_set_dtmf_events (
    QmiMessageVoiceIndicationRegisterInput *self,
    gboolean value_dtmf_events,
    GError **error);


/**
 * qmi_message_voice_indication_register_input_ref:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageVoiceIndicationRegisterInput *qmi_message_voice_indication_register_input_ref (QmiMessageVoiceIndicationRegisterInput *self);

/**
 * qmi_message_voice_indication_register_input_unref:
 * @self: a #QmiMessageVoiceIndicationRegisterInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_voice_indication_register_input_unref (QmiMessageVoiceIndicationRegisterInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceIndicationRegisterInput, qmi_message_voice_indication_register_input_unref)

/**
 * qmi_message_voice_indication_register_input_new:
 *
 * Allocates a new #QmiMessageVoiceIndicationRegisterInput.
 *
 * Returns: the newly created #QmiMessageVoiceIndicationRegisterInput. The returned value should be freed with qmi_message_voice_indication_register_input_unref().
 *
 * Since: 1.26
 */
QmiMessageVoiceIndicationRegisterInput *qmi_message_voice_indication_register_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceIndicationRegisterOutput:
 *
 * The #QmiMessageVoiceIndicationRegisterOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageVoiceIndicationRegisterOutput QmiMessageVoiceIndicationRegisterOutput;
GType qmi_message_voice_indication_register_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_INDICATION_REGISTER_OUTPUT (qmi_message_voice_indication_register_output_get_type ())


/**
 * qmi_message_voice_indication_register_output_get_result:
 * @self: a QmiMessageVoiceIndicationRegisterOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_indication_register_output_get_result (
    QmiMessageVoiceIndicationRegisterOutput *self,
    GError **error);


/**
 * qmi_message_voice_indication_register_output_ref:
 * @self: a #QmiMessageVoiceIndicationRegisterOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageVoiceIndicationRegisterOutput *qmi_message_voice_indication_register_output_ref (QmiMessageVoiceIndicationRegisterOutput *self);

/**
 * qmi_message_voice_indication_register_output_unref:
 * @self: a #QmiMessageVoiceIndicationRegisterOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_voice_indication_register_output_unref (QmiMessageVoiceIndicationRegisterOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceIndicationRegisterOutput, qmi_message_voice_indication_register_output_unref)

/**
 * qmi_message_voice_indication_register_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceIndicationRegisterOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceIndicationRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_indication_register_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceIndicationRegisterOutput *qmi_message_voice_indication_register_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageVoiceGetSupportedMessagesOutput:
 *
 * The #QmiMessageVoiceGetSupportedMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceGetSupportedMessagesOutput QmiMessageVoiceGetSupportedMessagesOutput;
GType qmi_message_voice_get_supported_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_GET_SUPPORTED_MESSAGES_OUTPUT (qmi_message_voice_get_supported_messages_output_get_type ())


/**
 * qmi_message_voice_get_supported_messages_output_get_result:
 * @self: a QmiMessageVoiceGetSupportedMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_supported_messages_output_get_result (
    QmiMessageVoiceGetSupportedMessagesOutput *self,
    GError **error);


/**
 * qmi_message_voice_get_supported_messages_output_get_list:
 * @self: a #QmiMessageVoiceGetSupportedMessagesOutput.
 * @value_list: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_supported_messages_output_get_list (
    QmiMessageVoiceGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error);


/**
 * qmi_message_voice_get_supported_messages_output_ref:
 * @self: a #QmiMessageVoiceGetSupportedMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceGetSupportedMessagesOutput *qmi_message_voice_get_supported_messages_output_ref (QmiMessageVoiceGetSupportedMessagesOutput *self);

/**
 * qmi_message_voice_get_supported_messages_output_unref:
 * @self: a #QmiMessageVoiceGetSupportedMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_get_supported_messages_output_unref (QmiMessageVoiceGetSupportedMessagesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceGetSupportedMessagesOutput, qmi_message_voice_get_supported_messages_output_unref)

/**
 * qmi_message_voice_get_supported_messages_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceGetSupportedMessagesOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_get_supported_messages_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceGetSupportedMessagesOutput *qmi_message_voice_get_supported_messages_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Dial Call */


/* --- Input -- */

/**
 * QmiMessageVoiceDialCallInput:
 *
 * The #QmiMessageVoiceDialCallInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceDialCallInput QmiMessageVoiceDialCallInput;
GType qmi_message_voice_dial_call_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_DIAL_CALL_INPUT (qmi_message_voice_dial_call_input_get_type ())


/**
 * qmi_message_voice_dial_call_input_get_calling_number:
 * @self: a #QmiMessageVoiceDialCallInput.
 * @value_calling_number: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Calling Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_dial_call_input_get_calling_number (
    QmiMessageVoiceDialCallInput *self,
    const gchar **value_calling_number,
    GError **error);


/**
 * qmi_message_voice_dial_call_input_set_calling_number:
 * @self: a #QmiMessageVoiceDialCallInput.
 * @value_calling_number: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Calling Number' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_dial_call_input_set_calling_number (
    QmiMessageVoiceDialCallInput *self,
    const gchar *value_calling_number,
    GError **error);


/**
 * qmi_message_voice_dial_call_input_ref:
 * @self: a #QmiMessageVoiceDialCallInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceDialCallInput *qmi_message_voice_dial_call_input_ref (QmiMessageVoiceDialCallInput *self);

/**
 * qmi_message_voice_dial_call_input_unref:
 * @self: a #QmiMessageVoiceDialCallInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_dial_call_input_unref (QmiMessageVoiceDialCallInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceDialCallInput, qmi_message_voice_dial_call_input_unref)

/**
 * qmi_message_voice_dial_call_input_new:
 *
 * Allocates a new #QmiMessageVoiceDialCallInput.
 *
 * Returns: the newly created #QmiMessageVoiceDialCallInput. The returned value should be freed with qmi_message_voice_dial_call_input_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceDialCallInput *qmi_message_voice_dial_call_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceDialCallOutput:
 *
 * The #QmiMessageVoiceDialCallOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceDialCallOutput QmiMessageVoiceDialCallOutput;
GType qmi_message_voice_dial_call_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_DIAL_CALL_OUTPUT (qmi_message_voice_dial_call_output_get_type ())


/**
 * qmi_message_voice_dial_call_output_get_call_id:
 * @self: a #QmiMessageVoiceDialCallOutput.
 * @value_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_dial_call_output_get_call_id (
    QmiMessageVoiceDialCallOutput *self,
    guint8 *value_call_id,
    GError **error);


/**
 * qmi_message_voice_dial_call_output_get_result:
 * @self: a QmiMessageVoiceDialCallOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_dial_call_output_get_result (
    QmiMessageVoiceDialCallOutput *self,
    GError **error);


/**
 * qmi_message_voice_dial_call_output_ref:
 * @self: a #QmiMessageVoiceDialCallOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceDialCallOutput *qmi_message_voice_dial_call_output_ref (QmiMessageVoiceDialCallOutput *self);

/**
 * qmi_message_voice_dial_call_output_unref:
 * @self: a #QmiMessageVoiceDialCallOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_dial_call_output_unref (QmiMessageVoiceDialCallOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceDialCallOutput, qmi_message_voice_dial_call_output_unref)

/**
 * qmi_message_voice_dial_call_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceDialCallOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceDialCallOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_dial_call_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceDialCallOutput *qmi_message_voice_dial_call_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE End Call */


/* --- Input -- */

/**
 * QmiMessageVoiceEndCallInput:
 *
 * The #QmiMessageVoiceEndCallInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceEndCallInput QmiMessageVoiceEndCallInput;
GType qmi_message_voice_end_call_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_END_CALL_INPUT (qmi_message_voice_end_call_input_get_type ())


/**
 * qmi_message_voice_end_call_input_get_call_id:
 * @self: a #QmiMessageVoiceEndCallInput.
 * @value_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_end_call_input_get_call_id (
    QmiMessageVoiceEndCallInput *self,
    guint8 *value_call_id,
    GError **error);


/**
 * qmi_message_voice_end_call_input_set_call_id:
 * @self: a #QmiMessageVoiceEndCallInput.
 * @value_call_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Call ID' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_end_call_input_set_call_id (
    QmiMessageVoiceEndCallInput *self,
    guint8 value_call_id,
    GError **error);


/**
 * qmi_message_voice_end_call_input_ref:
 * @self: a #QmiMessageVoiceEndCallInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceEndCallInput *qmi_message_voice_end_call_input_ref (QmiMessageVoiceEndCallInput *self);

/**
 * qmi_message_voice_end_call_input_unref:
 * @self: a #QmiMessageVoiceEndCallInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_end_call_input_unref (QmiMessageVoiceEndCallInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceEndCallInput, qmi_message_voice_end_call_input_unref)

/**
 * qmi_message_voice_end_call_input_new:
 *
 * Allocates a new #QmiMessageVoiceEndCallInput.
 *
 * Returns: the newly created #QmiMessageVoiceEndCallInput. The returned value should be freed with qmi_message_voice_end_call_input_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceEndCallInput *qmi_message_voice_end_call_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceEndCallOutput:
 *
 * The #QmiMessageVoiceEndCallOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceEndCallOutput QmiMessageVoiceEndCallOutput;
GType qmi_message_voice_end_call_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_END_CALL_OUTPUT (qmi_message_voice_end_call_output_get_type ())


/**
 * qmi_message_voice_end_call_output_get_call_id:
 * @self: a #QmiMessageVoiceEndCallOutput.
 * @value_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_end_call_output_get_call_id (
    QmiMessageVoiceEndCallOutput *self,
    guint8 *value_call_id,
    GError **error);


/**
 * qmi_message_voice_end_call_output_get_result:
 * @self: a QmiMessageVoiceEndCallOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_end_call_output_get_result (
    QmiMessageVoiceEndCallOutput *self,
    GError **error);


/**
 * qmi_message_voice_end_call_output_ref:
 * @self: a #QmiMessageVoiceEndCallOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceEndCallOutput *qmi_message_voice_end_call_output_ref (QmiMessageVoiceEndCallOutput *self);

/**
 * qmi_message_voice_end_call_output_unref:
 * @self: a #QmiMessageVoiceEndCallOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_end_call_output_unref (QmiMessageVoiceEndCallOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceEndCallOutput, qmi_message_voice_end_call_output_unref)

/**
 * qmi_message_voice_end_call_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceEndCallOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceEndCallOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_end_call_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceEndCallOutput *qmi_message_voice_end_call_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Answer Call */


/* --- Input -- */

/**
 * QmiMessageVoiceAnswerCallInput:
 *
 * The #QmiMessageVoiceAnswerCallInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceAnswerCallInput QmiMessageVoiceAnswerCallInput;
GType qmi_message_voice_answer_call_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_ANSWER_CALL_INPUT (qmi_message_voice_answer_call_input_get_type ())


/**
 * qmi_message_voice_answer_call_input_get_call_id:
 * @self: a #QmiMessageVoiceAnswerCallInput.
 * @value_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_answer_call_input_get_call_id (
    QmiMessageVoiceAnswerCallInput *self,
    guint8 *value_call_id,
    GError **error);


/**
 * qmi_message_voice_answer_call_input_set_call_id:
 * @self: a #QmiMessageVoiceAnswerCallInput.
 * @value_call_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Call ID' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_answer_call_input_set_call_id (
    QmiMessageVoiceAnswerCallInput *self,
    guint8 value_call_id,
    GError **error);


/**
 * qmi_message_voice_answer_call_input_ref:
 * @self: a #QmiMessageVoiceAnswerCallInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceAnswerCallInput *qmi_message_voice_answer_call_input_ref (QmiMessageVoiceAnswerCallInput *self);

/**
 * qmi_message_voice_answer_call_input_unref:
 * @self: a #QmiMessageVoiceAnswerCallInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_answer_call_input_unref (QmiMessageVoiceAnswerCallInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceAnswerCallInput, qmi_message_voice_answer_call_input_unref)

/**
 * qmi_message_voice_answer_call_input_new:
 *
 * Allocates a new #QmiMessageVoiceAnswerCallInput.
 *
 * Returns: the newly created #QmiMessageVoiceAnswerCallInput. The returned value should be freed with qmi_message_voice_answer_call_input_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceAnswerCallInput *qmi_message_voice_answer_call_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceAnswerCallOutput:
 *
 * The #QmiMessageVoiceAnswerCallOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceAnswerCallOutput QmiMessageVoiceAnswerCallOutput;
GType qmi_message_voice_answer_call_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_ANSWER_CALL_OUTPUT (qmi_message_voice_answer_call_output_get_type ())


/**
 * qmi_message_voice_answer_call_output_get_call_id:
 * @self: a #QmiMessageVoiceAnswerCallOutput.
 * @value_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_answer_call_output_get_call_id (
    QmiMessageVoiceAnswerCallOutput *self,
    guint8 *value_call_id,
    GError **error);


/**
 * qmi_message_voice_answer_call_output_get_result:
 * @self: a QmiMessageVoiceAnswerCallOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_answer_call_output_get_result (
    QmiMessageVoiceAnswerCallOutput *self,
    GError **error);


/**
 * qmi_message_voice_answer_call_output_ref:
 * @self: a #QmiMessageVoiceAnswerCallOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceAnswerCallOutput *qmi_message_voice_answer_call_output_ref (QmiMessageVoiceAnswerCallOutput *self);

/**
 * qmi_message_voice_answer_call_output_unref:
 * @self: a #QmiMessageVoiceAnswerCallOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_answer_call_output_unref (QmiMessageVoiceAnswerCallOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceAnswerCallOutput, qmi_message_voice_answer_call_output_unref)

/**
 * qmi_message_voice_answer_call_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceAnswerCallOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceAnswerCallOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_answer_call_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceAnswerCallOutput *qmi_message_voice_answer_call_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Get All Call Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageVoiceGetAllCallInfoOutputCallInformationCall:
 * @id: a #guint8.
 * @state: a #QmiVoiceCallState.
 * @type: a #QmiVoiceCallType.
 * @direction: a #QmiVoiceCallDirection.
 * @mode: a #QmiVoiceCallMode.
 * @multipart_indicator: a #gboolean.
 * @als: a #QmiVoiceAls.
 *
 * A QmiMessageVoiceGetAllCallInfoOutputCallInformationCall struct.
 *
 * Since: 1.30.2
 */
typedef struct _QmiMessageVoiceGetAllCallInfoOutputCallInformationCall {
    guint8 id;
    QmiVoiceCallState state;
    QmiVoiceCallType type;
    QmiVoiceCallDirection direction;
    QmiVoiceCallMode mode;
    gboolean multipart_indicator;
    QmiVoiceAls als;
} QmiMessageVoiceGetAllCallInfoOutputCallInformationCall;

GType qmi_message_voice_get_all_call_info_output_call_information_call_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall:
 * @id: a #guint8.
 * @presentation_indicator: a #QmiVoicePresentation.
 * @type: a string.
 *
 * A QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall struct.
 *
 * Since: 1.30.2
 */
typedef struct _QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall {
    guint8 id;
    QmiVoicePresentation presentation_indicator;
    gchar *type;
} QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall;

GType qmi_message_voice_get_all_call_info_output_remote_party_number_call_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageVoiceGetAllCallInfoOutput:
 *
 * The #QmiMessageVoiceGetAllCallInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30.2
 */
typedef struct _QmiMessageVoiceGetAllCallInfoOutput QmiMessageVoiceGetAllCallInfoOutput;
GType qmi_message_voice_get_all_call_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_GET_ALL_CALL_INFO_OUTPUT (qmi_message_voice_get_all_call_info_output_get_type ())


/**
 * qmi_message_voice_get_all_call_info_output_get_result:
 * @self: a QmiMessageVoiceGetAllCallInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.30.2
 */
gboolean qmi_message_voice_get_all_call_info_output_get_result (
    QmiMessageVoiceGetAllCallInfoOutput *self,
    GError **error);


/**
 * qmi_message_voice_get_all_call_info_output_get_call_information: (skip)
 * @self: a #QmiMessageVoiceGetAllCallInfoOutput.
 * @value_call_information: (out)(optional)(element-type QmiMessageVoiceGetAllCallInfoOutputCallInformationCall)(transfer none): a placeholder for the output #GArray of #QmiMessageVoiceGetAllCallInfoOutputCallInformationCall elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30.2
 */
gboolean qmi_message_voice_get_all_call_info_output_get_call_information (
    QmiMessageVoiceGetAllCallInfoOutput *self,
    GArray **value_call_information,
    GError **error);


/**
 * qmi_message_voice_get_all_call_info_output_get_call_information_gir: (rename-to qmi_message_voice_get_all_call_info_output_get_call_information)
 * @self: a #QmiMessageVoiceGetAllCallInfoOutput.
 * @value_call_information_ptr: (out)(optional)(element-type QmiMessageVoiceGetAllCallInfoOutputCallInformationCall)(transfer none): a placeholder for the output array of #QmiMessageVoiceGetAllCallInfoOutputCallInformationCall elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Information' field from @self.
 *
 * Version of qmi_message_voice_get_all_call_info_output_get_call_information() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_get_all_call_info_output_get_call_information_gir (
    QmiMessageVoiceGetAllCallInfoOutput *self,
    GPtrArray **value_call_information_ptr,
    GError **error);


/**
 * qmi_message_voice_get_all_call_info_output_get_remote_party_number: (skip)
 * @self: a #QmiMessageVoiceGetAllCallInfoOutput.
 * @value_remote_party_number: (out)(optional)(element-type QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall)(transfer none): a placeholder for the output #GArray of #QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Remote Party Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30.2
 */
gboolean qmi_message_voice_get_all_call_info_output_get_remote_party_number (
    QmiMessageVoiceGetAllCallInfoOutput *self,
    GArray **value_remote_party_number,
    GError **error);


/**
 * qmi_message_voice_get_all_call_info_output_get_remote_party_number_gir: (rename-to qmi_message_voice_get_all_call_info_output_get_remote_party_number)
 * @self: a #QmiMessageVoiceGetAllCallInfoOutput.
 * @value_remote_party_number_ptr: (out)(optional)(element-type QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall)(transfer none): a placeholder for the output array of #QmiMessageVoiceGetAllCallInfoOutputRemotePartyNumberCall elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Remote Party Number' field from @self.
 *
 * Version of qmi_message_voice_get_all_call_info_output_get_remote_party_number() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_get_all_call_info_output_get_remote_party_number_gir (
    QmiMessageVoiceGetAllCallInfoOutput *self,
    GPtrArray **value_remote_party_number_ptr,
    GError **error);


/**
 * qmi_message_voice_get_all_call_info_output_ref:
 * @self: a #QmiMessageVoiceGetAllCallInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30.2
 */
QmiMessageVoiceGetAllCallInfoOutput *qmi_message_voice_get_all_call_info_output_ref (QmiMessageVoiceGetAllCallInfoOutput *self);

/**
 * qmi_message_voice_get_all_call_info_output_unref:
 * @self: a #QmiMessageVoiceGetAllCallInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30.2
 */
void qmi_message_voice_get_all_call_info_output_unref (QmiMessageVoiceGetAllCallInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceGetAllCallInfoOutput, qmi_message_voice_get_all_call_info_output_unref)

/**
 * qmi_message_voice_get_all_call_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceGetAllCallInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceGetAllCallInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_get_all_call_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceGetAllCallInfoOutput *qmi_message_voice_get_all_call_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Manage Calls */


/* --- Input -- */

/**
 * QmiMessageVoiceManageCallsInput:
 *
 * The #QmiMessageVoiceManageCallsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageVoiceManageCallsInput QmiMessageVoiceManageCallsInput;
GType qmi_message_voice_manage_calls_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_MANAGE_CALLS_INPUT (qmi_message_voice_manage_calls_input_get_type ())


/**
 * qmi_message_voice_manage_calls_input_get_call_id:
 * @self: a #QmiMessageVoiceManageCallsInput.
 * @value_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_manage_calls_input_get_call_id (
    QmiMessageVoiceManageCallsInput *self,
    guint8 *value_call_id,
    GError **error);


/**
 * qmi_message_voice_manage_calls_input_set_call_id:
 * @self: a #QmiMessageVoiceManageCallsInput.
 * @value_call_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Call ID' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_manage_calls_input_set_call_id (
    QmiMessageVoiceManageCallsInput *self,
    guint8 value_call_id,
    GError **error);


/**
 * qmi_message_voice_manage_calls_input_get_service_type:
 * @self: a #QmiMessageVoiceManageCallsInput.
 * @value_service_type: (out)(optional): a placeholder for the output #QmiVoiceSupplementaryServiceType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_manage_calls_input_get_service_type (
    QmiMessageVoiceManageCallsInput *self,
    QmiVoiceSupplementaryServiceType *value_service_type,
    GError **error);


/**
 * qmi_message_voice_manage_calls_input_set_service_type:
 * @self: a #QmiMessageVoiceManageCallsInput.
 * @value_service_type: a #QmiVoiceSupplementaryServiceType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Service Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_manage_calls_input_set_service_type (
    QmiMessageVoiceManageCallsInput *self,
    QmiVoiceSupplementaryServiceType value_service_type,
    GError **error);


/**
 * qmi_message_voice_manage_calls_input_ref:
 * @self: a #QmiMessageVoiceManageCallsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageVoiceManageCallsInput *qmi_message_voice_manage_calls_input_ref (QmiMessageVoiceManageCallsInput *self);

/**
 * qmi_message_voice_manage_calls_input_unref:
 * @self: a #QmiMessageVoiceManageCallsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_voice_manage_calls_input_unref (QmiMessageVoiceManageCallsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceManageCallsInput, qmi_message_voice_manage_calls_input_unref)

/**
 * qmi_message_voice_manage_calls_input_new:
 *
 * Allocates a new #QmiMessageVoiceManageCallsInput.
 *
 * Returns: the newly created #QmiMessageVoiceManageCallsInput. The returned value should be freed with qmi_message_voice_manage_calls_input_unref().
 *
 * Since: 1.30
 */
QmiMessageVoiceManageCallsInput *qmi_message_voice_manage_calls_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceManageCallsOutput:
 *
 * The #QmiMessageVoiceManageCallsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageVoiceManageCallsOutput QmiMessageVoiceManageCallsOutput;
GType qmi_message_voice_manage_calls_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_MANAGE_CALLS_OUTPUT (qmi_message_voice_manage_calls_output_get_type ())


/**
 * qmi_message_voice_manage_calls_output_get_result:
 * @self: a QmiMessageVoiceManageCallsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_manage_calls_output_get_result (
    QmiMessageVoiceManageCallsOutput *self,
    GError **error);


/**
 * qmi_message_voice_manage_calls_output_ref:
 * @self: a #QmiMessageVoiceManageCallsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageVoiceManageCallsOutput *qmi_message_voice_manage_calls_output_ref (QmiMessageVoiceManageCallsOutput *self);

/**
 * qmi_message_voice_manage_calls_output_unref:
 * @self: a #QmiMessageVoiceManageCallsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_voice_manage_calls_output_unref (QmiMessageVoiceManageCallsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceManageCallsOutput, qmi_message_voice_manage_calls_output_unref)

/**
 * qmi_message_voice_manage_calls_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceManageCallsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceManageCallsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_manage_calls_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceManageCallsOutput *qmi_message_voice_manage_calls_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Set Supplementary Service */


/* --- Input -- */

/**
 * QmiMessageVoiceSetSupplementaryServiceInput:
 *
 * The #QmiMessageVoiceSetSupplementaryServiceInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageVoiceSetSupplementaryServiceInput QmiMessageVoiceSetSupplementaryServiceInput;
GType qmi_message_voice_set_supplementary_service_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_INPUT (qmi_message_voice_set_supplementary_service_input_get_type ())


/**
 * qmi_message_voice_set_supplementary_service_input_get_supplementary_service_information:
 * @self: a #QmiMessageVoiceSetSupplementaryServiceInput.
 * @value_supplementary_service_information_supplementary_service_action: (out)(optional): a placeholder for the output #QmiVoiceSupplementaryServiceAction, or %NULL if not required.
 * @value_supplementary_service_information_supplementary_service_reason: (out)(optional): a placeholder for the output #QmiVoiceSupplementaryServiceReason, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Supplementary Service Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_set_supplementary_service_input_get_supplementary_service_information (
    QmiMessageVoiceSetSupplementaryServiceInput *self,
    QmiVoiceSupplementaryServiceAction *value_supplementary_service_information_supplementary_service_action,
    QmiVoiceSupplementaryServiceReason *value_supplementary_service_information_supplementary_service_reason,
    GError **error);


/**
 * qmi_message_voice_set_supplementary_service_input_set_supplementary_service_information:
 * @self: a #QmiMessageVoiceSetSupplementaryServiceInput.
 * @value_supplementary_service_information_supplementary_service_action: a #QmiVoiceSupplementaryServiceAction.
 * @value_supplementary_service_information_supplementary_service_reason: a #QmiVoiceSupplementaryServiceReason.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Supplementary Service Information' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_set_supplementary_service_input_set_supplementary_service_information (
    QmiMessageVoiceSetSupplementaryServiceInput *self,
    QmiVoiceSupplementaryServiceAction value_supplementary_service_information_supplementary_service_action,
    QmiVoiceSupplementaryServiceReason value_supplementary_service_information_supplementary_service_reason,
    GError **error);


/**
 * qmi_message_voice_set_supplementary_service_input_ref:
 * @self: a #QmiMessageVoiceSetSupplementaryServiceInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageVoiceSetSupplementaryServiceInput *qmi_message_voice_set_supplementary_service_input_ref (QmiMessageVoiceSetSupplementaryServiceInput *self);

/**
 * qmi_message_voice_set_supplementary_service_input_unref:
 * @self: a #QmiMessageVoiceSetSupplementaryServiceInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_voice_set_supplementary_service_input_unref (QmiMessageVoiceSetSupplementaryServiceInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceSetSupplementaryServiceInput, qmi_message_voice_set_supplementary_service_input_unref)

/**
 * qmi_message_voice_set_supplementary_service_input_new:
 *
 * Allocates a new #QmiMessageVoiceSetSupplementaryServiceInput.
 *
 * Returns: the newly created #QmiMessageVoiceSetSupplementaryServiceInput. The returned value should be freed with qmi_message_voice_set_supplementary_service_input_unref().
 *
 * Since: 1.30
 */
QmiMessageVoiceSetSupplementaryServiceInput *qmi_message_voice_set_supplementary_service_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceSetSupplementaryServiceOutput:
 *
 * The #QmiMessageVoiceSetSupplementaryServiceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageVoiceSetSupplementaryServiceOutput QmiMessageVoiceSetSupplementaryServiceOutput;
GType qmi_message_voice_set_supplementary_service_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_SET_SUPPLEMENTARY_SERVICE_OUTPUT (qmi_message_voice_set_supplementary_service_output_get_type ())


/**
 * qmi_message_voice_set_supplementary_service_output_get_result:
 * @self: a QmiMessageVoiceSetSupplementaryServiceOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_set_supplementary_service_output_get_result (
    QmiMessageVoiceSetSupplementaryServiceOutput *self,
    GError **error);


/**
 * qmi_message_voice_set_supplementary_service_output_get_service_status:
 * @self: a #QmiMessageVoiceSetSupplementaryServiceOutput.
 * @value_service_status_active: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_service_status_provisioned: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_set_supplementary_service_output_get_service_status (
    QmiMessageVoiceSetSupplementaryServiceOutput *self,
    gboolean *value_service_status_active,
    gboolean *value_service_status_provisioned,
    GError **error);


/**
 * qmi_message_voice_set_supplementary_service_output_ref:
 * @self: a #QmiMessageVoiceSetSupplementaryServiceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageVoiceSetSupplementaryServiceOutput *qmi_message_voice_set_supplementary_service_output_ref (QmiMessageVoiceSetSupplementaryServiceOutput *self);

/**
 * qmi_message_voice_set_supplementary_service_output_unref:
 * @self: a #QmiMessageVoiceSetSupplementaryServiceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_voice_set_supplementary_service_output_unref (QmiMessageVoiceSetSupplementaryServiceOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceSetSupplementaryServiceOutput, qmi_message_voice_set_supplementary_service_output_unref)

/**
 * qmi_message_voice_set_supplementary_service_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceSetSupplementaryServiceOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceSetSupplementaryServiceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_set_supplementary_service_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceSetSupplementaryServiceOutput *qmi_message_voice_set_supplementary_service_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Get Call Waiting */


/* --- Input -- */

/**
 * QmiMessageVoiceGetCallWaitingInput:
 *
 * The #QmiMessageVoiceGetCallWaitingInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageVoiceGetCallWaitingInput QmiMessageVoiceGetCallWaitingInput;
GType qmi_message_voice_get_call_waiting_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_GET_CALL_WAITING_INPUT (qmi_message_voice_get_call_waiting_input_get_type ())


/**
 * qmi_message_voice_get_call_waiting_input_get_service_class:
 * @self: a #QmiMessageVoiceGetCallWaitingInput.
 * @value_service_class: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Class' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_get_call_waiting_input_get_service_class (
    QmiMessageVoiceGetCallWaitingInput *self,
    guint8 *value_service_class,
    GError **error);


/**
 * qmi_message_voice_get_call_waiting_input_set_service_class:
 * @self: a #QmiMessageVoiceGetCallWaitingInput.
 * @value_service_class: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Service Class' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_get_call_waiting_input_set_service_class (
    QmiMessageVoiceGetCallWaitingInput *self,
    guint8 value_service_class,
    GError **error);


/**
 * qmi_message_voice_get_call_waiting_input_ref:
 * @self: a #QmiMessageVoiceGetCallWaitingInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageVoiceGetCallWaitingInput *qmi_message_voice_get_call_waiting_input_ref (QmiMessageVoiceGetCallWaitingInput *self);

/**
 * qmi_message_voice_get_call_waiting_input_unref:
 * @self: a #QmiMessageVoiceGetCallWaitingInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_voice_get_call_waiting_input_unref (QmiMessageVoiceGetCallWaitingInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceGetCallWaitingInput, qmi_message_voice_get_call_waiting_input_unref)

/**
 * qmi_message_voice_get_call_waiting_input_new:
 *
 * Allocates a new #QmiMessageVoiceGetCallWaitingInput.
 *
 * Returns: the newly created #QmiMessageVoiceGetCallWaitingInput. The returned value should be freed with qmi_message_voice_get_call_waiting_input_unref().
 *
 * Since: 1.30
 */
QmiMessageVoiceGetCallWaitingInput *qmi_message_voice_get_call_waiting_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceGetCallWaitingOutput:
 *
 * The #QmiMessageVoiceGetCallWaitingOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageVoiceGetCallWaitingOutput QmiMessageVoiceGetCallWaitingOutput;
GType qmi_message_voice_get_call_waiting_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_GET_CALL_WAITING_OUTPUT (qmi_message_voice_get_call_waiting_output_get_type ())


/**
 * qmi_message_voice_get_call_waiting_output_get_result:
 * @self: a QmiMessageVoiceGetCallWaitingOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_get_call_waiting_output_get_result (
    QmiMessageVoiceGetCallWaitingOutput *self,
    GError **error);


/**
 * qmi_message_voice_get_call_waiting_output_get_service_class:
 * @self: a #QmiMessageVoiceGetCallWaitingOutput.
 * @value_service_class: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Class' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_voice_get_call_waiting_output_get_service_class (
    QmiMessageVoiceGetCallWaitingOutput *self,
    guint8 *value_service_class,
    GError **error);


/**
 * qmi_message_voice_get_call_waiting_output_ref:
 * @self: a #QmiMessageVoiceGetCallWaitingOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageVoiceGetCallWaitingOutput *qmi_message_voice_get_call_waiting_output_ref (QmiMessageVoiceGetCallWaitingOutput *self);

/**
 * qmi_message_voice_get_call_waiting_output_unref:
 * @self: a #QmiMessageVoiceGetCallWaitingOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_voice_get_call_waiting_output_unref (QmiMessageVoiceGetCallWaitingOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceGetCallWaitingOutput, qmi_message_voice_get_call_waiting_output_unref)

/**
 * qmi_message_voice_get_call_waiting_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceGetCallWaitingOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceGetCallWaitingOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_get_call_waiting_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceGetCallWaitingOutput *qmi_message_voice_get_call_waiting_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Originate USSD */


/* --- Input -- */

/**
 * QmiMessageVoiceOriginateUssdInput:
 *
 * The #QmiMessageVoiceOriginateUssdInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageVoiceOriginateUssdInput QmiMessageVoiceOriginateUssdInput;
GType qmi_message_voice_originate_ussd_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_ORIGINATE_USSD_INPUT (qmi_message_voice_originate_ussd_input_get_type ())


/**
 * qmi_message_voice_originate_ussd_input_get_uss_data:
 * @self: a #QmiMessageVoiceOriginateUssdInput.
 * @value_uss_data_data_coding_scheme: (out)(optional): a placeholder for the output #QmiVoiceUssDataCodingScheme, or %NULL if not required.
 * @value_uss_data_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'USS Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_input_get_uss_data (
    QmiMessageVoiceOriginateUssdInput *self,
    QmiVoiceUssDataCodingScheme *value_uss_data_data_coding_scheme,
    GArray **value_uss_data_data,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_input_set_uss_data:
 * @self: a #QmiMessageVoiceOriginateUssdInput.
 * @value_uss_data_data_coding_scheme: a #QmiVoiceUssDataCodingScheme.
 * @value_uss_data_data: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_uss_data_data will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'USS Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_input_set_uss_data (
    QmiMessageVoiceOriginateUssdInput *self,
    QmiVoiceUssDataCodingScheme value_uss_data_data_coding_scheme,
    GArray *value_uss_data_data,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_input_ref:
 * @self: a #QmiMessageVoiceOriginateUssdInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageVoiceOriginateUssdInput *qmi_message_voice_originate_ussd_input_ref (QmiMessageVoiceOriginateUssdInput *self);

/**
 * qmi_message_voice_originate_ussd_input_unref:
 * @self: a #QmiMessageVoiceOriginateUssdInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_voice_originate_ussd_input_unref (QmiMessageVoiceOriginateUssdInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceOriginateUssdInput, qmi_message_voice_originate_ussd_input_unref)

/**
 * qmi_message_voice_originate_ussd_input_new:
 *
 * Allocates a new #QmiMessageVoiceOriginateUssdInput.
 *
 * Returns: the newly created #QmiMessageVoiceOriginateUssdInput. The returned value should be freed with qmi_message_voice_originate_ussd_input_unref().
 *
 * Since: 1.26
 */
QmiMessageVoiceOriginateUssdInput *qmi_message_voice_originate_ussd_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceOriginateUssdOutput:
 *
 * The #QmiMessageVoiceOriginateUssdOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageVoiceOriginateUssdOutput QmiMessageVoiceOriginateUssdOutput;
GType qmi_message_voice_originate_ussd_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_ORIGINATE_USSD_OUTPUT (qmi_message_voice_originate_ussd_output_get_type ())


/**
 * qmi_message_voice_originate_ussd_output_get_uss_data_utf16:
 * @self: a #QmiMessageVoiceOriginateUssdOutput.
 * @value_uss_data_utf16: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'USS Data UTF16' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_output_get_uss_data_utf16 (
    QmiMessageVoiceOriginateUssdOutput *self,
    GArray **value_uss_data_utf16,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_output_get_call_control_supplementary_service_type:
 * @self: a #QmiMessageVoiceOriginateUssdOutput.
 * @value_call_control_supplementary_service_type: (out)(optional): a placeholder for the output #QmiVoiceCallControlSupplementaryServiceType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Control Supplementary Service Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_output_get_call_control_supplementary_service_type (
    QmiMessageVoiceOriginateUssdOutput *self,
    QmiVoiceCallControlSupplementaryServiceType *value_call_control_supplementary_service_type,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_output_get_call_id:
 * @self: a #QmiMessageVoiceOriginateUssdOutput.
 * @value_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_output_get_call_id (
    QmiMessageVoiceOriginateUssdOutput *self,
    guint8 *value_call_id,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_output_get_call_control_result_type:
 * @self: a #QmiMessageVoiceOriginateUssdOutput.
 * @value_call_control_result_type: (out)(optional): a placeholder for the output #QmiVoiceCallControlResultType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Control Result Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_output_get_call_control_result_type (
    QmiMessageVoiceOriginateUssdOutput *self,
    QmiVoiceCallControlResultType *value_call_control_result_type,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_output_get_uss_data:
 * @self: a #QmiMessageVoiceOriginateUssdOutput.
 * @value_uss_data_data_coding_scheme: (out)(optional): a placeholder for the output #QmiVoiceUssDataCodingScheme, or %NULL if not required.
 * @value_uss_data_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'USS Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_output_get_uss_data (
    QmiMessageVoiceOriginateUssdOutput *self,
    QmiVoiceUssDataCodingScheme *value_uss_data_data_coding_scheme,
    GArray **value_uss_data_data,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_output_get_alpha_identifier:
 * @self: a #QmiMessageVoiceOriginateUssdOutput.
 * @value_alpha_identifier_data_coding_scheme: (out)(optional): a placeholder for the output #QmiVoiceAlphaDataCodingScheme, or %NULL if not required.
 * @value_alpha_identifier_alpha: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Alpha Identifier' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_output_get_alpha_identifier (
    QmiMessageVoiceOriginateUssdOutput *self,
    QmiVoiceAlphaDataCodingScheme *value_alpha_identifier_data_coding_scheme,
    GArray **value_alpha_identifier_alpha,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_output_get_failure_cause:
 * @self: a #QmiMessageVoiceOriginateUssdOutput.
 * @value_failure_cause: (out)(optional): a placeholder for the output #QmiVoiceCallEndReason, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Failure Cause' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_output_get_failure_cause (
    QmiMessageVoiceOriginateUssdOutput *self,
    QmiVoiceCallEndReason *value_failure_cause,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_output_get_result:
 * @self: a QmiMessageVoiceOriginateUssdOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_output_get_result (
    QmiMessageVoiceOriginateUssdOutput *self,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_output_ref:
 * @self: a #QmiMessageVoiceOriginateUssdOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageVoiceOriginateUssdOutput *qmi_message_voice_originate_ussd_output_ref (QmiMessageVoiceOriginateUssdOutput *self);

/**
 * qmi_message_voice_originate_ussd_output_unref:
 * @self: a #QmiMessageVoiceOriginateUssdOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_voice_originate_ussd_output_unref (QmiMessageVoiceOriginateUssdOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceOriginateUssdOutput, qmi_message_voice_originate_ussd_output_unref)

/**
 * qmi_message_voice_originate_ussd_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceOriginateUssdOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceOriginateUssdOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_originate_ussd_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceOriginateUssdOutput *qmi_message_voice_originate_ussd_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Answer USSD */


/* --- Input -- */

/**
 * QmiMessageVoiceAnswerUssdInput:
 *
 * The #QmiMessageVoiceAnswerUssdInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageVoiceAnswerUssdInput QmiMessageVoiceAnswerUssdInput;
GType qmi_message_voice_answer_ussd_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_ANSWER_USSD_INPUT (qmi_message_voice_answer_ussd_input_get_type ())


/**
 * qmi_message_voice_answer_ussd_input_get_uss_data:
 * @self: a #QmiMessageVoiceAnswerUssdInput.
 * @value_uss_data_data_coding_scheme: (out)(optional): a placeholder for the output #QmiVoiceUssDataCodingScheme, or %NULL if not required.
 * @value_uss_data_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'USS Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_answer_ussd_input_get_uss_data (
    QmiMessageVoiceAnswerUssdInput *self,
    QmiVoiceUssDataCodingScheme *value_uss_data_data_coding_scheme,
    GArray **value_uss_data_data,
    GError **error);


/**
 * qmi_message_voice_answer_ussd_input_set_uss_data:
 * @self: a #QmiMessageVoiceAnswerUssdInput.
 * @value_uss_data_data_coding_scheme: a #QmiVoiceUssDataCodingScheme.
 * @value_uss_data_data: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_uss_data_data will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'USS Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_answer_ussd_input_set_uss_data (
    QmiMessageVoiceAnswerUssdInput *self,
    QmiVoiceUssDataCodingScheme value_uss_data_data_coding_scheme,
    GArray *value_uss_data_data,
    GError **error);


/**
 * qmi_message_voice_answer_ussd_input_ref:
 * @self: a #QmiMessageVoiceAnswerUssdInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageVoiceAnswerUssdInput *qmi_message_voice_answer_ussd_input_ref (QmiMessageVoiceAnswerUssdInput *self);

/**
 * qmi_message_voice_answer_ussd_input_unref:
 * @self: a #QmiMessageVoiceAnswerUssdInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_voice_answer_ussd_input_unref (QmiMessageVoiceAnswerUssdInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceAnswerUssdInput, qmi_message_voice_answer_ussd_input_unref)

/**
 * qmi_message_voice_answer_ussd_input_new:
 *
 * Allocates a new #QmiMessageVoiceAnswerUssdInput.
 *
 * Returns: the newly created #QmiMessageVoiceAnswerUssdInput. The returned value should be freed with qmi_message_voice_answer_ussd_input_unref().
 *
 * Since: 1.26
 */
QmiMessageVoiceAnswerUssdInput *qmi_message_voice_answer_ussd_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceAnswerUssdOutput:
 *
 * The #QmiMessageVoiceAnswerUssdOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageVoiceAnswerUssdOutput QmiMessageVoiceAnswerUssdOutput;
GType qmi_message_voice_answer_ussd_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_ANSWER_USSD_OUTPUT (qmi_message_voice_answer_ussd_output_get_type ())


/**
 * qmi_message_voice_answer_ussd_output_get_result:
 * @self: a QmiMessageVoiceAnswerUssdOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_answer_ussd_output_get_result (
    QmiMessageVoiceAnswerUssdOutput *self,
    GError **error);


/**
 * qmi_message_voice_answer_ussd_output_ref:
 * @self: a #QmiMessageVoiceAnswerUssdOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageVoiceAnswerUssdOutput *qmi_message_voice_answer_ussd_output_ref (QmiMessageVoiceAnswerUssdOutput *self);

/**
 * qmi_message_voice_answer_ussd_output_unref:
 * @self: a #QmiMessageVoiceAnswerUssdOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_voice_answer_ussd_output_unref (QmiMessageVoiceAnswerUssdOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceAnswerUssdOutput, qmi_message_voice_answer_ussd_output_unref)

/**
 * qmi_message_voice_answer_ussd_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceAnswerUssdOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceAnswerUssdOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_answer_ussd_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceAnswerUssdOutput *qmi_message_voice_answer_ussd_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Cancel USSD */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageVoiceCancelUssdOutput:
 *
 * The #QmiMessageVoiceCancelUssdOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageVoiceCancelUssdOutput QmiMessageVoiceCancelUssdOutput;
GType qmi_message_voice_cancel_ussd_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_CANCEL_USSD_OUTPUT (qmi_message_voice_cancel_ussd_output_get_type ())


/**
 * qmi_message_voice_cancel_ussd_output_get_result:
 * @self: a QmiMessageVoiceCancelUssdOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_cancel_ussd_output_get_result (
    QmiMessageVoiceCancelUssdOutput *self,
    GError **error);


/**
 * qmi_message_voice_cancel_ussd_output_ref:
 * @self: a #QmiMessageVoiceCancelUssdOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageVoiceCancelUssdOutput *qmi_message_voice_cancel_ussd_output_ref (QmiMessageVoiceCancelUssdOutput *self);

/**
 * qmi_message_voice_cancel_ussd_output_unref:
 * @self: a #QmiMessageVoiceCancelUssdOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_voice_cancel_ussd_output_unref (QmiMessageVoiceCancelUssdOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceCancelUssdOutput, qmi_message_voice_cancel_ussd_output_unref)

/**
 * qmi_message_voice_cancel_ussd_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceCancelUssdOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceCancelUssdOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_cancel_ussd_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceCancelUssdOutput *qmi_message_voice_cancel_ussd_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Get Config */


/* --- Input -- */

/**
 * QmiMessageVoiceGetConfigInput:
 *
 * The #QmiMessageVoiceGetConfigInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceGetConfigInput QmiMessageVoiceGetConfigInput;
GType qmi_message_voice_get_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_GET_CONFIG_INPUT (qmi_message_voice_get_config_input_get_type ())


/**
 * qmi_message_voice_get_config_input_get_voice_domain_preference:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_voice_domain_preference: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Voice Domain Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_voice_domain_preference (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_voice_domain_preference,
    GError **error);


/**
 * qmi_message_voice_get_config_input_set_voice_domain_preference:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_voice_domain_preference: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Voice Domain Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_voice_domain_preference (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_voice_domain_preference,
    GError **error);


/**
 * qmi_message_voice_get_config_input_get_nam_index:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_nam_index: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NAM Index' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_nam_index (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_nam_index,
    GError **error);


/**
 * qmi_message_voice_get_config_input_set_nam_index:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_nam_index: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NAM Index' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_nam_index (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_nam_index,
    GError **error);


/**
 * qmi_message_voice_get_config_input_get_preferred_voice_privacy:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_preferred_voice_privacy: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preferred Voice Privacy' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_preferred_voice_privacy (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_preferred_voice_privacy,
    GError **error);


/**
 * qmi_message_voice_get_config_input_set_preferred_voice_privacy:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_preferred_voice_privacy: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Preferred Voice Privacy' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_preferred_voice_privacy (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_preferred_voice_privacy,
    GError **error);


/**
 * qmi_message_voice_get_config_input_get_amr_status:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_amr_status: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'AMR Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_amr_status (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_amr_status,
    GError **error);


/**
 * qmi_message_voice_get_config_input_set_amr_status:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_amr_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'AMR Status' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_amr_status (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_amr_status,
    GError **error);


/**
 * qmi_message_voice_get_config_input_get_preferred_voice_service_option:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_preferred_voice_service_option: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preferred Voice Service Option' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_preferred_voice_service_option (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_preferred_voice_service_option,
    GError **error);


/**
 * qmi_message_voice_get_config_input_set_preferred_voice_service_option:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_preferred_voice_service_option: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Preferred Voice Service Option' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_preferred_voice_service_option (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_preferred_voice_service_option,
    GError **error);


/**
 * qmi_message_voice_get_config_input_get_tty_mode:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_tty_mode: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TTY Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_tty_mode (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_tty_mode,
    GError **error);


/**
 * qmi_message_voice_get_config_input_set_tty_mode:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_tty_mode: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'TTY Mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_tty_mode (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_tty_mode,
    GError **error);


/**
 * qmi_message_voice_get_config_input_get_roam_timer:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_roam_timer: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roam Timer' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_roam_timer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_roam_timer,
    GError **error);


/**
 * qmi_message_voice_get_config_input_set_roam_timer:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_roam_timer: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Roam Timer' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_roam_timer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_roam_timer,
    GError **error);


/**
 * qmi_message_voice_get_config_input_get_air_timer:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_air_timer: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Air Timer' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_air_timer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_air_timer,
    GError **error);


/**
 * qmi_message_voice_get_config_input_set_air_timer:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_air_timer: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Air Timer' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_air_timer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_air_timer,
    GError **error);


/**
 * qmi_message_voice_get_config_input_get_auto_answer:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_auto_answer: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Auto Answer' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_get_auto_answer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean *value_auto_answer,
    GError **error);


/**
 * qmi_message_voice_get_config_input_set_auto_answer:
 * @self: a #QmiMessageVoiceGetConfigInput.
 * @value_auto_answer: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Auto Answer' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_input_set_auto_answer (
    QmiMessageVoiceGetConfigInput *self,
    gboolean value_auto_answer,
    GError **error);


/**
 * qmi_message_voice_get_config_input_ref:
 * @self: a #QmiMessageVoiceGetConfigInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceGetConfigInput *qmi_message_voice_get_config_input_ref (QmiMessageVoiceGetConfigInput *self);

/**
 * qmi_message_voice_get_config_input_unref:
 * @self: a #QmiMessageVoiceGetConfigInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_get_config_input_unref (QmiMessageVoiceGetConfigInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceGetConfigInput, qmi_message_voice_get_config_input_unref)

/**
 * qmi_message_voice_get_config_input_new:
 *
 * Allocates a new #QmiMessageVoiceGetConfigInput.
 *
 * Returns: the newly created #QmiMessageVoiceGetConfigInput. The returned value should be freed with qmi_message_voice_get_config_input_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceGetConfigInput *qmi_message_voice_get_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceGetConfigOutput:
 *
 * The #QmiMessageVoiceGetConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageVoiceGetConfigOutput QmiMessageVoiceGetConfigOutput;
GType qmi_message_voice_get_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_GET_CONFIG_OUTPUT (qmi_message_voice_get_config_output_get_type ())


/**
 * qmi_message_voice_get_config_output_get_current_voice_domain_preference:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_current_voice_domain_preference: (out)(optional): a placeholder for the output #QmiVoiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Voice Domain Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_current_voice_domain_preference (
    QmiMessageVoiceGetConfigOutput *self,
    QmiVoiceDomain *value_current_voice_domain_preference,
    GError **error);


/**
 * qmi_message_voice_get_config_output_get_current_voice_privacy_preference:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_current_voice_privacy_preference: (out)(optional): a placeholder for the output #QmiVoicePrivacy, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Voice Privacy Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_current_voice_privacy_preference (
    QmiMessageVoiceGetConfigOutput *self,
    QmiVoicePrivacy *value_current_voice_privacy_preference,
    GError **error);


/**
 * qmi_message_voice_get_config_output_get_current_amr_status:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_current_amr_status_gsm: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_current_amr_status_wcdma: (out)(optional): a placeholder for the output #QmiVoiceWcdmaAmrStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current AMR Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_current_amr_status (
    QmiMessageVoiceGetConfigOutput *self,
    gboolean *value_current_amr_status_gsm,
    QmiVoiceWcdmaAmrStatus *value_current_amr_status_wcdma,
    GError **error);


/**
 * qmi_message_voice_get_config_output_get_current_preferred_voice_so:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_current_preferred_voice_so_nam_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_current_preferred_voice_so_evrc_capability: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_current_preferred_voice_so_home_page_voice_service_option: (out)(optional): a placeholder for the output #QmiVoiceServiceOption, or %NULL if not required.
 * @value_current_preferred_voice_so_home_origination_voice_service_option: (out)(optional): a placeholder for the output #QmiVoiceServiceOption, or %NULL if not required.
 * @value_current_preferred_voice_so_roaming_origination_voice_service_option: (out)(optional): a placeholder for the output #QmiVoiceServiceOption, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Preferred Voice SO' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_current_preferred_voice_so (
    QmiMessageVoiceGetConfigOutput *self,
    guint8 *value_current_preferred_voice_so_nam_id,
    gboolean *value_current_preferred_voice_so_evrc_capability,
    QmiVoiceServiceOption *value_current_preferred_voice_so_home_page_voice_service_option,
    QmiVoiceServiceOption *value_current_preferred_voice_so_home_origination_voice_service_option,
    QmiVoiceServiceOption *value_current_preferred_voice_so_roaming_origination_voice_service_option,
    GError **error);


/**
 * qmi_message_voice_get_config_output_get_current_tty_mode:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_current_tty_mode: (out)(optional): a placeholder for the output #QmiVoiceTtyMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current TTY Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_current_tty_mode (
    QmiMessageVoiceGetConfigOutput *self,
    QmiVoiceTtyMode *value_current_tty_mode,
    GError **error);


/**
 * qmi_message_voice_get_config_output_get_roam_timer_count:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_roam_timer_count_nam_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_roam_timer_count_roam_timer: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roam Timer Count' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_roam_timer_count (
    QmiMessageVoiceGetConfigOutput *self,
    guint8 *value_roam_timer_count_nam_id,
    guint32 *value_roam_timer_count_roam_timer,
    GError **error);


/**
 * qmi_message_voice_get_config_output_get_air_timer_count:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_air_timer_count_nam_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_air_timer_count_air_timer: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Air Timer Count' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_air_timer_count (
    QmiMessageVoiceGetConfigOutput *self,
    guint8 *value_air_timer_count_nam_id,
    guint32 *value_air_timer_count_air_timer,
    GError **error);


/**
 * qmi_message_voice_get_config_output_get_auto_answer_status:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 * @value_auto_answer_status: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Auto Answer Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_auto_answer_status (
    QmiMessageVoiceGetConfigOutput *self,
    gboolean *value_auto_answer_status,
    GError **error);


/**
 * qmi_message_voice_get_config_output_get_result:
 * @self: a QmiMessageVoiceGetConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_voice_get_config_output_get_result (
    QmiMessageVoiceGetConfigOutput *self,
    GError **error);


/**
 * qmi_message_voice_get_config_output_ref:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageVoiceGetConfigOutput *qmi_message_voice_get_config_output_ref (QmiMessageVoiceGetConfigOutput *self);

/**
 * qmi_message_voice_get_config_output_unref:
 * @self: a #QmiMessageVoiceGetConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_voice_get_config_output_unref (QmiMessageVoiceGetConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceGetConfigOutput, qmi_message_voice_get_config_output_unref)

/**
 * qmi_message_voice_get_config_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceGetConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceGetConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_get_config_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceGetConfigOutput *qmi_message_voice_get_config_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Originate USSD No Wait */


/* --- Input -- */

/**
 * QmiMessageVoiceOriginateUssdNoWaitInput:
 *
 * The #QmiMessageVoiceOriginateUssdNoWaitInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageVoiceOriginateUssdNoWaitInput QmiMessageVoiceOriginateUssdNoWaitInput;
GType qmi_message_voice_originate_ussd_no_wait_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT_INPUT (qmi_message_voice_originate_ussd_no_wait_input_get_type ())


/**
 * qmi_message_voice_originate_ussd_no_wait_input_get_uss_data:
 * @self: a #QmiMessageVoiceOriginateUssdNoWaitInput.
 * @value_uss_data_data_coding_scheme: (out)(optional): a placeholder for the output #QmiVoiceUssDataCodingScheme, or %NULL if not required.
 * @value_uss_data_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'USS Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_no_wait_input_get_uss_data (
    QmiMessageVoiceOriginateUssdNoWaitInput *self,
    QmiVoiceUssDataCodingScheme *value_uss_data_data_coding_scheme,
    GArray **value_uss_data_data,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_no_wait_input_set_uss_data:
 * @self: a #QmiMessageVoiceOriginateUssdNoWaitInput.
 * @value_uss_data_data_coding_scheme: a #QmiVoiceUssDataCodingScheme.
 * @value_uss_data_data: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_uss_data_data will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'USS Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_no_wait_input_set_uss_data (
    QmiMessageVoiceOriginateUssdNoWaitInput *self,
    QmiVoiceUssDataCodingScheme value_uss_data_data_coding_scheme,
    GArray *value_uss_data_data,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_no_wait_input_ref:
 * @self: a #QmiMessageVoiceOriginateUssdNoWaitInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageVoiceOriginateUssdNoWaitInput *qmi_message_voice_originate_ussd_no_wait_input_ref (QmiMessageVoiceOriginateUssdNoWaitInput *self);

/**
 * qmi_message_voice_originate_ussd_no_wait_input_unref:
 * @self: a #QmiMessageVoiceOriginateUssdNoWaitInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_voice_originate_ussd_no_wait_input_unref (QmiMessageVoiceOriginateUssdNoWaitInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceOriginateUssdNoWaitInput, qmi_message_voice_originate_ussd_no_wait_input_unref)

/**
 * qmi_message_voice_originate_ussd_no_wait_input_new:
 *
 * Allocates a new #QmiMessageVoiceOriginateUssdNoWaitInput.
 *
 * Returns: the newly created #QmiMessageVoiceOriginateUssdNoWaitInput. The returned value should be freed with qmi_message_voice_originate_ussd_no_wait_input_unref().
 *
 * Since: 1.26
 */
QmiMessageVoiceOriginateUssdNoWaitInput *qmi_message_voice_originate_ussd_no_wait_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceOriginateUssdNoWaitOutput:
 *
 * The #QmiMessageVoiceOriginateUssdNoWaitOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageVoiceOriginateUssdNoWaitOutput QmiMessageVoiceOriginateUssdNoWaitOutput;
GType qmi_message_voice_originate_ussd_no_wait_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_ORIGINATE_USSD_NO_WAIT_OUTPUT (qmi_message_voice_originate_ussd_no_wait_output_get_type ())


/**
 * qmi_message_voice_originate_ussd_no_wait_output_get_result:
 * @self: a QmiMessageVoiceOriginateUssdNoWaitOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_voice_originate_ussd_no_wait_output_get_result (
    QmiMessageVoiceOriginateUssdNoWaitOutput *self,
    GError **error);


/**
 * qmi_message_voice_originate_ussd_no_wait_output_ref:
 * @self: a #QmiMessageVoiceOriginateUssdNoWaitOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageVoiceOriginateUssdNoWaitOutput *qmi_message_voice_originate_ussd_no_wait_output_ref (QmiMessageVoiceOriginateUssdNoWaitOutput *self);

/**
 * qmi_message_voice_originate_ussd_no_wait_output_unref:
 * @self: a #QmiMessageVoiceOriginateUssdNoWaitOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_voice_originate_ussd_no_wait_output_unref (QmiMessageVoiceOriginateUssdNoWaitOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceOriginateUssdNoWaitOutput, qmi_message_voice_originate_ussd_no_wait_output_unref)

/**
 * qmi_message_voice_originate_ussd_no_wait_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceOriginateUssdNoWaitOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceOriginateUssdNoWaitOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_originate_ussd_no_wait_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceOriginateUssdNoWaitOutput *qmi_message_voice_originate_ussd_no_wait_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Burst DTMF */


/* --- Input -- */

/**
 * QmiMessageVoiceBurstDtmfInput:
 *
 * The #QmiMessageVoiceBurstDtmfInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageVoiceBurstDtmfInput QmiMessageVoiceBurstDtmfInput;
GType qmi_message_voice_burst_dtmf_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_BURST_DTMF_INPUT (qmi_message_voice_burst_dtmf_input_get_type ())


/**
 * qmi_message_voice_burst_dtmf_input_get_data:
 * @self: a #QmiMessageVoiceBurstDtmfInput.
 * @value_data_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_data_digit_buffer: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_burst_dtmf_input_get_data (
    QmiMessageVoiceBurstDtmfInput *self,
    guint8 *value_data_call_id,
    const gchar **value_data_digit_buffer,
    GError **error);


/**
 * qmi_message_voice_burst_dtmf_input_set_data:
 * @self: a #QmiMessageVoiceBurstDtmfInput.
 * @value_data_call_id: a #guint8.
 * @value_data_digit_buffer: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_burst_dtmf_input_set_data (
    QmiMessageVoiceBurstDtmfInput *self,
    guint8 value_data_call_id,
    const gchar *value_data_digit_buffer,
    GError **error);


/**
 * qmi_message_voice_burst_dtmf_input_ref:
 * @self: a #QmiMessageVoiceBurstDtmfInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageVoiceBurstDtmfInput *qmi_message_voice_burst_dtmf_input_ref (QmiMessageVoiceBurstDtmfInput *self);

/**
 * qmi_message_voice_burst_dtmf_input_unref:
 * @self: a #QmiMessageVoiceBurstDtmfInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_voice_burst_dtmf_input_unref (QmiMessageVoiceBurstDtmfInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceBurstDtmfInput, qmi_message_voice_burst_dtmf_input_unref)

/**
 * qmi_message_voice_burst_dtmf_input_new:
 *
 * Allocates a new #QmiMessageVoiceBurstDtmfInput.
 *
 * Returns: the newly created #QmiMessageVoiceBurstDtmfInput. The returned value should be freed with qmi_message_voice_burst_dtmf_input_unref().
 *
 * Since: 1.32
 */
QmiMessageVoiceBurstDtmfInput *qmi_message_voice_burst_dtmf_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceBurstDtmfOutput:
 *
 * The #QmiMessageVoiceBurstDtmfOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageVoiceBurstDtmfOutput QmiMessageVoiceBurstDtmfOutput;
GType qmi_message_voice_burst_dtmf_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_BURST_DTMF_OUTPUT (qmi_message_voice_burst_dtmf_output_get_type ())


/**
 * qmi_message_voice_burst_dtmf_output_get_result:
 * @self: a QmiMessageVoiceBurstDtmfOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_burst_dtmf_output_get_result (
    QmiMessageVoiceBurstDtmfOutput *self,
    GError **error);


/**
 * qmi_message_voice_burst_dtmf_output_get_call_id:
 * @self: a #QmiMessageVoiceBurstDtmfOutput.
 * @value_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_burst_dtmf_output_get_call_id (
    QmiMessageVoiceBurstDtmfOutput *self,
    guint8 *value_call_id,
    GError **error);


/**
 * qmi_message_voice_burst_dtmf_output_ref:
 * @self: a #QmiMessageVoiceBurstDtmfOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageVoiceBurstDtmfOutput *qmi_message_voice_burst_dtmf_output_ref (QmiMessageVoiceBurstDtmfOutput *self);

/**
 * qmi_message_voice_burst_dtmf_output_unref:
 * @self: a #QmiMessageVoiceBurstDtmfOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_voice_burst_dtmf_output_unref (QmiMessageVoiceBurstDtmfOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceBurstDtmfOutput, qmi_message_voice_burst_dtmf_output_unref)

/**
 * qmi_message_voice_burst_dtmf_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceBurstDtmfOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceBurstDtmfOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_burst_dtmf_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceBurstDtmfOutput *qmi_message_voice_burst_dtmf_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Start Continuous DTMF */


/* --- Input -- */

/**
 * QmiMessageVoiceStartContinuousDtmfInput:
 *
 * The #QmiMessageVoiceStartContinuousDtmfInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageVoiceStartContinuousDtmfInput QmiMessageVoiceStartContinuousDtmfInput;
GType qmi_message_voice_start_continuous_dtmf_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_START_CONTINUOUS_DTMF_INPUT (qmi_message_voice_start_continuous_dtmf_input_get_type ())


/**
 * qmi_message_voice_start_continuous_dtmf_input_get_data:
 * @self: a #QmiMessageVoiceStartContinuousDtmfInput.
 * @value_data_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_data_digit: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_start_continuous_dtmf_input_get_data (
    QmiMessageVoiceStartContinuousDtmfInput *self,
    guint8 *value_data_call_id,
    guint8 *value_data_digit,
    GError **error);


/**
 * qmi_message_voice_start_continuous_dtmf_input_set_data:
 * @self: a #QmiMessageVoiceStartContinuousDtmfInput.
 * @value_data_call_id: a #guint8.
 * @value_data_digit: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_start_continuous_dtmf_input_set_data (
    QmiMessageVoiceStartContinuousDtmfInput *self,
    guint8 value_data_call_id,
    guint8 value_data_digit,
    GError **error);


/**
 * qmi_message_voice_start_continuous_dtmf_input_ref:
 * @self: a #QmiMessageVoiceStartContinuousDtmfInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageVoiceStartContinuousDtmfInput *qmi_message_voice_start_continuous_dtmf_input_ref (QmiMessageVoiceStartContinuousDtmfInput *self);

/**
 * qmi_message_voice_start_continuous_dtmf_input_unref:
 * @self: a #QmiMessageVoiceStartContinuousDtmfInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_voice_start_continuous_dtmf_input_unref (QmiMessageVoiceStartContinuousDtmfInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceStartContinuousDtmfInput, qmi_message_voice_start_continuous_dtmf_input_unref)

/**
 * qmi_message_voice_start_continuous_dtmf_input_new:
 *
 * Allocates a new #QmiMessageVoiceStartContinuousDtmfInput.
 *
 * Returns: the newly created #QmiMessageVoiceStartContinuousDtmfInput. The returned value should be freed with qmi_message_voice_start_continuous_dtmf_input_unref().
 *
 * Since: 1.32
 */
QmiMessageVoiceStartContinuousDtmfInput *qmi_message_voice_start_continuous_dtmf_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceStartContinuousDtmfOutput:
 *
 * The #QmiMessageVoiceStartContinuousDtmfOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageVoiceStartContinuousDtmfOutput QmiMessageVoiceStartContinuousDtmfOutput;
GType qmi_message_voice_start_continuous_dtmf_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_START_CONTINUOUS_DTMF_OUTPUT (qmi_message_voice_start_continuous_dtmf_output_get_type ())


/**
 * qmi_message_voice_start_continuous_dtmf_output_get_result:
 * @self: a QmiMessageVoiceStartContinuousDtmfOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_start_continuous_dtmf_output_get_result (
    QmiMessageVoiceStartContinuousDtmfOutput *self,
    GError **error);


/**
 * qmi_message_voice_start_continuous_dtmf_output_get_call_id:
 * @self: a #QmiMessageVoiceStartContinuousDtmfOutput.
 * @value_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_start_continuous_dtmf_output_get_call_id (
    QmiMessageVoiceStartContinuousDtmfOutput *self,
    guint8 *value_call_id,
    GError **error);


/**
 * qmi_message_voice_start_continuous_dtmf_output_ref:
 * @self: a #QmiMessageVoiceStartContinuousDtmfOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageVoiceStartContinuousDtmfOutput *qmi_message_voice_start_continuous_dtmf_output_ref (QmiMessageVoiceStartContinuousDtmfOutput *self);

/**
 * qmi_message_voice_start_continuous_dtmf_output_unref:
 * @self: a #QmiMessageVoiceStartContinuousDtmfOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_voice_start_continuous_dtmf_output_unref (QmiMessageVoiceStartContinuousDtmfOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceStartContinuousDtmfOutput, qmi_message_voice_start_continuous_dtmf_output_unref)

/**
 * qmi_message_voice_start_continuous_dtmf_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceStartContinuousDtmfOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceStartContinuousDtmfOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_start_continuous_dtmf_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceStartContinuousDtmfOutput *qmi_message_voice_start_continuous_dtmf_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message VOICE Stop Continuous DTMF */


/* --- Input -- */

/**
 * QmiMessageVoiceStopContinuousDtmfInput:
 *
 * The #QmiMessageVoiceStopContinuousDtmfInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageVoiceStopContinuousDtmfInput QmiMessageVoiceStopContinuousDtmfInput;
GType qmi_message_voice_stop_continuous_dtmf_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_INPUT (qmi_message_voice_stop_continuous_dtmf_input_get_type ())


/**
 * qmi_message_voice_stop_continuous_dtmf_input_get_data:
 * @self: a #QmiMessageVoiceStopContinuousDtmfInput.
 * @value_data_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_stop_continuous_dtmf_input_get_data (
    QmiMessageVoiceStopContinuousDtmfInput *self,
    guint8 *value_data_call_id,
    GError **error);


/**
 * qmi_message_voice_stop_continuous_dtmf_input_set_data:
 * @self: a #QmiMessageVoiceStopContinuousDtmfInput.
 * @value_data_call_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_stop_continuous_dtmf_input_set_data (
    QmiMessageVoiceStopContinuousDtmfInput *self,
    guint8 value_data_call_id,
    GError **error);


/**
 * qmi_message_voice_stop_continuous_dtmf_input_ref:
 * @self: a #QmiMessageVoiceStopContinuousDtmfInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageVoiceStopContinuousDtmfInput *qmi_message_voice_stop_continuous_dtmf_input_ref (QmiMessageVoiceStopContinuousDtmfInput *self);

/**
 * qmi_message_voice_stop_continuous_dtmf_input_unref:
 * @self: a #QmiMessageVoiceStopContinuousDtmfInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_voice_stop_continuous_dtmf_input_unref (QmiMessageVoiceStopContinuousDtmfInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceStopContinuousDtmfInput, qmi_message_voice_stop_continuous_dtmf_input_unref)

/**
 * qmi_message_voice_stop_continuous_dtmf_input_new:
 *
 * Allocates a new #QmiMessageVoiceStopContinuousDtmfInput.
 *
 * Returns: the newly created #QmiMessageVoiceStopContinuousDtmfInput. The returned value should be freed with qmi_message_voice_stop_continuous_dtmf_input_unref().
 *
 * Since: 1.32
 */
QmiMessageVoiceStopContinuousDtmfInput *qmi_message_voice_stop_continuous_dtmf_input_new (void);

/* --- Output -- */

/**
 * QmiMessageVoiceStopContinuousDtmfOutput:
 *
 * The #QmiMessageVoiceStopContinuousDtmfOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageVoiceStopContinuousDtmfOutput QmiMessageVoiceStopContinuousDtmfOutput;
GType qmi_message_voice_stop_continuous_dtmf_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_VOICE_STOP_CONTINUOUS_DTMF_OUTPUT (qmi_message_voice_stop_continuous_dtmf_output_get_type ())


/**
 * qmi_message_voice_stop_continuous_dtmf_output_get_result:
 * @self: a QmiMessageVoiceStopContinuousDtmfOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_stop_continuous_dtmf_output_get_result (
    QmiMessageVoiceStopContinuousDtmfOutput *self,
    GError **error);


/**
 * qmi_message_voice_stop_continuous_dtmf_output_get_call_id:
 * @self: a #QmiMessageVoiceStopContinuousDtmfOutput.
 * @value_call_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_voice_stop_continuous_dtmf_output_get_call_id (
    QmiMessageVoiceStopContinuousDtmfOutput *self,
    guint8 *value_call_id,
    GError **error);


/**
 * qmi_message_voice_stop_continuous_dtmf_output_ref:
 * @self: a #QmiMessageVoiceStopContinuousDtmfOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageVoiceStopContinuousDtmfOutput *qmi_message_voice_stop_continuous_dtmf_output_ref (QmiMessageVoiceStopContinuousDtmfOutput *self);

/**
 * qmi_message_voice_stop_continuous_dtmf_output_unref:
 * @self: a #QmiMessageVoiceStopContinuousDtmfOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_voice_stop_continuous_dtmf_output_unref (QmiMessageVoiceStopContinuousDtmfOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageVoiceStopContinuousDtmfOutput, qmi_message_voice_stop_continuous_dtmf_output_unref)

/**
 * qmi_message_voice_stop_continuous_dtmf_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageVoiceStopContinuousDtmfOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageVoiceStopContinuousDtmfOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_stop_continuous_dtmf_output_unref().
 *
 * Since: 1.34
 */
QmiMessageVoiceStopContinuousDtmfOutput *qmi_message_voice_stop_continuous_dtmf_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: VOICE */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_voice_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_VOICE

/*****************************************************************************/
/* CLIENT: QMI Client Voice */

#define QMI_TYPE_CLIENT_VOICE            (qmi_client_voice_get_type ())
#define QMI_CLIENT_VOICE(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_VOICE, QmiClientVoice))
#define QMI_CLIENT_VOICE_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_VOICE, QmiClientVoiceClass))
#define QMI_IS_CLIENT_VOICE(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_VOICE))
#define QMI_IS_CLIENT_VOICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_VOICE))
#define QMI_CLIENT_VOICE_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_VOICE, QmiClientVoiceClass))

typedef struct _QmiClientVoice QmiClientVoice;
typedef struct _QmiClientVoiceClass QmiClientVoiceClass;

/**
 * QmiClientVoice:
 *
 * #QmiClient which handles operations in the VOICE service.
 *
 * The #QmiClientVoice structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
struct _QmiClientVoice {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientVoiceClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_voice_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientVoice, g_object_unref)

/**
 * qmi_client_voice_indication_register:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceIndicationRegisterInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Indication Register request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_indication_register_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_voice_indication_register (
    QmiClientVoice *self,
    QmiMessageVoiceIndicationRegisterInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_indication_register_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_indication_register().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_indication_register().
 *
 * Returns: a #QmiMessageVoiceIndicationRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_indication_register_output_unref().
 *
 * Since: 1.26
 */
QmiMessageVoiceIndicationRegisterOutput *qmi_client_voice_indication_register_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_get_supported_messages:
 * @self: a #QmiClientVoice.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Supported Messages request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_get_supported_messages_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_voice_get_supported_messages (
    QmiClientVoice *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_get_supported_messages_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_get_supported_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_get_supported_messages().
 *
 * Returns: a #QmiMessageVoiceGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_get_supported_messages_output_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceGetSupportedMessagesOutput *qmi_client_voice_get_supported_messages_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_dial_call:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceDialCallInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Dial Call request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_dial_call_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_voice_dial_call (
    QmiClientVoice *self,
    QmiMessageVoiceDialCallInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_dial_call_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_dial_call().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_dial_call().
 *
 * Returns: a #QmiMessageVoiceDialCallOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_dial_call_output_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceDialCallOutput *qmi_client_voice_dial_call_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_end_call:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceEndCallInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a End Call request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_end_call_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_voice_end_call (
    QmiClientVoice *self,
    QmiMessageVoiceEndCallInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_end_call_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_end_call().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_end_call().
 *
 * Returns: a #QmiMessageVoiceEndCallOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_end_call_output_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceEndCallOutput *qmi_client_voice_end_call_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_answer_call:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceAnswerCallInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Answer Call request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_answer_call_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_voice_answer_call (
    QmiClientVoice *self,
    QmiMessageVoiceAnswerCallInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_answer_call_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_answer_call().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_answer_call().
 *
 * Returns: a #QmiMessageVoiceAnswerCallOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_answer_call_output_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceAnswerCallOutput *qmi_client_voice_answer_call_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_get_all_call_info:
 * @self: a #QmiClientVoice.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get All Call Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_get_all_call_info_finish() to get the result of the operation.
 *
 * Since: 1.30.2
 */
void qmi_client_voice_get_all_call_info (
    QmiClientVoice *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_get_all_call_info_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_get_all_call_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_get_all_call_info().
 *
 * Returns: a #QmiMessageVoiceGetAllCallInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_get_all_call_info_output_unref().
 *
 * Since: 1.30.2
 */
QmiMessageVoiceGetAllCallInfoOutput *qmi_client_voice_get_all_call_info_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_manage_calls:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceManageCallsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Manage Calls request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_manage_calls_finish() to get the result of the operation.
 *
 * Since: 1.30
 */
void qmi_client_voice_manage_calls (
    QmiClientVoice *self,
    QmiMessageVoiceManageCallsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_manage_calls_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_manage_calls().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_manage_calls().
 *
 * Returns: a #QmiMessageVoiceManageCallsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_manage_calls_output_unref().
 *
 * Since: 1.30
 */
QmiMessageVoiceManageCallsOutput *qmi_client_voice_manage_calls_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_set_supplementary_service:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceSetSupplementaryServiceInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Supplementary Service request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_set_supplementary_service_finish() to get the result of the operation.
 *
 * Since: 1.30
 */
void qmi_client_voice_set_supplementary_service (
    QmiClientVoice *self,
    QmiMessageVoiceSetSupplementaryServiceInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_set_supplementary_service_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_set_supplementary_service().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_set_supplementary_service().
 *
 * Returns: a #QmiMessageVoiceSetSupplementaryServiceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_set_supplementary_service_output_unref().
 *
 * Since: 1.30
 */
QmiMessageVoiceSetSupplementaryServiceOutput *qmi_client_voice_set_supplementary_service_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_get_call_waiting:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceGetCallWaitingInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Call Waiting request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_get_call_waiting_finish() to get the result of the operation.
 *
 * Since: 1.30
 */
void qmi_client_voice_get_call_waiting (
    QmiClientVoice *self,
    QmiMessageVoiceGetCallWaitingInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_get_call_waiting_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_get_call_waiting().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_get_call_waiting().
 *
 * Returns: a #QmiMessageVoiceGetCallWaitingOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_get_call_waiting_output_unref().
 *
 * Since: 1.30
 */
QmiMessageVoiceGetCallWaitingOutput *qmi_client_voice_get_call_waiting_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_originate_ussd:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceOriginateUssdInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Originate USSD request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_originate_ussd_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_voice_originate_ussd (
    QmiClientVoice *self,
    QmiMessageVoiceOriginateUssdInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_originate_ussd_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_originate_ussd().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_originate_ussd().
 *
 * Returns: a #QmiMessageVoiceOriginateUssdOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_originate_ussd_output_unref().
 *
 * Since: 1.26
 */
QmiMessageVoiceOriginateUssdOutput *qmi_client_voice_originate_ussd_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_answer_ussd:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceAnswerUssdInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Answer USSD request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_answer_ussd_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_voice_answer_ussd (
    QmiClientVoice *self,
    QmiMessageVoiceAnswerUssdInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_answer_ussd_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_answer_ussd().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_answer_ussd().
 *
 * Returns: a #QmiMessageVoiceAnswerUssdOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_answer_ussd_output_unref().
 *
 * Since: 1.26
 */
QmiMessageVoiceAnswerUssdOutput *qmi_client_voice_answer_ussd_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_cancel_ussd:
 * @self: a #QmiClientVoice.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Cancel USSD request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_cancel_ussd_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_voice_cancel_ussd (
    QmiClientVoice *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_cancel_ussd_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_cancel_ussd().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_cancel_ussd().
 *
 * Returns: a #QmiMessageVoiceCancelUssdOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_cancel_ussd_output_unref().
 *
 * Since: 1.26
 */
QmiMessageVoiceCancelUssdOutput *qmi_client_voice_cancel_ussd_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_get_config:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceGetConfigInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_get_config_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_voice_get_config (
    QmiClientVoice *self,
    QmiMessageVoiceGetConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_get_config_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_get_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_get_config().
 *
 * Returns: a #QmiMessageVoiceGetConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_get_config_output_unref().
 *
 * Since: 1.14
 */
QmiMessageVoiceGetConfigOutput *qmi_client_voice_get_config_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_originate_ussd_no_wait:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceOriginateUssdNoWaitInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Originate USSD No Wait request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_originate_ussd_no_wait_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_voice_originate_ussd_no_wait (
    QmiClientVoice *self,
    QmiMessageVoiceOriginateUssdNoWaitInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_originate_ussd_no_wait_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_originate_ussd_no_wait().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_originate_ussd_no_wait().
 *
 * Returns: a #QmiMessageVoiceOriginateUssdNoWaitOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_originate_ussd_no_wait_output_unref().
 *
 * Since: 1.26
 */
QmiMessageVoiceOriginateUssdNoWaitOutput *qmi_client_voice_originate_ussd_no_wait_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_burst_dtmf:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceBurstDtmfInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Burst DTMF request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_burst_dtmf_finish() to get the result of the operation.
 *
 * Since: 1.32
 */
void qmi_client_voice_burst_dtmf (
    QmiClientVoice *self,
    QmiMessageVoiceBurstDtmfInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_burst_dtmf_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_burst_dtmf().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_burst_dtmf().
 *
 * Returns: a #QmiMessageVoiceBurstDtmfOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_burst_dtmf_output_unref().
 *
 * Since: 1.32
 */
QmiMessageVoiceBurstDtmfOutput *qmi_client_voice_burst_dtmf_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_start_continuous_dtmf:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceStartContinuousDtmfInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Start Continuous DTMF request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_start_continuous_dtmf_finish() to get the result of the operation.
 *
 * Since: 1.32
 */
void qmi_client_voice_start_continuous_dtmf (
    QmiClientVoice *self,
    QmiMessageVoiceStartContinuousDtmfInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_start_continuous_dtmf_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_start_continuous_dtmf().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_start_continuous_dtmf().
 *
 * Returns: a #QmiMessageVoiceStartContinuousDtmfOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_start_continuous_dtmf_output_unref().
 *
 * Since: 1.32
 */
QmiMessageVoiceStartContinuousDtmfOutput *qmi_client_voice_start_continuous_dtmf_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_voice_stop_continuous_dtmf:
 * @self: a #QmiClientVoice.
 * @input: a #QmiMessageVoiceStopContinuousDtmfInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Stop Continuous DTMF request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_voice_stop_continuous_dtmf_finish() to get the result of the operation.
 *
 * Since: 1.32
 */
void qmi_client_voice_stop_continuous_dtmf (
    QmiClientVoice *self,
    QmiMessageVoiceStopContinuousDtmfInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_voice_stop_continuous_dtmf_finish:
 * @self: a #QmiClientVoice.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_voice_stop_continuous_dtmf().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_voice_stop_continuous_dtmf().
 *
 * Returns: a #QmiMessageVoiceStopContinuousDtmfOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_voice_stop_continuous_dtmf_output_unref().
 *
 * Since: 1.32
 */
QmiMessageVoiceStopContinuousDtmfOutput *qmi_client_voice_stop_continuous_dtmf_finish (
    QmiClientVoice *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_VOICE__ */
