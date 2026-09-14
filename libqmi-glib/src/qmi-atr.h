
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

#ifndef __LIBQMI_GLIB_QMI_ATR__
#define __LIBQMI_GLIB_QMI_ATR__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_ATR_SEND
#define HAVE_QMI_INDICATION_ATR_RECEIVED

/*****************************************************************************/
/* INDICATION: Qmi Indication ATR Received */


/* --- Output -- */

/**
 * QmiIndicationAtrReceivedOutput:
 *
 * The #QmiIndicationAtrReceivedOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
typedef struct _QmiIndicationAtrReceivedOutput QmiIndicationAtrReceivedOutput;
GType qmi_indication_atr_received_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_ATR_RECEIVED_OUTPUT (qmi_indication_atr_received_output_get_type ())


/**
 * qmi_indication_atr_received_output_get_message:
 * @self: a #QmiIndicationAtrReceivedOutput.
 * @value_message: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_indication_atr_received_output_get_message (
    QmiIndicationAtrReceivedOutput *self,
    const gchar **value_message,
    GError **error);


/**
 * qmi_indication_atr_received_output_ref:
 * @self: a #QmiIndicationAtrReceivedOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.34
 */
QmiIndicationAtrReceivedOutput *qmi_indication_atr_received_output_ref (QmiIndicationAtrReceivedOutput *self);

/**
 * qmi_indication_atr_received_output_unref:
 * @self: a #QmiIndicationAtrReceivedOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.34
 */
void qmi_indication_atr_received_output_unref (QmiIndicationAtrReceivedOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationAtrReceivedOutput, qmi_indication_atr_received_output_unref)

/**
 * qmi_indication_atr_received_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationAtrReceivedOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationAtrReceivedOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_atr_received_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationAtrReceivedOutput *qmi_indication_atr_received_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message ATR Send */


/* --- Input -- */

/**
 * QmiMessageAtrSendInput:
 *
 * The #QmiMessageAtrSendInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
typedef struct _QmiMessageAtrSendInput QmiMessageAtrSendInput;
GType qmi_message_atr_send_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_ATR_SEND_INPUT (qmi_message_atr_send_input_get_type ())


/**
 * qmi_message_atr_send_input_get_message:
 * @self: a #QmiMessageAtrSendInput.
 * @value_message: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Message' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_atr_send_input_get_message (
    QmiMessageAtrSendInput *self,
    const gchar **value_message,
    GError **error);


/**
 * qmi_message_atr_send_input_set_message:
 * @self: a #QmiMessageAtrSendInput.
 * @value_message: a constant string with a maximum length of 1024 characters.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Message' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_atr_send_input_set_message (
    QmiMessageAtrSendInput *self,
    const gchar *value_message,
    GError **error);


/**
 * qmi_message_atr_send_input_ref:
 * @self: a #QmiMessageAtrSendInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.34
 */
QmiMessageAtrSendInput *qmi_message_atr_send_input_ref (QmiMessageAtrSendInput *self);

/**
 * qmi_message_atr_send_input_unref:
 * @self: a #QmiMessageAtrSendInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.34
 */
void qmi_message_atr_send_input_unref (QmiMessageAtrSendInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageAtrSendInput, qmi_message_atr_send_input_unref)

/**
 * qmi_message_atr_send_input_new:
 *
 * Allocates a new #QmiMessageAtrSendInput.
 *
 * Returns: the newly created #QmiMessageAtrSendInput. The returned value should be freed with qmi_message_atr_send_input_unref().
 *
 * Since: 1.34
 */
QmiMessageAtrSendInput *qmi_message_atr_send_input_new (void);

/* --- Output -- */

/**
 * QmiMessageAtrSendOutput:
 *
 * The #QmiMessageAtrSendOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
typedef struct _QmiMessageAtrSendOutput QmiMessageAtrSendOutput;
GType qmi_message_atr_send_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_ATR_SEND_OUTPUT (qmi_message_atr_send_output_get_type ())


/**
 * qmi_message_atr_send_output_get_result:
 * @self: a QmiMessageAtrSendOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.34
 */
gboolean qmi_message_atr_send_output_get_result (
    QmiMessageAtrSendOutput *self,
    GError **error);


/**
 * qmi_message_atr_send_output_ref:
 * @self: a #QmiMessageAtrSendOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.34
 */
QmiMessageAtrSendOutput *qmi_message_atr_send_output_ref (QmiMessageAtrSendOutput *self);

/**
 * qmi_message_atr_send_output_unref:
 * @self: a #QmiMessageAtrSendOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.34
 */
void qmi_message_atr_send_output_unref (QmiMessageAtrSendOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageAtrSendOutput, qmi_message_atr_send_output_unref)

/**
 * qmi_message_atr_send_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageAtrSendOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageAtrSendOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_atr_send_output_unref().
 *
 * Since: 1.34
 */
QmiMessageAtrSendOutput *qmi_message_atr_send_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: ATR */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_atr_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_ATR

/*****************************************************************************/
/* CLIENT: QMI Client ATR */

#define QMI_TYPE_CLIENT_ATR            (qmi_client_atr_get_type ())
#define QMI_CLIENT_ATR(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_ATR, QmiClientAtr))
#define QMI_CLIENT_ATR_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_ATR, QmiClientAtrClass))
#define QMI_IS_CLIENT_ATR(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_ATR))
#define QMI_IS_CLIENT_ATR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_ATR))
#define QMI_CLIENT_ATR_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_ATR, QmiClientAtrClass))

typedef struct _QmiClientAtr QmiClientAtr;
typedef struct _QmiClientAtrClass QmiClientAtrClass;

/**
 * QmiClientAtr:
 *
 * #QmiClient which handles operations in the ATR service.
 *
 * The #QmiClientAtr structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
struct _QmiClientAtr {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientAtrClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_atr_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientAtr, g_object_unref)

/**
 * qmi_client_atr_send:
 * @self: a #QmiClientAtr.
 * @input: a #QmiMessageAtrSendInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Send request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_atr_send_finish() to get the result of the operation.
 *
 * Since: 1.34
 */
void qmi_client_atr_send (
    QmiClientAtr *self,
    QmiMessageAtrSendInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_atr_send_finish:
 * @self: a #QmiClientAtr.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_atr_send().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_atr_send().
 *
 * Returns: a #QmiMessageAtrSendOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_atr_send_output_unref().
 *
 * Since: 1.34
 */
QmiMessageAtrSendOutput *qmi_client_atr_send_finish (
    QmiClientAtr *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_ATR__ */
