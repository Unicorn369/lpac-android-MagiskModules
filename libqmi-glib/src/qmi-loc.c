
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


#include <string.h>

#include "qmi-loc.h"
#include "qmi-common.h"
#include "qmi-enum-types.h"
#include "qmi-flag-types.h"
#include "qmi-enum-types-private.h"
#include "qmi-flag-types-private.h"
#include "qmi-flags64-types.h"
#include "qmi-error-types.h"
#include "qmi-device.h"
#include "qmi-helpers.h"

#define QMI_STATUS_SUCCESS 0x0000
#define QMI_STATUS_FAILURE 0x0001


typedef enum {
    QMI_MESSAGE_LOC_REGISTER_EVENTS = 0x0021,
    QMI_MESSAGE_LOC_START = 0x0022,
    QMI_MESSAGE_LOC_STOP = 0x0023,
    QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA = 0x0035,
    QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE = 0x0036,
    QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY = 0x0037,
    QMI_MESSAGE_LOC_INJECT_UTC_TIME = 0x0038,
    QMI_MESSAGE_LOC_INJECT_POSITION = 0x0039,
    QMI_MESSAGE_LOC_SET_ENGINE_LOCK = 0x003A,
    QMI_MESSAGE_LOC_GET_ENGINE_LOCK = 0x003B,
    QMI_MESSAGE_LOC_SET_NMEA_TYPES = 0x003E,
    QMI_MESSAGE_LOC_GET_NMEA_TYPES = 0x003F,
    QMI_MESSAGE_LOC_SET_SERVER = 0x0042,
    QMI_MESSAGE_LOC_GET_SERVER = 0x0043,
    QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA = 0x0044,
    QMI_MESSAGE_LOC_SET_OPERATION_MODE = 0x004A,
    QMI_MESSAGE_LOC_GET_OPERATION_MODE = 0x004B,
    QMI_MESSAGE_LOC_INJECT_XTRA_DATA = 0x00A7,
} QmiMessageLoc;


typedef enum {
    QMI_INDICATION_LOC_POSITION_REPORT = 0x0024,
    QMI_INDICATION_LOC_NMEA = 0x0026,
    QMI_INDICATION_LOC_INJECT_TIME_REQUEST = 0x0028,
    QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST = 0x0029,
    QMI_INDICATION_LOC_INJECT_POSITION_REQUEST = 0x002A,
    QMI_INDICATION_LOC_ENGINE_STATE = 0x002B,
    QMI_INDICATION_LOC_FIX_RECURRENCE_TYPE = 0x002C,
    QMI_INDICATION_LOC_GNSS_SV_INFO = 0x0025,
    QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA = 0x0035,
    QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE = 0x0036,
    QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY = 0x0037,
    QMI_INDICATION_LOC_INJECT_UTC_TIME = 0x0038,
    QMI_INDICATION_LOC_INJECT_POSITION = 0x0039,
    QMI_INDICATION_LOC_SET_ENGINE_LOCK = 0x003A,
    QMI_INDICATION_LOC_GET_ENGINE_LOCK = 0x003B,
    QMI_INDICATION_LOC_SET_NMEA_TYPES = 0x003E,
    QMI_INDICATION_LOC_GET_NMEA_TYPES = 0x003F,
    QMI_INDICATION_LOC_SET_SERVER = 0x0042,
    QMI_INDICATION_LOC_GET_SERVER = 0x0043,
    QMI_INDICATION_LOC_DELETE_ASSISTANCE_DATA = 0x0044,
    QMI_INDICATION_LOC_SET_OPERATION_MODE = 0x004A,
    QMI_INDICATION_LOC_GET_OPERATION_MODE = 0x004B,
    QMI_INDICATION_LOC_INJECT_XTRA_DATA = 0x00A7,
} QmiIndicationLoc;


/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Position Report */


/* --- Output -- */

struct _QmiIndicationLocPositionReportOutput {
    volatile gint ref_count;

    /* Altitude Assumed */
    gboolean arg_altitude_assumed_set;
    guint8 arg_altitude_assumed;

    /* Satellites Used */
    gboolean arg_satellites_used_set;
    GArray *arg_satellites_used;

    /* Session Fix Count */
    gboolean arg_session_fix_count_set;
    guint32 arg_session_fix_count;

    /* Sensor Data Usage */
    gboolean arg_sensor_data_usage_set;
    guint64 arg_sensor_data_usage;

    /* Time Source */
    gboolean arg_time_source_set;
    guint32 arg_time_source;

    /* Time Uncertainty */
    gboolean arg_time_uncertainty_set;
    gfloat arg_time_uncertainty;

    /* GPS Date Time */
    gboolean arg_gps_date_time_set;
    guint16 arg_gps_date_time_gps_weeks;
    guint32 arg_gps_date_time_gps_time_of_week_milliseconds;

    /* Leap Seconds */
    gboolean arg_leap_seconds_set;
    guint8 arg_leap_seconds;

    /* UTC Timestamp */
    gboolean arg_utc_timestamp_set;
    guint64 arg_utc_timestamp;

    /* DOP */
    gboolean arg_dop_set;
    gfloat arg_dop_pdop;
    gfloat arg_dop_hdop;
    gfloat arg_dop_vdop;

    /* Technology Used */
    gboolean arg_technology_used_set;
    guint32 arg_technology_used;

    /* Magnetic Deviation */
    gboolean arg_magnetic_deviation_set;
    gfloat arg_magnetic_deviation;

    /* Heading Uncertainty */
    gboolean arg_heading_uncertainty_set;
    gfloat arg_heading_uncertainty;

    /* Heading */
    gboolean arg_heading_set;
    gfloat arg_heading;

    /* Vertical Speed */
    gboolean arg_vertical_speed_set;
    gfloat arg_vertical_speed;

    /* Vertical Reliability */
    gboolean arg_vertical_reliability_set;
    guint32 arg_vertical_reliability;

    /* Vertical Confidence */
    gboolean arg_vertical_confidence_set;
    guint8 arg_vertical_confidence;

    /* Vertical Uncertainty */
    gboolean arg_vertical_uncertainty_set;
    gfloat arg_vertical_uncertainty;

    /* Altitude from Sealevel */
    gboolean arg_altitude_from_sealevel_set;
    gfloat arg_altitude_from_sealevel;

    /* Altitude from Ellipsoid */
    gboolean arg_altitude_from_ellipsoid_set;
    gfloat arg_altitude_from_ellipsoid;

    /* Speed Uncertainty */
    gboolean arg_speed_uncertainty_set;
    gfloat arg_speed_uncertainty;

    /* Horizontal Speed */
    gboolean arg_horizontal_speed_set;
    gfloat arg_horizontal_speed;

    /* Horizontal Reliability */
    gboolean arg_horizontal_reliability_set;
    guint32 arg_horizontal_reliability;

    /* Horizontal Confidence */
    gboolean arg_horizontal_confidence_set;
    guint8 arg_horizontal_confidence;

    /* Horizontal Uncertainty Elliptical Azimuth */
    gboolean arg_horizontal_uncertainty_elliptical_azimuth_set;
    gfloat arg_horizontal_uncertainty_elliptical_azimuth;

    /* Horizontal Uncertainty Elliptical Major */
    gboolean arg_horizontal_uncertainty_elliptical_major_set;
    gfloat arg_horizontal_uncertainty_elliptical_major;

    /* Horizontal Uncertainty Elliptical Minor */
    gboolean arg_horizontal_uncertainty_elliptical_minor_set;
    gfloat arg_horizontal_uncertainty_elliptical_minor;

    /* Horizontal Uncertainty Circular */
    gboolean arg_horizontal_uncertainty_circular_set;
    gfloat arg_horizontal_uncertainty_circular;

    /* Longitude */
    gboolean arg_longitude_set;
    gdouble arg_longitude;

    /* Latitude */
    gboolean arg_latitude_set;
    gdouble arg_latitude;

    /* Session ID */
    gboolean arg_session_id_set;
    guint8 arg_session_id;

    /* Session Status */
    gboolean arg_session_status_set;
    guint32 arg_session_status;
};

#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_ALTITUDE_ASSUMED 0x2D
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SATELLITES_USED 0x2C
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SESSION_FIX_COUNT 0x2B
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SENSOR_DATA_USAGE 0x2A
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_TIME_SOURCE 0x29
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_TIME_UNCERTAINTY 0x28
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_GPS_DATE_TIME 0x27
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_LEAP_SECONDS 0x26
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_UTC_TIMESTAMP 0x25
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_DOP 0x24
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_TECHNOLOGY_USED 0x23
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_MAGNETIC_DEVIATION 0x22
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HEADING_UNCERTAINTY 0x21
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HEADING 0x20
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_SPEED 0x1F
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_RELIABILITY 0x1E
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_CONFIDENCE 0x1D
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_UNCERTAINTY 0x1C
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_ALTITUDE_FROM_SEALEVEL 0x1B
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_ALTITUDE_FROM_ELLIPSOID 0x1A
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SPEED_UNCERTAINTY 0x19
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_SPEED 0x18
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_RELIABILITY 0x17
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_CONFIDENCE 0x16
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_ELLIPTICAL_AZIMUTH 0x15
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_ELLIPTICAL_MAJOR 0x14
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_ELLIPTICAL_MINOR 0x13
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_CIRCULAR 0x12
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_LONGITUDE 0x11
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_LATITUDE 0x10
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SESSION_ID 0x02
#define QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SESSION_STATUS 0x01

gboolean
qmi_indication_loc_position_report_output_get_altitude_assumed (
    QmiIndicationLocPositionReportOutput *self,
    gboolean *value_altitude_assumed,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_altitude_assumed_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Altitude Assumed' was not found in the message");
        return FALSE;
    }

    if (value_altitude_assumed)
        *value_altitude_assumed = (gboolean)(self->arg_altitude_assumed);

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_satellites_used (
    QmiIndicationLocPositionReportOutput *self,
    GArray **value_satellites_used,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_satellites_used_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Satellites Used' was not found in the message");
        return FALSE;
    }

    if (value_satellites_used)
        *value_satellites_used = self->arg_satellites_used;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_session_fix_count (
    QmiIndicationLocPositionReportOutput *self,
    guint32 *value_session_fix_count,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_fix_count_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session Fix Count' was not found in the message");
        return FALSE;
    }

    if (value_session_fix_count)
        *value_session_fix_count = self->arg_session_fix_count;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_sensor_data_usage (
    QmiIndicationLocPositionReportOutput *self,
    QmiLocSensorDataUsage *value_sensor_data_usage,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_sensor_data_usage_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Sensor Data Usage' was not found in the message");
        return FALSE;
    }

    if (value_sensor_data_usage)
        *value_sensor_data_usage = (QmiLocSensorDataUsage)(self->arg_sensor_data_usage);

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_time_source (
    QmiIndicationLocPositionReportOutput *self,
    QmiLocTimeSource *value_time_source,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_time_source_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Time Source' was not found in the message");
        return FALSE;
    }

    if (value_time_source)
        *value_time_source = (QmiLocTimeSource)(self->arg_time_source);

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_time_uncertainty (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_time_uncertainty,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_time_uncertainty_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Time Uncertainty' was not found in the message");
        return FALSE;
    }

    if (value_time_uncertainty)
        *value_time_uncertainty = self->arg_time_uncertainty;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_gps_date_time (
    QmiIndicationLocPositionReportOutput *self,
    guint16 *value_gps_date_time_gps_weeks,
    guint32 *value_gps_date_time_gps_time_of_week_milliseconds,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_gps_date_time_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'GPS Date Time' was not found in the message");
        return FALSE;
    }

    if (value_gps_date_time_gps_weeks)
        *value_gps_date_time_gps_weeks = self->arg_gps_date_time_gps_weeks;
    if (value_gps_date_time_gps_time_of_week_milliseconds)
        *value_gps_date_time_gps_time_of_week_milliseconds = self->arg_gps_date_time_gps_time_of_week_milliseconds;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_leap_seconds (
    QmiIndicationLocPositionReportOutput *self,
    guint8 *value_leap_seconds,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_leap_seconds_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Leap Seconds' was not found in the message");
        return FALSE;
    }

    if (value_leap_seconds)
        *value_leap_seconds = self->arg_leap_seconds;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_utc_timestamp (
    QmiIndicationLocPositionReportOutput *self,
    guint64 *value_utc_timestamp,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_utc_timestamp_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'UTC Timestamp' was not found in the message");
        return FALSE;
    }

    if (value_utc_timestamp)
        *value_utc_timestamp = self->arg_utc_timestamp;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_dop (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_dop_pdop,
    gfloat *value_dop_hdop,
    gfloat *value_dop_vdop,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_dop_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'DOP' was not found in the message");
        return FALSE;
    }

    if (value_dop_pdop)
        *value_dop_pdop = self->arg_dop_pdop;
    if (value_dop_hdop)
        *value_dop_hdop = self->arg_dop_hdop;
    if (value_dop_vdop)
        *value_dop_vdop = self->arg_dop_vdop;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_technology_used (
    QmiIndicationLocPositionReportOutput *self,
    QmiLocTechnologyUsed *value_technology_used,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_technology_used_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Technology Used' was not found in the message");
        return FALSE;
    }

    if (value_technology_used)
        *value_technology_used = (QmiLocTechnologyUsed)(self->arg_technology_used);

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_magnetic_deviation (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_magnetic_deviation,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_magnetic_deviation_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Magnetic Deviation' was not found in the message");
        return FALSE;
    }

    if (value_magnetic_deviation)
        *value_magnetic_deviation = self->arg_magnetic_deviation;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_heading_uncertainty (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_heading_uncertainty,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_heading_uncertainty_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Heading Uncertainty' was not found in the message");
        return FALSE;
    }

    if (value_heading_uncertainty)
        *value_heading_uncertainty = self->arg_heading_uncertainty;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_heading (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_heading,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_heading_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Heading' was not found in the message");
        return FALSE;
    }

    if (value_heading)
        *value_heading = self->arg_heading;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_vertical_speed (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_vertical_speed,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_vertical_speed_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Vertical Speed' was not found in the message");
        return FALSE;
    }

    if (value_vertical_speed)
        *value_vertical_speed = self->arg_vertical_speed;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_vertical_reliability (
    QmiIndicationLocPositionReportOutput *self,
    QmiLocReliability *value_vertical_reliability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_vertical_reliability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Vertical Reliability' was not found in the message");
        return FALSE;
    }

    if (value_vertical_reliability)
        *value_vertical_reliability = (QmiLocReliability)(self->arg_vertical_reliability);

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_vertical_confidence (
    QmiIndicationLocPositionReportOutput *self,
    guint8 *value_vertical_confidence,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_vertical_confidence_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Vertical Confidence' was not found in the message");
        return FALSE;
    }

    if (value_vertical_confidence)
        *value_vertical_confidence = self->arg_vertical_confidence;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_vertical_uncertainty (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_vertical_uncertainty,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_vertical_uncertainty_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Vertical Uncertainty' was not found in the message");
        return FALSE;
    }

    if (value_vertical_uncertainty)
        *value_vertical_uncertainty = self->arg_vertical_uncertainty;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_altitude_from_sealevel (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_altitude_from_sealevel,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_altitude_from_sealevel_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Altitude from Sealevel' was not found in the message");
        return FALSE;
    }

    if (value_altitude_from_sealevel)
        *value_altitude_from_sealevel = self->arg_altitude_from_sealevel;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_altitude_from_ellipsoid (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_altitude_from_ellipsoid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_altitude_from_ellipsoid_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Altitude from Ellipsoid' was not found in the message");
        return FALSE;
    }

    if (value_altitude_from_ellipsoid)
        *value_altitude_from_ellipsoid = self->arg_altitude_from_ellipsoid;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_speed_uncertainty (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_speed_uncertainty,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_speed_uncertainty_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Speed Uncertainty' was not found in the message");
        return FALSE;
    }

    if (value_speed_uncertainty)
        *value_speed_uncertainty = self->arg_speed_uncertainty;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_horizontal_speed (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_horizontal_speed,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_horizontal_speed_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Horizontal Speed' was not found in the message");
        return FALSE;
    }

    if (value_horizontal_speed)
        *value_horizontal_speed = self->arg_horizontal_speed;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_horizontal_reliability (
    QmiIndicationLocPositionReportOutput *self,
    QmiLocReliability *value_horizontal_reliability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_horizontal_reliability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Horizontal Reliability' was not found in the message");
        return FALSE;
    }

    if (value_horizontal_reliability)
        *value_horizontal_reliability = (QmiLocReliability)(self->arg_horizontal_reliability);

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_horizontal_confidence (
    QmiIndicationLocPositionReportOutput *self,
    guint8 *value_horizontal_confidence,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_horizontal_confidence_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Horizontal Confidence' was not found in the message");
        return FALSE;
    }

    if (value_horizontal_confidence)
        *value_horizontal_confidence = self->arg_horizontal_confidence;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_horizontal_uncertainty_elliptical_azimuth (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_horizontal_uncertainty_elliptical_azimuth,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_horizontal_uncertainty_elliptical_azimuth_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Horizontal Uncertainty Elliptical Azimuth' was not found in the message");
        return FALSE;
    }

    if (value_horizontal_uncertainty_elliptical_azimuth)
        *value_horizontal_uncertainty_elliptical_azimuth = self->arg_horizontal_uncertainty_elliptical_azimuth;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_horizontal_uncertainty_elliptical_major (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_horizontal_uncertainty_elliptical_major,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_horizontal_uncertainty_elliptical_major_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Horizontal Uncertainty Elliptical Major' was not found in the message");
        return FALSE;
    }

    if (value_horizontal_uncertainty_elliptical_major)
        *value_horizontal_uncertainty_elliptical_major = self->arg_horizontal_uncertainty_elliptical_major;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_horizontal_uncertainty_elliptical_minor (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_horizontal_uncertainty_elliptical_minor,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_horizontal_uncertainty_elliptical_minor_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Horizontal Uncertainty Elliptical Minor' was not found in the message");
        return FALSE;
    }

    if (value_horizontal_uncertainty_elliptical_minor)
        *value_horizontal_uncertainty_elliptical_minor = self->arg_horizontal_uncertainty_elliptical_minor;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_horizontal_uncertainty_circular (
    QmiIndicationLocPositionReportOutput *self,
    gfloat *value_horizontal_uncertainty_circular,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_horizontal_uncertainty_circular_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Horizontal Uncertainty Circular' was not found in the message");
        return FALSE;
    }

    if (value_horizontal_uncertainty_circular)
        *value_horizontal_uncertainty_circular = self->arg_horizontal_uncertainty_circular;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_longitude (
    QmiIndicationLocPositionReportOutput *self,
    gdouble *value_longitude,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_longitude_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Longitude' was not found in the message");
        return FALSE;
    }

    if (value_longitude)
        *value_longitude = self->arg_longitude;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_latitude (
    QmiIndicationLocPositionReportOutput *self,
    gdouble *value_latitude,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_latitude_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Latitude' was not found in the message");
        return FALSE;
    }

    if (value_latitude)
        *value_latitude = self->arg_latitude;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_session_id (
    QmiIndicationLocPositionReportOutput *self,
    guint8 *value_session_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session ID' was not found in the message");
        return FALSE;
    }

    if (value_session_id)
        *value_session_id = self->arg_session_id;

    return TRUE;
}

gboolean
qmi_indication_loc_position_report_output_get_session_status (
    QmiIndicationLocPositionReportOutput *self,
    QmiLocSessionStatus *value_session_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session Status' was not found in the message");
        return FALSE;
    }

    if (value_session_status)
        *value_session_status = (QmiLocSessionStatus)(self->arg_session_status);

    return TRUE;
}

GType
qmi_indication_loc_position_report_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocPositionReportOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_position_report_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_position_report_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocPositionReportOutput *
qmi_indication_loc_position_report_output_ref (QmiIndicationLocPositionReportOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_position_report_output_unref (QmiIndicationLocPositionReportOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_satellites_used, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiIndicationLocPositionReportOutput, self);
    }
}

static gchar *
qmi_indication_loc_position_report_output_altitude_assumed_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_ALTITUDE_ASSUMED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_satellites_used_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SATELLITES_USED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint satellites_used_i;
        guint8 satellites_used_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(satellites_used_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (satellites_used_i = 0; satellites_used_i < satellites_used_n_items; satellites_used_i++) {
            g_string_append_printf (printable, " [%u] = '", satellites_used_i);

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }
    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_session_fix_count_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SESSION_FIX_COUNT, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_sensor_data_usage_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SENSOR_DATA_USAGE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_SENSOR_DATA_USAGE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_sensor_data_usage_get_string ((QmiLocSensorDataUsage)tmp));
#elif defined  __QMI_LOC_SENSOR_DATA_USAGE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_sensor_data_usage_build_string_from_mask ((QmiLocSensorDataUsage)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocSensorDataUsage
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_time_source_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_TIME_SOURCE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_TIME_SOURCE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_time_source_get_string ((QmiLocTimeSource)tmp));
#elif defined  __QMI_LOC_TIME_SOURCE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_time_source_build_string_from_mask ((QmiLocTimeSource)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocTimeSource
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_time_uncertainty_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_TIME_UNCERTAINTY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_gps_date_time_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_GPS_DATE_TIME, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " gps_weeks = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " gps_time_of_week_milliseconds = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_leap_seconds_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_LEAP_SECONDS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_utc_timestamp_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_UTC_TIMESTAMP, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT64_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_dop_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_DOP, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " pdop = '");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " hdop = '");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " vdop = '");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_technology_used_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_TECHNOLOGY_USED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_TECHNOLOGY_USED_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_technology_used_get_string ((QmiLocTechnologyUsed)tmp));
#elif defined  __QMI_LOC_TECHNOLOGY_USED_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_technology_used_build_string_from_mask ((QmiLocTechnologyUsed)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocTechnologyUsed
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_magnetic_deviation_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_MAGNETIC_DEVIATION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_heading_uncertainty_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HEADING_UNCERTAINTY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_heading_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HEADING, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_vertical_speed_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_SPEED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_vertical_reliability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_RELIABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_RELIABILITY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_reliability_get_string ((QmiLocReliability)tmp));
#elif defined  __QMI_LOC_RELIABILITY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_reliability_build_string_from_mask ((QmiLocReliability)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocReliability
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_vertical_confidence_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_CONFIDENCE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_vertical_uncertainty_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_UNCERTAINTY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_altitude_from_sealevel_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_ALTITUDE_FROM_SEALEVEL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_altitude_from_ellipsoid_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_ALTITUDE_FROM_ELLIPSOID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_speed_uncertainty_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SPEED_UNCERTAINTY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_horizontal_speed_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_SPEED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_horizontal_reliability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_RELIABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_RELIABILITY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_reliability_get_string ((QmiLocReliability)tmp));
#elif defined  __QMI_LOC_RELIABILITY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_reliability_build_string_from_mask ((QmiLocReliability)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocReliability
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_horizontal_confidence_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_CONFIDENCE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_azimuth_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_ELLIPTICAL_AZIMUTH, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_major_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_ELLIPTICAL_MAJOR, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_minor_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_ELLIPTICAL_MINOR, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_horizontal_uncertainty_circular_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_CIRCULAR, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_longitude_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_LONGITUDE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gdouble tmp;

        if (!qmi_message_tlv_read_gdouble (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_latitude_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_LATITUDE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gdouble tmp;

        if (!qmi_message_tlv_read_gdouble (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_session_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SESSION_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_position_report_output_session_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SESSION_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_SESSION_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_session_status_get_string ((QmiLocSessionStatus)tmp));
#elif defined  __QMI_LOC_SESSION_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_session_status_build_string_from_mask ((QmiLocSessionStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocSessionStatus
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_position_report_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_position_report_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_position_report_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_ALTITUDE_ASSUMED:
            tlv_type_str = "Altitude Assumed";
            translated_value = qmi_indication_loc_position_report_output_altitude_assumed_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SATELLITES_USED:
            tlv_type_str = "Satellites Used";
            translated_value = qmi_indication_loc_position_report_output_satellites_used_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SESSION_FIX_COUNT:
            tlv_type_str = "Session Fix Count";
            translated_value = qmi_indication_loc_position_report_output_session_fix_count_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SENSOR_DATA_USAGE:
            tlv_type_str = "Sensor Data Usage";
            translated_value = qmi_indication_loc_position_report_output_sensor_data_usage_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_TIME_SOURCE:
            tlv_type_str = "Time Source";
            translated_value = qmi_indication_loc_position_report_output_time_source_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_TIME_UNCERTAINTY:
            tlv_type_str = "Time Uncertainty";
            translated_value = qmi_indication_loc_position_report_output_time_uncertainty_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_GPS_DATE_TIME:
            tlv_type_str = "GPS Date Time";
            translated_value = qmi_indication_loc_position_report_output_gps_date_time_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_LEAP_SECONDS:
            tlv_type_str = "Leap Seconds";
            translated_value = qmi_indication_loc_position_report_output_leap_seconds_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_UTC_TIMESTAMP:
            tlv_type_str = "UTC Timestamp";
            translated_value = qmi_indication_loc_position_report_output_utc_timestamp_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_DOP:
            tlv_type_str = "DOP";
            translated_value = qmi_indication_loc_position_report_output_dop_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_TECHNOLOGY_USED:
            tlv_type_str = "Technology Used";
            translated_value = qmi_indication_loc_position_report_output_technology_used_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_MAGNETIC_DEVIATION:
            tlv_type_str = "Magnetic Deviation";
            translated_value = qmi_indication_loc_position_report_output_magnetic_deviation_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HEADING_UNCERTAINTY:
            tlv_type_str = "Heading Uncertainty";
            translated_value = qmi_indication_loc_position_report_output_heading_uncertainty_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HEADING:
            tlv_type_str = "Heading";
            translated_value = qmi_indication_loc_position_report_output_heading_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_SPEED:
            tlv_type_str = "Vertical Speed";
            translated_value = qmi_indication_loc_position_report_output_vertical_speed_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_RELIABILITY:
            tlv_type_str = "Vertical Reliability";
            translated_value = qmi_indication_loc_position_report_output_vertical_reliability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_CONFIDENCE:
            tlv_type_str = "Vertical Confidence";
            translated_value = qmi_indication_loc_position_report_output_vertical_confidence_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_UNCERTAINTY:
            tlv_type_str = "Vertical Uncertainty";
            translated_value = qmi_indication_loc_position_report_output_vertical_uncertainty_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_ALTITUDE_FROM_SEALEVEL:
            tlv_type_str = "Altitude from Sealevel";
            translated_value = qmi_indication_loc_position_report_output_altitude_from_sealevel_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_ALTITUDE_FROM_ELLIPSOID:
            tlv_type_str = "Altitude from Ellipsoid";
            translated_value = qmi_indication_loc_position_report_output_altitude_from_ellipsoid_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SPEED_UNCERTAINTY:
            tlv_type_str = "Speed Uncertainty";
            translated_value = qmi_indication_loc_position_report_output_speed_uncertainty_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_SPEED:
            tlv_type_str = "Horizontal Speed";
            translated_value = qmi_indication_loc_position_report_output_horizontal_speed_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_RELIABILITY:
            tlv_type_str = "Horizontal Reliability";
            translated_value = qmi_indication_loc_position_report_output_horizontal_reliability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_CONFIDENCE:
            tlv_type_str = "Horizontal Confidence";
            translated_value = qmi_indication_loc_position_report_output_horizontal_confidence_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_ELLIPTICAL_AZIMUTH:
            tlv_type_str = "Horizontal Uncertainty Elliptical Azimuth";
            translated_value = qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_azimuth_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_ELLIPTICAL_MAJOR:
            tlv_type_str = "Horizontal Uncertainty Elliptical Major";
            translated_value = qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_major_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_ELLIPTICAL_MINOR:
            tlv_type_str = "Horizontal Uncertainty Elliptical Minor";
            translated_value = qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_minor_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_CIRCULAR:
            tlv_type_str = "Horizontal Uncertainty Circular";
            translated_value = qmi_indication_loc_position_report_output_horizontal_uncertainty_circular_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_LONGITUDE:
            tlv_type_str = "Longitude";
            translated_value = qmi_indication_loc_position_report_output_longitude_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_LATITUDE:
            tlv_type_str = "Latitude";
            translated_value = qmi_indication_loc_position_report_output_latitude_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SESSION_ID:
            tlv_type_str = "Session ID";
            translated_value = qmi_indication_loc_position_report_output_session_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SESSION_STATUS:
            tlv_type_str = "Session Status";
            translated_value = qmi_indication_loc_position_report_output_session_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_position_report_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Position Report\" (0x0024)\n",
                            line_prefix);

    {
        struct indication_position_report_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_position_report_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocPositionReportOutput *
qmi_indication_loc_position_report_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocPositionReportOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_POSITION_REPORT);

    self = g_slice_new0 (QmiIndicationLocPositionReportOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_ALTITUDE_ASSUMED, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_altitude_assumed_out;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                    goto qmi_indication_loc_position_report_output_altitude_assumed_out;
                self->arg_altitude_assumed = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Altitude Assumed' TLV", offset);
            }

            self->arg_altitude_assumed_set = TRUE;

qmi_indication_loc_position_report_output_altitude_assumed_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SATELLITES_USED, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_satellites_used_out;
            }
            {
                guint satellites_used_i;
                guint8 satellites_used_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(satellites_used_n_items), NULL))
                    goto qmi_indication_loc_position_report_output_satellites_used_out;

                self->arg_satellites_used = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint16),
                    (guint)satellites_used_n_items);

                for (satellites_used_i = 0; satellites_used_i < satellites_used_n_items; satellites_used_i++) {
                    guint16 satellites_used_aux;

                    if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(satellites_used_aux), NULL))
                        goto qmi_indication_loc_position_report_output_satellites_used_out;
                    g_array_insert_val (self->arg_satellites_used, satellites_used_i, satellites_used_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Satellites Used' TLV", offset);
            }

            self->arg_satellites_used_set = TRUE;

qmi_indication_loc_position_report_output_satellites_used_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SESSION_FIX_COUNT, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_session_fix_count_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_session_fix_count), NULL))
                goto qmi_indication_loc_position_report_output_session_fix_count_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Session Fix Count' TLV", offset);
            }

            self->arg_session_fix_count_set = TRUE;

qmi_indication_loc_position_report_output_session_fix_count_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SENSOR_DATA_USAGE, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_sensor_data_usage_out;
            }
            {
                guint64 tmp;

                if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_loc_position_report_output_sensor_data_usage_out;
                self->arg_sensor_data_usage = (QmiLocSensorDataUsage)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Sensor Data Usage' TLV", offset);
            }

            self->arg_sensor_data_usage_set = TRUE;

qmi_indication_loc_position_report_output_sensor_data_usage_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_TIME_SOURCE, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_time_source_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_loc_position_report_output_time_source_out;
                self->arg_time_source = (QmiLocTimeSource)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Time Source' TLV", offset);
            }

            self->arg_time_source_set = TRUE;

qmi_indication_loc_position_report_output_time_source_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_TIME_UNCERTAINTY, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_time_uncertainty_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_time_uncertainty), NULL))
                goto qmi_indication_loc_position_report_output_time_uncertainty_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Time Uncertainty' TLV", offset);
            }

            self->arg_time_uncertainty_set = TRUE;

qmi_indication_loc_position_report_output_time_uncertainty_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_GPS_DATE_TIME, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_gps_date_time_out;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_gps_date_time_gps_weeks), NULL))
                goto qmi_indication_loc_position_report_output_gps_date_time_out;
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_gps_date_time_gps_time_of_week_milliseconds), NULL))
                goto qmi_indication_loc_position_report_output_gps_date_time_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'GPS Date Time' TLV", offset);
            }

            self->arg_gps_date_time_set = TRUE;

qmi_indication_loc_position_report_output_gps_date_time_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_LEAP_SECONDS, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_leap_seconds_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_leap_seconds), NULL))
                goto qmi_indication_loc_position_report_output_leap_seconds_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Leap Seconds' TLV", offset);
            }

            self->arg_leap_seconds_set = TRUE;

qmi_indication_loc_position_report_output_leap_seconds_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_UTC_TIMESTAMP, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_utc_timestamp_out;
            }
            if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_utc_timestamp), NULL))
                goto qmi_indication_loc_position_report_output_utc_timestamp_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'UTC Timestamp' TLV", offset);
            }

            self->arg_utc_timestamp_set = TRUE;

qmi_indication_loc_position_report_output_utc_timestamp_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_DOP, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_dop_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_dop_pdop), NULL))
                goto qmi_indication_loc_position_report_output_dop_out;
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_dop_hdop), NULL))
                goto qmi_indication_loc_position_report_output_dop_out;
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_dop_vdop), NULL))
                goto qmi_indication_loc_position_report_output_dop_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'DOP' TLV", offset);
            }

            self->arg_dop_set = TRUE;

qmi_indication_loc_position_report_output_dop_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_TECHNOLOGY_USED, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_technology_used_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_loc_position_report_output_technology_used_out;
                self->arg_technology_used = (QmiLocTechnologyUsed)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Technology Used' TLV", offset);
            }

            self->arg_technology_used_set = TRUE;

qmi_indication_loc_position_report_output_technology_used_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_MAGNETIC_DEVIATION, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_magnetic_deviation_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_magnetic_deviation), NULL))
                goto qmi_indication_loc_position_report_output_magnetic_deviation_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Magnetic Deviation' TLV", offset);
            }

            self->arg_magnetic_deviation_set = TRUE;

qmi_indication_loc_position_report_output_magnetic_deviation_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HEADING_UNCERTAINTY, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_heading_uncertainty_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_heading_uncertainty), NULL))
                goto qmi_indication_loc_position_report_output_heading_uncertainty_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Heading Uncertainty' TLV", offset);
            }

            self->arg_heading_uncertainty_set = TRUE;

qmi_indication_loc_position_report_output_heading_uncertainty_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HEADING, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_heading_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_heading), NULL))
                goto qmi_indication_loc_position_report_output_heading_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Heading' TLV", offset);
            }

            self->arg_heading_set = TRUE;

qmi_indication_loc_position_report_output_heading_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_SPEED, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_vertical_speed_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_vertical_speed), NULL))
                goto qmi_indication_loc_position_report_output_vertical_speed_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Vertical Speed' TLV", offset);
            }

            self->arg_vertical_speed_set = TRUE;

qmi_indication_loc_position_report_output_vertical_speed_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_RELIABILITY, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_vertical_reliability_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_loc_position_report_output_vertical_reliability_out;
                self->arg_vertical_reliability = (QmiLocReliability)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Vertical Reliability' TLV", offset);
            }

            self->arg_vertical_reliability_set = TRUE;

qmi_indication_loc_position_report_output_vertical_reliability_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_CONFIDENCE, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_vertical_confidence_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_vertical_confidence), NULL))
                goto qmi_indication_loc_position_report_output_vertical_confidence_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Vertical Confidence' TLV", offset);
            }

            self->arg_vertical_confidence_set = TRUE;

qmi_indication_loc_position_report_output_vertical_confidence_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_VERTICAL_UNCERTAINTY, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_vertical_uncertainty_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_vertical_uncertainty), NULL))
                goto qmi_indication_loc_position_report_output_vertical_uncertainty_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Vertical Uncertainty' TLV", offset);
            }

            self->arg_vertical_uncertainty_set = TRUE;

qmi_indication_loc_position_report_output_vertical_uncertainty_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_ALTITUDE_FROM_SEALEVEL, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_altitude_from_sealevel_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_altitude_from_sealevel), NULL))
                goto qmi_indication_loc_position_report_output_altitude_from_sealevel_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Altitude from Sealevel' TLV", offset);
            }

            self->arg_altitude_from_sealevel_set = TRUE;

