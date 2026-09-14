
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
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_DPM__
#define __LIBQMI_GLIB_QMI_DPM__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_DPM_OPEN_PORT
#define HAVE_QMI_MESSAGE_DPM_CLOSE_PORT

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DPM Open Port */


/* --- Input -- */


/**
 * QmiMessageDpmOpenPortInputSoftwareDataPortsElement:
 * @endpoint_type: a #QmiDataEndpointType.
 * @interface_number: a #guint32.
 * @port_name: a string.
 *
 * A QmiMessageDpmOpenPortInputSoftwareDataPortsElement struct.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageDpmOpenPortInputSoftwareDataPortsElement {
    QmiDataEndpointType endpoint_type;
    guint32 interface_number;
    gchar *port_name;
} QmiMessageDpmOpenPortInputSoftwareDataPortsElement;

GType qmi_message_dpm_open_port_input_software_data_ports_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageDpmOpenPortInputHardwareDataPortsElement:
 * @endpoint_type: a #QmiDataEndpointType.
 * @interface_number: a #guint32.
 * @rx_endpoint_number: a #guint32.
 * @tx_endpoint_number: a #guint32.
 *
 * A QmiMessageDpmOpenPortInputHardwareDataPortsElement struct.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageDpmOpenPortInputHardwareDataPortsElement {
    QmiDataEndpointType endpoint_type;
    guint32 interface_number;
    guint32 rx_endpoint_number;
    guint32 tx_endpoint_number;
} QmiMessageDpmOpenPortInputHardwareDataPortsElement;

GType qmi_message_dpm_open_port_input_hardware_data_ports_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageDpmOpenPortInputControlPortsElement:
 * @port_name: a string.
 * @endpoint_type: a #QmiDataEndpointType.
 * @interface_number: a #guint32.
 *
 * A QmiMessageDpmOpenPortInputControlPortsElement struct.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageDpmOpenPortInputControlPortsElement {
    gchar *port_name;
    QmiDataEndpointType endpoint_type;
    guint32 interface_number;
} QmiMessageDpmOpenPortInputControlPortsElement;

GType qmi_message_dpm_open_port_input_control_ports_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageDpmOpenPortInput:
 *
 * The #QmiMessageDpmOpenPortInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageDpmOpenPortInput QmiMessageDpmOpenPortInput;
GType qmi_message_dpm_open_port_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DPM_OPEN_PORT_INPUT (qmi_message_dpm_open_port_input_get_type ())


/**
 * qmi_message_dpm_open_port_input_get_software_data_ports: (skip)
 * @self: a #QmiMessageDpmOpenPortInput.
 * @value_software_data_ports: (out)(optional)(element-type QmiMessageDpmOpenPortInputSoftwareDataPortsElement)(transfer none): a placeholder for the output #GArray of #QmiMessageDpmOpenPortInputSoftwareDataPortsElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Software Data Ports' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_dpm_open_port_input_get_software_data_ports (
    QmiMessageDpmOpenPortInput *self,
    GArray **value_software_data_ports,
    GError **error);


/**
 * qmi_message_dpm_open_port_input_get_software_data_ports_gir: (rename-to qmi_message_dpm_open_port_input_get_software_data_ports)
 * @self: a #QmiMessageDpmOpenPortInput.
 * @value_software_data_ports_ptr: (out)(optional)(element-type QmiMessageDpmOpenPortInputSoftwareDataPortsElement)(transfer none): a placeholder for the output array of #QmiMessageDpmOpenPortInputSoftwareDataPortsElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Software Data Ports' field from @self.
 *
 * Version of qmi_message_dpm_open_port_input_get_software_data_ports() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dpm_open_port_input_get_software_data_ports_gir (
    QmiMessageDpmOpenPortInput *self,
    GPtrArray **value_software_data_ports_ptr,
    GError **error);


/**
 * qmi_message_dpm_open_port_input_set_software_data_ports: (skip)
 * @self: a #QmiMessageDpmOpenPortInput.
 * @value_software_data_ports: (in)(element-type QmiMessageDpmOpenPortInputSoftwareDataPortsElement)(transfer none): a #GArray of #QmiMessageDpmOpenPortInputSoftwareDataPortsElement elements. A new reference to @value_software_data_ports will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Software Data Ports' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_dpm_open_port_input_set_software_data_ports (
    QmiMessageDpmOpenPortInput *self,
    GArray *value_software_data_ports,
    GError **error);


/**
 * qmi_message_dpm_open_port_input_set_software_data_ports_gir: (rename-to qmi_message_dpm_open_port_input_set_software_data_ports)
 * @self: a #QmiMessageDpmOpenPortInput.
 * @value_software_data_ports_ptr: (in)(element-type QmiMessageDpmOpenPortInputSoftwareDataPortsElement)(transfer none): array of #QmiMessageDpmOpenPortInputSoftwareDataPortsElement elements. The contents of the given array will be copied, the #GPtrArray will not increase its reference count.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Software Data Ports' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dpm_open_port_input_set_software_data_ports_gir (
    QmiMessageDpmOpenPortInput *self,
    GPtrArray *value_software_data_ports_ptr,
    GError **error);


/**
 * qmi_message_dpm_open_port_input_get_hardware_data_ports: (skip)
 * @self: a #QmiMessageDpmOpenPortInput.
 * @value_hardware_data_ports: (out)(optional)(element-type QmiMessageDpmOpenPortInputHardwareDataPortsElement)(transfer none): a placeholder for the output #GArray of #QmiMessageDpmOpenPortInputHardwareDataPortsElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Hardware Data Ports' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_dpm_open_port_input_get_hardware_data_ports (
    QmiMessageDpmOpenPortInput *self,
    GArray **value_hardware_data_ports,
    GError **error);


/**
 * qmi_message_dpm_open_port_input_get_hardware_data_ports_gir: (rename-to qmi_message_dpm_open_port_input_get_hardware_data_ports)
 * @self: a #QmiMessageDpmOpenPortInput.
 * @value_hardware_data_ports_ptr: (out)(optional)(element-type QmiMessageDpmOpenPortInputHardwareDataPortsElement)(transfer none): a placeholder for the output array of #QmiMessageDpmOpenPortInputHardwareDataPortsElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Hardware Data Ports' field from @self.
 *
 * Version of qmi_message_dpm_open_port_input_get_hardware_data_ports() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dpm_open_port_input_get_hardware_data_ports_gir (
    QmiMessageDpmOpenPortInput *self,
    GPtrArray **value_hardware_data_ports_ptr,
    GError **error);


/**
 * qmi_message_dpm_open_port_input_set_hardware_data_ports: (skip)
 * @self: a #QmiMessageDpmOpenPortInput.
 * @value_hardware_data_ports: (in)(element-type QmiMessageDpmOpenPortInputHardwareDataPortsElement)(transfer none): a #GArray of #QmiMessageDpmOpenPortInputHardwareDataPortsElement elements. A new reference to @value_hardware_data_ports will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Hardware Data Ports' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_dpm_open_port_input_set_hardware_data_ports (
    QmiMessageDpmOpenPortInput *self,
    GArray *value_hardware_data_ports,
    GError **error);


/**
 * qmi_message_dpm_open_port_input_set_hardware_data_ports_gir: (rename-to qmi_message_dpm_open_port_input_set_hardware_data_ports)
 * @self: a #QmiMessageDpmOpenPortInput.
 * @value_hardware_data_ports_ptr: (in)(element-type QmiMessageDpmOpenPortInputHardwareDataPortsElement)(transfer none): array of #QmiMessageDpmOpenPortInputHardwareDataPortsElement elements. The contents of the given array will be copied, the #GPtrArray will not increase its reference count.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Hardware Data Ports' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dpm_open_port_input_set_hardware_data_ports_gir (
    QmiMessageDpmOpenPortInput *self,
    GPtrArray *value_hardware_data_ports_ptr,
    GError **error);


/**
 * qmi_message_dpm_open_port_input_get_control_ports: (skip)
 * @self: a #QmiMessageDpmOpenPortInput.
 * @value_control_ports: (out)(optional)(element-type QmiMessageDpmOpenPortInputControlPortsElement)(transfer none): a placeholder for the output #GArray of #QmiMessageDpmOpenPortInputControlPortsElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Control Ports' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_dpm_open_port_input_get_control_ports (
    QmiMessageDpmOpenPortInput *self,
    GArray **value_control_ports,
    GError **error);


/**
 * qmi_message_dpm_open_port_input_get_control_ports_gir: (rename-to qmi_message_dpm_open_port_input_get_control_ports)
 * @self: a #QmiMessageDpmOpenPortInput.
 * @value_control_ports_ptr: (out)(optional)(element-type QmiMessageDpmOpenPortInputControlPortsElement)(transfer none): a placeholder for the output array of #QmiMessageDpmOpenPortInputControlPortsElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Control Ports' field from @self.
 *
 * Version of qmi_message_dpm_open_port_input_get_control_ports() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dpm_open_port_input_get_control_ports_gir (
    QmiMessageDpmOpenPortInput *self,
    GPtrArray **value_control_ports_ptr,
    GError **error);


/**
 * qmi_message_dpm_open_port_input_set_control_ports: (skip)
 * @self: a #QmiMessageDpmOpenPortInput.
 * @value_control_ports: (in)(element-type QmiMessageDpmOpenPortInputControlPortsElement)(transfer none): a #GArray of #QmiMessageDpmOpenPortInputControlPortsElement elements. A new reference to @value_control_ports will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Control Ports' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_dpm_open_port_input_set_control_ports (
    QmiMessageDpmOpenPortInput *self,
    GArray *value_control_ports,
    GError **error);


/**
 * qmi_message_dpm_open_port_input_set_control_ports_gir: (rename-to qmi_message_dpm_open_port_input_set_control_ports)
 * @self: a #QmiMessageDpmOpenPortInput.
 * @value_control_ports_ptr: (in)(element-type QmiMessageDpmOpenPortInputControlPortsElement)(transfer none): array of #QmiMessageDpmOpenPortInputControlPortsElement elements. The contents of the given array will be copied, the #GPtrArray will not increase its reference count.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Control Ports' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dpm_open_port_input_set_control_ports_gir (
    QmiMessageDpmOpenPortInput *self,
    GPtrArray *value_control_ports_ptr,
    GError **error);


/**
 * qmi_message_dpm_open_port_input_ref:
 * @self: a #QmiMessageDpmOpenPortInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageDpmOpenPortInput *qmi_message_dpm_open_port_input_ref (QmiMessageDpmOpenPortInput *self);

/**
 * qmi_message_dpm_open_port_input_unref:
 * @self: a #QmiMessageDpmOpenPortInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_dpm_open_port_input_unref (QmiMessageDpmOpenPortInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDpmOpenPortInput, qmi_message_dpm_open_port_input_unref)

/**
 * qmi_message_dpm_open_port_input_new:
 *
 * Allocates a new #QmiMessageDpmOpenPortInput.
 *
 * Returns: the newly created #QmiMessageDpmOpenPortInput. The returned value should be freed with qmi_message_dpm_open_port_input_unref().
 *
 * Since: 1.30
 */
