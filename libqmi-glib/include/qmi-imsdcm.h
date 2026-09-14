
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
#include "qmi-enums-imsdcm.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_IMSDCM__
#define __LIBQMI_GLIB_QMI_IMSDCM__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST
#define HAVE_QMI_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST
#define HAVE_QMI_INDICATION_IMSDCM_PDP_ACTIVATE

/*****************************************************************************/
/* INDICATION: Qmi Indication IMSDCM PDP Activate */


/* --- Output -- */

/**
 * QmiIndicationImsdcmPdpActivateOutput:
 *
 * The #QmiIndicationImsdcmPdpActivateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiIndicationImsdcmPdpActivateOutput QmiIndicationImsdcmPdpActivateOutput;
GType qmi_indication_imsdcm_pdp_activate_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_IMSDCM_PDP_ACTIVATE_OUTPUT (qmi_indication_imsdcm_pdp_activate_output_get_type ())


/**
 * qmi_indication_imsdcm_pdp_activate_output_get_instance_id:
 * @self: a #QmiIndicationImsdcmPdpActivateOutput.
 * @value_instance_id: (out)(optional): a placeholder for the output #QmiImsDcmInstanceId, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Instance Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_indication_imsdcm_pdp_activate_output_get_instance_id (
    QmiIndicationImsdcmPdpActivateOutput *self,
    QmiImsDcmInstanceId *value_instance_id,
    GError **error);


/**
 * qmi_indication_imsdcm_pdp_activate_output_get_address_info:
 * @self: a #QmiIndicationImsdcmPdpActivateOutput.
 * @value_address_info_ip_family: (out)(optional): a placeholder for the output #QmiImsDcmIpFamiliy, or %NULL if not required.
 * @value_address_info_address: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Address Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_indication_imsdcm_pdp_activate_output_get_address_info (
    QmiIndicationImsdcmPdpActivateOutput *self,
    QmiImsDcmIpFamiliy *value_address_info_ip_family,
    const gchar **value_address_info_address,
    GError **error);


/**
 * qmi_indication_imsdcm_pdp_activate_output_get_pdp_request_sequence_number:
 * @self: a #QmiIndicationImsdcmPdpActivateOutput.
 * @value_pdp_request_sequence_number: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Request Sequence Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_indication_imsdcm_pdp_activate_output_get_pdp_request_sequence_number (
    QmiIndicationImsdcmPdpActivateOutput *self,
    guint32 *value_pdp_request_sequence_number,
    GError **error);


/**
 * qmi_indication_imsdcm_pdp_activate_output_get_pdp_id:
 * @self: a #QmiIndicationImsdcmPdpActivateOutput.
 * @value_pdp_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_indication_imsdcm_pdp_activate_output_get_pdp_id (
    QmiIndicationImsdcmPdpActivateOutput *self,
    guint8 *value_pdp_id,
    GError **error);


/**
 * qmi_indication_imsdcm_pdp_activate_output_get_result:
 * @self: a QmiIndicationImsdcmPdpActivateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.37
 */
gboolean qmi_indication_imsdcm_pdp_activate_output_get_result (
    QmiIndicationImsdcmPdpActivateOutput *self,
    GError **error);


/**
 * qmi_indication_imsdcm_pdp_activate_output_ref:
 * @self: a #QmiIndicationImsdcmPdpActivateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiIndicationImsdcmPdpActivateOutput *qmi_indication_imsdcm_pdp_activate_output_ref (QmiIndicationImsdcmPdpActivateOutput *self);

/**
 * qmi_indication_imsdcm_pdp_activate_output_unref:
 * @self: a #QmiIndicationImsdcmPdpActivateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_indication_imsdcm_pdp_activate_output_unref (QmiIndicationImsdcmPdpActivateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationImsdcmPdpActivateOutput, qmi_indication_imsdcm_pdp_activate_output_unref)

/**
 * qmi_indication_imsdcm_pdp_activate_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationImsdcmPdpActivateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationImsdcmPdpActivateOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_imsdcm_pdp_activate_output_unref().
 *
 * Since: 1.37
 */
QmiIndicationImsdcmPdpActivateOutput *qmi_indication_imsdcm_pdp_activate_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMSDCM PDP Activate Request */


/* --- Input -- */

