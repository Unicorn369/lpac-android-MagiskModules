
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
#include "qmi-enums-sar.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_SAR__
#define __LIBQMI_GLIB_QMI_SAR__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_SAR_RF_SET_STATE
#define HAVE_QMI_MESSAGE_SAR_RF_GET_STATE

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message SAR RF Set State */


/* --- Input -- */

/**
 * QmiMessageSarRfSetStateInput:
 *
 * The #QmiMessageSarRfSetStateInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageSarRfSetStateInput QmiMessageSarRfSetStateInput;
GType qmi_message_sar_rf_set_state_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_SAR_RF_SET_STATE_INPUT (qmi_message_sar_rf_set_state_input_get_type ())


/**
 * qmi_message_sar_rf_set_state_input_get_state:
 * @self: a #QmiMessageSarRfSetStateInput.
 * @value_state: (out)(optional): a placeholder for the output #QmiSarRfState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_sar_rf_set_state_input_get_state (
    QmiMessageSarRfSetStateInput *self,
    QmiSarRfState *value_state,
    GError **error);


/**
 * qmi_message_sar_rf_set_state_input_set_state:
 * @self: a #QmiMessageSarRfSetStateInput.
 * @value_state: a #QmiSarRfState.
 * @error: Return location for error or %NULL.
 *
 * Set the 'State' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_sar_rf_set_state_input_set_state (
    QmiMessageSarRfSetStateInput *self,
    QmiSarRfState value_state,
    GError **error);


/**
 * qmi_message_sar_rf_set_state_input_ref:
 * @self: a #QmiMessageSarRfSetStateInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageSarRfSetStateInput *qmi_message_sar_rf_set_state_input_ref (QmiMessageSarRfSetStateInput *self);

/**
 * qmi_message_sar_rf_set_state_input_unref:
 * @self: a #QmiMessageSarRfSetStateInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_sar_rf_set_state_input_unref (QmiMessageSarRfSetStateInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageSarRfSetStateInput, qmi_message_sar_rf_set_state_input_unref)

/**
 * qmi_message_sar_rf_set_state_input_new:
 *
 * Allocates a new #QmiMessageSarRfSetStateInput.
 *
 * Returns: the newly created #QmiMessageSarRfSetStateInput. The returned value should be freed with qmi_message_sar_rf_set_state_input_unref().
 *
 * Since: 1.28
 */
QmiMessageSarRfSetStateInput *qmi_message_sar_rf_set_state_input_new (void);

/* --- Output -- */

/**
 * QmiMessageSarRfSetStateOutput:
 *
 * The #QmiMessageSarRfSetStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageSarRfSetStateOutput QmiMessageSarRfSetStateOutput;
GType qmi_message_sar_rf_set_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_SAR_RF_SET_STATE_OUTPUT (qmi_message_sar_rf_set_state_output_get_type ())


/**
 * qmi_message_sar_rf_set_state_output_get_result:
 * @self: a QmiMessageSarRfSetStateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_sar_rf_set_state_output_get_result (
    QmiMessageSarRfSetStateOutput *self,
    GError **error);


/**
 * qmi_message_sar_rf_set_state_output_ref:
 * @self: a #QmiMessageSarRfSetStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageSarRfSetStateOutput *qmi_message_sar_rf_set_state_output_ref (QmiMessageSarRfSetStateOutput *self);

/**
 * qmi_message_sar_rf_set_state_output_unref:
 * @self: a #QmiMessageSarRfSetStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_sar_rf_set_state_output_unref (QmiMessageSarRfSetStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageSarRfSetStateOutput, qmi_message_sar_rf_set_state_output_unref)

/**
 * qmi_message_sar_rf_set_state_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageSarRfSetStateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageSarRfSetStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_sar_rf_set_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessageSarRfSetStateOutput *qmi_message_sar_rf_set_state_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message SAR RF Get State */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageSarRfGetStateOutput:
 *
 * The #QmiMessageSarRfGetStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageSarRfGetStateOutput QmiMessageSarRfGetStateOutput;
