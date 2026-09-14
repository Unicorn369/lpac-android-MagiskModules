
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
#include "qmi-enums-pbm.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_PBM__
#define __LIBQMI_GLIB_QMI_PBM__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_PBM_INDICATION_REGISTER
#define HAVE_QMI_MESSAGE_PBM_GET_CAPABILITIES
#define HAVE_QMI_MESSAGE_PBM_GET_ALL_CAPABILITIES
#define HAVE_QMI_MESSAGE_PBM_GET_EMERGENCY_LIST

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PBM Indication Register */


/* --- Input -- */

/**
 * QmiMessagePbmIndicationRegisterInput:
 *
 * The #QmiMessagePbmIndicationRegisterInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmIndicationRegisterInput QmiMessagePbmIndicationRegisterInput;
GType qmi_message_pbm_indication_register_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PBM_INDICATION_REGISTER_INPUT (qmi_message_pbm_indication_register_input_get_type ())


/**
 * qmi_message_pbm_indication_register_input_get_event_registration_mask:
 * @self: a #QmiMessagePbmIndicationRegisterInput.
 * @value_event_registration_mask: (out)(optional): a placeholder for the output #QmiPbmEventRegistrationFlag, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Event Registration Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_indication_register_input_get_event_registration_mask (
    QmiMessagePbmIndicationRegisterInput *self,
    QmiPbmEventRegistrationFlag *value_event_registration_mask,
    GError **error);


/**
 * qmi_message_pbm_indication_register_input_set_event_registration_mask:
 * @self: a #QmiMessagePbmIndicationRegisterInput.
 * @value_event_registration_mask: a #QmiPbmEventRegistrationFlag.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Event Registration Mask' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_indication_register_input_set_event_registration_mask (
    QmiMessagePbmIndicationRegisterInput *self,
    QmiPbmEventRegistrationFlag value_event_registration_mask,
    GError **error);


/**
 * qmi_message_pbm_indication_register_input_ref:
 * @self: a #QmiMessagePbmIndicationRegisterInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessagePbmIndicationRegisterInput *qmi_message_pbm_indication_register_input_ref (QmiMessagePbmIndicationRegisterInput *self);

/**
 * qmi_message_pbm_indication_register_input_unref:
 * @self: a #QmiMessagePbmIndicationRegisterInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_pbm_indication_register_input_unref (QmiMessagePbmIndicationRegisterInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePbmIndicationRegisterInput, qmi_message_pbm_indication_register_input_unref)

/**
 * qmi_message_pbm_indication_register_input_new:
 *
 * Allocates a new #QmiMessagePbmIndicationRegisterInput.
 *
 * Returns: the newly created #QmiMessagePbmIndicationRegisterInput. The returned value should be freed with qmi_message_pbm_indication_register_input_unref().
 *
 * Since: 1.6
 */
QmiMessagePbmIndicationRegisterInput *qmi_message_pbm_indication_register_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePbmIndicationRegisterOutput:
 *
 * The #QmiMessagePbmIndicationRegisterOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmIndicationRegisterOutput QmiMessagePbmIndicationRegisterOutput;
GType qmi_message_pbm_indication_register_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PBM_INDICATION_REGISTER_OUTPUT (qmi_message_pbm_indication_register_output_get_type ())


/**
 * qmi_message_pbm_indication_register_output_get_result:
 * @self: a QmiMessagePbmIndicationRegisterOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_indication_register_output_get_result (
    QmiMessagePbmIndicationRegisterOutput *self,
    GError **error);


/**
 * qmi_message_pbm_indication_register_output_get_event_registration_mask:
 * @self: a #QmiMessagePbmIndicationRegisterOutput.
 * @value_event_registration_mask: (out)(optional): a placeholder for the output #QmiPbmEventRegistrationFlag, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Event Registration Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_indication_register_output_get_event_registration_mask (
    QmiMessagePbmIndicationRegisterOutput *self,
    QmiPbmEventRegistrationFlag *value_event_registration_mask,
    GError **error);


/**
 * qmi_message_pbm_indication_register_output_ref:
 * @self: a #QmiMessagePbmIndicationRegisterOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessagePbmIndicationRegisterOutput *qmi_message_pbm_indication_register_output_ref (QmiMessagePbmIndicationRegisterOutput *self);

/**
 * qmi_message_pbm_indication_register_output_unref:
 * @self: a #QmiMessagePbmIndicationRegisterOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_pbm_indication_register_output_unref (QmiMessagePbmIndicationRegisterOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePbmIndicationRegisterOutput, qmi_message_pbm_indication_register_output_unref)

/**
 * qmi_message_pbm_indication_register_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePbmIndicationRegisterOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePbmIndicationRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pbm_indication_register_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePbmIndicationRegisterOutput *qmi_message_pbm_indication_register_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PBM Get Capabilities */


