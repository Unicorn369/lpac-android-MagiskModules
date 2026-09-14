
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
#include "qmi-enums-oma.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_OMA__
#define __LIBQMI_GLIB_QMI_OMA__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_OMA_RESET
#define HAVE_QMI_MESSAGE_OMA_SET_EVENT_REPORT
#define HAVE_QMI_MESSAGE_OMA_START_SESSION
#define HAVE_QMI_MESSAGE_OMA_CANCEL_SESSION
#define HAVE_QMI_MESSAGE_OMA_GET_SESSION_INFO
#define HAVE_QMI_MESSAGE_OMA_SEND_SELECTION
#define HAVE_QMI_MESSAGE_OMA_GET_FEATURE_SETTING
#define HAVE_QMI_MESSAGE_OMA_SET_FEATURE_SETTING
#define HAVE_QMI_INDICATION_OMA_EVENT_REPORT

/*****************************************************************************/
/* INDICATION: Qmi Indication OMA Event Report */


/* --- Output -- */

/**
 * QmiIndicationOmaEventReportOutput:
 *
 * The #QmiIndicationOmaEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiIndicationOmaEventReportOutput QmiIndicationOmaEventReportOutput;
GType qmi_indication_oma_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_OMA_EVENT_REPORT_OUTPUT (qmi_indication_oma_event_report_output_get_type ())


/**
 * qmi_indication_oma_event_report_output_get_session_fail_reason:
 * @self: a #QmiIndicationOmaEventReportOutput.
 * @value_session_fail_reason: (out)(optional): a placeholder for the output #QmiOmaSessionFailedReason, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Fail Reason' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_indication_oma_event_report_output_get_session_fail_reason (
    QmiIndicationOmaEventReportOutput *self,
    QmiOmaSessionFailedReason *value_session_fail_reason,
    GError **error);


/**
 * qmi_indication_oma_event_report_output_get_session_state:
 * @self: a #QmiIndicationOmaEventReportOutput.
 * @value_session_state: (out)(optional): a placeholder for the output #QmiOmaSessionState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_indication_oma_event_report_output_get_session_state (
    QmiIndicationOmaEventReportOutput *self,
    QmiOmaSessionState *value_session_state,
    GError **error);


/**
 * qmi_indication_oma_event_report_output_get_network_initiated_alert:
 * @self: a #QmiIndicationOmaEventReportOutput.
 * @value_network_initiated_alert_session_type: (out)(optional): a placeholder for the output #QmiOmaSessionType, or %NULL if not required.
 * @value_network_initiated_alert_session_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Initiated Alert' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_indication_oma_event_report_output_get_network_initiated_alert (
    QmiIndicationOmaEventReportOutput *self,
    QmiOmaSessionType *value_network_initiated_alert_session_type,
    guint16 *value_network_initiated_alert_session_id,
    GError **error);


/**
 * qmi_indication_oma_event_report_output_ref:
 * @self: a #QmiIndicationOmaEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiIndicationOmaEventReportOutput *qmi_indication_oma_event_report_output_ref (QmiIndicationOmaEventReportOutput *self);

/**
 * qmi_indication_oma_event_report_output_unref:
 * @self: a #QmiIndicationOmaEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_indication_oma_event_report_output_unref (QmiIndicationOmaEventReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationOmaEventReportOutput, qmi_indication_oma_event_report_output_unref)

/**
 * qmi_indication_oma_event_report_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationOmaEventReportOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationOmaEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_oma_event_report_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationOmaEventReportOutput *qmi_indication_oma_event_report_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageOmaResetOutput:
 *
 * The #QmiMessageOmaResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageOmaResetOutput QmiMessageOmaResetOutput;
GType qmi_message_oma_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_OMA_RESET_OUTPUT (qmi_message_oma_reset_output_get_type ())


/**
 * qmi_message_oma_reset_output_get_result:
 * @self: a QmiMessageOmaResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_reset_output_get_result (
    QmiMessageOmaResetOutput *self,
    GError **error);


/**
 * qmi_message_oma_reset_output_ref:
 * @self: a #QmiMessageOmaResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageOmaResetOutput *qmi_message_oma_reset_output_ref (QmiMessageOmaResetOutput *self);

/**
 * qmi_message_oma_reset_output_unref:
 * @self: a #QmiMessageOmaResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_oma_reset_output_unref (QmiMessageOmaResetOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageOmaResetOutput, qmi_message_oma_reset_output_unref)

/**
 * qmi_message_oma_reset_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageOmaResetOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageOmaResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_reset_output_unref().
 *
 * Since: 1.34
 */