GType qmi_message_sar_rf_get_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_SAR_RF_GET_STATE_OUTPUT (qmi_message_sar_rf_get_state_output_get_type ())


/**
 * qmi_message_sar_rf_get_state_output_get_state:
 * @self: a #QmiMessageSarRfGetStateOutput.
 * @value_state: (out)(optional): a placeholder for the output #QmiSarRfState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_sar_rf_get_state_output_get_state (
    QmiMessageSarRfGetStateOutput *self,
    QmiSarRfState *value_state,
    GError **error);


/**
 * qmi_message_sar_rf_get_state_output_get_result:
 * @self: a QmiMessageSarRfGetStateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_sar_rf_get_state_output_get_result (
    QmiMessageSarRfGetStateOutput *self,
    GError **error);


/**
 * qmi_message_sar_rf_get_state_output_ref:
 * @self: a #QmiMessageSarRfGetStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageSarRfGetStateOutput *qmi_message_sar_rf_get_state_output_ref (QmiMessageSarRfGetStateOutput *self);

/**
 * qmi_message_sar_rf_get_state_output_unref:
 * @self: a #QmiMessageSarRfGetStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_sar_rf_get_state_output_unref (QmiMessageSarRfGetStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageSarRfGetStateOutput, qmi_message_sar_rf_get_state_output_unref)

/**
 * qmi_message_sar_rf_get_state_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageSarRfGetStateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageSarRfGetStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_sar_rf_get_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessageSarRfGetStateOutput *qmi_message_sar_rf_get_state_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: SAR */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_sar_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_SAR

/*****************************************************************************/
/* CLIENT: QMI Client SAR */

#define QMI_TYPE_CLIENT_SAR            (qmi_client_sar_get_type ())
#define QMI_CLIENT_SAR(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_SAR, QmiClientSar))
#define QMI_CLIENT_SAR_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_SAR, QmiClientSarClass))
#define QMI_IS_CLIENT_SAR(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_SAR))
#define QMI_IS_CLIENT_SAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_SAR))
#define QMI_CLIENT_SAR_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_SAR, QmiClientSarClass))

typedef struct _QmiClientSar QmiClientSar;
typedef struct _QmiClientSarClass QmiClientSarClass;

/**
 * QmiClientSar:
 *
 * #QmiClient which handles operations in the SAR service.
 *
 * The #QmiClientSar structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
struct _QmiClientSar {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientSarClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_sar_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientSar, g_object_unref)

/**
 * qmi_client_sar_rf_set_state:
 * @self: a #QmiClientSar.
 * @input: a #QmiMessageSarRfSetStateInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a RF Set State request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_sar_rf_set_state_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_sar_rf_set_state (
    QmiClientSar *self,
    QmiMessageSarRfSetStateInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_sar_rf_set_state_finish:
 * @self: a #QmiClientSar.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_sar_rf_set_state().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_sar_rf_set_state().
 *
 * Returns: a #QmiMessageSarRfSetStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_sar_rf_set_state_output_unref().
 *
 * Since: 1.28
 */
QmiMessageSarRfSetStateOutput *qmi_client_sar_rf_set_state_finish (
    QmiClientSar *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_sar_rf_get_state:
 * @self: a #QmiClientSar.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a RF Get State request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_sar_rf_get_state_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_sar_rf_get_state (
    QmiClientSar *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_sar_rf_get_state_finish:
 * @self: a #QmiClientSar.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_sar_rf_get_state().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_sar_rf_get_state().
 *
 * Returns: a #QmiMessageSarRfGetStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_sar_rf_get_state_output_unref().
 *
 * Since: 1.28
 */
QmiMessageSarRfGetStateOutput *qmi_client_sar_rf_get_state_finish (
    QmiClientSar *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_SAR__ */
