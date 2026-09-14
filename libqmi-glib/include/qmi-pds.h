
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
#include "qmi-enums-pds.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_PDS__
#define __LIBQMI_GLIB_QMI_PDS__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_PDS_RESET
#define HAVE_QMI_MESSAGE_PDS_SET_EVENT_REPORT
#define HAVE_QMI_MESSAGE_PDS_GET_GPS_SERVICE_STATE
#define HAVE_QMI_MESSAGE_PDS_SET_GPS_SERVICE_STATE
#define HAVE_QMI_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION
#define HAVE_QMI_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION
#define HAVE_QMI_MESSAGE_PDS_GET_AGPS_CONFIG
#define HAVE_QMI_MESSAGE_PDS_SET_AGPS_CONFIG
#define HAVE_QMI_MESSAGE_PDS_GET_AUTO_TRACKING_STATE
#define HAVE_QMI_MESSAGE_PDS_SET_AUTO_TRACKING_STATE
#define HAVE_QMI_INDICATION_PDS_EVENT_REPORT
#define HAVE_QMI_INDICATION_PDS_GPS_READY

/*****************************************************************************/
/* INDICATION: Qmi Indication PDS Event Report */


/* --- Output -- */

/**
 * QmiIndicationPdsEventReportOutput:
 *
 * The #QmiIndicationPdsEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationPdsEventReportOutput QmiIndicationPdsEventReportOutput;
GType qmi_indication_pds_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_PDS_EVENT_REPORT_OUTPUT (qmi_indication_pds_event_report_output_get_type ())


/**
 * qmi_indication_pds_event_report_output_get_position_session_status:
 * @self: a #QmiIndicationPdsEventReportOutput.
 * @value_position_session_status: (out)(optional): a placeholder for the output #QmiPdsPositionSessionStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Position Session Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_pds_event_report_output_get_position_session_status (
    QmiIndicationPdsEventReportOutput *self,
    QmiPdsPositionSessionStatus *value_position_session_status,
    GError **error);


/**
 * qmi_indication_pds_event_report_output_get_extended_nmea_position:
 * @self: a #QmiIndicationPdsEventReportOutput.
 * @value_extended_nmea_position_operation_mode: (out)(optional): a placeholder for the output #QmiPdsOperationMode, or %NULL if not required.
 * @value_extended_nmea_position_nmea: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended NMEA Position' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_pds_event_report_output_get_extended_nmea_position (
    QmiIndicationPdsEventReportOutput *self,
    QmiPdsOperationMode *value_extended_nmea_position_operation_mode,
    const gchar **value_extended_nmea_position_nmea,
    GError **error);


/**
 * qmi_indication_pds_event_report_output_get_nmea_position:
 * @self: a #QmiIndicationPdsEventReportOutput.
 * @value_nmea_position: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NMEA Position' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_pds_event_report_output_get_nmea_position (
    QmiIndicationPdsEventReportOutput *self,
    const gchar **value_nmea_position,
    GError **error);


/**
 * qmi_indication_pds_event_report_output_ref:
 * @self: a #QmiIndicationPdsEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationPdsEventReportOutput *qmi_indication_pds_event_report_output_ref (QmiIndicationPdsEventReportOutput *self);

/**
 * qmi_indication_pds_event_report_output_unref:
 * @self: a #QmiIndicationPdsEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_pds_event_report_output_unref (QmiIndicationPdsEventReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationPdsEventReportOutput, qmi_indication_pds_event_report_output_unref)

/**
 * qmi_indication_pds_event_report_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationPdsEventReportOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationPdsEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_pds_event_report_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationPdsEventReportOutput *qmi_indication_pds_event_report_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication PDS GPS Ready */


/* --- Output -- */

/* Note: no fields in the Output container */

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessagePdsResetOutput:
 *
 * The #QmiMessagePdsResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessagePdsResetOutput QmiMessagePdsResetOutput;
GType qmi_message_pds_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_RESET_OUTPUT (qmi_message_pds_reset_output_get_type ())


/**
 * qmi_message_pds_reset_output_get_result:
 * @self: a QmiMessagePdsResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_reset_output_get_result (
    QmiMessagePdsResetOutput *self,
    GError **error);


/**
 * qmi_message_pds_reset_output_ref:
 * @self: a #QmiMessagePdsResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessagePdsResetOutput *qmi_message_pds_reset_output_ref (QmiMessagePdsResetOutput *self);

/**
 * qmi_message_pds_reset_output_unref:
 * @self: a #QmiMessagePdsResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_pds_reset_output_unref (QmiMessagePdsResetOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsResetOutput, qmi_message_pds_reset_output_unref)

/**
 * qmi_message_pds_reset_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdsResetOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdsResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_reset_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdsResetOutput *qmi_message_pds_reset_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set Event Report */


/* --- Input -- */