qmi_indication_loc_position_report_output_altitude_from_sealevel_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_ALTITUDE_FROM_ELLIPSOID, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_altitude_from_ellipsoid_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_altitude_from_ellipsoid), NULL))
                goto qmi_indication_loc_position_report_output_altitude_from_ellipsoid_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Altitude from Ellipsoid' TLV", offset);
            }

            self->arg_altitude_from_ellipsoid_set = TRUE;

qmi_indication_loc_position_report_output_altitude_from_ellipsoid_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SPEED_UNCERTAINTY, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_speed_uncertainty_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_speed_uncertainty), NULL))
                goto qmi_indication_loc_position_report_output_speed_uncertainty_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Speed Uncertainty' TLV", offset);
            }

            self->arg_speed_uncertainty_set = TRUE;

qmi_indication_loc_position_report_output_speed_uncertainty_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_SPEED, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_horizontal_speed_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_horizontal_speed), NULL))
                goto qmi_indication_loc_position_report_output_horizontal_speed_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Horizontal Speed' TLV", offset);
            }

            self->arg_horizontal_speed_set = TRUE;

qmi_indication_loc_position_report_output_horizontal_speed_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_RELIABILITY, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_horizontal_reliability_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_loc_position_report_output_horizontal_reliability_out;
                self->arg_horizontal_reliability = (QmiLocReliability)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Horizontal Reliability' TLV", offset);
            }

            self->arg_horizontal_reliability_set = TRUE;

qmi_indication_loc_position_report_output_horizontal_reliability_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_CONFIDENCE, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_horizontal_confidence_out;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_horizontal_confidence), NULL))
                goto qmi_indication_loc_position_report_output_horizontal_confidence_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Horizontal Confidence' TLV", offset);
            }

            self->arg_horizontal_confidence_set = TRUE;

qmi_indication_loc_position_report_output_horizontal_confidence_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_ELLIPTICAL_AZIMUTH, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_azimuth_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_horizontal_uncertainty_elliptical_azimuth), NULL))
                goto qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_azimuth_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Horizontal Uncertainty Elliptical Azimuth' TLV", offset);
            }

            self->arg_horizontal_uncertainty_elliptical_azimuth_set = TRUE;

qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_azimuth_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_ELLIPTICAL_MAJOR, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_major_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_horizontal_uncertainty_elliptical_major), NULL))
                goto qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_major_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Horizontal Uncertainty Elliptical Major' TLV", offset);
            }

            self->arg_horizontal_uncertainty_elliptical_major_set = TRUE;

qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_major_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_ELLIPTICAL_MINOR, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_minor_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_horizontal_uncertainty_elliptical_minor), NULL))
                goto qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_minor_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Horizontal Uncertainty Elliptical Minor' TLV", offset);
            }

            self->arg_horizontal_uncertainty_elliptical_minor_set = TRUE;

qmi_indication_loc_position_report_output_horizontal_uncertainty_elliptical_minor_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_CIRCULAR, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_horizontal_uncertainty_circular_out;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_horizontal_uncertainty_circular), NULL))
                goto qmi_indication_loc_position_report_output_horizontal_uncertainty_circular_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Horizontal Uncertainty Circular' TLV", offset);
            }

            self->arg_horizontal_uncertainty_circular_set = TRUE;

qmi_indication_loc_position_report_output_horizontal_uncertainty_circular_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_LONGITUDE, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_longitude_out;
            }
            if (!qmi_message_tlv_read_gdouble (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_longitude), NULL))
                goto qmi_indication_loc_position_report_output_longitude_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Longitude' TLV", offset);
            }

            self->arg_longitude_set = TRUE;

qmi_indication_loc_position_report_output_longitude_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_LATITUDE, NULL, NULL)) == 0) {
                goto qmi_indication_loc_position_report_output_latitude_out;
            }
            if (!qmi_message_tlv_read_gdouble (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_latitude), NULL))
                goto qmi_indication_loc_position_report_output_latitude_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Latitude' TLV", offset);
            }

            self->arg_latitude_set = TRUE;

qmi_indication_loc_position_report_output_latitude_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SESSION_ID, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Session ID TLV: ");
                qmi_indication_loc_position_report_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(self->arg_session_id), error))
                goto qmi_indication_loc_position_report_output_session_id_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Session ID' TLV", offset);
            }

            self->arg_session_id_set = TRUE;

qmi_indication_loc_position_report_output_session_id_out:
            if (!self->arg_session_id_set) {
                qmi_indication_loc_position_report_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_POSITION_REPORT_OUTPUT_TLV_SESSION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Session Status TLV: ");
                qmi_indication_loc_position_report_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_indication_loc_position_report_output_session_status_out;
                self->arg_session_status = (QmiLocSessionStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Session Status' TLV", offset);
            }

            self->arg_session_status_set = TRUE;

qmi_indication_loc_position_report_output_session_status_out:
            if (!self->arg_session_status_set) {
                qmi_indication_loc_position_report_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC NMEA */


/* --- Output -- */

struct _QmiIndicationLocNmeaOutput {
    volatile gint ref_count;

    /* NMEA String */
    gboolean arg_nmea_string_set;
    gchar *arg_nmea_string;
};

#define QMI_INDICATION_LOC_NMEA_OUTPUT_TLV_NMEA_STRING 0x01

gboolean
qmi_indication_loc_nmea_output_get_nmea_string (
    QmiIndicationLocNmeaOutput *self,
    const gchar **value_nmea_string,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_nmea_string_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'NMEA String' was not found in the message");
        return FALSE;
    }

    if (value_nmea_string)
        *value_nmea_string = self->arg_nmea_string;

    return TRUE;
}

GType
qmi_indication_loc_nmea_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocNmeaOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_nmea_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_nmea_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocNmeaOutput *
qmi_indication_loc_nmea_output_ref (QmiIndicationLocNmeaOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_nmea_output_unref (QmiIndicationLocNmeaOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_nmea_string, (GDestroyNotify)g_free);
        g_slice_free (QmiIndicationLocNmeaOutput, self);
    }
}

static gchar *
qmi_indication_loc_nmea_output_nmea_string_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_NMEA_OUTPUT_TLV_NMEA_STRING, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        g_autofree gchar *tmp = NULL;

        if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 0, &tmp, &error))
            goto out;
        {
            g_string_append (printable, tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_nmea_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_nmea_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_nmea_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_NMEA_OUTPUT_TLV_NMEA_STRING:
            tlv_type_str = "NMEA String";
            translated_value = qmi_indication_loc_nmea_output_nmea_string_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_nmea_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"NMEA\" (0x0026)\n",
                            line_prefix);

    {
        struct indication_nmea_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_nmea_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocNmeaOutput *
qmi_indication_loc_nmea_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocNmeaOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_NMEA);

    self = g_slice_new0 (QmiIndicationLocNmeaOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_NMEA_OUTPUT_TLV_NMEA_STRING, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory NMEA String TLV: ");
                qmi_indication_loc_nmea_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 0, &(self->arg_nmea_string), error))
                goto qmi_indication_loc_nmea_output_nmea_string_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'NMEA String' TLV", offset);
            }

            self->arg_nmea_string_set = TRUE;

qmi_indication_loc_nmea_output_nmea_string_out:
            if (!self->arg_nmea_string_set) {
                qmi_indication_loc_nmea_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Inject Time Request */


/* --- Output -- */

struct _QmiIndicationLocInjectTimeRequestOutput {
    volatile gint ref_count;

    /* Time Server Info */
    gboolean arg_time_server_info_set;
    guint32 arg_time_server_info_delay_threshold;
    GArray *arg_time_server_info_time_server_list;
};

#define QMI_INDICATION_LOC_INJECT_TIME_REQUEST_OUTPUT_TLV_TIME_SERVER_INFO 0x10

gboolean
qmi_indication_loc_inject_time_request_output_get_time_server_info (
    QmiIndicationLocInjectTimeRequestOutput *self,
    guint32 *value_time_server_info_delay_threshold,
    GArray **value_time_server_info_time_server_list,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_time_server_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Time Server Info' was not found in the message");
        return FALSE;
    }

    if (value_time_server_info_delay_threshold)
        *value_time_server_info_delay_threshold = self->arg_time_server_info_delay_threshold;
    if (value_time_server_info_time_server_list)
        *value_time_server_info_time_server_list = self->arg_time_server_info_time_server_list;

    return TRUE;
}

GType
qmi_indication_loc_inject_time_request_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocInjectTimeRequestOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_inject_time_request_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_inject_time_request_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocInjectTimeRequestOutput *
qmi_indication_loc_inject_time_request_output_ref (QmiIndicationLocInjectTimeRequestOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_inject_time_request_output_unref (QmiIndicationLocInjectTimeRequestOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_time_server_info_time_server_list, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiIndicationLocInjectTimeRequestOutput, self);
    }
}

static gchar *
qmi_indication_loc_inject_time_request_output_time_server_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_TIME_REQUEST_OUTPUT_TLV_TIME_SERVER_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " delay_threshold = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " time_server_list = '");
    {
        guint time_server_list_i;
        guint8 time_server_list_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(time_server_list_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (time_server_list_i = 0; time_server_list_i < time_server_list_n_items; time_server_list_i++) {
            g_string_append_printf (printable, " [%u] = '", time_server_list_i);

            {
                g_autofree gchar *tmp = NULL;

                if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
                    goto out;
                {
                    g_string_append (printable, tmp);
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_inject_time_request_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_inject_time_request_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_inject_time_request_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_INJECT_TIME_REQUEST_OUTPUT_TLV_TIME_SERVER_INFO:
            tlv_type_str = "Time Server Info";
            translated_value = qmi_indication_loc_inject_time_request_output_time_server_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_inject_time_request_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Inject Time Request\" (0x0028)\n",
                            line_prefix);

    {
        struct indication_inject_time_request_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_inject_time_request_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocInjectTimeRequestOutput *
qmi_indication_loc_inject_time_request_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocInjectTimeRequestOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_INJECT_TIME_REQUEST);

    self = g_slice_new0 (QmiIndicationLocInjectTimeRequestOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_TIME_REQUEST_OUTPUT_TLV_TIME_SERVER_INFO, NULL, NULL)) == 0) {
                goto qmi_indication_loc_inject_time_request_output_time_server_info_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_time_server_info_delay_threshold), NULL))
                goto qmi_indication_loc_inject_time_request_output_time_server_info_out;
            {
                guint time_server_list_i;
                guint8 time_server_list_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(time_server_list_n_items), NULL))
                    goto qmi_indication_loc_inject_time_request_output_time_server_info_out;

                self->arg_time_server_info_time_server_list = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (gchar *),
                    (guint)time_server_list_n_items);

                g_array_set_clear_func (self->arg_time_server_info_time_server_list, (GDestroyNotify)qmi_helpers_clear_string);

                for (time_server_list_i = 0; time_server_list_i < time_server_list_n_items; time_server_list_i++) {
                    gchar * time_server_list_aux;

                    if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &(time_server_list_aux), NULL))
                        goto qmi_indication_loc_inject_time_request_output_time_server_info_out;
                    g_array_insert_val (self->arg_time_server_info_time_server_list, time_server_list_i, time_server_list_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Time Server Info' TLV", offset);
            }

            self->arg_time_server_info_set = TRUE;

qmi_indication_loc_inject_time_request_output_time_server_info_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Inject Predicted Orbits Request */


/* --- Output -- */

struct _QmiIndicationLocInjectPredictedOrbitsRequestOutput {
    volatile gint ref_count;

    /* File Info */
    gboolean arg_file_info_set;
    guint32 arg_file_info_file_type;
    guint32 arg_file_info_download_interval_minutes;

    /* Update Period Seconds */
    gboolean arg_update_period_seconds_set;
    guint32 arg_update_period_seconds;

    /* Update Type */
    gboolean arg_update_type_set;
    guint32 arg_update_type;

    /* Server Update Mask */
    gboolean arg_server_update_mask_set;
    guint64 arg_server_update_mask;

    /* Server List */
    gboolean arg_server_list_set;
    GArray *arg_server_list;

    /* Allowed Sizes */
    gboolean arg_allowed_sizes_set;
    guint32 arg_allowed_sizes_max_file_size;
    guint32 arg_allowed_sizes_max_part_size;
};

#define QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_FILE_INFO 0x14
#define QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_UPDATE_PERIOD_SECONDS 0x13
#define QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_UPDATE_TYPE 0x12
#define QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_SERVER_UPDATE_MASK 0x11
#define QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_SERVER_LIST 0x10
#define QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_ALLOWED_SIZES 0x1

gboolean
qmi_indication_loc_inject_predicted_orbits_request_output_get_file_info (
    QmiIndicationLocInjectPredictedOrbitsRequestOutput *self,
    QmiLocInjectedOrbitFileType *value_file_info_file_type,
    guint32 *value_file_info_download_interval_minutes,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_file_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'File Info' was not found in the message");
        return FALSE;
    }

    if (value_file_info_file_type)
        *value_file_info_file_type = (QmiLocInjectedOrbitFileType)(self->arg_file_info_file_type);
    if (value_file_info_download_interval_minutes)
        *value_file_info_download_interval_minutes = self->arg_file_info_download_interval_minutes;

    return TRUE;
}

gboolean
qmi_indication_loc_inject_predicted_orbits_request_output_get_update_period_seconds (
    QmiIndicationLocInjectPredictedOrbitsRequestOutput *self,
    guint32 *value_update_period_seconds,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_update_period_seconds_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Update Period Seconds' was not found in the message");
        return FALSE;
    }

    if (value_update_period_seconds)
        *value_update_period_seconds = self->arg_update_period_seconds;

    return TRUE;
}

gboolean
qmi_indication_loc_inject_predicted_orbits_request_output_get_update_type (
    QmiIndicationLocInjectPredictedOrbitsRequestOutput *self,
    QmiLocInjectedOrbitUpdateType *value_update_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_update_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Update Type' was not found in the message");
        return FALSE;
    }

    if (value_update_type)
        *value_update_type = (QmiLocInjectedOrbitUpdateType)(self->arg_update_type);

    return TRUE;
}

gboolean
qmi_indication_loc_inject_predicted_orbits_request_output_get_server_update_mask (
    QmiIndicationLocInjectPredictedOrbitsRequestOutput *self,
    QmiLocInjectedOrbitServerParamUpdate *value_server_update_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_server_update_mask_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Server Update Mask' was not found in the message");
        return FALSE;
    }

    if (value_server_update_mask)
        *value_server_update_mask = (QmiLocInjectedOrbitServerParamUpdate)(self->arg_server_update_mask);

    return TRUE;
}

gboolean
qmi_indication_loc_inject_predicted_orbits_request_output_get_server_list (
    QmiIndicationLocInjectPredictedOrbitsRequestOutput *self,
    GArray **value_server_list,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_server_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Server List' was not found in the message");
        return FALSE;
    }

    if (value_server_list)
        *value_server_list = self->arg_server_list;

    return TRUE;
}

gboolean
qmi_indication_loc_inject_predicted_orbits_request_output_get_allowed_sizes (
    QmiIndicationLocInjectPredictedOrbitsRequestOutput *self,
    guint32 *value_allowed_sizes_max_file_size,
    guint32 *value_allowed_sizes_max_part_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_allowed_sizes_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Allowed Sizes' was not found in the message");
        return FALSE;
    }

    if (value_allowed_sizes_max_file_size)
        *value_allowed_sizes_max_file_size = self->arg_allowed_sizes_max_file_size;
    if (value_allowed_sizes_max_part_size)
        *value_allowed_sizes_max_part_size = self->arg_allowed_sizes_max_part_size;

    return TRUE;
}

GType
qmi_indication_loc_inject_predicted_orbits_request_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocInjectPredictedOrbitsRequestOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_inject_predicted_orbits_request_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_inject_predicted_orbits_request_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocInjectPredictedOrbitsRequestOutput *
qmi_indication_loc_inject_predicted_orbits_request_output_ref (QmiIndicationLocInjectPredictedOrbitsRequestOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_inject_predicted_orbits_request_output_unref (QmiIndicationLocInjectPredictedOrbitsRequestOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_server_list, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiIndicationLocInjectPredictedOrbitsRequestOutput, self);
    }
}

static gchar *
qmi_indication_loc_inject_predicted_orbits_request_output_file_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_FILE_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " file_type = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_INJECTED_ORBIT_FILE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_injected_orbit_file_type_get_string ((QmiLocInjectedOrbitFileType)tmp));
#elif defined  __QMI_LOC_INJECTED_ORBIT_FILE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_injected_orbit_file_type_build_string_from_mask ((QmiLocInjectedOrbitFileType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocInjectedOrbitFileType
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " download_interval_minutes = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_inject_predicted_orbits_request_output_update_period_seconds_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_UPDATE_PERIOD_SECONDS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_inject_predicted_orbits_request_output_update_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_UPDATE_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_INJECTED_ORBIT_UPDATE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_injected_orbit_update_type_get_string ((QmiLocInjectedOrbitUpdateType)tmp));
#elif defined  __QMI_LOC_INJECTED_ORBIT_UPDATE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_injected_orbit_update_type_build_string_from_mask ((QmiLocInjectedOrbitUpdateType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocInjectedOrbitUpdateType
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_inject_predicted_orbits_request_output_server_update_mask_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_SERVER_UPDATE_MASK, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_INJECTED_ORBIT_SERVER_PARAM_UPDATE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_injected_orbit_server_param_update_get_string ((QmiLocInjectedOrbitServerParamUpdate)tmp));
#elif defined  __QMI_LOC_INJECTED_ORBIT_SERVER_PARAM_UPDATE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_injected_orbit_server_param_update_build_string_from_mask ((QmiLocInjectedOrbitServerParamUpdate)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocInjectedOrbitServerParamUpdate
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_inject_predicted_orbits_request_output_server_list_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_SERVER_LIST, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint server_list_i;
        guint8 server_list_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(server_list_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (server_list_i = 0; server_list_i < server_list_n_items; server_list_i++) {
            g_string_append_printf (printable, " [%u] = '", server_list_i);

            {
                g_autofree gchar *tmp = NULL;

                if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
                    goto out;
                {
                    g_string_append (printable, tmp);
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }
    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_inject_predicted_orbits_request_output_allowed_sizes_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_ALLOWED_SIZES, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " max_file_size = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " max_part_size = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_inject_predicted_orbits_request_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_inject_predicted_orbits_request_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_inject_predicted_orbits_request_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_FILE_INFO:
            tlv_type_str = "File Info";
            translated_value = qmi_indication_loc_inject_predicted_orbits_request_output_file_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_UPDATE_PERIOD_SECONDS:
            tlv_type_str = "Update Period Seconds";
            translated_value = qmi_indication_loc_inject_predicted_orbits_request_output_update_period_seconds_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_UPDATE_TYPE:
            tlv_type_str = "Update Type";
            translated_value = qmi_indication_loc_inject_predicted_orbits_request_output_update_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_SERVER_UPDATE_MASK:
            tlv_type_str = "Server Update Mask";
            translated_value = qmi_indication_loc_inject_predicted_orbits_request_output_server_update_mask_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_SERVER_LIST:
            tlv_type_str = "Server List";
            translated_value = qmi_indication_loc_inject_predicted_orbits_request_output_server_list_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_ALLOWED_SIZES:
            tlv_type_str = "Allowed Sizes";
            translated_value = qmi_indication_loc_inject_predicted_orbits_request_output_allowed_sizes_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_inject_predicted_orbits_request_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Inject Predicted Orbits Request\" (0x0029)\n",
                            line_prefix);

    {
        struct indication_inject_predicted_orbits_request_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_inject_predicted_orbits_request_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocInjectPredictedOrbitsRequestOutput *
qmi_indication_loc_inject_predicted_orbits_request_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocInjectPredictedOrbitsRequestOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST);

    self = g_slice_new0 (QmiIndicationLocInjectPredictedOrbitsRequestOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_FILE_INFO, NULL, NULL)) == 0) {
                goto qmi_indication_loc_inject_predicted_orbits_request_output_file_info_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_loc_inject_predicted_orbits_request_output_file_info_out;
                self->arg_file_info_file_type = (QmiLocInjectedOrbitFileType)tmp;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_file_info_download_interval_minutes), NULL))
                goto qmi_indication_loc_inject_predicted_orbits_request_output_file_info_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'File Info' TLV", offset);
            }

            self->arg_file_info_set = TRUE;

qmi_indication_loc_inject_predicted_orbits_request_output_file_info_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_UPDATE_PERIOD_SECONDS, NULL, NULL)) == 0) {
                goto qmi_indication_loc_inject_predicted_orbits_request_output_update_period_seconds_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_update_period_seconds), NULL))
                goto qmi_indication_loc_inject_predicted_orbits_request_output_update_period_seconds_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Update Period Seconds' TLV", offset);
            }

            self->arg_update_period_seconds_set = TRUE;

qmi_indication_loc_inject_predicted_orbits_request_output_update_period_seconds_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_UPDATE_TYPE, NULL, NULL)) == 0) {
                goto qmi_indication_loc_inject_predicted_orbits_request_output_update_type_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_loc_inject_predicted_orbits_request_output_update_type_out;
                self->arg_update_type = (QmiLocInjectedOrbitUpdateType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Update Type' TLV", offset);
            }

            self->arg_update_type_set = TRUE;

qmi_indication_loc_inject_predicted_orbits_request_output_update_type_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_SERVER_UPDATE_MASK, NULL, NULL)) == 0) {
                goto qmi_indication_loc_inject_predicted_orbits_request_output_server_update_mask_out;
            }
            {
                guint64 tmp;

                if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_loc_inject_predicted_orbits_request_output_server_update_mask_out;
                self->arg_server_update_mask = (QmiLocInjectedOrbitServerParamUpdate)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Server Update Mask' TLV", offset);
            }

            self->arg_server_update_mask_set = TRUE;

qmi_indication_loc_inject_predicted_orbits_request_output_server_update_mask_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_SERVER_LIST, NULL, NULL)) == 0) {
                goto qmi_indication_loc_inject_predicted_orbits_request_output_server_list_out;
            }
            {
                guint server_list_i;
                guint8 server_list_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(server_list_n_items), NULL))
                    goto qmi_indication_loc_inject_predicted_orbits_request_output_server_list_out;

                self->arg_server_list = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (gchar *),
                    (guint)server_list_n_items);

                g_array_set_clear_func (self->arg_server_list, (GDestroyNotify)qmi_helpers_clear_string);

                for (server_list_i = 0; server_list_i < server_list_n_items; server_list_i++) {
                    gchar * server_list_aux;

                    if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &(server_list_aux), NULL))
                        goto qmi_indication_loc_inject_predicted_orbits_request_output_server_list_out;
                    g_array_insert_val (self->arg_server_list, server_list_i, server_list_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Server List' TLV", offset);
            }

            self->arg_server_list_set = TRUE;

qmi_indication_loc_inject_predicted_orbits_request_output_server_list_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT_TLV_ALLOWED_SIZES, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Allowed Sizes TLV: ");
                qmi_indication_loc_inject_predicted_orbits_request_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_allowed_sizes_max_file_size), error))
                goto qmi_indication_loc_inject_predicted_orbits_request_output_allowed_sizes_out;
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_allowed_sizes_max_part_size), error))
                goto qmi_indication_loc_inject_predicted_orbits_request_output_allowed_sizes_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Allowed Sizes' TLV", offset);
            }

            self->arg_allowed_sizes_set = TRUE;

qmi_indication_loc_inject_predicted_orbits_request_output_allowed_sizes_out:
            if (!self->arg_allowed_sizes_set) {
                qmi_indication_loc_inject_predicted_orbits_request_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Inject Position Request */


/* --- Output -- */

struct _QmiIndicationLocInjectPositionRequestOutput {
    volatile gint ref_count;

    /* UTC Timestamp */
    gboolean arg_utc_timestamp_set;
    guint64 arg_utc_timestamp;

    /* Horizontal Uncertainty Circular */
    gboolean arg_horizontal_uncertainty_circular_set;
    gfloat arg_horizontal_uncertainty_circular;

    /* Longitude */
    gboolean arg_longitude_set;
    gdouble arg_longitude;

    /* Latitude */
    gboolean arg_latitude_set;
    gdouble arg_latitude;
};

#define QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_UTC_TIMESTAMP 0x04
#define QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_CIRCULAR 0x03
#define QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_LONGITUDE 0x02
#define QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_LATITUDE 0x01

gboolean
qmi_indication_loc_inject_position_request_output_get_utc_timestamp (
    QmiIndicationLocInjectPositionRequestOutput *self,
    guint64 *value_utc_timestamp,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_utc_timestamp_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'UTC Timestamp' was not found in the message");
        return FALSE;
    }

    if (value_utc_timestamp)
        *value_utc_timestamp = self->arg_utc_timestamp;

    return TRUE;
}

gboolean
qmi_indication_loc_inject_position_request_output_get_horizontal_uncertainty_circular (
    QmiIndicationLocInjectPositionRequestOutput *self,
    gfloat *value_horizontal_uncertainty_circular,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_horizontal_uncertainty_circular_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Horizontal Uncertainty Circular' was not found in the message");
        return FALSE;
    }

    if (value_horizontal_uncertainty_circular)
        *value_horizontal_uncertainty_circular = self->arg_horizontal_uncertainty_circular;

    return TRUE;
}

gboolean
qmi_indication_loc_inject_position_request_output_get_longitude (
    QmiIndicationLocInjectPositionRequestOutput *self,
    gdouble *value_longitude,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_longitude_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Longitude' was not found in the message");
        return FALSE;
    }

    if (value_longitude)
        *value_longitude = self->arg_longitude;

    return TRUE;
}

gboolean
qmi_indication_loc_inject_position_request_output_get_latitude (
    QmiIndicationLocInjectPositionRequestOutput *self,
    gdouble *value_latitude,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_latitude_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Latitude' was not found in the message");
        return FALSE;
    }

    if (value_latitude)
        *value_latitude = self->arg_latitude;

    return TRUE;
}

GType
qmi_indication_loc_inject_position_request_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocInjectPositionRequestOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_inject_position_request_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_inject_position_request_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocInjectPositionRequestOutput *
qmi_indication_loc_inject_position_request_output_ref (QmiIndicationLocInjectPositionRequestOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_inject_position_request_output_unref (QmiIndicationLocInjectPositionRequestOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocInjectPositionRequestOutput, self);
    }
}

static gchar *
qmi_indication_loc_inject_position_request_output_utc_timestamp_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_UTC_TIMESTAMP, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT64_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_inject_position_request_output_horizontal_uncertainty_circular_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_CIRCULAR, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_inject_position_request_output_longitude_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_LONGITUDE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gdouble tmp;

        if (!qmi_message_tlv_read_gdouble (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_inject_position_request_output_latitude_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_LATITUDE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gdouble tmp;

        if (!qmi_message_tlv_read_gdouble (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_inject_position_request_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_inject_position_request_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_inject_position_request_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_UTC_TIMESTAMP:
            tlv_type_str = "UTC Timestamp";
            translated_value = qmi_indication_loc_inject_position_request_output_utc_timestamp_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_CIRCULAR:
            tlv_type_str = "Horizontal Uncertainty Circular";
            translated_value = qmi_indication_loc_inject_position_request_output_horizontal_uncertainty_circular_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_LONGITUDE:
            tlv_type_str = "Longitude";
            translated_value = qmi_indication_loc_inject_position_request_output_longitude_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_LATITUDE:
            tlv_type_str = "Latitude";
            translated_value = qmi_indication_loc_inject_position_request_output_latitude_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_inject_position_request_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Inject Position Request\" (0x002A)\n",
                            line_prefix);

    {
        struct indication_inject_position_request_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_inject_position_request_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocInjectPositionRequestOutput *
qmi_indication_loc_inject_position_request_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocInjectPositionRequestOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_INJECT_POSITION_REQUEST);

    self = g_slice_new0 (QmiIndicationLocInjectPositionRequestOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_UTC_TIMESTAMP, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory UTC Timestamp TLV: ");
                qmi_indication_loc_inject_position_request_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_utc_timestamp), error))
                goto qmi_indication_loc_inject_position_request_output_utc_timestamp_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'UTC Timestamp' TLV", offset);
            }

            self->arg_utc_timestamp_set = TRUE;

qmi_indication_loc_inject_position_request_output_utc_timestamp_out:
            if (!self->arg_utc_timestamp_set) {
                qmi_indication_loc_inject_position_request_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_HORIZONTAL_UNCERTAINTY_CIRCULAR, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Horizontal Uncertainty Circular TLV: ");
                qmi_indication_loc_inject_position_request_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_horizontal_uncertainty_circular), error))
                goto qmi_indication_loc_inject_position_request_output_horizontal_uncertainty_circular_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Horizontal Uncertainty Circular' TLV", offset);
            }

            self->arg_horizontal_uncertainty_circular_set = TRUE;

qmi_indication_loc_inject_position_request_output_horizontal_uncertainty_circular_out:
            if (!self->arg_horizontal_uncertainty_circular_set) {
                qmi_indication_loc_inject_position_request_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_LONGITUDE, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Longitude TLV: ");
                qmi_indication_loc_inject_position_request_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_gdouble (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_longitude), error))
                goto qmi_indication_loc_inject_position_request_output_longitude_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Longitude' TLV", offset);
            }

            self->arg_longitude_set = TRUE;

qmi_indication_loc_inject_position_request_output_longitude_out:
            if (!self->arg_longitude_set) {
                qmi_indication_loc_inject_position_request_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT_TLV_LATITUDE, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Latitude TLV: ");
                qmi_indication_loc_inject_position_request_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_gdouble (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_latitude), error))
                goto qmi_indication_loc_inject_position_request_output_latitude_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Latitude' TLV", offset);
            }

            self->arg_latitude_set = TRUE;

qmi_indication_loc_inject_position_request_output_latitude_out:
            if (!self->arg_latitude_set) {
                qmi_indication_loc_inject_position_request_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Engine State */


/* --- Output -- */

struct _QmiIndicationLocEngineStateOutput {
    volatile gint ref_count;

    /* Engine State */
    gboolean arg_engine_state_set;
    gint32 arg_engine_state;
};

#define QMI_INDICATION_LOC_ENGINE_STATE_OUTPUT_TLV_ENGINE_STATE 0x01

gboolean
qmi_indication_loc_engine_state_output_get_engine_state (
    QmiIndicationLocEngineStateOutput *self,
    QmiLocEngineState *value_engine_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_engine_state_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Engine State' was not found in the message");
        return FALSE;
    }

    if (value_engine_state)
        *value_engine_state = (QmiLocEngineState)(self->arg_engine_state);

    return TRUE;
}

GType
qmi_indication_loc_engine_state_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocEngineStateOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_engine_state_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_engine_state_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocEngineStateOutput *
qmi_indication_loc_engine_state_output_ref (QmiIndicationLocEngineStateOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_engine_state_output_unref (QmiIndicationLocEngineStateOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocEngineStateOutput, self);
    }
}

static gchar *
qmi_indication_loc_engine_state_output_engine_state_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_ENGINE_STATE_OUTPUT_TLV_ENGINE_STATE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gint32 tmp;

        if (!qmi_message_tlv_read_gint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_ENGINE_STATE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_engine_state_get_string ((QmiLocEngineState)tmp));
#elif defined  __QMI_LOC_ENGINE_STATE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_engine_state_build_string_from_mask ((QmiLocEngineState)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocEngineState
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_engine_state_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_engine_state_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_engine_state_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_ENGINE_STATE_OUTPUT_TLV_ENGINE_STATE:
            tlv_type_str = "Engine State";
            translated_value = qmi_indication_loc_engine_state_output_engine_state_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_engine_state_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Engine State\" (0x002B)\n",
                            line_prefix);

    {
        struct indication_engine_state_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_engine_state_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocEngineStateOutput *
qmi_indication_loc_engine_state_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocEngineStateOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_ENGINE_STATE);

    self = g_slice_new0 (QmiIndicationLocEngineStateOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_ENGINE_STATE_OUTPUT_TLV_ENGINE_STATE, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Engine State TLV: ");
                qmi_indication_loc_engine_state_output_unref (self);
                return NULL;
            }
            {
                gint32 tmp;

                if (!qmi_message_tlv_read_gint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_indication_loc_engine_state_output_engine_state_out;
                self->arg_engine_state = (QmiLocEngineState)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Engine State' TLV", offset);
            }

            self->arg_engine_state_set = TRUE;

qmi_indication_loc_engine_state_output_engine_state_out:
            if (!self->arg_engine_state_set) {
                qmi_indication_loc_engine_state_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Fix Recurrence Type */


/* --- Output -- */

struct _QmiIndicationLocFixRecurrenceTypeOutput {
    volatile gint ref_count;

    /* Fix Recurrence Type */
    gboolean arg_fix_recurrence_type_set;
    guint32 arg_fix_recurrence_type;
};

#define QMI_INDICATION_LOC_FIX_RECURRENCE_TYPE_OUTPUT_TLV_FIX_RECURRENCE_TYPE 0x10

gboolean
qmi_indication_loc_fix_recurrence_type_output_get_fix_recurrence_type (
    QmiIndicationLocFixRecurrenceTypeOutput *self,
    QmiLocFixRecurrenceType *value_fix_recurrence_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_fix_recurrence_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Fix Recurrence Type' was not found in the message");
        return FALSE;
    }

    if (value_fix_recurrence_type)
        *value_fix_recurrence_type = (QmiLocFixRecurrenceType)(self->arg_fix_recurrence_type);

    return TRUE;
}

GType
qmi_indication_loc_fix_recurrence_type_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocFixRecurrenceTypeOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_fix_recurrence_type_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_fix_recurrence_type_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocFixRecurrenceTypeOutput *
qmi_indication_loc_fix_recurrence_type_output_ref (QmiIndicationLocFixRecurrenceTypeOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_fix_recurrence_type_output_unref (QmiIndicationLocFixRecurrenceTypeOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocFixRecurrenceTypeOutput, self);
    }
}

