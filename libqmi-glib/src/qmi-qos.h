
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
#include "qmi-enums-qos.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_QOS__
#define __LIBQMI_GLIB_QMI_QOS__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_QOS_RESET
#define HAVE_QMI_MESSAGE_QOS_GET_FLOW_STATUS
#define HAVE_QMI_MESSAGE_QOS_GET_NETWORK_STATUS
#define HAVE_QMI_MESSAGE_QOS_BIND_MUX_DATA_PORT
#define HAVE_QMI_MESSAGE_QOS_BIND_SUBSCRIPTION
#define HAVE_QMI_MESSAGE_QOS_GET_BIND_SUBSCRIPTION
#define HAVE_QMI_MESSAGE_QOS_SWI_READ_DATA_STATS
#define HAVE_QMI_INDICATION_QOS_FLOW_STATUS
#define HAVE_QMI_INDICATION_QOS_NETWORK_STATUS

/*****************************************************************************/
/* INDICATION: Qmi Indication QOS Flow Status */


/* --- Output -- */

/**
 * QmiIndicationQosFlowStatusOutput:
 *
 * The #QmiIndicationQosFlowStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationQosFlowStatusOutput QmiIndicationQosFlowStatusOutput;
GType qmi_indication_qos_flow_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_QOS_FLOW_STATUS_OUTPUT (qmi_indication_qos_flow_status_output_get_type ())


/**
 * qmi_indication_qos_flow_status_output_get_value:
 * @self: a #QmiIndicationQosFlowStatusOutput.
 * @value_value_qos_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_value_status: (out)(optional): a placeholder for the output #QmiQosStatus, or %NULL if not required.
 * @value_value_event: (out)(optional): a placeholder for the output #QmiQosEvent, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Value' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_qos_flow_status_output_get_value (
    QmiIndicationQosFlowStatusOutput *self,
    guint32 *value_value_qos_id,
    QmiQosStatus *value_value_status,
    QmiQosEvent *value_value_event,
    GError **error);


/**
 * qmi_indication_qos_flow_status_output_ref:
 * @self: a #QmiIndicationQosFlowStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationQosFlowStatusOutput *qmi_indication_qos_flow_status_output_ref (QmiIndicationQosFlowStatusOutput *self);

/**
 * qmi_indication_qos_flow_status_output_unref:
 * @self: a #QmiIndicationQosFlowStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_qos_flow_status_output_unref (QmiIndicationQosFlowStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationQosFlowStatusOutput, qmi_indication_qos_flow_status_output_unref)

/**
 * qmi_indication_qos_flow_status_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationQosFlowStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationQosFlowStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_qos_flow_status_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationQosFlowStatusOutput *qmi_indication_qos_flow_status_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication QOS Network Status */


/* --- Output -- */

/**
 * QmiIndicationQosNetworkStatusOutput:
 *
 * The #QmiIndicationQosNetworkStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiIndicationQosNetworkStatusOutput QmiIndicationQosNetworkStatusOutput;
GType qmi_indication_qos_network_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_QOS_NETWORK_STATUS_OUTPUT (qmi_indication_qos_network_status_output_get_type ())


/**
 * qmi_indication_qos_network_status_output_get_qos_supported:
 * @self: a #QmiIndicationQosNetworkStatusOutput.
 * @value_qos_supported: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'QoS Supported' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_indication_qos_network_status_output_get_qos_supported (
    QmiIndicationQosNetworkStatusOutput *self,
    gboolean *value_qos_supported,
    GError **error);


/**
 * qmi_indication_qos_network_status_output_ref:
 * @self: a #QmiIndicationQosNetworkStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiIndicationQosNetworkStatusOutput *qmi_indication_qos_network_status_output_ref (QmiIndicationQosNetworkStatusOutput *self);

/**
 * qmi_indication_qos_network_status_output_unref:
 * @self: a #QmiIndicationQosNetworkStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_indication_qos_network_status_output_unref (QmiIndicationQosNetworkStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationQosNetworkStatusOutput, qmi_indication_qos_network_status_output_unref)

/**
 * qmi_indication_qos_network_status_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationQosNetworkStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationQosNetworkStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_qos_network_status_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationQosNetworkStatusOutput *qmi_indication_qos_network_status_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageQosResetOutput:
 *
 * The #QmiMessageQosResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosResetOutput QmiMessageQosResetOutput;
GType qmi_message_qos_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_RESET_OUTPUT (qmi_message_qos_reset_output_get_type ())


/**
 * qmi_message_qos_reset_output_get_result:
 * @self: a QmiMessageQosResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_reset_output_get_result (
    QmiMessageQosResetOutput *self,
    GError **error);


/**
 * qmi_message_qos_reset_output_ref:
 * @self: a #QmiMessageQosResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageQosResetOutput *qmi_message_qos_reset_output_ref (QmiMessageQosResetOutput *self);

/**
 * qmi_message_qos_reset_output_unref:
 * @self: a #QmiMessageQosResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_qos_reset_output_unref (QmiMessageQosResetOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosResetOutput, qmi_message_qos_reset_output_unref)

/**
 * qmi_message_qos_reset_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageQosResetOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageQosResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_reset_output_unref().
 *
 * Since: 1.34
 */