QmiMessageOmaResetOutput *qmi_message_oma_reset_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Set Event Report */


/* --- Input -- */

/**
 * QmiMessageOmaSetEventReportInput:
 *
 * The #QmiMessageOmaSetEventReportInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageOmaSetEventReportInput QmiMessageOmaSetEventReportInput;
GType qmi_message_oma_set_event_report_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_OMA_SET_EVENT_REPORT_INPUT (qmi_message_oma_set_event_report_input_get_type ())


/**
 * qmi_message_oma_set_event_report_input_get_session_state_reporting:
 * @self: a #QmiMessageOmaSetEventReportInput.
 * @value_session_state_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session State Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_set_event_report_input_get_session_state_reporting (
    QmiMessageOmaSetEventReportInput *self,
    gboolean *value_session_state_reporting,
    GError **error);


/**
 * qmi_message_oma_set_event_report_input_set_session_state_reporting:
 * @self: a #QmiMessageOmaSetEventReportInput.
 * @value_session_state_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session State Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_set_event_report_input_set_session_state_reporting (
    QmiMessageOmaSetEventReportInput *self,
    gboolean value_session_state_reporting,
    GError **error);


/**
 * qmi_message_oma_set_event_report_input_get_network_initiated_alert_reporting:
 * @self: a #QmiMessageOmaSetEventReportInput.
 * @value_network_initiated_alert_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Initiated Alert Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_set_event_report_input_get_network_initiated_alert_reporting (
    QmiMessageOmaSetEventReportInput *self,
    gboolean *value_network_initiated_alert_reporting,
    GError **error);


/**
 * qmi_message_oma_set_event_report_input_set_network_initiated_alert_reporting:
 * @self: a #QmiMessageOmaSetEventReportInput.
 * @value_network_initiated_alert_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Initiated Alert Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_set_event_report_input_set_network_initiated_alert_reporting (
    QmiMessageOmaSetEventReportInput *self,
    gboolean value_network_initiated_alert_reporting,
    GError **error);


/**
 * qmi_message_oma_set_event_report_input_ref:
 * @self: a #QmiMessageOmaSetEventReportInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageOmaSetEventReportInput *qmi_message_oma_set_event_report_input_ref (QmiMessageOmaSetEventReportInput *self);

/**
 * qmi_message_oma_set_event_report_input_unref:
 * @self: a #QmiMessageOmaSetEventReportInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_oma_set_event_report_input_unref (QmiMessageOmaSetEventReportInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageOmaSetEventReportInput, qmi_message_oma_set_event_report_input_unref)

/**
 * qmi_message_oma_set_event_report_input_new:
 *
 * Allocates a new #QmiMessageOmaSetEventReportInput.
 *
 * Returns: the newly created #QmiMessageOmaSetEventReportInput. The returned value should be freed with qmi_message_oma_set_event_report_input_unref().
 *
 * Since: 1.6
 */
QmiMessageOmaSetEventReportInput *qmi_message_oma_set_event_report_input_new (void);

/* --- Output -- */

/**
 * QmiMessageOmaSetEventReportOutput:
 *
 * The #QmiMessageOmaSetEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageOmaSetEventReportOutput QmiMessageOmaSetEventReportOutput;
GType qmi_message_oma_set_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_OMA_SET_EVENT_REPORT_OUTPUT (qmi_message_oma_set_event_report_output_get_type ())


/**
 * qmi_message_oma_set_event_report_output_get_result:
 * @self: a QmiMessageOmaSetEventReportOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_set_event_report_output_get_result (
    QmiMessageOmaSetEventReportOutput *self,
    GError **error);


/**
 * qmi_message_oma_set_event_report_output_ref:
 * @self: a #QmiMessageOmaSetEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageOmaSetEventReportOutput *qmi_message_oma_set_event_report_output_ref (QmiMessageOmaSetEventReportOutput *self);

/**
 * qmi_message_oma_set_event_report_output_unref:
 * @self: a #QmiMessageOmaSetEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_oma_set_event_report_output_unref (QmiMessageOmaSetEventReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageOmaSetEventReportOutput, qmi_message_oma_set_event_report_output_unref)

/**
 * qmi_message_oma_set_event_report_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageOmaSetEventReportOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageOmaSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_set_event_report_output_unref().
 *
 * Since: 1.34
 */
QmiMessageOmaSetEventReportOutput *qmi_message_oma_set_event_report_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Start Session */


/* --- Input -- */