static gchar *
qmi_indication_loc_fix_recurrence_type_output_fix_recurrence_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_FIX_RECURRENCE_TYPE_OUTPUT_TLV_FIX_RECURRENCE_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_FIX_RECURRENCE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_fix_recurrence_type_get_string ((QmiLocFixRecurrenceType)tmp));
#elif defined  __QMI_LOC_FIX_RECURRENCE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_fix_recurrence_type_build_string_from_mask ((QmiLocFixRecurrenceType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocFixRecurrenceType
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_fix_recurrence_type_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_fix_recurrence_type_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_fix_recurrence_type_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_FIX_RECURRENCE_TYPE_OUTPUT_TLV_FIX_RECURRENCE_TYPE:
            tlv_type_str = "Fix Recurrence Type";
            translated_value = qmi_indication_loc_fix_recurrence_type_output_fix_recurrence_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_fix_recurrence_type_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Fix Recurrence Type\" (0x002C)\n",
                            line_prefix);

    {
        struct indication_fix_recurrence_type_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_fix_recurrence_type_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocFixRecurrenceTypeOutput *
qmi_indication_loc_fix_recurrence_type_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocFixRecurrenceTypeOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_FIX_RECURRENCE_TYPE);

    self = g_slice_new0 (QmiIndicationLocFixRecurrenceTypeOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_FIX_RECURRENCE_TYPE_OUTPUT_TLV_FIX_RECURRENCE_TYPE, NULL, NULL)) == 0) {
                goto qmi_indication_loc_fix_recurrence_type_output_fix_recurrence_type_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_loc_fix_recurrence_type_output_fix_recurrence_type_out;
                self->arg_fix_recurrence_type = (QmiLocFixRecurrenceType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Fix Recurrence Type' TLV", offset);
            }

            self->arg_fix_recurrence_type_set = TRUE;

qmi_indication_loc_fix_recurrence_type_output_fix_recurrence_type_out:
            ;

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC GNSS Sv Info */


/* --- Output -- */

static void
__qmi_indication_loc_gnss_sv_info_output_list_element_free (QmiIndicationLocGnssSvInfoOutputListElement *value)
{
    g_slice_free (QmiIndicationLocGnssSvInfoOutputListElement, value);
}

static QmiIndicationLocGnssSvInfoOutputListElement *
__qmi_indication_loc_gnss_sv_info_output_list_element_new (void)
{
    return g_slice_new0 (QmiIndicationLocGnssSvInfoOutputListElement);
}

static QmiIndicationLocGnssSvInfoOutputListElement *
__qmi_indication_loc_gnss_sv_info_output_list_element_copy (const QmiIndicationLocGnssSvInfoOutputListElement *value)
{
    QmiIndicationLocGnssSvInfoOutputListElement *copy;

    copy = __qmi_indication_loc_gnss_sv_info_output_list_element_new ();
    copy->valid_information = value->valid_information;
    copy->system = value->system;
    copy->gnss_satellite_id = value->gnss_satellite_id;
    copy->health_status = value->health_status;
    copy->satellite_status = value->satellite_status;
    copy->navigation_data = value->navigation_data;
    copy->elevation_degrees = value->elevation_degrees;
    copy->azimuth_degrees = value->azimuth_degrees;
    copy->signal_to_noise_ratio_bhz = value->signal_to_noise_ratio_bhz;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiIndicationLocGnssSvInfoOutputListElement, qmi_indication_loc_gnss_sv_info_output_list_element, (GBoxedCopyFunc)__qmi_indication_loc_gnss_sv_info_output_list_element_copy, (GBoxedFreeFunc)__qmi_indication_loc_gnss_sv_info_output_list_element_free)

struct _QmiIndicationLocGnssSvInfoOutput {
    volatile gint ref_count;

    /* List */
    gboolean arg_list_set;
    GArray *arg_list;
    GPtrArray *arg_list_ptr;

    /* Altitude Assumed */
    gboolean arg_altitude_assumed_set;
    guint8 arg_altitude_assumed;
};

#define QMI_INDICATION_LOC_GNSS_SV_INFO_OUTPUT_TLV_LIST 0x10
#define QMI_INDICATION_LOC_GNSS_SV_INFO_OUTPUT_TLV_ALTITUDE_ASSUMED 0x01

gboolean
qmi_indication_loc_gnss_sv_info_output_get_list (
    QmiIndicationLocGnssSvInfoOutput *self,
    GArray **value_list,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'List' was not found in the message");
        return FALSE;
    }

    if (value_list)
        *value_list = self->arg_list;

    return TRUE;
}

gboolean
qmi_indication_loc_gnss_sv_info_output_get_list_gir (
    QmiIndicationLocGnssSvInfoOutput *self,
    GPtrArray **value_list_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'List' was not found in the message");
        return FALSE;
    }

    if (value_list_ptr) {
        if (!self->arg_list_ptr) {
            {
                guint list_i;

                self->arg_list_ptr = g_ptr_array_new_full (self->arg_list->len, (GDestroyNotify)__qmi_indication_loc_gnss_sv_info_output_list_element_free);
                for (list_i = 0; list_i < self->arg_list->len; list_i++) {
                    QmiIndicationLocGnssSvInfoOutputListElement *list_aux_from;
                    QmiIndicationLocGnssSvInfoOutputListElement *list_aux_to;

                    list_aux_from = &g_array_index (self->arg_list, QmiIndicationLocGnssSvInfoOutputListElement, list_i);

                    list_aux_to = __qmi_indication_loc_gnss_sv_info_output_list_element_new ();
                    list_aux_to->valid_information = (*list_aux_from).valid_information;
                    list_aux_to->system = (*list_aux_from).system;
                    list_aux_to->gnss_satellite_id = (*list_aux_from).gnss_satellite_id;
                    list_aux_to->health_status = (*list_aux_from).health_status;
                    list_aux_to->satellite_status = (*list_aux_from).satellite_status;
                    list_aux_to->navigation_data = (*list_aux_from).navigation_data;
                    list_aux_to->elevation_degrees = (*list_aux_from).elevation_degrees;
                    list_aux_to->azimuth_degrees = (*list_aux_from).azimuth_degrees;
                    list_aux_to->signal_to_noise_ratio_bhz = (*list_aux_from).signal_to_noise_ratio_bhz;

                    g_ptr_array_add (self->arg_list_ptr, list_aux_to);
                }
            }
        }
        *value_list_ptr = self->arg_list_ptr;
    }
    return TRUE;
}

gboolean
qmi_indication_loc_gnss_sv_info_output_get_altitude_assumed (
    QmiIndicationLocGnssSvInfoOutput *self,
    gboolean *value_altitude_assumed,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_altitude_assumed_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Altitude Assumed' was not found in the message");
        return FALSE;
    }

    if (value_altitude_assumed)
        *value_altitude_assumed = (gboolean)(self->arg_altitude_assumed);

    return TRUE;
}

GType
qmi_indication_loc_gnss_sv_info_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocGnssSvInfoOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_gnss_sv_info_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_gnss_sv_info_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocGnssSvInfoOutput *
qmi_indication_loc_gnss_sv_info_output_ref (QmiIndicationLocGnssSvInfoOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_gnss_sv_info_output_unref (QmiIndicationLocGnssSvInfoOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_list, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_list, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiIndicationLocGnssSvInfoOutput, self);
    }
}

static gchar *
qmi_indication_loc_gnss_sv_info_output_list_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GNSS_SV_INFO_OUTPUT_TLV_LIST, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint list_i;
        guint8 list_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(list_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (list_i = 0; list_i < list_n_items; list_i++) {
            g_string_append_printf (printable, " [%u] = '", list_i);
            g_string_append (printable, "[");
            g_string_append (printable, " valid_information = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_LOC_SATELLITE_VALID_INFORMATION_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_loc_satellite_valid_information_get_string ((QmiLocSatelliteValidInformation)tmp));
#elif defined  __QMI_LOC_SATELLITE_VALID_INFORMATION_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_loc_satellite_valid_information_build_string_from_mask ((QmiLocSatelliteValidInformation)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiLocSatelliteValidInformation
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " system = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_LOC_SYSTEM_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_loc_system_get_string ((QmiLocSystem)tmp));
#elif defined  __QMI_LOC_SYSTEM_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_loc_system_build_string_from_mask ((QmiLocSystem)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiLocSystem
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " gnss_satellite_id = '");

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " health_status = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_LOC_HEALTH_STATUS_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_loc_health_status_get_string ((QmiLocHealthStatus)tmp));
#elif defined  __QMI_LOC_HEALTH_STATUS_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_loc_health_status_build_string_from_mask ((QmiLocHealthStatus)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiLocHealthStatus
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " satellite_status = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_LOC_SATELLITE_STATUS_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_loc_satellite_status_get_string ((QmiLocSatelliteStatus)tmp));
#elif defined  __QMI_LOC_SATELLITE_STATUS_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_loc_satellite_status_build_string_from_mask ((QmiLocSatelliteStatus)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiLocSatelliteStatus
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " navigation_data = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_LOC_NAVIGATION_DATA_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_loc_navigation_data_get_string ((QmiLocNavigationData)tmp));
#elif defined  __QMI_LOC_NAVIGATION_DATA_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_loc_navigation_data_build_string_from_mask ((QmiLocNavigationData)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiLocNavigationData
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " elevation_degrees = '");

            {
                gfloat tmp;

                if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%lf", (gdouble)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " azimuth_degrees = '");

            {
                gfloat tmp;

                if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%lf", (gdouble)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " signal_to_noise_ratio_bhz = '");

            {
                gfloat tmp;

                if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%lf", (gdouble)tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " ]");
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }
    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_gnss_sv_info_output_altitude_assumed_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GNSS_SV_INFO_OUTPUT_TLV_ALTITUDE_ASSUMED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_gnss_sv_info_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_gnss_sv_info_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_gnss_sv_info_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_GNSS_SV_INFO_OUTPUT_TLV_LIST:
            tlv_type_str = "List";
            translated_value = qmi_indication_loc_gnss_sv_info_output_list_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_GNSS_SV_INFO_OUTPUT_TLV_ALTITUDE_ASSUMED:
            tlv_type_str = "Altitude Assumed";
            translated_value = qmi_indication_loc_gnss_sv_info_output_altitude_assumed_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_gnss_sv_info_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"GNSS Sv Info\" (0x0025)\n",
                            line_prefix);

    {
        struct indication_gnss_sv_info_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_gnss_sv_info_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocGnssSvInfoOutput *
qmi_indication_loc_gnss_sv_info_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocGnssSvInfoOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_GNSS_SV_INFO);

    self = g_slice_new0 (QmiIndicationLocGnssSvInfoOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GNSS_SV_INFO_OUTPUT_TLV_LIST, NULL, NULL)) == 0) {
                goto qmi_indication_loc_gnss_sv_info_output_list_out;
            }
            {
                guint list_i;
                guint8 list_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(list_n_items), NULL))
                    goto qmi_indication_loc_gnss_sv_info_output_list_out;

                self->arg_list = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (QmiIndicationLocGnssSvInfoOutputListElement),
                    (guint)list_n_items);

                for (list_i = 0; list_i < list_n_items; list_i++) {
                    QmiIndicationLocGnssSvInfoOutputListElement list_aux;

                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_indication_loc_gnss_sv_info_output_list_out;
                        list_aux.valid_information = (QmiLocSatelliteValidInformation)tmp;
                    }
                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_indication_loc_gnss_sv_info_output_list_out;
                        list_aux.system = (QmiLocSystem)tmp;
                    }
                    if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(list_aux.gnss_satellite_id), NULL))
                        goto qmi_indication_loc_gnss_sv_info_output_list_out;
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_indication_loc_gnss_sv_info_output_list_out;
                        list_aux.health_status = (QmiLocHealthStatus)tmp;
                    }
                    {
                        guint32 tmp;

                        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                            goto qmi_indication_loc_gnss_sv_info_output_list_out;
                        list_aux.satellite_status = (QmiLocSatelliteStatus)tmp;
                    }
                    {
                        guint8 tmp;

                        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, NULL))
                            goto qmi_indication_loc_gnss_sv_info_output_list_out;
                        list_aux.navigation_data = (QmiLocNavigationData)tmp;
                    }
                    if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(list_aux.elevation_degrees), NULL))
                        goto qmi_indication_loc_gnss_sv_info_output_list_out;
                    if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(list_aux.azimuth_degrees), NULL))
                        goto qmi_indication_loc_gnss_sv_info_output_list_out;
                    if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(list_aux.signal_to_noise_ratio_bhz), NULL))
                        goto qmi_indication_loc_gnss_sv_info_output_list_out;
                    g_array_insert_val (self->arg_list, list_i, list_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'List' TLV", offset);
            }

            self->arg_list_set = TRUE;

qmi_indication_loc_gnss_sv_info_output_list_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GNSS_SV_INFO_OUTPUT_TLV_ALTITUDE_ASSUMED, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Altitude Assumed TLV: ");
                qmi_indication_loc_gnss_sv_info_output_unref (self);
                return NULL;
            }
            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, error))
                    goto qmi_indication_loc_gnss_sv_info_output_altitude_assumed_out;
                self->arg_altitude_assumed = (gboolean)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Altitude Assumed' TLV", offset);
            }

            self->arg_altitude_assumed_set = TRUE;

qmi_indication_loc_gnss_sv_info_output_altitude_assumed_out:
            if (!self->arg_altitude_assumed_set) {
                qmi_indication_loc_gnss_sv_info_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Inject Predicted Orbits Data */


/* --- Output -- */

struct _QmiIndicationLocInjectPredictedOrbitsDataOutput {
    volatile gint ref_count;

    /* Part Number */
    gboolean arg_part_number_set;
    guint16 arg_part_number;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT_TLV_PART_NUMBER 0x10
#define QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_inject_predicted_orbits_data_output_get_part_number (
    QmiIndicationLocInjectPredictedOrbitsDataOutput *self,
    guint16 *value_part_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_part_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Part Number' was not found in the message");
        return FALSE;
    }

    if (value_part_number)
        *value_part_number = self->arg_part_number;

    return TRUE;
}

gboolean
qmi_indication_loc_inject_predicted_orbits_data_output_get_indication_status (
    QmiIndicationLocInjectPredictedOrbitsDataOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_inject_predicted_orbits_data_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocInjectPredictedOrbitsDataOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_inject_predicted_orbits_data_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_inject_predicted_orbits_data_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocInjectPredictedOrbitsDataOutput *
qmi_indication_loc_inject_predicted_orbits_data_output_ref (QmiIndicationLocInjectPredictedOrbitsDataOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_inject_predicted_orbits_data_output_unref (QmiIndicationLocInjectPredictedOrbitsDataOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocInjectPredictedOrbitsDataOutput, self);
    }
}

static gchar *
qmi_indication_loc_inject_predicted_orbits_data_output_part_number_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT_TLV_PART_NUMBER, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_loc_message_status_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT_TLV_INDICATION_STATUS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_INDICATION_STATUS_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_indication_status_get_string ((QmiLocIndicationStatus)tmp));
#elif defined  __QMI_LOC_INDICATION_STATUS_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_indication_status_build_string_from_mask ((QmiLocIndicationStatus)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocIndicationStatus
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_inject_predicted_orbits_data_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_inject_predicted_orbits_data_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_inject_predicted_orbits_data_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT_TLV_PART_NUMBER:
            tlv_type_str = "Part Number";
            translated_value = qmi_indication_loc_inject_predicted_orbits_data_output_part_number_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_inject_predicted_orbits_data_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Inject Predicted Orbits Data\" (0x0035)\n",
                            line_prefix);

    {
        struct indication_inject_predicted_orbits_data_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_inject_predicted_orbits_data_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocInjectPredictedOrbitsDataOutput *
qmi_indication_loc_inject_predicted_orbits_data_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocInjectPredictedOrbitsDataOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA);

    self = g_slice_new0 (QmiIndicationLocInjectPredictedOrbitsDataOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT_TLV_PART_NUMBER, NULL, NULL)) == 0) {
                goto qmi_indication_loc_inject_predicted_orbits_data_output_part_number_out;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_part_number), NULL))
                goto qmi_indication_loc_inject_predicted_orbits_data_output_part_number_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Part Number' TLV", offset);
            }

            self->arg_part_number_set = TRUE;

qmi_indication_loc_inject_predicted_orbits_data_output_part_number_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_inject_predicted_orbits_data_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_inject_predicted_orbits_data_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Get Predicted Orbits Data Source */


/* --- Output -- */

struct _QmiIndicationLocGetPredictedOrbitsDataSourceOutput {
    volatile gint ref_count;

    /* Server List */
    gboolean arg_server_list_set;
    GArray *arg_server_list;

    /* Allowed Sizes */
    gboolean arg_allowed_sizes_set;
    guint32 arg_allowed_sizes_max_file_size;
    guint32 arg_allowed_sizes_max_part_size;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_SERVER_LIST 0x11
#define QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_ALLOWED_SIZES 0x10
#define QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_get_predicted_orbits_data_source_output_get_server_list (
    QmiIndicationLocGetPredictedOrbitsDataSourceOutput *self,
    GArray **value_server_list,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_server_list_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Server List' was not found in the message");
        return FALSE;
    }

    if (value_server_list)
        *value_server_list = self->arg_server_list;

    return TRUE;
}

gboolean
qmi_indication_loc_get_predicted_orbits_data_source_output_get_allowed_sizes (
    QmiIndicationLocGetPredictedOrbitsDataSourceOutput *self,
    guint32 *value_allowed_sizes_max_file_size,
    guint32 *value_allowed_sizes_max_part_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_allowed_sizes_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Allowed Sizes' was not found in the message");
        return FALSE;
    }

    if (value_allowed_sizes_max_file_size)
        *value_allowed_sizes_max_file_size = self->arg_allowed_sizes_max_file_size;
    if (value_allowed_sizes_max_part_size)
        *value_allowed_sizes_max_part_size = self->arg_allowed_sizes_max_part_size;

    return TRUE;
}

gboolean
qmi_indication_loc_get_predicted_orbits_data_source_output_get_indication_status (
    QmiIndicationLocGetPredictedOrbitsDataSourceOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_get_predicted_orbits_data_source_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocGetPredictedOrbitsDataSourceOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_get_predicted_orbits_data_source_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_get_predicted_orbits_data_source_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocGetPredictedOrbitsDataSourceOutput *
qmi_indication_loc_get_predicted_orbits_data_source_output_ref (QmiIndicationLocGetPredictedOrbitsDataSourceOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_get_predicted_orbits_data_source_output_unref (QmiIndicationLocGetPredictedOrbitsDataSourceOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_server_list, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiIndicationLocGetPredictedOrbitsDataSourceOutput, self);
    }
}

static gchar *
qmi_indication_loc_get_predicted_orbits_data_source_output_server_list_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_SERVER_LIST, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint server_list_i;
        guint8 server_list_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(server_list_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (server_list_i = 0; server_list_i < server_list_n_items; server_list_i++) {
            g_string_append_printf (printable, " [%u] = '", server_list_i);

            {
                g_autofree gchar *tmp = NULL;

                if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
                    goto out;
                {
                    g_string_append (printable, tmp);
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }
    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_get_predicted_orbits_data_source_output_allowed_sizes_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_ALLOWED_SIZES, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " max_file_size = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " max_part_size = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_get_predicted_orbits_data_source_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_get_predicted_orbits_data_source_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_get_predicted_orbits_data_source_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_SERVER_LIST:
            tlv_type_str = "Server List";
            translated_value = qmi_indication_loc_get_predicted_orbits_data_source_output_server_list_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_ALLOWED_SIZES:
            tlv_type_str = "Allowed Sizes";
            translated_value = qmi_indication_loc_get_predicted_orbits_data_source_output_allowed_sizes_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_get_predicted_orbits_data_source_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Predicted Orbits Data Source\" (0x0036)\n",
                            line_prefix);

    {
        struct indication_get_predicted_orbits_data_source_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_get_predicted_orbits_data_source_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocGetPredictedOrbitsDataSourceOutput *
qmi_indication_loc_get_predicted_orbits_data_source_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocGetPredictedOrbitsDataSourceOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE);

    self = g_slice_new0 (QmiIndicationLocGetPredictedOrbitsDataSourceOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_SERVER_LIST, NULL, NULL)) == 0) {
                goto qmi_indication_loc_get_predicted_orbits_data_source_output_server_list_out;
            }
            {
                guint server_list_i;
                guint8 server_list_n_items;

                /* Read number of items in the array */
                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(server_list_n_items), NULL))
                    goto qmi_indication_loc_get_predicted_orbits_data_source_output_server_list_out;

                self->arg_server_list = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (gchar *),
                    (guint)server_list_n_items);

                g_array_set_clear_func (self->arg_server_list, (GDestroyNotify)qmi_helpers_clear_string);

                for (server_list_i = 0; server_list_i < server_list_n_items; server_list_i++) {
                    gchar * server_list_aux;

                    if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &(server_list_aux), NULL))
                        goto qmi_indication_loc_get_predicted_orbits_data_source_output_server_list_out;
                    g_array_insert_val (self->arg_server_list, server_list_i, server_list_aux);
                }
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Server List' TLV", offset);
            }

            self->arg_server_list_set = TRUE;

qmi_indication_loc_get_predicted_orbits_data_source_output_server_list_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_ALLOWED_SIZES, NULL, NULL)) == 0) {
                goto qmi_indication_loc_get_predicted_orbits_data_source_output_allowed_sizes_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_allowed_sizes_max_file_size), NULL))
                goto qmi_indication_loc_get_predicted_orbits_data_source_output_allowed_sizes_out;
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_allowed_sizes_max_part_size), NULL))
                goto qmi_indication_loc_get_predicted_orbits_data_source_output_allowed_sizes_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Allowed Sizes' TLV", offset);
            }

            self->arg_allowed_sizes_set = TRUE;

qmi_indication_loc_get_predicted_orbits_data_source_output_allowed_sizes_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_get_predicted_orbits_data_source_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_get_predicted_orbits_data_source_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Get Predicted Orbits Data Validity */


/* --- Output -- */

struct _QmiIndicationLocGetPredictedOrbitsDataValidityOutput {
    volatile gint ref_count;

    /* Validity Info */
    gboolean arg_validity_info_set;
    guint64 arg_validity_info_start_utc_timestamp;
    guint16 arg_validity_info_duration_hours;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY_OUTPUT_TLV_VALIDITY_INFO 0x10
#define QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_get_predicted_orbits_data_validity_output_get_validity_info (
    QmiIndicationLocGetPredictedOrbitsDataValidityOutput *self,
    guint64 *value_validity_info_start_utc_timestamp,
    guint16 *value_validity_info_duration_hours,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_validity_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Validity Info' was not found in the message");
        return FALSE;
    }

    if (value_validity_info_start_utc_timestamp)
        *value_validity_info_start_utc_timestamp = self->arg_validity_info_start_utc_timestamp;
    if (value_validity_info_duration_hours)
        *value_validity_info_duration_hours = self->arg_validity_info_duration_hours;

    return TRUE;
}

gboolean
qmi_indication_loc_get_predicted_orbits_data_validity_output_get_indication_status (
    QmiIndicationLocGetPredictedOrbitsDataValidityOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_get_predicted_orbits_data_validity_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocGetPredictedOrbitsDataValidityOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_get_predicted_orbits_data_validity_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_get_predicted_orbits_data_validity_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocGetPredictedOrbitsDataValidityOutput *
qmi_indication_loc_get_predicted_orbits_data_validity_output_ref (QmiIndicationLocGetPredictedOrbitsDataValidityOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_get_predicted_orbits_data_validity_output_unref (QmiIndicationLocGetPredictedOrbitsDataValidityOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocGetPredictedOrbitsDataValidityOutput, self);
    }
}

static gchar *
qmi_indication_loc_get_predicted_orbits_data_validity_output_validity_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY_OUTPUT_TLV_VALIDITY_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " start_utc_timestamp = '");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT64_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " duration_hours = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_get_predicted_orbits_data_validity_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_get_predicted_orbits_data_validity_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_get_predicted_orbits_data_validity_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY_OUTPUT_TLV_VALIDITY_INFO:
            tlv_type_str = "Validity Info";
            translated_value = qmi_indication_loc_get_predicted_orbits_data_validity_output_validity_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_get_predicted_orbits_data_validity_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Predicted Orbits Data Validity\" (0x0037)\n",
                            line_prefix);

    {
        struct indication_get_predicted_orbits_data_validity_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_get_predicted_orbits_data_validity_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocGetPredictedOrbitsDataValidityOutput *
qmi_indication_loc_get_predicted_orbits_data_validity_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocGetPredictedOrbitsDataValidityOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY);

    self = g_slice_new0 (QmiIndicationLocGetPredictedOrbitsDataValidityOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY_OUTPUT_TLV_VALIDITY_INFO, NULL, NULL)) == 0) {
                goto qmi_indication_loc_get_predicted_orbits_data_validity_output_validity_info_out;
            }
            if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_validity_info_start_utc_timestamp), NULL))
                goto qmi_indication_loc_get_predicted_orbits_data_validity_output_validity_info_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_validity_info_duration_hours), NULL))
                goto qmi_indication_loc_get_predicted_orbits_data_validity_output_validity_info_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Validity Info' TLV", offset);
            }

            self->arg_validity_info_set = TRUE;

qmi_indication_loc_get_predicted_orbits_data_validity_output_validity_info_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_get_predicted_orbits_data_validity_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_get_predicted_orbits_data_validity_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Inject UTC Time */


/* --- Output -- */

struct _QmiIndicationLocInjectUtcTimeOutput {
    volatile gint ref_count;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_INJECT_UTC_TIME_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_inject_utc_time_output_get_indication_status (
    QmiIndicationLocInjectUtcTimeOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_inject_utc_time_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocInjectUtcTimeOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_inject_utc_time_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_inject_utc_time_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocInjectUtcTimeOutput *
qmi_indication_loc_inject_utc_time_output_ref (QmiIndicationLocInjectUtcTimeOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_inject_utc_time_output_unref (QmiIndicationLocInjectUtcTimeOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocInjectUtcTimeOutput, self);
    }
}

struct indication_inject_utc_time_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_inject_utc_time_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_inject_utc_time_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_INJECT_UTC_TIME_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_inject_utc_time_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Inject UTC Time\" (0x0038)\n",
                            line_prefix);

    {
        struct indication_inject_utc_time_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_inject_utc_time_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocInjectUtcTimeOutput *
qmi_indication_loc_inject_utc_time_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocInjectUtcTimeOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_INJECT_UTC_TIME);

    self = g_slice_new0 (QmiIndicationLocInjectUtcTimeOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_UTC_TIME_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_inject_utc_time_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_inject_utc_time_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Inject Position */


/* --- Output -- */

struct _QmiIndicationLocInjectPositionOutput {
    volatile gint ref_count;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_INJECT_POSITION_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_inject_position_output_get_indication_status (
    QmiIndicationLocInjectPositionOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_inject_position_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocInjectPositionOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_inject_position_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_inject_position_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocInjectPositionOutput *
qmi_indication_loc_inject_position_output_ref (QmiIndicationLocInjectPositionOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_inject_position_output_unref (QmiIndicationLocInjectPositionOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocInjectPositionOutput, self);
    }
}

struct indication_inject_position_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_inject_position_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_inject_position_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_INJECT_POSITION_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_inject_position_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Inject Position\" (0x0039)\n",
                            line_prefix);

    {
        struct indication_inject_position_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_inject_position_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocInjectPositionOutput *
qmi_indication_loc_inject_position_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocInjectPositionOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_INJECT_POSITION);

    self = g_slice_new0 (QmiIndicationLocInjectPositionOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_POSITION_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_inject_position_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_inject_position_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Set Engine Lock */


/* --- Output -- */

struct _QmiIndicationLocSetEngineLockOutput {
    volatile gint ref_count;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_SET_ENGINE_LOCK_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_set_engine_lock_output_get_indication_status (
    QmiIndicationLocSetEngineLockOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_set_engine_lock_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocSetEngineLockOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_set_engine_lock_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_set_engine_lock_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocSetEngineLockOutput *
qmi_indication_loc_set_engine_lock_output_ref (QmiIndicationLocSetEngineLockOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_set_engine_lock_output_unref (QmiIndicationLocSetEngineLockOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocSetEngineLockOutput, self);
    }
}

struct indication_set_engine_lock_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_set_engine_lock_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_set_engine_lock_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_SET_ENGINE_LOCK_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_set_engine_lock_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Engine Lock\" (0x003A)\n",
                            line_prefix);

    {
        struct indication_set_engine_lock_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_set_engine_lock_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocSetEngineLockOutput *
qmi_indication_loc_set_engine_lock_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocSetEngineLockOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_SET_ENGINE_LOCK);

    self = g_slice_new0 (QmiIndicationLocSetEngineLockOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_SET_ENGINE_LOCK_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_set_engine_lock_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_set_engine_lock_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Get Engine Lock */


/* --- Output -- */

struct _QmiIndicationLocGetEngineLockOutput {
    volatile gint ref_count;

    /* Lock Type */
    gboolean arg_lock_type_set;
    guint32 arg_lock_type;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_GET_ENGINE_LOCK_OUTPUT_TLV_LOCK_TYPE 0x10
#define QMI_INDICATION_LOC_GET_ENGINE_LOCK_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_get_engine_lock_output_get_lock_type (
    QmiIndicationLocGetEngineLockOutput *self,
    QmiLocLockType *value_lock_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_lock_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Lock Type' was not found in the message");
        return FALSE;
    }

    if (value_lock_type)
        *value_lock_type = (QmiLocLockType)(self->arg_lock_type);

    return TRUE;
}

gboolean
qmi_indication_loc_get_engine_lock_output_get_indication_status (
    QmiIndicationLocGetEngineLockOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_get_engine_lock_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocGetEngineLockOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_get_engine_lock_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_get_engine_lock_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocGetEngineLockOutput *
qmi_indication_loc_get_engine_lock_output_ref (QmiIndicationLocGetEngineLockOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_get_engine_lock_output_unref (QmiIndicationLocGetEngineLockOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocGetEngineLockOutput, self);
    }
}

static gchar *
qmi_indication_loc_get_engine_lock_output_lock_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_ENGINE_LOCK_OUTPUT_TLV_LOCK_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_LOCK_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_lock_type_get_string ((QmiLocLockType)tmp));
#elif defined  __QMI_LOC_LOCK_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_lock_type_build_string_from_mask ((QmiLocLockType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocLockType
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_get_engine_lock_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_get_engine_lock_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_get_engine_lock_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_GET_ENGINE_LOCK_OUTPUT_TLV_LOCK_TYPE:
            tlv_type_str = "Lock Type";
            translated_value = qmi_indication_loc_get_engine_lock_output_lock_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_GET_ENGINE_LOCK_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_get_engine_lock_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Engine Lock\" (0x003B)\n",
                            line_prefix);

    {
        struct indication_get_engine_lock_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_get_engine_lock_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocGetEngineLockOutput *
qmi_indication_loc_get_engine_lock_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocGetEngineLockOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_GET_ENGINE_LOCK);

    self = g_slice_new0 (QmiIndicationLocGetEngineLockOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_ENGINE_LOCK_OUTPUT_TLV_LOCK_TYPE, NULL, NULL)) == 0) {
                goto qmi_indication_loc_get_engine_lock_output_lock_type_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_loc_get_engine_lock_output_lock_type_out;
                self->arg_lock_type = (QmiLocLockType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Lock Type' TLV", offset);
            }

            self->arg_lock_type_set = TRUE;

qmi_indication_loc_get_engine_lock_output_lock_type_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_ENGINE_LOCK_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_get_engine_lock_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_get_engine_lock_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Set NMEA Types */


/* --- Output -- */

struct _QmiIndicationLocSetNmeaTypesOutput {
    volatile gint ref_count;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_SET_NMEA_TYPES_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_set_nmea_types_output_get_indication_status (
    QmiIndicationLocSetNmeaTypesOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_set_nmea_types_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocSetNmeaTypesOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_set_nmea_types_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_set_nmea_types_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocSetNmeaTypesOutput *
qmi_indication_loc_set_nmea_types_output_ref (QmiIndicationLocSetNmeaTypesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_set_nmea_types_output_unref (QmiIndicationLocSetNmeaTypesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocSetNmeaTypesOutput, self);
    }
}

struct indication_set_nmea_types_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_set_nmea_types_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_set_nmea_types_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_SET_NMEA_TYPES_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_set_nmea_types_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set NMEA Types\" (0x003E)\n",
                            line_prefix);

    {
        struct indication_set_nmea_types_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_set_nmea_types_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocSetNmeaTypesOutput *
qmi_indication_loc_set_nmea_types_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocSetNmeaTypesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_SET_NMEA_TYPES);

    self = g_slice_new0 (QmiIndicationLocSetNmeaTypesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_SET_NMEA_TYPES_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_set_nmea_types_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_set_nmea_types_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Get NMEA Types */


/* --- Output -- */

struct _QmiIndicationLocGetNmeaTypesOutput {
    volatile gint ref_count;

    /* NMEA Types */
    gboolean arg_nmea_types_set;
    guint32 arg_nmea_types;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_GET_NMEA_TYPES_OUTPUT_TLV_NMEA_TYPES 0x10
#define QMI_INDICATION_LOC_GET_NMEA_TYPES_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_get_nmea_types_output_get_nmea_types (
    QmiIndicationLocGetNmeaTypesOutput *self,
    QmiLocNmeaType *value_nmea_types,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_nmea_types_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'NMEA Types' was not found in the message");
        return FALSE;
    }

    if (value_nmea_types)
        *value_nmea_types = (QmiLocNmeaType)(self->arg_nmea_types);

    return TRUE;
}

gboolean
qmi_indication_loc_get_nmea_types_output_get_indication_status (
    QmiIndicationLocGetNmeaTypesOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_get_nmea_types_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocGetNmeaTypesOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_get_nmea_types_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_get_nmea_types_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocGetNmeaTypesOutput *
qmi_indication_loc_get_nmea_types_output_ref (QmiIndicationLocGetNmeaTypesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_get_nmea_types_output_unref (QmiIndicationLocGetNmeaTypesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocGetNmeaTypesOutput, self);
    }
}

static gchar *
qmi_indication_loc_get_nmea_types_output_nmea_types_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_NMEA_TYPES_OUTPUT_TLV_NMEA_TYPES, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_NMEA_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_nmea_type_get_string ((QmiLocNmeaType)tmp));
#elif defined  __QMI_LOC_NMEA_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_nmea_type_build_string_from_mask ((QmiLocNmeaType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocNmeaType
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_get_nmea_types_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_get_nmea_types_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_get_nmea_types_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_GET_NMEA_TYPES_OUTPUT_TLV_NMEA_TYPES:
            tlv_type_str = "NMEA Types";
            translated_value = qmi_indication_loc_get_nmea_types_output_nmea_types_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_GET_NMEA_TYPES_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_get_nmea_types_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get NMEA Types\" (0x003F)\n",
                            line_prefix);

    {
        struct indication_get_nmea_types_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_get_nmea_types_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocGetNmeaTypesOutput *
qmi_indication_loc_get_nmea_types_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocGetNmeaTypesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_GET_NMEA_TYPES);

    self = g_slice_new0 (QmiIndicationLocGetNmeaTypesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_NMEA_TYPES_OUTPUT_TLV_NMEA_TYPES, NULL, NULL)) == 0) {
                goto qmi_indication_loc_get_nmea_types_output_nmea_types_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_loc_get_nmea_types_output_nmea_types_out;
                self->arg_nmea_types = (QmiLocNmeaType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'NMEA Types' TLV", offset);
            }

            self->arg_nmea_types_set = TRUE;

qmi_indication_loc_get_nmea_types_output_nmea_types_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_NMEA_TYPES_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_get_nmea_types_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_get_nmea_types_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Set Server */


/* --- Output -- */

struct _QmiIndicationLocSetServerOutput {
    volatile gint ref_count;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_SET_SERVER_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_set_server_output_get_indication_status (
    QmiIndicationLocSetServerOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_set_server_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocSetServerOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_set_server_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_set_server_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocSetServerOutput *
qmi_indication_loc_set_server_output_ref (QmiIndicationLocSetServerOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_set_server_output_unref (QmiIndicationLocSetServerOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocSetServerOutput, self);
    }
}

struct indication_set_server_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_set_server_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_set_server_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_SET_SERVER_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_set_server_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Server\" (0x0042)\n",
                            line_prefix);

    {
        struct indication_set_server_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_set_server_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocSetServerOutput *
qmi_indication_loc_set_server_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocSetServerOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_SET_SERVER);

    self = g_slice_new0 (QmiIndicationLocSetServerOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_SET_SERVER_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_set_server_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_set_server_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Get Server */


/* --- Output -- */

struct _QmiIndicationLocGetServerOutput {
    volatile gint ref_count;

    /* URL */
    gboolean arg_url_set;
    gchar *arg_url;

    /* IPv6 */
    gboolean arg_ipv6_set;
    GArray *arg_ipv6_ipv6_address;
    guint32 arg_ipv6_ipv6_port;

    /* IPv4 */
    gboolean arg_ipv4_set;
    guint32 arg_ipv4_ipv4_address;
    guint16 arg_ipv4_ipv4_port;

    /* Server Type */
    gboolean arg_server_type_set;
    guint32 arg_server_type;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_URL 0x12
#define QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_IPV6 0x11
#define QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_IPV4 0x10
#define QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_SERVER_TYPE 0x02
#define QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_get_server_output_get_url (
    QmiIndicationLocGetServerOutput *self,
    const gchar **value_url,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_url_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'URL' was not found in the message");
        return FALSE;
    }

    if (value_url)
        *value_url = self->arg_url;

    return TRUE;
}

gboolean
qmi_indication_loc_get_server_output_get_ipv6 (
    QmiIndicationLocGetServerOutput *self,
    GArray **value_ipv6_ipv6_address,
    guint32 *value_ipv6_ipv6_port,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ipv6_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IPv6' was not found in the message");
        return FALSE;
    }

    if (value_ipv6_ipv6_address)
        *value_ipv6_ipv6_address = self->arg_ipv6_ipv6_address;
    if (value_ipv6_ipv6_port)
        *value_ipv6_ipv6_port = self->arg_ipv6_ipv6_port;

    return TRUE;
}