QmiMessageQosResetOutput *qmi_message_qos_reset_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Get Flow Status */


/* --- Input -- */

/**
 * QmiMessageQosGetFlowStatusInput:
 *
 * The #QmiMessageQosGetFlowStatusInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosGetFlowStatusInput QmiMessageQosGetFlowStatusInput;
GType qmi_message_qos_get_flow_status_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_GET_FLOW_STATUS_INPUT (qmi_message_qos_get_flow_status_input_get_type ())


/**
 * qmi_message_qos_get_flow_status_input_get_qos_id:
 * @self: a #QmiMessageQosGetFlowStatusInput.
 * @value_qos_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Qos Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_get_flow_status_input_get_qos_id (
    QmiMessageQosGetFlowStatusInput *self,
    guint32 *value_qos_id,
    GError **error);


/**
 * qmi_message_qos_get_flow_status_input_set_qos_id:
 * @self: a #QmiMessageQosGetFlowStatusInput.
 * @value_qos_id: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Qos Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_get_flow_status_input_set_qos_id (
    QmiMessageQosGetFlowStatusInput *self,
    guint32 value_qos_id,
    GError **error);


/**
 * qmi_message_qos_get_flow_status_input_ref:
 * @self: a #QmiMessageQosGetFlowStatusInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageQosGetFlowStatusInput *qmi_message_qos_get_flow_status_input_ref (QmiMessageQosGetFlowStatusInput *self);

/**
 * qmi_message_qos_get_flow_status_input_unref:
 * @self: a #QmiMessageQosGetFlowStatusInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_qos_get_flow_status_input_unref (QmiMessageQosGetFlowStatusInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosGetFlowStatusInput, qmi_message_qos_get_flow_status_input_unref)

/**
 * qmi_message_qos_get_flow_status_input_new:
 *
 * Allocates a new #QmiMessageQosGetFlowStatusInput.
 *
 * Returns: the newly created #QmiMessageQosGetFlowStatusInput. The returned value should be freed with qmi_message_qos_get_flow_status_input_unref().
 *
 * Since: 1.22
 */
QmiMessageQosGetFlowStatusInput *qmi_message_qos_get_flow_status_input_new (void);

/* --- Output -- */

/**
 * QmiMessageQosGetFlowStatusOutput:
 *
 * The #QmiMessageQosGetFlowStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosGetFlowStatusOutput QmiMessageQosGetFlowStatusOutput;
GType qmi_message_qos_get_flow_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_GET_FLOW_STATUS_OUTPUT (qmi_message_qos_get_flow_status_output_get_type ())


/**
 * qmi_message_qos_get_flow_status_output_get_result:
 * @self: a QmiMessageQosGetFlowStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_get_flow_status_output_get_result (
    QmiMessageQosGetFlowStatusOutput *self,
    GError **error);


/**
 * qmi_message_qos_get_flow_status_output_get_value:
 * @self: a #QmiMessageQosGetFlowStatusOutput.
 * @value_value: (out)(optional): a placeholder for the output #QmiQosStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Value' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_get_flow_status_output_get_value (
    QmiMessageQosGetFlowStatusOutput *self,
    QmiQosStatus *value_value,
    GError **error);


/**
 * qmi_message_qos_get_flow_status_output_ref:
 * @self: a #QmiMessageQosGetFlowStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageQosGetFlowStatusOutput *qmi_message_qos_get_flow_status_output_ref (QmiMessageQosGetFlowStatusOutput *self);

/**
 * qmi_message_qos_get_flow_status_output_unref:
 * @self: a #QmiMessageQosGetFlowStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_qos_get_flow_status_output_unref (QmiMessageQosGetFlowStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosGetFlowStatusOutput, qmi_message_qos_get_flow_status_output_unref)

/**
 * qmi_message_qos_get_flow_status_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageQosGetFlowStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageQosGetFlowStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_get_flow_status_output_unref().
 *
 * Since: 1.34
 */