/**
 * QmiMessageOmaStartSessionInput:
 *
 * The #QmiMessageOmaStartSessionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageOmaStartSessionInput QmiMessageOmaStartSessionInput;
GType qmi_message_oma_start_session_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_OMA_START_SESSION_INPUT (qmi_message_oma_start_session_input_get_type ())


/**
 * qmi_message_oma_start_session_input_get_session_type:
 * @self: a #QmiMessageOmaStartSessionInput.
 * @value_session_type: (out)(optional): a placeholder for the output #QmiOmaSessionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_start_session_input_get_session_type (
    QmiMessageOmaStartSessionInput *self,
    QmiOmaSessionType *value_session_type,
    GError **error);


/**
 * qmi_message_oma_start_session_input_set_session_type:
 * @self: a #QmiMessageOmaStartSessionInput.
 * @value_session_type: a #QmiOmaSessionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Session Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_start_session_input_set_session_type (
    QmiMessageOmaStartSessionInput *self,
    QmiOmaSessionType value_session_type,
    GError **error);


/**
 * qmi_message_oma_start_session_input_ref:
 * @self: a #QmiMessageOmaStartSessionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageOmaStartSessionInput *qmi_message_oma_start_session_input_ref (QmiMessageOmaStartSessionInput *self);

/**
 * qmi_message_oma_start_session_input_unref:
 * @self: a #QmiMessageOmaStartSessionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_oma_start_session_input_unref (QmiMessageOmaStartSessionInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageOmaStartSessionInput, qmi_message_oma_start_session_input_unref)

/**
 * qmi_message_oma_start_session_input_new:
 *
 * Allocates a new #QmiMessageOmaStartSessionInput.
 *
 * Returns: the newly created #QmiMessageOmaStartSessionInput. The returned value should be freed with qmi_message_oma_start_session_input_unref().
 *
 * Since: 1.6
 */
QmiMessageOmaStartSessionInput *qmi_message_oma_start_session_input_new (void);

/* --- Output -- */

/**
 * QmiMessageOmaStartSessionOutput:
 *
 * The #QmiMessageOmaStartSessionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageOmaStartSessionOutput QmiMessageOmaStartSessionOutput;
GType qmi_message_oma_start_session_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_OMA_START_SESSION_OUTPUT (qmi_message_oma_start_session_output_get_type ())


/**
 * qmi_message_oma_start_session_output_get_result:
 * @self: a QmiMessageOmaStartSessionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_start_session_output_get_result (
    QmiMessageOmaStartSessionOutput *self,
    GError **error);


/**
 * qmi_message_oma_start_session_output_ref:
 * @self: a #QmiMessageOmaStartSessionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageOmaStartSessionOutput *qmi_message_oma_start_session_output_ref (QmiMessageOmaStartSessionOutput *self);

/**
 * qmi_message_oma_start_session_output_unref:
 * @self: a #QmiMessageOmaStartSessionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_oma_start_session_output_unref (QmiMessageOmaStartSessionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageOmaStartSessionOutput, qmi_message_oma_start_session_output_unref)

/**
 * qmi_message_oma_start_session_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageOmaStartSessionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageOmaStartSessionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_start_session_output_unref().
 *
 * Since: 1.34
 */
QmiMessageOmaStartSessionOutput *qmi_message_oma_start_session_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Cancel Session */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageOmaCancelSessionOutput:
 *
 * The #QmiMessageOmaCancelSessionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageOmaCancelSessionOutput QmiMessageOmaCancelSessionOutput;
GType qmi_message_oma_cancel_session_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_OMA_CANCEL_SESSION_OUTPUT (qmi_message_oma_cancel_session_output_get_type ())


/**
 * qmi_message_oma_cancel_session_output_get_result:
 * @self: a QmiMessageOmaCancelSessionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_cancel_session_output_get_result (
    QmiMessageOmaCancelSessionOutput *self,
    GError **error);


/**
 * qmi_message_oma_cancel_session_output_ref:
 * @self: a #QmiMessageOmaCancelSessionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageOmaCancelSessionOutput *qmi_message_oma_cancel_session_output_ref (QmiMessageOmaCancelSessionOutput *self);

/**
 * qmi_message_oma_cancel_session_output_unref:
 * @self: a #QmiMessageOmaCancelSessionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_oma_cancel_session_output_unref (QmiMessageOmaCancelSessionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageOmaCancelSessionOutput, qmi_message_oma_cancel_session_output_unref)

/**
 * qmi_message_oma_cancel_session_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageOmaCancelSessionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageOmaCancelSessionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_cancel_session_output_unref().
 *
 * Since: 1.34
 */