/**
 * QmiMessageImsdcmPdpActivateRequestInput:
 *
 * The #QmiMessageImsdcmPdpActivateRequestInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiMessageImsdcmPdpActivateRequestInput QmiMessageImsdcmPdpActivateRequestInput;
GType qmi_message_imsdcm_pdp_activate_request_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_INPUT (qmi_message_imsdcm_pdp_activate_request_input_get_type ())


/**
 * qmi_message_imsdcm_pdp_activate_request_input_get_instance_id:
 * @self: a #QmiMessageImsdcmPdpActivateRequestInput.
 * @value_instance_id: (out)(optional): a placeholder for the output #QmiImsDcmInstanceId, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Instance Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_input_get_instance_id (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    QmiImsDcmInstanceId *value_instance_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_input_set_instance_id:
 * @self: a #QmiMessageImsdcmPdpActivateRequestInput.
 * @value_instance_id: a #QmiImsDcmInstanceId.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Instance Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_input_set_instance_id (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    QmiImsDcmInstanceId value_instance_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_input_get_pdp_slot_id:
 * @self: a #QmiMessageImsdcmPdpActivateRequestInput.
 * @value_pdp_slot_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Slot Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_input_get_pdp_slot_id (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    guint32 *value_pdp_slot_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_input_set_pdp_slot_id:
 * @self: a #QmiMessageImsdcmPdpActivateRequestInput.
 * @value_pdp_slot_id: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Slot Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_input_set_pdp_slot_id (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    guint32 value_pdp_slot_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_input_get_pdp_subscription_id:
 * @self: a #QmiMessageImsdcmPdpActivateRequestInput.
 * @value_pdp_subscription_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Subscription Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_input_get_pdp_subscription_id (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    guint32 *value_pdp_subscription_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_input_set_pdp_subscription_id:
 * @self: a #QmiMessageImsdcmPdpActivateRequestInput.
 * @value_pdp_subscription_id: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Subscription Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_input_set_pdp_subscription_id (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    guint32 value_pdp_subscription_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_input_get_pdp_request_sequence_number:
 * @self: a #QmiMessageImsdcmPdpActivateRequestInput.
 * @value_pdp_request_sequence_number: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Request Sequence Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_input_get_pdp_request_sequence_number (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    guint32 *value_pdp_request_sequence_number,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_input_set_pdp_request_sequence_number:
 * @self: a #QmiMessageImsdcmPdpActivateRequestInput.
 * @value_pdp_request_sequence_number: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Request Sequence Number' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_input_set_pdp_request_sequence_number (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    guint32 value_pdp_request_sequence_number,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_input_get_connection_parameters:
 * @self: a #QmiMessageImsdcmPdpActivateRequestInput.
 * @value_connection_parameters_apn: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_connection_parameters_apn_type: (out)(optional): a placeholder for the output #QmiImsDcmApnType, or %NULL if not required.
 * @value_connection_parameters_rat_type: (out)(optional): a placeholder for the output #QmiImsDcmRatType, or %NULL if not required.
 * @value_connection_parameters_ip_family: (out)(optional): a placeholder for the output #QmiImsDcmIpFamiliy, or %NULL if not required.
 * @value_connection_parameters_wds_profile_number: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Connection Parameters' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_input_get_connection_parameters (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    const gchar **value_connection_parameters_apn,
    QmiImsDcmApnType *value_connection_parameters_apn_type,
    QmiImsDcmRatType *value_connection_parameters_rat_type,
    QmiImsDcmIpFamiliy *value_connection_parameters_ip_family,
    guint32 *value_connection_parameters_wds_profile_number,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_input_set_connection_parameters:
 * @self: a #QmiMessageImsdcmPdpActivateRequestInput.
 * @value_connection_parameters_apn: a constant string.
 * @value_connection_parameters_apn_type: a #QmiImsDcmApnType.
 * @value_connection_parameters_rat_type: a #QmiImsDcmRatType.
 * @value_connection_parameters_ip_family: a #QmiImsDcmIpFamiliy.
 * @value_connection_parameters_wds_profile_number: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Connection Parameters' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_input_set_connection_parameters (
    QmiMessageImsdcmPdpActivateRequestInput *self,
    const gchar *value_connection_parameters_apn,
    QmiImsDcmApnType value_connection_parameters_apn_type,
    QmiImsDcmRatType value_connection_parameters_rat_type,
    QmiImsDcmIpFamiliy value_connection_parameters_ip_family,
    guint32 value_connection_parameters_wds_profile_number,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_input_ref:
 * @self: a #QmiMessageImsdcmPdpActivateRequestInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiMessageImsdcmPdpActivateRequestInput *qmi_message_imsdcm_pdp_activate_request_input_ref (QmiMessageImsdcmPdpActivateRequestInput *self);

/**
 * qmi_message_imsdcm_pdp_activate_request_input_unref:
 * @self: a #QmiMessageImsdcmPdpActivateRequestInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_message_imsdcm_pdp_activate_request_input_unref (QmiMessageImsdcmPdpActivateRequestInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageImsdcmPdpActivateRequestInput, qmi_message_imsdcm_pdp_activate_request_input_unref)

/**
 * qmi_message_imsdcm_pdp_activate_request_input_new:
 *
 * Allocates a new #QmiMessageImsdcmPdpActivateRequestInput.
 *
 * Returns: the newly created #QmiMessageImsdcmPdpActivateRequestInput. The returned value should be freed with qmi_message_imsdcm_pdp_activate_request_input_unref().
 *
 * Since: 1.37
 */