QmiMessageQosGetFlowStatusOutput *qmi_message_qos_get_flow_status_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Get Network Status */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageQosGetNetworkStatusOutput:
 *
 * The #QmiMessageQosGetNetworkStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosGetNetworkStatusOutput QmiMessageQosGetNetworkStatusOutput;
GType qmi_message_qos_get_network_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_GET_NETWORK_STATUS_OUTPUT (qmi_message_qos_get_network_status_output_get_type ())


/**
 * qmi_message_qos_get_network_status_output_get_result:
 * @self: a QmiMessageQosGetNetworkStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_get_network_status_output_get_result (
    QmiMessageQosGetNetworkStatusOutput *self,
    GError **error);


/**
 * qmi_message_qos_get_network_status_output_get_qos_supported:
 * @self: a #QmiMessageQosGetNetworkStatusOutput.
 * @value_qos_supported: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'QoS Supported' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_get_network_status_output_get_qos_supported (
    QmiMessageQosGetNetworkStatusOutput *self,
    gboolean *value_qos_supported,
    GError **error);


/**
 * qmi_message_qos_get_network_status_output_ref:
 * @self: a #QmiMessageQosGetNetworkStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageQosGetNetworkStatusOutput *qmi_message_qos_get_network_status_output_ref (QmiMessageQosGetNetworkStatusOutput *self);

/**
 * qmi_message_qos_get_network_status_output_unref:
 * @self: a #QmiMessageQosGetNetworkStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_qos_get_network_status_output_unref (QmiMessageQosGetNetworkStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosGetNetworkStatusOutput, qmi_message_qos_get_network_status_output_unref)

/**
 * qmi_message_qos_get_network_status_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageQosGetNetworkStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageQosGetNetworkStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_get_network_status_output_unref().
 *
 * Since: 1.34
 */
QmiMessageQosGetNetworkStatusOutput *qmi_message_qos_get_network_status_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Bind Mux Data Port */


/* --- Input -- */

/**
 * QmiMessageQosBindMuxDataPortInput:
 *
 * The #QmiMessageQosBindMuxDataPortInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiMessageQosBindMuxDataPortInput QmiMessageQosBindMuxDataPortInput;
GType qmi_message_qos_bind_mux_data_port_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_BIND_MUX_DATA_PORT_INPUT (qmi_message_qos_bind_mux_data_port_input_get_type ())


/**
 * qmi_message_qos_bind_mux_data_port_input_get_direction:
 * @self: a #QmiMessageQosBindMuxDataPortInput.
 * @value_direction: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Direction' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_qos_bind_mux_data_port_input_get_direction (
    QmiMessageQosBindMuxDataPortInput *self,
    guint8 *value_direction,
    GError **error);


/**
 * qmi_message_qos_bind_mux_data_port_input_set_direction:
 * @self: a #QmiMessageQosBindMuxDataPortInput.
 * @value_direction: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Direction' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_qos_bind_mux_data_port_input_set_direction (
    QmiMessageQosBindMuxDataPortInput *self,
    guint8 value_direction,
    GError **error);


/**
 * qmi_message_qos_bind_mux_data_port_input_get_mux_id:
 * @self: a #QmiMessageQosBindMuxDataPortInput.
 * @value_mux_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mux Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_qos_bind_mux_data_port_input_get_mux_id (
    QmiMessageQosBindMuxDataPortInput *self,
    guint8 *value_mux_id,
    GError **error);


/**
 * qmi_message_qos_bind_mux_data_port_input_set_mux_id:
 * @self: a #QmiMessageQosBindMuxDataPortInput.
 * @value_mux_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Mux Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_qos_bind_mux_data_port_input_set_mux_id (
    QmiMessageQosBindMuxDataPortInput *self,
    guint8 value_mux_id,
    GError **error);


/**
 * qmi_message_qos_bind_mux_data_port_input_get_endpoint:
 * @self: a #QmiMessageQosBindMuxDataPortInput.
 * @value_endpoint_endpoint_type: (out)(optional): a placeholder for the output #QmiDataEndpointType, or %NULL if not required.
 * @value_endpoint_interface_number: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Endpoint' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_qos_bind_mux_data_port_input_get_endpoint (
    QmiMessageQosBindMuxDataPortInput *self,
    QmiDataEndpointType *value_endpoint_endpoint_type,
    guint32 *value_endpoint_interface_number,
    GError **error);


/**
 * qmi_message_qos_bind_mux_data_port_input_set_endpoint:
 * @self: a #QmiMessageQosBindMuxDataPortInput.
 * @value_endpoint_endpoint_type: a #QmiDataEndpointType.
 * @value_endpoint_interface_number: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Endpoint' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_qos_bind_mux_data_port_input_set_endpoint (
    QmiMessageQosBindMuxDataPortInput *self,
    QmiDataEndpointType value_endpoint_endpoint_type,
    guint32 value_endpoint_interface_number,
    GError **error);


/**
 * qmi_message_qos_bind_mux_data_port_input_ref:
 * @self: a #QmiMessageQosBindMuxDataPortInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiMessageQosBindMuxDataPortInput *qmi_message_qos_bind_mux_data_port_input_ref (QmiMessageQosBindMuxDataPortInput *self);

/**
 * qmi_message_qos_bind_mux_data_port_input_unref:
 * @self: a #QmiMessageQosBindMuxDataPortInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_message_qos_bind_mux_data_port_input_unref (QmiMessageQosBindMuxDataPortInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosBindMuxDataPortInput, qmi_message_qos_bind_mux_data_port_input_unref)

/**
 * qmi_message_qos_bind_mux_data_port_input_new:
 *
 * Allocates a new #QmiMessageQosBindMuxDataPortInput.
 *
 * Returns: the newly created #QmiMessageQosBindMuxDataPortInput. The returned value should be freed with qmi_message_qos_bind_mux_data_port_input_unref().
 *
 * Since: 1.37
 */