QmiMessageOmaCancelSessionOutput *qmi_message_oma_cancel_session_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Get Session Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageOmaGetSessionInfoOutput:
 *
 * The #QmiMessageOmaGetSessionInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageOmaGetSessionInfoOutput QmiMessageOmaGetSessionInfoOutput;
GType qmi_message_oma_get_session_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_OMA_GET_SESSION_INFO_OUTPUT (qmi_message_oma_get_session_info_output_get_type ())


/**
 * qmi_message_oma_get_session_info_output_get_result:
 * @self: a QmiMessageOmaGetSessionInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_get_session_info_output_get_result (
    QmiMessageOmaGetSessionInfoOutput *self,
    GError **error);


/**
 * qmi_message_oma_get_session_info_output_get_session_info:
 * @self: a #QmiMessageOmaGetSessionInfoOutput.
 * @value_session_info_session_state: (out)(optional): a placeholder for the output #QmiOmaSessionState, or %NULL if not required.
 * @value_session_info_session_type: (out)(optional): a placeholder for the output #QmiOmaSessionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_get_session_info_output_get_session_info (
    QmiMessageOmaGetSessionInfoOutput *self,
    QmiOmaSessionState *value_session_info_session_state,
    QmiOmaSessionType *value_session_info_session_type,
    GError **error);


/**
 * qmi_message_oma_get_session_info_output_get_session_failed_reason:
 * @self: a #QmiMessageOmaGetSessionInfoOutput.
 * @value_session_failed_reason: (out)(optional): a placeholder for the output #QmiOmaSessionFailedReason, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Session Failed Reason' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_get_session_info_output_get_session_failed_reason (
    QmiMessageOmaGetSessionInfoOutput *self,
    QmiOmaSessionFailedReason *value_session_failed_reason,
    GError **error);


/**
 * qmi_message_oma_get_session_info_output_get_retry_info:
 * @self: a #QmiMessageOmaGetSessionInfoOutput.
 * @value_retry_info_retry_count: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_retry_info_retry_pause_timer: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_retry_info_retry_pause_timer_remaining: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Retry Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_get_session_info_output_get_retry_info (
    QmiMessageOmaGetSessionInfoOutput *self,
    guint8 *value_retry_info_retry_count,
    guint16 *value_retry_info_retry_pause_timer,
    guint16 *value_retry_info_retry_pause_timer_remaining,
    GError **error);


/**
 * qmi_message_oma_get_session_info_output_get_network_initiated_alert:
 * @self: a #QmiMessageOmaGetSessionInfoOutput.
 * @value_network_initiated_alert_session_type: (out)(optional): a placeholder for the output #QmiOmaSessionType, or %NULL if not required.
 * @value_network_initiated_alert_session_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Initiated Alert' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_get_session_info_output_get_network_initiated_alert (
    QmiMessageOmaGetSessionInfoOutput *self,
    QmiOmaSessionType *value_network_initiated_alert_session_type,
    guint16 *value_network_initiated_alert_session_id,
    GError **error);


/**
 * qmi_message_oma_get_session_info_output_ref:
 * @self: a #QmiMessageOmaGetSessionInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageOmaGetSessionInfoOutput *qmi_message_oma_get_session_info_output_ref (QmiMessageOmaGetSessionInfoOutput *self);

/**
 * qmi_message_oma_get_session_info_output_unref:
 * @self: a #QmiMessageOmaGetSessionInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_oma_get_session_info_output_unref (QmiMessageOmaGetSessionInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageOmaGetSessionInfoOutput, qmi_message_oma_get_session_info_output_unref)

/**
 * qmi_message_oma_get_session_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageOmaGetSessionInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageOmaGetSessionInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_get_session_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageOmaGetSessionInfoOutput *qmi_message_oma_get_session_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Send Selection */


/* --- Input -- */