gboolean
qmi_indication_loc_get_server_output_get_ipv4 (
    QmiIndicationLocGetServerOutput *self,
    guint32 *value_ipv4_ipv4_address,
    guint16 *value_ipv4_ipv4_port,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ipv4_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IPv4' was not found in the message");
        return FALSE;
    }

    if (value_ipv4_ipv4_address)
        *value_ipv4_ipv4_address = self->arg_ipv4_ipv4_address;
    if (value_ipv4_ipv4_port)
        *value_ipv4_ipv4_port = self->arg_ipv4_ipv4_port;

    return TRUE;
}

gboolean
qmi_indication_loc_get_server_output_get_server_type (
    QmiIndicationLocGetServerOutput *self,
    QmiLocServerType *value_server_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_server_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Server Type' was not found in the message");
        return FALSE;
    }

    if (value_server_type)
        *value_server_type = (QmiLocServerType)(self->arg_server_type);

    return TRUE;
}

gboolean
qmi_indication_loc_get_server_output_get_indication_status (
    QmiIndicationLocGetServerOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_get_server_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocGetServerOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_get_server_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_get_server_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocGetServerOutput *
qmi_indication_loc_get_server_output_ref (QmiIndicationLocGetServerOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_get_server_output_unref (QmiIndicationLocGetServerOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_url, (GDestroyNotify)g_free);
        g_clear_pointer (&self->arg_ipv6_ipv6_address, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiIndicationLocGetServerOutput, self);
    }
}

static gchar *
qmi_indication_loc_get_server_output_url_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_URL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        g_autofree gchar *tmp = NULL;

        if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 256, &tmp, &error))
            goto out;
        {
            g_string_append (printable, tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_get_server_output_ipv6_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_IPV6, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " ipv6_address = '");
    {
        guint ipv6_address_i;
        guint16 ipv6_address_n_items = 8;


        g_string_append (printable, "{");

        for (ipv6_address_i = 0; ipv6_address_i < ipv6_address_n_items; ipv6_address_i++) {
            g_string_append_printf (printable, " [%u] = '", ipv6_address_i);

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_BIG, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }    g_string_append (printable, "'");
    g_string_append (printable, " ipv6_port = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_get_server_output_ipv4_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_IPV4, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " ipv4_address = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ipv4_port = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_indication_loc_get_server_output_server_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_SERVER_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_SERVER_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_server_type_get_string ((QmiLocServerType)tmp));
#elif defined  __QMI_LOC_SERVER_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_server_type_build_string_from_mask ((QmiLocServerType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocServerType
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_get_server_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_get_server_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_get_server_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_URL:
            tlv_type_str = "URL";
            translated_value = qmi_indication_loc_get_server_output_url_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_IPV6:
            tlv_type_str = "IPv6";
            translated_value = qmi_indication_loc_get_server_output_ipv6_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_IPV4:
            tlv_type_str = "IPv4";
            translated_value = qmi_indication_loc_get_server_output_ipv4_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_SERVER_TYPE:
            tlv_type_str = "Server Type";
            translated_value = qmi_indication_loc_get_server_output_server_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_get_server_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Server\" (0x0043)\n",
                            line_prefix);

    {
        struct indication_get_server_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_get_server_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocGetServerOutput *
qmi_indication_loc_get_server_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocGetServerOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_GET_SERVER);

    self = g_slice_new0 (QmiIndicationLocGetServerOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_URL, NULL, NULL)) == 0) {
                goto qmi_indication_loc_get_server_output_url_out;
            }
            if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 256, &(self->arg_url), NULL))
                goto qmi_indication_loc_get_server_output_url_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'URL' TLV", offset);
            }

            self->arg_url_set = TRUE;

qmi_indication_loc_get_server_output_url_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_IPV6, NULL, NULL)) == 0) {
                goto qmi_indication_loc_get_server_output_ipv6_out;
            }
            {
                guint ipv6_address_i;
                guint16 ipv6_address_n_items = 8;


                self->arg_ipv6_ipv6_address = g_array_sized_new (
                    FALSE,
                    FALSE,
                    sizeof (guint16),
                    (guint)ipv6_address_n_items);

                for (ipv6_address_i = 0; ipv6_address_i < ipv6_address_n_items; ipv6_address_i++) {
                    guint16 ipv6_address_aux;

                    if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_BIG, &(ipv6_address_aux), NULL))
                        goto qmi_indication_loc_get_server_output_ipv6_out;
                    g_array_insert_val (self->arg_ipv6_ipv6_address, ipv6_address_i, ipv6_address_aux);
                }
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_ipv6_ipv6_port), NULL))
                goto qmi_indication_loc_get_server_output_ipv6_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IPv6' TLV", offset);
            }

            self->arg_ipv6_set = TRUE;

qmi_indication_loc_get_server_output_ipv6_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_IPV4, NULL, NULL)) == 0) {
                goto qmi_indication_loc_get_server_output_ipv4_out;
            }
            if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_ipv4_ipv4_address), NULL))
                goto qmi_indication_loc_get_server_output_ipv4_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_ipv4_ipv4_port), NULL))
                goto qmi_indication_loc_get_server_output_ipv4_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'IPv4' TLV", offset);
            }

            self->arg_ipv4_set = TRUE;

qmi_indication_loc_get_server_output_ipv4_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_SERVER_TYPE, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Server Type TLV: ");
                qmi_indication_loc_get_server_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_indication_loc_get_server_output_server_type_out;
                self->arg_server_type = (QmiLocServerType)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Server Type' TLV", offset);
            }

            self->arg_server_type_set = TRUE;

qmi_indication_loc_get_server_output_server_type_out:
            if (!self->arg_server_type_set) {
                qmi_indication_loc_get_server_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_SERVER_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_get_server_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_get_server_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Delete Assistance Data */


/* --- Output -- */

struct _QmiIndicationLocDeleteAssistanceDataOutput {
    volatile gint ref_count;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_DELETE_ASSISTANCE_DATA_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_delete_assistance_data_output_get_indication_status (
    QmiIndicationLocDeleteAssistanceDataOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_delete_assistance_data_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocDeleteAssistanceDataOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_delete_assistance_data_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_delete_assistance_data_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocDeleteAssistanceDataOutput *
qmi_indication_loc_delete_assistance_data_output_ref (QmiIndicationLocDeleteAssistanceDataOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_delete_assistance_data_output_unref (QmiIndicationLocDeleteAssistanceDataOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocDeleteAssistanceDataOutput, self);
    }
}

struct indication_delete_assistance_data_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_delete_assistance_data_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_delete_assistance_data_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_DELETE_ASSISTANCE_DATA_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_delete_assistance_data_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Delete Assistance Data\" (0x0044)\n",
                            line_prefix);

    {
        struct indication_delete_assistance_data_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_delete_assistance_data_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocDeleteAssistanceDataOutput *
qmi_indication_loc_delete_assistance_data_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocDeleteAssistanceDataOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_DELETE_ASSISTANCE_DATA);

    self = g_slice_new0 (QmiIndicationLocDeleteAssistanceDataOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_DELETE_ASSISTANCE_DATA_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_delete_assistance_data_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_delete_assistance_data_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Set Operation Mode */


/* --- Output -- */

struct _QmiIndicationLocSetOperationModeOutput {
    volatile gint ref_count;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_SET_OPERATION_MODE_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_set_operation_mode_output_get_indication_status (
    QmiIndicationLocSetOperationModeOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_set_operation_mode_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocSetOperationModeOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_set_operation_mode_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_set_operation_mode_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocSetOperationModeOutput *
qmi_indication_loc_set_operation_mode_output_ref (QmiIndicationLocSetOperationModeOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_set_operation_mode_output_unref (QmiIndicationLocSetOperationModeOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocSetOperationModeOutput, self);
    }
}

struct indication_set_operation_mode_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_set_operation_mode_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_set_operation_mode_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_SET_OPERATION_MODE_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_set_operation_mode_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Operation Mode\" (0x004A)\n",
                            line_prefix);

    {
        struct indication_set_operation_mode_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_set_operation_mode_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocSetOperationModeOutput *
qmi_indication_loc_set_operation_mode_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocSetOperationModeOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_SET_OPERATION_MODE);

    self = g_slice_new0 (QmiIndicationLocSetOperationModeOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_SET_OPERATION_MODE_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_set_operation_mode_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_set_operation_mode_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Get Operation Mode */


/* --- Output -- */

struct _QmiIndicationLocGetOperationModeOutput {
    volatile gint ref_count;

    /* Operation Mode */
    gboolean arg_operation_mode_set;
    guint32 arg_operation_mode;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_GET_OPERATION_MODE_OUTPUT_TLV_OPERATION_MODE 0x10
#define QMI_INDICATION_LOC_GET_OPERATION_MODE_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_get_operation_mode_output_get_operation_mode (
    QmiIndicationLocGetOperationModeOutput *self,
    QmiLocOperationMode *value_operation_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_operation_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Operation Mode' was not found in the message");
        return FALSE;
    }

    if (value_operation_mode)
        *value_operation_mode = (QmiLocOperationMode)(self->arg_operation_mode);

    return TRUE;
}

gboolean
qmi_indication_loc_get_operation_mode_output_get_indication_status (
    QmiIndicationLocGetOperationModeOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_get_operation_mode_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocGetOperationModeOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_get_operation_mode_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_get_operation_mode_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocGetOperationModeOutput *
qmi_indication_loc_get_operation_mode_output_ref (QmiIndicationLocGetOperationModeOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_get_operation_mode_output_unref (QmiIndicationLocGetOperationModeOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocGetOperationModeOutput, self);
    }
}

static gchar *
qmi_indication_loc_get_operation_mode_output_operation_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_OPERATION_MODE_OUTPUT_TLV_OPERATION_MODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_OPERATION_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_operation_mode_get_string ((QmiLocOperationMode)tmp));
#elif defined  __QMI_LOC_OPERATION_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_operation_mode_build_string_from_mask ((QmiLocOperationMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocOperationMode
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_get_operation_mode_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_get_operation_mode_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_get_operation_mode_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_GET_OPERATION_MODE_OUTPUT_TLV_OPERATION_MODE:
            tlv_type_str = "Operation Mode";
            translated_value = qmi_indication_loc_get_operation_mode_output_operation_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_GET_OPERATION_MODE_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_get_operation_mode_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Operation Mode\" (0x004B)\n",
                            line_prefix);

    {
        struct indication_get_operation_mode_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_get_operation_mode_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocGetOperationModeOutput *
qmi_indication_loc_get_operation_mode_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocGetOperationModeOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_GET_OPERATION_MODE);

    self = g_slice_new0 (QmiIndicationLocGetOperationModeOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_OPERATION_MODE_OUTPUT_TLV_OPERATION_MODE, NULL, NULL)) == 0) {
                goto qmi_indication_loc_get_operation_mode_output_operation_mode_out;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, NULL))
                    goto qmi_indication_loc_get_operation_mode_output_operation_mode_out;
                self->arg_operation_mode = (QmiLocOperationMode)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Operation Mode' TLV", offset);
            }

            self->arg_operation_mode_set = TRUE;

qmi_indication_loc_get_operation_mode_output_operation_mode_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_GET_OPERATION_MODE_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_get_operation_mode_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_get_operation_mode_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* INDICATION: Qmi Indication LOC Inject Xtra Data */


/* --- Output -- */

struct _QmiIndicationLocInjectXtraDataOutput {
    volatile gint ref_count;

    /* Part Number */
    gboolean arg_part_number_set;
    guint16 arg_part_number;

    /* Indication Status */
    gboolean arg_indication_status_set;
    guint32 arg_indication_status;
};

#define QMI_INDICATION_LOC_INJECT_XTRA_DATA_OUTPUT_TLV_PART_NUMBER 0x10
#define QMI_INDICATION_LOC_INJECT_XTRA_DATA_OUTPUT_TLV_INDICATION_STATUS 0x01

gboolean
qmi_indication_loc_inject_xtra_data_output_get_part_number (
    QmiIndicationLocInjectXtraDataOutput *self,
    guint16 *value_part_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_part_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Part Number' was not found in the message");
        return FALSE;
    }

    if (value_part_number)
        *value_part_number = self->arg_part_number;

    return TRUE;
}

gboolean
qmi_indication_loc_inject_xtra_data_output_get_indication_status (
    QmiIndicationLocInjectXtraDataOutput *self,
    QmiLocIndicationStatus *value_indication_status,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_indication_status_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Indication Status' was not found in the message");
        return FALSE;
    }

    if (value_indication_status)
        *value_indication_status = (QmiLocIndicationStatus)(self->arg_indication_status);

    return TRUE;
}

GType
qmi_indication_loc_inject_xtra_data_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiIndicationLocInjectXtraDataOutput"),
                                          (GBoxedCopyFunc) qmi_indication_loc_inject_xtra_data_output_ref,
                                          (GBoxedFreeFunc) qmi_indication_loc_inject_xtra_data_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiIndicationLocInjectXtraDataOutput *
qmi_indication_loc_inject_xtra_data_output_ref (QmiIndicationLocInjectXtraDataOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_indication_loc_inject_xtra_data_output_unref (QmiIndicationLocInjectXtraDataOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiIndicationLocInjectXtraDataOutput, self);
    }
}

static gchar *
qmi_indication_loc_inject_xtra_data_output_part_number_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_XTRA_DATA_OUTPUT_TLV_PART_NUMBER, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct indication_inject_xtra_data_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
indication_inject_xtra_data_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct indication_inject_xtra_data_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    {
        switch (type) {
        case QMI_INDICATION_LOC_INJECT_XTRA_DATA_OUTPUT_TLV_PART_NUMBER:
            tlv_type_str = "Part Number";
            translated_value = qmi_indication_loc_inject_xtra_data_output_part_number_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_INDICATION_LOC_INJECT_XTRA_DATA_OUTPUT_TLV_INDICATION_STATUS:
            tlv_type_str = "Indication Status";
            translated_value = qmi_loc_message_status_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
indication_inject_xtra_data_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Inject Xtra Data\" (0x00A7)\n",
                            line_prefix);

    {
        struct indication_inject_xtra_data_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)indication_inject_xtra_data_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiIndicationLocInjectXtraDataOutput *
qmi_indication_loc_inject_xtra_data_indication_parse (
    QmiMessage *message,
    GError **error)
{
    QmiIndicationLocInjectXtraDataOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_INDICATION_LOC_INJECT_XTRA_DATA);

    self = g_slice_new0 (QmiIndicationLocInjectXtraDataOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_XTRA_DATA_OUTPUT_TLV_PART_NUMBER, NULL, NULL)) == 0) {
                goto qmi_indication_loc_inject_xtra_data_output_part_number_out;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_part_number), NULL))
                goto qmi_indication_loc_inject_xtra_data_output_part_number_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Part Number' TLV", offset);
            }

            self->arg_part_number_set = TRUE;

qmi_indication_loc_inject_xtra_data_output_part_number_out:
            ;

        }
    } while (0);

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_INDICATION_LOC_INJECT_XTRA_DATA_OUTPUT_TLV_INDICATION_STATUS, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Indication Status TLV: ");
                qmi_indication_loc_inject_xtra_data_output_unref (self);
                return NULL;
            }
            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, error))
                    goto qmi_loc_message_status_out;
                self->arg_indication_status = (QmiLocIndicationStatus)tmp;
            }

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Indication Status' TLV", offset);
            }

            self->arg_indication_status_set = TRUE;

qmi_loc_message_status_out:
            if (!self->arg_indication_status_set) {
                qmi_indication_loc_inject_xtra_data_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Register Events */


/* --- Input -- */

struct _QmiMessageLocRegisterEventsInput {
    volatile gint ref_count;

    /* Event Registration Mask */
    gboolean arg_event_registration_mask_set;
    guint64 arg_event_registration_mask;
};

#define QMI_MESSAGE_LOC_REGISTER_EVENTS_INPUT_TLV_EVENT_REGISTRATION_MASK 0x01

gboolean
qmi_message_loc_register_events_input_get_event_registration_mask (
    QmiMessageLocRegisterEventsInput *self,
    QmiLocEventRegistrationFlag *value_event_registration_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_event_registration_mask_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Event Registration Mask' was not found in the message");
        return FALSE;
    }

    if (value_event_registration_mask)
        *value_event_registration_mask = (QmiLocEventRegistrationFlag)(self->arg_event_registration_mask);

    return TRUE;
}

gboolean
qmi_message_loc_register_events_input_set_event_registration_mask (
    QmiMessageLocRegisterEventsInput *self,
    QmiLocEventRegistrationFlag value_event_registration_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_event_registration_mask = (guint64)(value_event_registration_mask);
    self->arg_event_registration_mask_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_register_events_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocRegisterEventsInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_register_events_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_register_events_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocRegisterEventsInput *
qmi_message_loc_register_events_input_ref (QmiMessageLocRegisterEventsInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_register_events_input_unref (QmiMessageLocRegisterEventsInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocRegisterEventsInput, self);
    }
}

QmiMessageLocRegisterEventsInput *
qmi_message_loc_register_events_input_new (void)
{
    QmiMessageLocRegisterEventsInput *self;

    self = g_slice_new0 (QmiMessageLocRegisterEventsInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_register_events_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocRegisterEventsInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_REGISTER_EVENTS);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Register Events' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Event Registration Mask' TLV */
    if (input->arg_event_registration_mask_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_REGISTER_EVENTS_INPUT_TLV_EVENT_REGISTRATION_MASK, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Event Registration Mask': ");
            return NULL;
        }

        {
            guint64 tmp;

            tmp = (guint64) input->arg_event_registration_mask;
            /* Write the guint64 variable to the buffer */
            if (!qmi_message_tlv_write_guint64 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Event Registration Mask': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Event Registration Mask': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Event Registration Mask' in message 'Register Events'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocRegisterEventsOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_REGISTER_EVENTS_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_register_events_output_get_result (
    QmiMessageLocRegisterEventsOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_register_events_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocRegisterEventsOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_register_events_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_register_events_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocRegisterEventsOutput *
qmi_message_loc_register_events_output_ref (QmiMessageLocRegisterEventsOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_register_events_output_unref (QmiMessageLocRegisterEventsOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocRegisterEventsOutput, self);
    }
}

static gchar *
qmi_message_loc_register_events_input_event_registration_mask_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_REGISTER_EVENTS_INPUT_TLV_EVENT_REGISTRATION_MASK, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_EVENT_REGISTRATION_FLAG_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_event_registration_flag_get_string ((QmiLocEventRegistrationFlag)tmp));
#elif defined  __QMI_LOC_EVENT_REGISTRATION_FLAG_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_event_registration_flag_build_string_from_mask ((QmiLocEventRegistrationFlag)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocEventRegistrationFlag
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gboolean
qmi_message_result_validate (
    const guint8 *buffer,
    guint16 buffer_len)
{
    static const guint expected_len = 4;

    if (buffer_len < expected_len) {
        g_warning ("Cannot read the 'Result' TLV: expected '%u' bytes, but only got '%u' bytes",
                   expected_len, buffer_len);
        return FALSE;
    }

    return TRUE;
}

static gchar *
qmi_message_result_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    guint16 error_status;
    guint16 error_code;

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_LOC_REGISTER_EVENTS_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
        return NULL;
    if (!qmi_message_tlv_read_guint16 (self, init_offset, &offset, QMI_ENDIAN_LITTLE, &error_status, NULL))
        return NULL;
    if (!qmi_message_tlv_read_guint16 (self, init_offset, &offset, QMI_ENDIAN_LITTLE, &error_code, NULL))
        return NULL;
    g_warn_if_fail (qmi_message_tlv_read_remaining_size (self, init_offset, offset) == 0);

    if (error_status == QMI_STATUS_SUCCESS)
        return g_strdup ("SUCCESS");

    return g_strdup_printf ("FAILURE: %s", qmi_protocol_error_get_string ((QmiProtocolError) error_code));
}

struct message_register_events_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_register_events_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_register_events_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_REGISTER_EVENTS_INPUT_TLV_EVENT_REGISTRATION_MASK:
            tlv_type_str = "Event Registration Mask";
            translated_value = qmi_message_loc_register_events_input_event_registration_mask_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_REGISTER_EVENTS_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_register_events_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Register Events\" (0x0021)\n",
                            line_prefix);

    {
        struct message_register_events_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_register_events_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocRegisterEventsOutput *
qmi_message_loc_register_events_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocRegisterEventsOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_REGISTER_EVENTS);

    self = g_slice_new0 (QmiMessageLocRegisterEventsOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_REGISTER_EVENTS_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_register_events_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_register_events_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Start */


/* --- Input -- */

struct _QmiMessageLocStartInput {
    volatile gint ref_count;

    /* Minimum Interval between Position Reports */
    gboolean arg_minimum_interval_between_position_reports_set;
    guint32 arg_minimum_interval_between_position_reports;

    /* Intermediate Report State */
    gboolean arg_intermediate_report_state_set;
    guint32 arg_intermediate_report_state;

    /* Fix Recurrence Type */
    gboolean arg_fix_recurrence_type_set;
    guint32 arg_fix_recurrence_type;

    /* Session ID */
    gboolean arg_session_id_set;
    guint8 arg_session_id;
};

#define QMI_MESSAGE_LOC_START_INPUT_TLV_MINIMUM_INTERVAL_BETWEEN_POSITION_REPORTS 0x13
#define QMI_MESSAGE_LOC_START_INPUT_TLV_INTERMEDIATE_REPORT_STATE 0x12
#define QMI_MESSAGE_LOC_START_INPUT_TLV_FIX_RECURRENCE_TYPE 0x10
#define QMI_MESSAGE_LOC_START_INPUT_TLV_SESSION_ID 0x01

gboolean
qmi_message_loc_start_input_get_minimum_interval_between_position_reports (
    QmiMessageLocStartInput *self,
    guint32 *value_minimum_interval_between_position_reports,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_minimum_interval_between_position_reports_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Minimum Interval between Position Reports' was not found in the message");
        return FALSE;
    }

    if (value_minimum_interval_between_position_reports)
        *value_minimum_interval_between_position_reports = self->arg_minimum_interval_between_position_reports;

    return TRUE;
}

gboolean
qmi_message_loc_start_input_set_minimum_interval_between_position_reports (
    QmiMessageLocStartInput *self,
    guint32 value_minimum_interval_between_position_reports,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_minimum_interval_between_position_reports = value_minimum_interval_between_position_reports;
    self->arg_minimum_interval_between_position_reports_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_start_input_get_intermediate_report_state (
    QmiMessageLocStartInput *self,
    QmiLocIntermediateReportState *value_intermediate_report_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_intermediate_report_state_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Intermediate Report State' was not found in the message");
        return FALSE;
    }

    if (value_intermediate_report_state)
        *value_intermediate_report_state = (QmiLocIntermediateReportState)(self->arg_intermediate_report_state);

    return TRUE;
}

gboolean
qmi_message_loc_start_input_set_intermediate_report_state (
    QmiMessageLocStartInput *self,
    QmiLocIntermediateReportState value_intermediate_report_state,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_intermediate_report_state = (guint32)(value_intermediate_report_state);
    self->arg_intermediate_report_state_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_start_input_get_fix_recurrence_type (
    QmiMessageLocStartInput *self,
    QmiLocFixRecurrenceType *value_fix_recurrence_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_fix_recurrence_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Fix Recurrence Type' was not found in the message");
        return FALSE;
    }

    if (value_fix_recurrence_type)
        *value_fix_recurrence_type = (QmiLocFixRecurrenceType)(self->arg_fix_recurrence_type);

    return TRUE;
}

gboolean
qmi_message_loc_start_input_set_fix_recurrence_type (
    QmiMessageLocStartInput *self,
    QmiLocFixRecurrenceType value_fix_recurrence_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_fix_recurrence_type = (guint32)(value_fix_recurrence_type);
    self->arg_fix_recurrence_type_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_start_input_get_session_id (
    QmiMessageLocStartInput *self,
    guint8 *value_session_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session ID' was not found in the message");
        return FALSE;
    }

    if (value_session_id)
        *value_session_id = self->arg_session_id;

    return TRUE;
}

gboolean
qmi_message_loc_start_input_set_session_id (
    QmiMessageLocStartInput *self,
    guint8 value_session_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_id = value_session_id;
    self->arg_session_id_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_start_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocStartInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_start_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_start_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocStartInput *
qmi_message_loc_start_input_ref (QmiMessageLocStartInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_start_input_unref (QmiMessageLocStartInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocStartInput, self);
    }
}

QmiMessageLocStartInput *
qmi_message_loc_start_input_new (void)
{
    QmiMessageLocStartInput *self;

    self = g_slice_new0 (QmiMessageLocStartInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_start_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocStartInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_START);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Start' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Minimum Interval between Position Reports' TLV */
    if (input->arg_minimum_interval_between_position_reports_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_START_INPUT_TLV_MINIMUM_INTERVAL_BETWEEN_POSITION_REPORTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Minimum Interval between Position Reports': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_minimum_interval_between_position_reports, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Minimum Interval between Position Reports': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Minimum Interval between Position Reports': ");
            return NULL;
        }
    }

    /* Try to add the 'Intermediate Report State' TLV */
    if (input->arg_intermediate_report_state_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_START_INPUT_TLV_INTERMEDIATE_REPORT_STATE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Intermediate Report State': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_intermediate_report_state;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Intermediate Report State': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Intermediate Report State': ");
            return NULL;
        }
    }

    /* Try to add the 'Fix Recurrence Type' TLV */
    if (input->arg_fix_recurrence_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_START_INPUT_TLV_FIX_RECURRENCE_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Fix Recurrence Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_fix_recurrence_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Fix Recurrence Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Fix Recurrence Type': ");
            return NULL;
        }
    }

    /* Try to add the 'Session ID' TLV */
    if (input->arg_session_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_START_INPUT_TLV_SESSION_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session ID': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_session_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Session ID': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session ID': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session ID' in message 'Start'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocStartOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_START_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_start_output_get_result (
    QmiMessageLocStartOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_start_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocStartOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_start_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_start_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocStartOutput *
qmi_message_loc_start_output_ref (QmiMessageLocStartOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_start_output_unref (QmiMessageLocStartOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocStartOutput, self);
    }
}

static gchar *
qmi_message_loc_start_input_minimum_interval_between_position_reports_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_START_INPUT_TLV_MINIMUM_INTERVAL_BETWEEN_POSITION_REPORTS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_start_input_intermediate_report_state_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_START_INPUT_TLV_INTERMEDIATE_REPORT_STATE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_INTERMEDIATE_REPORT_STATE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_intermediate_report_state_get_string ((QmiLocIntermediateReportState)tmp));
#elif defined  __QMI_LOC_INTERMEDIATE_REPORT_STATE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_intermediate_report_state_build_string_from_mask ((QmiLocIntermediateReportState)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocIntermediateReportState
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_start_input_fix_recurrence_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_START_INPUT_TLV_FIX_RECURRENCE_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_FIX_RECURRENCE_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_fix_recurrence_type_get_string ((QmiLocFixRecurrenceType)tmp));
#elif defined  __QMI_LOC_FIX_RECURRENCE_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_fix_recurrence_type_build_string_from_mask ((QmiLocFixRecurrenceType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocFixRecurrenceType
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_start_input_session_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_START_INPUT_TLV_SESSION_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_start_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_start_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_start_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_START_INPUT_TLV_MINIMUM_INTERVAL_BETWEEN_POSITION_REPORTS:
            tlv_type_str = "Minimum Interval between Position Reports";
            translated_value = qmi_message_loc_start_input_minimum_interval_between_position_reports_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_START_INPUT_TLV_INTERMEDIATE_REPORT_STATE:
            tlv_type_str = "Intermediate Report State";
            translated_value = qmi_message_loc_start_input_intermediate_report_state_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_START_INPUT_TLV_FIX_RECURRENCE_TYPE:
            tlv_type_str = "Fix Recurrence Type";
            translated_value = qmi_message_loc_start_input_fix_recurrence_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_START_INPUT_TLV_SESSION_ID:
            tlv_type_str = "Session ID";
            translated_value = qmi_message_loc_start_input_session_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_START_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_start_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Start\" (0x0022)\n",
                            line_prefix);

    {
        struct message_start_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_start_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocStartOutput *
qmi_message_loc_start_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocStartOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_START);

    self = g_slice_new0 (QmiMessageLocStartOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_START_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_start_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_start_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Stop */


/* --- Input -- */

struct _QmiMessageLocStopInput {
    volatile gint ref_count;

    /* Session ID */
    gboolean arg_session_id_set;
    guint8 arg_session_id;
};

#define QMI_MESSAGE_LOC_STOP_INPUT_TLV_SESSION_ID 0x01

gboolean
qmi_message_loc_stop_input_get_session_id (
    QmiMessageLocStopInput *self,
    guint8 *value_session_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_session_id_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Session ID' was not found in the message");
        return FALSE;
    }

    if (value_session_id)
        *value_session_id = self->arg_session_id;

    return TRUE;
}

gboolean
qmi_message_loc_stop_input_set_session_id (
    QmiMessageLocStopInput *self,
    guint8 value_session_id,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_session_id = value_session_id;
    self->arg_session_id_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_stop_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocStopInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_stop_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_stop_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocStopInput *
qmi_message_loc_stop_input_ref (QmiMessageLocStopInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_stop_input_unref (QmiMessageLocStopInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocStopInput, self);
    }
}

QmiMessageLocStopInput *
qmi_message_loc_stop_input_new (void)
{
    QmiMessageLocStopInput *self;

    self = g_slice_new0 (QmiMessageLocStopInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_stop_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocStopInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_STOP);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Stop' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Session ID' TLV */
    if (input->arg_session_id_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_STOP_INPUT_TLV_SESSION_ID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Session ID': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_session_id, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Session ID': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Session ID': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Session ID' in message 'Stop'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocStopOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_STOP_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_stop_output_get_result (
    QmiMessageLocStopOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_stop_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocStopOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_stop_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_stop_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocStopOutput *
qmi_message_loc_stop_output_ref (QmiMessageLocStopOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_stop_output_unref (QmiMessageLocStopOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocStopOutput, self);
    }
}

static gchar *
qmi_message_loc_stop_input_session_id_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_STOP_INPUT_TLV_SESSION_ID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_stop_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_stop_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_stop_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_STOP_INPUT_TLV_SESSION_ID:
            tlv_type_str = "Session ID";
            translated_value = qmi_message_loc_stop_input_session_id_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_STOP_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_stop_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Stop\" (0x0023)\n",
                            line_prefix);

    {
        struct message_stop_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_stop_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocStopOutput *
qmi_message_loc_stop_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocStopOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_STOP);

    self = g_slice_new0 (QmiMessageLocStopOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_STOP_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_stop_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_stop_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Inject Predicted Orbits Data */


/* --- Input -- */

struct _QmiMessageLocInjectPredictedOrbitsDataInput {
    volatile gint ref_count;

    /* Format Type */
    gboolean arg_format_type_set;
    guint32 arg_format_type;

    /* Part Data */
    gboolean arg_part_data_set;
    GArray *arg_part_data;

    /* Part Number */
    gboolean arg_part_number_set;
    guint16 arg_part_number;

    /* Total Parts */
    gboolean arg_total_parts_set;
    guint16 arg_total_parts;

    /* Total Size */
    gboolean arg_total_size_set;
    guint32 arg_total_size;
};

#define QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_FORMAT_TYPE 0x10
#define QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_PART_DATA 0x04
#define QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_PART_NUMBER 0x03
#define QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_TOTAL_PARTS 0x02
#define QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_TOTAL_SIZE 0x01

gboolean
qmi_message_loc_inject_predicted_orbits_data_input_get_format_type (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    QmiLocPredictedOrbitsDataFormat *value_format_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_format_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Format Type' was not found in the message");
        return FALSE;
    }

    if (value_format_type)
        *value_format_type = (QmiLocPredictedOrbitsDataFormat)(self->arg_format_type);

    return TRUE;
}

gboolean
qmi_message_loc_inject_predicted_orbits_data_input_set_format_type (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    QmiLocPredictedOrbitsDataFormat value_format_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_format_type = (guint32)(value_format_type);
    self->arg_format_type_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_predicted_orbits_data_input_get_part_data (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    GArray **value_part_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_part_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Part Data' was not found in the message");
        return FALSE;
    }

    if (value_part_data)
        *value_part_data = self->arg_part_data;

    return TRUE;
}

gboolean
qmi_message_loc_inject_predicted_orbits_data_input_set_part_data (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    GArray *value_part_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_part_data, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_part_data, (GDestroyNotify)g_ptr_array_unref);
    self->arg_part_data = g_array_ref (value_part_data);
    self->arg_part_data_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_predicted_orbits_data_input_get_part_number (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    guint16 *value_part_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_part_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Part Number' was not found in the message");
        return FALSE;
    }

    if (value_part_number)
        *value_part_number = self->arg_part_number;

    return TRUE;
}

gboolean
qmi_message_loc_inject_predicted_orbits_data_input_set_part_number (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    guint16 value_part_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_part_number = value_part_number;
    self->arg_part_number_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_predicted_orbits_data_input_get_total_parts (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    guint16 *value_total_parts,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_total_parts_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Total Parts' was not found in the message");
        return FALSE;
    }

    if (value_total_parts)
        *value_total_parts = self->arg_total_parts;

    return TRUE;
}

gboolean
qmi_message_loc_inject_predicted_orbits_data_input_set_total_parts (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    guint16 value_total_parts,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_total_parts = value_total_parts;
    self->arg_total_parts_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_predicted_orbits_data_input_get_total_size (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    guint32 *value_total_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_total_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Total Size' was not found in the message");
        return FALSE;
    }

    if (value_total_size)
        *value_total_size = self->arg_total_size;

    return TRUE;
}

gboolean
qmi_message_loc_inject_predicted_orbits_data_input_set_total_size (
    QmiMessageLocInjectPredictedOrbitsDataInput *self,
    guint32 value_total_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_total_size = value_total_size;
    self->arg_total_size_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_inject_predicted_orbits_data_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocInjectPredictedOrbitsDataInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_inject_predicted_orbits_data_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_inject_predicted_orbits_data_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocInjectPredictedOrbitsDataInput *
qmi_message_loc_inject_predicted_orbits_data_input_ref (QmiMessageLocInjectPredictedOrbitsDataInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_inject_predicted_orbits_data_input_unref (QmiMessageLocInjectPredictedOrbitsDataInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_part_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageLocInjectPredictedOrbitsDataInput, self);
    }
}