QmiMessageQosBindMuxDataPortInput *qmi_message_qos_bind_mux_data_port_input_new (void);

/* --- Output -- */

/**
 * QmiMessageQosBindMuxDataPortOutput:
 *
 * The #QmiMessageQosBindMuxDataPortOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiMessageQosBindMuxDataPortOutput QmiMessageQosBindMuxDataPortOutput;
GType qmi_message_qos_bind_mux_data_port_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_BIND_MUX_DATA_PORT_OUTPUT (qmi_message_qos_bind_mux_data_port_output_get_type ())


/**
 * qmi_message_qos_bind_mux_data_port_output_get_result:
 * @self: a QmiMessageQosBindMuxDataPortOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.37
 */
gboolean qmi_message_qos_bind_mux_data_port_output_get_result (
    QmiMessageQosBindMuxDataPortOutput *self,
    GError **error);


/**
 * qmi_message_qos_bind_mux_data_port_output_ref:
 * @self: a #QmiMessageQosBindMuxDataPortOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiMessageQosBindMuxDataPortOutput *qmi_message_qos_bind_mux_data_port_output_ref (QmiMessageQosBindMuxDataPortOutput *self);

/**
 * qmi_message_qos_bind_mux_data_port_output_unref:
 * @self: a #QmiMessageQosBindMuxDataPortOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_message_qos_bind_mux_data_port_output_unref (QmiMessageQosBindMuxDataPortOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosBindMuxDataPortOutput, qmi_message_qos_bind_mux_data_port_output_unref)

/**
 * qmi_message_qos_bind_mux_data_port_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageQosBindMuxDataPortOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageQosBindMuxDataPortOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_bind_mux_data_port_output_unref().
 *
 * Since: 1.37
 */
QmiMessageQosBindMuxDataPortOutput *qmi_message_qos_bind_mux_data_port_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Bind Subscription */


/* --- Input -- */