/**
 * QmiMessagePdsSetEventReportInput:
 *
 * The #QmiMessagePdsSetEventReportInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessagePdsSetEventReportInput QmiMessagePdsSetEventReportInput;
GType qmi_message_pds_set_event_report_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_EVENT_REPORT_INPUT (qmi_message_pds_set_event_report_input_get_type ())


/**
 * qmi_message_pds_set_event_report_input_get_extended_external_xtra_data_request_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_extended_external_xtra_data_request_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended External XTRA Data Request Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_extended_external_xtra_data_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_extended_external_xtra_data_request_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_extended_external_xtra_data_request_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_extended_external_xtra_data_request_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Extended External XTRA Data Request Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_extended_external_xtra_data_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_extended_external_xtra_data_request_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_nmea_debug_strings_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_nmea_debug_strings_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NMEA Debug Strings Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_nmea_debug_strings_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_nmea_debug_strings_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_nmea_debug_strings_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_nmea_debug_strings_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NMEA Debug Strings Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_nmea_debug_strings_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_nmea_debug_strings_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_heading_uncertainty_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_heading_uncertainty_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Heading Uncertainty Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_heading_uncertainty_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_heading_uncertainty_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_heading_uncertainty_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_heading_uncertainty_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Heading Uncertainty Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_heading_uncertainty_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_heading_uncertainty_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_time_source_information_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_time_source_information_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Source Information Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_time_source_information_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_time_source_information_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_time_source_information_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_time_source_information_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Time Source Information Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_time_source_information_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_time_source_information_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_sensor_data_usage_indicator_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_sensor_data_usage_indicator_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Sensor Data Usage Indicator Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_sensor_data_usage_indicator_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_sensor_data_usage_indicator_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_sensor_data_usage_indicator_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_sensor_data_usage_indicator_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Sensor Data Usage Indicator Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_sensor_data_usage_indicator_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_sensor_data_usage_indicator_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_position_reliability_indicator_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_position_reliability_indicator_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Position Reliability Indicator Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_position_reliability_indicator_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_position_reliability_indicator_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_position_reliability_indicator_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_position_reliability_indicator_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Position Reliability Indicator Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_position_reliability_indicator_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_position_reliability_indicator_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_time_sync_request_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_time_sync_request_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Sync Request Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_time_sync_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_time_sync_request_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_time_sync_request_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_time_sync_request_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Time Sync Request Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_time_sync_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_time_sync_request_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_gyro_data_streaming_ready_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_gyro_data_streaming_ready_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Gyro Data Streaming Ready Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_gyro_data_streaming_ready_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_gyro_data_streaming_ready_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_gyro_data_streaming_ready_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_gyro_data_streaming_ready_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Gyro Data Streaming Ready Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_gyro_data_streaming_ready_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_gyro_data_streaming_ready_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_accelerometer_data_streaming_ready_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_accelerometer_data_streaming_ready_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Accelerometer Data Streaming Ready Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_accelerometer_data_streaming_ready_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_accelerometer_data_streaming_ready_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_accelerometer_data_streaming_ready_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_accelerometer_data_streaming_ready_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Accelerometer Data Streaming Ready Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_accelerometer_data_streaming_ready_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_accelerometer_data_streaming_ready_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_pds_comm_event_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_pds_comm_event_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDS Comm Event Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_pds_comm_event_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_pds_comm_event_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_pds_comm_event_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_pds_comm_event_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDS Comm Event Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_pds_comm_event_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_pds_comm_event_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_umts_cp_network_initiated_prompt_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_umts_cp_network_initiated_prompt_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS CP Network Initiated Prompt Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_umts_cp_network_initiated_prompt_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_umts_cp_network_initiated_prompt_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_umts_cp_network_initiated_prompt_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_umts_cp_network_initiated_prompt_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS CP Network Initiated Prompt Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_umts_cp_network_initiated_prompt_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_umts_cp_network_initiated_prompt_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_supl_network_initiated_prompt_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_supl_network_initiated_prompt_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SUPL Network Initiated Prompt Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_supl_network_initiated_prompt_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_supl_network_initiated_prompt_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_supl_network_initiated_prompt_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_supl_network_initiated_prompt_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SUPL Network Initiated Prompt Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_supl_network_initiated_prompt_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_supl_network_initiated_prompt_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_vx_network_initiated_request_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_vx_network_initiated_request_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'VX Network Initiated Request Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_vx_network_initiated_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_vx_network_initiated_request_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_vx_network_initiated_request_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_vx_network_initiated_request_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'VX Network Initiated Request Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_vx_network_initiated_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_vx_network_initiated_request_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_satellite_information_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_satellite_information_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Satellite Information Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_satellite_information_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_satellite_information_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_satellite_information_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_satellite_information_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Satellite Information Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_satellite_information_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_satellite_information_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_external_wifi_position_request_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_external_wifi_position_request_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'External WIFI Position Request Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_external_wifi_position_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_external_wifi_position_request_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_external_wifi_position_request_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_external_wifi_position_request_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'External WIFI Position Request Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_external_wifi_position_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_external_wifi_position_request_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_external_time_injection_request_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_external_time_injection_request_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'External Time Injection Request Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_external_time_injection_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_external_time_injection_request_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_external_time_injection_request_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_external_time_injection_request_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'External Time Injection Request Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_external_time_injection_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_external_time_injection_request_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_external_xtra_data_request_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_external_xtra_data_request_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'External XTRA Data Request Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_external_xtra_data_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_external_xtra_data_request_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_external_xtra_data_request_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_external_xtra_data_request_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'External XTRA Data Request Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_external_xtra_data_request_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_external_xtra_data_request_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_parsed_position_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_parsed_position_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Parsed Position Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_parsed_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_parsed_position_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_parsed_position_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_parsed_position_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Parsed Position Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_parsed_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_parsed_position_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_extended_nmea_position_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_extended_nmea_position_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended NMEA Position Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_extended_nmea_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_extended_nmea_position_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_extended_nmea_position_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_extended_nmea_position_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Extended NMEA Position Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_extended_nmea_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_extended_nmea_position_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_get_nmea_position_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_nmea_position_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NMEA Position Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_get_nmea_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean *value_nmea_position_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_set_nmea_position_reporting:
 * @self: a #QmiMessagePdsSetEventReportInput.
 * @value_nmea_position_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NMEA Position Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_input_set_nmea_position_reporting (
    QmiMessagePdsSetEventReportInput *self,
    gboolean value_nmea_position_reporting,
    GError **error);


/**
 * qmi_message_pds_set_event_report_input_ref:
 * @self: a #QmiMessagePdsSetEventReportInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessagePdsSetEventReportInput *qmi_message_pds_set_event_report_input_ref (QmiMessagePdsSetEventReportInput *self);

/**
 * qmi_message_pds_set_event_report_input_unref:
 * @self: a #QmiMessagePdsSetEventReportInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_pds_set_event_report_input_unref (QmiMessagePdsSetEventReportInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsSetEventReportInput, qmi_message_pds_set_event_report_input_unref)

/**
 * qmi_message_pds_set_event_report_input_new:
 *
 * Allocates a new #QmiMessagePdsSetEventReportInput.
 *
 * Returns: the newly created #QmiMessagePdsSetEventReportInput. The returned value should be freed with qmi_message_pds_set_event_report_input_unref().
 *
 * Since: 1.0
 */
QmiMessagePdsSetEventReportInput *qmi_message_pds_set_event_report_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdsSetEventReportOutput:
 *
 * The #QmiMessagePdsSetEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessagePdsSetEventReportOutput QmiMessagePdsSetEventReportOutput;
GType qmi_message_pds_set_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_EVENT_REPORT_OUTPUT (qmi_message_pds_set_event_report_output_get_type ())