/**
 * QmiMessageOmaSendSelectionInput:
 *
 * The #QmiMessageOmaSendSelectionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageOmaSendSelectionInput QmiMessageOmaSendSelectionInput;
GType qmi_message_oma_send_selection_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_OMA_SEND_SELECTION_INPUT (qmi_message_oma_send_selection_input_get_type ())


/**
 * qmi_message_oma_send_selection_input_get_network_initiated_alert_selection:
 * @self: a #QmiMessageOmaSendSelectionInput.
 * @value_network_initiated_alert_selection_control_point_selection_accept: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_network_initiated_alert_selection_session_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Initiated Alert Selection' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_send_selection_input_get_network_initiated_alert_selection (
    QmiMessageOmaSendSelectionInput *self,
    gboolean *value_network_initiated_alert_selection_control_point_selection_accept,
    guint16 *value_network_initiated_alert_selection_session_id,
    GError **error);


/**
 * qmi_message_oma_send_selection_input_set_network_initiated_alert_selection:
 * @self: a #QmiMessageOmaSendSelectionInput.
 * @value_network_initiated_alert_selection_control_point_selection_accept: a #gboolean.
 * @value_network_initiated_alert_selection_session_id: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Initiated Alert Selection' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_send_selection_input_set_network_initiated_alert_selection (
    QmiMessageOmaSendSelectionInput *self,
    gboolean value_network_initiated_alert_selection_control_point_selection_accept,
    guint16 value_network_initiated_alert_selection_session_id,
    GError **error);


/**
 * qmi_message_oma_send_selection_input_ref:
 * @self: a #QmiMessageOmaSendSelectionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageOmaSendSelectionInput *qmi_message_oma_send_selection_input_ref (QmiMessageOmaSendSelectionInput *self);

/**
 * qmi_message_oma_send_selection_input_unref:
 * @self: a #QmiMessageOmaSendSelectionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_oma_send_selection_input_unref (QmiMessageOmaSendSelectionInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageOmaSendSelectionInput, qmi_message_oma_send_selection_input_unref)

/**
 * qmi_message_oma_send_selection_input_new:
 *
 * Allocates a new #QmiMessageOmaSendSelectionInput.
 *
 * Returns: the newly created #QmiMessageOmaSendSelectionInput. The returned value should be freed with qmi_message_oma_send_selection_input_unref().
 *
 * Since: 1.6
 */
QmiMessageOmaSendSelectionInput *qmi_message_oma_send_selection_input_new (void);

/* --- Output -- */

/**
 * QmiMessageOmaSendSelectionOutput:
 *
 * The #QmiMessageOmaSendSelectionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageOmaSendSelectionOutput QmiMessageOmaSendSelectionOutput;
GType qmi_message_oma_send_selection_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_OMA_SEND_SELECTION_OUTPUT (qmi_message_oma_send_selection_output_get_type ())


/**
 * qmi_message_oma_send_selection_output_get_result:
 * @self: a QmiMessageOmaSendSelectionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_send_selection_output_get_result (
    QmiMessageOmaSendSelectionOutput *self,
    GError **error);


/**
 * qmi_message_oma_send_selection_output_ref:
 * @self: a #QmiMessageOmaSendSelectionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageOmaSendSelectionOutput *qmi_message_oma_send_selection_output_ref (QmiMessageOmaSendSelectionOutput *self);

/**
 * qmi_message_oma_send_selection_output_unref:
 * @self: a #QmiMessageOmaSendSelectionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_oma_send_selection_output_unref (QmiMessageOmaSendSelectionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageOmaSendSelectionOutput, qmi_message_oma_send_selection_output_unref)

/**
 * qmi_message_oma_send_selection_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageOmaSendSelectionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageOmaSendSelectionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_send_selection_output_unref().
 *
 * Since: 1.34
 */
QmiMessageOmaSendSelectionOutput *qmi_message_oma_send_selection_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Get Feature Setting */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageOmaGetFeatureSettingOutput:
 *
 * The #QmiMessageOmaGetFeatureSettingOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageOmaGetFeatureSettingOutput QmiMessageOmaGetFeatureSettingOutput;
GType qmi_message_oma_get_feature_setting_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_OMA_GET_FEATURE_SETTING_OUTPUT (qmi_message_oma_get_feature_setting_output_get_type ())