QmiMessageImsdcmPdpActivateRequestInput *qmi_message_imsdcm_pdp_activate_request_input_new (void);

/* --- Output -- */

/**
 * QmiMessageImsdcmPdpActivateRequestOutput:
 *
 * The #QmiMessageImsdcmPdpActivateRequestOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiMessageImsdcmPdpActivateRequestOutput QmiMessageImsdcmPdpActivateRequestOutput;
GType qmi_message_imsdcm_pdp_activate_request_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_IMSDCM_PDP_ACTIVATE_REQUEST_OUTPUT (qmi_message_imsdcm_pdp_activate_request_output_get_type ())


/**
 * qmi_message_imsdcm_pdp_activate_request_output_get_instance_id:
 * @self: a #QmiMessageImsdcmPdpActivateRequestOutput.
 * @value_instance_id: (out)(optional): a placeholder for the output #QmiImsDcmInstanceId, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Instance Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_output_get_instance_id (
    QmiMessageImsdcmPdpActivateRequestOutput *self,
    QmiImsDcmInstanceId *value_instance_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_output_get_pdp_request_sequence_number:
 * @self: a #QmiMessageImsdcmPdpActivateRequestOutput.
 * @value_pdp_request_sequence_number: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Request Sequence Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_output_get_pdp_request_sequence_number (
    QmiMessageImsdcmPdpActivateRequestOutput *self,
    guint32 *value_pdp_request_sequence_number,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_output_get_pdp_id:
 * @self: a #QmiMessageImsdcmPdpActivateRequestOutput.
 * @value_pdp_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_output_get_pdp_id (
    QmiMessageImsdcmPdpActivateRequestOutput *self,
    guint8 *value_pdp_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_output_get_result:
 * @self: a QmiMessageImsdcmPdpActivateRequestOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_activate_request_output_get_result (
    QmiMessageImsdcmPdpActivateRequestOutput *self,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_activate_request_output_ref:
 * @self: a #QmiMessageImsdcmPdpActivateRequestOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiMessageImsdcmPdpActivateRequestOutput *qmi_message_imsdcm_pdp_activate_request_output_ref (QmiMessageImsdcmPdpActivateRequestOutput *self);

/**
 * qmi_message_imsdcm_pdp_activate_request_output_unref:
 * @self: a #QmiMessageImsdcmPdpActivateRequestOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_message_imsdcm_pdp_activate_request_output_unref (QmiMessageImsdcmPdpActivateRequestOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageImsdcmPdpActivateRequestOutput, qmi_message_imsdcm_pdp_activate_request_output_unref)

/**
 * qmi_message_imsdcm_pdp_activate_request_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageImsdcmPdpActivateRequestOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageImsdcmPdpActivateRequestOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_imsdcm_pdp_activate_request_output_unref().
 *
 * Since: 1.37
 */
QmiMessageImsdcmPdpActivateRequestOutput *qmi_message_imsdcm_pdp_activate_request_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMSDCM PDP Deactivate Request */


/* --- Input -- */

