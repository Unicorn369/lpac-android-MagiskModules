
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
#include "qmi-enums-ssc.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_SSC__
#define __LIBQMI_GLIB_QMI_SSC__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_SSC_CONTROL
#define HAVE_QMI_INDICATION_SSC_REPORT_SMALL
#define HAVE_QMI_INDICATION_SSC_REPORT_LARGE

/*****************************************************************************/
/* INDICATION: Qmi Indication SSC Report Small */


/* --- Output -- */

/**
 * QmiIndicationSscReportSmallOutput:
 *
 * The #QmiIndicationSscReportSmallOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
typedef struct _QmiIndicationSscReportSmallOutput QmiIndicationSscReportSmallOutput;
GType qmi_indication_ssc_report_small_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_SSC_REPORT_SMALL_OUTPUT (qmi_indication_ssc_report_small_output_get_type ())


/**
 * qmi_indication_ssc_report_small_output_get_data:
 * @self: a #QmiIndicationSscReportSmallOutput.
 * @value_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_indication_ssc_report_small_output_get_data (
    QmiIndicationSscReportSmallOutput *self,
    GArray **value_data,
    GError **error);


/**
 * qmi_indication_ssc_report_small_output_get_client_id:
 * @self: a #QmiIndicationSscReportSmallOutput.
 * @value_client_id: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Client ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_indication_ssc_report_small_output_get_client_id (
    QmiIndicationSscReportSmallOutput *self,
    guint64 *value_client_id,
    GError **error);


/**
 * qmi_indication_ssc_report_small_output_ref:
 * @self: a #QmiIndicationSscReportSmallOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.34
 */
QmiIndicationSscReportSmallOutput *qmi_indication_ssc_report_small_output_ref (QmiIndicationSscReportSmallOutput *self);

/**
 * qmi_indication_ssc_report_small_output_unref:
 * @self: a #QmiIndicationSscReportSmallOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.34
 */
void qmi_indication_ssc_report_small_output_unref (QmiIndicationSscReportSmallOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationSscReportSmallOutput, qmi_indication_ssc_report_small_output_unref)

/**
 * qmi_indication_ssc_report_small_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationSscReportSmallOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationSscReportSmallOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_ssc_report_small_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationSscReportSmallOutput *qmi_indication_ssc_report_small_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication SSC Report Large */


/* --- Output -- */

/**
 * QmiIndicationSscReportLargeOutput:
 *
 * The #QmiIndicationSscReportLargeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
typedef struct _QmiIndicationSscReportLargeOutput QmiIndicationSscReportLargeOutput;
GType qmi_indication_ssc_report_large_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_SSC_REPORT_LARGE_OUTPUT (qmi_indication_ssc_report_large_output_get_type ())


/**
 * qmi_indication_ssc_report_large_output_get_data:
 * @self: a #QmiIndicationSscReportLargeOutput.
 * @value_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_indication_ssc_report_large_output_get_data (
    QmiIndicationSscReportLargeOutput *self,
    GArray **value_data,
    GError **error);


/**
 * qmi_indication_ssc_report_large_output_get_client_id:
 * @self: a #QmiIndicationSscReportLargeOutput.
 * @value_client_id: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Client ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_indication_ssc_report_large_output_get_client_id (
    QmiIndicationSscReportLargeOutput *self,
    guint64 *value_client_id,
    GError **error);


/**
 * qmi_indication_ssc_report_large_output_ref:
 * @self: a #QmiIndicationSscReportLargeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.34
 */
QmiIndicationSscReportLargeOutput *qmi_indication_ssc_report_large_output_ref (QmiIndicationSscReportLargeOutput *self);

/**
 * qmi_indication_ssc_report_large_output_unref:
 * @self: a #QmiIndicationSscReportLargeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.34
 */
void qmi_indication_ssc_report_large_output_unref (QmiIndicationSscReportLargeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationSscReportLargeOutput, qmi_indication_ssc_report_large_output_unref)

/**
 * qmi_indication_ssc_report_large_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationSscReportLargeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationSscReportLargeOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_ssc_report_large_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationSscReportLargeOutput *qmi_indication_ssc_report_large_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message SSC Control */


/* --- Input -- */

/**
 * QmiMessageSscControlInput:
 *
 * The #QmiMessageSscControlInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
typedef struct _QmiMessageSscControlInput QmiMessageSscControlInput;
GType qmi_message_ssc_control_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_SSC_CONTROL_INPUT (qmi_message_ssc_control_input_get_type ())


/**
 * qmi_message_ssc_control_input_get_report_type:
 * @self: a #QmiMessageSscControlInput.
 * @value_report_type: (out)(optional): a placeholder for the output #QmiSscReportType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Report Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ssc_control_input_get_report_type (
    QmiMessageSscControlInput *self,
    QmiSscReportType *value_report_type,
    GError **error);


/**
 * qmi_message_ssc_control_input_set_report_type:
 * @self: a #QmiMessageSscControlInput.
 * @value_report_type: a #QmiSscReportType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Report Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ssc_control_input_set_report_type (
    QmiMessageSscControlInput *self,
    QmiSscReportType value_report_type,
    GError **error);


/**
 * qmi_message_ssc_control_input_get_data:
 * @self: a #QmiMessageSscControlInput.
 * @value_data: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ssc_control_input_get_data (
    QmiMessageSscControlInput *self,
    GArray **value_data,
    GError **error);


/**
 * qmi_message_ssc_control_input_set_data:
 * @self: a #QmiMessageSscControlInput.
 * @value_data: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_data will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Data' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ssc_control_input_set_data (
    QmiMessageSscControlInput *self,
    GArray *value_data,
    GError **error);


/**
 * qmi_message_ssc_control_input_ref:
 * @self: a #QmiMessageSscControlInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.34
 */