/**
 * qmi_message_oma_get_feature_setting_output_get_result:
 * @self: a QmiMessageOmaGetFeatureSettingOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_get_feature_setting_output_get_result (
    QmiMessageOmaGetFeatureSettingOutput *self,
    GError **error);


/**
 * qmi_message_oma_get_feature_setting_output_get_device_provisioning_service_update_config:
 * @self: a #QmiMessageOmaGetFeatureSettingOutput.
 * @value_device_provisioning_service_update_config: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Device Provisioning Service Update Config' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_get_feature_setting_output_get_device_provisioning_service_update_config (
    QmiMessageOmaGetFeatureSettingOutput *self,
    gboolean *value_device_provisioning_service_update_config,
    GError **error);


/**
 * qmi_message_oma_get_feature_setting_output_get_prl_update_service_config:
 * @self: a #QmiMessageOmaGetFeatureSettingOutput.
 * @value_prl_update_service_config: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PRL Update Service Config' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_get_feature_setting_output_get_prl_update_service_config (
    QmiMessageOmaGetFeatureSettingOutput *self,
    gboolean *value_prl_update_service_config,
    GError **error);


/**
 * qmi_message_oma_get_feature_setting_output_get_hfa_feature_config:
 * @self: a #QmiMessageOmaGetFeatureSettingOutput.
 * @value_hfa_feature_config: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HFA Feature Config' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_get_feature_setting_output_get_hfa_feature_config (
    QmiMessageOmaGetFeatureSettingOutput *self,
    gboolean *value_hfa_feature_config,
    GError **error);


/**
 * qmi_message_oma_get_feature_setting_output_get_hfa_feature_done_state:
 * @self: a #QmiMessageOmaGetFeatureSettingOutput.
 * @value_hfa_feature_done_state: (out)(optional): a placeholder for the output #QmiOmaHfaFeatureDoneState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HFA Feature Done State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_get_feature_setting_output_get_hfa_feature_done_state (
    QmiMessageOmaGetFeatureSettingOutput *self,
    QmiOmaHfaFeatureDoneState *value_hfa_feature_done_state,
    GError **error);


/**
 * qmi_message_oma_get_feature_setting_output_ref:
 * @self: a #QmiMessageOmaGetFeatureSettingOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageOmaGetFeatureSettingOutput *qmi_message_oma_get_feature_setting_output_ref (QmiMessageOmaGetFeatureSettingOutput *self);

/**
 * qmi_message_oma_get_feature_setting_output_unref:
 * @self: a #QmiMessageOmaGetFeatureSettingOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_oma_get_feature_setting_output_unref (QmiMessageOmaGetFeatureSettingOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageOmaGetFeatureSettingOutput, qmi_message_oma_get_feature_setting_output_unref)

/**
 * qmi_message_oma_get_feature_setting_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageOmaGetFeatureSettingOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageOmaGetFeatureSettingOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_get_feature_setting_output_unref().
 *
 * Since: 1.34
 */
QmiMessageOmaGetFeatureSettingOutput *qmi_message_oma_get_feature_setting_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message OMA Set Feature Setting */


/* --- Input -- */

/**
 * QmiMessageOmaSetFeatureSettingInput:
 *
 * The #QmiMessageOmaSetFeatureSettingInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageOmaSetFeatureSettingInput QmiMessageOmaSetFeatureSettingInput;
GType qmi_message_oma_set_feature_setting_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_OMA_SET_FEATURE_SETTING_INPUT (qmi_message_oma_set_feature_setting_input_get_type ())


/**
 * qmi_message_oma_set_feature_setting_input_get_hfa_feature_config:
 * @self: a #QmiMessageOmaSetFeatureSettingInput.
 * @value_hfa_feature_config: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HFA Feature Config' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_set_feature_setting_input_get_hfa_feature_config (
    QmiMessageOmaSetFeatureSettingInput *self,
    gboolean *value_hfa_feature_config,
    GError **error);


/**
 * qmi_message_oma_set_feature_setting_input_set_hfa_feature_config:
 * @self: a #QmiMessageOmaSetFeatureSettingInput.
 * @value_hfa_feature_config: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HFA Feature Config' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_set_feature_setting_input_set_hfa_feature_config (
    QmiMessageOmaSetFeatureSettingInput *self,
    gboolean value_hfa_feature_config,
    GError **error);


/**
 * qmi_message_oma_set_feature_setting_input_get_prl_update_service_config:
 * @self: a #QmiMessageOmaSetFeatureSettingInput.
 * @value_prl_update_service_config: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PRL Update Service Config' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_set_feature_setting_input_get_prl_update_service_config (
    QmiMessageOmaSetFeatureSettingInput *self,
    gboolean *value_prl_update_service_config,
    GError **error);


/**
 * qmi_message_oma_set_feature_setting_input_set_prl_update_service_config:
 * @self: a #QmiMessageOmaSetFeatureSettingInput.
 * @value_prl_update_service_config: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PRL Update Service Config' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_set_feature_setting_input_set_prl_update_service_config (
    QmiMessageOmaSetFeatureSettingInput *self,
    gboolean value_prl_update_service_config,
    GError **error);


/**
 * qmi_message_oma_set_feature_setting_input_get_device_provisioning_service_update_config:
 * @self: a #QmiMessageOmaSetFeatureSettingInput.
 * @value_device_provisioning_service_update_config: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Device Provisioning Service Update Config' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_set_feature_setting_input_get_device_provisioning_service_update_config (
    QmiMessageOmaSetFeatureSettingInput *self,
    gboolean *value_device_provisioning_service_update_config,
    GError **error);


/**
 * qmi_message_oma_set_feature_setting_input_set_device_provisioning_service_update_config:
 * @self: a #QmiMessageOmaSetFeatureSettingInput.
 * @value_device_provisioning_service_update_config: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Device Provisioning Service Update Config' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_set_feature_setting_input_set_device_provisioning_service_update_config (
    QmiMessageOmaSetFeatureSettingInput *self,
    gboolean value_device_provisioning_service_update_config,
    GError **error);


/**
 * qmi_message_oma_set_feature_setting_input_ref:
 * @self: a #QmiMessageOmaSetFeatureSettingInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageOmaSetFeatureSettingInput *qmi_message_oma_set_feature_setting_input_ref (QmiMessageOmaSetFeatureSettingInput *self);

/**
 * qmi_message_oma_set_feature_setting_input_unref:
 * @self: a #QmiMessageOmaSetFeatureSettingInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_oma_set_feature_setting_input_unref (QmiMessageOmaSetFeatureSettingInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageOmaSetFeatureSettingInput, qmi_message_oma_set_feature_setting_input_unref)

/**
 * qmi_message_oma_set_feature_setting_input_new:
 *
 * Allocates a new #QmiMessageOmaSetFeatureSettingInput.
 *
 * Returns: the newly created #QmiMessageOmaSetFeatureSettingInput. The returned value should be freed with qmi_message_oma_set_feature_setting_input_unref().
 *
 * Since: 1.6
 */