/* --- Input -- */

/**
 * QmiMessagePbmGetCapabilitiesInput:
 *
 * The #QmiMessagePbmGetCapabilitiesInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetCapabilitiesInput QmiMessagePbmGetCapabilitiesInput;
GType qmi_message_pbm_get_capabilities_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PBM_GET_CAPABILITIES_INPUT (qmi_message_pbm_get_capabilities_input_get_type ())


/**
 * qmi_message_pbm_get_capabilities_input_get_phonebook_information:
 * @self: a #QmiMessagePbmGetCapabilitiesInput.
 * @value_phonebook_information_session_type: (out)(optional): a placeholder for the output #QmiPbmSessionType, or %NULL if not required.
 * @value_phonebook_information_phonebook_type: (out)(optional): a placeholder for the output #QmiPbmPhonebookType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Phonebook Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_input_get_phonebook_information (
    QmiMessagePbmGetCapabilitiesInput *self,
    QmiPbmSessionType *value_phonebook_information_session_type,
    QmiPbmPhonebookType *value_phonebook_information_phonebook_type,
    GError **error);


/**
 * qmi_message_pbm_get_capabilities_input_set_phonebook_information:
 * @self: a #QmiMessagePbmGetCapabilitiesInput.
 * @value_phonebook_information_session_type: a #QmiPbmSessionType.
 * @value_phonebook_information_phonebook_type: a #QmiPbmPhonebookType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Phonebook Information' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_input_set_phonebook_information (
    QmiMessagePbmGetCapabilitiesInput *self,
    QmiPbmSessionType value_phonebook_information_session_type,
    QmiPbmPhonebookType value_phonebook_information_phonebook_type,
    GError **error);


/**
 * qmi_message_pbm_get_capabilities_input_ref:
 * @self: a #QmiMessagePbmGetCapabilitiesInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessagePbmGetCapabilitiesInput *qmi_message_pbm_get_capabilities_input_ref (QmiMessagePbmGetCapabilitiesInput *self);

/**
 * qmi_message_pbm_get_capabilities_input_unref:
 * @self: a #QmiMessagePbmGetCapabilitiesInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_pbm_get_capabilities_input_unref (QmiMessagePbmGetCapabilitiesInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePbmGetCapabilitiesInput, qmi_message_pbm_get_capabilities_input_unref)

/**
 * qmi_message_pbm_get_capabilities_input_new:
 *
 * Allocates a new #QmiMessagePbmGetCapabilitiesInput.
 *
 * Returns: the newly created #QmiMessagePbmGetCapabilitiesInput. The returned value should be freed with qmi_message_pbm_get_capabilities_input_unref().
 *
 * Since: 1.6
 */
QmiMessagePbmGetCapabilitiesInput *qmi_message_pbm_get_capabilities_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePbmGetCapabilitiesOutput:
 *
 * The #QmiMessagePbmGetCapabilitiesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetCapabilitiesOutput QmiMessagePbmGetCapabilitiesOutput;
GType qmi_message_pbm_get_capabilities_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PBM_GET_CAPABILITIES_OUTPUT (qmi_message_pbm_get_capabilities_output_get_type ())