QmiMessageLocInjectPredictedOrbitsDataInput *
qmi_message_loc_inject_predicted_orbits_data_input_new (void)
{
    QmiMessageLocInjectPredictedOrbitsDataInput *self;

    self = g_slice_new0 (QmiMessageLocInjectPredictedOrbitsDataInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_inject_predicted_orbits_data_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocInjectPredictedOrbitsDataInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Inject Predicted Orbits Data' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Format Type' TLV */
    if (input->arg_format_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_FORMAT_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Format Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_format_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Format Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Format Type': ");
            return NULL;
        }
    }

    /* Try to add the 'Part Data' TLV */
    if (input->arg_part_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_PART_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Part Data': ");
            return NULL;
        }

        {
            guint part_data_i;
            guint16 part_data_n_items;

            /* Write the number of items in the array first */
            part_data_n_items = (guint16) input->arg_part_data->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, part_data_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Part Data': ");
                return NULL;
            }

            for (part_data_i = 0; part_data_i < input->arg_part_data->len; part_data_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_part_data, guint8,part_data_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Part Data': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Part Data': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Part Data' in message 'Inject Predicted Orbits Data'");
        return NULL;
    }

    /* Try to add the 'Part Number' TLV */
    if (input->arg_part_number_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_PART_NUMBER, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Part Number': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_part_number, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Part Number': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Part Number': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Part Number' in message 'Inject Predicted Orbits Data'");
        return NULL;
    }

    /* Try to add the 'Total Parts' TLV */
    if (input->arg_total_parts_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_TOTAL_PARTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Total Parts': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_total_parts, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Total Parts': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Total Parts': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Total Parts' in message 'Inject Predicted Orbits Data'");
        return NULL;
    }

    /* Try to add the 'Total Size' TLV */
    if (input->arg_total_size_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_TOTAL_SIZE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Total Size': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_total_size, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Total Size': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Total Size': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Total Size' in message 'Inject Predicted Orbits Data'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocInjectPredictedOrbitsDataOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_inject_predicted_orbits_data_output_get_result (
    QmiMessageLocInjectPredictedOrbitsDataOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_inject_predicted_orbits_data_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocInjectPredictedOrbitsDataOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_inject_predicted_orbits_data_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_inject_predicted_orbits_data_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocInjectPredictedOrbitsDataOutput *
qmi_message_loc_inject_predicted_orbits_data_output_ref (QmiMessageLocInjectPredictedOrbitsDataOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_inject_predicted_orbits_data_output_unref (QmiMessageLocInjectPredictedOrbitsDataOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocInjectPredictedOrbitsDataOutput, self);
    }
}

static gchar *
qmi_message_loc_inject_predicted_orbits_data_input_format_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_FORMAT_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_PREDICTED_ORBITS_DATA_FORMAT_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_predicted_orbits_data_format_get_string ((QmiLocPredictedOrbitsDataFormat)tmp));
#elif defined  __QMI_LOC_PREDICTED_ORBITS_DATA_FORMAT_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_predicted_orbits_data_format_build_string_from_mask ((QmiLocPredictedOrbitsDataFormat)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocPredictedOrbitsDataFormat
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_predicted_orbits_data_input_part_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_PART_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint part_data_i;
        guint16 part_data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(part_data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (part_data_i = 0; part_data_i < part_data_n_items; part_data_i++) {
            g_string_append_printf (printable, " [%u] = '", part_data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }
    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_predicted_orbits_data_input_part_number_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_PART_NUMBER, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_predicted_orbits_data_input_total_parts_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_TOTAL_PARTS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_predicted_orbits_data_input_total_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_TOTAL_SIZE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_inject_predicted_orbits_data_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_inject_predicted_orbits_data_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_inject_predicted_orbits_data_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_FORMAT_TYPE:
            tlv_type_str = "Format Type";
            translated_value = qmi_message_loc_inject_predicted_orbits_data_input_format_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_PART_DATA:
            tlv_type_str = "Part Data";
            translated_value = qmi_message_loc_inject_predicted_orbits_data_input_part_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_PART_NUMBER:
            tlv_type_str = "Part Number";
            translated_value = qmi_message_loc_inject_predicted_orbits_data_input_part_number_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_TOTAL_PARTS:
            tlv_type_str = "Total Parts";
            translated_value = qmi_message_loc_inject_predicted_orbits_data_input_total_parts_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_INPUT_TLV_TOTAL_SIZE:
            tlv_type_str = "Total Size";
            translated_value = qmi_message_loc_inject_predicted_orbits_data_input_total_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_inject_predicted_orbits_data_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Inject Predicted Orbits Data\" (0x0035)\n",
                            line_prefix);

    {
        struct message_inject_predicted_orbits_data_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_inject_predicted_orbits_data_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocInjectPredictedOrbitsDataOutput *
qmi_message_loc_inject_predicted_orbits_data_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocInjectPredictedOrbitsDataOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA);

    self = g_slice_new0 (QmiMessageLocInjectPredictedOrbitsDataOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_inject_predicted_orbits_data_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_inject_predicted_orbits_data_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Get Predicted Orbits Data Source */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_loc_get_predicted_orbits_data_source_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocGetPredictedOrbitsDataSourceOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_get_predicted_orbits_data_source_output_get_result (
    QmiMessageLocGetPredictedOrbitsDataSourceOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_get_predicted_orbits_data_source_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocGetPredictedOrbitsDataSourceOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_get_predicted_orbits_data_source_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_get_predicted_orbits_data_source_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocGetPredictedOrbitsDataSourceOutput *
qmi_message_loc_get_predicted_orbits_data_source_output_ref (QmiMessageLocGetPredictedOrbitsDataSourceOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_get_predicted_orbits_data_source_output_unref (QmiMessageLocGetPredictedOrbitsDataSourceOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocGetPredictedOrbitsDataSourceOutput, self);
    }
}

struct message_get_predicted_orbits_data_source_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_predicted_orbits_data_source_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_predicted_orbits_data_source_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_get_predicted_orbits_data_source_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Predicted Orbits Data Source\" (0x0036)\n",
                            line_prefix);

    {
        struct message_get_predicted_orbits_data_source_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_predicted_orbits_data_source_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocGetPredictedOrbitsDataSourceOutput *
qmi_message_loc_get_predicted_orbits_data_source_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocGetPredictedOrbitsDataSourceOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE);

    self = g_slice_new0 (QmiMessageLocGetPredictedOrbitsDataSourceOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_get_predicted_orbits_data_source_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_get_predicted_orbits_data_source_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Get Predicted Orbits Data Validity */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_loc_get_predicted_orbits_data_validity_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocGetPredictedOrbitsDataValidityOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_get_predicted_orbits_data_validity_output_get_result (
    QmiMessageLocGetPredictedOrbitsDataValidityOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_get_predicted_orbits_data_validity_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocGetPredictedOrbitsDataValidityOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_get_predicted_orbits_data_validity_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_get_predicted_orbits_data_validity_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocGetPredictedOrbitsDataValidityOutput *
qmi_message_loc_get_predicted_orbits_data_validity_output_ref (QmiMessageLocGetPredictedOrbitsDataValidityOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_get_predicted_orbits_data_validity_output_unref (QmiMessageLocGetPredictedOrbitsDataValidityOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocGetPredictedOrbitsDataValidityOutput, self);
    }
}

struct message_get_predicted_orbits_data_validity_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_predicted_orbits_data_validity_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_predicted_orbits_data_validity_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_get_predicted_orbits_data_validity_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Predicted Orbits Data Validity\" (0x0037)\n",
                            line_prefix);

    {
        struct message_get_predicted_orbits_data_validity_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_predicted_orbits_data_validity_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocGetPredictedOrbitsDataValidityOutput *
qmi_message_loc_get_predicted_orbits_data_validity_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocGetPredictedOrbitsDataValidityOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY);

    self = g_slice_new0 (QmiMessageLocGetPredictedOrbitsDataValidityOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_get_predicted_orbits_data_validity_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_get_predicted_orbits_data_validity_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Inject UTC Time */


/* --- Input -- */

struct _QmiMessageLocInjectUtcTimeInput {
    volatile gint ref_count;

    /* Time Source */
    gboolean arg_time_source_set;
    gint32 arg_time_source;

    /* Time Uncertainty */
    gboolean arg_time_uncertainty_set;
    guint32 arg_time_uncertainty;

    /* UTC Time */
    gboolean arg_utc_time_set;
    guint64 arg_utc_time;
};

#define QMI_MESSAGE_LOC_INJECT_UTC_TIME_INPUT_TLV_TIME_SOURCE 0x10
#define QMI_MESSAGE_LOC_INJECT_UTC_TIME_INPUT_TLV_TIME_UNCERTAINTY 0x02
#define QMI_MESSAGE_LOC_INJECT_UTC_TIME_INPUT_TLV_UTC_TIME 0x01

gboolean
qmi_message_loc_inject_utc_time_input_get_time_source (
    QmiMessageLocInjectUtcTimeInput *self,
    QmiLocInjectedTimeSource *value_time_source,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_time_source_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Time Source' was not found in the message");
        return FALSE;
    }

    if (value_time_source)
        *value_time_source = (QmiLocInjectedTimeSource)(self->arg_time_source);

    return TRUE;
}

gboolean
qmi_message_loc_inject_utc_time_input_set_time_source (
    QmiMessageLocInjectUtcTimeInput *self,
    QmiLocInjectedTimeSource value_time_source,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_time_source = (gint32)(value_time_source);
    self->arg_time_source_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_utc_time_input_get_time_uncertainty (
    QmiMessageLocInjectUtcTimeInput *self,
    guint32 *value_time_uncertainty,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_time_uncertainty_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Time Uncertainty' was not found in the message");
        return FALSE;
    }

    if (value_time_uncertainty)
        *value_time_uncertainty = self->arg_time_uncertainty;

    return TRUE;
}

gboolean
qmi_message_loc_inject_utc_time_input_set_time_uncertainty (
    QmiMessageLocInjectUtcTimeInput *self,
    guint32 value_time_uncertainty,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_time_uncertainty = value_time_uncertainty;
    self->arg_time_uncertainty_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_utc_time_input_get_utc_time (
    QmiMessageLocInjectUtcTimeInput *self,
    guint64 *value_utc_time,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_utc_time_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'UTC Time' was not found in the message");
        return FALSE;
    }

    if (value_utc_time)
        *value_utc_time = self->arg_utc_time;

    return TRUE;
}

gboolean
qmi_message_loc_inject_utc_time_input_set_utc_time (
    QmiMessageLocInjectUtcTimeInput *self,
    guint64 value_utc_time,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_utc_time = value_utc_time;
    self->arg_utc_time_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_inject_utc_time_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocInjectUtcTimeInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_inject_utc_time_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_inject_utc_time_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocInjectUtcTimeInput *
qmi_message_loc_inject_utc_time_input_ref (QmiMessageLocInjectUtcTimeInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_inject_utc_time_input_unref (QmiMessageLocInjectUtcTimeInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocInjectUtcTimeInput, self);
    }
}

QmiMessageLocInjectUtcTimeInput *
qmi_message_loc_inject_utc_time_input_new (void)
{
    QmiMessageLocInjectUtcTimeInput *self;

    self = g_slice_new0 (QmiMessageLocInjectUtcTimeInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_inject_utc_time_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocInjectUtcTimeInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_INJECT_UTC_TIME);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Inject UTC Time' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Time Source' TLV */
    if (input->arg_time_source_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_UTC_TIME_INPUT_TLV_TIME_SOURCE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Time Source': ");
            return NULL;
        }

        {
            gint32 tmp;

            tmp = (gint32) input->arg_time_source;
            /* Write the gint32 variable to the buffer */
            if (!qmi_message_tlv_write_gint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Time Source': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Time Source': ");
            return NULL;
        }
    }

    /* Try to add the 'Time Uncertainty' TLV */
    if (input->arg_time_uncertainty_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_UTC_TIME_INPUT_TLV_TIME_UNCERTAINTY, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Time Uncertainty': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_time_uncertainty, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Time Uncertainty': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Time Uncertainty': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Time Uncertainty' in message 'Inject UTC Time'");
        return NULL;
    }

    /* Try to add the 'UTC Time' TLV */
    if (input->arg_utc_time_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_UTC_TIME_INPUT_TLV_UTC_TIME, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'UTC Time': ");
            return NULL;
        }

        /* Write the guint64 variable to the buffer */
        if (!qmi_message_tlv_write_guint64 (self, QMI_ENDIAN_LITTLE, input->arg_utc_time, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'UTC Time': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'UTC Time': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'UTC Time' in message 'Inject UTC Time'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocInjectUtcTimeOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_INJECT_UTC_TIME_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_inject_utc_time_output_get_result (
    QmiMessageLocInjectUtcTimeOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_inject_utc_time_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocInjectUtcTimeOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_inject_utc_time_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_inject_utc_time_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocInjectUtcTimeOutput *
qmi_message_loc_inject_utc_time_output_ref (QmiMessageLocInjectUtcTimeOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_inject_utc_time_output_unref (QmiMessageLocInjectUtcTimeOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocInjectUtcTimeOutput, self);
    }
}

static gchar *
qmi_message_loc_inject_utc_time_input_time_source_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_UTC_TIME_INPUT_TLV_TIME_SOURCE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gint32 tmp;

        if (!qmi_message_tlv_read_gint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_INJECTED_TIME_SOURCE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_injected_time_source_get_string ((QmiLocInjectedTimeSource)tmp));
#elif defined  __QMI_LOC_INJECTED_TIME_SOURCE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_injected_time_source_build_string_from_mask ((QmiLocInjectedTimeSource)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocInjectedTimeSource
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_utc_time_input_time_uncertainty_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_UTC_TIME_INPUT_TLV_TIME_UNCERTAINTY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_utc_time_input_utc_time_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_UTC_TIME_INPUT_TLV_UTC_TIME, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT64_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_inject_utc_time_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_inject_utc_time_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_inject_utc_time_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_INJECT_UTC_TIME_INPUT_TLV_TIME_SOURCE:
            tlv_type_str = "Time Source";
            translated_value = qmi_message_loc_inject_utc_time_input_time_source_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_UTC_TIME_INPUT_TLV_TIME_UNCERTAINTY:
            tlv_type_str = "Time Uncertainty";
            translated_value = qmi_message_loc_inject_utc_time_input_time_uncertainty_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_UTC_TIME_INPUT_TLV_UTC_TIME:
            tlv_type_str = "UTC Time";
            translated_value = qmi_message_loc_inject_utc_time_input_utc_time_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_INJECT_UTC_TIME_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_inject_utc_time_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Inject UTC Time\" (0x0038)\n",
                            line_prefix);

    {
        struct message_inject_utc_time_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_inject_utc_time_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocInjectUtcTimeOutput *
qmi_message_loc_inject_utc_time_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocInjectUtcTimeOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_INJECT_UTC_TIME);

    self = g_slice_new0 (QmiMessageLocInjectUtcTimeOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_UTC_TIME_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_inject_utc_time_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_inject_utc_time_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Inject Position */


/* --- Input -- */

struct _QmiMessageLocInjectPositionInput {
    volatile gint ref_count;

    /* Number Satellites in Fix */
    gboolean arg_number_satellites_in_fix_set;
    guint8 arg_number_satellites_in_fix;

    /* Satellites Used */
    gboolean arg_satellites_used_set;
    GArray *arg_satellites_used;

    /* Speed Uncertainty East North Up */
    gboolean arg_speed_uncertainty_east_north_up_set;
    GArray *arg_speed_uncertainty_east_north_up;

    /* Speed East North Up */
    gboolean arg_speed_east_north_up_set;
    GArray *arg_speed_east_north_up;

    /* Time Uncertainty */
    gboolean arg_time_uncertainty_set;
    gfloat arg_time_uncertainty;

    /* GPS Date Time */
    gboolean arg_gps_date_time_set;
    guint16 arg_gps_date_time_gps_weeks;
    guint32 arg_gps_date_time_gps_time_of_week_milliseconds;

    /* Position Source Provider */
    gboolean arg_position_source_provider_set;
    guint32 arg_position_source_provider;

    /* Requested Position Injection */
    gboolean arg_requested_position_injection_set;
    guint8 arg_requested_position_injection;

    /* Raw Horizontal Confidence */
    gboolean arg_raw_horizontal_confidence_set;
    guint8 arg_raw_horizontal_confidence;

    /* Raw Horizontal Uncertainty Circular */
    gboolean arg_raw_horizontal_uncertainty_circular_set;
    gfloat arg_raw_horizontal_uncertainty_circular;

    /* Position Source */
    gboolean arg_position_source_set;
    guint32 arg_position_source;

    /* Timestamp Age */
    gboolean arg_timestamp_age_set;
    guint32 arg_timestamp_age;

    /* UTC Timestamp */
    gboolean arg_utc_timestamp_set;
    guint64 arg_utc_timestamp;

    /* Altitude Source */
    gboolean arg_altitude_source_set;
    guint32 arg_altitude_source_altitude_source;
    guint32 arg_altitude_source_altitude_dependency;
    guint32 arg_altitude_source_altitude_uncertainty;

    /* Vertical Reliability */
    gboolean arg_vertical_reliability_set;
    guint32 arg_vertical_reliability;

    /* Vertical Confidence */
    gboolean arg_vertical_confidence_set;
    guint8 arg_vertical_confidence;

    /* Vertical Uncertainty */
    gboolean arg_vertical_uncertainty_set;
    gfloat arg_vertical_uncertainty;

    /* Altitude from Sealevel */
    gboolean arg_altitude_from_sealevel_set;
    gfloat arg_altitude_from_sealevel;

    /* Altitude from Ellipsoid */
    gboolean arg_altitude_from_ellipsoid_set;
    gfloat arg_altitude_from_ellipsoid;

    /* Horizontal Reliability */
    gboolean arg_horizontal_reliability_set;
    guint32 arg_horizontal_reliability;

    /* Horizontal Confidence */
    gboolean arg_horizontal_confidence_set;
    guint8 arg_horizontal_confidence;

    /* Horizontal Uncertainty Circular */
    gboolean arg_horizontal_uncertainty_circular_set;
    gfloat arg_horizontal_uncertainty_circular;

    /* Longitude */
    gboolean arg_longitude_set;
    gdouble arg_longitude;

    /* Latitude */
    gboolean arg_latitude_set;
    gdouble arg_latitude;
};

#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_NUMBER_SATELLITES_IN_FIX 0x27
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_SATELLITES_USED 0x26
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_SPEED_UNCERTAINTY_EAST_NORTH_UP 0x25
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_SPEED_EAST_NORTH_UP 0x24
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_TIME_UNCERTAINTY 0x23
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_GPS_DATE_TIME 0x22
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_POSITION_SOURCE_PROVIDER 0x21
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_REQUESTED_POSITION_INJECTION 0x20
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_RAW_HORIZONTAL_CONFIDENCE 0x1F
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_RAW_HORIZONTAL_UNCERTAINTY_CIRCULAR 0x1E
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_POSITION_SOURCE 0x1D
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_TIMESTAMP_AGE 0x1C
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_UTC_TIMESTAMP 0x1B
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_ALTITUDE_SOURCE 0x1A
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_VERTICAL_RELIABILITY 0x19
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_VERTICAL_CONFIDENCE 0x18
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_VERTICAL_UNCERTAINTY 0x17
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_ALTITUDE_FROM_SEALEVEL 0x16
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_ALTITUDE_FROM_ELLIPSOID 0x15
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_HORIZONTAL_RELIABILITY 0x14
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_HORIZONTAL_CONFIDENCE 0x13
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_HORIZONTAL_UNCERTAINTY_CIRCULAR 0x12
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_LONGITUDE 0x11
#define QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_LATITUDE 0x10

gboolean
qmi_message_loc_inject_position_input_get_number_satellites_in_fix (
    QmiMessageLocInjectPositionInput *self,
    guint8 *value_number_satellites_in_fix,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_number_satellites_in_fix_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Number Satellites in Fix' was not found in the message");
        return FALSE;
    }

    if (value_number_satellites_in_fix)
        *value_number_satellites_in_fix = self->arg_number_satellites_in_fix;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_number_satellites_in_fix (
    QmiMessageLocInjectPositionInput *self,
    guint8 value_number_satellites_in_fix,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_number_satellites_in_fix = value_number_satellites_in_fix;
    self->arg_number_satellites_in_fix_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_satellites_used (
    QmiMessageLocInjectPositionInput *self,
    GArray **value_satellites_used,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_satellites_used_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Satellites Used' was not found in the message");
        return FALSE;
    }

    if (value_satellites_used)
        *value_satellites_used = self->arg_satellites_used;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_satellites_used (
    QmiMessageLocInjectPositionInput *self,
    GArray *value_satellites_used,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_satellites_used, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_satellites_used, (GDestroyNotify)g_ptr_array_unref);
    self->arg_satellites_used = g_array_ref (value_satellites_used);
    self->arg_satellites_used_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_speed_uncertainty_east_north_up (
    QmiMessageLocInjectPositionInput *self,
    GArray **value_speed_uncertainty_east_north_up,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_speed_uncertainty_east_north_up_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Speed Uncertainty East North Up' was not found in the message");
        return FALSE;
    }

    if (value_speed_uncertainty_east_north_up)
        *value_speed_uncertainty_east_north_up = self->arg_speed_uncertainty_east_north_up;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_speed_uncertainty_east_north_up (
    QmiMessageLocInjectPositionInput *self,
    GArray *value_speed_uncertainty_east_north_up,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_speed_uncertainty_east_north_up, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_speed_uncertainty_east_north_up, (GDestroyNotify)g_ptr_array_unref);
    self->arg_speed_uncertainty_east_north_up = g_array_ref (value_speed_uncertainty_east_north_up);
    self->arg_speed_uncertainty_east_north_up_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_speed_east_north_up (
    QmiMessageLocInjectPositionInput *self,
    GArray **value_speed_east_north_up,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_speed_east_north_up_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Speed East North Up' was not found in the message");
        return FALSE;
    }

    if (value_speed_east_north_up)
        *value_speed_east_north_up = self->arg_speed_east_north_up;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_speed_east_north_up (
    QmiMessageLocInjectPositionInput *self,
    GArray *value_speed_east_north_up,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_speed_east_north_up, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_speed_east_north_up, (GDestroyNotify)g_ptr_array_unref);
    self->arg_speed_east_north_up = g_array_ref (value_speed_east_north_up);
    self->arg_speed_east_north_up_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_time_uncertainty (
    QmiMessageLocInjectPositionInput *self,
    gfloat *value_time_uncertainty,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_time_uncertainty_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Time Uncertainty' was not found in the message");
        return FALSE;
    }

    if (value_time_uncertainty)
        *value_time_uncertainty = self->arg_time_uncertainty;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_time_uncertainty (
    QmiMessageLocInjectPositionInput *self,
    gfloat value_time_uncertainty,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_time_uncertainty = value_time_uncertainty;
    self->arg_time_uncertainty_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_gps_date_time (
    QmiMessageLocInjectPositionInput *self,
    guint16 *value_gps_date_time_gps_weeks,
    guint32 *value_gps_date_time_gps_time_of_week_milliseconds,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_gps_date_time_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'GPS Date Time' was not found in the message");
        return FALSE;
    }

    if (value_gps_date_time_gps_weeks)
        *value_gps_date_time_gps_weeks = self->arg_gps_date_time_gps_weeks;
    if (value_gps_date_time_gps_time_of_week_milliseconds)
        *value_gps_date_time_gps_time_of_week_milliseconds = self->arg_gps_date_time_gps_time_of_week_milliseconds;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_gps_date_time (
    QmiMessageLocInjectPositionInput *self,
    guint16 value_gps_date_time_gps_weeks,
    guint32 value_gps_date_time_gps_time_of_week_milliseconds,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_gps_date_time_gps_weeks = value_gps_date_time_gps_weeks;
    self->arg_gps_date_time_gps_time_of_week_milliseconds = value_gps_date_time_gps_time_of_week_milliseconds;
    self->arg_gps_date_time_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_position_source_provider (
    QmiMessageLocInjectPositionInput *self,
    QmiLocPositionSourceProvider *value_position_source_provider,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_position_source_provider_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Position Source Provider' was not found in the message");
        return FALSE;
    }

    if (value_position_source_provider)
        *value_position_source_provider = (QmiLocPositionSourceProvider)(self->arg_position_source_provider);

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_position_source_provider (
    QmiMessageLocInjectPositionInput *self,
    QmiLocPositionSourceProvider value_position_source_provider,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_position_source_provider = (guint32)(value_position_source_provider);
    self->arg_position_source_provider_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_requested_position_injection (
    QmiMessageLocInjectPositionInput *self,
    gboolean *value_requested_position_injection,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_requested_position_injection_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Requested Position Injection' was not found in the message");
        return FALSE;
    }

    if (value_requested_position_injection)
        *value_requested_position_injection = (gboolean)(self->arg_requested_position_injection);

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_requested_position_injection (
    QmiMessageLocInjectPositionInput *self,
    gboolean value_requested_position_injection,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_requested_position_injection = (guint8)(value_requested_position_injection);
    self->arg_requested_position_injection_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_raw_horizontal_confidence (
    QmiMessageLocInjectPositionInput *self,
    guint8 *value_raw_horizontal_confidence,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_raw_horizontal_confidence_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Raw Horizontal Confidence' was not found in the message");
        return FALSE;
    }

    if (value_raw_horizontal_confidence)
        *value_raw_horizontal_confidence = self->arg_raw_horizontal_confidence;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_raw_horizontal_confidence (
    QmiMessageLocInjectPositionInput *self,
    guint8 value_raw_horizontal_confidence,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_raw_horizontal_confidence = value_raw_horizontal_confidence;
    self->arg_raw_horizontal_confidence_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_raw_horizontal_uncertainty_circular (
    QmiMessageLocInjectPositionInput *self,
    gfloat *value_raw_horizontal_uncertainty_circular,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_raw_horizontal_uncertainty_circular_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Raw Horizontal Uncertainty Circular' was not found in the message");
        return FALSE;
    }

    if (value_raw_horizontal_uncertainty_circular)
        *value_raw_horizontal_uncertainty_circular = self->arg_raw_horizontal_uncertainty_circular;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_raw_horizontal_uncertainty_circular (
    QmiMessageLocInjectPositionInput *self,
    gfloat value_raw_horizontal_uncertainty_circular,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_raw_horizontal_uncertainty_circular = value_raw_horizontal_uncertainty_circular;
    self->arg_raw_horizontal_uncertainty_circular_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_position_source (
    QmiMessageLocInjectPositionInput *self,
    QmiLocPositionSource *value_position_source,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_position_source_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Position Source' was not found in the message");
        return FALSE;
    }

    if (value_position_source)
        *value_position_source = (QmiLocPositionSource)(self->arg_position_source);

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_position_source (
    QmiMessageLocInjectPositionInput *self,
    QmiLocPositionSource value_position_source,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_position_source = (guint32)(value_position_source);
    self->arg_position_source_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_timestamp_age (
    QmiMessageLocInjectPositionInput *self,
    guint32 *value_timestamp_age,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_timestamp_age_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Timestamp Age' was not found in the message");
        return FALSE;
    }

    if (value_timestamp_age)
        *value_timestamp_age = self->arg_timestamp_age;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_timestamp_age (
    QmiMessageLocInjectPositionInput *self,
    guint32 value_timestamp_age,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_timestamp_age = value_timestamp_age;
    self->arg_timestamp_age_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_utc_timestamp (
    QmiMessageLocInjectPositionInput *self,
    guint64 *value_utc_timestamp,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_utc_timestamp_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'UTC Timestamp' was not found in the message");
        return FALSE;
    }

    if (value_utc_timestamp)
        *value_utc_timestamp = self->arg_utc_timestamp;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_utc_timestamp (
    QmiMessageLocInjectPositionInput *self,
    guint64 value_utc_timestamp,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_utc_timestamp = value_utc_timestamp;
    self->arg_utc_timestamp_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_altitude_source (
    QmiMessageLocInjectPositionInput *self,
    QmiLocAltitudeSource *value_altitude_source_altitude_source,
    QmiLocAltitudeDependency *value_altitude_source_altitude_dependency,
    QmiLocAltitudeUncertainty *value_altitude_source_altitude_uncertainty,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_altitude_source_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Altitude Source' was not found in the message");
        return FALSE;
    }

    if (value_altitude_source_altitude_source)
        *value_altitude_source_altitude_source = (QmiLocAltitudeSource)(self->arg_altitude_source_altitude_source);
    if (value_altitude_source_altitude_dependency)
        *value_altitude_source_altitude_dependency = (QmiLocAltitudeDependency)(self->arg_altitude_source_altitude_dependency);
    if (value_altitude_source_altitude_uncertainty)
        *value_altitude_source_altitude_uncertainty = (QmiLocAltitudeUncertainty)(self->arg_altitude_source_altitude_uncertainty);

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_altitude_source (
    QmiMessageLocInjectPositionInput *self,
    QmiLocAltitudeSource value_altitude_source_altitude_source,
    QmiLocAltitudeDependency value_altitude_source_altitude_dependency,
    QmiLocAltitudeUncertainty value_altitude_source_altitude_uncertainty,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_altitude_source_altitude_source = (guint32)(value_altitude_source_altitude_source);
    self->arg_altitude_source_altitude_dependency = (guint32)(value_altitude_source_altitude_dependency);
    self->arg_altitude_source_altitude_uncertainty = (guint32)(value_altitude_source_altitude_uncertainty);
    self->arg_altitude_source_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_vertical_reliability (
    QmiMessageLocInjectPositionInput *self,
    QmiLocReliability *value_vertical_reliability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_vertical_reliability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Vertical Reliability' was not found in the message");
        return FALSE;
    }

    if (value_vertical_reliability)
        *value_vertical_reliability = (QmiLocReliability)(self->arg_vertical_reliability);

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_vertical_reliability (
    QmiMessageLocInjectPositionInput *self,
    QmiLocReliability value_vertical_reliability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_vertical_reliability = (guint32)(value_vertical_reliability);
    self->arg_vertical_reliability_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_vertical_confidence (
    QmiMessageLocInjectPositionInput *self,
    guint8 *value_vertical_confidence,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_vertical_confidence_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Vertical Confidence' was not found in the message");
        return FALSE;
    }

    if (value_vertical_confidence)
        *value_vertical_confidence = self->arg_vertical_confidence;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_vertical_confidence (
    QmiMessageLocInjectPositionInput *self,
    guint8 value_vertical_confidence,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_vertical_confidence = value_vertical_confidence;
    self->arg_vertical_confidence_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_vertical_uncertainty (
    QmiMessageLocInjectPositionInput *self,
    gfloat *value_vertical_uncertainty,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_vertical_uncertainty_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Vertical Uncertainty' was not found in the message");
        return FALSE;
    }

    if (value_vertical_uncertainty)
        *value_vertical_uncertainty = self->arg_vertical_uncertainty;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_vertical_uncertainty (
    QmiMessageLocInjectPositionInput *self,
    gfloat value_vertical_uncertainty,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_vertical_uncertainty = value_vertical_uncertainty;
    self->arg_vertical_uncertainty_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_altitude_from_sealevel (
    QmiMessageLocInjectPositionInput *self,
    gfloat *value_altitude_from_sealevel,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_altitude_from_sealevel_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Altitude from Sealevel' was not found in the message");
        return FALSE;
    }

    if (value_altitude_from_sealevel)
        *value_altitude_from_sealevel = self->arg_altitude_from_sealevel;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_altitude_from_sealevel (
    QmiMessageLocInjectPositionInput *self,
    gfloat value_altitude_from_sealevel,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_altitude_from_sealevel = value_altitude_from_sealevel;
    self->arg_altitude_from_sealevel_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_altitude_from_ellipsoid (
    QmiMessageLocInjectPositionInput *self,
    gfloat *value_altitude_from_ellipsoid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_altitude_from_ellipsoid_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Altitude from Ellipsoid' was not found in the message");
        return FALSE;
    }

    if (value_altitude_from_ellipsoid)
        *value_altitude_from_ellipsoid = self->arg_altitude_from_ellipsoid;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_altitude_from_ellipsoid (
    QmiMessageLocInjectPositionInput *self,
    gfloat value_altitude_from_ellipsoid,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_altitude_from_ellipsoid = value_altitude_from_ellipsoid;
    self->arg_altitude_from_ellipsoid_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_horizontal_reliability (
    QmiMessageLocInjectPositionInput *self,
    QmiLocReliability *value_horizontal_reliability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_horizontal_reliability_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Horizontal Reliability' was not found in the message");
        return FALSE;
    }

    if (value_horizontal_reliability)
        *value_horizontal_reliability = (QmiLocReliability)(self->arg_horizontal_reliability);

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_horizontal_reliability (
    QmiMessageLocInjectPositionInput *self,
    QmiLocReliability value_horizontal_reliability,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_horizontal_reliability = (guint32)(value_horizontal_reliability);
    self->arg_horizontal_reliability_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_horizontal_confidence (
    QmiMessageLocInjectPositionInput *self,
    guint8 *value_horizontal_confidence,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_horizontal_confidence_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Horizontal Confidence' was not found in the message");
        return FALSE;
    }

    if (value_horizontal_confidence)
        *value_horizontal_confidence = self->arg_horizontal_confidence;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_horizontal_confidence (
    QmiMessageLocInjectPositionInput *self,
    guint8 value_horizontal_confidence,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_horizontal_confidence = value_horizontal_confidence;
    self->arg_horizontal_confidence_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_horizontal_uncertainty_circular (
    QmiMessageLocInjectPositionInput *self,
    gfloat *value_horizontal_uncertainty_circular,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_horizontal_uncertainty_circular_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Horizontal Uncertainty Circular' was not found in the message");
        return FALSE;
    }

    if (value_horizontal_uncertainty_circular)
        *value_horizontal_uncertainty_circular = self->arg_horizontal_uncertainty_circular;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_horizontal_uncertainty_circular (
    QmiMessageLocInjectPositionInput *self,
    gfloat value_horizontal_uncertainty_circular,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_horizontal_uncertainty_circular = value_horizontal_uncertainty_circular;
    self->arg_horizontal_uncertainty_circular_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_longitude (
    QmiMessageLocInjectPositionInput *self,
    gdouble *value_longitude,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_longitude_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Longitude' was not found in the message");
        return FALSE;
    }

    if (value_longitude)
        *value_longitude = self->arg_longitude;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_longitude (
    QmiMessageLocInjectPositionInput *self,
    gdouble value_longitude,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_longitude = value_longitude;
    self->arg_longitude_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_get_latitude (
    QmiMessageLocInjectPositionInput *self,
    gdouble *value_latitude,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_latitude_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Latitude' was not found in the message");
        return FALSE;
    }

    if (value_latitude)
        *value_latitude = self->arg_latitude;

    return TRUE;
}

gboolean
qmi_message_loc_inject_position_input_set_latitude (
    QmiMessageLocInjectPositionInput *self,
    gdouble value_latitude,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_latitude = value_latitude;
    self->arg_latitude_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_inject_position_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocInjectPositionInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_inject_position_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_inject_position_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocInjectPositionInput *
qmi_message_loc_inject_position_input_ref (QmiMessageLocInjectPositionInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_inject_position_input_unref (QmiMessageLocInjectPositionInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_satellites_used, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_speed_uncertainty_east_north_up, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_speed_east_north_up, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageLocInjectPositionInput, self);
    }
}

QmiMessageLocInjectPositionInput *
qmi_message_loc_inject_position_input_new (void)
{
    QmiMessageLocInjectPositionInput *self;

    self = g_slice_new0 (QmiMessageLocInjectPositionInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_inject_position_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocInjectPositionInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_INJECT_POSITION);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Number Satellites in Fix' TLV */
    if (input->arg_number_satellites_in_fix_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_NUMBER_SATELLITES_IN_FIX, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Number Satellites in Fix': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_number_satellites_in_fix, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Number Satellites in Fix': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Number Satellites in Fix': ");
            return NULL;
        }
    }

    /* Try to add the 'Satellites Used' TLV */
    if (input->arg_satellites_used_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_SATELLITES_USED, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Satellites Used': ");
            return NULL;
        }

        {
            guint satellites_used_i;
            guint32 satellites_used_n_items;

            /* Write the number of items in the array first */
            satellites_used_n_items = (guint32) input->arg_satellites_used->len;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, satellites_used_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Satellites Used': ");
                return NULL;
            }

            for (satellites_used_i = 0; satellites_used_i < input->arg_satellites_used->len; satellites_used_i++) {
                /* Write the guint16 variable to the buffer */
                if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, g_array_index (input->arg_satellites_used, guint16,satellites_used_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Satellites Used': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Satellites Used': ");
            return NULL;
        }
    }

    /* Try to add the 'Speed Uncertainty East North Up' TLV */
    if (input->arg_speed_uncertainty_east_north_up_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_SPEED_UNCERTAINTY_EAST_NORTH_UP, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Speed Uncertainty East North Up': ");
            return NULL;
        }

        {
            guint speed_uncertainty_east_north_up_i;

            for (speed_uncertainty_east_north_up_i = 0; speed_uncertainty_east_north_up_i < input->arg_speed_uncertainty_east_north_up->len; speed_uncertainty_east_north_up_i++) {
                /* Write the gfloat variable to the buffer */
                if (!qmi_message_tlv_write_gfloat (self, QMI_ENDIAN_LITTLE, g_array_index (input->arg_speed_uncertainty_east_north_up, gfloat,speed_uncertainty_east_north_up_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Speed Uncertainty East North Up': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Speed Uncertainty East North Up': ");
            return NULL;
        }
    }

    /* Try to add the 'Speed East North Up' TLV */
    if (input->arg_speed_east_north_up_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_SPEED_EAST_NORTH_UP, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Speed East North Up': ");
            return NULL;
        }

        {
            guint speed_east_north_up_i;

            for (speed_east_north_up_i = 0; speed_east_north_up_i < input->arg_speed_east_north_up->len; speed_east_north_up_i++) {
                /* Write the gfloat variable to the buffer */
                if (!qmi_message_tlv_write_gfloat (self, QMI_ENDIAN_LITTLE, g_array_index (input->arg_speed_east_north_up, gfloat,speed_east_north_up_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Speed East North Up': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Speed East North Up': ");
            return NULL;
        }
    }

    /* Try to add the 'Time Uncertainty' TLV */
    if (input->arg_time_uncertainty_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_TIME_UNCERTAINTY, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Time Uncertainty': ");
            return NULL;
        }

        /* Write the gfloat variable to the buffer */
        if (!qmi_message_tlv_write_gfloat (self, QMI_ENDIAN_LITTLE, input->arg_time_uncertainty, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Time Uncertainty': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Time Uncertainty': ");
            return NULL;
        }
    }

    /* Try to add the 'GPS Date Time' TLV */
    if (input->arg_gps_date_time_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_GPS_DATE_TIME, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'GPS Date Time': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_gps_date_time_gps_weeks, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'GPS Date Time': ");
            return NULL;
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_gps_date_time_gps_time_of_week_milliseconds, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'GPS Date Time': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'GPS Date Time': ");
            return NULL;
        }
    }

    /* Try to add the 'Position Source Provider' TLV */
    if (input->arg_position_source_provider_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_POSITION_SOURCE_PROVIDER, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Position Source Provider': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_position_source_provider;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Position Source Provider': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Position Source Provider': ");
            return NULL;
        }
    }

    /* Try to add the 'Requested Position Injection' TLV */
    if (input->arg_requested_position_injection_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_REQUESTED_POSITION_INJECTION, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Requested Position Injection': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_requested_position_injection;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Requested Position Injection': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Requested Position Injection': ");
            return NULL;
        }
    }

    /* Try to add the 'Raw Horizontal Confidence' TLV */
    if (input->arg_raw_horizontal_confidence_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_RAW_HORIZONTAL_CONFIDENCE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Raw Horizontal Confidence': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_raw_horizontal_confidence, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Raw Horizontal Confidence': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Raw Horizontal Confidence': ");
            return NULL;
        }
    }

    /* Try to add the 'Raw Horizontal Uncertainty Circular' TLV */
    if (input->arg_raw_horizontal_uncertainty_circular_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_RAW_HORIZONTAL_UNCERTAINTY_CIRCULAR, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Raw Horizontal Uncertainty Circular': ");
            return NULL;
        }

        /* Write the gfloat variable to the buffer */
        if (!qmi_message_tlv_write_gfloat (self, QMI_ENDIAN_LITTLE, input->arg_raw_horizontal_uncertainty_circular, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Raw Horizontal Uncertainty Circular': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Raw Horizontal Uncertainty Circular': ");
            return NULL;
        }
    }

    /* Try to add the 'Position Source' TLV */
    if (input->arg_position_source_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_POSITION_SOURCE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Position Source': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_position_source;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Position Source': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Position Source': ");
            return NULL;
        }
    }

    /* Try to add the 'Timestamp Age' TLV */
    if (input->arg_timestamp_age_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_TIMESTAMP_AGE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Timestamp Age': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_timestamp_age, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Timestamp Age': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Timestamp Age': ");
            return NULL;
        }
    }

    /* Try to add the 'UTC Timestamp' TLV */
    if (input->arg_utc_timestamp_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_UTC_TIMESTAMP, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'UTC Timestamp': ");
            return NULL;
        }

        /* Write the guint64 variable to the buffer */
        if (!qmi_message_tlv_write_guint64 (self, QMI_ENDIAN_LITTLE, input->arg_utc_timestamp, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'UTC Timestamp': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'UTC Timestamp': ");
            return NULL;
        }
    }

    /* Try to add the 'Altitude Source' TLV */
    if (input->arg_altitude_source_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_ALTITUDE_SOURCE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Altitude Source': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_altitude_source_altitude_source;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Altitude Source': ");
                return NULL;
            }
        }
        {
            guint32 tmp;

            tmp = (guint32) input->arg_altitude_source_altitude_dependency;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Altitude Source': ");
                return NULL;
            }
        }
        {
            guint32 tmp;

            tmp = (guint32) input->arg_altitude_source_altitude_uncertainty;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Altitude Source': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Altitude Source': ");
            return NULL;
        }
    }

    /* Try to add the 'Vertical Reliability' TLV */
    if (input->arg_vertical_reliability_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_VERTICAL_RELIABILITY, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Vertical Reliability': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_vertical_reliability;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Vertical Reliability': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Vertical Reliability': ");
            return NULL;
        }
    }

    /* Try to add the 'Vertical Confidence' TLV */
    if (input->arg_vertical_confidence_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_VERTICAL_CONFIDENCE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Vertical Confidence': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_vertical_confidence, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Vertical Confidence': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Vertical Confidence': ");
            return NULL;
        }
    }

    /* Try to add the 'Vertical Uncertainty' TLV */
    if (input->arg_vertical_uncertainty_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_VERTICAL_UNCERTAINTY, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Vertical Uncertainty': ");
            return NULL;
        }

        /* Write the gfloat variable to the buffer */
        if (!qmi_message_tlv_write_gfloat (self, QMI_ENDIAN_LITTLE, input->arg_vertical_uncertainty, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Vertical Uncertainty': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Vertical Uncertainty': ");
            return NULL;
        }
    }

    /* Try to add the 'Altitude from Sealevel' TLV */
    if (input->arg_altitude_from_sealevel_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_ALTITUDE_FROM_SEALEVEL, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Altitude from Sealevel': ");
            return NULL;
        }

        /* Write the gfloat variable to the buffer */
        if (!qmi_message_tlv_write_gfloat (self, QMI_ENDIAN_LITTLE, input->arg_altitude_from_sealevel, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Altitude from Sealevel': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Altitude from Sealevel': ");
            return NULL;
        }
    }

    /* Try to add the 'Altitude from Ellipsoid' TLV */
    if (input->arg_altitude_from_ellipsoid_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_ALTITUDE_FROM_ELLIPSOID, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Altitude from Ellipsoid': ");
            return NULL;
        }

        /* Write the gfloat variable to the buffer */
        if (!qmi_message_tlv_write_gfloat (self, QMI_ENDIAN_LITTLE, input->arg_altitude_from_ellipsoid, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Altitude from Ellipsoid': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Altitude from Ellipsoid': ");
            return NULL;
        }
    }

    /* Try to add the 'Horizontal Reliability' TLV */
    if (input->arg_horizontal_reliability_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_HORIZONTAL_RELIABILITY, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Horizontal Reliability': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_horizontal_reliability;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Horizontal Reliability': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Horizontal Reliability': ");
            return NULL;
        }
    }

    /* Try to add the 'Horizontal Confidence' TLV */
    if (input->arg_horizontal_confidence_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_HORIZONTAL_CONFIDENCE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Horizontal Confidence': ");
            return NULL;
        }

        /* Write the guint8 variable to the buffer */
        if (!qmi_message_tlv_write_guint8 (self, input->arg_horizontal_confidence, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Horizontal Confidence': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Horizontal Confidence': ");
            return NULL;
        }
    }

    /* Try to add the 'Horizontal Uncertainty Circular' TLV */
    if (input->arg_horizontal_uncertainty_circular_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_HORIZONTAL_UNCERTAINTY_CIRCULAR, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Horizontal Uncertainty Circular': ");
            return NULL;
        }

        /* Write the gfloat variable to the buffer */
        if (!qmi_message_tlv_write_gfloat (self, QMI_ENDIAN_LITTLE, input->arg_horizontal_uncertainty_circular, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Horizontal Uncertainty Circular': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Horizontal Uncertainty Circular': ");
            return NULL;
        }
    }

    /* Try to add the 'Longitude' TLV */
    if (input->arg_longitude_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_LONGITUDE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Longitude': ");
            return NULL;
        }

        /* Write the gdouble variable to the buffer */
        if (!qmi_message_tlv_write_gdouble (self, QMI_ENDIAN_LITTLE, input->arg_longitude, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Longitude': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Longitude': ");
            return NULL;
        }
    }

    /* Try to add the 'Latitude' TLV */
    if (input->arg_latitude_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_LATITUDE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Latitude': ");
            return NULL;
        }

        /* Write the gdouble variable to the buffer */
        if (!qmi_message_tlv_write_gdouble (self, QMI_ENDIAN_LITTLE, input->arg_latitude, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Latitude': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Latitude': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocInjectPositionOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_INJECT_POSITION_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_inject_position_output_get_result (
    QmiMessageLocInjectPositionOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_inject_position_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocInjectPositionOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_inject_position_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_inject_position_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocInjectPositionOutput *
qmi_message_loc_inject_position_output_ref (QmiMessageLocInjectPositionOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_inject_position_output_unref (QmiMessageLocInjectPositionOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocInjectPositionOutput, self);
    }
}

static gchar *
qmi_message_loc_inject_position_input_number_satellites_in_fix_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_NUMBER_SATELLITES_IN_FIX, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_satellites_used_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_SATELLITES_USED, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint satellites_used_i;
        guint32 satellites_used_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(satellites_used_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (satellites_used_i = 0; satellites_used_i < satellites_used_n_items; satellites_used_i++) {
            g_string_append_printf (printable, " [%u] = '", satellites_used_i);

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }
    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_speed_uncertainty_east_north_up_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_SPEED_UNCERTAINTY_EAST_NORTH_UP, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint speed_uncertainty_east_north_up_i;
        guint16 speed_uncertainty_east_north_up_n_items = 3;


        g_string_append (printable, "{");

        for (speed_uncertainty_east_north_up_i = 0; speed_uncertainty_east_north_up_i < speed_uncertainty_east_north_up_n_items; speed_uncertainty_east_north_up_i++) {
            g_string_append_printf (printable, " [%u] = '", speed_uncertainty_east_north_up_i);

            {
                gfloat tmp;

                if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%lf", (gdouble)tmp);
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }
    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_speed_east_north_up_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_SPEED_EAST_NORTH_UP, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint speed_east_north_up_i;
        guint16 speed_east_north_up_n_items = 3;


        g_string_append (printable, "{");

        for (speed_east_north_up_i = 0; speed_east_north_up_i < speed_east_north_up_n_items; speed_east_north_up_i++) {
            g_string_append_printf (printable, " [%u] = '", speed_east_north_up_i);

            {
                gfloat tmp;

                if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%lf", (gdouble)tmp);
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }
    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_time_uncertainty_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_TIME_UNCERTAINTY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_gps_date_time_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_GPS_DATE_TIME, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " gps_weeks = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " gps_time_of_week_milliseconds = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_position_source_provider_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_POSITION_SOURCE_PROVIDER, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_POSITION_SOURCE_PROVIDER_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_position_source_provider_get_string ((QmiLocPositionSourceProvider)tmp));
#elif defined  __QMI_LOC_POSITION_SOURCE_PROVIDER_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_position_source_provider_build_string_from_mask ((QmiLocPositionSourceProvider)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocPositionSourceProvider
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_requested_position_injection_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_REQUESTED_POSITION_INJECTION, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_raw_horizontal_confidence_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_RAW_HORIZONTAL_CONFIDENCE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_raw_horizontal_uncertainty_circular_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_RAW_HORIZONTAL_UNCERTAINTY_CIRCULAR, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_position_source_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_POSITION_SOURCE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_POSITION_SOURCE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_position_source_get_string ((QmiLocPositionSource)tmp));
#elif defined  __QMI_LOC_POSITION_SOURCE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_position_source_build_string_from_mask ((QmiLocPositionSource)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocPositionSource
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_timestamp_age_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_TIMESTAMP_AGE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_utc_timestamp_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_UTC_TIMESTAMP, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT64_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_altitude_source_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_ALTITUDE_SOURCE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " altitude_source = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_ALTITUDE_SOURCE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_altitude_source_get_string ((QmiLocAltitudeSource)tmp));
#elif defined  __QMI_LOC_ALTITUDE_SOURCE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_altitude_source_build_string_from_mask ((QmiLocAltitudeSource)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocAltitudeSource
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " altitude_dependency = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_ALTITUDE_DEPENDENCY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_altitude_dependency_get_string ((QmiLocAltitudeDependency)tmp));
#elif defined  __QMI_LOC_ALTITUDE_DEPENDENCY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_altitude_dependency_build_string_from_mask ((QmiLocAltitudeDependency)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocAltitudeDependency
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " altitude_uncertainty = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_ALTITUDE_UNCERTAINTY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_altitude_uncertainty_get_string ((QmiLocAltitudeUncertainty)tmp));
#elif defined  __QMI_LOC_ALTITUDE_UNCERTAINTY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_altitude_uncertainty_build_string_from_mask ((QmiLocAltitudeUncertainty)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocAltitudeUncertainty
#endif
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_vertical_reliability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_VERTICAL_RELIABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_RELIABILITY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_reliability_get_string ((QmiLocReliability)tmp));
#elif defined  __QMI_LOC_RELIABILITY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_reliability_build_string_from_mask ((QmiLocReliability)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocReliability
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_vertical_confidence_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_VERTICAL_CONFIDENCE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_vertical_uncertainty_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_VERTICAL_UNCERTAINTY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_altitude_from_sealevel_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_ALTITUDE_FROM_SEALEVEL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_altitude_from_ellipsoid_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_ALTITUDE_FROM_ELLIPSOID, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_horizontal_reliability_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_HORIZONTAL_RELIABILITY, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_RELIABILITY_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_reliability_get_string ((QmiLocReliability)tmp));
#elif defined  __QMI_LOC_RELIABILITY_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_reliability_build_string_from_mask ((QmiLocReliability)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocReliability
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_horizontal_confidence_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_HORIZONTAL_CONFIDENCE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%u", (guint)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_horizontal_uncertainty_circular_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_HORIZONTAL_UNCERTAINTY_CIRCULAR, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gfloat tmp;

        if (!qmi_message_tlv_read_gfloat_endian (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_longitude_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_LONGITUDE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gdouble tmp;

        if (!qmi_message_tlv_read_gdouble (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_position_input_latitude_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_LATITUDE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        gdouble tmp;

        if (!qmi_message_tlv_read_gdouble (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%lf", (gdouble)tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_inject_position_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_inject_position_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_inject_position_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_NUMBER_SATELLITES_IN_FIX:
            tlv_type_str = "Number Satellites in Fix";
            translated_value = qmi_message_loc_inject_position_input_number_satellites_in_fix_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_SATELLITES_USED:
            tlv_type_str = "Satellites Used";
            translated_value = qmi_message_loc_inject_position_input_satellites_used_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_SPEED_UNCERTAINTY_EAST_NORTH_UP:
            tlv_type_str = "Speed Uncertainty East North Up";
            translated_value = qmi_message_loc_inject_position_input_speed_uncertainty_east_north_up_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_SPEED_EAST_NORTH_UP:
            tlv_type_str = "Speed East North Up";
            translated_value = qmi_message_loc_inject_position_input_speed_east_north_up_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_TIME_UNCERTAINTY:
            tlv_type_str = "Time Uncertainty";
            translated_value = qmi_message_loc_inject_position_input_time_uncertainty_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_GPS_DATE_TIME:
            tlv_type_str = "GPS Date Time";
            translated_value = qmi_message_loc_inject_position_input_gps_date_time_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_POSITION_SOURCE_PROVIDER:
            tlv_type_str = "Position Source Provider";
            translated_value = qmi_message_loc_inject_position_input_position_source_provider_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_REQUESTED_POSITION_INJECTION:
            tlv_type_str = "Requested Position Injection";
            translated_value = qmi_message_loc_inject_position_input_requested_position_injection_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_RAW_HORIZONTAL_CONFIDENCE:
            tlv_type_str = "Raw Horizontal Confidence";
            translated_value = qmi_message_loc_inject_position_input_raw_horizontal_confidence_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_RAW_HORIZONTAL_UNCERTAINTY_CIRCULAR:
            tlv_type_str = "Raw Horizontal Uncertainty Circular";
            translated_value = qmi_message_loc_inject_position_input_raw_horizontal_uncertainty_circular_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_POSITION_SOURCE:
            tlv_type_str = "Position Source";
            translated_value = qmi_message_loc_inject_position_input_position_source_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_TIMESTAMP_AGE:
            tlv_type_str = "Timestamp Age";
            translated_value = qmi_message_loc_inject_position_input_timestamp_age_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_UTC_TIMESTAMP:
            tlv_type_str = "UTC Timestamp";
            translated_value = qmi_message_loc_inject_position_input_utc_timestamp_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_ALTITUDE_SOURCE:
            tlv_type_str = "Altitude Source";
            translated_value = qmi_message_loc_inject_position_input_altitude_source_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_VERTICAL_RELIABILITY:
            tlv_type_str = "Vertical Reliability";
            translated_value = qmi_message_loc_inject_position_input_vertical_reliability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_VERTICAL_CONFIDENCE:
            tlv_type_str = "Vertical Confidence";
            translated_value = qmi_message_loc_inject_position_input_vertical_confidence_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_VERTICAL_UNCERTAINTY:
            tlv_type_str = "Vertical Uncertainty";
            translated_value = qmi_message_loc_inject_position_input_vertical_uncertainty_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_ALTITUDE_FROM_SEALEVEL:
            tlv_type_str = "Altitude from Sealevel";
            translated_value = qmi_message_loc_inject_position_input_altitude_from_sealevel_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_ALTITUDE_FROM_ELLIPSOID:
            tlv_type_str = "Altitude from Ellipsoid";
            translated_value = qmi_message_loc_inject_position_input_altitude_from_ellipsoid_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_HORIZONTAL_RELIABILITY:
            tlv_type_str = "Horizontal Reliability";
            translated_value = qmi_message_loc_inject_position_input_horizontal_reliability_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_HORIZONTAL_CONFIDENCE:
            tlv_type_str = "Horizontal Confidence";
            translated_value = qmi_message_loc_inject_position_input_horizontal_confidence_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_HORIZONTAL_UNCERTAINTY_CIRCULAR:
            tlv_type_str = "Horizontal Uncertainty Circular";
            translated_value = qmi_message_loc_inject_position_input_horizontal_uncertainty_circular_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_LONGITUDE:
            tlv_type_str = "Longitude";
            translated_value = qmi_message_loc_inject_position_input_longitude_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_POSITION_INPUT_TLV_LATITUDE:
            tlv_type_str = "Latitude";
            translated_value = qmi_message_loc_inject_position_input_latitude_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_INJECT_POSITION_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_inject_position_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Inject Position\" (0x0039)\n",
                            line_prefix);

    {
        struct message_inject_position_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_inject_position_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocInjectPositionOutput *
qmi_message_loc_inject_position_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocInjectPositionOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_INJECT_POSITION);

    self = g_slice_new0 (QmiMessageLocInjectPositionOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_POSITION_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_inject_position_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_inject_position_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Set Engine Lock */


/* --- Input -- */

struct _QmiMessageLocSetEngineLockInput {
    volatile gint ref_count;

    /* Lock Type */
    gboolean arg_lock_type_set;
    guint32 arg_lock_type;
};

#define QMI_MESSAGE_LOC_SET_ENGINE_LOCK_INPUT_TLV_LOCK_TYPE 0x01

gboolean
qmi_message_loc_set_engine_lock_input_get_lock_type (
    QmiMessageLocSetEngineLockInput *self,
    QmiLocLockType *value_lock_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_lock_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Lock Type' was not found in the message");
        return FALSE;
    }

    if (value_lock_type)
        *value_lock_type = (QmiLocLockType)(self->arg_lock_type);

    return TRUE;
}

gboolean
qmi_message_loc_set_engine_lock_input_set_lock_type (
    QmiMessageLocSetEngineLockInput *self,
    QmiLocLockType value_lock_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_lock_type = (guint32)(value_lock_type);
    self->arg_lock_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_set_engine_lock_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocSetEngineLockInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_set_engine_lock_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_set_engine_lock_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocSetEngineLockInput *
qmi_message_loc_set_engine_lock_input_ref (QmiMessageLocSetEngineLockInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_set_engine_lock_input_unref (QmiMessageLocSetEngineLockInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocSetEngineLockInput, self);
    }
}

QmiMessageLocSetEngineLockInput *
qmi_message_loc_set_engine_lock_input_new (void)
{
    QmiMessageLocSetEngineLockInput *self;

    self = g_slice_new0 (QmiMessageLocSetEngineLockInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_set_engine_lock_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocSetEngineLockInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_SET_ENGINE_LOCK);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set Engine Lock' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Lock Type' TLV */
    if (input->arg_lock_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_SET_ENGINE_LOCK_INPUT_TLV_LOCK_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Lock Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_lock_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Lock Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Lock Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Lock Type' in message 'Set Engine Lock'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocSetEngineLockOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_SET_ENGINE_LOCK_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_set_engine_lock_output_get_result (
    QmiMessageLocSetEngineLockOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_set_engine_lock_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocSetEngineLockOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_set_engine_lock_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_set_engine_lock_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocSetEngineLockOutput *
qmi_message_loc_set_engine_lock_output_ref (QmiMessageLocSetEngineLockOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_set_engine_lock_output_unref (QmiMessageLocSetEngineLockOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocSetEngineLockOutput, self);
    }
}

static gchar *
qmi_message_loc_set_engine_lock_input_lock_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_SET_ENGINE_LOCK_INPUT_TLV_LOCK_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_LOCK_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_lock_type_get_string ((QmiLocLockType)tmp));
#elif defined  __QMI_LOC_LOCK_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_lock_type_build_string_from_mask ((QmiLocLockType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocLockType
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_set_engine_lock_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_engine_lock_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_engine_lock_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_SET_ENGINE_LOCK_INPUT_TLV_LOCK_TYPE:
            tlv_type_str = "Lock Type";
            translated_value = qmi_message_loc_set_engine_lock_input_lock_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_SET_ENGINE_LOCK_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_set_engine_lock_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Engine Lock\" (0x003A)\n",
                            line_prefix);

    {
        struct message_set_engine_lock_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_engine_lock_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocSetEngineLockOutput *
qmi_message_loc_set_engine_lock_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocSetEngineLockOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_SET_ENGINE_LOCK);

    self = g_slice_new0 (QmiMessageLocSetEngineLockOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_SET_ENGINE_LOCK_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_set_engine_lock_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_set_engine_lock_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Get Engine Lock */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_loc_get_engine_lock_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_GET_ENGINE_LOCK);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocGetEngineLockOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_GET_ENGINE_LOCK_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_get_engine_lock_output_get_result (
    QmiMessageLocGetEngineLockOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_get_engine_lock_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocGetEngineLockOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_get_engine_lock_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_get_engine_lock_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocGetEngineLockOutput *
qmi_message_loc_get_engine_lock_output_ref (QmiMessageLocGetEngineLockOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_get_engine_lock_output_unref (QmiMessageLocGetEngineLockOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocGetEngineLockOutput, self);
    }
}

struct message_get_engine_lock_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_engine_lock_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_engine_lock_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_GET_ENGINE_LOCK_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_get_engine_lock_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Engine Lock\" (0x003B)\n",
                            line_prefix);

    {
        struct message_get_engine_lock_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_engine_lock_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocGetEngineLockOutput *
qmi_message_loc_get_engine_lock_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocGetEngineLockOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_GET_ENGINE_LOCK);

    self = g_slice_new0 (QmiMessageLocGetEngineLockOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_GET_ENGINE_LOCK_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_get_engine_lock_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_get_engine_lock_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Set NMEA Types */


/* --- Input -- */

struct _QmiMessageLocSetNmeaTypesInput {
    volatile gint ref_count;

    /* NMEA Types */
    gboolean arg_nmea_types_set;
    guint32 arg_nmea_types;
};

#define QMI_MESSAGE_LOC_SET_NMEA_TYPES_INPUT_TLV_NMEA_TYPES 0x01

gboolean
qmi_message_loc_set_nmea_types_input_get_nmea_types (
    QmiMessageLocSetNmeaTypesInput *self,
    QmiLocNmeaType *value_nmea_types,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_nmea_types_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'NMEA Types' was not found in the message");
        return FALSE;
    }

    if (value_nmea_types)
        *value_nmea_types = (QmiLocNmeaType)(self->arg_nmea_types);

    return TRUE;
}

gboolean
qmi_message_loc_set_nmea_types_input_set_nmea_types (
    QmiMessageLocSetNmeaTypesInput *self,
    QmiLocNmeaType value_nmea_types,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_nmea_types = (guint32)(value_nmea_types);
    self->arg_nmea_types_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_set_nmea_types_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocSetNmeaTypesInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_set_nmea_types_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_set_nmea_types_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocSetNmeaTypesInput *
qmi_message_loc_set_nmea_types_input_ref (QmiMessageLocSetNmeaTypesInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_set_nmea_types_input_unref (QmiMessageLocSetNmeaTypesInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocSetNmeaTypesInput, self);
    }
}

QmiMessageLocSetNmeaTypesInput *
qmi_message_loc_set_nmea_types_input_new (void)
{
    QmiMessageLocSetNmeaTypesInput *self;

    self = g_slice_new0 (QmiMessageLocSetNmeaTypesInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_set_nmea_types_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocSetNmeaTypesInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_SET_NMEA_TYPES);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set NMEA Types' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'NMEA Types' TLV */
    if (input->arg_nmea_types_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_SET_NMEA_TYPES_INPUT_TLV_NMEA_TYPES, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'NMEA Types': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_nmea_types;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'NMEA Types': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'NMEA Types': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'NMEA Types' in message 'Set NMEA Types'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocSetNmeaTypesOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_SET_NMEA_TYPES_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_set_nmea_types_output_get_result (
    QmiMessageLocSetNmeaTypesOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_set_nmea_types_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocSetNmeaTypesOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_set_nmea_types_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_set_nmea_types_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocSetNmeaTypesOutput *
qmi_message_loc_set_nmea_types_output_ref (QmiMessageLocSetNmeaTypesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_set_nmea_types_output_unref (QmiMessageLocSetNmeaTypesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocSetNmeaTypesOutput, self);
    }
}

static gchar *
qmi_message_loc_set_nmea_types_input_nmea_types_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_SET_NMEA_TYPES_INPUT_TLV_NMEA_TYPES, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_NMEA_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_nmea_type_get_string ((QmiLocNmeaType)tmp));
#elif defined  __QMI_LOC_NMEA_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_nmea_type_build_string_from_mask ((QmiLocNmeaType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocNmeaType
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_set_nmea_types_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_nmea_types_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_nmea_types_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_SET_NMEA_TYPES_INPUT_TLV_NMEA_TYPES:
            tlv_type_str = "NMEA Types";
            translated_value = qmi_message_loc_set_nmea_types_input_nmea_types_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_SET_NMEA_TYPES_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_set_nmea_types_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set NMEA Types\" (0x003E)\n",
                            line_prefix);

    {
        struct message_set_nmea_types_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_nmea_types_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocSetNmeaTypesOutput *
qmi_message_loc_set_nmea_types_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocSetNmeaTypesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_SET_NMEA_TYPES);

    self = g_slice_new0 (QmiMessageLocSetNmeaTypesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_SET_NMEA_TYPES_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_set_nmea_types_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_set_nmea_types_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Get NMEA Types */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_loc_get_nmea_types_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_GET_NMEA_TYPES);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocGetNmeaTypesOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_GET_NMEA_TYPES_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_get_nmea_types_output_get_result (
    QmiMessageLocGetNmeaTypesOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_get_nmea_types_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocGetNmeaTypesOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_get_nmea_types_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_get_nmea_types_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocGetNmeaTypesOutput *
qmi_message_loc_get_nmea_types_output_ref (QmiMessageLocGetNmeaTypesOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_get_nmea_types_output_unref (QmiMessageLocGetNmeaTypesOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocGetNmeaTypesOutput, self);
    }
}

struct message_get_nmea_types_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_nmea_types_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_nmea_types_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_GET_NMEA_TYPES_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_get_nmea_types_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get NMEA Types\" (0x003F)\n",
                            line_prefix);

    {
        struct message_get_nmea_types_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_nmea_types_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocGetNmeaTypesOutput *
qmi_message_loc_get_nmea_types_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocGetNmeaTypesOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_GET_NMEA_TYPES);

    self = g_slice_new0 (QmiMessageLocGetNmeaTypesOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_GET_NMEA_TYPES_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_get_nmea_types_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_get_nmea_types_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Set Server */


/* --- Input -- */

struct _QmiMessageLocSetServerInput {
    volatile gint ref_count;

    /* URL */
    gboolean arg_url_set;
    gchar *arg_url;

    /* IPv6 */
    gboolean arg_ipv6_set;
    GArray *arg_ipv6_ipv6_address;
    guint32 arg_ipv6_ipv6_port;

    /* IPv4 */
    gboolean arg_ipv4_set;
    guint32 arg_ipv4_ipv4_address;
    guint16 arg_ipv4_ipv4_port;

    /* Server Type */
    gboolean arg_server_type_set;
    guint32 arg_server_type;
};

#define QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_URL 0x12
#define QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_IPV6 0x11
#define QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_IPV4 0x10
#define QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_SERVER_TYPE 0x01

gboolean
qmi_message_loc_set_server_input_get_url (
    QmiMessageLocSetServerInput *self,
    const gchar **value_url,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_url_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'URL' was not found in the message");
        return FALSE;
    }

    if (value_url)
        *value_url = self->arg_url;

    return TRUE;
}

gboolean
qmi_message_loc_set_server_input_set_url (
    QmiMessageLocSetServerInput *self,
    const gchar *value_url,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (value_url && strlen (value_url) > 256) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Input variable 'value_url' must be less than 256 characters long");
        return FALSE;
    }
    g_free (self->arg_url);
    self->arg_url = g_strdup (value_url ? value_url : "");
    self->arg_url_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_set_server_input_get_ipv6 (
    QmiMessageLocSetServerInput *self,
    GArray **value_ipv6_ipv6_address,
    guint32 *value_ipv6_ipv6_port,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ipv6_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IPv6' was not found in the message");
        return FALSE;
    }

    if (value_ipv6_ipv6_address)
        *value_ipv6_ipv6_address = self->arg_ipv6_ipv6_address;
    if (value_ipv6_ipv6_port)
        *value_ipv6_ipv6_port = self->arg_ipv6_ipv6_port;

    return TRUE;
}

gboolean
qmi_message_loc_set_server_input_set_ipv6 (
    QmiMessageLocSetServerInput *self,
    GArray *value_ipv6_ipv6_address,
    guint32 value_ipv6_ipv6_port,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_ipv6_ipv6_address, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_ipv6_ipv6_address, (GDestroyNotify)g_ptr_array_unref);
    self->arg_ipv6_ipv6_address = g_array_ref (value_ipv6_ipv6_address);
    self->arg_ipv6_ipv6_port = value_ipv6_ipv6_port;
    self->arg_ipv6_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_set_server_input_get_ipv4 (
    QmiMessageLocSetServerInput *self,
    guint32 *value_ipv4_ipv4_address,
    guint16 *value_ipv4_ipv4_port,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_ipv4_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'IPv4' was not found in the message");
        return FALSE;
    }

    if (value_ipv4_ipv4_address)
        *value_ipv4_ipv4_address = self->arg_ipv4_ipv4_address;
    if (value_ipv4_ipv4_port)
        *value_ipv4_ipv4_port = self->arg_ipv4_ipv4_port;

    return TRUE;
}

gboolean
qmi_message_loc_set_server_input_set_ipv4 (
    QmiMessageLocSetServerInput *self,
    guint32 value_ipv4_ipv4_address,
    guint16 value_ipv4_ipv4_port,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_ipv4_ipv4_address = value_ipv4_ipv4_address;
    self->arg_ipv4_ipv4_port = value_ipv4_ipv4_port;
    self->arg_ipv4_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_set_server_input_get_server_type (
    QmiMessageLocSetServerInput *self,
    QmiLocServerType *value_server_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_server_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Server Type' was not found in the message");
        return FALSE;
    }

    if (value_server_type)
        *value_server_type = (QmiLocServerType)(self->arg_server_type);

    return TRUE;
}

gboolean
qmi_message_loc_set_server_input_set_server_type (
    QmiMessageLocSetServerInput *self,
    QmiLocServerType value_server_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_server_type = (guint32)(value_server_type);
    self->arg_server_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_set_server_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocSetServerInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_set_server_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_set_server_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocSetServerInput *
qmi_message_loc_set_server_input_ref (QmiMessageLocSetServerInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_set_server_input_unref (QmiMessageLocSetServerInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_url, (GDestroyNotify)g_free);
        g_clear_pointer (&self->arg_ipv6_ipv6_address, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageLocSetServerInput, self);
    }
}

QmiMessageLocSetServerInput *
qmi_message_loc_set_server_input_new (void)
{
    QmiMessageLocSetServerInput *self;

    self = g_slice_new0 (QmiMessageLocSetServerInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_set_server_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocSetServerInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_SET_SERVER);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set Server' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'URL' TLV */
    if (input->arg_url_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_URL, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'URL': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_string (self, 0, input->arg_url, -1, error)) {
            g_prefix_error (error, "Cannot write string in TLV 'URL': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'URL': ");
            return NULL;
        }
    }

    /* Try to add the 'IPv6' TLV */
    if (input->arg_ipv6_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_IPV6, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IPv6': ");
            return NULL;
        }

        {
            guint ipv6_address_i;

            for (ipv6_address_i = 0; ipv6_address_i < input->arg_ipv6_ipv6_address->len; ipv6_address_i++) {
                /* Write the guint16 variable to the buffer */
                if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_BIG, g_array_index (input->arg_ipv6_ipv6_address, guint16,ipv6_address_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'IPv6': ");
                    return NULL;
                }
            }
        }
        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_ipv6_ipv6_port, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'IPv6': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IPv6': ");
            return NULL;
        }
    }

    /* Try to add the 'IPv4' TLV */
    if (input->arg_ipv4_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_IPV4, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'IPv4': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_ipv4_ipv4_address, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'IPv4': ");
            return NULL;
        }
        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_ipv4_ipv4_port, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'IPv4': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'IPv4': ");
            return NULL;
        }
    }

    /* Try to add the 'Server Type' TLV */
    if (input->arg_server_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_SERVER_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Server Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_server_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Server Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Server Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Server Type' in message 'Set Server'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocSetServerOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_SET_SERVER_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_set_server_output_get_result (
    QmiMessageLocSetServerOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_set_server_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocSetServerOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_set_server_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_set_server_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocSetServerOutput *
qmi_message_loc_set_server_output_ref (QmiMessageLocSetServerOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_set_server_output_unref (QmiMessageLocSetServerOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocSetServerOutput, self);
    }
}

static gchar *
qmi_message_loc_set_server_input_url_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_URL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        g_autofree gchar *tmp = NULL;

        if (!qmi_message_tlv_read_string (message, init_offset, &offset, 0, 256, &tmp, &error))
            goto out;
        {
            g_string_append (printable, tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_set_server_input_ipv6_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_IPV6, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " ipv6_address = '");
    {
        guint ipv6_address_i;
        guint16 ipv6_address_n_items = 8;


        g_string_append (printable, "{");

        for (ipv6_address_i = 0; ipv6_address_i < ipv6_address_n_items; ipv6_address_i++) {
            g_string_append_printf (printable, " [%u] = '", ipv6_address_i);

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_BIG, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }    g_string_append (printable, "'");
    g_string_append (printable, " ipv6_port = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_set_server_input_ipv4_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_IPV4, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    g_string_append (printable, "[");
    g_string_append (printable, " ipv4_address = '");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ipv4_port = '");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }
    g_string_append (printable, "'");
    g_string_append (printable, " ]");

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_set_server_input_server_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_SERVER_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_SERVER_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_server_type_get_string ((QmiLocServerType)tmp));
#elif defined  __QMI_LOC_SERVER_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_server_type_build_string_from_mask ((QmiLocServerType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocServerType
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_set_server_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_server_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_server_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_URL:
            tlv_type_str = "URL";
            translated_value = qmi_message_loc_set_server_input_url_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_IPV6:
            tlv_type_str = "IPv6";
            translated_value = qmi_message_loc_set_server_input_ipv6_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_IPV4:
            tlv_type_str = "IPv4";
            translated_value = qmi_message_loc_set_server_input_ipv4_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_SET_SERVER_INPUT_TLV_SERVER_TYPE:
            tlv_type_str = "Server Type";
            translated_value = qmi_message_loc_set_server_input_server_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_SET_SERVER_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_set_server_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Server\" (0x0042)\n",
                            line_prefix);

    {
        struct message_set_server_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_server_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocSetServerOutput *
qmi_message_loc_set_server_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocSetServerOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_SET_SERVER);

    self = g_slice_new0 (QmiMessageLocSetServerOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_SET_SERVER_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_set_server_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_set_server_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Get Server */


/* --- Input -- */

struct _QmiMessageLocGetServerInput {
    volatile gint ref_count;

    /* Server Address Type */
    gboolean arg_server_address_type_set;
    guint8 arg_server_address_type;

    /* Server Type */
    gboolean arg_server_type_set;
    guint32 arg_server_type;
};

#define QMI_MESSAGE_LOC_GET_SERVER_INPUT_TLV_SERVER_ADDRESS_TYPE 0x10
#define QMI_MESSAGE_LOC_GET_SERVER_INPUT_TLV_SERVER_TYPE 0x01

gboolean
qmi_message_loc_get_server_input_get_server_address_type (
    QmiMessageLocGetServerInput *self,
    QmiLocServerAddressType *value_server_address_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_server_address_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Server Address Type' was not found in the message");
        return FALSE;
    }

    if (value_server_address_type)
        *value_server_address_type = (QmiLocServerAddressType)(self->arg_server_address_type);

    return TRUE;
}

gboolean
qmi_message_loc_get_server_input_set_server_address_type (
    QmiMessageLocGetServerInput *self,
    QmiLocServerAddressType value_server_address_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_server_address_type = (guint8)(value_server_address_type);
    self->arg_server_address_type_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_get_server_input_get_server_type (
    QmiMessageLocGetServerInput *self,
    QmiLocServerType *value_server_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_server_type_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Server Type' was not found in the message");
        return FALSE;
    }

    if (value_server_type)
        *value_server_type = (QmiLocServerType)(self->arg_server_type);

    return TRUE;
}

gboolean
qmi_message_loc_get_server_input_set_server_type (
    QmiMessageLocGetServerInput *self,
    QmiLocServerType value_server_type,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_server_type = (guint32)(value_server_type);
    self->arg_server_type_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_get_server_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocGetServerInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_get_server_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_get_server_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocGetServerInput *
qmi_message_loc_get_server_input_ref (QmiMessageLocGetServerInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_get_server_input_unref (QmiMessageLocGetServerInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocGetServerInput, self);
    }
}

QmiMessageLocGetServerInput *
qmi_message_loc_get_server_input_new (void)
{
    QmiMessageLocGetServerInput *self;

    self = g_slice_new0 (QmiMessageLocGetServerInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_get_server_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocGetServerInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_GET_SERVER);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Get Server' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Server Address Type' TLV */
    if (input->arg_server_address_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_GET_SERVER_INPUT_TLV_SERVER_ADDRESS_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Server Address Type': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_server_address_type;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Server Address Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Server Address Type': ");
            return NULL;
        }
    }

    /* Try to add the 'Server Type' TLV */
    if (input->arg_server_type_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_GET_SERVER_INPUT_TLV_SERVER_TYPE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Server Type': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_server_type;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Server Type': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Server Type': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Server Type' in message 'Get Server'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocGetServerOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_GET_SERVER_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_get_server_output_get_result (
    QmiMessageLocGetServerOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_get_server_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocGetServerOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_get_server_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_get_server_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocGetServerOutput *
qmi_message_loc_get_server_output_ref (QmiMessageLocGetServerOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_get_server_output_unref (QmiMessageLocGetServerOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocGetServerOutput, self);
    }
}

static gchar *
qmi_message_loc_get_server_input_server_address_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_GET_SERVER_INPUT_TLV_SERVER_ADDRESS_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_SERVER_ADDRESS_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_server_address_type_get_string ((QmiLocServerAddressType)tmp));
#elif defined  __QMI_LOC_SERVER_ADDRESS_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_server_address_type_build_string_from_mask ((QmiLocServerAddressType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocServerAddressType
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_get_server_input_server_type_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_GET_SERVER_INPUT_TLV_SERVER_TYPE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_SERVER_TYPE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_server_type_get_string ((QmiLocServerType)tmp));
#elif defined  __QMI_LOC_SERVER_TYPE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_server_type_build_string_from_mask ((QmiLocServerType)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocServerType
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_get_server_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_server_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_server_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_GET_SERVER_INPUT_TLV_SERVER_ADDRESS_TYPE:
            tlv_type_str = "Server Address Type";
            translated_value = qmi_message_loc_get_server_input_server_address_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_GET_SERVER_INPUT_TLV_SERVER_TYPE:
            tlv_type_str = "Server Type";
            translated_value = qmi_message_loc_get_server_input_server_type_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_GET_SERVER_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_get_server_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Server\" (0x0043)\n",
                            line_prefix);

    {
        struct message_get_server_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_server_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocGetServerOutput *
qmi_message_loc_get_server_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocGetServerOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_GET_SERVER);

    self = g_slice_new0 (QmiMessageLocGetServerOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_GET_SERVER_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_get_server_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_get_server_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Delete Assistance Data */


/* --- Input -- */

static void
__qmi_message_loc_delete_assistance_data_input_delete_sv_info_element_free (QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement *value)
{
    g_slice_free (QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement, value);
}

static QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement *
__qmi_message_loc_delete_assistance_data_input_delete_sv_info_element_new (void)
{
    return g_slice_new0 (QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement);
}

static QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement *
__qmi_message_loc_delete_assistance_data_input_delete_sv_info_element_copy (const QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement *value)
{
    QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement *copy;

    copy = __qmi_message_loc_delete_assistance_data_input_delete_sv_info_element_new ();
    copy->gnss_sv_id = value->gnss_sv_id;
    copy->system = value->system;
    copy->delete_sv_info_mask = value->delete_sv_info_mask;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement, qmi_message_loc_delete_assistance_data_input_delete_sv_info_element, (GBoxedCopyFunc)__qmi_message_loc_delete_assistance_data_input_delete_sv_info_element_copy, (GBoxedFreeFunc)__qmi_message_loc_delete_assistance_data_input_delete_sv_info_element_free)

struct _QmiMessageLocDeleteAssistanceDataInput {
    volatile gint ref_count;

    /* Delete Clock Info Mask */
    gboolean arg_delete_clock_info_mask_set;
    guint32 arg_delete_clock_info_mask;

    /* Delete Cell Database Mask */
    gboolean arg_delete_cell_database_mask_set;
    guint32 arg_delete_cell_database_mask;

    /* Delete GNSS Data Mask */
    gboolean arg_delete_gnss_data_mask_set;
    guint64 arg_delete_gnss_data_mask;

    /* Delete SV Info */
    gboolean arg_delete_sv_info_set;
    GArray *arg_delete_sv_info;
    GPtrArray *arg_delete_sv_info_ptr;

    /* Delete All */
    gboolean arg_delete_all_set;
    guint8 arg_delete_all;
};

#define QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_CLOCK_INFO_MASK 0x13
#define QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_CELL_DATABASE_MASK 0x12
#define QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_GNSS_DATA_MASK 0x11
#define QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_SV_INFO 0x10
#define QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_ALL 0x01

gboolean
qmi_message_loc_delete_assistance_data_input_get_delete_clock_info_mask (
    QmiMessageLocDeleteAssistanceDataInput *self,
    QmiLocDeleteClockInfo *value_delete_clock_info_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_delete_clock_info_mask_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Delete Clock Info Mask' was not found in the message");
        return FALSE;
    }

    if (value_delete_clock_info_mask)
        *value_delete_clock_info_mask = (QmiLocDeleteClockInfo)(self->arg_delete_clock_info_mask);

    return TRUE;
}

gboolean
qmi_message_loc_delete_assistance_data_input_set_delete_clock_info_mask (
    QmiMessageLocDeleteAssistanceDataInput *self,
    QmiLocDeleteClockInfo value_delete_clock_info_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_delete_clock_info_mask = (guint32)(value_delete_clock_info_mask);
    self->arg_delete_clock_info_mask_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_delete_assistance_data_input_get_delete_cell_database_mask (
    QmiMessageLocDeleteAssistanceDataInput *self,
    QmiLocDeleteCellDatabase *value_delete_cell_database_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_delete_cell_database_mask_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Delete Cell Database Mask' was not found in the message");
        return FALSE;
    }

    if (value_delete_cell_database_mask)
        *value_delete_cell_database_mask = (QmiLocDeleteCellDatabase)(self->arg_delete_cell_database_mask);

    return TRUE;
}

gboolean
qmi_message_loc_delete_assistance_data_input_set_delete_cell_database_mask (
    QmiMessageLocDeleteAssistanceDataInput *self,
    QmiLocDeleteCellDatabase value_delete_cell_database_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_delete_cell_database_mask = (guint32)(value_delete_cell_database_mask);
    self->arg_delete_cell_database_mask_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_delete_assistance_data_input_get_delete_gnss_data_mask (
    QmiMessageLocDeleteAssistanceDataInput *self,
    QmiLocDeleteGnssData *value_delete_gnss_data_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_delete_gnss_data_mask_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Delete GNSS Data Mask' was not found in the message");
        return FALSE;
    }

    if (value_delete_gnss_data_mask)
        *value_delete_gnss_data_mask = (QmiLocDeleteGnssData)(self->arg_delete_gnss_data_mask);

    return TRUE;
}

gboolean
qmi_message_loc_delete_assistance_data_input_set_delete_gnss_data_mask (
    QmiMessageLocDeleteAssistanceDataInput *self,
    QmiLocDeleteGnssData value_delete_gnss_data_mask,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_delete_gnss_data_mask = (guint64)(value_delete_gnss_data_mask);
    self->arg_delete_gnss_data_mask_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_delete_assistance_data_input_get_delete_sv_info (
    QmiMessageLocDeleteAssistanceDataInput *self,
    GArray **value_delete_sv_info,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_delete_sv_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Delete SV Info' was not found in the message");
        return FALSE;
    }

    if (value_delete_sv_info)
        *value_delete_sv_info = self->arg_delete_sv_info;

    return TRUE;
}

gboolean
qmi_message_loc_delete_assistance_data_input_get_delete_sv_info_gir (
    QmiMessageLocDeleteAssistanceDataInput *self,
    GPtrArray **value_delete_sv_info_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_delete_sv_info_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Delete SV Info' was not found in the message");
        return FALSE;
    }

    if (value_delete_sv_info_ptr) {
        if (!self->arg_delete_sv_info_ptr) {
            {
                guint delete_sv_info_i;

                self->arg_delete_sv_info_ptr = g_ptr_array_new_full (self->arg_delete_sv_info->len, (GDestroyNotify)__qmi_message_loc_delete_assistance_data_input_delete_sv_info_element_free);
                for (delete_sv_info_i = 0; delete_sv_info_i < self->arg_delete_sv_info->len; delete_sv_info_i++) {
                    QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement *delete_sv_info_aux_from;
                    QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement *delete_sv_info_aux_to;

                    delete_sv_info_aux_from = &g_array_index (self->arg_delete_sv_info, QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement, delete_sv_info_i);

                    delete_sv_info_aux_to = __qmi_message_loc_delete_assistance_data_input_delete_sv_info_element_new ();
                    delete_sv_info_aux_to->gnss_sv_id = (*delete_sv_info_aux_from).gnss_sv_id;
                    delete_sv_info_aux_to->system = (*delete_sv_info_aux_from).system;
                    delete_sv_info_aux_to->delete_sv_info_mask = (*delete_sv_info_aux_from).delete_sv_info_mask;

                    g_ptr_array_add (self->arg_delete_sv_info_ptr, delete_sv_info_aux_to);
                }
            }
        }
        *value_delete_sv_info_ptr = self->arg_delete_sv_info_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_loc_delete_assistance_data_input_set_delete_sv_info (
    QmiMessageLocDeleteAssistanceDataInput *self,
    GArray *value_delete_sv_info,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_delete_sv_info, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_delete_sv_info, (GDestroyNotify)g_ptr_array_unref);
    self->arg_delete_sv_info = g_array_ref (value_delete_sv_info);
    self->arg_delete_sv_info_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_delete_assistance_data_input_set_delete_sv_info_gir (
    QmiMessageLocDeleteAssistanceDataInput *self,
    GPtrArray *value_delete_sv_info_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_delete_sv_info, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_delete_sv_info_ptr, (GDestroyNotify)g_ptr_array_unref);
    {
        guint delete_sv_info_i;

        self->arg_delete_sv_info = g_array_sized_new (FALSE, FALSE, sizeof (QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement), value_delete_sv_info_ptr->len);
        for (delete_sv_info_i = 0; delete_sv_info_i < value_delete_sv_info_ptr->len; delete_sv_info_i++) {
            QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement delete_sv_info_aux_to;
            QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement *delete_sv_info_aux_from;

            delete_sv_info_aux_from = g_ptr_array_index (value_delete_sv_info_ptr, delete_sv_info_i);

            delete_sv_info_aux_to.gnss_sv_id = delete_sv_info_aux_from->gnss_sv_id;
            delete_sv_info_aux_to.system = delete_sv_info_aux_from->system;
            delete_sv_info_aux_to.delete_sv_info_mask = delete_sv_info_aux_from->delete_sv_info_mask;

            g_array_append_val (self->arg_delete_sv_info, delete_sv_info_aux_to);
        }
    }
    self->arg_delete_sv_info_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_delete_assistance_data_input_get_delete_all (
    QmiMessageLocDeleteAssistanceDataInput *self,
    gboolean *value_delete_all,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_delete_all_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Delete All' was not found in the message");
        return FALSE;
    }

    if (value_delete_all)
        *value_delete_all = (gboolean)(self->arg_delete_all);

    return TRUE;
}

gboolean
qmi_message_loc_delete_assistance_data_input_set_delete_all (
    QmiMessageLocDeleteAssistanceDataInput *self,
    gboolean value_delete_all,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_delete_all = (guint8)(value_delete_all);
    self->arg_delete_all_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_delete_assistance_data_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocDeleteAssistanceDataInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_delete_assistance_data_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_delete_assistance_data_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocDeleteAssistanceDataInput *
qmi_message_loc_delete_assistance_data_input_ref (QmiMessageLocDeleteAssistanceDataInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_delete_assistance_data_input_unref (QmiMessageLocDeleteAssistanceDataInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_delete_sv_info, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_delete_sv_info, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageLocDeleteAssistanceDataInput, self);
    }
}

QmiMessageLocDeleteAssistanceDataInput *
qmi_message_loc_delete_assistance_data_input_new (void)
{
    QmiMessageLocDeleteAssistanceDataInput *self;

    self = g_slice_new0 (QmiMessageLocDeleteAssistanceDataInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_delete_assistance_data_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocDeleteAssistanceDataInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Delete Assistance Data' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Delete Clock Info Mask' TLV */
    if (input->arg_delete_clock_info_mask_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_CLOCK_INFO_MASK, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Delete Clock Info Mask': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_delete_clock_info_mask;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Delete Clock Info Mask': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Delete Clock Info Mask': ");
            return NULL;
        }
    }

    /* Try to add the 'Delete Cell Database Mask' TLV */
    if (input->arg_delete_cell_database_mask_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_CELL_DATABASE_MASK, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Delete Cell Database Mask': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_delete_cell_database_mask;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Delete Cell Database Mask': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Delete Cell Database Mask': ");
            return NULL;
        }
    }

    /* Try to add the 'Delete GNSS Data Mask' TLV */
    if (input->arg_delete_gnss_data_mask_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_GNSS_DATA_MASK, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Delete GNSS Data Mask': ");
            return NULL;
        }

        {
            guint64 tmp;

            tmp = (guint64) input->arg_delete_gnss_data_mask;
            /* Write the guint64 variable to the buffer */
            if (!qmi_message_tlv_write_guint64 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Delete GNSS Data Mask': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Delete GNSS Data Mask': ");
            return NULL;
        }
    }

    /* Try to add the 'Delete SV Info' TLV */
    if (input->arg_delete_sv_info_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_SV_INFO, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Delete SV Info': ");
            return NULL;
        }

        {
            guint delete_sv_info_i;
            guint8 delete_sv_info_n_items;

            /* Write the number of items in the array first */
            delete_sv_info_n_items = (guint8) input->arg_delete_sv_info->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, delete_sv_info_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Delete SV Info': ");
                return NULL;
            }

            for (delete_sv_info_i = 0; delete_sv_info_i < input->arg_delete_sv_info->len; delete_sv_info_i++) {
                /* Write the guint16 variable to the buffer */
                if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, g_array_index (input->arg_delete_sv_info, QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement,delete_sv_info_i).gnss_sv_id, error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Delete SV Info': ");
                    return NULL;
                }
                {
                    guint32 tmp;

                    tmp = (guint32) g_array_index (input->arg_delete_sv_info, QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement,delete_sv_info_i).system;
                    /* Write the guint32 variable to the buffer */
                    if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                        g_prefix_error (error, "Cannot write enum in TLV 'Delete SV Info': ");
                        return NULL;
                    }
                }
                {
                    guint8 tmp;

                    tmp = (guint8) g_array_index (input->arg_delete_sv_info, QmiMessageLocDeleteAssistanceDataInputDeleteSvInfoElement,delete_sv_info_i).delete_sv_info_mask;
                    /* Write the guint8 variable to the buffer */
                    if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                        g_prefix_error (error, "Cannot write enum in TLV 'Delete SV Info': ");
                        return NULL;
                    }
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Delete SV Info': ");
            return NULL;
        }
    }

    /* Try to add the 'Delete All' TLV */
    if (input->arg_delete_all_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_ALL, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Delete All': ");
            return NULL;
        }

        {
            guint8 tmp;

            tmp = (guint8) input->arg_delete_all;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Delete All': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Delete All': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Delete All' in message 'Delete Assistance Data'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocDeleteAssistanceDataOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_delete_assistance_data_output_get_result (
    QmiMessageLocDeleteAssistanceDataOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_delete_assistance_data_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocDeleteAssistanceDataOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_delete_assistance_data_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_delete_assistance_data_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocDeleteAssistanceDataOutput *
qmi_message_loc_delete_assistance_data_output_ref (QmiMessageLocDeleteAssistanceDataOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_delete_assistance_data_output_unref (QmiMessageLocDeleteAssistanceDataOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocDeleteAssistanceDataOutput, self);
    }
}

static gchar *
qmi_message_loc_delete_assistance_data_input_delete_clock_info_mask_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_CLOCK_INFO_MASK, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_DELETE_CLOCK_INFO_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_delete_clock_info_get_string ((QmiLocDeleteClockInfo)tmp));
#elif defined  __QMI_LOC_DELETE_CLOCK_INFO_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_delete_clock_info_build_string_from_mask ((QmiLocDeleteClockInfo)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocDeleteClockInfo
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_delete_assistance_data_input_delete_cell_database_mask_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_CELL_DATABASE_MASK, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_DELETE_CELL_DATABASE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_delete_cell_database_get_string ((QmiLocDeleteCellDatabase)tmp));
#elif defined  __QMI_LOC_DELETE_CELL_DATABASE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_delete_cell_database_build_string_from_mask ((QmiLocDeleteCellDatabase)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocDeleteCellDatabase
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_delete_assistance_data_input_delete_gnss_data_mask_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_GNSS_DATA_MASK, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint64 tmp;

        if (!qmi_message_tlv_read_guint64 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_DELETE_GNSS_DATA_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_delete_gnss_data_get_string ((QmiLocDeleteGnssData)tmp));
#elif defined  __QMI_LOC_DELETE_GNSS_DATA_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_delete_gnss_data_build_string_from_mask ((QmiLocDeleteGnssData)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocDeleteGnssData
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_delete_assistance_data_input_delete_sv_info_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_SV_INFO, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint delete_sv_info_i;
        guint8 delete_sv_info_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(delete_sv_info_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (delete_sv_info_i = 0; delete_sv_info_i < delete_sv_info_n_items; delete_sv_info_i++) {
            g_string_append_printf (printable, " [%u] = '", delete_sv_info_i);
            g_string_append (printable, "[");
            g_string_append (printable, " gnss_sv_id = '");

            {
                guint16 tmp;

                if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " system = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_LOC_SYSTEM_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_loc_system_get_string ((QmiLocSystem)tmp));
#elif defined  __QMI_LOC_SYSTEM_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_loc_system_build_string_from_mask ((QmiLocSystem)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiLocSystem
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " delete_sv_info_mask = '");

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_LOC_DELETE_SV_INFO_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_loc_delete_sv_info_get_string ((QmiLocDeleteSvInfo)tmp));
#elif defined  __QMI_LOC_DELETE_SV_INFO_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_loc_delete_sv_info_build_string_from_mask ((QmiLocDeleteSvInfo)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiLocDeleteSvInfo
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " ]");
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }
    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_delete_assistance_data_input_delete_all_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_ALL, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint8 tmp;

        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%s", tmp ? "yes" : "no");
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_delete_assistance_data_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_delete_assistance_data_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_delete_assistance_data_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_CLOCK_INFO_MASK:
            tlv_type_str = "Delete Clock Info Mask";
            translated_value = qmi_message_loc_delete_assistance_data_input_delete_clock_info_mask_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_CELL_DATABASE_MASK:
            tlv_type_str = "Delete Cell Database Mask";
            translated_value = qmi_message_loc_delete_assistance_data_input_delete_cell_database_mask_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_GNSS_DATA_MASK:
            tlv_type_str = "Delete GNSS Data Mask";
            translated_value = qmi_message_loc_delete_assistance_data_input_delete_gnss_data_mask_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_SV_INFO:
            tlv_type_str = "Delete SV Info";
            translated_value = qmi_message_loc_delete_assistance_data_input_delete_sv_info_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_INPUT_TLV_DELETE_ALL:
            tlv_type_str = "Delete All";
            translated_value = qmi_message_loc_delete_assistance_data_input_delete_all_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_delete_assistance_data_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Delete Assistance Data\" (0x0044)\n",
                            line_prefix);

    {
        struct message_delete_assistance_data_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_delete_assistance_data_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocDeleteAssistanceDataOutput *
qmi_message_loc_delete_assistance_data_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocDeleteAssistanceDataOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA);

    self = g_slice_new0 (QmiMessageLocDeleteAssistanceDataOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_delete_assistance_data_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_delete_assistance_data_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Set Operation Mode */


/* --- Input -- */

struct _QmiMessageLocSetOperationModeInput {
    volatile gint ref_count;

    /* Operation Mode */
    gboolean arg_operation_mode_set;
    guint32 arg_operation_mode;
};

#define QMI_MESSAGE_LOC_SET_OPERATION_MODE_INPUT_TLV_OPERATION_MODE 0x01

gboolean
qmi_message_loc_set_operation_mode_input_get_operation_mode (
    QmiMessageLocSetOperationModeInput *self,
    QmiLocOperationMode *value_operation_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_operation_mode_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Operation Mode' was not found in the message");
        return FALSE;
    }

    if (value_operation_mode)
        *value_operation_mode = (QmiLocOperationMode)(self->arg_operation_mode);

    return TRUE;
}

gboolean
qmi_message_loc_set_operation_mode_input_set_operation_mode (
    QmiMessageLocSetOperationModeInput *self,
    QmiLocOperationMode value_operation_mode,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_operation_mode = (guint32)(value_operation_mode);
    self->arg_operation_mode_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_set_operation_mode_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocSetOperationModeInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_set_operation_mode_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_set_operation_mode_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocSetOperationModeInput *
qmi_message_loc_set_operation_mode_input_ref (QmiMessageLocSetOperationModeInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_set_operation_mode_input_unref (QmiMessageLocSetOperationModeInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocSetOperationModeInput, self);
    }
}

QmiMessageLocSetOperationModeInput *
qmi_message_loc_set_operation_mode_input_new (void)
{
    QmiMessageLocSetOperationModeInput *self;

    self = g_slice_new0 (QmiMessageLocSetOperationModeInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_set_operation_mode_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocSetOperationModeInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_SET_OPERATION_MODE);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Set Operation Mode' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Operation Mode' TLV */
    if (input->arg_operation_mode_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_SET_OPERATION_MODE_INPUT_TLV_OPERATION_MODE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Operation Mode': ");
            return NULL;
        }

        {
            guint32 tmp;

            tmp = (guint32) input->arg_operation_mode;
            /* Write the guint32 variable to the buffer */
            if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                g_prefix_error (error, "Cannot write enum in TLV 'Operation Mode': ");
                return NULL;
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Operation Mode': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Operation Mode' in message 'Set Operation Mode'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocSetOperationModeOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_SET_OPERATION_MODE_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_set_operation_mode_output_get_result (
    QmiMessageLocSetOperationModeOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_set_operation_mode_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocSetOperationModeOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_set_operation_mode_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_set_operation_mode_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocSetOperationModeOutput *
qmi_message_loc_set_operation_mode_output_ref (QmiMessageLocSetOperationModeOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_set_operation_mode_output_unref (QmiMessageLocSetOperationModeOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocSetOperationModeOutput, self);
    }
}

static gchar *
qmi_message_loc_set_operation_mode_input_operation_mode_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_SET_OPERATION_MODE_INPUT_TLV_OPERATION_MODE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
#if defined  __QMI_LOC_OPERATION_MODE_IS_ENUM__
            g_string_append_printf (printable, "%s", qmi_loc_operation_mode_get_string ((QmiLocOperationMode)tmp));
#elif defined  __QMI_LOC_OPERATION_MODE_IS_FLAGS__
            {
                g_autofree gchar *flags_str = NULL;

                flags_str = qmi_loc_operation_mode_build_string_from_mask ((QmiLocOperationMode)tmp);
                g_string_append_printf (printable, "%s", flags_str);
            }
#else
# error unexpected public format: QmiLocOperationMode
#endif
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_set_operation_mode_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_set_operation_mode_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_set_operation_mode_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_SET_OPERATION_MODE_INPUT_TLV_OPERATION_MODE:
            tlv_type_str = "Operation Mode";
            translated_value = qmi_message_loc_set_operation_mode_input_operation_mode_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_SET_OPERATION_MODE_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_set_operation_mode_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Set Operation Mode\" (0x004A)\n",
                            line_prefix);

    {
        struct message_set_operation_mode_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_set_operation_mode_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocSetOperationModeOutput *
qmi_message_loc_set_operation_mode_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocSetOperationModeOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_SET_OPERATION_MODE);

    self = g_slice_new0 (QmiMessageLocSetOperationModeOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_SET_OPERATION_MODE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_set_operation_mode_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_set_operation_mode_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Get Operation Mode */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_loc_get_operation_mode_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_GET_OPERATION_MODE);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocGetOperationModeOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_GET_OPERATION_MODE_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_get_operation_mode_output_get_result (
    QmiMessageLocGetOperationModeOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_get_operation_mode_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocGetOperationModeOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_get_operation_mode_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_get_operation_mode_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocGetOperationModeOutput *
qmi_message_loc_get_operation_mode_output_ref (QmiMessageLocGetOperationModeOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_get_operation_mode_output_unref (QmiMessageLocGetOperationModeOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocGetOperationModeOutput, self);
    }
}

struct message_get_operation_mode_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_get_operation_mode_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_get_operation_mode_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_GET_OPERATION_MODE_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_get_operation_mode_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Get Operation Mode\" (0x004B)\n",
                            line_prefix);

    {
        struct message_get_operation_mode_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_get_operation_mode_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocGetOperationModeOutput *
qmi_message_loc_get_operation_mode_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocGetOperationModeOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_GET_OPERATION_MODE);

    self = g_slice_new0 (QmiMessageLocGetOperationModeOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_GET_OPERATION_MODE_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_get_operation_mode_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_get_operation_mode_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message LOC Inject Xtra Data */


/* --- Input -- */

struct _QmiMessageLocInjectXtraDataInput {
    volatile gint ref_count;

    /* Part Data */
    gboolean arg_part_data_set;
    GArray *arg_part_data;

    /* Part Number */
    gboolean arg_part_number_set;
    guint16 arg_part_number;

    /* Total Parts */
    gboolean arg_total_parts_set;
    guint16 arg_total_parts;

    /* Total Size */
    gboolean arg_total_size_set;
    guint32 arg_total_size;
};

#define QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_PART_DATA 0x04
#define QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_PART_NUMBER 0x03
#define QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_TOTAL_PARTS 0x02
#define QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_TOTAL_SIZE 0x01

gboolean
qmi_message_loc_inject_xtra_data_input_get_part_data (
    QmiMessageLocInjectXtraDataInput *self,
    GArray **value_part_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_part_data_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Part Data' was not found in the message");
        return FALSE;
    }

    if (value_part_data)
        *value_part_data = self->arg_part_data;

    return TRUE;
}

gboolean
qmi_message_loc_inject_xtra_data_input_set_part_data (
    QmiMessageLocInjectXtraDataInput *self,
    GArray *value_part_data,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_part_data, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_part_data, (GDestroyNotify)g_ptr_array_unref);
    self->arg_part_data = g_array_ref (value_part_data);
    self->arg_part_data_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_xtra_data_input_get_part_number (
    QmiMessageLocInjectXtraDataInput *self,
    guint16 *value_part_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_part_number_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Part Number' was not found in the message");
        return FALSE;
    }

    if (value_part_number)
        *value_part_number = self->arg_part_number;

    return TRUE;
}

gboolean
qmi_message_loc_inject_xtra_data_input_set_part_number (
    QmiMessageLocInjectXtraDataInput *self,
    guint16 value_part_number,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_part_number = value_part_number;
    self->arg_part_number_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_xtra_data_input_get_total_parts (
    QmiMessageLocInjectXtraDataInput *self,
    guint16 *value_total_parts,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_total_parts_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Total Parts' was not found in the message");
        return FALSE;
    }

    if (value_total_parts)
        *value_total_parts = self->arg_total_parts;

    return TRUE;
}

gboolean
qmi_message_loc_inject_xtra_data_input_set_total_parts (
    QmiMessageLocInjectXtraDataInput *self,
    guint16 value_total_parts,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_total_parts = value_total_parts;
    self->arg_total_parts_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_loc_inject_xtra_data_input_get_total_size (
    QmiMessageLocInjectXtraDataInput *self,
    guint32 *value_total_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_total_size_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Total Size' was not found in the message");
        return FALSE;
    }

    if (value_total_size)
        *value_total_size = self->arg_total_size;

    return TRUE;
}

gboolean
qmi_message_loc_inject_xtra_data_input_set_total_size (
    QmiMessageLocInjectXtraDataInput *self,
    guint32 value_total_size,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    self->arg_total_size = value_total_size;
    self->arg_total_size_set = TRUE;

    return TRUE;
}

GType
qmi_message_loc_inject_xtra_data_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocInjectXtraDataInput"),
                                          (GBoxedCopyFunc) qmi_message_loc_inject_xtra_data_input_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_inject_xtra_data_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocInjectXtraDataInput *
qmi_message_loc_inject_xtra_data_input_ref (QmiMessageLocInjectXtraDataInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_inject_xtra_data_input_unref (QmiMessageLocInjectXtraDataInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_part_data, (GDestroyNotify)g_array_unref);
        g_slice_free (QmiMessageLocInjectXtraDataInput, self);
    }
}

QmiMessageLocInjectXtraDataInput *
qmi_message_loc_inject_xtra_data_input_new (void)
{
    QmiMessageLocInjectXtraDataInput *self;

    self = g_slice_new0 (QmiMessageLocInjectXtraDataInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_loc_inject_xtra_data_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageLocInjectXtraDataInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_LOC,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_LOC_INJECT_XTRA_DATA);

    /* There is at least one mandatory TLV, don't allow NULL input */
    if (!input) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Message 'Inject Xtra Data' has mandatory TLVs");
        return NULL;
    }

    /* Try to add the 'Part Data' TLV */
    if (input->arg_part_data_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_PART_DATA, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Part Data': ");
            return NULL;
        }

        {
            guint part_data_i;
            guint16 part_data_n_items;

            /* Write the number of items in the array first */
            part_data_n_items = (guint16) input->arg_part_data->len;
            /* Write the guint16 variable to the buffer */
            if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, part_data_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Part Data': ");
                return NULL;
            }

            for (part_data_i = 0; part_data_i < input->arg_part_data->len; part_data_i++) {
                /* Write the guint8 variable to the buffer */
                if (!qmi_message_tlv_write_guint8 (self, g_array_index (input->arg_part_data, guint8,part_data_i), error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Part Data': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Part Data': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Part Data' in message 'Inject Xtra Data'");
        return NULL;
    }

    /* Try to add the 'Part Number' TLV */
    if (input->arg_part_number_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_PART_NUMBER, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Part Number': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_part_number, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Part Number': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Part Number': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Part Number' in message 'Inject Xtra Data'");
        return NULL;
    }

    /* Try to add the 'Total Parts' TLV */
    if (input->arg_total_parts_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_TOTAL_PARTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Total Parts': ");
            return NULL;
        }

        /* Write the guint16 variable to the buffer */
        if (!qmi_message_tlv_write_guint16 (self, QMI_ENDIAN_LITTLE, input->arg_total_parts, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Total Parts': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Total Parts': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Total Parts' in message 'Inject Xtra Data'");
        return NULL;
    }

    /* Try to add the 'Total Size' TLV */
    if (input->arg_total_size_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_TOTAL_SIZE, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Total Size': ");
            return NULL;
        }

        /* Write the guint32 variable to the buffer */
        if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, input->arg_total_size, error)) {
            g_prefix_error (error, "Cannot write integer in TLV 'Total Size': ");
            return NULL;
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Total Size': ");
            return NULL;
        }
    } else {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_ARGS,
                     "Missing mandatory TLV 'Total Size' in message 'Inject Xtra Data'");
        return NULL;
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageLocInjectXtraDataOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_LOC_INJECT_XTRA_DATA_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_loc_inject_xtra_data_output_get_result (
    QmiMessageLocInjectXtraDataOutput *self,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    /* We should always have a result set in the response message */
    if (!self->arg_result_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_INVALID_MESSAGE,
                     "No 'Result' field given in the message");
        return FALSE;
    }

    if (self->arg_result_error_status == QMI_STATUS_SUCCESS) {
        /* Operation succeeded */
        return TRUE;
    }

    /* Report a QMI protocol error */
    g_set_error (error,
                 QMI_PROTOCOL_ERROR,
                 (QmiProtocolError) self->arg_result_error_code,
                 "QMI protocol error (%u): '%s'",
                 self->arg_result_error_code,
                 qmi_protocol_error_get_string ((QmiProtocolError) self->arg_result_error_code));
    return FALSE;
}

GType
qmi_message_loc_inject_xtra_data_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageLocInjectXtraDataOutput"),
                                          (GBoxedCopyFunc) qmi_message_loc_inject_xtra_data_output_ref,
                                          (GBoxedFreeFunc) qmi_message_loc_inject_xtra_data_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageLocInjectXtraDataOutput *
qmi_message_loc_inject_xtra_data_output_ref (QmiMessageLocInjectXtraDataOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_loc_inject_xtra_data_output_unref (QmiMessageLocInjectXtraDataOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageLocInjectXtraDataOutput, self);
    }
}

static gchar *
qmi_message_loc_inject_xtra_data_input_part_data_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_PART_DATA, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint part_data_i;
        guint16 part_data_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(part_data_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (part_data_i = 0; part_data_i < part_data_n_items; part_data_i++) {
            g_string_append_printf (printable, " [%u] = '", part_data_i);

            {
                guint8 tmp;

                if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%u", (guint)tmp);
                }
            }
            g_string_append (printable, "'");
        }

        g_string_append (printable, "}");
    }
    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_xtra_data_input_part_number_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_PART_NUMBER, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_xtra_data_input_total_parts_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_TOTAL_PARTS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint16 tmp;

        if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT16_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

static gchar *
qmi_message_loc_inject_xtra_data_input_total_size_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_TOTAL_SIZE, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");

    {
        guint32 tmp;

        if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
            goto out;
        {
            g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
        }
    }

    if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0)
        g_string_append_printf (printable, "Additional unexpected '%" G_GSIZE_FORMAT "' bytes", offset);

out:
    if (error) {
        g_string_append_printf (printable, " ERROR: %s", error->message);
        g_error_free (error);
    }
    return g_string_free (printable, FALSE);
}

struct message_inject_xtra_data_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_inject_xtra_data_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_inject_xtra_data_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_PART_DATA:
            tlv_type_str = "Part Data";
            translated_value = qmi_message_loc_inject_xtra_data_input_part_data_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_PART_NUMBER:
            tlv_type_str = "Part Number";
            translated_value = qmi_message_loc_inject_xtra_data_input_part_number_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_TOTAL_PARTS:
            tlv_type_str = "Total Parts";
            translated_value = qmi_message_loc_inject_xtra_data_input_total_parts_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_LOC_INJECT_XTRA_DATA_INPUT_TLV_TOTAL_SIZE:
            tlv_type_str = "Total Size";
            translated_value = qmi_message_loc_inject_xtra_data_input_total_size_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_LOC_INJECT_XTRA_DATA_OUTPUT_TLV_RESULT:
            tlv_type_str = "Result";
            translated_value = qmi_message_result_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    }

    if (!tlv_type_str) {
        g_autofree gchar *value_str = NULL;

        value_str = qmi_message_get_tlv_printable (ctx->self,
                                                   ctx->line_prefix,
                                                   type,
                                                   value,
                                                   length);
        g_string_append (ctx->printable, value_str);
    } else {
        g_autofree gchar *value_hex = NULL;

        if (qmi_utils_get_show_personal_info () || !value_has_personal_info)
            value_hex = qmi_common_str_hex (value, length, ':');
        else
            value_hex = g_strdup ("###...");

        g_string_append_printf (ctx->printable,
                                "%sTLV:\n"
                                "%s  type       = \"%s\" (0x%02x)\n"
                                "%s  length     = %" G_GSIZE_FORMAT "\n"
                                "%s  value      = %s\n"
                                "%s  translated = %s\n",
                                ctx->line_prefix,
                                ctx->line_prefix, tlv_type_str, type,
                                ctx->line_prefix, length,
                                ctx->line_prefix, value_hex,
                                ctx->line_prefix, translated_value ? translated_value : "");
    }
}