/**
 * QmiMessageQosBindSubscriptionInput:
 *
 * The #QmiMessageQosBindSubscriptionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiMessageQosBindSubscriptionInput QmiMessageQosBindSubscriptionInput;
GType qmi_message_qos_bind_subscription_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_BIND_SUBSCRIPTION_INPUT (qmi_message_qos_bind_subscription_input_get_type ())


/**
 * qmi_message_qos_bind_subscription_input_get_subscription_id:
 * @self: a #QmiMessageQosBindSubscriptionInput.
 * @value_subscription_id: (out)(optional): a placeholder for the output #QmiSubscriptionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Subscription Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_qos_bind_subscription_input_get_subscription_id (
    QmiMessageQosBindSubscriptionInput *self,
    QmiSubscriptionType *value_subscription_id,
    GError **error);


/**
 * qmi_message_qos_bind_subscription_input_set_subscription_id:
 * @self: a #QmiMessageQosBindSubscriptionInput.
 * @value_subscription_id: a #QmiSubscriptionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Subscription Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_qos_bind_subscription_input_set_subscription_id (
    QmiMessageQosBindSubscriptionInput *self,
    QmiSubscriptionType value_subscription_id,
    GError **error);


/**
 * qmi_message_qos_bind_subscription_input_ref:
 * @self: a #QmiMessageQosBindSubscriptionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiMessageQosBindSubscriptionInput *qmi_message_qos_bind_subscription_input_ref (QmiMessageQosBindSubscriptionInput *self);

/**
 * qmi_message_qos_bind_subscription_input_unref:
 * @self: a #QmiMessageQosBindSubscriptionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_message_qos_bind_subscription_input_unref (QmiMessageQosBindSubscriptionInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosBindSubscriptionInput, qmi_message_qos_bind_subscription_input_unref)

/**
 * qmi_message_qos_bind_subscription_input_new:
 *
 * Allocates a new #QmiMessageQosBindSubscriptionInput.
 *
 * Returns: the newly created #QmiMessageQosBindSubscriptionInput. The returned value should be freed with qmi_message_qos_bind_subscription_input_unref().
 *
 * Since: 1.37
 */
QmiMessageQosBindSubscriptionInput *qmi_message_qos_bind_subscription_input_new (void);

/* --- Output -- */

/**
 * QmiMessageQosBindSubscriptionOutput:
 *
 * The #QmiMessageQosBindSubscriptionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiMessageQosBindSubscriptionOutput QmiMessageQosBindSubscriptionOutput;
GType qmi_message_qos_bind_subscription_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_BIND_SUBSCRIPTION_OUTPUT (qmi_message_qos_bind_subscription_output_get_type ())


/**
 * qmi_message_qos_bind_subscription_output_get_result:
 * @self: a QmiMessageQosBindSubscriptionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.37
 */
gboolean qmi_message_qos_bind_subscription_output_get_result (
    QmiMessageQosBindSubscriptionOutput *self,
    GError **error);


/**
 * qmi_message_qos_bind_subscription_output_ref:
 * @self: a #QmiMessageQosBindSubscriptionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiMessageQosBindSubscriptionOutput *qmi_message_qos_bind_subscription_output_ref (QmiMessageQosBindSubscriptionOutput *self);

/**
 * qmi_message_qos_bind_subscription_output_unref:
 * @self: a #QmiMessageQosBindSubscriptionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_message_qos_bind_subscription_output_unref (QmiMessageQosBindSubscriptionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosBindSubscriptionOutput, qmi_message_qos_bind_subscription_output_unref)

/**
 * qmi_message_qos_bind_subscription_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageQosBindSubscriptionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageQosBindSubscriptionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_bind_subscription_output_unref().
 *
 * Since: 1.37
 */
QmiMessageQosBindSubscriptionOutput *qmi_message_qos_bind_subscription_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Get Bind Subscription */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageQosGetBindSubscriptionOutput:
 *
 * The #QmiMessageQosGetBindSubscriptionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiMessageQosGetBindSubscriptionOutput QmiMessageQosGetBindSubscriptionOutput;
GType qmi_message_qos_get_bind_subscription_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_GET_BIND_SUBSCRIPTION_OUTPUT (qmi_message_qos_get_bind_subscription_output_get_type ())


/**
 * qmi_message_qos_get_bind_subscription_output_get_result:
 * @self: a QmiMessageQosGetBindSubscriptionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.37
 */
gboolean qmi_message_qos_get_bind_subscription_output_get_result (
    QmiMessageQosGetBindSubscriptionOutput *self,
    GError **error);


