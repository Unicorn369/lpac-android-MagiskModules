
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

#ifndef __LIBQMI_GLIB_QMI_GMS__
#define __LIBQMI_GLIB_QMI_GMS__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_GMS_TEST_SET_VALUE
#define HAVE_QMI_MESSAGE_GMS_TEST_GET_VALUE

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message GMS Test Set Value */


/* --- Input -- */

/**
 * QmiMessageGmsTestSetValueInput:
 *
 * The #QmiMessageGmsTestSetValueInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageGmsTestSetValueInput QmiMessageGmsTestSetValueInput;
GType qmi_message_gms_test_set_value_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_GMS_TEST_SET_VALUE_INPUT (qmi_message_gms_test_set_value_input_get_type ())


/**
 * qmi_message_gms_test_set_value_input_get_test_optional_value:
 * @self: a #QmiMessageGmsTestSetValueInput.
 * @value_test_optional_value: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Test Optional Value' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_gms_test_set_value_input_get_test_optional_value (
    QmiMessageGmsTestSetValueInput *self,
    guint8 *value_test_optional_value,
    GError **error);


/**
 * qmi_message_gms_test_set_value_input_set_test_optional_value:
 * @self: a #QmiMessageGmsTestSetValueInput.
 * @value_test_optional_value: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Test Optional Value' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_gms_test_set_value_input_set_test_optional_value (
    QmiMessageGmsTestSetValueInput *self,
    guint8 value_test_optional_value,
    GError **error);


/**
 * qmi_message_gms_test_set_value_input_get_test_mandatory_value:
 * @self: a #QmiMessageGmsTestSetValueInput.
 * @value_test_mandatory_value: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Test Mandatory Value' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_gms_test_set_value_input_get_test_mandatory_value (
    QmiMessageGmsTestSetValueInput *self,
    guint8 *value_test_mandatory_value,
    GError **error);


/**
 * qmi_message_gms_test_set_value_input_set_test_mandatory_value:
 * @self: a #QmiMessageGmsTestSetValueInput.
 * @value_test_mandatory_value: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Test Mandatory Value' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_gms_test_set_value_input_set_test_mandatory_value (
    QmiMessageGmsTestSetValueInput *self,
    guint8 value_test_mandatory_value,
    GError **error);


/**
 * qmi_message_gms_test_set_value_input_ref:
 * @self: a #QmiMessageGmsTestSetValueInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageGmsTestSetValueInput *qmi_message_gms_test_set_value_input_ref (QmiMessageGmsTestSetValueInput *self);

/**
 * qmi_message_gms_test_set_value_input_unref:
 * @self: a #QmiMessageGmsTestSetValueInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_gms_test_set_value_input_unref (QmiMessageGmsTestSetValueInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageGmsTestSetValueInput, qmi_message_gms_test_set_value_input_unref)

/**
 * qmi_message_gms_test_set_value_input_new:
 *
 * Allocates a new #QmiMessageGmsTestSetValueInput.
 *
 * Returns: the newly created #QmiMessageGmsTestSetValueInput. The returned value should be freed with qmi_message_gms_test_set_value_input_unref().
 *
 * Since: 1.26
 */
QmiMessageGmsTestSetValueInput *qmi_message_gms_test_set_value_input_new (void);

/* --- Output -- */

/**
 * QmiMessageGmsTestSetValueOutput:
 *
 * The #QmiMessageGmsTestSetValueOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageGmsTestSetValueOutput QmiMessageGmsTestSetValueOutput;
GType qmi_message_gms_test_set_value_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_GMS_TEST_SET_VALUE_OUTPUT (qmi_message_gms_test_set_value_output_get_type ())


/**
 * qmi_message_gms_test_set_value_output_get_result:
 * @self: a QmiMessageGmsTestSetValueOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_gms_test_set_value_output_get_result (
    QmiMessageGmsTestSetValueOutput *self,
    GError **error);


/**
 * qmi_message_gms_test_set_value_output_ref:
 * @self: a #QmiMessageGmsTestSetValueOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageGmsTestSetValueOutput *qmi_message_gms_test_set_value_output_ref (QmiMessageGmsTestSetValueOutput *self);

/**
 * qmi_message_gms_test_set_value_output_unref:
 * @self: a #QmiMessageGmsTestSetValueOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_gms_test_set_value_output_unref (QmiMessageGmsTestSetValueOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageGmsTestSetValueOutput, qmi_message_gms_test_set_value_output_unref)

/**
 * qmi_message_gms_test_set_value_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageGmsTestSetValueOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageGmsTestSetValueOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_gms_test_set_value_output_unref().
 *
 * Since: 1.34
 */