/**
 * qmi_message_pbm_get_capabilities_output_get_result:
 * @self: a QmiMessagePbmGetCapabilitiesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_result (
    QmiMessagePbmGetCapabilitiesOutput *self,
    GError **error);


/**
 * qmi_message_pbm_get_capabilities_output_get_capability_basic_information:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_capability_basic_information_session_type: (out)(optional): a placeholder for the output #QmiPbmSessionType, or %NULL if not required.
 * @value_capability_basic_information_phonebook_type: (out)(optional): a placeholder for the output #QmiPbmPhonebookType, or %NULL if not required.
 * @value_capability_basic_information_used_records: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_capability_basic_information_maximum_records: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_capability_basic_information_maximum_number_length: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_capability_basic_information_maximum_name_length: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Capability Basic Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_capability_basic_information (
    QmiMessagePbmGetCapabilitiesOutput *self,
    QmiPbmSessionType *value_capability_basic_information_session_type,
    QmiPbmPhonebookType *value_capability_basic_information_phonebook_type,
    guint16 *value_capability_basic_information_used_records,
    guint16 *value_capability_basic_information_maximum_records,
    guint8 *value_capability_basic_information_maximum_number_length,
    guint8 *value_capability_basic_information_maximum_name_length,
    GError **error);


/**
 * qmi_message_pbm_get_capabilities_output_get_group_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_group_capability_maximum_groups: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_group_capability_maximum_group_tag_length: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Group Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_group_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_group_capability_maximum_groups,
    guint8 *value_group_capability_maximum_group_tag_length,
    GError **error);


/**
 * qmi_message_pbm_get_capabilities_output_get_additional_number_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_additional_number_capability_maximum_additional_numbers: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_additional_number_capability_maximum_additional_number_length: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_additional_number_capability_maximum_additional_number_tag_length: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Number Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_additional_number_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_additional_number_capability_maximum_additional_numbers,
    guint8 *value_additional_number_capability_maximum_additional_number_length,
    guint8 *value_additional_number_capability_maximum_additional_number_tag_length,
    GError **error);


/**
 * qmi_message_pbm_get_capabilities_output_get_email_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_email_capability_maximum_emails: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_email_capability_maximum_email_address_length: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Email Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_email_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_email_capability_maximum_emails,
    guint8 *value_email_capability_maximum_email_address_length,
    GError **error);


/**
 * qmi_message_pbm_get_capabilities_output_get_second_name_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_second_name_capability_maximum_second_name_length: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Second Name Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_second_name_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_second_name_capability_maximum_second_name_length,
    GError **error);


/**
 * qmi_message_pbm_get_capabilities_output_get_hidden_records_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_hidden_records_capability_supported: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Hidden Records Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_hidden_records_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    gboolean *value_hidden_records_capability_supported,
    GError **error);


/**
 * qmi_message_pbm_get_capabilities_output_get_grouping_information_alpha_string_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_grouping_information_alpha_string_capability_maximum_records: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_grouping_information_alpha_string_capability_used_records: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_grouping_information_alpha_string_capability_maximum_string_length: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Grouping Information Alpha String Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_grouping_information_alpha_string_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_grouping_information_alpha_string_capability_maximum_records,
    guint8 *value_grouping_information_alpha_string_capability_used_records,
    guint8 *value_grouping_information_alpha_string_capability_maximum_string_length,
    GError **error);


/**
 * qmi_message_pbm_get_capabilities_output_get_additional_number_alpha_string_capability:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 * @value_additional_number_alpha_string_capability_maximum_records: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_additional_number_alpha_string_capability_used_records: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_additional_number_alpha_string_capability_maximum_string_length: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Number Alpha String Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_capabilities_output_get_additional_number_alpha_string_capability (
    QmiMessagePbmGetCapabilitiesOutput *self,
    guint8 *value_additional_number_alpha_string_capability_maximum_records,
    guint8 *value_additional_number_alpha_string_capability_used_records,
    guint8 *value_additional_number_alpha_string_capability_maximum_string_length,
    GError **error);


/**
 * qmi_message_pbm_get_capabilities_output_ref:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessagePbmGetCapabilitiesOutput *qmi_message_pbm_get_capabilities_output_ref (QmiMessagePbmGetCapabilitiesOutput *self);

/**
 * qmi_message_pbm_get_capabilities_output_unref:
 * @self: a #QmiMessagePbmGetCapabilitiesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_pbm_get_capabilities_output_unref (QmiMessagePbmGetCapabilitiesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePbmGetCapabilitiesOutput, qmi_message_pbm_get_capabilities_output_unref)

/**
 * qmi_message_pbm_get_capabilities_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePbmGetCapabilitiesOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePbmGetCapabilitiesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pbm_get_capabilities_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePbmGetCapabilitiesOutput *qmi_message_pbm_get_capabilities_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PBM Get All Capabilities */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement:
 * @phonebook_type: a #QmiPbmPhonebookType.
 * @used_records: a #guint16.
 * @maximum_records: a #guint16.
 * @maximum_number_length: a #guint8.
 * @maximum_name_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement {
    QmiPbmPhonebookType phonebook_type;
    guint16 used_records;
    guint16 maximum_records;
    guint8 maximum_number_length;
    guint8 maximum_name_length;
} QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement;