/**
 * qmi_message_pds_set_event_report_output_get_result:
 * @self: a QmiMessagePdsSetEventReportOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_event_report_output_get_result (
    QmiMessagePdsSetEventReportOutput *self,
    GError **error);


/**
 * qmi_message_pds_set_event_report_output_ref:
 * @self: a #QmiMessagePdsSetEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessagePdsSetEventReportOutput *qmi_message_pds_set_event_report_output_ref (QmiMessagePdsSetEventReportOutput *self);

/**
 * qmi_message_pds_set_event_report_output_unref:
 * @self: a #QmiMessagePdsSetEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_pds_set_event_report_output_unref (QmiMessagePdsSetEventReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsSetEventReportOutput, qmi_message_pds_set_event_report_output_unref)

/**
 * qmi_message_pds_set_event_report_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdsSetEventReportOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdsSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_set_event_report_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdsSetEventReportOutput *qmi_message_pds_set_event_report_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Get GPS Service State */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessagePdsGetGpsServiceStateOutput:
 *
 * The #QmiMessagePdsGetGpsServiceStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessagePdsGetGpsServiceStateOutput QmiMessagePdsGetGpsServiceStateOutput;
GType qmi_message_pds_get_gps_service_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_GET_GPS_SERVICE_STATE_OUTPUT (qmi_message_pds_get_gps_service_state_output_get_type ())


/**
 * qmi_message_pds_get_gps_service_state_output_get_result:
 * @self: a QmiMessagePdsGetGpsServiceStateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_get_gps_service_state_output_get_result (
    QmiMessagePdsGetGpsServiceStateOutput *self,
    GError **error);


/**
 * qmi_message_pds_get_gps_service_state_output_get_state:
 * @self: a #QmiMessagePdsGetGpsServiceStateOutput.
 * @value_state_gps_service_state: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_state_tracking_session_state: (out)(optional): a placeholder for the output #QmiPdsTrackingSessionState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_get_gps_service_state_output_get_state (
    QmiMessagePdsGetGpsServiceStateOutput *self,
    gboolean *value_state_gps_service_state,
    QmiPdsTrackingSessionState *value_state_tracking_session_state,
    GError **error);


/**
 * qmi_message_pds_get_gps_service_state_output_ref:
 * @self: a #QmiMessagePdsGetGpsServiceStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessagePdsGetGpsServiceStateOutput *qmi_message_pds_get_gps_service_state_output_ref (QmiMessagePdsGetGpsServiceStateOutput *self);

/**
 * qmi_message_pds_get_gps_service_state_output_unref:
 * @self: a #QmiMessagePdsGetGpsServiceStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_pds_get_gps_service_state_output_unref (QmiMessagePdsGetGpsServiceStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsGetGpsServiceStateOutput, qmi_message_pds_get_gps_service_state_output_unref)

/**
 * qmi_message_pds_get_gps_service_state_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdsGetGpsServiceStateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdsGetGpsServiceStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_get_gps_service_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdsGetGpsServiceStateOutput *qmi_message_pds_get_gps_service_state_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set GPS Service State */


/* --- Input -- */

/**
 * QmiMessagePdsSetGpsServiceStateInput:
 *
 * The #QmiMessagePdsSetGpsServiceStateInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessagePdsSetGpsServiceStateInput QmiMessagePdsSetGpsServiceStateInput;
GType qmi_message_pds_set_gps_service_state_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_GPS_SERVICE_STATE_INPUT (qmi_message_pds_set_gps_service_state_input_get_type ())


/**
 * qmi_message_pds_set_gps_service_state_input_get_state:
 * @self: a #QmiMessagePdsSetGpsServiceStateInput.
 * @value_state_gps_service_state: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_gps_service_state_input_get_state (
    QmiMessagePdsSetGpsServiceStateInput *self,
    gboolean *value_state_gps_service_state,
    GError **error);


/**
 * qmi_message_pds_set_gps_service_state_input_set_state:
 * @self: a #QmiMessagePdsSetGpsServiceStateInput.
 * @value_state_gps_service_state: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'State' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_gps_service_state_input_set_state (
    QmiMessagePdsSetGpsServiceStateInput *self,
    gboolean value_state_gps_service_state,
    GError **error);


/**
 * qmi_message_pds_set_gps_service_state_input_ref:
 * @self: a #QmiMessagePdsSetGpsServiceStateInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessagePdsSetGpsServiceStateInput *qmi_message_pds_set_gps_service_state_input_ref (QmiMessagePdsSetGpsServiceStateInput *self);

/**
 * qmi_message_pds_set_gps_service_state_input_unref:
 * @self: a #QmiMessagePdsSetGpsServiceStateInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_pds_set_gps_service_state_input_unref (QmiMessagePdsSetGpsServiceStateInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsSetGpsServiceStateInput, qmi_message_pds_set_gps_service_state_input_unref)

/**
 * qmi_message_pds_set_gps_service_state_input_new:
 *
 * Allocates a new #QmiMessagePdsSetGpsServiceStateInput.
 *
 * Returns: the newly created #QmiMessagePdsSetGpsServiceStateInput. The returned value should be freed with qmi_message_pds_set_gps_service_state_input_unref().
 *
 * Since: 1.0
 */
QmiMessagePdsSetGpsServiceStateInput *qmi_message_pds_set_gps_service_state_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdsSetGpsServiceStateOutput:
 *
 * The #QmiMessagePdsSetGpsServiceStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessagePdsSetGpsServiceStateOutput QmiMessagePdsSetGpsServiceStateOutput;
GType qmi_message_pds_set_gps_service_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_GPS_SERVICE_STATE_OUTPUT (qmi_message_pds_set_gps_service_state_output_get_type ())


/**
 * qmi_message_pds_set_gps_service_state_output_get_result:
 * @self: a QmiMessagePdsSetGpsServiceStateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_gps_service_state_output_get_result (
    QmiMessagePdsSetGpsServiceStateOutput *self,
    GError **error);


/**
 * qmi_message_pds_set_gps_service_state_output_ref:
 * @self: a #QmiMessagePdsSetGpsServiceStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessagePdsSetGpsServiceStateOutput *qmi_message_pds_set_gps_service_state_output_ref (QmiMessagePdsSetGpsServiceStateOutput *self);

/**
 * qmi_message_pds_set_gps_service_state_output_unref:
 * @self: a #QmiMessagePdsSetGpsServiceStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_pds_set_gps_service_state_output_unref (QmiMessagePdsSetGpsServiceStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsSetGpsServiceStateOutput, qmi_message_pds_set_gps_service_state_output_unref)

/**
 * qmi_message_pds_set_gps_service_state_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdsSetGpsServiceStateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdsSetGpsServiceStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_set_gps_service_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdsSetGpsServiceStateOutput *qmi_message_pds_set_gps_service_state_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Get Default Tracking Session */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessagePdsGetDefaultTrackingSessionOutput:
 *
 * The #QmiMessagePdsGetDefaultTrackingSessionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.12
 */