/**
 * QmiMessageImsdcmPdpDeactivateRequestInput:
 *
 * The #QmiMessageImsdcmPdpDeactivateRequestInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiMessageImsdcmPdpDeactivateRequestInput QmiMessageImsdcmPdpDeactivateRequestInput;
GType qmi_message_imsdcm_pdp_deactivate_request_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_INPUT (qmi_message_imsdcm_pdp_deactivate_request_input_get_type ())


/**
 * qmi_message_imsdcm_pdp_deactivate_request_input_get_instance_id:
 * @self: a #QmiMessageImsdcmPdpDeactivateRequestInput.
 * @value_instance_id: (out)(optional): a placeholder for the output #QmiImsDcmInstanceId, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Instance Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_deactivate_request_input_get_instance_id (
    QmiMessageImsdcmPdpDeactivateRequestInput *self,
    QmiImsDcmInstanceId *value_instance_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_deactivate_request_input_set_instance_id:
 * @self: a #QmiMessageImsdcmPdpDeactivateRequestInput.
 * @value_instance_id: a #QmiImsDcmInstanceId.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Instance Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_deactivate_request_input_set_instance_id (
    QmiMessageImsdcmPdpDeactivateRequestInput *self,
    QmiImsDcmInstanceId value_instance_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_deactivate_request_input_get_pdp_id:
 * @self: a #QmiMessageImsdcmPdpDeactivateRequestInput.
 * @value_pdp_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_deactivate_request_input_get_pdp_id (
    QmiMessageImsdcmPdpDeactivateRequestInput *self,
    guint8 *value_pdp_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_deactivate_request_input_set_pdp_id:
 * @self: a #QmiMessageImsdcmPdpDeactivateRequestInput.
 * @value_pdp_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_deactivate_request_input_set_pdp_id (
    QmiMessageImsdcmPdpDeactivateRequestInput *self,
    guint8 value_pdp_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_deactivate_request_input_ref:
 * @self: a #QmiMessageImsdcmPdpDeactivateRequestInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiMessageImsdcmPdpDeactivateRequestInput *qmi_message_imsdcm_pdp_deactivate_request_input_ref (QmiMessageImsdcmPdpDeactivateRequestInput *self);

/**
 * qmi_message_imsdcm_pdp_deactivate_request_input_unref:
 * @self: a #QmiMessageImsdcmPdpDeactivateRequestInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_message_imsdcm_pdp_deactivate_request_input_unref (QmiMessageImsdcmPdpDeactivateRequestInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageImsdcmPdpDeactivateRequestInput, qmi_message_imsdcm_pdp_deactivate_request_input_unref)

/**
 * qmi_message_imsdcm_pdp_deactivate_request_input_new:
 *
 * Allocates a new #QmiMessageImsdcmPdpDeactivateRequestInput.
 *
 * Returns: the newly created #QmiMessageImsdcmPdpDeactivateRequestInput. The returned value should be freed with qmi_message_imsdcm_pdp_deactivate_request_input_unref().
 *
 * Since: 1.37
 */
QmiMessageImsdcmPdpDeactivateRequestInput *qmi_message_imsdcm_pdp_deactivate_request_input_new (void);

/* --- Output -- */

/**
 * QmiMessageImsdcmPdpDeactivateRequestOutput:
 *
 * The #QmiMessageImsdcmPdpDeactivateRequestOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiMessageImsdcmPdpDeactivateRequestOutput QmiMessageImsdcmPdpDeactivateRequestOutput;
GType qmi_message_imsdcm_pdp_deactivate_request_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_IMSDCM_PDP_DEACTIVATE_REQUEST_OUTPUT (qmi_message_imsdcm_pdp_deactivate_request_output_get_type ())


/**
 * qmi_message_imsdcm_pdp_deactivate_request_output_get_instance_id:
 * @self: a #QmiMessageImsdcmPdpDeactivateRequestOutput.
 * @value_instance_id: (out)(optional): a placeholder for the output #QmiImsDcmInstanceId, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Instance Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_deactivate_request_output_get_instance_id (
    QmiMessageImsdcmPdpDeactivateRequestOutput *self,
    QmiImsDcmInstanceId *value_instance_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_deactivate_request_output_get_pdp_id:
 * @self: a #QmiMessageImsdcmPdpDeactivateRequestOutput.
 * @value_pdp_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_deactivate_request_output_get_pdp_id (
    QmiMessageImsdcmPdpDeactivateRequestOutput *self,
    guint8 *value_pdp_id,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_deactivate_request_output_get_result:
 * @self: a QmiMessageImsdcmPdpDeactivateRequestOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.37
 */
gboolean qmi_message_imsdcm_pdp_deactivate_request_output_get_result (
    QmiMessageImsdcmPdpDeactivateRequestOutput *self,
    GError **error);