/**
 * QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement: (skip)
 * @session_type: a #QmiPbmSessionType.
 * @phonebooks: a #GArray of #QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement elements.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement {
    QmiPbmSessionType session_type;
    GArray *phonebooks;
} QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement;

GType qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_phonebooks_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir: (rename-to QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement)
 * @session_type: a #QmiPbmSessionType.
 * @phonebooks: (element-type QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement): an array of #QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementPhonebooksElement elements.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir struct.
 *
 * This type is a version of #QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement, using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Since: 1.32
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir {
    QmiPbmSessionType session_type;
    GPtrArray *phonebooks;
} QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir;

GType qmi_message_pbm_get_all_capabilities_output_capability_basic_information_element_gir_get_type (void) G_GNUC_CONST;


/**
 * QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @maximum_groups: a #guint8.
 * @maximum_group_tag_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement {
    QmiPbmSessionType session_type;
    guint8 maximum_groups;
    guint8 maximum_group_tag_length;
} QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement;

GType qmi_message_pbm_get_all_capabilities_output_group_capability_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @maximum_additional_numbers: a #guint8.
 * @maximum_additional_number_length: a #guint8.
 * @maximum_additional_number_tag_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement {
    QmiPbmSessionType session_type;
    guint8 maximum_additional_numbers;
    guint8 maximum_additional_number_length;
    guint8 maximum_additional_number_tag_length;
} QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement;

GType qmi_message_pbm_get_all_capabilities_output_additional_number_capability_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @maximum_emails: a #guint8.
 * @maximum_email_address_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement {
    QmiPbmSessionType session_type;
    guint8 maximum_emails;
    guint8 maximum_email_address_length;
} QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement;

GType qmi_message_pbm_get_all_capabilities_output_email_capability_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @maximum_second_name_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement {
    QmiPbmSessionType session_type;
    guint8 maximum_second_name_length;
} QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement;

GType qmi_message_pbm_get_all_capabilities_output_second_name_capability_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @supported: a #gboolean.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement {
    QmiPbmSessionType session_type;
    gboolean supported;
} QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement;

GType qmi_message_pbm_get_all_capabilities_output_hidden_records_capability_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @maximum_records: a #guint8.
 * @used_records: a #guint8.
 * @maximum_string_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement {
    QmiPbmSessionType session_type;
    guint8 maximum_records;
    guint8 used_records;
    guint8 maximum_string_length;
} QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement;

GType qmi_message_pbm_get_all_capabilities_output_grouping_information_alpha_string_capability_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement:
 * @session_type: a #QmiPbmSessionType.
 * @maximum_records: a #guint8.
 * @used_records: a #guint8.
 * @maximum_string_length: a #guint8.
 *
 * A QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement struct.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement {
    QmiPbmSessionType session_type;
    guint8 maximum_records;
    guint8 used_records;
    guint8 maximum_string_length;
} QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement;

GType qmi_message_pbm_get_all_capabilities_output_additional_number_alpha_string_capability_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessagePbmGetAllCapabilitiesOutput:
 *
 * The #QmiMessagePbmGetAllCapabilitiesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessagePbmGetAllCapabilitiesOutput QmiMessagePbmGetAllCapabilitiesOutput;
GType qmi_message_pbm_get_all_capabilities_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PBM_GET_ALL_CAPABILITIES_OUTPUT (qmi_message_pbm_get_all_capabilities_output_get_type ())


/**
 * qmi_message_pbm_get_all_capabilities_output_get_result:
 * @self: a QmiMessagePbmGetAllCapabilitiesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_result (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_capability_basic_information: (skip)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_capability_basic_information: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement)(transfer none): a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Capability Basic Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_capability_basic_information (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_capability_basic_information,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_capability_basic_information_gir: (rename-to qmi_message_pbm_get_all_capabilities_output_get_capability_basic_information)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_capability_basic_information_ptr: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElementGir)(transfer none): a placeholder for the output array of #QmiMessagePbmGetAllCapabilitiesOutputCapabilityBasicInformationElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Capability Basic Information' field from @self.
 *
 * Version of qmi_message_pbm_get_all_capabilities_output_get_capability_basic_information() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_capability_basic_information_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_capability_basic_information_ptr,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_group_capability: (skip)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_group_capability: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement)(transfer none): a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Group Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_group_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_group_capability,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_group_capability_gir: (rename-to qmi_message_pbm_get_all_capabilities_output_get_group_capability)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_group_capability_ptr: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement)(transfer none): a placeholder for the output array of #QmiMessagePbmGetAllCapabilitiesOutputGroupCapabilityElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Group Capability' field from @self.
 *
 * Version of qmi_message_pbm_get_all_capabilities_output_get_group_capability() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_group_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_group_capability_ptr,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_additional_number_capability: (skip)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_additional_number_capability: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement)(transfer none): a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Number Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_additional_number_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_additional_number_capability,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_additional_number_capability_gir: (rename-to qmi_message_pbm_get_all_capabilities_output_get_additional_number_capability)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_additional_number_capability_ptr: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement)(transfer none): a placeholder for the output array of #QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberCapabilityElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Number Capability' field from @self.
 *
 * Version of qmi_message_pbm_get_all_capabilities_output_get_additional_number_capability() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_additional_number_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_additional_number_capability_ptr,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_email_capability: (skip)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_email_capability: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement)(transfer none): a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Email Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_email_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_email_capability,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_email_capability_gir: (rename-to qmi_message_pbm_get_all_capabilities_output_get_email_capability)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_email_capability_ptr: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement)(transfer none): a placeholder for the output array of #QmiMessagePbmGetAllCapabilitiesOutputEmailCapabilityElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Email Capability' field from @self.
 *
 * Version of qmi_message_pbm_get_all_capabilities_output_get_email_capability() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_email_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_email_capability_ptr,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_second_name_capability: (skip)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_second_name_capability: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement)(transfer none): a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Second Name Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_second_name_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_second_name_capability,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_second_name_capability_gir: (rename-to qmi_message_pbm_get_all_capabilities_output_get_second_name_capability)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_second_name_capability_ptr: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement)(transfer none): a placeholder for the output array of #QmiMessagePbmGetAllCapabilitiesOutputSecondNameCapabilityElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Second Name Capability' field from @self.
 *
 * Version of qmi_message_pbm_get_all_capabilities_output_get_second_name_capability() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_second_name_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_second_name_capability_ptr,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_hidden_records_capability: (skip)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_hidden_records_capability: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement)(transfer none): a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Hidden Records Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_hidden_records_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_hidden_records_capability,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_hidden_records_capability_gir: (rename-to qmi_message_pbm_get_all_capabilities_output_get_hidden_records_capability)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_hidden_records_capability_ptr: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement)(transfer none): a placeholder for the output array of #QmiMessagePbmGetAllCapabilitiesOutputHiddenRecordsCapabilityElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Hidden Records Capability' field from @self.
 *
 * Version of qmi_message_pbm_get_all_capabilities_output_get_hidden_records_capability() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_hidden_records_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_hidden_records_capability_ptr,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_grouping_information_alpha_string_capability: (skip)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_grouping_information_alpha_string_capability: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement)(transfer none): a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Grouping Information Alpha String Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_grouping_information_alpha_string_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_grouping_information_alpha_string_capability,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_grouping_information_alpha_string_capability_gir: (rename-to qmi_message_pbm_get_all_capabilities_output_get_grouping_information_alpha_string_capability)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_grouping_information_alpha_string_capability_ptr: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement)(transfer none): a placeholder for the output array of #QmiMessagePbmGetAllCapabilitiesOutputGroupingInformationAlphaStringCapabilityElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Grouping Information Alpha String Capability' field from @self.
 *
 * Version of qmi_message_pbm_get_all_capabilities_output_get_grouping_information_alpha_string_capability() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_grouping_information_alpha_string_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_grouping_information_alpha_string_capability_ptr,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_additional_number_alpha_string_capability: (skip)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_additional_number_alpha_string_capability: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement)(transfer none): a placeholder for the output #GArray of #QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Number Alpha String Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_additional_number_alpha_string_capability (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GArray **value_additional_number_alpha_string_capability,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_get_additional_number_alpha_string_capability_gir: (rename-to qmi_message_pbm_get_all_capabilities_output_get_additional_number_alpha_string_capability)
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 * @value_additional_number_alpha_string_capability_ptr: (out)(optional)(element-type QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement)(transfer none): a placeholder for the output array of #QmiMessagePbmGetAllCapabilitiesOutputAdditionalNumberAlphaStringCapabilityElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Number Alpha String Capability' field from @self.
 *
 * Version of qmi_message_pbm_get_all_capabilities_output_get_additional_number_alpha_string_capability() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pbm_get_all_capabilities_output_get_additional_number_alpha_string_capability_gir (
    QmiMessagePbmGetAllCapabilitiesOutput *self,
    GPtrArray **value_additional_number_alpha_string_capability_ptr,
    GError **error);


/**
 * qmi_message_pbm_get_all_capabilities_output_ref:
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessagePbmGetAllCapabilitiesOutput *qmi_message_pbm_get_all_capabilities_output_ref (QmiMessagePbmGetAllCapabilitiesOutput *self);

/**
 * qmi_message_pbm_get_all_capabilities_output_unref:
 * @self: a #QmiMessagePbmGetAllCapabilitiesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_pbm_get_all_capabilities_output_unref (QmiMessagePbmGetAllCapabilitiesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePbmGetAllCapabilitiesOutput, qmi_message_pbm_get_all_capabilities_output_unref)

/**
 * qmi_message_pbm_get_all_capabilities_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePbmGetAllCapabilitiesOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePbmGetAllCapabilitiesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pbm_get_all_capabilities_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePbmGetAllCapabilitiesOutput *qmi_message_pbm_get_all_capabilities_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PBM Get Emergency List */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement:
 * @flags: a #QmiPbmEmergencyNumberFlags.
 * @emergency_number: a string.
 *
 * A QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement struct.
 *
 * Since: 1.38
 */