QmiMessageSscControlInput *qmi_message_ssc_control_input_ref (QmiMessageSscControlInput *self);

/**
 * qmi_message_ssc_control_input_unref:
 * @self: a #QmiMessageSscControlInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.34
 */
void qmi_message_ssc_control_input_unref (QmiMessageSscControlInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageSscControlInput, qmi_message_ssc_control_input_unref)

/**
 * qmi_message_ssc_control_input_new:
 *
 * Allocates a new #QmiMessageSscControlInput.
 *
 * Returns: the newly created #QmiMessageSscControlInput. The returned value should be freed with qmi_message_ssc_control_input_unref().
 *
 * Since: 1.34
 */
QmiMessageSscControlInput *qmi_message_ssc_control_input_new (void);

/* --- Output -- */

/**
 * QmiMessageSscControlOutput:
 *
 * The #QmiMessageSscControlOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
typedef struct _QmiMessageSscControlOutput QmiMessageSscControlOutput;
GType qmi_message_ssc_control_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_SSC_CONTROL_OUTPUT (qmi_message_ssc_control_output_get_type ())


/**
 * qmi_message_ssc_control_output_get_result:
 * @self: a QmiMessageSscControlOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.34
 */
gboolean qmi_message_ssc_control_output_get_result (
    QmiMessageSscControlOutput *self,
    GError **error);


/**
 * qmi_message_ssc_control_output_get_client_id:
 * @self: a #QmiMessageSscControlOutput.
 * @value_client_id: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Client ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ssc_control_output_get_client_id (
    QmiMessageSscControlOutput *self,
    guint64 *value_client_id,
    GError **error);


/**
 * qmi_message_ssc_control_output_get_response:
 * @self: a #QmiMessageSscControlOutput.
 * @value_response: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Response' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_ssc_control_output_get_response (
    QmiMessageSscControlOutput *self,
    guint32 *value_response,
    GError **error);


/**
 * qmi_message_ssc_control_output_ref:
 * @self: a #QmiMessageSscControlOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.34
 */
QmiMessageSscControlOutput *qmi_message_ssc_control_output_ref (QmiMessageSscControlOutput *self);

/**
 * qmi_message_ssc_control_output_unref:
 * @self: a #QmiMessageSscControlOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.34
 */
void qmi_message_ssc_control_output_unref (QmiMessageSscControlOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageSscControlOutput, qmi_message_ssc_control_output_unref)

/**
 * qmi_message_ssc_control_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageSscControlOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageSscControlOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ssc_control_output_unref().
 *
 * Since: 1.34
 */
QmiMessageSscControlOutput *qmi_message_ssc_control_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: SSC */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_ssc_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_SSC

/*****************************************************************************/
/* CLIENT: QMI Client SSC */

#define QMI_TYPE_CLIENT_SSC            (qmi_client_ssc_get_type ())
#define QMI_CLIENT_SSC(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_SSC, QmiClientSsc))
#define QMI_CLIENT_SSC_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_SSC, QmiClientSscClass))
#define QMI_IS_CLIENT_SSC(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_SSC))
#define QMI_IS_CLIENT_SSC_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_SSC))
#define QMI_CLIENT_SSC_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_SSC, QmiClientSscClass))

typedef struct _QmiClientSsc QmiClientSsc;
typedef struct _QmiClientSscClass QmiClientSscClass;

/**
 * QmiClientSsc:
 *
 * #QmiClient which handles operations in the SSC service.
 *
 * The #QmiClientSsc structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
struct _QmiClientSsc {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientSscClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_ssc_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientSsc, g_object_unref)

/**
 * qmi_client_ssc_control:
 * @self: a #QmiClientSsc.
 * @input: a #QmiMessageSscControlInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Control request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_ssc_control_finish() to get the result of the operation.
 *
 * Since: 1.34
 */
void qmi_client_ssc_control (
    QmiClientSsc *self,
    QmiMessageSscControlInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_ssc_control_finish:
 * @self: a #QmiClientSsc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_ssc_control().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_ssc_control().
 *
 * Returns: a #QmiMessageSscControlOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ssc_control_output_unref().
 *
 * Since: 1.34
 */
QmiMessageSscControlOutput *qmi_client_ssc_control_finish (
    QmiClientSsc *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_SSC__ */