typedef struct _QmiMessagePdsGetDefaultTrackingSessionOutput QmiMessagePdsGetDefaultTrackingSessionOutput;
GType qmi_message_pds_get_default_tracking_session_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_GET_DEFAULT_TRACKING_SESSION_OUTPUT (qmi_message_pds_get_default_tracking_session_output_get_type ())


/**
 * qmi_message_pds_get_default_tracking_session_output_get_result:
 * @self: a QmiMessagePdsGetDefaultTrackingSessionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_get_default_tracking_session_output_get_result (
    QmiMessagePdsGetDefaultTrackingSessionOutput *self,
    GError **error);


/**
 * qmi_message_pds_get_default_tracking_session_output_get_info:
 * @self: a #QmiMessagePdsGetDefaultTrackingSessionOutput.
 * @value_info_session_operation: (out)(optional): a placeholder for the output #QmiPdsOperatingMode, or %NULL if not required.
 * @value_info_position_data_timeout: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_info_interval: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_info_accuracy_threshold: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_get_default_tracking_session_output_get_info (
    QmiMessagePdsGetDefaultTrackingSessionOutput *self,
    QmiPdsOperatingMode *value_info_session_operation,
    guint8 *value_info_position_data_timeout,
    guint32 *value_info_interval,
    guint32 *value_info_accuracy_threshold,
    GError **error);


/**
 * qmi_message_pds_get_default_tracking_session_output_ref:
 * @self: a #QmiMessagePdsGetDefaultTrackingSessionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.12
 */
QmiMessagePdsGetDefaultTrackingSessionOutput *qmi_message_pds_get_default_tracking_session_output_ref (QmiMessagePdsGetDefaultTrackingSessionOutput *self);

/**
 * qmi_message_pds_get_default_tracking_session_output_unref:
 * @self: a #QmiMessagePdsGetDefaultTrackingSessionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.12
 */
void qmi_message_pds_get_default_tracking_session_output_unref (QmiMessagePdsGetDefaultTrackingSessionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsGetDefaultTrackingSessionOutput, qmi_message_pds_get_default_tracking_session_output_unref)

/**
 * qmi_message_pds_get_default_tracking_session_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdsGetDefaultTrackingSessionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdsGetDefaultTrackingSessionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_get_default_tracking_session_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdsGetDefaultTrackingSessionOutput *qmi_message_pds_get_default_tracking_session_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set Default Tracking Session */


/* --- Input -- */

/**
 * QmiMessagePdsSetDefaultTrackingSessionInput:
 *
 * The #QmiMessagePdsSetDefaultTrackingSessionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.12
 */
typedef struct _QmiMessagePdsSetDefaultTrackingSessionInput QmiMessagePdsSetDefaultTrackingSessionInput;
GType qmi_message_pds_set_default_tracking_session_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION_INPUT (qmi_message_pds_set_default_tracking_session_input_get_type ())


/**
 * qmi_message_pds_set_default_tracking_session_input_get_info:
 * @self: a #QmiMessagePdsSetDefaultTrackingSessionInput.
 * @value_info_session_operation: (out)(optional): a placeholder for the output #QmiPdsOperatingMode, or %NULL if not required.
 * @value_info_position_data_timeout: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_info_interval: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_info_accuracy_threshold: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_set_default_tracking_session_input_get_info (
    QmiMessagePdsSetDefaultTrackingSessionInput *self,
    QmiPdsOperatingMode *value_info_session_operation,
    guint8 *value_info_position_data_timeout,
    guint32 *value_info_interval,
    guint32 *value_info_accuracy_threshold,
    GError **error);


/**
 * qmi_message_pds_set_default_tracking_session_input_set_info:
 * @self: a #QmiMessagePdsSetDefaultTrackingSessionInput.
 * @value_info_session_operation: a #QmiPdsOperatingMode.
 * @value_info_position_data_timeout: a #guint8.
 * @value_info_interval: a #guint32.
 * @value_info_accuracy_threshold: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_set_default_tracking_session_input_set_info (
    QmiMessagePdsSetDefaultTrackingSessionInput *self,
    QmiPdsOperatingMode value_info_session_operation,
    guint8 value_info_position_data_timeout,
    guint32 value_info_interval,
    guint32 value_info_accuracy_threshold,
    GError **error);


/**
 * qmi_message_pds_set_default_tracking_session_input_ref:
 * @self: a #QmiMessagePdsSetDefaultTrackingSessionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.12
 */
QmiMessagePdsSetDefaultTrackingSessionInput *qmi_message_pds_set_default_tracking_session_input_ref (QmiMessagePdsSetDefaultTrackingSessionInput *self);

/**
 * qmi_message_pds_set_default_tracking_session_input_unref:
 * @self: a #QmiMessagePdsSetDefaultTrackingSessionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.12
 */
void qmi_message_pds_set_default_tracking_session_input_unref (QmiMessagePdsSetDefaultTrackingSessionInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsSetDefaultTrackingSessionInput, qmi_message_pds_set_default_tracking_session_input_unref)

/**
 * qmi_message_pds_set_default_tracking_session_input_new:
 *
 * Allocates a new #QmiMessagePdsSetDefaultTrackingSessionInput.
 *
 * Returns: the newly created #QmiMessagePdsSetDefaultTrackingSessionInput. The returned value should be freed with qmi_message_pds_set_default_tracking_session_input_unref().
 *
 * Since: 1.12
 */
QmiMessagePdsSetDefaultTrackingSessionInput *qmi_message_pds_set_default_tracking_session_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdsSetDefaultTrackingSessionOutput:
 *
 * The #QmiMessagePdsSetDefaultTrackingSessionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.12
 */
typedef struct _QmiMessagePdsSetDefaultTrackingSessionOutput QmiMessagePdsSetDefaultTrackingSessionOutput;
GType qmi_message_pds_set_default_tracking_session_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_DEFAULT_TRACKING_SESSION_OUTPUT (qmi_message_pds_set_default_tracking_session_output_get_type ())