/**
 * qmi_message_imsdcm_pdp_deactivate_request_output_ref:
 * @self: a #QmiMessageImsdcmPdpDeactivateRequestOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiMessageImsdcmPdpDeactivateRequestOutput *qmi_message_imsdcm_pdp_deactivate_request_output_ref (QmiMessageImsdcmPdpDeactivateRequestOutput *self);

/**
 * qmi_message_imsdcm_pdp_deactivate_request_output_unref:
 * @self: a #QmiMessageImsdcmPdpDeactivateRequestOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_message_imsdcm_pdp_deactivate_request_output_unref (QmiMessageImsdcmPdpDeactivateRequestOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageImsdcmPdpDeactivateRequestOutput, qmi_message_imsdcm_pdp_deactivate_request_output_unref)

/**
 * qmi_message_imsdcm_pdp_deactivate_request_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageImsdcmPdpDeactivateRequestOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageImsdcmPdpDeactivateRequestOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_imsdcm_pdp_deactivate_request_output_unref().
 *
 * Since: 1.37
 */
QmiMessageImsdcmPdpDeactivateRequestOutput *qmi_message_imsdcm_pdp_deactivate_request_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: IMSDCM */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_imsdcm_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_IMSDCM

/*****************************************************************************/
/* CLIENT: QMI Client IMSDCM */

#define QMI_TYPE_CLIENT_IMSDCM            (qmi_client_imsdcm_get_type ())
#define QMI_CLIENT_IMSDCM(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_IMSDCM, QmiClientImsdcm))
#define QMI_CLIENT_IMSDCM_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_IMSDCM, QmiClientImsdcmClass))
#define QMI_IS_CLIENT_IMSDCM(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_IMSDCM))
#define QMI_IS_CLIENT_IMSDCM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_IMSDCM))
#define QMI_CLIENT_IMSDCM_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_IMSDCM, QmiClientImsdcmClass))

typedef struct _QmiClientImsdcm QmiClientImsdcm;
typedef struct _QmiClientImsdcmClass QmiClientImsdcmClass;

/**
 * QmiClientImsdcm:
 *
 * #QmiClient which handles operations in the IMSDCM service.
 *
 * The #QmiClientImsdcm structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
struct _QmiClientImsdcm {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientImsdcmClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_imsdcm_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientImsdcm, g_object_unref)

/**
 * qmi_client_imsdcm_pdp_activate_request:
 * @self: a #QmiClientImsdcm.
 * @input: a #QmiMessageImsdcmPdpActivateRequestInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a PDP Activate Request request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_imsdcm_pdp_activate_request_finish() to get the result of the operation.
 *
 * Since: 1.37
 */
void qmi_client_imsdcm_pdp_activate_request (
    QmiClientImsdcm *self,
    QmiMessageImsdcmPdpActivateRequestInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_imsdcm_pdp_activate_request_finish:
 * @self: a #QmiClientImsdcm.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_imsdcm_pdp_activate_request().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_imsdcm_pdp_activate_request().
 *
 * Returns: a #QmiMessageImsdcmPdpActivateRequestOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_imsdcm_pdp_activate_request_output_unref().
 *
 * Since: 1.37
 */
QmiMessageImsdcmPdpActivateRequestOutput *qmi_client_imsdcm_pdp_activate_request_finish (
    QmiClientImsdcm *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_imsdcm_pdp_deactivate_request:
 * @self: a #QmiClientImsdcm.
 * @input: a #QmiMessageImsdcmPdpDeactivateRequestInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a PDP Deactivate Request request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_imsdcm_pdp_deactivate_request_finish() to get the result of the operation.
 *
 * Since: 1.37
 */
void qmi_client_imsdcm_pdp_deactivate_request (
    QmiClientImsdcm *self,
    QmiMessageImsdcmPdpDeactivateRequestInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_imsdcm_pdp_deactivate_request_finish:
 * @self: a #QmiClientImsdcm.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_imsdcm_pdp_deactivate_request().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_imsdcm_pdp_deactivate_request().
 *
 * Returns: a #QmiMessageImsdcmPdpDeactivateRequestOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_imsdcm_pdp_deactivate_request_output_unref().
 *
 * Since: 1.37
 */
QmiMessageImsdcmPdpDeactivateRequestOutput *qmi_client_imsdcm_pdp_deactivate_request_finish (
    QmiClientImsdcm *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_IMSDCM__ */