/**
 * qmi_message_qos_get_bind_subscription_output_get_subscription_id:
 * @self: a #QmiMessageQosGetBindSubscriptionOutput.
 * @value_subscription_id: (out)(optional): a placeholder for the output #QmiSubscriptionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Subscription Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_qos_get_bind_subscription_output_get_subscription_id (
    QmiMessageQosGetBindSubscriptionOutput *self,
    QmiSubscriptionType *value_subscription_id,
    GError **error);


/**
 * qmi_message_qos_get_bind_subscription_output_ref:
 * @self: a #QmiMessageQosGetBindSubscriptionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiMessageQosGetBindSubscriptionOutput *qmi_message_qos_get_bind_subscription_output_ref (QmiMessageQosGetBindSubscriptionOutput *self);

/**
 * qmi_message_qos_get_bind_subscription_output_unref:
 * @self: a #QmiMessageQosGetBindSubscriptionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_message_qos_get_bind_subscription_output_unref (QmiMessageQosGetBindSubscriptionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosGetBindSubscriptionOutput, qmi_message_qos_get_bind_subscription_output_unref)

/**
 * qmi_message_qos_get_bind_subscription_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageQosGetBindSubscriptionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageQosGetBindSubscriptionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_get_bind_subscription_output_unref().
 *
 * Since: 1.37
 */
QmiMessageQosGetBindSubscriptionOutput *qmi_message_qos_get_bind_subscription_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message QOS Swi Read Data Stats */


/* --- Input -- */

/**
 * QmiMessageQosSwiReadDataStatsInput:
 *
 * The #QmiMessageQosSwiReadDataStatsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosSwiReadDataStatsInput QmiMessageQosSwiReadDataStatsInput;
GType qmi_message_qos_swi_read_data_stats_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_SWI_READ_DATA_STATS_INPUT (qmi_message_qos_swi_read_data_stats_input_get_type ())


/**
 * qmi_message_qos_swi_read_data_stats_input_get_apn_id:
 * @self: a #QmiMessageQosSwiReadDataStatsInput.
 * @value_apn_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Apn Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_swi_read_data_stats_input_get_apn_id (
    QmiMessageQosSwiReadDataStatsInput *self,
    guint32 *value_apn_id,
    GError **error);


/**
 * qmi_message_qos_swi_read_data_stats_input_set_apn_id:
 * @self: a #QmiMessageQosSwiReadDataStatsInput.
 * @value_apn_id: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Apn Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_swi_read_data_stats_input_set_apn_id (
    QmiMessageQosSwiReadDataStatsInput *self,
    guint32 value_apn_id,
    GError **error);


/**
 * qmi_message_qos_swi_read_data_stats_input_ref:
 * @self: a #QmiMessageQosSwiReadDataStatsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageQosSwiReadDataStatsInput *qmi_message_qos_swi_read_data_stats_input_ref (QmiMessageQosSwiReadDataStatsInput *self);

/**
 * qmi_message_qos_swi_read_data_stats_input_unref:
 * @self: a #QmiMessageQosSwiReadDataStatsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_qos_swi_read_data_stats_input_unref (QmiMessageQosSwiReadDataStatsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosSwiReadDataStatsInput, qmi_message_qos_swi_read_data_stats_input_unref)

/**
 * qmi_message_qos_swi_read_data_stats_input_new:
 *
 * Allocates a new #QmiMessageQosSwiReadDataStatsInput.
 *
 * Returns: the newly created #QmiMessageQosSwiReadDataStatsInput. The returned value should be freed with qmi_message_qos_swi_read_data_stats_input_unref().
 *
 * Since: 1.22
 */
QmiMessageQosSwiReadDataStatsInput *qmi_message_qos_swi_read_data_stats_input_new (void);

/* --- Output -- */