typedef struct _QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement {
    QmiPbmEmergencyNumberFlags flags;
    gchar *emergency_number;
} QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement;


/**
 * QmiMessagePbmGetEmergencyListOutputCardNumbersElement: (skip)
 * @session_type: a #QmiPbmSessionType.
 * @emergency_numbers: a #GArray of #QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement elements.
 *
 * A QmiMessagePbmGetEmergencyListOutputCardNumbersElement struct.
 *
 * Since: 1.38
 */
typedef struct _QmiMessagePbmGetEmergencyListOutputCardNumbersElement {
    QmiPbmSessionType session_type;
    GArray *emergency_numbers;
} QmiMessagePbmGetEmergencyListOutputCardNumbersElement;

GType qmi_message_pbm_get_emergency_list_output_card_numbers_element_emergency_numbers_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir: (rename-to QmiMessagePbmGetEmergencyListOutputCardNumbersElement)
 * @session_type: a #QmiPbmSessionType.
 * @emergency_numbers: (element-type QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement): an array of #QmiMessagePbmGetEmergencyListOutputCardNumbersElementEmergencyNumbersElement elements.
 *
 * A QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir struct.
 *
 * This type is a version of #QmiMessagePbmGetEmergencyListOutputCardNumbersElement, using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Since: 1.38
 */