/**
 * qmi_message_pds_set_default_tracking_session_output_get_result:
 * @self: a QmiMessagePdsSetDefaultTrackingSessionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_set_default_tracking_session_output_get_result (
    QmiMessagePdsSetDefaultTrackingSessionOutput *self,
    GError **error);


/**
 * qmi_message_pds_set_default_tracking_session_output_ref:
 * @self: a #QmiMessagePdsSetDefaultTrackingSessionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.12
 */
QmiMessagePdsSetDefaultTrackingSessionOutput *qmi_message_pds_set_default_tracking_session_output_ref (QmiMessagePdsSetDefaultTrackingSessionOutput *self);

/**
 * qmi_message_pds_set_default_tracking_session_output_unref:
 * @self: a #QmiMessagePdsSetDefaultTrackingSessionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.12
 */
void qmi_message_pds_set_default_tracking_session_output_unref (QmiMessagePdsSetDefaultTrackingSessionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsSetDefaultTrackingSessionOutput, qmi_message_pds_set_default_tracking_session_output_unref)

/**
 * qmi_message_pds_set_default_tracking_session_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdsSetDefaultTrackingSessionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdsSetDefaultTrackingSessionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_set_default_tracking_session_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdsSetDefaultTrackingSessionOutput *qmi_message_pds_set_default_tracking_session_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Get AGPS Config */


/* --- Input -- */

/**
 * QmiMessagePdsGetAgpsConfigInput:
 *
 * The #QmiMessagePdsGetAgpsConfigInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.12
 */
typedef struct _QmiMessagePdsGetAgpsConfigInput QmiMessagePdsGetAgpsConfigInput;
GType qmi_message_pds_get_agps_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_GET_AGPS_CONFIG_INPUT (qmi_message_pds_get_agps_config_input_get_type ())


/**
 * qmi_message_pds_get_agps_config_input_get_network_mode:
 * @self: a #QmiMessagePdsGetAgpsConfigInput.
 * @value_network_mode: (out)(optional): a placeholder for the output #QmiPdsNetworkMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_get_agps_config_input_get_network_mode (
    QmiMessagePdsGetAgpsConfigInput *self,
    QmiPdsNetworkMode *value_network_mode,
    GError **error);


/**
 * qmi_message_pds_get_agps_config_input_set_network_mode:
 * @self: a #QmiMessagePdsGetAgpsConfigInput.
 * @value_network_mode: a #QmiPdsNetworkMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_get_agps_config_input_set_network_mode (
    QmiMessagePdsGetAgpsConfigInput *self,
    QmiPdsNetworkMode value_network_mode,
    GError **error);


/**
 * qmi_message_pds_get_agps_config_input_ref:
 * @self: a #QmiMessagePdsGetAgpsConfigInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.12
 */
QmiMessagePdsGetAgpsConfigInput *qmi_message_pds_get_agps_config_input_ref (QmiMessagePdsGetAgpsConfigInput *self);

/**
 * qmi_message_pds_get_agps_config_input_unref:
 * @self: a #QmiMessagePdsGetAgpsConfigInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.12
 */
void qmi_message_pds_get_agps_config_input_unref (QmiMessagePdsGetAgpsConfigInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsGetAgpsConfigInput, qmi_message_pds_get_agps_config_input_unref)

/**
 * qmi_message_pds_get_agps_config_input_new:
 *
 * Allocates a new #QmiMessagePdsGetAgpsConfigInput.
 *
 * Returns: the newly created #QmiMessagePdsGetAgpsConfigInput. The returned value should be freed with qmi_message_pds_get_agps_config_input_unref().
 *
 * Since: 1.12
 */
QmiMessagePdsGetAgpsConfigInput *qmi_message_pds_get_agps_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdsGetAgpsConfigOutput:
 *
 * The #QmiMessagePdsGetAgpsConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.12
 */
typedef struct _QmiMessagePdsGetAgpsConfigOutput QmiMessagePdsGetAgpsConfigOutput;
GType qmi_message_pds_get_agps_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_GET_AGPS_CONFIG_OUTPUT (qmi_message_pds_get_agps_config_output_get_type ())


/**
 * qmi_message_pds_get_agps_config_output_get_result:
 * @self: a QmiMessagePdsGetAgpsConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_get_agps_config_output_get_result (
    QmiMessagePdsGetAgpsConfigOutput *self,
    GError **error);


/**
 * qmi_message_pds_get_agps_config_output_get_location_server_address:
 * @self: a #QmiMessagePdsGetAgpsConfigOutput.
 * @value_location_server_address_ip: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_location_server_address_port: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Location Server Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_get_agps_config_output_get_location_server_address (
    QmiMessagePdsGetAgpsConfigOutput *self,
    guint32 *value_location_server_address_ip,
    guint32 *value_location_server_address_port,
    GError **error);


/**
 * qmi_message_pds_get_agps_config_output_get_location_server_url:
 * @self: a #QmiMessagePdsGetAgpsConfigOutput.
 * @value_location_server_url: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Location Server URL' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_get_agps_config_output_get_location_server_url (
    QmiMessagePdsGetAgpsConfigOutput *self,
    GArray **value_location_server_url,
    GError **error);


/**
 * qmi_message_pds_get_agps_config_output_ref:
 * @self: a #QmiMessagePdsGetAgpsConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.12
 */
QmiMessagePdsGetAgpsConfigOutput *qmi_message_pds_get_agps_config_output_ref (QmiMessagePdsGetAgpsConfigOutput *self);

/**
 * qmi_message_pds_get_agps_config_output_unref:
 * @self: a #QmiMessagePdsGetAgpsConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.12
 */
void qmi_message_pds_get_agps_config_output_unref (QmiMessagePdsGetAgpsConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsGetAgpsConfigOutput, qmi_message_pds_get_agps_config_output_unref)

/**
 * qmi_message_pds_get_agps_config_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdsGetAgpsConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdsGetAgpsConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_get_agps_config_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdsGetAgpsConfigOutput *qmi_message_pds_get_agps_config_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set AGPS Config */


/* --- Input -- */

/**
 * QmiMessagePdsSetAgpsConfigInput:
 *
 * The #QmiMessagePdsSetAgpsConfigInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.12
 */
typedef struct _QmiMessagePdsSetAgpsConfigInput QmiMessagePdsSetAgpsConfigInput;
GType qmi_message_pds_set_agps_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_AGPS_CONFIG_INPUT (qmi_message_pds_set_agps_config_input_get_type ())