static gchar *
message_inject_xtra_data_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Inject Xtra Data\" (0x00A7)\n",
                            line_prefix);

    {
        struct message_inject_xtra_data_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_inject_xtra_data_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageLocInjectXtraDataOutput *
qmi_message_loc_inject_xtra_data_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageLocInjectXtraDataOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_LOC_INJECT_XTRA_DATA);

    self = g_slice_new0 (QmiMessageLocInjectXtraDataOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_LOC_INJECT_XTRA_DATA_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_loc_inject_xtra_data_output_unref (self);
                return NULL;
            }
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_status), error))
                goto qmi_message_result_out;
            if (!qmi_message_tlv_read_guint16 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &(self->arg_result_error_code), error))
                goto qmi_message_result_out;

            /* The remaining size of the buffer needs to be 0 if we successfully read the TLV */
            if ((offset = qmi_message_tlv_read_remaining_size (message, init_offset, offset)) > 0) {
                g_warning ("Left '%" G_GSIZE_FORMAT "' bytes unread when getting the 'Result' TLV", offset);
            }

            self->arg_result_set = TRUE;

qmi_message_result_out:
            if (!self->arg_result_set) {
                qmi_message_loc_inject_xtra_data_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: LOC */


gchar *
__qmi_message_loc_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        case QMI_INDICATION_LOC_POSITION_REPORT:
            return indication_position_report_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_NMEA:
            return indication_nmea_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_INJECT_TIME_REQUEST:
            return indication_inject_time_request_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST:
            return indication_inject_predicted_orbits_request_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_INJECT_POSITION_REQUEST:
            return indication_inject_position_request_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_ENGINE_STATE:
            return indication_engine_state_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_FIX_RECURRENCE_TYPE:
            return indication_fix_recurrence_type_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_GNSS_SV_INFO:
            return indication_gnss_sv_info_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA:
            return indication_inject_predicted_orbits_data_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE:
            return indication_get_predicted_orbits_data_source_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY:
            return indication_get_predicted_orbits_data_validity_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_INJECT_UTC_TIME:
            return indication_inject_utc_time_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_INJECT_POSITION:
            return indication_inject_position_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_SET_ENGINE_LOCK:
            return indication_set_engine_lock_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_GET_ENGINE_LOCK:
            return indication_get_engine_lock_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_SET_NMEA_TYPES:
            return indication_set_nmea_types_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_GET_NMEA_TYPES:
            return indication_get_nmea_types_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_SET_SERVER:
            return indication_set_server_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_GET_SERVER:
            return indication_get_server_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_DELETE_ASSISTANCE_DATA:
            return indication_delete_assistance_data_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_SET_OPERATION_MODE:
            return indication_set_operation_mode_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_GET_OPERATION_MODE:
            return indication_get_operation_mode_get_printable (self, line_prefix);
        case QMI_INDICATION_LOC_INJECT_XTRA_DATA:
            return indication_inject_xtra_data_get_printable (self, line_prefix);
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_LOC_REGISTER_EVENTS:
                return message_register_events_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_START:
                return message_start_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_STOP:
                return message_stop_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_INJECT_PREDICTED_ORBITS_DATA:
                return message_inject_predicted_orbits_data_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE:
                return message_get_predicted_orbits_data_source_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY:
                return message_get_predicted_orbits_data_validity_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_INJECT_UTC_TIME:
                return message_inject_utc_time_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_INJECT_POSITION:
                return message_inject_position_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_SET_ENGINE_LOCK:
                return message_set_engine_lock_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_GET_ENGINE_LOCK:
                return message_get_engine_lock_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_SET_NMEA_TYPES:
                return message_set_nmea_types_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_GET_NMEA_TYPES:
                return message_get_nmea_types_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_SET_SERVER:
                return message_set_server_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_GET_SERVER:
                return message_get_server_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_DELETE_ASSISTANCE_DATA:
                return message_delete_assistance_data_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_SET_OPERATION_MODE:
                return message_set_operation_mode_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_GET_OPERATION_MODE:
                return message_get_operation_mode_get_printable (self, line_prefix);
            case QMI_MESSAGE_LOC_INJECT_XTRA_DATA:
                return message_inject_xtra_data_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client LOC */

G_DEFINE_TYPE (QmiClientLoc, qmi_client_loc, QMI_TYPE_CLIENT)

enum {
    SIGNAL_POSITION_REPORT,
    SIGNAL_NMEA,
    SIGNAL_INJECT_TIME_REQUEST,
    SIGNAL_INJECT_PREDICTED_ORBITS_REQUEST,
    SIGNAL_INJECT_POSITION_REQUEST,
    SIGNAL_ENGINE_STATE,
    SIGNAL_FIX_RECURRENCE_TYPE,
    SIGNAL_GNSS_SV_INFO,
    SIGNAL_INJECT_PREDICTED_ORBITS_DATA,
    SIGNAL_GET_PREDICTED_ORBITS_DATA_SOURCE,
    SIGNAL_GET_PREDICTED_ORBITS_DATA_VALIDITY,
    SIGNAL_INJECT_UTC_TIME,
    SIGNAL_INJECT_POSITION,
    SIGNAL_SET_ENGINE_LOCK,
    SIGNAL_GET_ENGINE_LOCK,
    SIGNAL_SET_NMEA_TYPES,
    SIGNAL_GET_NMEA_TYPES,
    SIGNAL_SET_SERVER,
    SIGNAL_GET_SERVER,
    SIGNAL_DELETE_ASSISTANCE_DATA,
    SIGNAL_SET_OPERATION_MODE,
    SIGNAL_GET_OPERATION_MODE,
    SIGNAL_INJECT_XTRA_DATA,
    SIGNAL_LAST
};

static guint signals[SIGNAL_LAST] = { 0 };

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        case QMI_INDICATION_LOC_POSITION_REPORT: {
            QmiIndicationLocPositionReportOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_position_report_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Position Report' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_POSITION_REPORT], 0, output);
                qmi_indication_loc_position_report_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_NMEA: {
            QmiIndicationLocNmeaOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_nmea_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'NMEA' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_NMEA], 0, output);
                qmi_indication_loc_nmea_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_INJECT_TIME_REQUEST: {
            QmiIndicationLocInjectTimeRequestOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_inject_time_request_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Inject Time Request' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_INJECT_TIME_REQUEST], 0, output);
                qmi_indication_loc_inject_time_request_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST: {
            QmiIndicationLocInjectPredictedOrbitsRequestOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_inject_predicted_orbits_request_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Inject Predicted Orbits Request' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_INJECT_PREDICTED_ORBITS_REQUEST], 0, output);
                qmi_indication_loc_inject_predicted_orbits_request_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_INJECT_POSITION_REQUEST: {
            QmiIndicationLocInjectPositionRequestOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_inject_position_request_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Inject Position Request' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_INJECT_POSITION_REQUEST], 0, output);
                qmi_indication_loc_inject_position_request_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_ENGINE_STATE: {
            QmiIndicationLocEngineStateOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_engine_state_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Engine State' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_ENGINE_STATE], 0, output);
                qmi_indication_loc_engine_state_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_FIX_RECURRENCE_TYPE: {
            QmiIndicationLocFixRecurrenceTypeOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_fix_recurrence_type_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Fix Recurrence Type' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_FIX_RECURRENCE_TYPE], 0, output);
                qmi_indication_loc_fix_recurrence_type_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_GNSS_SV_INFO: {
            QmiIndicationLocGnssSvInfoOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_gnss_sv_info_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'GNSS Sv Info' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_GNSS_SV_INFO], 0, output);
                qmi_indication_loc_gnss_sv_info_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA: {
            QmiIndicationLocInjectPredictedOrbitsDataOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_inject_predicted_orbits_data_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Inject Predicted Orbits Data' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_INJECT_PREDICTED_ORBITS_DATA], 0, output);
                qmi_indication_loc_inject_predicted_orbits_data_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE: {
            QmiIndicationLocGetPredictedOrbitsDataSourceOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_get_predicted_orbits_data_source_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Get Predicted Orbits Data Source' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_GET_PREDICTED_ORBITS_DATA_SOURCE], 0, output);
                qmi_indication_loc_get_predicted_orbits_data_source_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY: {
            QmiIndicationLocGetPredictedOrbitsDataValidityOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_get_predicted_orbits_data_validity_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Get Predicted Orbits Data Validity' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_GET_PREDICTED_ORBITS_DATA_VALIDITY], 0, output);
                qmi_indication_loc_get_predicted_orbits_data_validity_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_INJECT_UTC_TIME: {
            QmiIndicationLocInjectUtcTimeOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_inject_utc_time_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Inject UTC Time' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_INJECT_UTC_TIME], 0, output);
                qmi_indication_loc_inject_utc_time_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_INJECT_POSITION: {
            QmiIndicationLocInjectPositionOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_inject_position_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Inject Position' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_INJECT_POSITION], 0, output);
                qmi_indication_loc_inject_position_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_SET_ENGINE_LOCK: {
            QmiIndicationLocSetEngineLockOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_set_engine_lock_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Set Engine Lock' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_SET_ENGINE_LOCK], 0, output);
                qmi_indication_loc_set_engine_lock_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_GET_ENGINE_LOCK: {
            QmiIndicationLocGetEngineLockOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_get_engine_lock_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Get Engine Lock' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_GET_ENGINE_LOCK], 0, output);
                qmi_indication_loc_get_engine_lock_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_SET_NMEA_TYPES: {
            QmiIndicationLocSetNmeaTypesOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_set_nmea_types_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Set NMEA Types' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_SET_NMEA_TYPES], 0, output);
                qmi_indication_loc_set_nmea_types_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_GET_NMEA_TYPES: {
            QmiIndicationLocGetNmeaTypesOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_get_nmea_types_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Get NMEA Types' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_GET_NMEA_TYPES], 0, output);
                qmi_indication_loc_get_nmea_types_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_SET_SERVER: {
            QmiIndicationLocSetServerOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_set_server_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Set Server' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_SET_SERVER], 0, output);
                qmi_indication_loc_set_server_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_GET_SERVER: {
            QmiIndicationLocGetServerOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_get_server_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Get Server' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_GET_SERVER], 0, output);
                qmi_indication_loc_get_server_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_DELETE_ASSISTANCE_DATA: {
            QmiIndicationLocDeleteAssistanceDataOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_delete_assistance_data_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Delete Assistance Data' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_DELETE_ASSISTANCE_DATA], 0, output);
                qmi_indication_loc_delete_assistance_data_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_SET_OPERATION_MODE: {
            QmiIndicationLocSetOperationModeOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_set_operation_mode_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Set Operation Mode' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_SET_OPERATION_MODE], 0, output);
                qmi_indication_loc_set_operation_mode_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_GET_OPERATION_MODE: {
            QmiIndicationLocGetOperationModeOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_get_operation_mode_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Get Operation Mode' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_GET_OPERATION_MODE], 0, output);
                qmi_indication_loc_get_operation_mode_output_unref (output);
            }
            break;
        }
        case QMI_INDICATION_LOC_INJECT_XTRA_DATA: {
            QmiIndicationLocInjectXtraDataOutput *output;
            GError *error = NULL;

            /* Parse indication */
            output = qmi_indication_loc_inject_xtra_data_indication_parse (message, &error);
            if (!output) {
                g_warning ("Couldn't parse 'Inject Xtra Data' indication: %s",
                           error ? error->message : "Unknown error");
                if (error)
                    g_error_free (error);
            } else {
                g_signal_emit (self, signals[SIGNAL_INJECT_XTRA_DATA], 0, output);
                qmi_indication_loc_inject_xtra_data_output_unref (output);
            }
            break;
        }
        default:
            break;
    }
}

static void
qmi_client_loc_init (QmiClientLoc *self)
{
}

static void
qmi_client_loc_class_init (QmiClientLocClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;

    /**
     * QmiClientLoc::position-report:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocPositionReportOutput.
     *
     * The ::position-report signal gets emitted when a '<link linkend="libqmi-glib-LOC-Position-Report-indication.top_of_page">Position Report</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_POSITION_REPORT] =
        g_signal_new ("position-report",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_POSITION_REPORT_OUTPUT);

    /**
     * QmiClientLoc::nmea:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocNmeaOutput.
     *
     * The ::nmea signal gets emitted when a '<link linkend="libqmi-glib-LOC-NMEA-indication.top_of_page">NMEA</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_NMEA] =
        g_signal_new ("nmea",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_NMEA_OUTPUT);

    /**
     * QmiClientLoc::inject-time-request:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocInjectTimeRequestOutput.
     *
     * The ::inject-time-request signal gets emitted when a '<link linkend="libqmi-glib-LOC-Inject-Time-Request-indication.top_of_page">Inject Time Request</link>' indication is received.
     *
     * Since: 1.37
     */
    signals[SIGNAL_INJECT_TIME_REQUEST] =
        g_signal_new ("inject-time-request",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_INJECT_TIME_REQUEST_OUTPUT);

    /**
     * QmiClientLoc::inject-predicted-orbits-request:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocInjectPredictedOrbitsRequestOutput.
     *
     * The ::inject-predicted-orbits-request signal gets emitted when a '<link linkend="libqmi-glib-LOC-Inject-Predicted-Orbits-Request-indication.top_of_page">Inject Predicted Orbits Request</link>' indication is received.
     *
     * Since: 1.37
     */
    signals[SIGNAL_INJECT_PREDICTED_ORBITS_REQUEST] =
        g_signal_new ("inject-predicted-orbits-request",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_INJECT_PREDICTED_ORBITS_REQUEST_OUTPUT);

    /**
     * QmiClientLoc::inject-position-request:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocInjectPositionRequestOutput.
     *
     * The ::inject-position-request signal gets emitted when a '<link linkend="libqmi-glib-LOC-Inject-Position-Request-indication.top_of_page">Inject Position Request</link>' indication is received.
     *
     * Since: 1.37
     */
    signals[SIGNAL_INJECT_POSITION_REQUEST] =
        g_signal_new ("inject-position-request",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_INJECT_POSITION_REQUEST_OUTPUT);

    /**
     * QmiClientLoc::engine-state:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocEngineStateOutput.
     *
     * The ::engine-state signal gets emitted when a '<link linkend="libqmi-glib-LOC-Engine-State-indication.top_of_page">Engine State</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_ENGINE_STATE] =
        g_signal_new ("engine-state",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_ENGINE_STATE_OUTPUT);

    /**
     * QmiClientLoc::fix-recurrence-type:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocFixRecurrenceTypeOutput.
     *
     * The ::fix-recurrence-type signal gets emitted when a '<link linkend="libqmi-glib-LOC-Fix-Recurrence-Type-indication.top_of_page">Fix Recurrence Type</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_FIX_RECURRENCE_TYPE] =
        g_signal_new ("fix-recurrence-type",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_FIX_RECURRENCE_TYPE_OUTPUT);

    /**
     * QmiClientLoc::gnss-sv-info:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocGnssSvInfoOutput.
     *
     * The ::gnss-sv-info signal gets emitted when a '<link linkend="libqmi-glib-LOC-GNSS-Sv-Info-indication.top_of_page">GNSS Sv Info</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_GNSS_SV_INFO] =
        g_signal_new ("gnss-sv-info",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_GNSS_SV_INFO_OUTPUT);

    /**
     * QmiClientLoc::inject-predicted-orbits-data:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocInjectPredictedOrbitsDataOutput.
     *
     * The ::inject-predicted-orbits-data signal gets emitted when a '<link linkend="libqmi-glib-LOC-Inject-Predicted-Orbits-Data-indication.top_of_page">Inject Predicted Orbits Data</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_INJECT_PREDICTED_ORBITS_DATA] =
        g_signal_new ("inject-predicted-orbits-data",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_INJECT_PREDICTED_ORBITS_DATA_OUTPUT);

    /**
     * QmiClientLoc::get-predicted-orbits-data-source:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocGetPredictedOrbitsDataSourceOutput.
     *
     * The ::get-predicted-orbits-data-source signal gets emitted when a '<link linkend="libqmi-glib-LOC-Get-Predicted-Orbits-Data-Source-indication.top_of_page">Get Predicted Orbits Data Source</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_GET_PREDICTED_ORBITS_DATA_SOURCE] =
        g_signal_new ("get-predicted-orbits-data-source",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_SOURCE_OUTPUT);

    /**
     * QmiClientLoc::get-predicted-orbits-data-validity:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocGetPredictedOrbitsDataValidityOutput.
     *
     * The ::get-predicted-orbits-data-validity signal gets emitted when a '<link linkend="libqmi-glib-LOC-Get-Predicted-Orbits-Data-Validity-indication.top_of_page">Get Predicted Orbits Data Validity</link>' indication is received.
     *
     * Since: 1.37
     */
    signals[SIGNAL_GET_PREDICTED_ORBITS_DATA_VALIDITY] =
        g_signal_new ("get-predicted-orbits-data-validity",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_GET_PREDICTED_ORBITS_DATA_VALIDITY_OUTPUT);

    /**
     * QmiClientLoc::inject-utc-time:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocInjectUtcTimeOutput.
     *
     * The ::inject-utc-time signal gets emitted when a '<link linkend="libqmi-glib-LOC-Inject-UTC-Time-indication.top_of_page">Inject UTC Time</link>' indication is received.
     *
     * Since: 1.37
     */
    signals[SIGNAL_INJECT_UTC_TIME] =
        g_signal_new ("inject-utc-time",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_INJECT_UTC_TIME_OUTPUT);

    /**
     * QmiClientLoc::inject-position:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocInjectPositionOutput.
     *
     * The ::inject-position signal gets emitted when a '<link linkend="libqmi-glib-LOC-Inject-Position-indication.top_of_page">Inject Position</link>' indication is received.
     *
     * Since: 1.37
     */
    signals[SIGNAL_INJECT_POSITION] =
        g_signal_new ("inject-position",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_INJECT_POSITION_OUTPUT);

    /**
     * QmiClientLoc::set-engine-lock:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocSetEngineLockOutput.
     *
     * The ::set-engine-lock signal gets emitted when a '<link linkend="libqmi-glib-LOC-Set-Engine-Lock-indication.top_of_page">Set Engine Lock</link>' indication is received.
     *
     * Since: 1.28
     */
    signals[SIGNAL_SET_ENGINE_LOCK] =
        g_signal_new ("set-engine-lock",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_SET_ENGINE_LOCK_OUTPUT);

    /**
     * QmiClientLoc::get-engine-lock:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocGetEngineLockOutput.
     *
     * The ::get-engine-lock signal gets emitted when a '<link linkend="libqmi-glib-LOC-Get-Engine-Lock-indication.top_of_page">Get Engine Lock</link>' indication is received.
     *
     * Since: 1.28
     */
    signals[SIGNAL_GET_ENGINE_LOCK] =
        g_signal_new ("get-engine-lock",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_GET_ENGINE_LOCK_OUTPUT);

    /**
     * QmiClientLoc::set-nmea-types:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocSetNmeaTypesOutput.
     *
     * The ::set-nmea-types signal gets emitted when a '<link linkend="libqmi-glib-LOC-Set-NMEA-Types-indication.top_of_page">Set NMEA Types</link>' indication is received.
     *
     * Since: 1.26
     */
    signals[SIGNAL_SET_NMEA_TYPES] =
        g_signal_new ("set-nmea-types",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_SET_NMEA_TYPES_OUTPUT);

    /**
     * QmiClientLoc::get-nmea-types:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocGetNmeaTypesOutput.
     *
     * The ::get-nmea-types signal gets emitted when a '<link linkend="libqmi-glib-LOC-Get-NMEA-Types-indication.top_of_page">Get NMEA Types</link>' indication is received.
     *
     * Since: 1.26
     */
    signals[SIGNAL_GET_NMEA_TYPES] =
        g_signal_new ("get-nmea-types",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_GET_NMEA_TYPES_OUTPUT);

    /**
     * QmiClientLoc::set-server:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocSetServerOutput.
     *
     * The ::set-server signal gets emitted when a '<link linkend="libqmi-glib-LOC-Set-Server-indication.top_of_page">Set Server</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_SET_SERVER] =
        g_signal_new ("set-server",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_SET_SERVER_OUTPUT);

    /**
     * QmiClientLoc::get-server:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocGetServerOutput.
     *
     * The ::get-server signal gets emitted when a '<link linkend="libqmi-glib-LOC-Get-Server-indication.top_of_page">Get Server</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_GET_SERVER] =
        g_signal_new ("get-server",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_GET_SERVER_OUTPUT);

    /**
     * QmiClientLoc::delete-assistance-data:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocDeleteAssistanceDataOutput.
     *
     * The ::delete-assistance-data signal gets emitted when a '<link linkend="libqmi-glib-LOC-Delete-Assistance-Data-indication.top_of_page">Delete Assistance Data</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_DELETE_ASSISTANCE_DATA] =
        g_signal_new ("delete-assistance-data",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_DELETE_ASSISTANCE_DATA_OUTPUT);

    /**
     * QmiClientLoc::set-operation-mode:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocSetOperationModeOutput.
     *
     * The ::set-operation-mode signal gets emitted when a '<link linkend="libqmi-glib-LOC-Set-Operation-Mode-indication.top_of_page">Set Operation Mode</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_SET_OPERATION_MODE] =
        g_signal_new ("set-operation-mode",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_SET_OPERATION_MODE_OUTPUT);

    /**
     * QmiClientLoc::get-operation-mode:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocGetOperationModeOutput.
     *
     * The ::get-operation-mode signal gets emitted when a '<link linkend="libqmi-glib-LOC-Get-Operation-Mode-indication.top_of_page">Get Operation Mode</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_GET_OPERATION_MODE] =
        g_signal_new ("get-operation-mode",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_GET_OPERATION_MODE_OUTPUT);

    /**
     * QmiClientLoc::inject-xtra-data:
     * @object: A #QmiClientLoc.
     * @output: A #QmiIndicationLocInjectXtraDataOutput.
     *
     * The ::inject-xtra-data signal gets emitted when a '<link linkend="libqmi-glib-LOC-Inject-Xtra-Data-indication.top_of_page">Inject Xtra Data</link>' indication is received.
     *
     * Since: 1.22
     */
    signals[SIGNAL_INJECT_XTRA_DATA] =
        g_signal_new ("inject-xtra-data",
                      G_OBJECT_CLASS_TYPE (G_OBJECT_CLASS (klass)),
                      G_SIGNAL_RUN_LAST,
                      0,
                      NULL,
                      NULL,
                      NULL,
                      G_TYPE_NONE,
                      1,
                      QMI_TYPE_INDICATION_LOC_INJECT_XTRA_DATA_OUTPUT);
}


QmiMessageLocRegisterEventsOutput *
qmi_client_loc_register_events_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
register_events_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocRegisterEventsOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_register_events_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_register_events_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_register_events (
    QmiClientLoc *self,
    QmiMessageLocRegisterEventsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_register_events_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)register_events_ready,
                             task);
}


QmiMessageLocStartOutput *
qmi_client_loc_start_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
start_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocStartOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_start_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_start_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_start (
    QmiClientLoc *self,
    QmiMessageLocStartInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_start_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)start_ready,
                             task);
}


QmiMessageLocStopOutput *
qmi_client_loc_stop_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
stop_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocStopOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_stop_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_stop_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_stop (
    QmiClientLoc *self,
    QmiMessageLocStopInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_stop_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)stop_ready,
                             task);
}


QmiMessageLocInjectPredictedOrbitsDataOutput *
qmi_client_loc_inject_predicted_orbits_data_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
inject_predicted_orbits_data_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocInjectPredictedOrbitsDataOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_inject_predicted_orbits_data_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_inject_predicted_orbits_data_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_inject_predicted_orbits_data (
    QmiClientLoc *self,
    QmiMessageLocInjectPredictedOrbitsDataInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_inject_predicted_orbits_data_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)inject_predicted_orbits_data_ready,
                             task);
}


QmiMessageLocGetPredictedOrbitsDataSourceOutput *
qmi_client_loc_get_predicted_orbits_data_source_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_predicted_orbits_data_source_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocGetPredictedOrbitsDataSourceOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_get_predicted_orbits_data_source_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_get_predicted_orbits_data_source_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_get_predicted_orbits_data_source (
    QmiClientLoc *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_get_predicted_orbits_data_source_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  NULL,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)get_predicted_orbits_data_source_ready,
                             task);
}


QmiMessageLocGetPredictedOrbitsDataValidityOutput *
qmi_client_loc_get_predicted_orbits_data_validity_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_predicted_orbits_data_validity_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocGetPredictedOrbitsDataValidityOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_get_predicted_orbits_data_validity_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_get_predicted_orbits_data_validity_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_get_predicted_orbits_data_validity (
    QmiClientLoc *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_get_predicted_orbits_data_validity_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  NULL,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)get_predicted_orbits_data_validity_ready,
                             task);
}


QmiMessageLocInjectUtcTimeOutput *
qmi_client_loc_inject_utc_time_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
inject_utc_time_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocInjectUtcTimeOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_inject_utc_time_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_inject_utc_time_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_inject_utc_time (
    QmiClientLoc *self,
    QmiMessageLocInjectUtcTimeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_inject_utc_time_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)inject_utc_time_ready,
                             task);
}


QmiMessageLocInjectPositionOutput *
qmi_client_loc_inject_position_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
inject_position_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocInjectPositionOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_inject_position_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_inject_position_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_inject_position (
    QmiClientLoc *self,
    QmiMessageLocInjectPositionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_inject_position_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)inject_position_ready,
                             task);
}