typedef struct _QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir {
    QmiPbmSessionType session_type;
    GPtrArray *emergency_numbers;
} QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir;

GType qmi_message_pbm_get_emergency_list_output_card_numbers_element_gir_get_type (void) G_GNUC_CONST;


/**
 * QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement:
 * @flags: a #QmiPbmEmergencyNumberFlags.
 * @emergency_number: a string.
 *
 * A QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement struct.
 *
 * Since: 1.38
 */
typedef struct _QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement {
    QmiPbmEmergencyNumberFlags flags;
    gchar *emergency_number;
} QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement;


/**
 * QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement: (skip)
 * @session_type: a #QmiPbmSessionType.
 * @emergency_numbers: a #GArray of #QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement elements.
 *
 * A QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement struct.
 *
 * Since: 1.38
 */
typedef struct _QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement {
    QmiPbmSessionType session_type;
    GArray *emergency_numbers;
} QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement;

GType qmi_message_pbm_get_emergency_list_output_network_numbers_element_emergency_numbers_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir: (rename-to QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement)
 * @session_type: a #QmiPbmSessionType.
 * @emergency_numbers: (element-type QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement): an array of #QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementEmergencyNumbersElement elements.
 *
 * A QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir struct.
 *
 * This type is a version of #QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement, using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Since: 1.38
 */
typedef struct _QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir {
    QmiPbmSessionType session_type;
    GPtrArray *emergency_numbers;
} QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir;

GType qmi_message_pbm_get_emergency_list_output_network_numbers_element_gir_get_type (void) G_GNUC_CONST;

/**
 * QmiMessagePbmGetEmergencyListOutput:
 *
 * The #QmiMessagePbmGetEmergencyListOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.38
 */
typedef struct _QmiMessagePbmGetEmergencyListOutput QmiMessagePbmGetEmergencyListOutput;
GType qmi_message_pbm_get_emergency_list_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PBM_GET_EMERGENCY_LIST_OUTPUT (qmi_message_pbm_get_emergency_list_output_get_type ())