QmiMessageDpmOpenPortInput *qmi_message_dpm_open_port_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDpmOpenPortOutput:
 *
 * The #QmiMessageDpmOpenPortOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageDpmOpenPortOutput QmiMessageDpmOpenPortOutput;
GType qmi_message_dpm_open_port_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DPM_OPEN_PORT_OUTPUT (qmi_message_dpm_open_port_output_get_type ())


/**
 * qmi_message_dpm_open_port_output_get_result:
 * @self: a QmiMessageDpmOpenPortOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.30
 */
gboolean qmi_message_dpm_open_port_output_get_result (
    QmiMessageDpmOpenPortOutput *self,
    GError **error);


/**
 * qmi_message_dpm_open_port_output_ref:
 * @self: a #QmiMessageDpmOpenPortOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageDpmOpenPortOutput *qmi_message_dpm_open_port_output_ref (QmiMessageDpmOpenPortOutput *self);

/**
 * qmi_message_dpm_open_port_output_unref:
 * @self: a #QmiMessageDpmOpenPortOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_dpm_open_port_output_unref (QmiMessageDpmOpenPortOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDpmOpenPortOutput, qmi_message_dpm_open_port_output_unref)

/**
 * qmi_message_dpm_open_port_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDpmOpenPortOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDpmOpenPortOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dpm_open_port_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDpmOpenPortOutput *qmi_message_dpm_open_port_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DPM Close Port */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageDpmClosePortOutput:
 *
 * The #QmiMessageDpmClosePortOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageDpmClosePortOutput QmiMessageDpmClosePortOutput;