QmiMessageLocSetEngineLockOutput *
qmi_client_loc_set_engine_lock_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_engine_lock_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocSetEngineLockOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_set_engine_lock_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_set_engine_lock_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_set_engine_lock (
    QmiClientLoc *self,
    QmiMessageLocSetEngineLockInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_set_engine_lock_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)set_engine_lock_ready,
                             task);
}


QmiMessageLocGetEngineLockOutput *
qmi_client_loc_get_engine_lock_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_engine_lock_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocGetEngineLockOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_get_engine_lock_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_get_engine_lock_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_get_engine_lock (
    QmiClientLoc *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_get_engine_lock_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  NULL,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)get_engine_lock_ready,
                             task);
}


QmiMessageLocSetNmeaTypesOutput *
qmi_client_loc_set_nmea_types_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_nmea_types_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocSetNmeaTypesOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_set_nmea_types_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_set_nmea_types_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_set_nmea_types (
    QmiClientLoc *self,
    QmiMessageLocSetNmeaTypesInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_set_nmea_types_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)set_nmea_types_ready,
                             task);
}


QmiMessageLocGetNmeaTypesOutput *
qmi_client_loc_get_nmea_types_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_nmea_types_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocGetNmeaTypesOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_get_nmea_types_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_get_nmea_types_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_get_nmea_types (
    QmiClientLoc *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_get_nmea_types_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  NULL,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)get_nmea_types_ready,
                             task);
}