/**
 * qmi_message_pbm_get_emergency_list_output_get_result:
 * @self: a QmiMessagePbmGetEmergencyListOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.38
 */
gboolean qmi_message_pbm_get_emergency_list_output_get_result (
    QmiMessagePbmGetEmergencyListOutput *self,
    GError **error);


/**
 * qmi_message_pbm_get_emergency_list_output_get_hardcoded_numbers:
 * @self: a #QmiMessagePbmGetEmergencyListOutput.
 * @value_hardcoded_numbers: (out)(optional)(element-type utf8)(transfer none): a placeholder for the output #GArray of #gchar * elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Hardcoded Numbers' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_pbm_get_emergency_list_output_get_hardcoded_numbers (
    QmiMessagePbmGetEmergencyListOutput *self,
    GArray **value_hardcoded_numbers,
    GError **error);


/**
 * qmi_message_pbm_get_emergency_list_output_get_nv_numbers:
 * @self: a #QmiMessagePbmGetEmergencyListOutput.
 * @value_nv_numbers: (out)(optional)(element-type utf8)(transfer none): a placeholder for the output #GArray of #gchar * elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NV Numbers' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_pbm_get_emergency_list_output_get_nv_numbers (
    QmiMessagePbmGetEmergencyListOutput *self,
    GArray **value_nv_numbers,
    GError **error);


/**
 * qmi_message_pbm_get_emergency_list_output_get_card_numbers: (skip)
 * @self: a #QmiMessagePbmGetEmergencyListOutput.
 * @value_card_numbers: (out)(optional)(element-type QmiMessagePbmGetEmergencyListOutputCardNumbersElement)(transfer none): a placeholder for the output #GArray of #QmiMessagePbmGetEmergencyListOutputCardNumbersElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Numbers' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_pbm_get_emergency_list_output_get_card_numbers (
    QmiMessagePbmGetEmergencyListOutput *self,
    GArray **value_card_numbers,
    GError **error);


/**
 * qmi_message_pbm_get_emergency_list_output_get_card_numbers_gir: (rename-to qmi_message_pbm_get_emergency_list_output_get_card_numbers)
 * @self: a #QmiMessagePbmGetEmergencyListOutput.
 * @value_card_numbers_ptr: (out)(optional)(element-type QmiMessagePbmGetEmergencyListOutputCardNumbersElementGir)(transfer none): a placeholder for the output array of #QmiMessagePbmGetEmergencyListOutputCardNumbersElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Card Numbers' field from @self.
 *
 * Version of qmi_message_pbm_get_emergency_list_output_get_card_numbers() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_pbm_get_emergency_list_output_get_card_numbers_gir (
    QmiMessagePbmGetEmergencyListOutput *self,
    GPtrArray **value_card_numbers_ptr,
    GError **error);


/**
 * qmi_message_pbm_get_emergency_list_output_get_network_numbers: (skip)
 * @self: a #QmiMessagePbmGetEmergencyListOutput.
 * @value_network_numbers: (out)(optional)(element-type QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement)(transfer none): a placeholder for the output #GArray of #QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Numbers' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_pbm_get_emergency_list_output_get_network_numbers (
    QmiMessagePbmGetEmergencyListOutput *self,
    GArray **value_network_numbers,
    GError **error);


/**
 * qmi_message_pbm_get_emergency_list_output_get_network_numbers_gir: (rename-to qmi_message_pbm_get_emergency_list_output_get_network_numbers)
 * @self: a #QmiMessagePbmGetEmergencyListOutput.
 * @value_network_numbers_ptr: (out)(optional)(element-type QmiMessagePbmGetEmergencyListOutputNetworkNumbersElementGir)(transfer none): a placeholder for the output array of #QmiMessagePbmGetEmergencyListOutputNetworkNumbersElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Numbers' field from @self.
 *
 * Version of qmi_message_pbm_get_emergency_list_output_get_network_numbers() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_pbm_get_emergency_list_output_get_network_numbers_gir (
    QmiMessagePbmGetEmergencyListOutput *self,
    GPtrArray **value_network_numbers_ptr,
    GError **error);


/**
 * qmi_message_pbm_get_emergency_list_output_ref:
 * @self: a #QmiMessagePbmGetEmergencyListOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.38
 */
QmiMessagePbmGetEmergencyListOutput *qmi_message_pbm_get_emergency_list_output_ref (QmiMessagePbmGetEmergencyListOutput *self);