/**
 * QmiMessageQosSwiReadDataStatsOutputFlowElement:
 * @bearer_id: a #guint32.
 * @tx_packets: a #guint32.
 * @tx_packets_dropped: a #guint32.
 * @tx_bytes: a #guint64.
 * @tx_bytes_dropped: a #guint64.
 *
 * A QmiMessageQosSwiReadDataStatsOutputFlowElement struct.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosSwiReadDataStatsOutputFlowElement {
    guint32 bearer_id;
    guint32 tx_packets;
    guint32 tx_packets_dropped;
    guint64 tx_bytes;
    guint64 tx_bytes_dropped;
} QmiMessageQosSwiReadDataStatsOutputFlowElement;

GType qmi_message_qos_swi_read_data_stats_output_flow_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageQosSwiReadDataStatsOutput:
 *
 * The #QmiMessageQosSwiReadDataStatsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageQosSwiReadDataStatsOutput QmiMessageQosSwiReadDataStatsOutput;
GType qmi_message_qos_swi_read_data_stats_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_QOS_SWI_READ_DATA_STATS_OUTPUT (qmi_message_qos_swi_read_data_stats_output_get_type ())


/**
 * qmi_message_qos_swi_read_data_stats_output_get_result:
 * @self: a QmiMessageQosSwiReadDataStatsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_swi_read_data_stats_output_get_result (
    QmiMessageQosSwiReadDataStatsOutput *self,
    GError **error);


/**
 * qmi_message_qos_swi_read_data_stats_output_get_apn:
 * @self: a #QmiMessageQosSwiReadDataStatsOutput.
 * @value_apn_apn_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_apn_tx_packets: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_apn_tx_packets_dropped: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_apn_rx_packets: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_apn_tx_bytes: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_apn_tx_bytes_dropped: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_apn_rx_bytes: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Apn' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_swi_read_data_stats_output_get_apn (
    QmiMessageQosSwiReadDataStatsOutput *self,
    guint32 *value_apn_apn_id,
    guint32 *value_apn_tx_packets,
    guint32 *value_apn_tx_packets_dropped,
    guint32 *value_apn_rx_packets,
    guint64 *value_apn_tx_bytes,
    guint64 *value_apn_tx_bytes_dropped,
    guint64 *value_apn_rx_bytes,
    GError **error);


/**
 * qmi_message_qos_swi_read_data_stats_output_get_flow: (skip)
 * @self: a #QmiMessageQosSwiReadDataStatsOutput.
 * @value_flow: (out)(optional)(element-type QmiMessageQosSwiReadDataStatsOutputFlowElement)(transfer none): a placeholder for the output #GArray of #QmiMessageQosSwiReadDataStatsOutputFlowElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Flow' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_qos_swi_read_data_stats_output_get_flow (
    QmiMessageQosSwiReadDataStatsOutput *self,
    GArray **value_flow,
    GError **error);


/**
 * qmi_message_qos_swi_read_data_stats_output_get_flow_gir: (rename-to qmi_message_qos_swi_read_data_stats_output_get_flow)
 * @self: a #QmiMessageQosSwiReadDataStatsOutput.
 * @value_flow_ptr: (out)(optional)(element-type QmiMessageQosSwiReadDataStatsOutputFlowElement)(transfer none): a placeholder for the output array of #QmiMessageQosSwiReadDataStatsOutputFlowElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Flow' field from @self.
 *
 * Version of qmi_message_qos_swi_read_data_stats_output_get_flow() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_qos_swi_read_data_stats_output_get_flow_gir (
    QmiMessageQosSwiReadDataStatsOutput *self,
    GPtrArray **value_flow_ptr,
    GError **error);


/**
 * qmi_message_qos_swi_read_data_stats_output_ref:
 * @self: a #QmiMessageQosSwiReadDataStatsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageQosSwiReadDataStatsOutput *qmi_message_qos_swi_read_data_stats_output_ref (QmiMessageQosSwiReadDataStatsOutput *self);

/**
 * qmi_message_qos_swi_read_data_stats_output_unref:
 * @self: a #QmiMessageQosSwiReadDataStatsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_qos_swi_read_data_stats_output_unref (QmiMessageQosSwiReadDataStatsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageQosSwiReadDataStatsOutput, qmi_message_qos_swi_read_data_stats_output_unref)

/**
 * qmi_message_qos_swi_read_data_stats_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageQosSwiReadDataStatsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageQosSwiReadDataStatsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_swi_read_data_stats_output_unref().
 *
 * Since: 1.34
 */
QmiMessageQosSwiReadDataStatsOutput *qmi_message_qos_swi_read_data_stats_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: QOS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_qos_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_QOS

/*****************************************************************************/
/* CLIENT: QMI Client QOS */

#define QMI_TYPE_CLIENT_QOS            (qmi_client_qos_get_type ())
#define QMI_CLIENT_QOS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_QOS, QmiClientQos))
#define QMI_CLIENT_QOS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_QOS, QmiClientQosClass))
#define QMI_IS_CLIENT_QOS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_QOS))
#define QMI_IS_CLIENT_QOS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_QOS))
#define QMI_CLIENT_QOS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_QOS, QmiClientQosClass))

typedef struct _QmiClientQos QmiClientQos;
typedef struct _QmiClientQosClass QmiClientQosClass;

/**
 * QmiClientQos:
 *
 * #QmiClient which handles operations in the QOS service.
 *
 * The #QmiClientQos structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
struct _QmiClientQos {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientQosClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_qos_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientQos, g_object_unref)

/**
 * qmi_client_qos_reset:
 * @self: a #QmiClientQos.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Reset request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_qos_reset_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_qos_reset (
    QmiClientQos *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_qos_reset_finish:
 * @self: a #QmiClientQos.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_qos_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_qos_reset().
 *
 * Returns: a #QmiMessageQosResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_reset_output_unref().
 *
 * Since: 1.22
 */