QmiMessageLocSetServerOutput *
qmi_client_loc_set_server_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_server_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocSetServerOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_set_server_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_set_server_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_set_server (
    QmiClientLoc *self,
    QmiMessageLocSetServerInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_set_server_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)set_server_ready,
                             task);
}


QmiMessageLocGetServerOutput *
qmi_client_loc_get_server_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_server_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocGetServerOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_get_server_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_get_server_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_get_server (
    QmiClientLoc *self,
    QmiMessageLocGetServerInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_get_server_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)get_server_ready,
                             task);
}


QmiMessageLocDeleteAssistanceDataOutput *
qmi_client_loc_delete_assistance_data_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
delete_assistance_data_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocDeleteAssistanceDataOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_delete_assistance_data_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_delete_assistance_data_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_delete_assistance_data (
    QmiClientLoc *self,
    QmiMessageLocDeleteAssistanceDataInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_delete_assistance_data_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)delete_assistance_data_ready,
                             task);
}


QmiMessageLocSetOperationModeOutput *
qmi_client_loc_set_operation_mode_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
set_operation_mode_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocSetOperationModeOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_set_operation_mode_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_set_operation_mode_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_set_operation_mode (
    QmiClientLoc *self,
    QmiMessageLocSetOperationModeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_set_operation_mode_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)set_operation_mode_ready,
                             task);
}


QmiMessageLocGetOperationModeOutput *
qmi_client_loc_get_operation_mode_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
get_operation_mode_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocGetOperationModeOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_get_operation_mode_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_get_operation_mode_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_get_operation_mode (
    QmiClientLoc *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_get_operation_mode_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  NULL,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)get_operation_mode_ready,
                             task);
}


QmiMessageLocInjectXtraDataOutput *
qmi_client_loc_inject_xtra_data_finish (
    QmiClientLoc *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
inject_xtra_data_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageLocInjectXtraDataOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_loc_inject_xtra_data_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_loc_inject_xtra_data_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_loc_inject_xtra_data (
    QmiClientLoc *self,
    QmiMessageLocInjectXtraDataInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
    GTask *task;
    GError *error = NULL;
    guint16 transaction_id;
    g_autoptr(QmiMessage) request = NULL;

    task = g_task_new (self, cancellable, callback, user_data);
    if (!qmi_client_is_valid (QMI_CLIENT (self))) {
        g_task_return_new_error (task, QMI_CORE_ERROR, QMI_CORE_ERROR_WRONG_STATE, "client invalid");
        g_object_unref (task);
        return;
    }

    transaction_id = qmi_client_get_next_transaction_id (QMI_CLIENT (self));

    request = __qmi_message_loc_inject_xtra_data_request_create (
                  transaction_id,
                  qmi_client_get_cid (QMI_CLIENT (self)),
                  input,
                  &error);
    if (!request) {
        g_prefix_error (&error, "Couldn't create request message: ");
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    qmi_device_command_full (QMI_DEVICE (qmi_client_peek_device (QMI_CLIENT (self))),
                             request,
                             NULL,
                             timeout,
                             cancellable,
                             (GAsyncReadyCallback)inject_xtra_data_ready,
                             task);
}