/**
 * qmi_message_pds_set_agps_config_input_get_network_mode:
 * @self: a #QmiMessagePdsSetAgpsConfigInput.
 * @value_network_mode: (out)(optional): a placeholder for the output #QmiPdsNetworkMode, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_set_agps_config_input_get_network_mode (
    QmiMessagePdsSetAgpsConfigInput *self,
    QmiPdsNetworkMode *value_network_mode,
    GError **error);


/**
 * qmi_message_pds_set_agps_config_input_set_network_mode:
 * @self: a #QmiMessagePdsSetAgpsConfigInput.
 * @value_network_mode: a #QmiPdsNetworkMode.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_set_agps_config_input_set_network_mode (
    QmiMessagePdsSetAgpsConfigInput *self,
    QmiPdsNetworkMode value_network_mode,
    GError **error);


/**
 * qmi_message_pds_set_agps_config_input_get_location_server_url:
 * @self: a #QmiMessagePdsSetAgpsConfigInput.
 * @value_location_server_url: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Location Server URL' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_set_agps_config_input_get_location_server_url (
    QmiMessagePdsSetAgpsConfigInput *self,
    GArray **value_location_server_url,
    GError **error);


/**
 * qmi_message_pds_set_agps_config_input_set_location_server_url:
 * @self: a #QmiMessagePdsSetAgpsConfigInput.
 * @value_location_server_url: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_location_server_url will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Location Server URL' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_set_agps_config_input_set_location_server_url (
    QmiMessagePdsSetAgpsConfigInput *self,
    GArray *value_location_server_url,
    GError **error);


/**
 * qmi_message_pds_set_agps_config_input_get_location_server_address:
 * @self: a #QmiMessagePdsSetAgpsConfigInput.
 * @value_location_server_address_ip: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_location_server_address_port: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Location Server Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_set_agps_config_input_get_location_server_address (
    QmiMessagePdsSetAgpsConfigInput *self,
    guint32 *value_location_server_address_ip,
    guint32 *value_location_server_address_port,
    GError **error);


/**
 * qmi_message_pds_set_agps_config_input_set_location_server_address:
 * @self: a #QmiMessagePdsSetAgpsConfigInput.
 * @value_location_server_address_ip: a #guint32.
 * @value_location_server_address_port: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Location Server Address' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_set_agps_config_input_set_location_server_address (
    QmiMessagePdsSetAgpsConfigInput *self,
    guint32 value_location_server_address_ip,
    guint32 value_location_server_address_port,
    GError **error);


/**
 * qmi_message_pds_set_agps_config_input_ref:
 * @self: a #QmiMessagePdsSetAgpsConfigInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.12
 */
QmiMessagePdsSetAgpsConfigInput *qmi_message_pds_set_agps_config_input_ref (QmiMessagePdsSetAgpsConfigInput *self);

/**
 * qmi_message_pds_set_agps_config_input_unref:
 * @self: a #QmiMessagePdsSetAgpsConfigInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.12
 */
void qmi_message_pds_set_agps_config_input_unref (QmiMessagePdsSetAgpsConfigInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsSetAgpsConfigInput, qmi_message_pds_set_agps_config_input_unref)

/**
 * qmi_message_pds_set_agps_config_input_new:
 *
 * Allocates a new #QmiMessagePdsSetAgpsConfigInput.
 *
 * Returns: the newly created #QmiMessagePdsSetAgpsConfigInput. The returned value should be freed with qmi_message_pds_set_agps_config_input_unref().
 *
 * Since: 1.12
 */
QmiMessagePdsSetAgpsConfigInput *qmi_message_pds_set_agps_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdsSetAgpsConfigOutput:
 *
 * The #QmiMessagePdsSetAgpsConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.12
 */
typedef struct _QmiMessagePdsSetAgpsConfigOutput QmiMessagePdsSetAgpsConfigOutput;
GType qmi_message_pds_set_agps_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_AGPS_CONFIG_OUTPUT (qmi_message_pds_set_agps_config_output_get_type ())


/**
 * qmi_message_pds_set_agps_config_output_get_result:
 * @self: a QmiMessagePdsSetAgpsConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.12
 */
gboolean qmi_message_pds_set_agps_config_output_get_result (
    QmiMessagePdsSetAgpsConfigOutput *self,
    GError **error);


/**
 * qmi_message_pds_set_agps_config_output_ref:
 * @self: a #QmiMessagePdsSetAgpsConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.12
 */
QmiMessagePdsSetAgpsConfigOutput *qmi_message_pds_set_agps_config_output_ref (QmiMessagePdsSetAgpsConfigOutput *self);

/**
 * qmi_message_pds_set_agps_config_output_unref:
 * @self: a #QmiMessagePdsSetAgpsConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.12
 */
void qmi_message_pds_set_agps_config_output_unref (QmiMessagePdsSetAgpsConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsSetAgpsConfigOutput, qmi_message_pds_set_agps_config_output_unref)

/**
 * qmi_message_pds_set_agps_config_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdsSetAgpsConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdsSetAgpsConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_set_agps_config_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdsSetAgpsConfigOutput *qmi_message_pds_set_agps_config_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Get Auto Tracking State */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessagePdsGetAutoTrackingStateOutput:
 *
 * The #QmiMessagePdsGetAutoTrackingStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessagePdsGetAutoTrackingStateOutput QmiMessagePdsGetAutoTrackingStateOutput;
GType qmi_message_pds_get_auto_tracking_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_GET_AUTO_TRACKING_STATE_OUTPUT (qmi_message_pds_get_auto_tracking_state_output_get_type ())