/**
 * qmi_message_pbm_get_emergency_list_output_unref:
 * @self: a #QmiMessagePbmGetEmergencyListOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.38
 */
void qmi_message_pbm_get_emergency_list_output_unref (QmiMessagePbmGetEmergencyListOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePbmGetEmergencyListOutput, qmi_message_pbm_get_emergency_list_output_unref)

/**
 * qmi_message_pbm_get_emergency_list_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePbmGetEmergencyListOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePbmGetEmergencyListOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pbm_get_emergency_list_output_unref().
 *
 * Since: 1.38
 */
QmiMessagePbmGetEmergencyListOutput *qmi_message_pbm_get_emergency_list_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: PBM */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_pbm_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_PBM

/*****************************************************************************/
/* CLIENT: QMI Client PBM */

#define QMI_TYPE_CLIENT_PBM            (qmi_client_pbm_get_type ())
#define QMI_CLIENT_PBM(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_PBM, QmiClientPbm))
#define QMI_CLIENT_PBM_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_PBM, QmiClientPbmClass))
#define QMI_IS_CLIENT_PBM(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_PBM))
#define QMI_IS_CLIENT_PBM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_PBM))
#define QMI_CLIENT_PBM_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_PBM, QmiClientPbmClass))

typedef struct _QmiClientPbm QmiClientPbm;
typedef struct _QmiClientPbmClass QmiClientPbmClass;

/**
 * QmiClientPbm:
 *
 * #QmiClient which handles operations in the PBM service.
 *
 * The #QmiClientPbm structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
struct _QmiClientPbm {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientPbmClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_pbm_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientPbm, g_object_unref)

/**
 * qmi_client_pbm_indication_register:
 * @self: a #QmiClientPbm.
 * @input: a #QmiMessagePbmIndicationRegisterInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Indication Register request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pbm_indication_register_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_pbm_indication_register (
    QmiClientPbm *self,
    QmiMessagePbmIndicationRegisterInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pbm_indication_register_finish:
 * @self: a #QmiClientPbm.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pbm_indication_register().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pbm_indication_register().
 *
 * Returns: a #QmiMessagePbmIndicationRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pbm_indication_register_output_unref().
 *
 * Since: 1.6
 */
QmiMessagePbmIndicationRegisterOutput *qmi_client_pbm_indication_register_finish (
    QmiClientPbm *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pbm_get_capabilities:
 * @self: a #QmiClientPbm.
 * @input: a #QmiMessagePbmGetCapabilitiesInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Capabilities request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pbm_get_capabilities_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_pbm_get_capabilities (
    QmiClientPbm *self,
    QmiMessagePbmGetCapabilitiesInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pbm_get_capabilities_finish:
 * @self: a #QmiClientPbm.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pbm_get_capabilities().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pbm_get_capabilities().
 *
 * Returns: a #QmiMessagePbmGetCapabilitiesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pbm_get_capabilities_output_unref().
 *
 * Since: 1.6
 */
QmiMessagePbmGetCapabilitiesOutput *qmi_client_pbm_get_capabilities_finish (
    QmiClientPbm *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pbm_get_all_capabilities:
 * @self: a #QmiClientPbm.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get All Capabilities request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pbm_get_all_capabilities_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_pbm_get_all_capabilities (
    QmiClientPbm *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pbm_get_all_capabilities_finish:
 * @self: a #QmiClientPbm.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pbm_get_all_capabilities().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pbm_get_all_capabilities().
 *
 * Returns: a #QmiMessagePbmGetAllCapabilitiesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pbm_get_all_capabilities_output_unref().
 *
 * Since: 1.6
 */
QmiMessagePbmGetAllCapabilitiesOutput *qmi_client_pbm_get_all_capabilities_finish (
    QmiClientPbm *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pbm_get_emergency_list:
 * @self: a #QmiClientPbm.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Emergency List request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pbm_get_emergency_list_finish() to get the result of the operation.
 *
 * Since: 1.38
 */
void qmi_client_pbm_get_emergency_list (
    QmiClientPbm *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pbm_get_emergency_list_finish:
 * @self: a #QmiClientPbm.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pbm_get_emergency_list().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pbm_get_emergency_list().
 *
 * Returns: a #QmiMessagePbmGetEmergencyListOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pbm_get_emergency_list_output_unref().
 *
 * Since: 1.38
 */
QmiMessagePbmGetEmergencyListOutput *qmi_client_pbm_get_emergency_list_finish (
    QmiClientPbm *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_PBM__ */