QmiMessageOmaSetFeatureSettingInput *qmi_message_oma_set_feature_setting_input_new (void);

/* --- Output -- */

/**
 * QmiMessageOmaSetFeatureSettingOutput:
 *
 * The #QmiMessageOmaSetFeatureSettingOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageOmaSetFeatureSettingOutput QmiMessageOmaSetFeatureSettingOutput;
GType qmi_message_oma_set_feature_setting_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_OMA_SET_FEATURE_SETTING_OUTPUT (qmi_message_oma_set_feature_setting_output_get_type ())


/**
 * qmi_message_oma_set_feature_setting_output_get_result:
 * @self: a QmiMessageOmaSetFeatureSettingOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_oma_set_feature_setting_output_get_result (
    QmiMessageOmaSetFeatureSettingOutput *self,
    GError **error);


/**
 * qmi_message_oma_set_feature_setting_output_ref:
 * @self: a #QmiMessageOmaSetFeatureSettingOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageOmaSetFeatureSettingOutput *qmi_message_oma_set_feature_setting_output_ref (QmiMessageOmaSetFeatureSettingOutput *self);

/**
 * qmi_message_oma_set_feature_setting_output_unref:
 * @self: a #QmiMessageOmaSetFeatureSettingOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_oma_set_feature_setting_output_unref (QmiMessageOmaSetFeatureSettingOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageOmaSetFeatureSettingOutput, qmi_message_oma_set_feature_setting_output_unref)

/**
 * qmi_message_oma_set_feature_setting_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageOmaSetFeatureSettingOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageOmaSetFeatureSettingOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_set_feature_setting_output_unref().
 *
 * Since: 1.34
 */
QmiMessageOmaSetFeatureSettingOutput *qmi_message_oma_set_feature_setting_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: OMA */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_oma_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_OMA

/*****************************************************************************/
/* CLIENT: QMI Client OMA */

#define QMI_TYPE_CLIENT_OMA            (qmi_client_oma_get_type ())
#define QMI_CLIENT_OMA(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_OMA, QmiClientOma))
#define QMI_CLIENT_OMA_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_OMA, QmiClientOmaClass))
#define QMI_IS_CLIENT_OMA(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_OMA))
#define QMI_IS_CLIENT_OMA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_OMA))
#define QMI_CLIENT_OMA_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_OMA, QmiClientOmaClass))

typedef struct _QmiClientOma QmiClientOma;
typedef struct _QmiClientOmaClass QmiClientOmaClass;

/**
 * QmiClientOma:
 *
 * #QmiClient which handles operations in the OMA service.
 *
 * The #QmiClientOma structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
struct _QmiClientOma {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientOmaClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_oma_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientOma, g_object_unref)

/**
 * qmi_client_oma_reset:
 * @self: a #QmiClientOma.
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
 * You can then call qmi_client_oma_reset_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_oma_reset (
    QmiClientOma *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_oma_reset_finish:
 * @self: a #QmiClientOma.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_oma_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_oma_reset().
 *
 * Returns: a #QmiMessageOmaResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_reset_output_unref().
 *
 * Since: 1.6
 */