/**
 * qmi_message_pds_get_auto_tracking_state_output_get_result:
 * @self: a QmiMessagePdsGetAutoTrackingStateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_get_auto_tracking_state_output_get_result (
    QmiMessagePdsGetAutoTrackingStateOutput *self,
    GError **error);


/**
 * qmi_message_pds_get_auto_tracking_state_output_get_state:
 * @self: a #QmiMessagePdsGetAutoTrackingStateOutput.
 * @value_state_auto_tracking_state: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_get_auto_tracking_state_output_get_state (
    QmiMessagePdsGetAutoTrackingStateOutput *self,
    gboolean *value_state_auto_tracking_state,
    GError **error);


/**
 * qmi_message_pds_get_auto_tracking_state_output_ref:
 * @self: a #QmiMessagePdsGetAutoTrackingStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessagePdsGetAutoTrackingStateOutput *qmi_message_pds_get_auto_tracking_state_output_ref (QmiMessagePdsGetAutoTrackingStateOutput *self);

/**
 * qmi_message_pds_get_auto_tracking_state_output_unref:
 * @self: a #QmiMessagePdsGetAutoTrackingStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_pds_get_auto_tracking_state_output_unref (QmiMessagePdsGetAutoTrackingStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsGetAutoTrackingStateOutput, qmi_message_pds_get_auto_tracking_state_output_unref)

/**
 * qmi_message_pds_get_auto_tracking_state_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdsGetAutoTrackingStateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdsGetAutoTrackingStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_get_auto_tracking_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdsGetAutoTrackingStateOutput *qmi_message_pds_get_auto_tracking_state_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDS Set Auto Tracking State */


/* --- Input -- */

/**
 * QmiMessagePdsSetAutoTrackingStateInput:
 *
 * The #QmiMessagePdsSetAutoTrackingStateInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessagePdsSetAutoTrackingStateInput QmiMessagePdsSetAutoTrackingStateInput;
GType qmi_message_pds_set_auto_tracking_state_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_AUTO_TRACKING_STATE_INPUT (qmi_message_pds_set_auto_tracking_state_input_get_type ())


/**
 * qmi_message_pds_set_auto_tracking_state_input_get_state:
 * @self: a #QmiMessagePdsSetAutoTrackingStateInput.
 * @value_state_auto_tracking_state: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'State' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_auto_tracking_state_input_get_state (
    QmiMessagePdsSetAutoTrackingStateInput *self,
    gboolean *value_state_auto_tracking_state,
    GError **error);


/**
 * qmi_message_pds_set_auto_tracking_state_input_set_state:
 * @self: a #QmiMessagePdsSetAutoTrackingStateInput.
 * @value_state_auto_tracking_state: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'State' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_auto_tracking_state_input_set_state (
    QmiMessagePdsSetAutoTrackingStateInput *self,
    gboolean value_state_auto_tracking_state,
    GError **error);


/**
 * qmi_message_pds_set_auto_tracking_state_input_ref:
 * @self: a #QmiMessagePdsSetAutoTrackingStateInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessagePdsSetAutoTrackingStateInput *qmi_message_pds_set_auto_tracking_state_input_ref (QmiMessagePdsSetAutoTrackingStateInput *self);

/**
 * qmi_message_pds_set_auto_tracking_state_input_unref:
 * @self: a #QmiMessagePdsSetAutoTrackingStateInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_pds_set_auto_tracking_state_input_unref (QmiMessagePdsSetAutoTrackingStateInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsSetAutoTrackingStateInput, qmi_message_pds_set_auto_tracking_state_input_unref)

/**
 * qmi_message_pds_set_auto_tracking_state_input_new:
 *
 * Allocates a new #QmiMessagePdsSetAutoTrackingStateInput.
 *
 * Returns: the newly created #QmiMessagePdsSetAutoTrackingStateInput. The returned value should be freed with qmi_message_pds_set_auto_tracking_state_input_unref().
 *
 * Since: 1.0
 */
QmiMessagePdsSetAutoTrackingStateInput *qmi_message_pds_set_auto_tracking_state_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdsSetAutoTrackingStateOutput:
 *
 * The #QmiMessagePdsSetAutoTrackingStateOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessagePdsSetAutoTrackingStateOutput QmiMessagePdsSetAutoTrackingStateOutput;
GType qmi_message_pds_set_auto_tracking_state_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDS_SET_AUTO_TRACKING_STATE_OUTPUT (qmi_message_pds_set_auto_tracking_state_output_get_type ())


/**
 * qmi_message_pds_set_auto_tracking_state_output_get_result:
 * @self: a QmiMessagePdsSetAutoTrackingStateOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_pds_set_auto_tracking_state_output_get_result (
    QmiMessagePdsSetAutoTrackingStateOutput *self,
    GError **error);


/**
 * qmi_message_pds_set_auto_tracking_state_output_ref:
 * @self: a #QmiMessagePdsSetAutoTrackingStateOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessagePdsSetAutoTrackingStateOutput *qmi_message_pds_set_auto_tracking_state_output_ref (QmiMessagePdsSetAutoTrackingStateOutput *self);

/**
 * qmi_message_pds_set_auto_tracking_state_output_unref:
 * @self: a #QmiMessagePdsSetAutoTrackingStateOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_pds_set_auto_tracking_state_output_unref (QmiMessagePdsSetAutoTrackingStateOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdsSetAutoTrackingStateOutput, qmi_message_pds_set_auto_tracking_state_output_unref)

/**
 * qmi_message_pds_set_auto_tracking_state_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdsSetAutoTrackingStateOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdsSetAutoTrackingStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_set_auto_tracking_state_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdsSetAutoTrackingStateOutput *qmi_message_pds_set_auto_tracking_state_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: PDS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_pds_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_PDS

/*****************************************************************************/
/* CLIENT: QMI Client PDS */

#define QMI_TYPE_CLIENT_PDS            (qmi_client_pds_get_type ())
#define QMI_CLIENT_PDS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_PDS, QmiClientPds))
#define QMI_CLIENT_PDS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_PDS, QmiClientPdsClass))
#define QMI_IS_CLIENT_PDS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_PDS))
#define QMI_IS_CLIENT_PDS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_PDS))
#define QMI_CLIENT_PDS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_PDS, QmiClientPdsClass))

typedef struct _QmiClientPds QmiClientPds;
typedef struct _QmiClientPdsClass QmiClientPdsClass;

/**
 * QmiClientPds:
 *
 * #QmiClient which handles operations in the PDS service.
 *
 * The #QmiClientPds structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
struct _QmiClientPds {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientPdsClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_pds_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientPds, g_object_unref)

/**
 * qmi_client_pds_reset:
 * @self: a #QmiClientPds.
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
 * You can then call qmi_client_pds_reset_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_pds_reset (
    QmiClientPds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pds_reset_finish:
 * @self: a #QmiClientPds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pds_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pds_reset().
 *
 * Returns: a #QmiMessagePdsResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_reset_output_unref().
 *
 * Since: 1.0
 */
