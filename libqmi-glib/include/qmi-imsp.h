
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
#include "qmi-enums-imsp.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_IMSP__
#define __LIBQMI_GLIB_QMI_IMSP__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_IMSP_GET_ENABLER_STATE

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message IMSP Get Enabler State */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageImspGetEnablerStateOutput:
 *
 * The #QmiMessageImspGetEnablerStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
typedef struct _QmiMessageImspGetEnablerStateOutput QmiMessageImspGetEnablerStateOutput;
GType qmi_message_imsp_get_enabler_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_IMSP_GET_ENABLER_STATE_OUTPUT (qmi_message_imsp_get_enabler_state_output_get_type ())


/**
 * qmi_message_imsp_get_enabler_state_output_get_result:
 * @self: a QmiMessageImspGetEnablerStateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.34
 */
gboolean qmi_message_imsp_get_enabler_state_output_get_result (
    QmiMessageImspGetEnablerStateOutput *self,
    GError **error);


/**
 * qmi_message_imsp_get_enabler_state_output_get_enabler_state:
 * @self: a #QmiMessageImspGetEnablerStateOutput.
 * @value_enabler_state: (out)(optional): a placeholder for the output #QmiImspEnablerState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Enabler State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_imsp_get_enabler_state_output_get_enabler_state (
    QmiMessageImspGetEnablerStateOutput *self,
    QmiImspEnablerState *value_enabler_state,
    GError **error);


/**
 * qmi_message_imsp_get_enabler_state_output_ref:
 * @self: a #QmiMessageImspGetEnablerStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.34
 */
QmiMessageImspGetEnablerStateOutput *qmi_message_imsp_get_enabler_state_output_ref (QmiMessageImspGetEnablerStateOutput *self);

/**
 * qmi_message_imsp_get_enabler_state_output_unref:
 * @self: a #QmiMessageImspGetEnablerStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.34
 */
void qmi_message_imsp_get_enabler_state_output_unref (QmiMessageImspGetEnablerStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageImspGetEnablerStateOutput, qmi_message_imsp_get_enabler_state_output_unref)

/**
 * qmi_message_imsp_get_enabler_state_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageImspGetEnablerStateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageImspGetEnablerStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_imsp_get_enabler_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessageImspGetEnablerStateOutput *qmi_message_imsp_get_enabler_state_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: IMSP */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_imsp_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_IMSP

/*****************************************************************************/
/* CLIENT: QMI Client IMSP */

#define QMI_TYPE_CLIENT_IMSP            (qmi_client_imsp_get_type ())
#define QMI_CLIENT_IMSP(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_IMSP, QmiClientImsp))
#define QMI_CLIENT_IMSP_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_IMSP, QmiClientImspClass))
#define QMI_IS_CLIENT_IMSP(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_IMSP))
#define QMI_IS_CLIENT_IMSP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_IMSP))
#define QMI_CLIENT_IMSP_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_IMSP, QmiClientImspClass))

typedef struct _QmiClientImsp QmiClientImsp;
typedef struct _QmiClientImspClass QmiClientImspClass;

/**
 * QmiClientImsp:
 *
 * #QmiClient which handles operations in the IMSP service.
 *
 * The #QmiClientImsp structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
struct _QmiClientImsp {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientImspClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_imsp_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientImsp, g_object_unref)

/**
 * qmi_client_imsp_get_enabler_state:
 * @self: a #QmiClientImsp.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Enabler State request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_imsp_get_enabler_state_finish() to get the result of the operation.
 *
 * Since: 1.34
 */
void qmi_client_imsp_get_enabler_state (
    QmiClientImsp *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_imsp_get_enabler_state_finish:
 * @self: a #QmiClientImsp.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_imsp_get_enabler_state().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_imsp_get_enabler_state().
 *
 * Returns: a #QmiMessageImspGetEnablerStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_imsp_get_enabler_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessageImspGetEnablerStateOutput *qmi_client_imsp_get_enabler_state_finish (
    QmiClientImsp *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_IMSP__ */