QmiMessageGmsTestSetValueOutput *qmi_message_gms_test_set_value_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message GMS Test Get Value */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageGmsTestGetValueOutput:
 *
 * The #QmiMessageGmsTestGetValueOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageGmsTestGetValueOutput QmiMessageGmsTestGetValueOutput;
GType qmi_message_gms_test_get_value_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_GMS_TEST_GET_VALUE_OUTPUT (qmi_message_gms_test_get_value_output_get_type ())


/**
 * qmi_message_gms_test_get_value_output_get_result:
 * @self: a QmiMessageGmsTestGetValueOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_gms_test_get_value_output_get_result (
    QmiMessageGmsTestGetValueOutput *self,
    GError **error);


/**
 * qmi_message_gms_test_get_value_output_get_test_mandatory_value:
 * @self: a #QmiMessageGmsTestGetValueOutput.
 * @value_test_mandatory_value: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Test Mandatory Value' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_gms_test_get_value_output_get_test_mandatory_value (
    QmiMessageGmsTestGetValueOutput *self,
    guint8 *value_test_mandatory_value,
    GError **error);


/**
 * qmi_message_gms_test_get_value_output_get_test_optional_value:
 * @self: a #QmiMessageGmsTestGetValueOutput.
 * @value_test_optional_value: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Test Optional Value' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_gms_test_get_value_output_get_test_optional_value (
    QmiMessageGmsTestGetValueOutput *self,
    guint8 *value_test_optional_value,
    GError **error);


/**
 * qmi_message_gms_test_get_value_output_ref:
 * @self: a #QmiMessageGmsTestGetValueOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageGmsTestGetValueOutput *qmi_message_gms_test_get_value_output_ref (QmiMessageGmsTestGetValueOutput *self);

/**
 * qmi_message_gms_test_get_value_output_unref:
 * @self: a #QmiMessageGmsTestGetValueOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_gms_test_get_value_output_unref (QmiMessageGmsTestGetValueOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageGmsTestGetValueOutput, qmi_message_gms_test_get_value_output_unref)

/**
 * qmi_message_gms_test_get_value_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageGmsTestGetValueOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageGmsTestGetValueOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_gms_test_get_value_output_unref().
 *
 * Since: 1.34
 */
QmiMessageGmsTestGetValueOutput *qmi_message_gms_test_get_value_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: GMS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_gms_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_GMS

/*****************************************************************************/
/* CLIENT: QMI Client GMS */

#define QMI_TYPE_CLIENT_GMS            (qmi_client_gms_get_type ())
#define QMI_CLIENT_GMS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_GMS, QmiClientGms))
#define QMI_CLIENT_GMS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_GMS, QmiClientGmsClass))
#define QMI_IS_CLIENT_GMS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_GMS))
#define QMI_IS_CLIENT_GMS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_GMS))
#define QMI_CLIENT_GMS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_GMS, QmiClientGmsClass))

typedef struct _QmiClientGms QmiClientGms;
typedef struct _QmiClientGmsClass QmiClientGmsClass;

/**
 * QmiClientGms:
 *
 * #QmiClient which handles operations in the GMS service.
 *
 * The #QmiClientGms structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
struct _QmiClientGms {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientGmsClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_gms_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientGms, g_object_unref)

/**
 * qmi_client_gms_test_set_value:
 * @self: a #QmiClientGms.
 * @input: a #QmiMessageGmsTestSetValueInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Test Set Value request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_gms_test_set_value_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_gms_test_set_value (
    QmiClientGms *self,
    QmiMessageGmsTestSetValueInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_gms_test_set_value_finish:
 * @self: a #QmiClientGms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_gms_test_set_value().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_gms_test_set_value().
 *
 * Returns: a #QmiMessageGmsTestSetValueOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_gms_test_set_value_output_unref().
 *
 * Since: 1.26
 */
QmiMessageGmsTestSetValueOutput *qmi_client_gms_test_set_value_finish (
    QmiClientGms *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_gms_test_get_value:
 * @self: a #QmiClientGms.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Test Get Value request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_gms_test_get_value_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_gms_test_get_value (
    QmiClientGms *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_gms_test_get_value_finish:
 * @self: a #QmiClientGms.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_gms_test_get_value().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_gms_test_get_value().
 *
 * Returns: a #QmiMessageGmsTestGetValueOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_gms_test_get_value_output_unref().
 *
 * Since: 1.26
 */
QmiMessageGmsTestGetValueOutput *qmi_client_gms_test_get_value_finish (
    QmiClientGms *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_GMS__ */