QmiMessageQosResetOutput *qmi_client_qos_reset_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_qos_get_flow_status:
 * @self: a #QmiClientQos.
 * @input: a #QmiMessageQosGetFlowStatusInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Flow Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_qos_get_flow_status_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_qos_get_flow_status (
    QmiClientQos *self,
    QmiMessageQosGetFlowStatusInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_qos_get_flow_status_finish:
 * @self: a #QmiClientQos.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_qos_get_flow_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_qos_get_flow_status().
 *
 * Returns: a #QmiMessageQosGetFlowStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_get_flow_status_output_unref().
 *
 * Since: 1.22
 */
QmiMessageQosGetFlowStatusOutput *qmi_client_qos_get_flow_status_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_qos_get_network_status:
 * @self: a #QmiClientQos.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Network Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_qos_get_network_status_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_qos_get_network_status (
    QmiClientQos *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_qos_get_network_status_finish:
 * @self: a #QmiClientQos.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_qos_get_network_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_qos_get_network_status().
 *
 * Returns: a #QmiMessageQosGetNetworkStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_get_network_status_output_unref().
 *
 * Since: 1.22
 */
QmiMessageQosGetNetworkStatusOutput *qmi_client_qos_get_network_status_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_qos_bind_mux_data_port:
 * @self: a #QmiClientQos.
 * @input: a #QmiMessageQosBindMuxDataPortInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Bind Mux Data Port request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_qos_bind_mux_data_port_finish() to get the result of the operation.
 *
 * Since: 1.37
 */
void qmi_client_qos_bind_mux_data_port (
    QmiClientQos *self,
    QmiMessageQosBindMuxDataPortInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_qos_bind_mux_data_port_finish:
 * @self: a #QmiClientQos.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_qos_bind_mux_data_port().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_qos_bind_mux_data_port().
 *
 * Returns: a #QmiMessageQosBindMuxDataPortOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_bind_mux_data_port_output_unref().
 *
 * Since: 1.37
 */
QmiMessageQosBindMuxDataPortOutput *qmi_client_qos_bind_mux_data_port_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_qos_bind_subscription:
 * @self: a #QmiClientQos.
 * @input: a #QmiMessageQosBindSubscriptionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Bind Subscription request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_qos_bind_subscription_finish() to get the result of the operation.
 *
 * Since: 1.37
 */
void qmi_client_qos_bind_subscription (
    QmiClientQos *self,
    QmiMessageQosBindSubscriptionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_qos_bind_subscription_finish:
 * @self: a #QmiClientQos.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_qos_bind_subscription().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_qos_bind_subscription().
 *
 * Returns: a #QmiMessageQosBindSubscriptionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_bind_subscription_output_unref().
 *
 * Since: 1.37
 */
QmiMessageQosBindSubscriptionOutput *qmi_client_qos_bind_subscription_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_qos_get_bind_subscription:
 * @self: a #QmiClientQos.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Bind Subscription request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_qos_get_bind_subscription_finish() to get the result of the operation.
 *
 * Since: 1.37
 */
void qmi_client_qos_get_bind_subscription (
    QmiClientQos *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_qos_get_bind_subscription_finish:
 * @self: a #QmiClientQos.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_qos_get_bind_subscription().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_qos_get_bind_subscription().
 *
 * Returns: a #QmiMessageQosGetBindSubscriptionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_get_bind_subscription_output_unref().
 *
 * Since: 1.37
 */
QmiMessageQosGetBindSubscriptionOutput *qmi_client_qos_get_bind_subscription_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_qos_swi_read_data_stats:
 * @self: a #QmiClientQos.
 * @input: a #QmiMessageQosSwiReadDataStatsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Swi Read Data Stats request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_qos_swi_read_data_stats_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_qos_swi_read_data_stats (
    QmiClientQos *self,
    QmiMessageQosSwiReadDataStatsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_qos_swi_read_data_stats_finish:
 * @self: a #QmiClientQos.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_qos_swi_read_data_stats().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_qos_swi_read_data_stats().
 *
 * Returns: a #QmiMessageQosSwiReadDataStatsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_qos_swi_read_data_stats_output_unref().
 *
 * Since: 1.22
 */
QmiMessageQosSwiReadDataStatsOutput *qmi_client_qos_swi_read_data_stats_finish (
    QmiClientQos *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_QOS__ */