GType qmi_message_dpm_close_port_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DPM_CLOSE_PORT_OUTPUT (qmi_message_dpm_close_port_output_get_type ())


/**
 * qmi_message_dpm_close_port_output_get_result:
 * @self: a QmiMessageDpmClosePortOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.30
 */
gboolean qmi_message_dpm_close_port_output_get_result (
    QmiMessageDpmClosePortOutput *self,
    GError **error);


/**
 * qmi_message_dpm_close_port_output_ref:
 * @self: a #QmiMessageDpmClosePortOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageDpmClosePortOutput *qmi_message_dpm_close_port_output_ref (QmiMessageDpmClosePortOutput *self);

/**
 * qmi_message_dpm_close_port_output_unref:
 * @self: a #QmiMessageDpmClosePortOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_dpm_close_port_output_unref (QmiMessageDpmClosePortOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDpmClosePortOutput, qmi_message_dpm_close_port_output_unref)

/**
 * qmi_message_dpm_close_port_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDpmClosePortOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDpmClosePortOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dpm_close_port_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDpmClosePortOutput *qmi_message_dpm_close_port_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: DPM */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_dpm_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_DPM

/*****************************************************************************/
/* CLIENT: QMI Client DPM */

#define QMI_TYPE_CLIENT_DPM            (qmi_client_dpm_get_type ())
#define QMI_CLIENT_DPM(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_DPM, QmiClientDpm))
#define QMI_CLIENT_DPM_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_DPM, QmiClientDpmClass))
#define QMI_IS_CLIENT_DPM(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_DPM))
#define QMI_IS_CLIENT_DPM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_DPM))
#define QMI_CLIENT_DPM_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_DPM, QmiClientDpmClass))