QmiMessageOmaResetOutput *qmi_client_oma_reset_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_oma_set_event_report:
 * @self: a #QmiClientOma.
 * @input: a #QmiMessageOmaSetEventReportInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Event Report request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_oma_set_event_report_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_oma_set_event_report (
    QmiClientOma *self,
    QmiMessageOmaSetEventReportInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_oma_set_event_report_finish:
 * @self: a #QmiClientOma.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_oma_set_event_report().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_oma_set_event_report().
 *
 * Returns: a #QmiMessageOmaSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_set_event_report_output_unref().
 *
 * Since: 1.6
 */
QmiMessageOmaSetEventReportOutput *qmi_client_oma_set_event_report_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_oma_start_session:
 * @self: a #QmiClientOma.
 * @input: a #QmiMessageOmaStartSessionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Start Session request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_oma_start_session_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_oma_start_session (
    QmiClientOma *self,
    QmiMessageOmaStartSessionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_oma_start_session_finish:
 * @self: a #QmiClientOma.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_oma_start_session().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_oma_start_session().
 *
 * Returns: a #QmiMessageOmaStartSessionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_start_session_output_unref().
 *
 * Since: 1.6
 */
QmiMessageOmaStartSessionOutput *qmi_client_oma_start_session_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_oma_cancel_session:
 * @self: a #QmiClientOma.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Cancel Session request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_oma_cancel_session_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_oma_cancel_session (
    QmiClientOma *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_oma_cancel_session_finish:
 * @self: a #QmiClientOma.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_oma_cancel_session().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_oma_cancel_session().
 *
 * Returns: a #QmiMessageOmaCancelSessionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_cancel_session_output_unref().
 *
 * Since: 1.6
 */
QmiMessageOmaCancelSessionOutput *qmi_client_oma_cancel_session_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_oma_get_session_info:
 * @self: a #QmiClientOma.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Session Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_oma_get_session_info_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_oma_get_session_info (
    QmiClientOma *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_oma_get_session_info_finish:
 * @self: a #QmiClientOma.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_oma_get_session_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_oma_get_session_info().
 *
 * Returns: a #QmiMessageOmaGetSessionInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_get_session_info_output_unref().
 *
 * Since: 1.6
 */
QmiMessageOmaGetSessionInfoOutput *qmi_client_oma_get_session_info_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_oma_send_selection:
 * @self: a #QmiClientOma.
 * @input: a #QmiMessageOmaSendSelectionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Send Selection request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_oma_send_selection_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_oma_send_selection (
    QmiClientOma *self,
    QmiMessageOmaSendSelectionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_oma_send_selection_finish:
 * @self: a #QmiClientOma.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_oma_send_selection().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_oma_send_selection().
 *
 * Returns: a #QmiMessageOmaSendSelectionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_send_selection_output_unref().
 *
 * Since: 1.6
 */
QmiMessageOmaSendSelectionOutput *qmi_client_oma_send_selection_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_oma_get_feature_setting:
 * @self: a #QmiClientOma.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Feature Setting request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_oma_get_feature_setting_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_oma_get_feature_setting (
    QmiClientOma *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_oma_get_feature_setting_finish:
 * @self: a #QmiClientOma.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_oma_get_feature_setting().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_oma_get_feature_setting().
 *
 * Returns: a #QmiMessageOmaGetFeatureSettingOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_get_feature_setting_output_unref().
 *
 * Since: 1.6
 */
QmiMessageOmaGetFeatureSettingOutput *qmi_client_oma_get_feature_setting_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_oma_set_feature_setting:
 * @self: a #QmiClientOma.
 * @input: a #QmiMessageOmaSetFeatureSettingInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Feature Setting request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_oma_set_feature_setting_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_oma_set_feature_setting (
    QmiClientOma *self,
    QmiMessageOmaSetFeatureSettingInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_oma_set_feature_setting_finish:
 * @self: a #QmiClientOma.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_oma_set_feature_setting().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_oma_set_feature_setting().
 *
 * Returns: a #QmiMessageOmaSetFeatureSettingOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_oma_set_feature_setting_output_unref().
 *
 * Since: 1.6
 */
QmiMessageOmaSetFeatureSettingOutput *qmi_client_oma_set_feature_setting_finish (
    QmiClientOma *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_OMA__ */