QmiMessagePdsResetOutput *qmi_client_pds_reset_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pds_set_event_report:
 * @self: a #QmiClientPds.
 * @input: a #QmiMessagePdsSetEventReportInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Event Report request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pds_set_event_report_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_pds_set_event_report (
    QmiClientPds *self,
    QmiMessagePdsSetEventReportInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pds_set_event_report_finish:
 * @self: a #QmiClientPds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pds_set_event_report().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pds_set_event_report().
 *
 * Returns: a #QmiMessagePdsSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_set_event_report_output_unref().
 *
 * Since: 1.0
 */
QmiMessagePdsSetEventReportOutput *qmi_client_pds_set_event_report_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pds_get_gps_service_state:
 * @self: a #QmiClientPds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get GPS Service State request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pds_get_gps_service_state_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_pds_get_gps_service_state (
    QmiClientPds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pds_get_gps_service_state_finish:
 * @self: a #QmiClientPds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pds_get_gps_service_state().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pds_get_gps_service_state().
 *
 * Returns: a #QmiMessagePdsGetGpsServiceStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_get_gps_service_state_output_unref().
 *
 * Since: 1.0
 */
QmiMessagePdsGetGpsServiceStateOutput *qmi_client_pds_get_gps_service_state_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pds_set_gps_service_state:
 * @self: a #QmiClientPds.
 * @input: a #QmiMessagePdsSetGpsServiceStateInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set GPS Service State request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pds_set_gps_service_state_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_pds_set_gps_service_state (
    QmiClientPds *self,
    QmiMessagePdsSetGpsServiceStateInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pds_set_gps_service_state_finish:
 * @self: a #QmiClientPds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pds_set_gps_service_state().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pds_set_gps_service_state().
 *
 * Returns: a #QmiMessagePdsSetGpsServiceStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_set_gps_service_state_output_unref().
 *
 * Since: 1.0
 */
QmiMessagePdsSetGpsServiceStateOutput *qmi_client_pds_set_gps_service_state_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pds_get_default_tracking_session:
 * @self: a #QmiClientPds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Default Tracking Session request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pds_get_default_tracking_session_finish() to get the result of the operation.
 *
 * Since: 1.12
 */
void qmi_client_pds_get_default_tracking_session (
    QmiClientPds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pds_get_default_tracking_session_finish:
 * @self: a #QmiClientPds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pds_get_default_tracking_session().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pds_get_default_tracking_session().
 *
 * Returns: a #QmiMessagePdsGetDefaultTrackingSessionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_get_default_tracking_session_output_unref().
 *
 * Since: 1.12
 */
QmiMessagePdsGetDefaultTrackingSessionOutput *qmi_client_pds_get_default_tracking_session_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pds_set_default_tracking_session:
 * @self: a #QmiClientPds.
 * @input: a #QmiMessagePdsSetDefaultTrackingSessionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Default Tracking Session request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pds_set_default_tracking_session_finish() to get the result of the operation.
 *
 * Since: 1.12
 */
void qmi_client_pds_set_default_tracking_session (
    QmiClientPds *self,
    QmiMessagePdsSetDefaultTrackingSessionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pds_set_default_tracking_session_finish:
 * @self: a #QmiClientPds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pds_set_default_tracking_session().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pds_set_default_tracking_session().
 *
 * Returns: a #QmiMessagePdsSetDefaultTrackingSessionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_set_default_tracking_session_output_unref().
 *
 * Since: 1.12
 */
QmiMessagePdsSetDefaultTrackingSessionOutput *qmi_client_pds_set_default_tracking_session_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pds_get_agps_config:
 * @self: a #QmiClientPds.
 * @input: a #QmiMessagePdsGetAgpsConfigInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get AGPS Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pds_get_agps_config_finish() to get the result of the operation.
 *
 * Since: 1.12
 */
void qmi_client_pds_get_agps_config (
    QmiClientPds *self,
    QmiMessagePdsGetAgpsConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pds_get_agps_config_finish:
 * @self: a #QmiClientPds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pds_get_agps_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pds_get_agps_config().
 *
 * Returns: a #QmiMessagePdsGetAgpsConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_get_agps_config_output_unref().
 *
 * Since: 1.12
 */
QmiMessagePdsGetAgpsConfigOutput *qmi_client_pds_get_agps_config_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pds_set_agps_config:
 * @self: a #QmiClientPds.
 * @input: a #QmiMessagePdsSetAgpsConfigInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set AGPS Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pds_set_agps_config_finish() to get the result of the operation.
 *
 * Since: 1.12
 */
void qmi_client_pds_set_agps_config (
    QmiClientPds *self,
    QmiMessagePdsSetAgpsConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pds_set_agps_config_finish:
 * @self: a #QmiClientPds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pds_set_agps_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pds_set_agps_config().
 *
 * Returns: a #QmiMessagePdsSetAgpsConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_set_agps_config_output_unref().
 *
 * Since: 1.12
 */
QmiMessagePdsSetAgpsConfigOutput *qmi_client_pds_set_agps_config_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pds_get_auto_tracking_state:
 * @self: a #QmiClientPds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Auto Tracking State request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pds_get_auto_tracking_state_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_pds_get_auto_tracking_state (
    QmiClientPds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pds_get_auto_tracking_state_finish:
 * @self: a #QmiClientPds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pds_get_auto_tracking_state().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pds_get_auto_tracking_state().
 *
 * Returns: a #QmiMessagePdsGetAutoTrackingStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_get_auto_tracking_state_output_unref().
 *
 * Since: 1.0
 */
QmiMessagePdsGetAutoTrackingStateOutput *qmi_client_pds_get_auto_tracking_state_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pds_set_auto_tracking_state:
 * @self: a #QmiClientPds.
 * @input: a #QmiMessagePdsSetAutoTrackingStateInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Auto Tracking State request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pds_set_auto_tracking_state_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_pds_set_auto_tracking_state (
    QmiClientPds *self,
    QmiMessagePdsSetAutoTrackingStateInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pds_set_auto_tracking_state_finish:
 * @self: a #QmiClientPds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pds_set_auto_tracking_state().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pds_set_auto_tracking_state().
 *
 * Returns: a #QmiMessagePdsSetAutoTrackingStateOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pds_set_auto_tracking_state_output_unref().
 *
 * Since: 1.0
 */
QmiMessagePdsSetAutoTrackingStateOutput *qmi_client_pds_set_auto_tracking_state_finish (
    QmiClientPds *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_PDS__ */