typedef struct _QmiClientDpm QmiClientDpm;
typedef struct _QmiClientDpmClass QmiClientDpmClass;

/**
 * QmiClientDpm:
 *
 * #QmiClient which handles operations in the DPM service.
 *
 * The #QmiClientDpm structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
struct _QmiClientDpm {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientDpmClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_dpm_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientDpm, g_object_unref)

/**
 * qmi_client_dpm_open_port:
 * @self: a #QmiClientDpm.
 * @input: a #QmiMessageDpmOpenPortInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Open Port request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dpm_open_port_finish() to get the result of the operation.
 *
 * Since: 1.30
 */
void qmi_client_dpm_open_port (
    QmiClientDpm *self,
    QmiMessageDpmOpenPortInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dpm_open_port_finish:
 * @self: a #QmiClientDpm.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dpm_open_port().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dpm_open_port().
 *
 * Returns: a #QmiMessageDpmOpenPortOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dpm_open_port_output_unref().
 *
 * Since: 1.30
 */
QmiMessageDpmOpenPortOutput *qmi_client_dpm_open_port_finish (
    QmiClientDpm *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dpm_close_port:
 * @self: a #QmiClientDpm.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Close Port request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dpm_close_port_finish() to get the result of the operation.
 *
 * Since: 1.30
 */
void qmi_client_dpm_close_port (
    QmiClientDpm *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dpm_close_port_finish:
 * @self: a #QmiClientDpm.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dpm_close_port().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dpm_close_port().
 *
 * Returns: a #QmiMessageDpmClosePortOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dpm_close_port_output_unref().
 *
 * Since: 1.30
 */
QmiMessageDpmClosePortOutput *qmi_client_dpm_close_port_finish (
    QmiClientDpm *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_DPM__ */
