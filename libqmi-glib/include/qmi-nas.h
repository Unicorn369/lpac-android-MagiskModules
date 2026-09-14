
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
#include "qmi-enums-nas.h"
#include "qmi-flags64-nas.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_NAS__
#define __LIBQMI_GLIB_QMI_NAS__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_NAS_RESET
#define HAVE_QMI_MESSAGE_NAS_ABORT
#define HAVE_QMI_MESSAGE_NAS_SET_EVENT_REPORT
#define HAVE_QMI_MESSAGE_NAS_REGISTER_INDICATIONS
#define HAVE_QMI_MESSAGE_NAS_GET_SUPPORTED_MESSAGES
#define HAVE_QMI_MESSAGE_NAS_GET_SIGNAL_STRENGTH
#define HAVE_QMI_MESSAGE_NAS_NETWORK_SCAN
#define HAVE_QMI_MESSAGE_NAS_INITIATE_NETWORK_REGISTER
#define HAVE_QMI_MESSAGE_NAS_ATTACH_DETACH
#define HAVE_QMI_MESSAGE_NAS_GET_SERVING_SYSTEM
#define HAVE_QMI_MESSAGE_NAS_GET_HOME_NETWORK
#define HAVE_QMI_MESSAGE_NAS_GET_PREFERRED_NETWORKS
#define HAVE_QMI_MESSAGE_NAS_SET_PREFERRED_NETWORKS
#define HAVE_QMI_MESSAGE_NAS_SET_TECHNOLOGY_PREFERENCE
#define HAVE_QMI_MESSAGE_NAS_GET_TECHNOLOGY_PREFERENCE
#define HAVE_QMI_MESSAGE_NAS_GET_RF_BAND_INFORMATION
#define HAVE_QMI_MESSAGE_NAS_SET_SYSTEM_SELECTION_PREFERENCE
#define HAVE_QMI_MESSAGE_NAS_GET_SYSTEM_SELECTION_PREFERENCE
#define HAVE_QMI_MESSAGE_NAS_GET_OPERATOR_NAME
#define HAVE_QMI_MESSAGE_NAS_GET_CELL_LOCATION_INFO
#define HAVE_QMI_MESSAGE_NAS_GET_PLMN_NAME
#define HAVE_QMI_MESSAGE_NAS_GET_SYSTEM_INFO
#define HAVE_QMI_MESSAGE_NAS_GET_SIGNAL_INFO
#define HAVE_QMI_MESSAGE_NAS_CONFIG_SIGNAL_INFO
#define HAVE_QMI_MESSAGE_NAS_CONFIG_SIGNAL_INFO_V2
#define HAVE_QMI_MESSAGE_NAS_GET_TX_RX_INFO
#define HAVE_QMI_MESSAGE_NAS_GET_CDMA_POSITION_INFO
#define HAVE_QMI_MESSAGE_NAS_FORCE_NETWORK_SEARCH
#define HAVE_QMI_MESSAGE_NAS_GET_NETWORK_TIME
#define HAVE_QMI_MESSAGE_NAS_INCREMENTAL_NETWORK_SCAN
#define HAVE_QMI_MESSAGE_NAS_GET_DRX
#define HAVE_QMI_MESSAGE_NAS_GET_LTE_CPHY_CA_INFO
#define HAVE_QMI_MESSAGE_NAS_GET_ENDC_CONFIG
#define HAVE_QMI_MESSAGE_NAS_SWI_GET_STATUS
#define HAVE_QMI_INDICATION_NAS_EVENT_REPORT
#define HAVE_QMI_INDICATION_NAS_SERVING_SYSTEM
#define HAVE_QMI_INDICATION_NAS_OPERATOR_NAME
#define HAVE_QMI_INDICATION_NAS_NETWORK_TIME
#define HAVE_QMI_INDICATION_NAS_SYSTEM_INFO
#define HAVE_QMI_INDICATION_NAS_SIGNAL_INFO
#define HAVE_QMI_INDICATION_NAS_NETWORK_REJECT
#define HAVE_QMI_INDICATION_NAS_INCREMENTAL_NETWORK_SCAN

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS Event Report */


/* --- Output -- */


/**
 * QmiIndicationNasEventReportOutputRfBandInformationElement:
 * @radio_interface: a #QmiNasRadioInterface.
 * @active_band_class: a #QmiNasActiveBand.
 * @active_channel: a #guint16.
 *
 * A QmiIndicationNasEventReportOutputRfBandInformationElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasEventReportOutputRfBandInformationElement {
    QmiNasRadioInterface radio_interface;
    QmiNasActiveBand active_band_class;
    guint16 active_channel;
} QmiIndicationNasEventReportOutputRfBandInformationElement;

GType qmi_indication_nas_event_report_output_rf_band_information_element_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationNasEventReportOutput:
 *
 * The #QmiIndicationNasEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasEventReportOutput QmiIndicationNasEventReportOutput;
GType qmi_indication_nas_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_EVENT_REPORT_OUTPUT (qmi_indication_nas_event_report_output_get_type ())


/**
 * qmi_indication_nas_event_report_output_get_lte_rsrp:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_lte_rsrp: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE RSRP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_lte_rsrp (
    QmiIndicationNasEventReportOutput *self,
    gint16 *value_lte_rsrp,
    GError **error);


/**
 * qmi_indication_nas_event_report_output_get_lte_snr:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_lte_snr: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE SNR' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_lte_snr (
    QmiIndicationNasEventReportOutput *self,
    gint16 *value_lte_snr,
    GError **error);


/**
 * qmi_indication_nas_event_report_output_get_rsrq:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_rsrq_rsrq: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_rsrq_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSRQ' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_rsrq (
    QmiIndicationNasEventReportOutput *self,
    gint8 *value_rsrq_rsrq,
    QmiNasRadioInterface *value_rsrq_radio_interface,
    GError **error);


/**
 * qmi_indication_nas_event_report_output_get_error_rate:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_error_rate_rate: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_error_rate_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Error Rate' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_error_rate (
    QmiIndicationNasEventReportOutput *self,
    guint16 *value_error_rate_rate,
    QmiNasRadioInterface *value_error_rate_radio_interface,
    GError **error);


/**
 * qmi_indication_nas_event_report_output_get_sinr:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_sinr: (out)(optional): a placeholder for the output #QmiNasEvdoSinrLevel, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SINR' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_sinr (
    QmiIndicationNasEventReportOutput *self,
    QmiNasEvdoSinrLevel *value_sinr,
    GError **error);


/**
 * qmi_indication_nas_event_report_output_get_io:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_io: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IO' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_io (
    QmiIndicationNasEventReportOutput *self,
    gint32 *value_io,
    GError **error);


/**
 * qmi_indication_nas_event_report_output_get_ecio:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_ecio_ecio: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_ecio_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ECIO' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_nas_event_report_output_get_ecio (
    QmiIndicationNasEventReportOutput *self,
    guint8 *value_ecio_ecio,
    QmiNasRadioInterface *value_ecio_radio_interface,
    GError **error);


/**
 * qmi_indication_nas_event_report_output_get_rssi:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_rssi_rssi: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_rssi_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSSI' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_rssi (
    QmiIndicationNasEventReportOutput *self,
    guint8 *value_rssi_rssi,
    QmiNasRadioInterface *value_rssi_radio_interface,
    GError **error);


/**
 * qmi_indication_nas_event_report_output_get_registration_reject_reason:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_registration_reject_reason_service_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_registration_reject_reason_reject_cause: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Registration Reject Reason' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_registration_reject_reason (
    QmiIndicationNasEventReportOutput *self,
    QmiNasNetworkServiceDomain *value_registration_reject_reason_service_domain,
    guint16 *value_registration_reject_reason_reject_cause,
    GError **error);


/**
 * qmi_indication_nas_event_report_output_get_rf_band_information: (skip)
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_rf_band_information: (out)(optional)(element-type QmiIndicationNasEventReportOutputRfBandInformationElement)(transfer none): a placeholder for the output #GArray of #QmiIndicationNasEventReportOutputRfBandInformationElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RF Band Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_rf_band_information (
    QmiIndicationNasEventReportOutput *self,
    GArray **value_rf_band_information,
    GError **error);


/**
 * qmi_indication_nas_event_report_output_get_rf_band_information_gir: (rename-to qmi_indication_nas_event_report_output_get_rf_band_information)
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_rf_band_information_ptr: (out)(optional)(element-type QmiIndicationNasEventReportOutputRfBandInformationElement)(transfer none): a placeholder for the output array of #QmiIndicationNasEventReportOutputRfBandInformationElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RF Band Information' field from @self.
 *
 * Version of qmi_indication_nas_event_report_output_get_rf_band_information() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_nas_event_report_output_get_rf_band_information_gir (
    QmiIndicationNasEventReportOutput *self,
    GPtrArray **value_rf_band_information_ptr,
    GError **error);


/**
 * qmi_indication_nas_event_report_output_get_signal_strength:
 * @self: a #QmiIndicationNasEventReportOutput.
 * @value_signal_strength_strength: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_signal_strength_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_event_report_output_get_signal_strength (
    QmiIndicationNasEventReportOutput *self,
    gint8 *value_signal_strength_strength,
    QmiNasRadioInterface *value_signal_strength_radio_interface,
    GError **error);


/**
 * qmi_indication_nas_event_report_output_ref:
 * @self: a #QmiIndicationNasEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationNasEventReportOutput *qmi_indication_nas_event_report_output_ref (QmiIndicationNasEventReportOutput *self);

/**
 * qmi_indication_nas_event_report_output_unref:
 * @self: a #QmiIndicationNasEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_nas_event_report_output_unref (QmiIndicationNasEventReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationNasEventReportOutput, qmi_indication_nas_event_report_output_unref)

/**
 * qmi_indication_nas_event_report_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationNasEventReportOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationNasEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_nas_event_report_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationNasEventReportOutput *qmi_indication_nas_event_report_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS Serving System */


/* --- Output -- */


/**
 * QmiIndicationNasServingSystemOutputRoamingIndicatorListElement:
 * @radio_interface: a #QmiNasRadioInterface.
 * @roaming_indicator: a #QmiNasRoamingIndicatorStatus.
 *
 * A QmiIndicationNasServingSystemOutputRoamingIndicatorListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasServingSystemOutputRoamingIndicatorListElement {
    QmiNasRadioInterface radio_interface;
    QmiNasRoamingIndicatorStatus roaming_indicator;
} QmiIndicationNasServingSystemOutputRoamingIndicatorListElement;

GType qmi_indication_nas_serving_system_output_roaming_indicator_list_element_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationNasServingSystemOutput:
 *
 * The #QmiIndicationNasServingSystemOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasServingSystemOutput QmiIndicationNasServingSystemOutput;
GType qmi_indication_nas_serving_system_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_SERVING_SYSTEM_OUTPUT (qmi_indication_nas_serving_system_output_get_type ())


/**
 * qmi_indication_nas_serving_system_output_get_network_name_source:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_network_name_source: (out)(optional): a placeholder for the output #QmiNasNetworkNameSource, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Name Source' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_indication_nas_serving_system_output_get_network_name_source (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasNetworkNameSource *value_network_name_source,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_mnc_pcs_digit_include_status:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_mnc_pcs_digit_include_status_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_mnc_pcs_digit_include_status_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_mnc_pcs_digit_include_status_includes_pcs_digit: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_mnc_pcs_digit_include_status (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_mnc_pcs_digit_include_status_mcc,
    guint16 *value_mnc_pcs_digit_include_status_mnc,
    gboolean *value_mnc_pcs_digit_include_status_includes_pcs_digit,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_umts_primary_scrambling_code:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_umts_primary_scrambling_code: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Primary Scrambling Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_umts_primary_scrambling_code (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_umts_primary_scrambling_code,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_plmn_not_changed_indication:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_plmn_not_changed_indication: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PLMN Not Changed Indication' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_plmn_not_changed_indication (
    QmiIndicationNasServingSystemOutput *self,
    gboolean *value_plmn_not_changed_indication,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_call_barring_status:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_call_barring_status_cs_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_call_barring_status_ps_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Barring Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_call_barring_status (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasCallBarringStatus *value_call_barring_status_cs_status,
    QmiNasCallBarringStatus *value_call_barring_status_ps_status,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_lte_tac:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_lte_tac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE TAC' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_lte_tac (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_lte_tac,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_hdr_personality:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_hdr_personality: (out)(optional): a placeholder for the output #QmiNasHdrPersonality, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Personality' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_hdr_personality (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasHdrPersonality *value_hdr_personality,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_cdma_system_info:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_cdma_system_info_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_imsi_11_12: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_cdma_system_info (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_cdma_system_info_mcc,
    guint8 *value_cdma_system_info_imsi_11_12,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_detailed_service_status:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_detailed_service_status_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_detailed_service_status_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_detailed_service_status_hdr_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_detailed_service_status_hdr_hybrid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_detailed_service_status_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Detailed Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_detailed_service_status (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasServiceStatus *value_detailed_service_status_status,
    QmiNasNetworkServiceDomain *value_detailed_service_status_capability,
    QmiNasServiceStatus *value_detailed_service_status_hdr_status,
    gboolean *value_detailed_service_status_hdr_hybrid,
    gboolean *value_detailed_service_status_forbidden,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_dtm_support:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_dtm_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'DTM Support' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_dtm_support (
    QmiIndicationNasServingSystemOutput *self,
    gboolean *value_dtm_support,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_prl_indicator_3gpp2:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_prl_indicator_3gpp2: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PRL Indicator 3GPP2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_prl_indicator_3gpp2 (
    QmiIndicationNasServingSystemOutput *self,
    gboolean *value_prl_indicator_3gpp2,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_concurrent_service_info_3gpp2:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_concurrent_service_info_3gpp2: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Concurrent Service Info 3GPP2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_concurrent_service_info_3gpp2 (
    QmiIndicationNasServingSystemOutput *self,
    gboolean *value_concurrent_service_info_3gpp2,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_cid_3gpp:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_cid_3gpp: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CID 3GPP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_cid_3gpp (
    QmiIndicationNasServingSystemOutput *self,
    guint32 *value_cid_3gpp,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_lac_3gpp:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_lac_3gpp: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LAC 3GPP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_lac_3gpp (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_lac_3gpp,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_universal_time_and_local_time_zone_3gpp:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_universal_time_and_local_time_zone_3gpp_year: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_universal_time_and_local_time_zone_3gpp_month: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_and_local_time_zone_3gpp_day: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_and_local_time_zone_3gpp_hour: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_and_local_time_zone_3gpp_minute: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_and_local_time_zone_3gpp_second: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_and_local_time_zone_3gpp_time_zone: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Universal Time and Local Time Zone 3GPP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_universal_time_and_local_time_zone_3gpp (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_universal_time_and_local_time_zone_3gpp_year,
    guint8 *value_universal_time_and_local_time_zone_3gpp_month,
    guint8 *value_universal_time_and_local_time_zone_3gpp_day,
    guint8 *value_universal_time_and_local_time_zone_3gpp_hour,
    guint8 *value_universal_time_and_local_time_zone_3gpp_minute,
    guint8 *value_universal_time_and_local_time_zone_3gpp_second,
    guint8 *value_universal_time_and_local_time_zone_3gpp_time_zone,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_daylight_saving_time_adjustment_3gpp:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_daylight_saving_time_adjustment_3gpp: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Daylight Saving Time Adjustment 3GPP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_daylight_saving_time_adjustment_3gpp (
    QmiIndicationNasServingSystemOutput *self,
    guint8 *value_daylight_saving_time_adjustment_3gpp,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_time_zone_3gpp:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_time_zone_3gpp: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Zone 3GPP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_time_zone_3gpp (
    QmiIndicationNasServingSystemOutput *self,
    gint8 *value_time_zone_3gpp,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_plmn_name_flag_3gpp:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_plmn_name_flag_3gpp: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PLMN Name Flag 3GPP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_plmn_name_flag_3gpp (
    QmiIndicationNasServingSystemOutput *self,
    gboolean *value_plmn_name_flag_3gpp,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_cdma_p_rev:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_cdma_p_rev: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA P Rev' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_cdma_p_rev (
    QmiIndicationNasServingSystemOutput *self,
    guint8 *value_cdma_p_rev,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_time_zone_3gpp2:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_time_zone_3gpp2_leap_seconds: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_time_zone_3gpp2_local_time_offset: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_time_zone_3gpp2_daylight_saving_time: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Zone 3GPP2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_time_zone_3gpp2 (
    QmiIndicationNasServingSystemOutput *self,
    guint8 *value_time_zone_3gpp2_leap_seconds,
    gint8 *value_time_zone_3gpp2_local_time_offset,
    gboolean *value_time_zone_3gpp2_daylight_saving_time,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_default_roaming_indicator:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_default_roaming_indicator: (out)(optional): a placeholder for the output #QmiNasRoamingIndicatorStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Default Roaming Indicator' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_default_roaming_indicator (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasRoamingIndicatorStatus *value_default_roaming_indicator,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_roaming_indicator_list: (skip)
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_roaming_indicator_list: (out)(optional)(element-type QmiIndicationNasServingSystemOutputRoamingIndicatorListElement)(transfer none): a placeholder for the output #GArray of #QmiIndicationNasServingSystemOutputRoamingIndicatorListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Indicator List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_roaming_indicator_list (
    QmiIndicationNasServingSystemOutput *self,
    GArray **value_roaming_indicator_list,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_roaming_indicator_list_gir: (rename-to qmi_indication_nas_serving_system_output_get_roaming_indicator_list)
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_roaming_indicator_list_ptr: (out)(optional)(element-type QmiIndicationNasServingSystemOutputRoamingIndicatorListElement)(transfer none): a placeholder for the output array of #QmiIndicationNasServingSystemOutputRoamingIndicatorListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Indicator List' field from @self.
 *
 * Version of qmi_indication_nas_serving_system_output_get_roaming_indicator_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_nas_serving_system_output_get_roaming_indicator_list_gir (
    QmiIndicationNasServingSystemOutput *self,
    GPtrArray **value_roaming_indicator_list_ptr,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_cdma_base_station_info:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_cdma_base_station_info_base_station_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_base_station_info_base_station_latitude: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_cdma_base_station_info_base_station_longitude: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Base Station Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_cdma_base_station_info (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_cdma_base_station_info_base_station_id,
    gint32 *value_cdma_base_station_info_base_station_latitude,
    gint32 *value_cdma_base_station_info_base_station_longitude,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_cdma_system_id:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_cdma_system_id_sid: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_id_nid: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA System ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_cdma_system_id (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_cdma_system_id_sid,
    guint16 *value_cdma_system_id_nid,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_current_plmn:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_current_plmn_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_current_plmn_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_current_plmn_description: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current PLMN' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_current_plmn (
    QmiIndicationNasServingSystemOutput *self,
    guint16 *value_current_plmn_mcc,
    guint16 *value_current_plmn_mnc,
    const gchar **value_current_plmn_description,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_data_service_capability:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_data_service_capability: (out)(optional)(element-type QmiNasDataCapability)(transfer none): a placeholder for the output #GArray of #QmiNasDataCapability elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Service Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_data_service_capability (
    QmiIndicationNasServingSystemOutput *self,
    GArray **value_data_service_capability,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_roaming_indicator:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_roaming_indicator: (out)(optional): a placeholder for the output #QmiNasRoamingIndicatorStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Indicator' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_roaming_indicator (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasRoamingIndicatorStatus *value_roaming_indicator,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_get_serving_system:
 * @self: a #QmiIndicationNasServingSystemOutput.
 * @value_serving_system_registration_state: (out)(optional): a placeholder for the output #QmiNasRegistrationState, or %NULL if not required.
 * @value_serving_system_cs_attach_state: (out)(optional): a placeholder for the output #QmiNasAttachState, or %NULL if not required.
 * @value_serving_system_ps_attach_state: (out)(optional): a placeholder for the output #QmiNasAttachState, or %NULL if not required.
 * @value_serving_system_selected_network: (out)(optional): a placeholder for the output #QmiNasNetworkType, or %NULL if not required.
 * @value_serving_system_radio_interfaces: (out)(optional)(element-type QmiNasRadioInterface)(transfer none): a placeholder for the output #GArray of #QmiNasRadioInterface elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Serving System' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_serving_system_output_get_serving_system (
    QmiIndicationNasServingSystemOutput *self,
    QmiNasRegistrationState *value_serving_system_registration_state,
    QmiNasAttachState *value_serving_system_cs_attach_state,
    QmiNasAttachState *value_serving_system_ps_attach_state,
    QmiNasNetworkType *value_serving_system_selected_network,
    GArray **value_serving_system_radio_interfaces,
    GError **error);


/**
 * qmi_indication_nas_serving_system_output_ref:
 * @self: a #QmiIndicationNasServingSystemOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationNasServingSystemOutput *qmi_indication_nas_serving_system_output_ref (QmiIndicationNasServingSystemOutput *self);

/**
 * qmi_indication_nas_serving_system_output_unref:
 * @self: a #QmiIndicationNasServingSystemOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_nas_serving_system_output_unref (QmiIndicationNasServingSystemOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationNasServingSystemOutput, qmi_indication_nas_serving_system_output_unref)

/**
 * qmi_indication_nas_serving_system_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationNasServingSystemOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationNasServingSystemOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_nas_serving_system_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationNasServingSystemOutput *qmi_indication_nas_serving_system_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS Operator Name */


/* --- Output -- */


/**
 * QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement:
 * @name_encoding: a #QmiNasPlmnEncodingScheme.
 * @short_country_initials: a #QmiNasPlmnNameCountryInitials.
 * @long_name_spare_bits: a #QmiNasPlmnNameSpareBits.
 * @short_name_spare_bits: a #QmiNasPlmnNameSpareBits.
 * @long_name: a #GArray of #guint8 elements.
 * @short_name: a #GArray of #guint8 elements.
 *
 * A QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement struct.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement {
    QmiNasPlmnEncodingScheme name_encoding;
    QmiNasPlmnNameCountryInitials short_country_initials;
    QmiNasPlmnNameSpareBits long_name_spare_bits;
    QmiNasPlmnNameSpareBits short_name_spare_bits;
    GArray *long_name;
    GArray *short_name;
} QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement;

GType qmi_indication_nas_operator_name_output_operator_plmn_name_element_get_type (void) G_GNUC_CONST;


/**
 * QmiIndicationNasOperatorNameOutputOperatorPlmnListElement:
 * @mcc: a string of exactly 3 characters.
 * @mnc: a string of exactly 3 characters.
 * @lac1: a #guint16.
 * @lac2: a #guint16.
 * @plmn_name_record_identifier: a #guint8.
 *
 * A QmiIndicationNasOperatorNameOutputOperatorPlmnListElement struct.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationNasOperatorNameOutputOperatorPlmnListElement {
    gchar *mcc;
    gchar *mnc;
    guint16 lac1;
    guint16 lac2;
    guint8 plmn_name_record_identifier;
} QmiIndicationNasOperatorNameOutputOperatorPlmnListElement;

GType qmi_indication_nas_operator_name_output_operator_plmn_list_element_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationNasOperatorNameOutput:
 *
 * The #QmiIndicationNasOperatorNameOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationNasOperatorNameOutput QmiIndicationNasOperatorNameOutput;
GType qmi_indication_nas_operator_name_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_OPERATOR_NAME_OUTPUT (qmi_indication_nas_operator_name_output_get_type ())


/**
 * qmi_indication_nas_operator_name_output_get_nitz_information:
 * @self: a #QmiIndicationNasOperatorNameOutput.
 * @value_nitz_information_name_encoding: (out)(optional): a placeholder for the output #QmiNasPlmnEncodingScheme, or %NULL if not required.
 * @value_nitz_information_short_country_initials: (out)(optional): a placeholder for the output #QmiNasPlmnNameCountryInitials, or %NULL if not required.
 * @value_nitz_information_long_name_spare_bits: (out)(optional): a placeholder for the output #QmiNasPlmnNameSpareBits, or %NULL if not required.
 * @value_nitz_information_short_name_spare_bits: (out)(optional): a placeholder for the output #QmiNasPlmnNameSpareBits, or %NULL if not required.
 * @value_nitz_information_long_name: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_nitz_information_short_name: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NITZ Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24.6
 */
gboolean qmi_indication_nas_operator_name_output_get_nitz_information (
    QmiIndicationNasOperatorNameOutput *self,
    QmiNasPlmnEncodingScheme *value_nitz_information_name_encoding,
    QmiNasPlmnNameCountryInitials *value_nitz_information_short_country_initials,
    QmiNasPlmnNameSpareBits *value_nitz_information_long_name_spare_bits,
    QmiNasPlmnNameSpareBits *value_nitz_information_short_name_spare_bits,
    GArray **value_nitz_information_long_name,
    GArray **value_nitz_information_short_name,
    GError **error);


/**
 * qmi_indication_nas_operator_name_output_get_operator_string_name:
 * @self: a #QmiIndicationNasOperatorNameOutput.
 * @value_operator_string_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator String Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_nas_operator_name_output_get_operator_string_name (
    QmiIndicationNasOperatorNameOutput *self,
    const gchar **value_operator_string_name,
    GError **error);


/**
 * qmi_indication_nas_operator_name_output_get_operator_plmn_name: (skip)
 * @self: a #QmiIndicationNasOperatorNameOutput.
 * @value_operator_plmn_name: (out)(optional)(element-type QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement)(transfer none): a placeholder for the output #GArray of #QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator PLMN Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_nas_operator_name_output_get_operator_plmn_name (
    QmiIndicationNasOperatorNameOutput *self,
    GArray **value_operator_plmn_name,
    GError **error);


/**
 * qmi_indication_nas_operator_name_output_get_operator_plmn_name_gir: (rename-to qmi_indication_nas_operator_name_output_get_operator_plmn_name)
 * @self: a #QmiIndicationNasOperatorNameOutput.
 * @value_operator_plmn_name_ptr: (out)(optional)(element-type QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement)(transfer none): a placeholder for the output array of #QmiIndicationNasOperatorNameOutputOperatorPlmnNameElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator PLMN Name' field from @self.
 *
 * Version of qmi_indication_nas_operator_name_output_get_operator_plmn_name() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_nas_operator_name_output_get_operator_plmn_name_gir (
    QmiIndicationNasOperatorNameOutput *self,
    GPtrArray **value_operator_plmn_name_ptr,
    GError **error);


/**
 * qmi_indication_nas_operator_name_output_get_operator_plmn_list: (skip)
 * @self: a #QmiIndicationNasOperatorNameOutput.
 * @value_operator_plmn_list: (out)(optional)(element-type QmiIndicationNasOperatorNameOutputOperatorPlmnListElement)(transfer none): a placeholder for the output #GArray of #QmiIndicationNasOperatorNameOutputOperatorPlmnListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator PLMN List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_nas_operator_name_output_get_operator_plmn_list (
    QmiIndicationNasOperatorNameOutput *self,
    GArray **value_operator_plmn_list,
    GError **error);


/**
 * qmi_indication_nas_operator_name_output_get_operator_plmn_list_gir: (rename-to qmi_indication_nas_operator_name_output_get_operator_plmn_list)
 * @self: a #QmiIndicationNasOperatorNameOutput.
 * @value_operator_plmn_list_ptr: (out)(optional)(element-type QmiIndicationNasOperatorNameOutputOperatorPlmnListElement)(transfer none): a placeholder for the output array of #QmiIndicationNasOperatorNameOutputOperatorPlmnListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator PLMN List' field from @self.
 *
 * Version of qmi_indication_nas_operator_name_output_get_operator_plmn_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_nas_operator_name_output_get_operator_plmn_list_gir (
    QmiIndicationNasOperatorNameOutput *self,
    GPtrArray **value_operator_plmn_list_ptr,
    GError **error);


/**
 * qmi_indication_nas_operator_name_output_get_service_provider_name:
 * @self: a #QmiIndicationNasOperatorNameOutput.
 * @value_service_provider_name_name_display_condition: (out)(optional): a placeholder for the output #QmiNasNetworkNameDisplayCondition, or %NULL if not required.
 * @value_service_provider_name_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Provider Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_nas_operator_name_output_get_service_provider_name (
    QmiIndicationNasOperatorNameOutput *self,
    QmiNasNetworkNameDisplayCondition *value_service_provider_name_name_display_condition,
    const gchar **value_service_provider_name_name,
    GError **error);


/**
 * qmi_indication_nas_operator_name_output_ref:
 * @self: a #QmiIndicationNasOperatorNameOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiIndicationNasOperatorNameOutput *qmi_indication_nas_operator_name_output_ref (QmiIndicationNasOperatorNameOutput *self);

/**
 * qmi_indication_nas_operator_name_output_unref:
 * @self: a #QmiIndicationNasOperatorNameOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_indication_nas_operator_name_output_unref (QmiIndicationNasOperatorNameOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationNasOperatorNameOutput, qmi_indication_nas_operator_name_output_unref)

/**
 * qmi_indication_nas_operator_name_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationNasOperatorNameOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationNasOperatorNameOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_nas_operator_name_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationNasOperatorNameOutput *qmi_indication_nas_operator_name_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS Network Time */


/* --- Output -- */

/**
 * QmiIndicationNasNetworkTimeOutput:
 *
 * The #QmiIndicationNasNetworkTimeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasNetworkTimeOutput QmiIndicationNasNetworkTimeOutput;
GType qmi_indication_nas_network_time_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_NETWORK_TIME_OUTPUT (qmi_indication_nas_network_time_output_get_type ())


/**
 * qmi_indication_nas_network_time_output_get_radio_interface:
 * @self: a #QmiIndicationNasNetworkTimeOutput.
 * @value_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Radio Interface' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.4
 */
gboolean qmi_indication_nas_network_time_output_get_radio_interface (
    QmiIndicationNasNetworkTimeOutput *self,
    QmiNasRadioInterface *value_radio_interface,
    GError **error);


/**
 * qmi_indication_nas_network_time_output_get_daylight_savings_adjustment:
 * @self: a #QmiIndicationNasNetworkTimeOutput.
 * @value_daylight_savings_adjustment: (out)(optional): a placeholder for the output #QmiNasDaylightSavingsAdjustment, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Daylight Savings Adjustment' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.4
 */
gboolean qmi_indication_nas_network_time_output_get_daylight_savings_adjustment (
    QmiIndicationNasNetworkTimeOutput *self,
    QmiNasDaylightSavingsAdjustment *value_daylight_savings_adjustment,
    GError **error);


/**
 * qmi_indication_nas_network_time_output_get_timezone_offset:
 * @self: a #QmiIndicationNasNetworkTimeOutput.
 * @value_timezone_offset: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Timezone Offset' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.4
 */
gboolean qmi_indication_nas_network_time_output_get_timezone_offset (
    QmiIndicationNasNetworkTimeOutput *self,
    gint8 *value_timezone_offset,
    GError **error);


/**
 * qmi_indication_nas_network_time_output_get_universal_time:
 * @self: a #QmiIndicationNasNetworkTimeOutput.
 * @value_universal_time_year: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_universal_time_month: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_day: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_hour: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_minute: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_second: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_universal_time_day_of_week: (out)(optional): a placeholder for the output #QmiNasDayOfWeek, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Universal Time' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.4
 */
gboolean qmi_indication_nas_network_time_output_get_universal_time (
    QmiIndicationNasNetworkTimeOutput *self,
    guint16 *value_universal_time_year,
    guint8 *value_universal_time_month,
    guint8 *value_universal_time_day,
    guint8 *value_universal_time_hour,
    guint8 *value_universal_time_minute,
    guint8 *value_universal_time_second,
    QmiNasDayOfWeek *value_universal_time_day_of_week,
    GError **error);


/**
 * qmi_indication_nas_network_time_output_ref:
 * @self: a #QmiIndicationNasNetworkTimeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationNasNetworkTimeOutput *qmi_indication_nas_network_time_output_ref (QmiIndicationNasNetworkTimeOutput *self);

/**
 * qmi_indication_nas_network_time_output_unref:
 * @self: a #QmiIndicationNasNetworkTimeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_nas_network_time_output_unref (QmiIndicationNasNetworkTimeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationNasNetworkTimeOutput, qmi_indication_nas_network_time_output_unref)

/**
 * qmi_indication_nas_network_time_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationNasNetworkTimeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationNasNetworkTimeOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_nas_network_time_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationNasNetworkTimeOutput *qmi_indication_nas_network_time_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS System Info */


/* --- Output -- */

/**
 * QmiIndicationNasSystemInfoOutput:
 *
 * The #QmiIndicationNasSystemInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasSystemInfoOutput QmiIndicationNasSystemInfoOutput;
GType qmi_indication_nas_system_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_SYSTEM_INFO_OUTPUT (qmi_indication_nas_system_info_output_get_type ())


/**
 * qmi_indication_nas_system_info_output_get_nr5g_tracking_area_code:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_nr5g_tracking_area_code: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G Tracking Area Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_system_info_output_get_nr5g_tracking_area_code (
    QmiIndicationNasSystemInfoOutput *self,
    GArray **value_nr5g_tracking_area_code,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_dcnr_restriction_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_dcnr_restriction_info: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'DCNR restriction Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_system_info_output_get_dcnr_restriction_info (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_dcnr_restriction_info,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_eutra_with_nr5g_availability:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_eutra_with_nr5g_availability: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'EUTRA with NR5G availability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_system_info_output_get_eutra_with_nr5g_availability (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_eutra_with_nr5g_availability,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_nr5g_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_nr5g_system_info_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_nr5g_system_info_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_nr5g_system_info_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_nr5g_system_info_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_lac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_nr5g_system_info_cid_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_cid: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_nr5g_system_info_registration_reject_info_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_registration_reject_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_nr5g_system_info_registration_reject_cause: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_nr5g_system_info_network_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_mcc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_nr5g_system_info_mnc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_nr5g_system_info_tac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_tac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_system_info_output_get_nr5g_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_nr5g_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_nr5g_system_info_domain,
    gboolean *value_nr5g_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_nr5g_system_info_service_capability,
    gboolean *value_nr5g_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_nr5g_system_info_roaming_status,
    gboolean *value_nr5g_system_info_forbidden_valid,
    gboolean *value_nr5g_system_info_forbidden,
    gboolean *value_nr5g_system_info_lac_valid,
    guint16 *value_nr5g_system_info_lac,
    gboolean *value_nr5g_system_info_cid_valid,
    guint32 *value_nr5g_system_info_cid,
    gboolean *value_nr5g_system_info_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_nr5g_system_info_registration_reject_domain,
    guint8 *value_nr5g_system_info_registration_reject_cause,
    gboolean *value_nr5g_system_info_network_id_valid,
    const gchar **value_nr5g_system_info_mcc,
    const gchar **value_nr5g_system_info_mnc,
    gboolean *value_nr5g_system_info_tac_valid,
    guint16 *value_nr5g_system_info_tac,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_nr5g_service_status_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_nr5g_service_status_info_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_nr5g_service_status_info_true_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_nr5g_service_status_info_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G Service Status Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_system_info_output_get_nr5g_service_status_info (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_nr5g_service_status_info_service_status,
    QmiNasServiceStatus *value_nr5g_service_status_info_true_service_status,
    gboolean *value_nr5g_service_status_info_preferred_data_path,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_sim_reject_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_sim_reject_info: (out)(optional): a placeholder for the output #QmiNasSimRejectState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SIM Reject Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_sim_reject_info (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasSimRejectState *value_sim_reject_info,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_lte_embms_coverage_info_support:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_lte_embms_coverage_info_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE eMBMS Coverage Info Support' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_lte_embms_coverage_info_support (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_lte_embms_coverage_info_support,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_td_scma_system_info_v2:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_td_scma_system_info_v2_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_td_scma_system_info_v2_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_td_scma_system_info_v2_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_td_scma_system_info_v2_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_lac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_td_scma_system_info_v2_cid_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_cid: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_td_scma_system_info_v2_registration_reject_info_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_registration_reject_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_td_scma_system_info_v2_registration_reject_cause: (out)(optional): a placeholder for the output #QmiNasRejectCause, or %NULL if not required.
 * @value_td_scma_system_info_v2_network_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_mcc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_td_scma_system_info_v2_mnc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_td_scma_system_info_v2_hs_call_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_hs_call_status: (out)(optional): a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_td_scma_system_info_v2_hs_service_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_hs_service: (out)(optional): a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_td_scma_system_info_v2_cell_parameter_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_cell_parameter_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_td_scma_system_info_v2_cell_broadcast_support_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_cell_broadcast_support: (out)(optional): a placeholder for the output #QmiNasCellBroadcastCapability, or %NULL if not required.
 * @value_td_scma_system_info_v2_cs_call_barring_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_cs_call_barring_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_td_scma_system_info_v2_ps_call_barring_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_ps_call_barring_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_td_scma_system_info_v2_cipher_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scma_system_info_v2_cipher_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TD SCMA System Info v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_system_info_output_get_td_scma_system_info_v2 (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_td_scma_system_info_v2_domain_valid,
    QmiNasNetworkServiceDomain *value_td_scma_system_info_v2_domain,
    gboolean *value_td_scma_system_info_v2_service_capability_valid,
    QmiNasNetworkServiceDomain *value_td_scma_system_info_v2_service_capability,
    gboolean *value_td_scma_system_info_v2_roaming_status_valid,
    QmiNasRoamingStatus *value_td_scma_system_info_v2_roaming_status,
    gboolean *value_td_scma_system_info_v2_forbidden_valid,
    gboolean *value_td_scma_system_info_v2_forbidden,
    gboolean *value_td_scma_system_info_v2_lac_valid,
    guint16 *value_td_scma_system_info_v2_lac,
    gboolean *value_td_scma_system_info_v2_cid_valid,
    guint32 *value_td_scma_system_info_v2_cid,
    gboolean *value_td_scma_system_info_v2_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_td_scma_system_info_v2_registration_reject_domain,
    QmiNasRejectCause *value_td_scma_system_info_v2_registration_reject_cause,
    gboolean *value_td_scma_system_info_v2_network_id_valid,
    const gchar **value_td_scma_system_info_v2_mcc,
    const gchar **value_td_scma_system_info_v2_mnc,
    gboolean *value_td_scma_system_info_v2_hs_call_status_valid,
    QmiNasWcdmaHsService *value_td_scma_system_info_v2_hs_call_status,
    gboolean *value_td_scma_system_info_v2_hs_service_valid,
    QmiNasWcdmaHsService *value_td_scma_system_info_v2_hs_service,
    gboolean *value_td_scma_system_info_v2_cell_parameter_id_valid,
    guint16 *value_td_scma_system_info_v2_cell_parameter_id,
    gboolean *value_td_scma_system_info_v2_cell_broadcast_support_valid,
    QmiNasCellBroadcastCapability *value_td_scma_system_info_v2_cell_broadcast_support,
    gboolean *value_td_scma_system_info_v2_cs_call_barring_status_valid,
    QmiNasCallBarringStatus *value_td_scma_system_info_v2_cs_call_barring_status,
    gboolean *value_td_scma_system_info_v2_ps_call_barring_status_valid,
    QmiNasCallBarringStatus *value_td_scma_system_info_v2_ps_call_barring_status,
    gboolean *value_td_scma_system_info_v2_cipher_domain_valid,
    QmiNasNetworkServiceDomain *value_td_scma_system_info_v2_cipher_domain,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_td_scdma_service_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_td_scdma_service_status_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_td_scdma_service_status_true_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_td_scdma_service_status_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TD SCDMA Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_td_scdma_service_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_td_scdma_service_status_service_status,
    QmiNasServiceStatus *value_td_scdma_service_status_true_service_status,
    gboolean *value_td_scdma_service_status_preferred_data_path,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_plmn_not_changed_indication:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_plmn_not_changed_indication: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PLMN Not Changed Indication' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_plmn_not_changed_indication (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_plmn_not_changed_indication,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_wcdma_cipher_domain:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_wcdma_cipher_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Cipher Domain' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_wcdma_cipher_domain (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasNetworkServiceDomain *value_wcdma_cipher_domain,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_gsm_cipher_domain:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_gsm_cipher_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Cipher Domain' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_gsm_cipher_domain (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasNetworkServiceDomain *value_gsm_cipher_domain,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_lte_voice_support:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_lte_voice_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Voice Support' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_lte_voice_support (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_lte_voice_support,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_wcdma_call_barring_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_wcdma_call_barring_status_cs_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_wcdma_call_barring_status_ps_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Call Barring Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_wcdma_call_barring_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasCallBarringStatus *value_wcdma_call_barring_status_cs_status,
    QmiNasCallBarringStatus *value_wcdma_call_barring_status_ps_status,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_gsm_call_barring_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_gsm_call_barring_status_cs_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_gsm_call_barring_status_ps_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Call Barring Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_gsm_call_barring_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasCallBarringStatus *value_gsm_call_barring_status_cs_status,
    QmiNasCallBarringStatus *value_gsm_call_barring_status_ps_status,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_additional_lte_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_additional_lte_system_info_geo_system_index: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional LTE System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_additional_lte_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    guint16 *value_additional_lte_system_info_geo_system_index,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_additional_wcdma_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_additional_wcdma_system_info_geo_system_index: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_additional_wcdma_system_info_cell_broadcast_support: (out)(optional): a placeholder for the output #QmiNasCellBroadcastCapability, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional WCDMA System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_additional_wcdma_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    guint16 *value_additional_wcdma_system_info_geo_system_index,
    QmiNasCellBroadcastCapability *value_additional_wcdma_system_info_cell_broadcast_support,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_additional_gsm_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_additional_gsm_system_info_geo_system_index: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_additional_gsm_system_info_cell_broadcast_support: (out)(optional): a placeholder for the output #QmiNasCellBroadcastCapability, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional GSM System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_additional_gsm_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    guint16 *value_additional_gsm_system_info_geo_system_index,
    QmiNasCellBroadcastCapability *value_additional_gsm_system_info_cell_broadcast_support,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_additional_hdr_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_additional_hdr_system_info_geo_system_index: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional HDR System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_additional_hdr_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    guint16 *value_additional_hdr_system_info_geo_system_index,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_additional_cdma_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_additional_cdma_system_info_geo_system_index: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_additional_cdma_system_info_registration_period: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional CDMA System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_additional_cdma_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    guint16 *value_additional_cdma_system_info_geo_system_index,
    guint16 *value_additional_cdma_system_info_registration_period,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_lte_system_info_v2:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_lte_system_info_v2_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_lte_system_info_v2_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_lte_system_info_v2_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_lte_system_info_v2_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_lac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_lte_system_info_v2_cid_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_cid: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_system_info_v2_registration_reject_info_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_registration_reject_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_lte_system_info_v2_registration_reject_cause: (out)(optional): a placeholder for the output #QmiNasRejectCause, or %NULL if not required.
 * @value_lte_system_info_v2_network_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_mcc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_lte_system_info_v2_mnc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_lte_system_info_v2_tac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_tac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE System Info v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_system_info_output_get_lte_system_info_v2 (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_lte_system_info_v2_domain_valid,
    QmiNasNetworkServiceDomain *value_lte_system_info_v2_domain,
    gboolean *value_lte_system_info_v2_service_capability_valid,
    QmiNasNetworkServiceDomain *value_lte_system_info_v2_service_capability,
    gboolean *value_lte_system_info_v2_roaming_status_valid,
    QmiNasRoamingStatus *value_lte_system_info_v2_roaming_status,
    gboolean *value_lte_system_info_v2_forbidden_valid,
    gboolean *value_lte_system_info_v2_forbidden,
    gboolean *value_lte_system_info_v2_lac_valid,
    guint16 *value_lte_system_info_v2_lac,
    gboolean *value_lte_system_info_v2_cid_valid,
    guint32 *value_lte_system_info_v2_cid,
    gboolean *value_lte_system_info_v2_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_lte_system_info_v2_registration_reject_domain,
    QmiNasRejectCause *value_lte_system_info_v2_registration_reject_cause,
    gboolean *value_lte_system_info_v2_network_id_valid,
    const gchar **value_lte_system_info_v2_mcc,
    const gchar **value_lte_system_info_v2_mnc,
    gboolean *value_lte_system_info_v2_tac_valid,
    guint16 *value_lte_system_info_v2_tac,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_wcdma_system_info_v2:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_wcdma_system_info_v2_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_wcdma_system_info_v2_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_wcdma_system_info_v2_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_wcdma_system_info_v2_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_lac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_wcdma_system_info_v2_cid_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_cid: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_wcdma_system_info_v2_registration_reject_info_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_registration_reject_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_wcdma_system_info_v2_registration_reject_cause: (out)(optional): a placeholder for the output #QmiNasRejectCause, or %NULL if not required.
 * @value_wcdma_system_info_v2_network_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_mcc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_wcdma_system_info_v2_mnc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_wcdma_system_info_v2_hs_call_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_hs_call_status: (out)(optional): a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_wcdma_system_info_v2_hs_service_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_hs_service: (out)(optional): a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_wcdma_system_info_v2_primary_scrambling_code_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_primary_scrambling_code: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA System Info v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_system_info_output_get_wcdma_system_info_v2 (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_wcdma_system_info_v2_domain_valid,
    QmiNasNetworkServiceDomain *value_wcdma_system_info_v2_domain,
    gboolean *value_wcdma_system_info_v2_service_capability_valid,
    QmiNasNetworkServiceDomain *value_wcdma_system_info_v2_service_capability,
    gboolean *value_wcdma_system_info_v2_roaming_status_valid,
    QmiNasRoamingStatus *value_wcdma_system_info_v2_roaming_status,
    gboolean *value_wcdma_system_info_v2_forbidden_valid,
    gboolean *value_wcdma_system_info_v2_forbidden,
    gboolean *value_wcdma_system_info_v2_lac_valid,
    guint16 *value_wcdma_system_info_v2_lac,
    gboolean *value_wcdma_system_info_v2_cid_valid,
    guint32 *value_wcdma_system_info_v2_cid,
    gboolean *value_wcdma_system_info_v2_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_wcdma_system_info_v2_registration_reject_domain,
    QmiNasRejectCause *value_wcdma_system_info_v2_registration_reject_cause,
    gboolean *value_wcdma_system_info_v2_network_id_valid,
    const gchar **value_wcdma_system_info_v2_mcc,
    const gchar **value_wcdma_system_info_v2_mnc,
    gboolean *value_wcdma_system_info_v2_hs_call_status_valid,
    QmiNasWcdmaHsService *value_wcdma_system_info_v2_hs_call_status,
    gboolean *value_wcdma_system_info_v2_hs_service_valid,
    QmiNasWcdmaHsService *value_wcdma_system_info_v2_hs_service,
    gboolean *value_wcdma_system_info_v2_primary_scrambling_code_valid,
    guint16 *value_wcdma_system_info_v2_primary_scrambling_code,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_gsm_system_info_v2:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_gsm_system_info_v2_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_gsm_system_info_v2_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_gsm_system_info_v2_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_gsm_system_info_v2_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_lac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_gsm_system_info_v2_cid_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_cid: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gsm_system_info_v2_registration_reject_info_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_registration_reject_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_gsm_system_info_v2_registration_reject_cause: (out)(optional): a placeholder for the output #QmiNasRejectCause, or %NULL if not required.
 * @value_gsm_system_info_v2_network_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_mcc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_gsm_system_info_v2_mnc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_gsm_system_info_v2_egprs_support_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_egprs_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_dtm_support_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_dtm_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM System Info v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_system_info_output_get_gsm_system_info_v2 (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_gsm_system_info_v2_domain_valid,
    QmiNasNetworkServiceDomain *value_gsm_system_info_v2_domain,
    gboolean *value_gsm_system_info_v2_service_capability_valid,
    QmiNasNetworkServiceDomain *value_gsm_system_info_v2_service_capability,
    gboolean *value_gsm_system_info_v2_roaming_status_valid,
    QmiNasRoamingStatus *value_gsm_system_info_v2_roaming_status,
    gboolean *value_gsm_system_info_v2_forbidden_valid,
    gboolean *value_gsm_system_info_v2_forbidden,
    gboolean *value_gsm_system_info_v2_lac_valid,
    guint16 *value_gsm_system_info_v2_lac,
    gboolean *value_gsm_system_info_v2_cid_valid,
    guint32 *value_gsm_system_info_v2_cid,
    gboolean *value_gsm_system_info_v2_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_gsm_system_info_v2_registration_reject_domain,
    QmiNasRejectCause *value_gsm_system_info_v2_registration_reject_cause,
    gboolean *value_gsm_system_info_v2_network_id_valid,
    const gchar **value_gsm_system_info_v2_mcc,
    const gchar **value_gsm_system_info_v2_mnc,
    gboolean *value_gsm_system_info_v2_egprs_support_valid,
    gboolean *value_gsm_system_info_v2_egprs_support,
    gboolean *value_gsm_system_info_v2_dtm_support_valid,
    gboolean *value_gsm_system_info_v2_dtm_support,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_hdr_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_hdr_system_info_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_hdr_system_info_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_hdr_system_info_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_hdr_system_info_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_prl_match_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_prl_match: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_personality_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_personality: (out)(optional): a placeholder for the output #QmiNasHdrPersonality, or %NULL if not required.
 * @value_hdr_system_info_protocol_revision_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_protocol_revision: (out)(optional): a placeholder for the output #QmiNasHdrProtocolRevision, or %NULL if not required.
 * @value_hdr_system_info_is_856_system_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_is_856_system_id: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_hdr_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_hdr_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_hdr_system_info_domain,
    gboolean *value_hdr_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_hdr_system_info_service_capability,
    gboolean *value_hdr_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_hdr_system_info_roaming_status,
    gboolean *value_hdr_system_info_forbidden_valid,
    gboolean *value_hdr_system_info_forbidden,
    gboolean *value_hdr_system_info_prl_match_valid,
    gboolean *value_hdr_system_info_prl_match,
    gboolean *value_hdr_system_info_personality_valid,
    QmiNasHdrPersonality *value_hdr_system_info_personality,
    gboolean *value_hdr_system_info_protocol_revision_valid,
    QmiNasHdrProtocolRevision *value_hdr_system_info_protocol_revision,
    gboolean *value_hdr_system_info_is_856_system_id_valid,
    const gchar **value_hdr_system_info_is_856_system_id,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_cdma_system_info:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_cdma_system_info_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_cdma_system_info_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_cdma_system_info_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_cdma_system_info_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_prl_match_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_prl_match: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_p_rev_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_p_rev: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_cdma_system_info_base_station_p_rev_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_base_station_p_rev: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_cdma_system_info_concurrent_service_support_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_concurrent_service_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_cdma_system_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_sid: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_nid: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_base_station_info_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_base_station_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_base_station_latitude: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_cdma_system_info_base_station_longitude: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_cdma_system_info_packet_zone_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_packet_zone: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_network_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_mcc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_cdma_system_info_mnc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_cdma_system_info (
    QmiIndicationNasSystemInfoOutput *self,
    gboolean *value_cdma_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_cdma_system_info_domain,
    gboolean *value_cdma_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_cdma_system_info_service_capability,
    gboolean *value_cdma_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_cdma_system_info_roaming_status,
    gboolean *value_cdma_system_info_forbidden_valid,
    gboolean *value_cdma_system_info_forbidden,
    gboolean *value_cdma_system_info_prl_match_valid,
    gboolean *value_cdma_system_info_prl_match,
    gboolean *value_cdma_system_info_p_rev_valid,
    guint8 *value_cdma_system_info_p_rev,
    gboolean *value_cdma_system_info_base_station_p_rev_valid,
    guint8 *value_cdma_system_info_base_station_p_rev,
    gboolean *value_cdma_system_info_concurrent_service_support_valid,
    gboolean *value_cdma_system_info_concurrent_service_support,
    gboolean *value_cdma_system_info_cdma_system_id_valid,
    guint16 *value_cdma_system_info_sid,
    guint16 *value_cdma_system_info_nid,
    gboolean *value_cdma_system_info_base_station_info_valid,
    guint16 *value_cdma_system_info_base_station_id,
    gint32 *value_cdma_system_info_base_station_latitude,
    gint32 *value_cdma_system_info_base_station_longitude,
    gboolean *value_cdma_system_info_packet_zone_valid,
    guint16 *value_cdma_system_info_packet_zone,
    gboolean *value_cdma_system_info_network_id_valid,
    const gchar **value_cdma_system_info_mcc,
    const gchar **value_cdma_system_info_mnc,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_lte_service_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_lte_service_status_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_lte_service_status_true_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_lte_service_status_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_lte_service_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_lte_service_status_service_status,
    QmiNasServiceStatus *value_lte_service_status_true_service_status,
    gboolean *value_lte_service_status_preferred_data_path,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_wcdma_service_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_wcdma_service_status_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_wcdma_service_status_true_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_wcdma_service_status_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_wcdma_service_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_wcdma_service_status_service_status,
    QmiNasServiceStatus *value_wcdma_service_status_true_service_status,
    gboolean *value_wcdma_service_status_preferred_data_path,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_gsm_service_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_gsm_service_status_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_gsm_service_status_true_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_gsm_service_status_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_gsm_service_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_gsm_service_status_service_status,
    QmiNasServiceStatus *value_gsm_service_status_true_service_status,
    gboolean *value_gsm_service_status_preferred_data_path,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_hdr_service_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_hdr_service_status_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_hdr_service_status_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_hdr_service_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_hdr_service_status_service_status,
    gboolean *value_hdr_service_status_preferred_data_path,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_get_cdma_service_status:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 * @value_cdma_service_status_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_cdma_service_status_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_system_info_output_get_cdma_service_status (
    QmiIndicationNasSystemInfoOutput *self,
    QmiNasServiceStatus *value_cdma_service_status_service_status,
    gboolean *value_cdma_service_status_preferred_data_path,
    GError **error);


/**
 * qmi_indication_nas_system_info_output_ref:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationNasSystemInfoOutput *qmi_indication_nas_system_info_output_ref (QmiIndicationNasSystemInfoOutput *self);

/**
 * qmi_indication_nas_system_info_output_unref:
 * @self: a #QmiIndicationNasSystemInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_nas_system_info_output_unref (QmiIndicationNasSystemInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationNasSystemInfoOutput, qmi_indication_nas_system_info_output_unref)

/**
 * qmi_indication_nas_system_info_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationNasSystemInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationNasSystemInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_nas_system_info_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationNasSystemInfoOutput *qmi_indication_nas_system_info_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS Signal Info */


/* --- Output -- */

/**
 * QmiIndicationNasSignalInfoOutput:
 *
 * The #QmiIndicationNasSignalInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiIndicationNasSignalInfoOutput QmiIndicationNasSignalInfoOutput;
GType qmi_indication_nas_signal_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_SIGNAL_INFO_OUTPUT (qmi_indication_nas_signal_info_output_get_type ())


/**
 * qmi_indication_nas_signal_info_output_get_wcdma_rscp:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_wcdma_rscp: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA RSCP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_indication_nas_signal_info_output_get_wcdma_rscp (
    QmiIndicationNasSignalInfoOutput *self,
    gint16 *value_wcdma_rscp,
    GError **error);


/**
 * qmi_indication_nas_signal_info_output_get_5g_signal_strength_extended:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_5g_signal_strength_extended: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the '5G Signal Strength Extended' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_nas_signal_info_output_get_5g_signal_strength_extended (
    QmiIndicationNasSignalInfoOutput *self,
    gint16 *value_5g_signal_strength_extended,
    GError **error);


/**
 * qmi_indication_nas_signal_info_output_get_5g_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_5g_signal_strength_rsrp: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @value_5g_signal_strength_snr: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the '5G Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_nas_signal_info_output_get_5g_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint16 *value_5g_signal_strength_rsrp,
    gint16 *value_5g_signal_strength_snr,
    GError **error);


/**
 * qmi_indication_nas_signal_info_output_get_tdma_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_tdma_signal_strength: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TDMA Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_signal_info_output_get_tdma_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint8 *value_tdma_signal_strength,
    GError **error);


/**
 * qmi_indication_nas_signal_info_output_get_lte_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_lte_signal_strength_rssi: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_lte_signal_strength_rsrq: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_lte_signal_strength_rsrp: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @value_lte_signal_strength_snr: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_signal_info_output_get_lte_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint8 *value_lte_signal_strength_rssi,
    gint8 *value_lte_signal_strength_rsrq,
    gint16 *value_lte_signal_strength_rsrp,
    gint16 *value_lte_signal_strength_snr,
    GError **error);


/**
 * qmi_indication_nas_signal_info_output_get_wcdma_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_wcdma_signal_strength_rssi: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_wcdma_signal_strength_ecio: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_signal_info_output_get_wcdma_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint8 *value_wcdma_signal_strength_rssi,
    gint16 *value_wcdma_signal_strength_ecio,
    GError **error);


/**
 * qmi_indication_nas_signal_info_output_get_gsm_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_gsm_signal_strength: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_signal_info_output_get_gsm_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint8 *value_gsm_signal_strength,
    GError **error);


/**
 * qmi_indication_nas_signal_info_output_get_hdr_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_hdr_signal_strength_rssi: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_hdr_signal_strength_ecio: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @value_hdr_signal_strength_sinr: (out)(optional): a placeholder for the output #QmiNasEvdoSinrLevel, or %NULL if not required.
 * @value_hdr_signal_strength_io: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_signal_info_output_get_hdr_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint8 *value_hdr_signal_strength_rssi,
    gint16 *value_hdr_signal_strength_ecio,
    QmiNasEvdoSinrLevel *value_hdr_signal_strength_sinr,
    gint32 *value_hdr_signal_strength_io,
    GError **error);


/**
 * qmi_indication_nas_signal_info_output_get_cdma_signal_strength:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 * @value_cdma_signal_strength_rssi: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_cdma_signal_strength_ecio: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_indication_nas_signal_info_output_get_cdma_signal_strength (
    QmiIndicationNasSignalInfoOutput *self,
    gint8 *value_cdma_signal_strength_rssi,
    gint16 *value_cdma_signal_strength_ecio,
    GError **error);


/**
 * qmi_indication_nas_signal_info_output_ref:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiIndicationNasSignalInfoOutput *qmi_indication_nas_signal_info_output_ref (QmiIndicationNasSignalInfoOutput *self);

/**
 * qmi_indication_nas_signal_info_output_unref:
 * @self: a #QmiIndicationNasSignalInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_indication_nas_signal_info_output_unref (QmiIndicationNasSignalInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationNasSignalInfoOutput, qmi_indication_nas_signal_info_output_unref)

/**
 * qmi_indication_nas_signal_info_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationNasSignalInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationNasSignalInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_nas_signal_info_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationNasSignalInfoOutput *qmi_indication_nas_signal_info_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS Network Reject */


/* --- Output -- */

/**
 * QmiIndicationNasNetworkRejectOutput:
 *
 * The #QmiIndicationNasNetworkRejectOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiIndicationNasNetworkRejectOutput QmiIndicationNasNetworkRejectOutput;
GType qmi_indication_nas_network_reject_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_NETWORK_REJECT_OUTPUT (qmi_indication_nas_network_reject_output_get_type ())


/**
 * qmi_indication_nas_network_reject_output_get_closed_subscriber_group:
 * @self: a #QmiIndicationNasNetworkRejectOutput.
 * @value_closed_subscriber_group: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Closed Subscriber Group' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_network_reject_output_get_closed_subscriber_group (
    QmiIndicationNasNetworkRejectOutput *self,
    guint32 *value_closed_subscriber_group,
    GError **error);


/**
 * qmi_indication_nas_network_reject_output_get_plmn:
 * @self: a #QmiIndicationNasNetworkRejectOutput.
 * @value_plmn_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_plmn_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_plmn_includes_pcs_digit: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PLMN' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_network_reject_output_get_plmn (
    QmiIndicationNasNetworkRejectOutput *self,
    guint16 *value_plmn_mcc,
    guint16 *value_plmn_mnc,
    gboolean *value_plmn_includes_pcs_digit,
    GError **error);


/**
 * qmi_indication_nas_network_reject_output_get_reject_cause:
 * @self: a #QmiIndicationNasNetworkRejectOutput.
 * @value_reject_cause: (out)(optional): a placeholder for the output #QmiNasRejectCause, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Reject Cause' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_network_reject_output_get_reject_cause (
    QmiIndicationNasNetworkRejectOutput *self,
    QmiNasRejectCause *value_reject_cause,
    GError **error);


/**
 * qmi_indication_nas_network_reject_output_get_service_domain:
 * @self: a #QmiIndicationNasNetworkRejectOutput.
 * @value_service_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Domain' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_network_reject_output_get_service_domain (
    QmiIndicationNasNetworkRejectOutput *self,
    QmiNasNetworkServiceDomain *value_service_domain,
    GError **error);


/**
 * qmi_indication_nas_network_reject_output_get_radio_interface:
 * @self: a #QmiIndicationNasNetworkRejectOutput.
 * @value_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Radio Interface' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_indication_nas_network_reject_output_get_radio_interface (
    QmiIndicationNasNetworkRejectOutput *self,
    QmiNasRadioInterface *value_radio_interface,
    GError **error);


/**
 * qmi_indication_nas_network_reject_output_ref:
 * @self: a #QmiIndicationNasNetworkRejectOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiIndicationNasNetworkRejectOutput *qmi_indication_nas_network_reject_output_ref (QmiIndicationNasNetworkRejectOutput *self);

/**
 * qmi_indication_nas_network_reject_output_unref:
 * @self: a #QmiIndicationNasNetworkRejectOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_indication_nas_network_reject_output_unref (QmiIndicationNasNetworkRejectOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationNasNetworkRejectOutput, qmi_indication_nas_network_reject_output_unref)

/**
 * qmi_indication_nas_network_reject_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationNasNetworkRejectOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationNasNetworkRejectOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_nas_network_reject_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationNasNetworkRejectOutput *qmi_indication_nas_network_reject_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication NAS Incremental Network Scan */


/* --- Output -- */


/**
 * QmiIndicationNasIncrementalNetworkScanOutputNetworkInformationElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @network_status: a #QmiNasNetworkStatus.
 * @radio_interface: a #QmiNasRadioInterface.
 * @includes_pcs_digit: a #gboolean.
 * @description: a string.
 *
 * A QmiIndicationNasIncrementalNetworkScanOutputNetworkInformationElement struct.
 *
 * Since: 1.38
 */
typedef struct _QmiIndicationNasIncrementalNetworkScanOutputNetworkInformationElement {
    guint16 mcc;
    guint16 mnc;
    QmiNasNetworkStatus network_status;
    QmiNasRadioInterface radio_interface;
    gboolean includes_pcs_digit;
    gchar *description;
} QmiIndicationNasIncrementalNetworkScanOutputNetworkInformationElement;

GType qmi_indication_nas_incremental_network_scan_output_network_information_element_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationNasIncrementalNetworkScanOutput:
 *
 * The #QmiIndicationNasIncrementalNetworkScanOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.38
 */
typedef struct _QmiIndicationNasIncrementalNetworkScanOutput QmiIndicationNasIncrementalNetworkScanOutput;
GType qmi_indication_nas_incremental_network_scan_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_NAS_INCREMENTAL_NETWORK_SCAN_OUTPUT (qmi_indication_nas_incremental_network_scan_output_get_type ())


/**
 * qmi_indication_nas_incremental_network_scan_output_get_network_information: (skip)
 * @self: a #QmiIndicationNasIncrementalNetworkScanOutput.
 * @value_network_information: (out)(optional)(element-type QmiIndicationNasIncrementalNetworkScanOutputNetworkInformationElement)(transfer none): a placeholder for the output #GArray of #QmiIndicationNasIncrementalNetworkScanOutputNetworkInformationElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_nas_incremental_network_scan_output_get_network_information (
    QmiIndicationNasIncrementalNetworkScanOutput *self,
    GArray **value_network_information,
    GError **error);


/**
 * qmi_indication_nas_incremental_network_scan_output_get_network_information_gir: (rename-to qmi_indication_nas_incremental_network_scan_output_get_network_information)
 * @self: a #QmiIndicationNasIncrementalNetworkScanOutput.
 * @value_network_information_ptr: (out)(optional)(element-type QmiIndicationNasIncrementalNetworkScanOutputNetworkInformationElement)(transfer none): a placeholder for the output array of #QmiIndicationNasIncrementalNetworkScanOutputNetworkInformationElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Information' field from @self.
 *
 * Version of qmi_indication_nas_incremental_network_scan_output_get_network_information() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_nas_incremental_network_scan_output_get_network_information_gir (
    QmiIndicationNasIncrementalNetworkScanOutput *self,
    GPtrArray **value_network_information_ptr,
    GError **error);


/**
 * qmi_indication_nas_incremental_network_scan_output_get_status:
 * @self: a #QmiIndicationNasIncrementalNetworkScanOutput.
 * @value_status: (out)(optional): a placeholder for the output #QmiNasIncrementalNetworkScanStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_indication_nas_incremental_network_scan_output_get_status (
    QmiIndicationNasIncrementalNetworkScanOutput *self,
    QmiNasIncrementalNetworkScanStatus *value_status,
    GError **error);


/**
 * qmi_indication_nas_incremental_network_scan_output_ref:
 * @self: a #QmiIndicationNasIncrementalNetworkScanOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.38
 */
QmiIndicationNasIncrementalNetworkScanOutput *qmi_indication_nas_incremental_network_scan_output_ref (QmiIndicationNasIncrementalNetworkScanOutput *self);

/**
 * qmi_indication_nas_incremental_network_scan_output_unref:
 * @self: a #QmiIndicationNasIncrementalNetworkScanOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.38
 */
void qmi_indication_nas_incremental_network_scan_output_unref (QmiIndicationNasIncrementalNetworkScanOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationNasIncrementalNetworkScanOutput, qmi_indication_nas_incremental_network_scan_output_unref)

/**
 * qmi_indication_nas_incremental_network_scan_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationNasIncrementalNetworkScanOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationNasIncrementalNetworkScanOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_nas_incremental_network_scan_output_unref().
 *
 * Since: 1.38
 */
QmiIndicationNasIncrementalNetworkScanOutput *qmi_indication_nas_incremental_network_scan_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasResetOutput:
 *
 * The #QmiMessageNasResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasResetOutput QmiMessageNasResetOutput;
GType qmi_message_nas_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_RESET_OUTPUT (qmi_message_nas_reset_output_get_type ())


/**
 * qmi_message_nas_reset_output_get_result:
 * @self: a QmiMessageNasResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_reset_output_get_result (
    QmiMessageNasResetOutput *self,
    GError **error);


/**
 * qmi_message_nas_reset_output_ref:
 * @self: a #QmiMessageNasResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasResetOutput *qmi_message_nas_reset_output_ref (QmiMessageNasResetOutput *self);

/**
 * qmi_message_nas_reset_output_unref:
 * @self: a #QmiMessageNasResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_reset_output_unref (QmiMessageNasResetOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasResetOutput, qmi_message_nas_reset_output_unref)

/**
 * qmi_message_nas_reset_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasResetOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_reset_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasResetOutput *qmi_message_nas_reset_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Abort */


/* --- Input -- */

/* --- Output -- */

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Set Event Report */


/* --- Input -- */

/**
 * QmiMessageNasSetEventReportInput:
 *
 * The #QmiMessageNasSetEventReportInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasSetEventReportInput QmiMessageNasSetEventReportInput;
GType qmi_message_nas_set_event_report_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_EVENT_REPORT_INPUT (qmi_message_nas_set_event_report_input_get_type ())


/**
 * qmi_message_nas_set_event_report_input_get_lte_rsrp_delta:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_lte_rsrp_delta_report: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_rsrp_delta_rsrp_delta: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE RSRP Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_lte_rsrp_delta (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_lte_rsrp_delta_report,
    guint8 *value_lte_rsrp_delta_rsrp_delta,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_set_lte_rsrp_delta:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_lte_rsrp_delta_report: a #gboolean.
 * @value_lte_rsrp_delta_rsrp_delta: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE RSRP Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_lte_rsrp_delta (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_lte_rsrp_delta_report,
    guint8 value_lte_rsrp_delta_rsrp_delta,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_get_lte_snr_delta:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_lte_snr_delta_report: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_snr_delta_snr_delta: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE SNR Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_lte_snr_delta (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_lte_snr_delta_report,
    guint8 *value_lte_snr_delta_snr_delta,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_set_lte_snr_delta:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_lte_snr_delta_report: a #gboolean.
 * @value_lte_snr_delta_snr_delta: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE SNR Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_lte_snr_delta (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_lte_snr_delta_report,
    guint8 value_lte_snr_delta_snr_delta,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_get_sinr_threshold:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_sinr_threshold_report: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_sinr_threshold_thresholds: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SINR Threshold' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_sinr_threshold (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_sinr_threshold_report,
    GArray **value_sinr_threshold_thresholds,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_set_sinr_threshold:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_sinr_threshold_report: a #gboolean.
 * @value_sinr_threshold_thresholds: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_sinr_threshold_thresholds will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SINR Threshold' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_sinr_threshold (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_sinr_threshold_report,
    GArray *value_sinr_threshold_thresholds,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_get_ecio_threshold:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_ecio_threshold_report: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_ecio_threshold_thresholds: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ECIO Threshold' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_ecio_threshold (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_ecio_threshold_report,
    GArray **value_ecio_threshold_thresholds,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_set_ecio_threshold:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_ecio_threshold_report: a #gboolean.
 * @value_ecio_threshold_thresholds: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_ecio_threshold_thresholds will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'ECIO Threshold' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_ecio_threshold (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_ecio_threshold_report,
    GArray *value_ecio_threshold_thresholds,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_get_error_rate_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_error_rate_indicator: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Error Rate Indicator' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_error_rate_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_error_rate_indicator,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_set_error_rate_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_error_rate_indicator: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Error Rate Indicator' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_error_rate_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_error_rate_indicator,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_get_sinr_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_sinr_indicator_report: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_sinr_indicator_sinr_delta: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SINR Indicator' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_sinr_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_sinr_indicator_report,
    guint8 *value_sinr_indicator_sinr_delta,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_set_sinr_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_sinr_indicator_report: a #gboolean.
 * @value_sinr_indicator_sinr_delta: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SINR Indicator' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_sinr_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_sinr_indicator_report,
    guint8 value_sinr_indicator_sinr_delta,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_get_io_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_io_indicator_report: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_io_indicator_io_delta: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IO Indicator' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_io_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_io_indicator_report,
    guint8 *value_io_indicator_io_delta,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_set_io_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_io_indicator_report: a #gboolean.
 * @value_io_indicator_io_delta: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IO Indicator' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_io_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_io_indicator_report,
    guint8 value_io_indicator_io_delta,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_get_ecio_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_ecio_indicator_report: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_ecio_indicator_ecio_delta: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ECIO Indicator' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_ecio_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_ecio_indicator_report,
    guint8 *value_ecio_indicator_ecio_delta,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_set_ecio_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_ecio_indicator_report: a #gboolean.
 * @value_ecio_indicator_ecio_delta: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'ECIO Indicator' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_ecio_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_ecio_indicator_report,
    guint8 value_ecio_indicator_ecio_delta,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_get_rssi_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_rssi_indicator_report: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_rssi_indicator_rssi_delta: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSSI Indicator' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_rssi_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_rssi_indicator_report,
    guint8 *value_rssi_indicator_rssi_delta,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_set_rssi_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_rssi_indicator_report: a #gboolean.
 * @value_rssi_indicator_rssi_delta: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RSSI Indicator' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_rssi_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_rssi_indicator_report,
    guint8 value_rssi_indicator_rssi_delta,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_get_registration_reject_reason:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_registration_reject_reason: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Registration Reject Reason' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_registration_reject_reason (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_registration_reject_reason,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_set_registration_reject_reason:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_registration_reject_reason: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Registration Reject Reason' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_registration_reject_reason (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_registration_reject_reason,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_get_rf_band_information:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_rf_band_information: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RF Band Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_rf_band_information (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_rf_band_information,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_set_rf_band_information:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_rf_band_information: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RF Band Information' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_rf_band_information (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_rf_band_information,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_get_signal_strength_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_signal_strength_indicator_report: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_signal_strength_indicator_thresholds: (out)(optional)(element-type gint8)(transfer none): a placeholder for the output #GArray of #gint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Signal Strength Indicator' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_get_signal_strength_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean *value_signal_strength_indicator_report,
    GArray **value_signal_strength_indicator_thresholds,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_set_signal_strength_indicator:
 * @self: a #QmiMessageNasSetEventReportInput.
 * @value_signal_strength_indicator_report: a #gboolean.
 * @value_signal_strength_indicator_thresholds: (in)(element-type gint8)(transfer none): a #GArray of #gint8 elements. A new reference to @value_signal_strength_indicator_thresholds will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Signal Strength Indicator' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_input_set_signal_strength_indicator (
    QmiMessageNasSetEventReportInput *self,
    gboolean value_signal_strength_indicator_report,
    GArray *value_signal_strength_indicator_thresholds,
    GError **error);


/**
 * qmi_message_nas_set_event_report_input_ref:
 * @self: a #QmiMessageNasSetEventReportInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasSetEventReportInput *qmi_message_nas_set_event_report_input_ref (QmiMessageNasSetEventReportInput *self);

/**
 * qmi_message_nas_set_event_report_input_unref:
 * @self: a #QmiMessageNasSetEventReportInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_set_event_report_input_unref (QmiMessageNasSetEventReportInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasSetEventReportInput, qmi_message_nas_set_event_report_input_unref)

/**
 * qmi_message_nas_set_event_report_input_new:
 *
 * Allocates a new #QmiMessageNasSetEventReportInput.
 *
 * Returns: the newly created #QmiMessageNasSetEventReportInput. The returned value should be freed with qmi_message_nas_set_event_report_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasSetEventReportInput *qmi_message_nas_set_event_report_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasSetEventReportOutput:
 *
 * The #QmiMessageNasSetEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasSetEventReportOutput QmiMessageNasSetEventReportOutput;
GType qmi_message_nas_set_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_EVENT_REPORT_OUTPUT (qmi_message_nas_set_event_report_output_get_type ())


/**
 * qmi_message_nas_set_event_report_output_get_result:
 * @self: a QmiMessageNasSetEventReportOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_event_report_output_get_result (
    QmiMessageNasSetEventReportOutput *self,
    GError **error);


/**
 * qmi_message_nas_set_event_report_output_ref:
 * @self: a #QmiMessageNasSetEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasSetEventReportOutput *qmi_message_nas_set_event_report_output_ref (QmiMessageNasSetEventReportOutput *self);

/**
 * qmi_message_nas_set_event_report_output_unref:
 * @self: a #QmiMessageNasSetEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_set_event_report_output_unref (QmiMessageNasSetEventReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasSetEventReportOutput, qmi_message_nas_set_event_report_output_unref)

/**
 * qmi_message_nas_set_event_report_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasSetEventReportOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_set_event_report_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasSetEventReportOutput *qmi_message_nas_set_event_report_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Register Indications */


/* --- Input -- */

/**
 * QmiMessageNasRegisterIndicationsInput:
 *
 * The #QmiMessageNasRegisterIndicationsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasRegisterIndicationsInput QmiMessageNasRegisterIndicationsInput;
GType qmi_message_nas_register_indications_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_REGISTER_INDICATIONS_INPUT (qmi_message_nas_register_indications_input_get_type ())


/**
 * qmi_message_nas_register_indications_input_get_network_reject_information:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_network_reject_information_enable_network_reject_indications: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_network_reject_information_supress_system_info_indications: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Reject Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_register_indications_input_get_network_reject_information (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_network_reject_information_enable_network_reject_indications,
    gboolean *value_network_reject_information_supress_system_info_indications,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_network_reject_information:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_network_reject_information_enable_network_reject_indications: a #gboolean.
 * @value_network_reject_information_supress_system_info_indications: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Reject Information' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_register_indications_input_set_network_reject_information (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_network_reject_information_enable_network_reject_indications,
    gboolean value_network_reject_information_supress_system_info_indications,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_rf_band_information:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_rf_band_information: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RF Band Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_rf_band_information (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_rf_band_information,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_rf_band_information:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_rf_band_information: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RF Band Information' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_rf_band_information (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_rf_band_information,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_embms_status:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_embms_status: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'eMBMS Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_embms_status (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_embms_status,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_embms_status:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_embms_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'eMBMS Status' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_embms_status (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_embms_status,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_current_plmn_name:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_current_plmn_name: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current PLMN Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_current_plmn_name (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_current_plmn_name,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_current_plmn_name:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_current_plmn_name: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Current PLMN Name' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_current_plmn_name (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_current_plmn_name,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_managed_roaming:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_managed_roaming: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Managed Roaming' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_managed_roaming (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_managed_roaming,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_managed_roaming:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_managed_roaming: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Managed Roaming' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_managed_roaming (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_managed_roaming,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_hdr_session_closed:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_hdr_session_closed: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Session Closed' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_hdr_session_closed (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_hdr_session_closed,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_hdr_session_closed:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_hdr_session_closed: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HDR Session Closed' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_hdr_session_closed (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_hdr_session_closed,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_hdr_new_uati_assigned:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_hdr_new_uati_assigned: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR New UATI Assigned' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_hdr_new_uati_assigned (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_hdr_new_uati_assigned,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_hdr_new_uati_assigned:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_hdr_new_uati_assigned: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HDR New UATI Assigned' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_hdr_new_uati_assigned (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_hdr_new_uati_assigned,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_error_rate:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_error_rate: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Error Rate' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_error_rate (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_error_rate,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_error_rate:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_error_rate: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Error Rate' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_error_rate (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_error_rate,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_signal_info:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_signal_info: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Signal Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_signal_info (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_signal_info,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_signal_info:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_signal_info: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Signal Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_signal_info (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_signal_info,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_system_info:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_system_info: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_system_info (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_system_info,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_system_info:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_system_info: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'System Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_system_info (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_system_info,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_network_time:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_network_time: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Time' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_network_time (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_network_time,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_network_time:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_network_time: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Time' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_network_time (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_network_time,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_subscription_info:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_subscription_info: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Subscription Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_subscription_info (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_subscription_info,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_subscription_info:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_subscription_info: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Subscription Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_subscription_info (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_subscription_info,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_dual_standby_preference:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_dual_standby_preference: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Dual Standby Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_dual_standby_preference (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_dual_standby_preference,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_dual_standby_preference:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_dual_standby_preference: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Dual Standby Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_dual_standby_preference (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_dual_standby_preference,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_serving_system_events:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_serving_system_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Serving System Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_serving_system_events (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_serving_system_events,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_serving_system_events:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_serving_system_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Serving System Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_serving_system_events (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_serving_system_events,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_ddtm_events:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_ddtm_events: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'DDTM Events' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_ddtm_events (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_ddtm_events,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_ddtm_events:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_ddtm_events: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'DDTM Events' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_ddtm_events (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_ddtm_events,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_get_system_selection_preference:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_system_selection_preference: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'System Selection Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_get_system_selection_preference (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean *value_system_selection_preference,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_set_system_selection_preference:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 * @value_system_selection_preference: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'System Selection Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_input_set_system_selection_preference (
    QmiMessageNasRegisterIndicationsInput *self,
    gboolean value_system_selection_preference,
    GError **error);


/**
 * qmi_message_nas_register_indications_input_ref:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasRegisterIndicationsInput *qmi_message_nas_register_indications_input_ref (QmiMessageNasRegisterIndicationsInput *self);

/**
 * qmi_message_nas_register_indications_input_unref:
 * @self: a #QmiMessageNasRegisterIndicationsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_register_indications_input_unref (QmiMessageNasRegisterIndicationsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasRegisterIndicationsInput, qmi_message_nas_register_indications_input_unref)

/**
 * qmi_message_nas_register_indications_input_new:
 *
 * Allocates a new #QmiMessageNasRegisterIndicationsInput.
 *
 * Returns: the newly created #QmiMessageNasRegisterIndicationsInput. The returned value should be freed with qmi_message_nas_register_indications_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasRegisterIndicationsInput *qmi_message_nas_register_indications_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasRegisterIndicationsOutput:
 *
 * The #QmiMessageNasRegisterIndicationsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasRegisterIndicationsOutput QmiMessageNasRegisterIndicationsOutput;
GType qmi_message_nas_register_indications_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_REGISTER_INDICATIONS_OUTPUT (qmi_message_nas_register_indications_output_get_type ())


/**
 * qmi_message_nas_register_indications_output_get_result:
 * @self: a QmiMessageNasRegisterIndicationsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_register_indications_output_get_result (
    QmiMessageNasRegisterIndicationsOutput *self,
    GError **error);


/**
 * qmi_message_nas_register_indications_output_ref:
 * @self: a #QmiMessageNasRegisterIndicationsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasRegisterIndicationsOutput *qmi_message_nas_register_indications_output_ref (QmiMessageNasRegisterIndicationsOutput *self);

/**
 * qmi_message_nas_register_indications_output_unref:
 * @self: a #QmiMessageNasRegisterIndicationsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_register_indications_output_unref (QmiMessageNasRegisterIndicationsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasRegisterIndicationsOutput, qmi_message_nas_register_indications_output_unref)

/**
 * qmi_message_nas_register_indications_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasRegisterIndicationsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasRegisterIndicationsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_register_indications_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasRegisterIndicationsOutput *qmi_message_nas_register_indications_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetSupportedMessagesOutput:
 *
 * The #QmiMessageNasGetSupportedMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageNasGetSupportedMessagesOutput QmiMessageNasGetSupportedMessagesOutput;
GType qmi_message_nas_get_supported_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SUPPORTED_MESSAGES_OUTPUT (qmi_message_nas_get_supported_messages_output_get_type ())


/**
 * qmi_message_nas_get_supported_messages_output_get_result:
 * @self: a QmiMessageNasGetSupportedMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_nas_get_supported_messages_output_get_result (
    QmiMessageNasGetSupportedMessagesOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_supported_messages_output_get_list:
 * @self: a #QmiMessageNasGetSupportedMessagesOutput.
 * @value_list: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_supported_messages_output_get_list (
    QmiMessageNasGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error);


/**
 * qmi_message_nas_get_supported_messages_output_ref:
 * @self: a #QmiMessageNasGetSupportedMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageNasGetSupportedMessagesOutput *qmi_message_nas_get_supported_messages_output_ref (QmiMessageNasGetSupportedMessagesOutput *self);

/**
 * qmi_message_nas_get_supported_messages_output_unref:
 * @self: a #QmiMessageNasGetSupportedMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_nas_get_supported_messages_output_unref (QmiMessageNasGetSupportedMessagesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetSupportedMessagesOutput, qmi_message_nas_get_supported_messages_output_unref)

/**
 * qmi_message_nas_get_supported_messages_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetSupportedMessagesOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_supported_messages_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetSupportedMessagesOutput *qmi_message_nas_get_supported_messages_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Signal Strength */


/* --- Input -- */

/**
 * QmiMessageNasGetSignalStrengthInput:
 *
 * The #QmiMessageNasGetSignalStrengthInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalStrengthInput QmiMessageNasGetSignalStrengthInput;
GType qmi_message_nas_get_signal_strength_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SIGNAL_STRENGTH_INPUT (qmi_message_nas_get_signal_strength_input_get_type ())


/**
 * qmi_message_nas_get_signal_strength_input_get_request_mask:
 * @self: a #QmiMessageNasGetSignalStrengthInput.
 * @value_request_mask: (out)(optional): a placeholder for the output #QmiNasSignalStrengthRequest, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Request Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_input_get_request_mask (
    QmiMessageNasGetSignalStrengthInput *self,
    QmiNasSignalStrengthRequest *value_request_mask,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_input_set_request_mask:
 * @self: a #QmiMessageNasGetSignalStrengthInput.
 * @value_request_mask: a #QmiNasSignalStrengthRequest.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Request Mask' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_input_set_request_mask (
    QmiMessageNasGetSignalStrengthInput *self,
    QmiNasSignalStrengthRequest value_request_mask,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_input_ref:
 * @self: a #QmiMessageNasGetSignalStrengthInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetSignalStrengthInput *qmi_message_nas_get_signal_strength_input_ref (QmiMessageNasGetSignalStrengthInput *self);

/**
 * qmi_message_nas_get_signal_strength_input_unref:
 * @self: a #QmiMessageNasGetSignalStrengthInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_signal_strength_input_unref (QmiMessageNasGetSignalStrengthInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetSignalStrengthInput, qmi_message_nas_get_signal_strength_input_unref)

/**
 * qmi_message_nas_get_signal_strength_input_new:
 *
 * Allocates a new #QmiMessageNasGetSignalStrengthInput.
 *
 * Returns: the newly created #QmiMessageNasGetSignalStrengthInput. The returned value should be freed with qmi_message_nas_get_signal_strength_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetSignalStrengthInput *qmi_message_nas_get_signal_strength_input_new (void);

/* --- Output -- */


/**
 * QmiMessageNasGetSignalStrengthOutputErrorRateListElement:
 * @rate: a #guint16.
 * @radio_interface: a #QmiNasRadioInterface.
 *
 * A QmiMessageNasGetSignalStrengthOutputErrorRateListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalStrengthOutputErrorRateListElement {
    guint16 rate;
    QmiNasRadioInterface radio_interface;
} QmiMessageNasGetSignalStrengthOutputErrorRateListElement;

GType qmi_message_nas_get_signal_strength_output_error_rate_list_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetSignalStrengthOutputEcioListElement:
 * @ecio: a #guint8.
 * @radio_interface: a #QmiNasRadioInterface.
 *
 * A QmiMessageNasGetSignalStrengthOutputEcioListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalStrengthOutputEcioListElement {
    guint8 ecio;
    QmiNasRadioInterface radio_interface;
} QmiMessageNasGetSignalStrengthOutputEcioListElement;

GType qmi_message_nas_get_signal_strength_output_ecio_list_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetSignalStrengthOutputRssiListElement:
 * @rssi: a #guint8.
 * @radio_interface: a #QmiNasRadioInterface.
 *
 * A QmiMessageNasGetSignalStrengthOutputRssiListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalStrengthOutputRssiListElement {
    guint8 rssi;
    QmiNasRadioInterface radio_interface;
} QmiMessageNasGetSignalStrengthOutputRssiListElement;

GType qmi_message_nas_get_signal_strength_output_rssi_list_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetSignalStrengthOutputStrengthListElement:
 * @strength: a #gint8.
 * @radio_interface: a #QmiNasRadioInterface.
 *
 * A QmiMessageNasGetSignalStrengthOutputStrengthListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalStrengthOutputStrengthListElement {
    gint8 strength;
    QmiNasRadioInterface radio_interface;
} QmiMessageNasGetSignalStrengthOutputStrengthListElement;

GType qmi_message_nas_get_signal_strength_output_strength_list_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasGetSignalStrengthOutput:
 *
 * The #QmiMessageNasGetSignalStrengthOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalStrengthOutput QmiMessageNasGetSignalStrengthOutput;
GType qmi_message_nas_get_signal_strength_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SIGNAL_STRENGTH_OUTPUT (qmi_message_nas_get_signal_strength_output_get_type ())


/**
 * qmi_message_nas_get_signal_strength_output_get_lte_rsrp:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_lte_rsrp: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE RSRP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_lte_rsrp (
    QmiMessageNasGetSignalStrengthOutput *self,
    gint16 *value_lte_rsrp,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_lte_snr:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_lte_snr: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE SNR' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_lte_snr (
    QmiMessageNasGetSignalStrengthOutput *self,
    gint16 *value_lte_snr,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_rsrq:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_rsrq_rsrq: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_rsrq_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSRQ' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_rsrq (
    QmiMessageNasGetSignalStrengthOutput *self,
    gint8 *value_rsrq_rsrq,
    QmiNasRadioInterface *value_rsrq_radio_interface,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_error_rate_list: (skip)
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_error_rate_list: (out)(optional)(element-type QmiMessageNasGetSignalStrengthOutputErrorRateListElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetSignalStrengthOutputErrorRateListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Error Rate List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_error_rate_list (
    QmiMessageNasGetSignalStrengthOutput *self,
    GArray **value_error_rate_list,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_error_rate_list_gir: (rename-to qmi_message_nas_get_signal_strength_output_get_error_rate_list)
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_error_rate_list_ptr: (out)(optional)(element-type QmiMessageNasGetSignalStrengthOutputErrorRateListElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetSignalStrengthOutputErrorRateListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Error Rate List' field from @self.
 *
 * Version of qmi_message_nas_get_signal_strength_output_get_error_rate_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_signal_strength_output_get_error_rate_list_gir (
    QmiMessageNasGetSignalStrengthOutput *self,
    GPtrArray **value_error_rate_list_ptr,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_sinr:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_sinr: (out)(optional): a placeholder for the output #QmiNasEvdoSinrLevel, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SINR' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_sinr (
    QmiMessageNasGetSignalStrengthOutput *self,
    QmiNasEvdoSinrLevel *value_sinr,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_io:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_io: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IO' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_io (
    QmiMessageNasGetSignalStrengthOutput *self,
    gint32 *value_io,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_ecio_list: (skip)
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_ecio_list: (out)(optional)(element-type QmiMessageNasGetSignalStrengthOutputEcioListElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetSignalStrengthOutputEcioListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ECIO List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_ecio_list (
    QmiMessageNasGetSignalStrengthOutput *self,
    GArray **value_ecio_list,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_ecio_list_gir: (rename-to qmi_message_nas_get_signal_strength_output_get_ecio_list)
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_ecio_list_ptr: (out)(optional)(element-type QmiMessageNasGetSignalStrengthOutputEcioListElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetSignalStrengthOutputEcioListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ECIO List' field from @self.
 *
 * Version of qmi_message_nas_get_signal_strength_output_get_ecio_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_signal_strength_output_get_ecio_list_gir (
    QmiMessageNasGetSignalStrengthOutput *self,
    GPtrArray **value_ecio_list_ptr,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_rssi_list: (skip)
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_rssi_list: (out)(optional)(element-type QmiMessageNasGetSignalStrengthOutputRssiListElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetSignalStrengthOutputRssiListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSSI List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_rssi_list (
    QmiMessageNasGetSignalStrengthOutput *self,
    GArray **value_rssi_list,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_rssi_list_gir: (rename-to qmi_message_nas_get_signal_strength_output_get_rssi_list)
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_rssi_list_ptr: (out)(optional)(element-type QmiMessageNasGetSignalStrengthOutputRssiListElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetSignalStrengthOutputRssiListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSSI List' field from @self.
 *
 * Version of qmi_message_nas_get_signal_strength_output_get_rssi_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_signal_strength_output_get_rssi_list_gir (
    QmiMessageNasGetSignalStrengthOutput *self,
    GPtrArray **value_rssi_list_ptr,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_strength_list: (skip)
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_strength_list: (out)(optional)(element-type QmiMessageNasGetSignalStrengthOutputStrengthListElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetSignalStrengthOutputStrengthListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Strength List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_strength_list (
    QmiMessageNasGetSignalStrengthOutput *self,
    GArray **value_strength_list,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_strength_list_gir: (rename-to qmi_message_nas_get_signal_strength_output_get_strength_list)
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_strength_list_ptr: (out)(optional)(element-type QmiMessageNasGetSignalStrengthOutputStrengthListElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetSignalStrengthOutputStrengthListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Strength List' field from @self.
 *
 * Version of qmi_message_nas_get_signal_strength_output_get_strength_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_signal_strength_output_get_strength_list_gir (
    QmiMessageNasGetSignalStrengthOutput *self,
    GPtrArray **value_strength_list_ptr,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_result:
 * @self: a QmiMessageNasGetSignalStrengthOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_result (
    QmiMessageNasGetSignalStrengthOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_get_signal_strength:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 * @value_signal_strength_strength: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_signal_strength_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_strength_output_get_signal_strength (
    QmiMessageNasGetSignalStrengthOutput *self,
    gint8 *value_signal_strength_strength,
    QmiNasRadioInterface *value_signal_strength_radio_interface,
    GError **error);


/**
 * qmi_message_nas_get_signal_strength_output_ref:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetSignalStrengthOutput *qmi_message_nas_get_signal_strength_output_ref (QmiMessageNasGetSignalStrengthOutput *self);

/**
 * qmi_message_nas_get_signal_strength_output_unref:
 * @self: a #QmiMessageNasGetSignalStrengthOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_signal_strength_output_unref (QmiMessageNasGetSignalStrengthOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetSignalStrengthOutput, qmi_message_nas_get_signal_strength_output_unref)

/**
 * qmi_message_nas_get_signal_strength_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetSignalStrengthOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetSignalStrengthOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_signal_strength_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetSignalStrengthOutput *qmi_message_nas_get_signal_strength_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Network Scan */


/* --- Input -- */

/**
 * QmiMessageNasNetworkScanInput:
 *
 * The #QmiMessageNasNetworkScanInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasNetworkScanInput QmiMessageNasNetworkScanInput;
GType qmi_message_nas_network_scan_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_NETWORK_SCAN_INPUT (qmi_message_nas_network_scan_input_get_type ())


/**
 * qmi_message_nas_network_scan_input_get_network_type:
 * @self: a #QmiMessageNasNetworkScanInput.
 * @value_network_type: (out)(optional): a placeholder for the output #QmiNasNetworkScanType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_network_scan_input_get_network_type (
    QmiMessageNasNetworkScanInput *self,
    QmiNasNetworkScanType *value_network_type,
    GError **error);


/**
 * qmi_message_nas_network_scan_input_set_network_type:
 * @self: a #QmiMessageNasNetworkScanInput.
 * @value_network_type: a #QmiNasNetworkScanType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_network_scan_input_set_network_type (
    QmiMessageNasNetworkScanInput *self,
    QmiNasNetworkScanType value_network_type,
    GError **error);


/**
 * qmi_message_nas_network_scan_input_ref:
 * @self: a #QmiMessageNasNetworkScanInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasNetworkScanInput *qmi_message_nas_network_scan_input_ref (QmiMessageNasNetworkScanInput *self);

/**
 * qmi_message_nas_network_scan_input_unref:
 * @self: a #QmiMessageNasNetworkScanInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_network_scan_input_unref (QmiMessageNasNetworkScanInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasNetworkScanInput, qmi_message_nas_network_scan_input_unref)

/**
 * qmi_message_nas_network_scan_input_new:
 *
 * Allocates a new #QmiMessageNasNetworkScanInput.
 *
 * Returns: the newly created #QmiMessageNasNetworkScanInput. The returned value should be freed with qmi_message_nas_network_scan_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasNetworkScanInput *qmi_message_nas_network_scan_input_new (void);

/* --- Output -- */


/**
 * QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @includes_pcs_digit: a #gboolean.
 *
 * A QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement {
    guint16 mcc;
    guint16 mnc;
    gboolean includes_pcs_digit;
} QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement;

GType qmi_message_nas_network_scan_output_mnc_pcs_digit_include_status_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @radio_interface: a #QmiNasRadioInterface.
 *
 * A QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement {
    guint16 mcc;
    guint16 mnc;
    QmiNasRadioInterface radio_interface;
} QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement;

GType qmi_message_nas_network_scan_output_radio_access_technology_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasNetworkScanOutputNetworkInformationElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @network_status: a #QmiNasNetworkStatus.
 * @description: a string.
 *
 * A QmiMessageNasNetworkScanOutputNetworkInformationElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasNetworkScanOutputNetworkInformationElement {
    guint16 mcc;
    guint16 mnc;
    QmiNasNetworkStatus network_status;
    gchar *description;
} QmiMessageNasNetworkScanOutputNetworkInformationElement;

GType qmi_message_nas_network_scan_output_network_information_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasNetworkScanOutput:
 *
 * The #QmiMessageNasNetworkScanOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasNetworkScanOutput QmiMessageNasNetworkScanOutput;
GType qmi_message_nas_network_scan_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_NETWORK_SCAN_OUTPUT (qmi_message_nas_network_scan_output_get_type ())


/**
 * qmi_message_nas_network_scan_output_get_network_scan_result:
 * @self: a #QmiMessageNasNetworkScanOutput.
 * @value_network_scan_result: (out)(optional): a placeholder for the output #QmiNasNetworkScanResult, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Scan Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_network_scan_output_get_network_scan_result (
    QmiMessageNasNetworkScanOutput *self,
    QmiNasNetworkScanResult *value_network_scan_result,
    GError **error);


/**
 * qmi_message_nas_network_scan_output_get_mnc_pcs_digit_include_status: (skip)
 * @self: a #QmiMessageNasNetworkScanOutput.
 * @value_mnc_pcs_digit_include_status: (out)(optional)(element-type QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_network_scan_output_get_mnc_pcs_digit_include_status (
    QmiMessageNasNetworkScanOutput *self,
    GArray **value_mnc_pcs_digit_include_status,
    GError **error);


/**
 * qmi_message_nas_network_scan_output_get_mnc_pcs_digit_include_status_gir: (rename-to qmi_message_nas_network_scan_output_get_mnc_pcs_digit_include_status)
 * @self: a #QmiMessageNasNetworkScanOutput.
 * @value_mnc_pcs_digit_include_status_ptr: (out)(optional)(element-type QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement)(transfer none): a placeholder for the output array of #QmiMessageNasNetworkScanOutputMncPcsDigitIncludeStatusElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Version of qmi_message_nas_network_scan_output_get_mnc_pcs_digit_include_status() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_network_scan_output_get_mnc_pcs_digit_include_status_gir (
    QmiMessageNasNetworkScanOutput *self,
    GPtrArray **value_mnc_pcs_digit_include_status_ptr,
    GError **error);


/**
 * qmi_message_nas_network_scan_output_get_radio_access_technology: (skip)
 * @self: a #QmiMessageNasNetworkScanOutput.
 * @value_radio_access_technology: (out)(optional)(element-type QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Radio Access Technology' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_network_scan_output_get_radio_access_technology (
    QmiMessageNasNetworkScanOutput *self,
    GArray **value_radio_access_technology,
    GError **error);


/**
 * qmi_message_nas_network_scan_output_get_radio_access_technology_gir: (rename-to qmi_message_nas_network_scan_output_get_radio_access_technology)
 * @self: a #QmiMessageNasNetworkScanOutput.
 * @value_radio_access_technology_ptr: (out)(optional)(element-type QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement)(transfer none): a placeholder for the output array of #QmiMessageNasNetworkScanOutputRadioAccessTechnologyElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Radio Access Technology' field from @self.
 *
 * Version of qmi_message_nas_network_scan_output_get_radio_access_technology() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_network_scan_output_get_radio_access_technology_gir (
    QmiMessageNasNetworkScanOutput *self,
    GPtrArray **value_radio_access_technology_ptr,
    GError **error);


/**
 * qmi_message_nas_network_scan_output_get_network_information: (skip)
 * @self: a #QmiMessageNasNetworkScanOutput.
 * @value_network_information: (out)(optional)(element-type QmiMessageNasNetworkScanOutputNetworkInformationElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasNetworkScanOutputNetworkInformationElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_network_scan_output_get_network_information (
    QmiMessageNasNetworkScanOutput *self,
    GArray **value_network_information,
    GError **error);


/**
 * qmi_message_nas_network_scan_output_get_network_information_gir: (rename-to qmi_message_nas_network_scan_output_get_network_information)
 * @self: a #QmiMessageNasNetworkScanOutput.
 * @value_network_information_ptr: (out)(optional)(element-type QmiMessageNasNetworkScanOutputNetworkInformationElement)(transfer none): a placeholder for the output array of #QmiMessageNasNetworkScanOutputNetworkInformationElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Information' field from @self.
 *
 * Version of qmi_message_nas_network_scan_output_get_network_information() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_network_scan_output_get_network_information_gir (
    QmiMessageNasNetworkScanOutput *self,
    GPtrArray **value_network_information_ptr,
    GError **error);


/**
 * qmi_message_nas_network_scan_output_get_result:
 * @self: a QmiMessageNasNetworkScanOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_network_scan_output_get_result (
    QmiMessageNasNetworkScanOutput *self,
    GError **error);


/**
 * qmi_message_nas_network_scan_output_ref:
 * @self: a #QmiMessageNasNetworkScanOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasNetworkScanOutput *qmi_message_nas_network_scan_output_ref (QmiMessageNasNetworkScanOutput *self);

/**
 * qmi_message_nas_network_scan_output_unref:
 * @self: a #QmiMessageNasNetworkScanOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_network_scan_output_unref (QmiMessageNasNetworkScanOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasNetworkScanOutput, qmi_message_nas_network_scan_output_unref)

/**
 * qmi_message_nas_network_scan_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasNetworkScanOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasNetworkScanOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_network_scan_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasNetworkScanOutput *qmi_message_nas_network_scan_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Initiate Network Register */


/* --- Input -- */

/**
 * QmiMessageNasInitiateNetworkRegisterInput:
 *
 * The #QmiMessageNasInitiateNetworkRegisterInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasInitiateNetworkRegisterInput QmiMessageNasInitiateNetworkRegisterInput;
GType qmi_message_nas_initiate_network_register_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_INITIATE_NETWORK_REGISTER_INPUT (qmi_message_nas_initiate_network_register_input_get_type ())


/**
 * qmi_message_nas_initiate_network_register_input_get_mnc_pcs_digit_include_status:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_mnc_pcs_digit_include_status: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_get_mnc_pcs_digit_include_status (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    gboolean *value_mnc_pcs_digit_include_status,
    GError **error);


/**
 * qmi_message_nas_initiate_network_register_input_set_mnc_pcs_digit_include_status:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_mnc_pcs_digit_include_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'MNC PCS Digit Include Status' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_set_mnc_pcs_digit_include_status (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    gboolean value_mnc_pcs_digit_include_status,
    GError **error);


/**
 * qmi_message_nas_initiate_network_register_input_get_change_duration:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_change_duration: (out)(optional): a placeholder for the output #QmiNasChangeDuration, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Change Duration' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_get_change_duration (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    QmiNasChangeDuration *value_change_duration,
    GError **error);


/**
 * qmi_message_nas_initiate_network_register_input_set_change_duration:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_change_duration: a #QmiNasChangeDuration.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Change Duration' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_set_change_duration (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    QmiNasChangeDuration value_change_duration,
    GError **error);


/**
 * qmi_message_nas_initiate_network_register_input_get_manual_registration_info_3gpp:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_manual_registration_info_3gpp_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_manual_registration_info_3gpp_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_manual_registration_info_3gpp_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Manual Registration Info 3GPP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_get_manual_registration_info_3gpp (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    guint16 *value_manual_registration_info_3gpp_mcc,
    guint16 *value_manual_registration_info_3gpp_mnc,
    QmiNasRadioInterface *value_manual_registration_info_3gpp_radio_interface,
    GError **error);


/**
 * qmi_message_nas_initiate_network_register_input_set_manual_registration_info_3gpp:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_manual_registration_info_3gpp_mcc: a #guint16.
 * @value_manual_registration_info_3gpp_mnc: a #guint16.
 * @value_manual_registration_info_3gpp_radio_interface: a #QmiNasRadioInterface.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Manual Registration Info 3GPP' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_set_manual_registration_info_3gpp (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    guint16 value_manual_registration_info_3gpp_mcc,
    guint16 value_manual_registration_info_3gpp_mnc,
    QmiNasRadioInterface value_manual_registration_info_3gpp_radio_interface,
    GError **error);


/**
 * qmi_message_nas_initiate_network_register_input_get_action:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_action: (out)(optional): a placeholder for the output #QmiNasNetworkRegisterType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Action' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_get_action (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    QmiNasNetworkRegisterType *value_action,
    GError **error);


/**
 * qmi_message_nas_initiate_network_register_input_set_action:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @value_action: a #QmiNasNetworkRegisterType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Action' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_input_set_action (
    QmiMessageNasInitiateNetworkRegisterInput *self,
    QmiNasNetworkRegisterType value_action,
    GError **error);


/**
 * qmi_message_nas_initiate_network_register_input_ref:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasInitiateNetworkRegisterInput *qmi_message_nas_initiate_network_register_input_ref (QmiMessageNasInitiateNetworkRegisterInput *self);

/**
 * qmi_message_nas_initiate_network_register_input_unref:
 * @self: a #QmiMessageNasInitiateNetworkRegisterInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_initiate_network_register_input_unref (QmiMessageNasInitiateNetworkRegisterInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasInitiateNetworkRegisterInput, qmi_message_nas_initiate_network_register_input_unref)

/**
 * qmi_message_nas_initiate_network_register_input_new:
 *
 * Allocates a new #QmiMessageNasInitiateNetworkRegisterInput.
 *
 * Returns: the newly created #QmiMessageNasInitiateNetworkRegisterInput. The returned value should be freed with qmi_message_nas_initiate_network_register_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasInitiateNetworkRegisterInput *qmi_message_nas_initiate_network_register_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasInitiateNetworkRegisterOutput:
 *
 * The #QmiMessageNasInitiateNetworkRegisterOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasInitiateNetworkRegisterOutput QmiMessageNasInitiateNetworkRegisterOutput;
GType qmi_message_nas_initiate_network_register_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_INITIATE_NETWORK_REGISTER_OUTPUT (qmi_message_nas_initiate_network_register_output_get_type ())


/**
 * qmi_message_nas_initiate_network_register_output_get_result:
 * @self: a QmiMessageNasInitiateNetworkRegisterOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_initiate_network_register_output_get_result (
    QmiMessageNasInitiateNetworkRegisterOutput *self,
    GError **error);


/**
 * qmi_message_nas_initiate_network_register_output_ref:
 * @self: a #QmiMessageNasInitiateNetworkRegisterOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasInitiateNetworkRegisterOutput *qmi_message_nas_initiate_network_register_output_ref (QmiMessageNasInitiateNetworkRegisterOutput *self);

/**
 * qmi_message_nas_initiate_network_register_output_unref:
 * @self: a #QmiMessageNasInitiateNetworkRegisterOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_initiate_network_register_output_unref (QmiMessageNasInitiateNetworkRegisterOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasInitiateNetworkRegisterOutput, qmi_message_nas_initiate_network_register_output_unref)

/**
 * qmi_message_nas_initiate_network_register_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasInitiateNetworkRegisterOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasInitiateNetworkRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_initiate_network_register_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasInitiateNetworkRegisterOutput *qmi_message_nas_initiate_network_register_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Attach Detach */


/* --- Input -- */

/**
 * QmiMessageNasAttachDetachInput:
 *
 * The #QmiMessageNasAttachDetachInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageNasAttachDetachInput QmiMessageNasAttachDetachInput;
GType qmi_message_nas_attach_detach_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_ATTACH_DETACH_INPUT (qmi_message_nas_attach_detach_input_get_type ())


/**
 * qmi_message_nas_attach_detach_input_get_action:
 * @self: a #QmiMessageNasAttachDetachInput.
 * @value_action: (out)(optional): a placeholder for the output #QmiNasPsAttachAction, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Action' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_nas_attach_detach_input_get_action (
    QmiMessageNasAttachDetachInput *self,
    QmiNasPsAttachAction *value_action,
    GError **error);


/**
 * qmi_message_nas_attach_detach_input_set_action:
 * @self: a #QmiMessageNasAttachDetachInput.
 * @value_action: a #QmiNasPsAttachAction.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Action' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_nas_attach_detach_input_set_action (
    QmiMessageNasAttachDetachInput *self,
    QmiNasPsAttachAction value_action,
    GError **error);


/**
 * qmi_message_nas_attach_detach_input_ref:
 * @self: a #QmiMessageNasAttachDetachInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageNasAttachDetachInput *qmi_message_nas_attach_detach_input_ref (QmiMessageNasAttachDetachInput *self);

/**
 * qmi_message_nas_attach_detach_input_unref:
 * @self: a #QmiMessageNasAttachDetachInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_nas_attach_detach_input_unref (QmiMessageNasAttachDetachInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasAttachDetachInput, qmi_message_nas_attach_detach_input_unref)

/**
 * qmi_message_nas_attach_detach_input_new:
 *
 * Allocates a new #QmiMessageNasAttachDetachInput.
 *
 * Returns: the newly created #QmiMessageNasAttachDetachInput. The returned value should be freed with qmi_message_nas_attach_detach_input_unref().
 *
 * Since: 1.20
 */
QmiMessageNasAttachDetachInput *qmi_message_nas_attach_detach_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasAttachDetachOutput:
 *
 * The #QmiMessageNasAttachDetachOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageNasAttachDetachOutput QmiMessageNasAttachDetachOutput;
GType qmi_message_nas_attach_detach_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_ATTACH_DETACH_OUTPUT (qmi_message_nas_attach_detach_output_get_type ())


/**
 * qmi_message_nas_attach_detach_output_get_result:
 * @self: a QmiMessageNasAttachDetachOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.20
 */
gboolean qmi_message_nas_attach_detach_output_get_result (
    QmiMessageNasAttachDetachOutput *self,
    GError **error);


/**
 * qmi_message_nas_attach_detach_output_ref:
 * @self: a #QmiMessageNasAttachDetachOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageNasAttachDetachOutput *qmi_message_nas_attach_detach_output_ref (QmiMessageNasAttachDetachOutput *self);

/**
 * qmi_message_nas_attach_detach_output_unref:
 * @self: a #QmiMessageNasAttachDetachOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_nas_attach_detach_output_unref (QmiMessageNasAttachDetachOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasAttachDetachOutput, qmi_message_nas_attach_detach_output_unref)

/**
 * qmi_message_nas_attach_detach_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasAttachDetachOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasAttachDetachOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_attach_detach_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasAttachDetachOutput *qmi_message_nas_attach_detach_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Serving System */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement:
 * @radio_interface: a #QmiNasRadioInterface.
 * @roaming_indicator: a #QmiNasRoamingIndicatorStatus.
 *
 * A QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement {
    QmiNasRadioInterface radio_interface;
    QmiNasRoamingIndicatorStatus roaming_indicator;
} QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement;

GType qmi_message_nas_get_serving_system_output_roaming_indicator_list_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasGetServingSystemOutput:
 *
 * The #QmiMessageNasGetServingSystemOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetServingSystemOutput QmiMessageNasGetServingSystemOutput;
GType qmi_message_nas_get_serving_system_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SERVING_SYSTEM_OUTPUT (qmi_message_nas_get_serving_system_output_get_type ())


/**
 * qmi_message_nas_get_serving_system_output_get_network_name_source:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_network_name_source: (out)(optional): a placeholder for the output #QmiNasNetworkNameSource, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Name Source' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_get_serving_system_output_get_network_name_source (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasNetworkNameSource *value_network_name_source,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_mnc_pcs_digit_include_status:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_mnc_pcs_digit_include_status_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_mnc_pcs_digit_include_status_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_mnc_pcs_digit_include_status_includes_pcs_digit: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_mnc_pcs_digit_include_status (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_mnc_pcs_digit_include_status_mcc,
    guint16 *value_mnc_pcs_digit_include_status_mnc,
    gboolean *value_mnc_pcs_digit_include_status_includes_pcs_digit,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_umts_primary_scrambling_code:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_umts_primary_scrambling_code: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Primary Scrambling Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_umts_primary_scrambling_code (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_umts_primary_scrambling_code,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_call_barring_status:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_call_barring_status_cs_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_call_barring_status_ps_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Barring Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_call_barring_status (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasCallBarringStatus *value_call_barring_status_cs_status,
    QmiNasCallBarringStatus *value_call_barring_status_ps_status,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_lte_tac:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_lte_tac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE TAC' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_lte_tac (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_lte_tac,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_hdr_personality:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_hdr_personality: (out)(optional): a placeholder for the output #QmiNasHdrPersonality, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Personality' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_hdr_personality (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasHdrPersonality *value_hdr_personality,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_cdma_system_info:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_cdma_system_info_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_imsi_11_12: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_cdma_system_info (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_cdma_system_info_mcc,
    guint8 *value_cdma_system_info_imsi_11_12,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_detailed_service_status:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_detailed_service_status_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_detailed_service_status_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_detailed_service_status_hdr_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_detailed_service_status_hdr_hybrid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_detailed_service_status_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Detailed Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_detailed_service_status (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasServiceStatus *value_detailed_service_status_status,
    QmiNasNetworkServiceDomain *value_detailed_service_status_capability,
    QmiNasServiceStatus *value_detailed_service_status_hdr_status,
    gboolean *value_detailed_service_status_hdr_hybrid,
    gboolean *value_detailed_service_status_forbidden,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_dtm_support:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_dtm_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'DTM Support' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_dtm_support (
    QmiMessageNasGetServingSystemOutput *self,
    gboolean *value_dtm_support,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_prl_indicator_3gpp2:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_prl_indicator_3gpp2: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PRL Indicator 3GPP2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_prl_indicator_3gpp2 (
    QmiMessageNasGetServingSystemOutput *self,
    gboolean *value_prl_indicator_3gpp2,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_concurrent_service_info_3gpp2:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_concurrent_service_info_3gpp2: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Concurrent Service Info 3GPP2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_concurrent_service_info_3gpp2 (
    QmiMessageNasGetServingSystemOutput *self,
    gboolean *value_concurrent_service_info_3gpp2,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_cid_3gpp:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_cid_3gpp: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CID 3GPP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_cid_3gpp (
    QmiMessageNasGetServingSystemOutput *self,
    guint32 *value_cid_3gpp,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_lac_3gpp:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_lac_3gpp: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LAC 3GPP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_lac_3gpp (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_lac_3gpp,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_daylight_saving_time_adjustment_3gpp:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_daylight_saving_time_adjustment_3gpp: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Daylight Saving Time Adjustment 3GPP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_daylight_saving_time_adjustment_3gpp (
    QmiMessageNasGetServingSystemOutput *self,
    guint8 *value_daylight_saving_time_adjustment_3gpp,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_time_zone_3gpp:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_time_zone_3gpp: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Zone 3GPP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_time_zone_3gpp (
    QmiMessageNasGetServingSystemOutput *self,
    gint8 *value_time_zone_3gpp,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_cdma_p_rev:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_cdma_p_rev: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA P Rev' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_cdma_p_rev (
    QmiMessageNasGetServingSystemOutput *self,
    guint8 *value_cdma_p_rev,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_time_zone_3gpp2:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_time_zone_3gpp2_leap_seconds: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_time_zone_3gpp2_local_time_offset: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_time_zone_3gpp2_daylight_saving_time: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Time Zone 3GPP2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_time_zone_3gpp2 (
    QmiMessageNasGetServingSystemOutput *self,
    guint8 *value_time_zone_3gpp2_leap_seconds,
    gint8 *value_time_zone_3gpp2_local_time_offset,
    gboolean *value_time_zone_3gpp2_daylight_saving_time,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_default_roaming_indicator:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_default_roaming_indicator: (out)(optional): a placeholder for the output #QmiNasRoamingIndicatorStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Default Roaming Indicator' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_default_roaming_indicator (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasRoamingIndicatorStatus *value_default_roaming_indicator,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_roaming_indicator_list: (skip)
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_roaming_indicator_list: (out)(optional)(element-type QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Indicator List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_roaming_indicator_list (
    QmiMessageNasGetServingSystemOutput *self,
    GArray **value_roaming_indicator_list,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_roaming_indicator_list_gir: (rename-to qmi_message_nas_get_serving_system_output_get_roaming_indicator_list)
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_roaming_indicator_list_ptr: (out)(optional)(element-type QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetServingSystemOutputRoamingIndicatorListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Indicator List' field from @self.
 *
 * Version of qmi_message_nas_get_serving_system_output_get_roaming_indicator_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_serving_system_output_get_roaming_indicator_list_gir (
    QmiMessageNasGetServingSystemOutput *self,
    GPtrArray **value_roaming_indicator_list_ptr,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_cdma_base_station_info:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_cdma_base_station_info_base_station_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_base_station_info_base_station_latitude: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_cdma_base_station_info_base_station_longitude: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Base Station Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_cdma_base_station_info (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_cdma_base_station_info_base_station_id,
    gint32 *value_cdma_base_station_info_base_station_latitude,
    gint32 *value_cdma_base_station_info_base_station_longitude,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_cdma_system_id:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_cdma_system_id_sid: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_id_nid: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA System ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_cdma_system_id (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_cdma_system_id_sid,
    guint16 *value_cdma_system_id_nid,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_current_plmn:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_current_plmn_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_current_plmn_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_current_plmn_description: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current PLMN' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_current_plmn (
    QmiMessageNasGetServingSystemOutput *self,
    guint16 *value_current_plmn_mcc,
    guint16 *value_current_plmn_mnc,
    const gchar **value_current_plmn_description,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_data_service_capability:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_data_service_capability: (out)(optional)(element-type QmiNasDataCapability)(transfer none): a placeholder for the output #GArray of #QmiNasDataCapability elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Service Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_data_service_capability (
    QmiMessageNasGetServingSystemOutput *self,
    GArray **value_data_service_capability,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_roaming_indicator:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_roaming_indicator: (out)(optional): a placeholder for the output #QmiNasRoamingIndicatorStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Indicator' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_roaming_indicator (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasRoamingIndicatorStatus *value_roaming_indicator,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_result:
 * @self: a QmiMessageNasGetServingSystemOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_result (
    QmiMessageNasGetServingSystemOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_get_serving_system:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 * @value_serving_system_registration_state: (out)(optional): a placeholder for the output #QmiNasRegistrationState, or %NULL if not required.
 * @value_serving_system_cs_attach_state: (out)(optional): a placeholder for the output #QmiNasAttachState, or %NULL if not required.
 * @value_serving_system_ps_attach_state: (out)(optional): a placeholder for the output #QmiNasAttachState, or %NULL if not required.
 * @value_serving_system_selected_network: (out)(optional): a placeholder for the output #QmiNasNetworkType, or %NULL if not required.
 * @value_serving_system_radio_interfaces: (out)(optional)(element-type QmiNasRadioInterface)(transfer none): a placeholder for the output #GArray of #QmiNasRadioInterface elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Serving System' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_serving_system_output_get_serving_system (
    QmiMessageNasGetServingSystemOutput *self,
    QmiNasRegistrationState *value_serving_system_registration_state,
    QmiNasAttachState *value_serving_system_cs_attach_state,
    QmiNasAttachState *value_serving_system_ps_attach_state,
    QmiNasNetworkType *value_serving_system_selected_network,
    GArray **value_serving_system_radio_interfaces,
    GError **error);


/**
 * qmi_message_nas_get_serving_system_output_ref:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetServingSystemOutput *qmi_message_nas_get_serving_system_output_ref (QmiMessageNasGetServingSystemOutput *self);

/**
 * qmi_message_nas_get_serving_system_output_unref:
 * @self: a #QmiMessageNasGetServingSystemOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_serving_system_output_unref (QmiMessageNasGetServingSystemOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetServingSystemOutput, qmi_message_nas_get_serving_system_output_unref)

/**
 * qmi_message_nas_get_serving_system_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetServingSystemOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetServingSystemOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_serving_system_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetServingSystemOutput *qmi_message_nas_get_serving_system_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Home Network */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetHomeNetworkOutput:
 *
 * The #QmiMessageNasGetHomeNetworkOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetHomeNetworkOutput QmiMessageNasGetHomeNetworkOutput;
GType qmi_message_nas_get_home_network_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_HOME_NETWORK_OUTPUT (qmi_message_nas_get_home_network_output_get_type ())


/**
 * qmi_message_nas_get_home_network_output_get_network_name_source:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 * @value_network_name_source: (out)(optional): a placeholder for the output #QmiNasNetworkNameSource, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Name Source' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_get_home_network_output_get_network_name_source (
    QmiMessageNasGetHomeNetworkOutput *self,
    QmiNasNetworkNameSource *value_network_name_source,
    GError **error);


/**
 * qmi_message_nas_get_home_network_output_get_home_network_3gpp_mnc:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 * @value_home_network_3gpp_mnc_is_3gpp: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_home_network_3gpp_mnc_includes_pcs_digit: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Home Network 3GPP MNC' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_home_network_output_get_home_network_3gpp_mnc (
    QmiMessageNasGetHomeNetworkOutput *self,
    gboolean *value_home_network_3gpp_mnc_is_3gpp,
    gboolean *value_home_network_3gpp_mnc_includes_pcs_digit,
    GError **error);


/**
 * qmi_message_nas_get_home_network_output_get_home_network_3gpp2_ext:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 * @value_home_network_3gpp2_ext_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_home_network_3gpp2_ext_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_home_network_3gpp2_ext_display_description: (out)(optional): a placeholder for the output #QmiNasNetworkDescriptionDisplay, or %NULL if not required.
 * @value_home_network_3gpp2_ext_description_encoding: (out)(optional): a placeholder for the output #QmiNasNetworkDescriptionEncoding, or %NULL if not required.
 * @value_home_network_3gpp2_ext_description: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Home Network 3GPP2 Ext' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24.6
 */
gboolean qmi_message_nas_get_home_network_output_get_home_network_3gpp2_ext (
    QmiMessageNasGetHomeNetworkOutput *self,
    guint16 *value_home_network_3gpp2_ext_mcc,
    guint16 *value_home_network_3gpp2_ext_mnc,
    QmiNasNetworkDescriptionDisplay *value_home_network_3gpp2_ext_display_description,
    QmiNasNetworkDescriptionEncoding *value_home_network_3gpp2_ext_description_encoding,
    GArray **value_home_network_3gpp2_ext_description,
    GError **error);


/**
 * qmi_message_nas_get_home_network_output_get_home_system_id:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 * @value_home_system_id_sid: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_home_system_id_nid: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Home System ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_home_network_output_get_home_system_id (
    QmiMessageNasGetHomeNetworkOutput *self,
    guint16 *value_home_system_id_sid,
    guint16 *value_home_system_id_nid,
    GError **error);


/**
 * qmi_message_nas_get_home_network_output_get_result:
 * @self: a QmiMessageNasGetHomeNetworkOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_home_network_output_get_result (
    QmiMessageNasGetHomeNetworkOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_home_network_output_get_home_network:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 * @value_home_network_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_home_network_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_home_network_description: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Home Network' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_home_network_output_get_home_network (
    QmiMessageNasGetHomeNetworkOutput *self,
    guint16 *value_home_network_mcc,
    guint16 *value_home_network_mnc,
    const gchar **value_home_network_description,
    GError **error);


/**
 * qmi_message_nas_get_home_network_output_ref:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetHomeNetworkOutput *qmi_message_nas_get_home_network_output_ref (QmiMessageNasGetHomeNetworkOutput *self);

/**
 * qmi_message_nas_get_home_network_output_unref:
 * @self: a #QmiMessageNasGetHomeNetworkOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_home_network_output_unref (QmiMessageNasGetHomeNetworkOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetHomeNetworkOutput, qmi_message_nas_get_home_network_output_unref)

/**
 * qmi_message_nas_get_home_network_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetHomeNetworkOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetHomeNetworkOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_home_network_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetHomeNetworkOutput *qmi_message_nas_get_home_network_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Preferred Networks */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageNasGetPreferredNetworksOutputStaticMncPcsDigitIncludeStatusElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @includes_pcs_digit: a #gboolean.
 *
 * A QmiMessageNasGetPreferredNetworksOutputStaticMncPcsDigitIncludeStatusElement struct.
 *
 * Since: 1.36
 */
typedef struct _QmiMessageNasGetPreferredNetworksOutputStaticMncPcsDigitIncludeStatusElement {
    guint16 mcc;
    guint16 mnc;
    gboolean includes_pcs_digit;
} QmiMessageNasGetPreferredNetworksOutputStaticMncPcsDigitIncludeStatusElement;

GType qmi_message_nas_get_preferred_networks_output_static_mnc_pcs_digit_include_status_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetPreferredNetworksOutputPreferredNetworksElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @radio_access_technology: a #QmiNasPlmnAccessTechnologyIdentifier.
 *
 * A QmiMessageNasGetPreferredNetworksOutputPreferredNetworksElement struct.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageNasGetPreferredNetworksOutputPreferredNetworksElement {
    guint16 mcc;
    guint16 mnc;
    QmiNasPlmnAccessTechnologyIdentifier radio_access_technology;
} QmiMessageNasGetPreferredNetworksOutputPreferredNetworksElement;

GType qmi_message_nas_get_preferred_networks_output_preferred_networks_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetPreferredNetworksOutputStaticPreferredNetworksElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @radio_access_technology: a #QmiNasPlmnAccessTechnologyIdentifier.
 *
 * A QmiMessageNasGetPreferredNetworksOutputStaticPreferredNetworksElement struct.
 *
 * Since: 1.36
 */
typedef struct _QmiMessageNasGetPreferredNetworksOutputStaticPreferredNetworksElement {
    guint16 mcc;
    guint16 mnc;
    QmiNasPlmnAccessTechnologyIdentifier radio_access_technology;
} QmiMessageNasGetPreferredNetworksOutputStaticPreferredNetworksElement;

GType qmi_message_nas_get_preferred_networks_output_static_preferred_networks_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetPreferredNetworksOutputMncPcsDigitIncludeStatusElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @includes_pcs_digit: a #gboolean.
 *
 * A QmiMessageNasGetPreferredNetworksOutputMncPcsDigitIncludeStatusElement struct.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageNasGetPreferredNetworksOutputMncPcsDigitIncludeStatusElement {
    guint16 mcc;
    guint16 mnc;
    gboolean includes_pcs_digit;
} QmiMessageNasGetPreferredNetworksOutputMncPcsDigitIncludeStatusElement;

GType qmi_message_nas_get_preferred_networks_output_mnc_pcs_digit_include_status_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasGetPreferredNetworksOutput:
 *
 * The #QmiMessageNasGetPreferredNetworksOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageNasGetPreferredNetworksOutput QmiMessageNasGetPreferredNetworksOutput;
GType qmi_message_nas_get_preferred_networks_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_PREFERRED_NETWORKS_OUTPUT (qmi_message_nas_get_preferred_networks_output_get_type ())


/**
 * qmi_message_nas_get_preferred_networks_output_get_static_mnc_pcs_digit_include_status: (skip)
 * @self: a #QmiMessageNasGetPreferredNetworksOutput.
 * @value_static_mnc_pcs_digit_include_status: (out)(optional)(element-type QmiMessageNasGetPreferredNetworksOutputStaticMncPcsDigitIncludeStatusElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetPreferredNetworksOutputStaticMncPcsDigitIncludeStatusElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Static MNC PCS Digit Include Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_nas_get_preferred_networks_output_get_static_mnc_pcs_digit_include_status (
    QmiMessageNasGetPreferredNetworksOutput *self,
    GArray **value_static_mnc_pcs_digit_include_status,
    GError **error);


/**
 * qmi_message_nas_get_preferred_networks_output_get_static_mnc_pcs_digit_include_status_gir: (rename-to qmi_message_nas_get_preferred_networks_output_get_static_mnc_pcs_digit_include_status)
 * @self: a #QmiMessageNasGetPreferredNetworksOutput.
 * @value_static_mnc_pcs_digit_include_status_ptr: (out)(optional)(element-type QmiMessageNasGetPreferredNetworksOutputStaticMncPcsDigitIncludeStatusElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetPreferredNetworksOutputStaticMncPcsDigitIncludeStatusElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Static MNC PCS Digit Include Status' field from @self.
 *
 * Version of qmi_message_nas_get_preferred_networks_output_get_static_mnc_pcs_digit_include_status() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_nas_get_preferred_networks_output_get_static_mnc_pcs_digit_include_status_gir (
    QmiMessageNasGetPreferredNetworksOutput *self,
    GPtrArray **value_static_mnc_pcs_digit_include_status_ptr,
    GError **error);


/**
 * qmi_message_nas_get_preferred_networks_output_get_result:
 * @self: a QmiMessageNasGetPreferredNetworksOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_preferred_networks_output_get_result (
    QmiMessageNasGetPreferredNetworksOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_preferred_networks_output_get_preferred_networks: (skip)
 * @self: a #QmiMessageNasGetPreferredNetworksOutput.
 * @value_preferred_networks: (out)(optional)(element-type QmiMessageNasGetPreferredNetworksOutputPreferredNetworksElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetPreferredNetworksOutputPreferredNetworksElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preferred Networks' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_preferred_networks_output_get_preferred_networks (
    QmiMessageNasGetPreferredNetworksOutput *self,
    GArray **value_preferred_networks,
    GError **error);


/**
 * qmi_message_nas_get_preferred_networks_output_get_preferred_networks_gir: (rename-to qmi_message_nas_get_preferred_networks_output_get_preferred_networks)
 * @self: a #QmiMessageNasGetPreferredNetworksOutput.
 * @value_preferred_networks_ptr: (out)(optional)(element-type QmiMessageNasGetPreferredNetworksOutputPreferredNetworksElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetPreferredNetworksOutputPreferredNetworksElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preferred Networks' field from @self.
 *
 * Version of qmi_message_nas_get_preferred_networks_output_get_preferred_networks() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_preferred_networks_output_get_preferred_networks_gir (
    QmiMessageNasGetPreferredNetworksOutput *self,
    GPtrArray **value_preferred_networks_ptr,
    GError **error);


/**
 * qmi_message_nas_get_preferred_networks_output_get_static_preferred_networks: (skip)
 * @self: a #QmiMessageNasGetPreferredNetworksOutput.
 * @value_static_preferred_networks: (out)(optional)(element-type QmiMessageNasGetPreferredNetworksOutputStaticPreferredNetworksElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetPreferredNetworksOutputStaticPreferredNetworksElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Static Preferred Networks' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_nas_get_preferred_networks_output_get_static_preferred_networks (
    QmiMessageNasGetPreferredNetworksOutput *self,
    GArray **value_static_preferred_networks,
    GError **error);


/**
 * qmi_message_nas_get_preferred_networks_output_get_static_preferred_networks_gir: (rename-to qmi_message_nas_get_preferred_networks_output_get_static_preferred_networks)
 * @self: a #QmiMessageNasGetPreferredNetworksOutput.
 * @value_static_preferred_networks_ptr: (out)(optional)(element-type QmiMessageNasGetPreferredNetworksOutputStaticPreferredNetworksElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetPreferredNetworksOutputStaticPreferredNetworksElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Static Preferred Networks' field from @self.
 *
 * Version of qmi_message_nas_get_preferred_networks_output_get_static_preferred_networks() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_nas_get_preferred_networks_output_get_static_preferred_networks_gir (
    QmiMessageNasGetPreferredNetworksOutput *self,
    GPtrArray **value_static_preferred_networks_ptr,
    GError **error);


/**
 * qmi_message_nas_get_preferred_networks_output_get_mnc_pcs_digit_include_status: (skip)
 * @self: a #QmiMessageNasGetPreferredNetworksOutput.
 * @value_mnc_pcs_digit_include_status: (out)(optional)(element-type QmiMessageNasGetPreferredNetworksOutputMncPcsDigitIncludeStatusElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetPreferredNetworksOutputMncPcsDigitIncludeStatusElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_preferred_networks_output_get_mnc_pcs_digit_include_status (
    QmiMessageNasGetPreferredNetworksOutput *self,
    GArray **value_mnc_pcs_digit_include_status,
    GError **error);


/**
 * qmi_message_nas_get_preferred_networks_output_get_mnc_pcs_digit_include_status_gir: (rename-to qmi_message_nas_get_preferred_networks_output_get_mnc_pcs_digit_include_status)
 * @self: a #QmiMessageNasGetPreferredNetworksOutput.
 * @value_mnc_pcs_digit_include_status_ptr: (out)(optional)(element-type QmiMessageNasGetPreferredNetworksOutputMncPcsDigitIncludeStatusElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetPreferredNetworksOutputMncPcsDigitIncludeStatusElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Version of qmi_message_nas_get_preferred_networks_output_get_mnc_pcs_digit_include_status() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_preferred_networks_output_get_mnc_pcs_digit_include_status_gir (
    QmiMessageNasGetPreferredNetworksOutput *self,
    GPtrArray **value_mnc_pcs_digit_include_status_ptr,
    GError **error);


/**
 * qmi_message_nas_get_preferred_networks_output_ref:
 * @self: a #QmiMessageNasGetPreferredNetworksOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageNasGetPreferredNetworksOutput *qmi_message_nas_get_preferred_networks_output_ref (QmiMessageNasGetPreferredNetworksOutput *self);

/**
 * qmi_message_nas_get_preferred_networks_output_unref:
 * @self: a #QmiMessageNasGetPreferredNetworksOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_nas_get_preferred_networks_output_unref (QmiMessageNasGetPreferredNetworksOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetPreferredNetworksOutput, qmi_message_nas_get_preferred_networks_output_unref)

/**
 * qmi_message_nas_get_preferred_networks_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetPreferredNetworksOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetPreferredNetworksOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_preferred_networks_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetPreferredNetworksOutput *qmi_message_nas_get_preferred_networks_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Set Preferred Networks */


/* --- Input -- */


/**
 * QmiMessageNasSetPreferredNetworksInputMncPcsDigitIncludeStatusElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @includes_pcs_digit: a #gboolean.
 *
 * A QmiMessageNasSetPreferredNetworksInputMncPcsDigitIncludeStatusElement struct.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageNasSetPreferredNetworksInputMncPcsDigitIncludeStatusElement {
    guint16 mcc;
    guint16 mnc;
    gboolean includes_pcs_digit;
} QmiMessageNasSetPreferredNetworksInputMncPcsDigitIncludeStatusElement;

GType qmi_message_nas_set_preferred_networks_input_mnc_pcs_digit_include_status_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasSetPreferredNetworksInputPreferredNetworksElement:
 * @mcc: a #guint16.
 * @mnc: a #guint16.
 * @radio_access_technology: a #QmiNasPlmnAccessTechnologyIdentifier.
 *
 * A QmiMessageNasSetPreferredNetworksInputPreferredNetworksElement struct.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageNasSetPreferredNetworksInputPreferredNetworksElement {
    guint16 mcc;
    guint16 mnc;
    QmiNasPlmnAccessTechnologyIdentifier radio_access_technology;
} QmiMessageNasSetPreferredNetworksInputPreferredNetworksElement;

GType qmi_message_nas_set_preferred_networks_input_preferred_networks_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasSetPreferredNetworksInput:
 *
 * The #QmiMessageNasSetPreferredNetworksInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageNasSetPreferredNetworksInput QmiMessageNasSetPreferredNetworksInput;
GType qmi_message_nas_set_preferred_networks_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_PREFERRED_NETWORKS_INPUT (qmi_message_nas_set_preferred_networks_input_get_type ())


/**
 * qmi_message_nas_set_preferred_networks_input_get_clear_previous_preferred_networks:
 * @self: a #QmiMessageNasSetPreferredNetworksInput.
 * @value_clear_previous_preferred_networks: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Clear Previous Preferred Networks' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_set_preferred_networks_input_get_clear_previous_preferred_networks (
    QmiMessageNasSetPreferredNetworksInput *self,
    gboolean *value_clear_previous_preferred_networks,
    GError **error);


/**
 * qmi_message_nas_set_preferred_networks_input_set_clear_previous_preferred_networks:
 * @self: a #QmiMessageNasSetPreferredNetworksInput.
 * @value_clear_previous_preferred_networks: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Clear Previous Preferred Networks' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_set_preferred_networks_input_set_clear_previous_preferred_networks (
    QmiMessageNasSetPreferredNetworksInput *self,
    gboolean value_clear_previous_preferred_networks,
    GError **error);


/**
 * qmi_message_nas_set_preferred_networks_input_get_mnc_pcs_digit_include_status: (skip)
 * @self: a #QmiMessageNasSetPreferredNetworksInput.
 * @value_mnc_pcs_digit_include_status: (out)(optional)(element-type QmiMessageNasSetPreferredNetworksInputMncPcsDigitIncludeStatusElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasSetPreferredNetworksInputMncPcsDigitIncludeStatusElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_set_preferred_networks_input_get_mnc_pcs_digit_include_status (
    QmiMessageNasSetPreferredNetworksInput *self,
    GArray **value_mnc_pcs_digit_include_status,
    GError **error);


/**
 * qmi_message_nas_set_preferred_networks_input_get_mnc_pcs_digit_include_status_gir: (rename-to qmi_message_nas_set_preferred_networks_input_get_mnc_pcs_digit_include_status)
 * @self: a #QmiMessageNasSetPreferredNetworksInput.
 * @value_mnc_pcs_digit_include_status_ptr: (out)(optional)(element-type QmiMessageNasSetPreferredNetworksInputMncPcsDigitIncludeStatusElement)(transfer none): a placeholder for the output array of #QmiMessageNasSetPreferredNetworksInputMncPcsDigitIncludeStatusElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Version of qmi_message_nas_set_preferred_networks_input_get_mnc_pcs_digit_include_status() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_set_preferred_networks_input_get_mnc_pcs_digit_include_status_gir (
    QmiMessageNasSetPreferredNetworksInput *self,
    GPtrArray **value_mnc_pcs_digit_include_status_ptr,
    GError **error);


/**
 * qmi_message_nas_set_preferred_networks_input_set_mnc_pcs_digit_include_status: (skip)
 * @self: a #QmiMessageNasSetPreferredNetworksInput.
 * @value_mnc_pcs_digit_include_status: (in)(element-type QmiMessageNasSetPreferredNetworksInputMncPcsDigitIncludeStatusElement)(transfer none): a #GArray of #QmiMessageNasSetPreferredNetworksInputMncPcsDigitIncludeStatusElement elements. A new reference to @value_mnc_pcs_digit_include_status will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'MNC PCS Digit Include Status' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_set_preferred_networks_input_set_mnc_pcs_digit_include_status (
    QmiMessageNasSetPreferredNetworksInput *self,
    GArray *value_mnc_pcs_digit_include_status,
    GError **error);


/**
 * qmi_message_nas_set_preferred_networks_input_set_mnc_pcs_digit_include_status_gir: (rename-to qmi_message_nas_set_preferred_networks_input_set_mnc_pcs_digit_include_status)
 * @self: a #QmiMessageNasSetPreferredNetworksInput.
 * @value_mnc_pcs_digit_include_status_ptr: (in)(element-type QmiMessageNasSetPreferredNetworksInputMncPcsDigitIncludeStatusElement)(transfer none): array of #QmiMessageNasSetPreferredNetworksInputMncPcsDigitIncludeStatusElement elements. The contents of the given array will be copied, the #GPtrArray will not increase its reference count.
 * @error: Return location for error or %NULL.
 *
 * Set the 'MNC PCS Digit Include Status' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_set_preferred_networks_input_set_mnc_pcs_digit_include_status_gir (
    QmiMessageNasSetPreferredNetworksInput *self,
    GPtrArray *value_mnc_pcs_digit_include_status_ptr,
    GError **error);


/**
 * qmi_message_nas_set_preferred_networks_input_get_preferred_networks: (skip)
 * @self: a #QmiMessageNasSetPreferredNetworksInput.
 * @value_preferred_networks: (out)(optional)(element-type QmiMessageNasSetPreferredNetworksInputPreferredNetworksElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasSetPreferredNetworksInputPreferredNetworksElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preferred Networks' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_set_preferred_networks_input_get_preferred_networks (
    QmiMessageNasSetPreferredNetworksInput *self,
    GArray **value_preferred_networks,
    GError **error);


/**
 * qmi_message_nas_set_preferred_networks_input_get_preferred_networks_gir: (rename-to qmi_message_nas_set_preferred_networks_input_get_preferred_networks)
 * @self: a #QmiMessageNasSetPreferredNetworksInput.
 * @value_preferred_networks_ptr: (out)(optional)(element-type QmiMessageNasSetPreferredNetworksInputPreferredNetworksElement)(transfer none): a placeholder for the output array of #QmiMessageNasSetPreferredNetworksInputPreferredNetworksElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preferred Networks' field from @self.
 *
 * Version of qmi_message_nas_set_preferred_networks_input_get_preferred_networks() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_set_preferred_networks_input_get_preferred_networks_gir (
    QmiMessageNasSetPreferredNetworksInput *self,
    GPtrArray **value_preferred_networks_ptr,
    GError **error);


/**
 * qmi_message_nas_set_preferred_networks_input_set_preferred_networks: (skip)
 * @self: a #QmiMessageNasSetPreferredNetworksInput.
 * @value_preferred_networks: (in)(element-type QmiMessageNasSetPreferredNetworksInputPreferredNetworksElement)(transfer none): a #GArray of #QmiMessageNasSetPreferredNetworksInputPreferredNetworksElement elements. A new reference to @value_preferred_networks will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Preferred Networks' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_set_preferred_networks_input_set_preferred_networks (
    QmiMessageNasSetPreferredNetworksInput *self,
    GArray *value_preferred_networks,
    GError **error);


/**
 * qmi_message_nas_set_preferred_networks_input_set_preferred_networks_gir: (rename-to qmi_message_nas_set_preferred_networks_input_set_preferred_networks)
 * @self: a #QmiMessageNasSetPreferredNetworksInput.
 * @value_preferred_networks_ptr: (in)(element-type QmiMessageNasSetPreferredNetworksInputPreferredNetworksElement)(transfer none): array of #QmiMessageNasSetPreferredNetworksInputPreferredNetworksElement elements. The contents of the given array will be copied, the #GPtrArray will not increase its reference count.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Preferred Networks' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_set_preferred_networks_input_set_preferred_networks_gir (
    QmiMessageNasSetPreferredNetworksInput *self,
    GPtrArray *value_preferred_networks_ptr,
    GError **error);


/**
 * qmi_message_nas_set_preferred_networks_input_ref:
 * @self: a #QmiMessageNasSetPreferredNetworksInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageNasSetPreferredNetworksInput *qmi_message_nas_set_preferred_networks_input_ref (QmiMessageNasSetPreferredNetworksInput *self);

/**
 * qmi_message_nas_set_preferred_networks_input_unref:
 * @self: a #QmiMessageNasSetPreferredNetworksInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_nas_set_preferred_networks_input_unref (QmiMessageNasSetPreferredNetworksInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasSetPreferredNetworksInput, qmi_message_nas_set_preferred_networks_input_unref)

/**
 * qmi_message_nas_set_preferred_networks_input_new:
 *
 * Allocates a new #QmiMessageNasSetPreferredNetworksInput.
 *
 * Returns: the newly created #QmiMessageNasSetPreferredNetworksInput. The returned value should be freed with qmi_message_nas_set_preferred_networks_input_unref().
 *
 * Since: 1.30
 */
QmiMessageNasSetPreferredNetworksInput *qmi_message_nas_set_preferred_networks_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasSetPreferredNetworksOutput:
 *
 * The #QmiMessageNasSetPreferredNetworksOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.30
 */
typedef struct _QmiMessageNasSetPreferredNetworksOutput QmiMessageNasSetPreferredNetworksOutput;
GType qmi_message_nas_set_preferred_networks_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_PREFERRED_NETWORKS_OUTPUT (qmi_message_nas_set_preferred_networks_output_get_type ())


/**
 * qmi_message_nas_set_preferred_networks_output_get_result:
 * @self: a QmiMessageNasSetPreferredNetworksOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_set_preferred_networks_output_get_result (
    QmiMessageNasSetPreferredNetworksOutput *self,
    GError **error);


/**
 * qmi_message_nas_set_preferred_networks_output_ref:
 * @self: a #QmiMessageNasSetPreferredNetworksOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.30
 */
QmiMessageNasSetPreferredNetworksOutput *qmi_message_nas_set_preferred_networks_output_ref (QmiMessageNasSetPreferredNetworksOutput *self);

/**
 * qmi_message_nas_set_preferred_networks_output_unref:
 * @self: a #QmiMessageNasSetPreferredNetworksOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.30
 */
void qmi_message_nas_set_preferred_networks_output_unref (QmiMessageNasSetPreferredNetworksOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasSetPreferredNetworksOutput, qmi_message_nas_set_preferred_networks_output_unref)

/**
 * qmi_message_nas_set_preferred_networks_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasSetPreferredNetworksOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasSetPreferredNetworksOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_set_preferred_networks_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasSetPreferredNetworksOutput *qmi_message_nas_set_preferred_networks_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Set Technology Preference */


/* --- Input -- */

/**
 * QmiMessageNasSetTechnologyPreferenceInput:
 *
 * The #QmiMessageNasSetTechnologyPreferenceInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasSetTechnologyPreferenceInput QmiMessageNasSetTechnologyPreferenceInput;
GType qmi_message_nas_set_technology_preference_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_TECHNOLOGY_PREFERENCE_INPUT (qmi_message_nas_set_technology_preference_input_get_type ())


/**
 * qmi_message_nas_set_technology_preference_input_get_current:
 * @self: a #QmiMessageNasSetTechnologyPreferenceInput.
 * @value_current_technology_preference: (out)(optional): a placeholder for the output #QmiNasRadioTechnologyPreference, or %NULL if not required.
 * @value_current_technology_preference_duration: (out)(optional): a placeholder for the output #QmiNasPreferenceDuration, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_technology_preference_input_get_current (
    QmiMessageNasSetTechnologyPreferenceInput *self,
    QmiNasRadioTechnologyPreference *value_current_technology_preference,
    QmiNasPreferenceDuration *value_current_technology_preference_duration,
    GError **error);


/**
 * qmi_message_nas_set_technology_preference_input_set_current:
 * @self: a #QmiMessageNasSetTechnologyPreferenceInput.
 * @value_current_technology_preference: a #QmiNasRadioTechnologyPreference.
 * @value_current_technology_preference_duration: a #QmiNasPreferenceDuration.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Current' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_technology_preference_input_set_current (
    QmiMessageNasSetTechnologyPreferenceInput *self,
    QmiNasRadioTechnologyPreference value_current_technology_preference,
    QmiNasPreferenceDuration value_current_technology_preference_duration,
    GError **error);


/**
 * qmi_message_nas_set_technology_preference_input_ref:
 * @self: a #QmiMessageNasSetTechnologyPreferenceInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasSetTechnologyPreferenceInput *qmi_message_nas_set_technology_preference_input_ref (QmiMessageNasSetTechnologyPreferenceInput *self);

/**
 * qmi_message_nas_set_technology_preference_input_unref:
 * @self: a #QmiMessageNasSetTechnologyPreferenceInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_set_technology_preference_input_unref (QmiMessageNasSetTechnologyPreferenceInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasSetTechnologyPreferenceInput, qmi_message_nas_set_technology_preference_input_unref)

/**
 * qmi_message_nas_set_technology_preference_input_new:
 *
 * Allocates a new #QmiMessageNasSetTechnologyPreferenceInput.
 *
 * Returns: the newly created #QmiMessageNasSetTechnologyPreferenceInput. The returned value should be freed with qmi_message_nas_set_technology_preference_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasSetTechnologyPreferenceInput *qmi_message_nas_set_technology_preference_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasSetTechnologyPreferenceOutput:
 *
 * The #QmiMessageNasSetTechnologyPreferenceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasSetTechnologyPreferenceOutput QmiMessageNasSetTechnologyPreferenceOutput;
GType qmi_message_nas_set_technology_preference_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_TECHNOLOGY_PREFERENCE_OUTPUT (qmi_message_nas_set_technology_preference_output_get_type ())


/**
 * qmi_message_nas_set_technology_preference_output_get_result:
 * @self: a QmiMessageNasSetTechnologyPreferenceOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_technology_preference_output_get_result (
    QmiMessageNasSetTechnologyPreferenceOutput *self,
    GError **error);


/**
 * qmi_message_nas_set_technology_preference_output_ref:
 * @self: a #QmiMessageNasSetTechnologyPreferenceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasSetTechnologyPreferenceOutput *qmi_message_nas_set_technology_preference_output_ref (QmiMessageNasSetTechnologyPreferenceOutput *self);

/**
 * qmi_message_nas_set_technology_preference_output_unref:
 * @self: a #QmiMessageNasSetTechnologyPreferenceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_set_technology_preference_output_unref (QmiMessageNasSetTechnologyPreferenceOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasSetTechnologyPreferenceOutput, qmi_message_nas_set_technology_preference_output_unref)

/**
 * qmi_message_nas_set_technology_preference_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasSetTechnologyPreferenceOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasSetTechnologyPreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_set_technology_preference_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasSetTechnologyPreferenceOutput *qmi_message_nas_set_technology_preference_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Technology Preference */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetTechnologyPreferenceOutput:
 *
 * The #QmiMessageNasGetTechnologyPreferenceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetTechnologyPreferenceOutput QmiMessageNasGetTechnologyPreferenceOutput;
GType qmi_message_nas_get_technology_preference_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_TECHNOLOGY_PREFERENCE_OUTPUT (qmi_message_nas_get_technology_preference_output_get_type ())


/**
 * qmi_message_nas_get_technology_preference_output_get_persistent:
 * @self: a #QmiMessageNasGetTechnologyPreferenceOutput.
 * @value_persistent: (out)(optional): a placeholder for the output #QmiNasRadioTechnologyPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Persistent' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_technology_preference_output_get_persistent (
    QmiMessageNasGetTechnologyPreferenceOutput *self,
    QmiNasRadioTechnologyPreference *value_persistent,
    GError **error);


/**
 * qmi_message_nas_get_technology_preference_output_get_result:
 * @self: a QmiMessageNasGetTechnologyPreferenceOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_technology_preference_output_get_result (
    QmiMessageNasGetTechnologyPreferenceOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_technology_preference_output_get_active:
 * @self: a #QmiMessageNasGetTechnologyPreferenceOutput.
 * @value_active_technology_preference: (out)(optional): a placeholder for the output #QmiNasRadioTechnologyPreference, or %NULL if not required.
 * @value_active_technology_preference_duration: (out)(optional): a placeholder for the output #QmiNasPreferenceDuration, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Active' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_technology_preference_output_get_active (
    QmiMessageNasGetTechnologyPreferenceOutput *self,
    QmiNasRadioTechnologyPreference *value_active_technology_preference,
    QmiNasPreferenceDuration *value_active_technology_preference_duration,
    GError **error);


/**
 * qmi_message_nas_get_technology_preference_output_ref:
 * @self: a #QmiMessageNasGetTechnologyPreferenceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetTechnologyPreferenceOutput *qmi_message_nas_get_technology_preference_output_ref (QmiMessageNasGetTechnologyPreferenceOutput *self);

/**
 * qmi_message_nas_get_technology_preference_output_unref:
 * @self: a #QmiMessageNasGetTechnologyPreferenceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_technology_preference_output_unref (QmiMessageNasGetTechnologyPreferenceOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetTechnologyPreferenceOutput, qmi_message_nas_get_technology_preference_output_unref)

/**
 * qmi_message_nas_get_technology_preference_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetTechnologyPreferenceOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetTechnologyPreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_technology_preference_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetTechnologyPreferenceOutput *qmi_message_nas_get_technology_preference_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get RF Band Information */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageNasGetRfBandInformationOutputBandwidthListElement:
 * @radio_interface: a #QmiNasRadioInterface.
 * @bandwidth: a #QmiNasDLBandwidth.
 *
 * A QmiMessageNasGetRfBandInformationOutputBandwidthListElement struct.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageNasGetRfBandInformationOutputBandwidthListElement {
    QmiNasRadioInterface radio_interface;
    QmiNasDLBandwidth bandwidth;
} QmiMessageNasGetRfBandInformationOutputBandwidthListElement;

GType qmi_message_nas_get_rf_band_information_output_bandwidth_list_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetRfBandInformationOutputExtendedListElement:
 * @radio_interface: a #QmiNasRadioInterface.
 * @active_band_class: a #QmiNasActiveBand.
 * @active_channel: a #guint32.
 *
 * A QmiMessageNasGetRfBandInformationOutputExtendedListElement struct.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageNasGetRfBandInformationOutputExtendedListElement {
    QmiNasRadioInterface radio_interface;
    QmiNasActiveBand active_band_class;
    guint32 active_channel;
} QmiMessageNasGetRfBandInformationOutputExtendedListElement;

GType qmi_message_nas_get_rf_band_information_output_extended_list_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetRfBandInformationOutputListElement:
 * @radio_interface: a #QmiNasRadioInterface.
 * @active_band_class: a #QmiNasActiveBand.
 * @active_channel: a #guint16.
 *
 * A QmiMessageNasGetRfBandInformationOutputListElement struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetRfBandInformationOutputListElement {
    QmiNasRadioInterface radio_interface;
    QmiNasActiveBand active_band_class;
    guint16 active_channel;
} QmiMessageNasGetRfBandInformationOutputListElement;

GType qmi_message_nas_get_rf_band_information_output_list_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasGetRfBandInformationOutput:
 *
 * The #QmiMessageNasGetRfBandInformationOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetRfBandInformationOutput QmiMessageNasGetRfBandInformationOutput;
GType qmi_message_nas_get_rf_band_information_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_RF_BAND_INFORMATION_OUTPUT (qmi_message_nas_get_rf_band_information_output_get_type ())


/**
 * qmi_message_nas_get_rf_band_information_output_get_bandwidth_list: (skip)
 * @self: a #QmiMessageNasGetRfBandInformationOutput.
 * @value_bandwidth_list: (out)(optional)(element-type QmiMessageNasGetRfBandInformationOutputBandwidthListElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetRfBandInformationOutputBandwidthListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Bandwidth List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_nas_get_rf_band_information_output_get_bandwidth_list (
    QmiMessageNasGetRfBandInformationOutput *self,
    GArray **value_bandwidth_list,
    GError **error);


/**
 * qmi_message_nas_get_rf_band_information_output_get_bandwidth_list_gir: (rename-to qmi_message_nas_get_rf_band_information_output_get_bandwidth_list)
 * @self: a #QmiMessageNasGetRfBandInformationOutput.
 * @value_bandwidth_list_ptr: (out)(optional)(element-type QmiMessageNasGetRfBandInformationOutputBandwidthListElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetRfBandInformationOutputBandwidthListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Bandwidth List' field from @self.
 *
 * Version of qmi_message_nas_get_rf_band_information_output_get_bandwidth_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_rf_band_information_output_get_bandwidth_list_gir (
    QmiMessageNasGetRfBandInformationOutput *self,
    GPtrArray **value_bandwidth_list_ptr,
    GError **error);


/**
 * qmi_message_nas_get_rf_band_information_output_get_extended_list: (skip)
 * @self: a #QmiMessageNasGetRfBandInformationOutput.
 * @value_extended_list: (out)(optional)(element-type QmiMessageNasGetRfBandInformationOutputExtendedListElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetRfBandInformationOutputExtendedListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_nas_get_rf_band_information_output_get_extended_list (
    QmiMessageNasGetRfBandInformationOutput *self,
    GArray **value_extended_list,
    GError **error);


/**
 * qmi_message_nas_get_rf_band_information_output_get_extended_list_gir: (rename-to qmi_message_nas_get_rf_band_information_output_get_extended_list)
 * @self: a #QmiMessageNasGetRfBandInformationOutput.
 * @value_extended_list_ptr: (out)(optional)(element-type QmiMessageNasGetRfBandInformationOutputExtendedListElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetRfBandInformationOutputExtendedListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended List' field from @self.
 *
 * Version of qmi_message_nas_get_rf_band_information_output_get_extended_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_rf_band_information_output_get_extended_list_gir (
    QmiMessageNasGetRfBandInformationOutput *self,
    GPtrArray **value_extended_list_ptr,
    GError **error);


/**
 * qmi_message_nas_get_rf_band_information_output_get_list: (skip)
 * @self: a #QmiMessageNasGetRfBandInformationOutput.
 * @value_list: (out)(optional)(element-type QmiMessageNasGetRfBandInformationOutputListElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetRfBandInformationOutputListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_rf_band_information_output_get_list (
    QmiMessageNasGetRfBandInformationOutput *self,
    GArray **value_list,
    GError **error);


/**
 * qmi_message_nas_get_rf_band_information_output_get_list_gir: (rename-to qmi_message_nas_get_rf_band_information_output_get_list)
 * @self: a #QmiMessageNasGetRfBandInformationOutput.
 * @value_list_ptr: (out)(optional)(element-type QmiMessageNasGetRfBandInformationOutputListElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetRfBandInformationOutputListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Version of qmi_message_nas_get_rf_band_information_output_get_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_rf_band_information_output_get_list_gir (
    QmiMessageNasGetRfBandInformationOutput *self,
    GPtrArray **value_list_ptr,
    GError **error);


/**
 * qmi_message_nas_get_rf_band_information_output_get_result:
 * @self: a QmiMessageNasGetRfBandInformationOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_rf_band_information_output_get_result (
    QmiMessageNasGetRfBandInformationOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_rf_band_information_output_ref:
 * @self: a #QmiMessageNasGetRfBandInformationOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetRfBandInformationOutput *qmi_message_nas_get_rf_band_information_output_ref (QmiMessageNasGetRfBandInformationOutput *self);

/**
 * qmi_message_nas_get_rf_band_information_output_unref:
 * @self: a #QmiMessageNasGetRfBandInformationOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_rf_band_information_output_unref (QmiMessageNasGetRfBandInformationOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetRfBandInformationOutput, qmi_message_nas_get_rf_band_information_output_unref)

/**
 * qmi_message_nas_get_rf_band_information_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetRfBandInformationOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetRfBandInformationOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_rf_band_information_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetRfBandInformationOutput *qmi_message_nas_get_rf_band_information_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Set System Selection Preference */


/* --- Input -- */

/**
 * QmiMessageNasSetSystemSelectionPreferenceInput:
 *
 * The #QmiMessageNasSetSystemSelectionPreferenceInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasSetSystemSelectionPreferenceInput QmiMessageNasSetSystemSelectionPreferenceInput;
GType qmi_message_nas_set_system_selection_preference_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_SYSTEM_SELECTION_PREFERENCE_INPUT (qmi_message_nas_set_system_selection_preference_input_get_type ())


/**
 * qmi_message_nas_set_system_selection_preference_input_get_nr5g_nsa_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_nr5g_nsa_band_preference_mask_0: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_1: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_2: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_3: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_4: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_5: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_6: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_7: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G NSA Band Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_nr5g_nsa_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    guint64 *value_nr5g_nsa_band_preference_mask_0,
    guint64 *value_nr5g_nsa_band_preference_mask_1,
    guint64 *value_nr5g_nsa_band_preference_mask_2,
    guint64 *value_nr5g_nsa_band_preference_mask_3,
    guint64 *value_nr5g_nsa_band_preference_mask_4,
    guint64 *value_nr5g_nsa_band_preference_mask_5,
    guint64 *value_nr5g_nsa_band_preference_mask_6,
    guint64 *value_nr5g_nsa_band_preference_mask_7,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_nr5g_nsa_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_nr5g_nsa_band_preference_mask_0: a #guint64.
 * @value_nr5g_nsa_band_preference_mask_1: a #guint64.
 * @value_nr5g_nsa_band_preference_mask_2: a #guint64.
 * @value_nr5g_nsa_band_preference_mask_3: a #guint64.
 * @value_nr5g_nsa_band_preference_mask_4: a #guint64.
 * @value_nr5g_nsa_band_preference_mask_5: a #guint64.
 * @value_nr5g_nsa_band_preference_mask_6: a #guint64.
 * @value_nr5g_nsa_band_preference_mask_7: a #guint64.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NR5G NSA Band Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_nr5g_nsa_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    guint64 value_nr5g_nsa_band_preference_mask_0,
    guint64 value_nr5g_nsa_band_preference_mask_1,
    guint64 value_nr5g_nsa_band_preference_mask_2,
    guint64 value_nr5g_nsa_band_preference_mask_3,
    guint64 value_nr5g_nsa_band_preference_mask_4,
    guint64 value_nr5g_nsa_band_preference_mask_5,
    guint64 value_nr5g_nsa_band_preference_mask_6,
    guint64 value_nr5g_nsa_band_preference_mask_7,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_nr5g_sa_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_nr5g_sa_band_preference_mask_0: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_1: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_2: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_3: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_4: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_5: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_6: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_7: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G SA Band Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_nr5g_sa_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    guint64 *value_nr5g_sa_band_preference_mask_0,
    guint64 *value_nr5g_sa_band_preference_mask_1,
    guint64 *value_nr5g_sa_band_preference_mask_2,
    guint64 *value_nr5g_sa_band_preference_mask_3,
    guint64 *value_nr5g_sa_band_preference_mask_4,
    guint64 *value_nr5g_sa_band_preference_mask_5,
    guint64 *value_nr5g_sa_band_preference_mask_6,
    guint64 *value_nr5g_sa_band_preference_mask_7,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_nr5g_sa_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_nr5g_sa_band_preference_mask_0: a #guint64.
 * @value_nr5g_sa_band_preference_mask_1: a #guint64.
 * @value_nr5g_sa_band_preference_mask_2: a #guint64.
 * @value_nr5g_sa_band_preference_mask_3: a #guint64.
 * @value_nr5g_sa_band_preference_mask_4: a #guint64.
 * @value_nr5g_sa_band_preference_mask_5: a #guint64.
 * @value_nr5g_sa_band_preference_mask_6: a #guint64.
 * @value_nr5g_sa_band_preference_mask_7: a #guint64.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NR5G SA Band Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_nr5g_sa_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    guint64 value_nr5g_sa_band_preference_mask_0,
    guint64 value_nr5g_sa_band_preference_mask_1,
    guint64 value_nr5g_sa_band_preference_mask_2,
    guint64 value_nr5g_sa_band_preference_mask_3,
    guint64 value_nr5g_sa_band_preference_mask_4,
    guint64 value_nr5g_sa_band_preference_mask_5,
    guint64 value_nr5g_sa_band_preference_mask_6,
    guint64 value_nr5g_sa_band_preference_mask_7,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_extended_lte_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_extended_lte_band_preference_mask_low: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_extended_lte_band_preference_mask_mid_low: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_extended_lte_band_preference_mask_mid_high: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_extended_lte_band_preference_mask_high: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended LTE Band Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_extended_lte_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    guint64 *value_extended_lte_band_preference_mask_low,
    guint64 *value_extended_lte_band_preference_mask_mid_low,
    guint64 *value_extended_lte_band_preference_mask_mid_high,
    guint64 *value_extended_lte_band_preference_mask_high,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_extended_lte_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_extended_lte_band_preference_mask_low: a #guint64.
 * @value_extended_lte_band_preference_mask_mid_low: a #guint64.
 * @value_extended_lte_band_preference_mask_mid_high: a #guint64.
 * @value_extended_lte_band_preference_mask_high: a #guint64.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Extended LTE Band Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_extended_lte_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    guint64 value_extended_lte_band_preference_mask_low,
    guint64 value_extended_lte_band_preference_mask_mid_low,
    guint64 value_extended_lte_band_preference_mask_mid_high,
    guint64 value_extended_lte_band_preference_mask_high,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_voice_domain_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_voice_domain_preference: (out)(optional): a placeholder for the output #QmiNasVoiceDomainPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Voice Domain Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_voice_domain_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasVoiceDomainPreference *value_voice_domain_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_voice_domain_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_voice_domain_preference: a #QmiNasVoiceDomainPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Voice Domain Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_voice_domain_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasVoiceDomainPreference value_voice_domain_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_usage_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_usage_preference: (out)(optional): a placeholder for the output #QmiNasUsagePreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Usage Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_usage_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasUsagePreference *value_usage_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_usage_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_usage_preference: a #QmiNasUsagePreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Usage Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_usage_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasUsagePreference value_usage_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_network_selection_registration_restriction:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_network_selection_registration_restriction: (out)(optional): a placeholder for the output #QmiNasNetworkSelectionRegistrationRestriction, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Selection Registration Restriction' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_network_selection_registration_restriction (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasNetworkSelectionRegistrationRestriction *value_network_selection_registration_restriction,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_network_selection_registration_restriction:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_network_selection_registration_restriction: a #QmiNasNetworkSelectionRegistrationRestriction.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Selection Registration Restriction' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_network_selection_registration_restriction (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasNetworkSelectionRegistrationRestriction value_network_selection_registration_restriction,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_acquisition_order_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_acquisition_order_preference: (out)(optional)(element-type QmiNasRadioInterface)(transfer none): a placeholder for the output #GArray of #QmiNasRadioInterface elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Acquisition Order Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_acquisition_order_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    GArray **value_acquisition_order_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_acquisition_order_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_acquisition_order_preference: (in)(element-type QmiNasRadioInterface)(transfer none): a #GArray of #QmiNasRadioInterface elements. A new reference to @value_acquisition_order_preference will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Acquisition Order Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_acquisition_order_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    GArray *value_acquisition_order_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_td_scdma_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_td_scdma_band_preference: (out)(optional): a placeholder for the output #QmiNasTdScdmaBandPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TD SCDMA Band Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_td_scdma_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasTdScdmaBandPreference *value_td_scdma_band_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_td_scdma_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_td_scdma_band_preference: a #QmiNasTdScdmaBandPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'TD SCDMA Band Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_td_scdma_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasTdScdmaBandPreference value_td_scdma_band_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_mnc_pcs_digit_include_status:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_mnc_pcs_digit_include_status: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_mnc_pcs_digit_include_status (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    gboolean *value_mnc_pcs_digit_include_status,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_mnc_pcs_digit_include_status:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_mnc_pcs_digit_include_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'MNC PCS Digit Include Status' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_mnc_pcs_digit_include_status (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    gboolean value_mnc_pcs_digit_include_status,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_gsm_wcdma_acquisition_order_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_gsm_wcdma_acquisition_order_preference: (out)(optional): a placeholder for the output #QmiNasGsmWcdmaAcquisitionOrderPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM WCDMA Acquisition Order Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_gsm_wcdma_acquisition_order_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasGsmWcdmaAcquisitionOrderPreference *value_gsm_wcdma_acquisition_order_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_gsm_wcdma_acquisition_order_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_gsm_wcdma_acquisition_order_preference: a #QmiNasGsmWcdmaAcquisitionOrderPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GSM WCDMA Acquisition Order Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_gsm_wcdma_acquisition_order_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasGsmWcdmaAcquisitionOrderPreference value_gsm_wcdma_acquisition_order_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_service_domain_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_service_domain_preference: (out)(optional): a placeholder for the output #QmiNasServiceDomainPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Domain Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_service_domain_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasServiceDomainPreference *value_service_domain_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_service_domain_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_service_domain_preference: a #QmiNasServiceDomainPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Service Domain Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_service_domain_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasServiceDomainPreference value_service_domain_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_change_duration:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_change_duration: (out)(optional): a placeholder for the output #QmiNasChangeDuration, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Change Duration' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_change_duration (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasChangeDuration *value_change_duration,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_change_duration:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_change_duration: a #QmiNasChangeDuration.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Change Duration' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_change_duration (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasChangeDuration value_change_duration,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_network_selection_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_network_selection_preference_mode: (out)(optional): a placeholder for the output #QmiNasNetworkSelectionPreference, or %NULL if not required.
 * @value_network_selection_preference_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_network_selection_preference_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Selection Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_network_selection_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasNetworkSelectionPreference *value_network_selection_preference_mode,
    guint16 *value_network_selection_preference_mcc,
    guint16 *value_network_selection_preference_mnc,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_network_selection_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_network_selection_preference_mode: a #QmiNasNetworkSelectionPreference.
 * @value_network_selection_preference_mcc: a #guint16.
 * @value_network_selection_preference_mnc: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Selection Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_network_selection_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasNetworkSelectionPreference value_network_selection_preference_mode,
    guint16 value_network_selection_preference_mcc,
    guint16 value_network_selection_preference_mnc,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_lte_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_lte_band_preference: (out)(optional): a placeholder for the output #QmiNasLteBandPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Band Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_lte_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasLteBandPreference *value_lte_band_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_lte_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_lte_band_preference: a #QmiNasLteBandPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE Band Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_lte_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasLteBandPreference value_lte_band_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_roaming_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_roaming_preference: (out)(optional): a placeholder for the output #QmiNasRoamingPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_roaming_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasRoamingPreference *value_roaming_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_roaming_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_roaming_preference: a #QmiNasRoamingPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Roaming Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_roaming_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasRoamingPreference value_roaming_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_cdma_prl_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_cdma_prl_preference: (out)(optional): a placeholder for the output #QmiNasCdmaPrlPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA PRL Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_cdma_prl_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasCdmaPrlPreference *value_cdma_prl_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_cdma_prl_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_cdma_prl_preference: a #QmiNasCdmaPrlPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'CDMA PRL Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_cdma_prl_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasCdmaPrlPreference value_cdma_prl_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_band_preference: (out)(optional): a placeholder for the output #QmiNasBandPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Band Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasBandPreference *value_band_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_band_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_band_preference: a #QmiNasBandPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Band Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_band_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasBandPreference value_band_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_mode_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_mode_preference: (out)(optional): a placeholder for the output #QmiNasRatModePreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mode Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_mode_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasRatModePreference *value_mode_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_mode_preference:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_mode_preference: a #QmiNasRatModePreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Mode Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_mode_preference (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    QmiNasRatModePreference value_mode_preference,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_get_emergency_mode:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_emergency_mode: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Emergency mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_get_emergency_mode (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    gboolean *value_emergency_mode,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_set_emergency_mode:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @value_emergency_mode: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Emergency mode' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_input_set_emergency_mode (
    QmiMessageNasSetSystemSelectionPreferenceInput *self,
    gboolean value_emergency_mode,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_input_ref:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasSetSystemSelectionPreferenceInput *qmi_message_nas_set_system_selection_preference_input_ref (QmiMessageNasSetSystemSelectionPreferenceInput *self);

/**
 * qmi_message_nas_set_system_selection_preference_input_unref:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_set_system_selection_preference_input_unref (QmiMessageNasSetSystemSelectionPreferenceInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasSetSystemSelectionPreferenceInput, qmi_message_nas_set_system_selection_preference_input_unref)

/**
 * qmi_message_nas_set_system_selection_preference_input_new:
 *
 * Allocates a new #QmiMessageNasSetSystemSelectionPreferenceInput.
 *
 * Returns: the newly created #QmiMessageNasSetSystemSelectionPreferenceInput. The returned value should be freed with qmi_message_nas_set_system_selection_preference_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasSetSystemSelectionPreferenceInput *qmi_message_nas_set_system_selection_preference_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasSetSystemSelectionPreferenceOutput:
 *
 * The #QmiMessageNasSetSystemSelectionPreferenceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasSetSystemSelectionPreferenceOutput QmiMessageNasSetSystemSelectionPreferenceOutput;
GType qmi_message_nas_set_system_selection_preference_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SET_SYSTEM_SELECTION_PREFERENCE_OUTPUT (qmi_message_nas_set_system_selection_preference_output_get_type ())


/**
 * qmi_message_nas_set_system_selection_preference_output_get_result:
 * @self: a QmiMessageNasSetSystemSelectionPreferenceOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_set_system_selection_preference_output_get_result (
    QmiMessageNasSetSystemSelectionPreferenceOutput *self,
    GError **error);


/**
 * qmi_message_nas_set_system_selection_preference_output_ref:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasSetSystemSelectionPreferenceOutput *qmi_message_nas_set_system_selection_preference_output_ref (QmiMessageNasSetSystemSelectionPreferenceOutput *self);

/**
 * qmi_message_nas_set_system_selection_preference_output_unref:
 * @self: a #QmiMessageNasSetSystemSelectionPreferenceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_set_system_selection_preference_output_unref (QmiMessageNasSetSystemSelectionPreferenceOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasSetSystemSelectionPreferenceOutput, qmi_message_nas_set_system_selection_preference_output_unref)

/**
 * qmi_message_nas_set_system_selection_preference_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasSetSystemSelectionPreferenceOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasSetSystemSelectionPreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_set_system_selection_preference_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasSetSystemSelectionPreferenceOutput *qmi_message_nas_set_system_selection_preference_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get System Selection Preference */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetSystemSelectionPreferenceOutput:
 *
 * The #QmiMessageNasGetSystemSelectionPreferenceOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSystemSelectionPreferenceOutput QmiMessageNasGetSystemSelectionPreferenceOutput;
GType qmi_message_nas_get_system_selection_preference_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SYSTEM_SELECTION_PREFERENCE_OUTPUT (qmi_message_nas_get_system_selection_preference_output_get_type ())


/**
 * qmi_message_nas_get_system_selection_preference_output_get_nr5g_nsa_band_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_nr5g_nsa_band_preference_mask_0: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_1: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_2: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_3: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_4: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_5: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_6: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_nsa_band_preference_mask_7: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G NSA Band Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_nr5g_nsa_band_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    guint64 *value_nr5g_nsa_band_preference_mask_0,
    guint64 *value_nr5g_nsa_band_preference_mask_1,
    guint64 *value_nr5g_nsa_band_preference_mask_2,
    guint64 *value_nr5g_nsa_band_preference_mask_3,
    guint64 *value_nr5g_nsa_band_preference_mask_4,
    guint64 *value_nr5g_nsa_band_preference_mask_5,
    guint64 *value_nr5g_nsa_band_preference_mask_6,
    guint64 *value_nr5g_nsa_band_preference_mask_7,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_nr5g_sa_band_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_nr5g_sa_band_preference_mask_0: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_1: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_2: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_3: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_4: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_5: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_6: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_sa_band_preference_mask_7: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G SA Band Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_nr5g_sa_band_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    guint64 *value_nr5g_sa_band_preference_mask_0,
    guint64 *value_nr5g_sa_band_preference_mask_1,
    guint64 *value_nr5g_sa_band_preference_mask_2,
    guint64 *value_nr5g_sa_band_preference_mask_3,
    guint64 *value_nr5g_sa_band_preference_mask_4,
    guint64 *value_nr5g_sa_band_preference_mask_5,
    guint64 *value_nr5g_sa_band_preference_mask_6,
    guint64 *value_nr5g_sa_band_preference_mask_7,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_extended_lte_band_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_extended_lte_band_preference_mask_low: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_extended_lte_band_preference_mask_mid_low: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_extended_lte_band_preference_mask_mid_high: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_extended_lte_band_preference_mask_high: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended LTE Band Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.20
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_extended_lte_band_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    guint64 *value_extended_lte_band_preference_mask_low,
    guint64 *value_extended_lte_band_preference_mask_mid_low,
    guint64 *value_extended_lte_band_preference_mask_mid_high,
    guint64 *value_extended_lte_band_preference_mask_high,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_disabled_modes:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_disabled_modes: (out)(optional): a placeholder for the output #QmiNasRatModePreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Disabled Modes' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_disabled_modes (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasRatModePreference *value_disabled_modes,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_voice_domain_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_voice_domain_preference: (out)(optional): a placeholder for the output #QmiNasVoiceDomainPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Voice Domain Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_voice_domain_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasVoiceDomainPreference *value_voice_domain_preference,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_usage_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_usage_preference: (out)(optional): a placeholder for the output #QmiNasUsagePreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Usage Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_usage_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasUsagePreference *value_usage_preference,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_network_selection_registration_restriction:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_network_selection_registration_restriction: (out)(optional): a placeholder for the output #QmiNasNetworkSelectionRegistrationRestriction, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Selection Registration Restriction' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_network_selection_registration_restriction (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasNetworkSelectionRegistrationRestriction *value_network_selection_registration_restriction,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_manual_network_selection:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_manual_network_selection_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_manual_network_selection_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_manual_network_selection_includes_pcs_digit: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Manual Network Selection' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_manual_network_selection (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    guint16 *value_manual_network_selection_mcc,
    guint16 *value_manual_network_selection_mnc,
    gboolean *value_manual_network_selection_includes_pcs_digit,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_acquisition_order_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_acquisition_order_preference: (out)(optional)(element-type QmiNasRadioInterface)(transfer none): a placeholder for the output #GArray of #QmiNasRadioInterface elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Acquisition Order Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_acquisition_order_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    GArray **value_acquisition_order_preference,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_td_scdma_band_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_td_scdma_band_preference: (out)(optional): a placeholder for the output #QmiNasTdScdmaBandPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TD SCDMA Band Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_td_scdma_band_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasTdScdmaBandPreference *value_td_scdma_band_preference,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_gsm_wcdma_acquisition_order_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_gsm_wcdma_acquisition_order_preference: (out)(optional): a placeholder for the output #QmiNasGsmWcdmaAcquisitionOrderPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM WCDMA Acquisition Order Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_gsm_wcdma_acquisition_order_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasGsmWcdmaAcquisitionOrderPreference *value_gsm_wcdma_acquisition_order_preference,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_service_domain_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_service_domain_preference: (out)(optional): a placeholder for the output #QmiNasServiceDomainPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Domain Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_service_domain_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasServiceDomainPreference *value_service_domain_preference,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_network_selection_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_network_selection_preference: (out)(optional): a placeholder for the output #QmiNasNetworkSelectionPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Selection Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_network_selection_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasNetworkSelectionPreference *value_network_selection_preference,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_lte_band_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_lte_band_preference: (out)(optional): a placeholder for the output #QmiNasLteBandPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Band Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_lte_band_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasLteBandPreference *value_lte_band_preference,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_roaming_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_roaming_preference: (out)(optional): a placeholder for the output #QmiNasRoamingPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_roaming_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasRoamingPreference *value_roaming_preference,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_cdma_prl_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_cdma_prl_preference: (out)(optional): a placeholder for the output #QmiNasCdmaPrlPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA PRL Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_cdma_prl_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasCdmaPrlPreference *value_cdma_prl_preference,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_band_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_band_preference: (out)(optional): a placeholder for the output #QmiNasBandPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Band Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_band_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasBandPreference *value_band_preference,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_mode_preference:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_mode_preference: (out)(optional): a placeholder for the output #QmiNasRatModePreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mode Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_mode_preference (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    QmiNasRatModePreference *value_mode_preference,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_emergency_mode:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @value_emergency_mode: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Emergency mode' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_emergency_mode (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    gboolean *value_emergency_mode,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_get_result:
 * @self: a QmiMessageNasGetSystemSelectionPreferenceOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_selection_preference_output_get_result (
    QmiMessageNasGetSystemSelectionPreferenceOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_system_selection_preference_output_ref:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetSystemSelectionPreferenceOutput *qmi_message_nas_get_system_selection_preference_output_ref (QmiMessageNasGetSystemSelectionPreferenceOutput *self);

/**
 * qmi_message_nas_get_system_selection_preference_output_unref:
 * @self: a #QmiMessageNasGetSystemSelectionPreferenceOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_system_selection_preference_output_unref (QmiMessageNasGetSystemSelectionPreferenceOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetSystemSelectionPreferenceOutput, qmi_message_nas_get_system_selection_preference_output_unref)

/**
 * qmi_message_nas_get_system_selection_preference_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetSystemSelectionPreferenceOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetSystemSelectionPreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_system_selection_preference_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetSystemSelectionPreferenceOutput *qmi_message_nas_get_system_selection_preference_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Operator Name */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement:
 * @mcc: a string of exactly 3 characters.
 * @mnc: a string of exactly 3 characters.
 * @lac1: a #guint16.
 * @lac2: a #guint16.
 * @plmn_name_record_identifier: a #guint8.
 *
 * A QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement struct.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement {
    gchar *mcc;
    gchar *mnc;
    guint16 lac1;
    guint16 lac2;
    guint8 plmn_name_record_identifier;
} QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement;

GType qmi_message_nas_get_operator_name_output_operator_plmn_list_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement:
 * @name_encoding: a #QmiNasPlmnEncodingScheme.
 * @short_country_initials: a #QmiNasPlmnNameCountryInitials.
 * @long_name_spare_bits: a #QmiNasPlmnNameSpareBits.
 * @short_name_spare_bits: a #QmiNasPlmnNameSpareBits.
 * @long_name: a #GArray of #guint8 elements.
 * @short_name: a #GArray of #guint8 elements.
 *
 * A QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement struct.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement {
    QmiNasPlmnEncodingScheme name_encoding;
    QmiNasPlmnNameCountryInitials short_country_initials;
    QmiNasPlmnNameSpareBits long_name_spare_bits;
    QmiNasPlmnNameSpareBits short_name_spare_bits;
    GArray *long_name;
    GArray *short_name;
} QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement;

GType qmi_message_nas_get_operator_name_output_operator_plmn_name_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasGetOperatorNameOutput:
 *
 * The #QmiMessageNasGetOperatorNameOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageNasGetOperatorNameOutput QmiMessageNasGetOperatorNameOutput;
GType qmi_message_nas_get_operator_name_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_OPERATOR_NAME_OUTPUT (qmi_message_nas_get_operator_name_output_get_type ())


/**
 * qmi_message_nas_get_operator_name_output_get_result:
 * @self: a QmiMessageNasGetOperatorNameOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_nas_get_operator_name_output_get_result (
    QmiMessageNasGetOperatorNameOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_operator_name_output_get_service_provider_name:
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 * @value_service_provider_name_name_display_condition: (out)(optional): a placeholder for the output #QmiNasNetworkNameDisplayCondition, or %NULL if not required.
 * @value_service_provider_name_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Service Provider Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_nas_get_operator_name_output_get_service_provider_name (
    QmiMessageNasGetOperatorNameOutput *self,
    QmiNasNetworkNameDisplayCondition *value_service_provider_name_name_display_condition,
    const gchar **value_service_provider_name_name,
    GError **error);


/**
 * qmi_message_nas_get_operator_name_output_get_operator_plmn_list: (skip)
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 * @value_operator_plmn_list: (out)(optional)(element-type QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator PLMN List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_nas_get_operator_name_output_get_operator_plmn_list (
    QmiMessageNasGetOperatorNameOutput *self,
    GArray **value_operator_plmn_list,
    GError **error);


/**
 * qmi_message_nas_get_operator_name_output_get_operator_plmn_list_gir: (rename-to qmi_message_nas_get_operator_name_output_get_operator_plmn_list)
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 * @value_operator_plmn_list_ptr: (out)(optional)(element-type QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetOperatorNameOutputOperatorPlmnListElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator PLMN List' field from @self.
 *
 * Version of qmi_message_nas_get_operator_name_output_get_operator_plmn_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_operator_name_output_get_operator_plmn_list_gir (
    QmiMessageNasGetOperatorNameOutput *self,
    GPtrArray **value_operator_plmn_list_ptr,
    GError **error);


/**
 * qmi_message_nas_get_operator_name_output_get_operator_plmn_name: (skip)
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 * @value_operator_plmn_name: (out)(optional)(element-type QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator PLMN Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_nas_get_operator_name_output_get_operator_plmn_name (
    QmiMessageNasGetOperatorNameOutput *self,
    GArray **value_operator_plmn_name,
    GError **error);


/**
 * qmi_message_nas_get_operator_name_output_get_operator_plmn_name_gir: (rename-to qmi_message_nas_get_operator_name_output_get_operator_plmn_name)
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 * @value_operator_plmn_name_ptr: (out)(optional)(element-type QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetOperatorNameOutputOperatorPlmnNameElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator PLMN Name' field from @self.
 *
 * Version of qmi_message_nas_get_operator_name_output_get_operator_plmn_name() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_operator_name_output_get_operator_plmn_name_gir (
    QmiMessageNasGetOperatorNameOutput *self,
    GPtrArray **value_operator_plmn_name_ptr,
    GError **error);


/**
 * qmi_message_nas_get_operator_name_output_get_operator_string_name:
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 * @value_operator_string_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator String Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_nas_get_operator_name_output_get_operator_string_name (
    QmiMessageNasGetOperatorNameOutput *self,
    const gchar **value_operator_string_name,
    GError **error);


/**
 * qmi_message_nas_get_operator_name_output_get_nitz_information:
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 * @value_nitz_information_name_encoding: (out)(optional): a placeholder for the output #QmiNasPlmnEncodingScheme, or %NULL if not required.
 * @value_nitz_information_short_country_initials: (out)(optional): a placeholder for the output #QmiNasPlmnNameCountryInitials, or %NULL if not required.
 * @value_nitz_information_long_name_spare_bits: (out)(optional): a placeholder for the output #QmiNasPlmnNameSpareBits, or %NULL if not required.
 * @value_nitz_information_short_name_spare_bits: (out)(optional): a placeholder for the output #QmiNasPlmnNameSpareBits, or %NULL if not required.
 * @value_nitz_information_long_name: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_nitz_information_short_name: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NITZ Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24.6
 */
gboolean qmi_message_nas_get_operator_name_output_get_nitz_information (
    QmiMessageNasGetOperatorNameOutput *self,
    QmiNasPlmnEncodingScheme *value_nitz_information_name_encoding,
    QmiNasPlmnNameCountryInitials *value_nitz_information_short_country_initials,
    QmiNasPlmnNameSpareBits *value_nitz_information_long_name_spare_bits,
    QmiNasPlmnNameSpareBits *value_nitz_information_short_name_spare_bits,
    GArray **value_nitz_information_long_name,
    GArray **value_nitz_information_short_name,
    GError **error);


/**
 * qmi_message_nas_get_operator_name_output_ref:
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageNasGetOperatorNameOutput *qmi_message_nas_get_operator_name_output_ref (QmiMessageNasGetOperatorNameOutput *self);

/**
 * qmi_message_nas_get_operator_name_output_unref:
 * @self: a #QmiMessageNasGetOperatorNameOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_nas_get_operator_name_output_unref (QmiMessageNasGetOperatorNameOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetOperatorNameOutput, qmi_message_nas_get_operator_name_output_unref)

/**
 * qmi_message_nas_get_operator_name_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetOperatorNameOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetOperatorNameOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_operator_name_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetOperatorNameOutput *qmi_message_nas_get_operator_name_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Cell Location Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement:
 * @eutra_absolute_rf_channel_number: a #guint16.
 * @physical_cell_id: a #guint16.
 * @rsrp: a #gfloat.
 * @rsrq: a #gfloat.
 * @cell_selection_rx_level: a #gint16.
 * @is_tdd: a #gboolean.
 *
 * A QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement {
    guint16 eutra_absolute_rf_channel_number;
    guint16 physical_cell_id;
    gfloat rsrp;
    gfloat rsrq;
    gint16 cell_selection_rx_level;
    gboolean is_tdd;
} QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement;

GType qmi_message_nas_get_cell_location_info_output_umts_info_neighboring_lte_frequency_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementCellElement:
 * @primary_scrambling_code: a #guint16.
 * @cpich_rscp: a #gint16.
 * @cpich_ecno: a #gint16.
 * @cell_selection_rx_level: a #gint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementCellElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementCellElement {
    guint16 primary_scrambling_code;
    gint16 cpich_rscp;
    gint16 cpich_ecno;
    gint16 cell_selection_rx_level;
} QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementCellElement;


/**
 * QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement: (skip)
 * @utra_absolute_rf_channel_number: a #guint16.
 * @cell_reselection_priority: a #guint8.
 * @cell_reselection_high_threshold: a #guint16.
 * @cell_reselection_low_threshold: a #guint16.
 * @cell: a #GArray of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementCellElement elements.
 *
 * A QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement {
    guint16 utra_absolute_rf_channel_number;
    guint8 cell_reselection_priority;
    guint16 cell_reselection_high_threshold;
    guint16 cell_reselection_low_threshold;
    GArray *cell;
} QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement;

GType qmi_message_nas_get_cell_location_info_output_lte_info_neighboring_wcdma_frequency_element_cell_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementGir: (rename-to QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement)
 * @utra_absolute_rf_channel_number: a #guint16.
 * @cell_reselection_priority: a #guint8.
 * @cell_reselection_high_threshold: a #guint16.
 * @cell_reselection_low_threshold: a #guint16.
 * @cell: (element-type QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementCellElement): an array of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementCellElement elements.
 *
 * A QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementGir struct.
 *
 * This type is a version of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement, using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementGir {
    guint16 utra_absolute_rf_channel_number;
    guint8 cell_reselection_priority;
    guint16 cell_reselection_high_threshold;
    guint16 cell_reselection_low_threshold;
    GPtrArray *cell;
} QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementGir;

GType qmi_message_nas_get_cell_location_info_output_lte_info_neighboring_wcdma_frequency_element_gir_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementCellElement:
 * @geran_absolute_rf_channel_number: a #guint16.
 * @band_is_1900: a #gboolean.
 * @cell_id_valid: a #gboolean.
 * @base_station_identity_code: a #guint8.
 * @rssi: a #gint16.
 * @cell_selection_rx_level: a #gint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementCellElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementCellElement {
    guint16 geran_absolute_rf_channel_number;
    gboolean band_is_1900;
    gboolean cell_id_valid;
    guint8 base_station_identity_code;
    gint16 rssi;
    gint16 cell_selection_rx_level;
} QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementCellElement;


/**
 * QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement: (skip)
 * @cell_reselection_priority: a #guint8.
 * @cell_reselection_high_threshold: a #guint8.
 * @cell_reselection_low_threshold: a #guint8.
 * @ncc_permitted: a #guint8.
 * @cell: a #GArray of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementCellElement elements.
 *
 * A QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement {
    guint8 cell_reselection_priority;
    guint8 cell_reselection_high_threshold;
    guint8 cell_reselection_low_threshold;
    guint8 ncc_permitted;
    GArray *cell;
} QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement;

GType qmi_message_nas_get_cell_location_info_output_lte_info_neighboring_gsm_frequency_element_cell_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementGir: (rename-to QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement)
 * @cell_reselection_priority: a #guint8.
 * @cell_reselection_high_threshold: a #guint8.
 * @cell_reselection_low_threshold: a #guint8.
 * @ncc_permitted: a #guint8.
 * @cell: (element-type QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementCellElement): an array of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementCellElement elements.
 *
 * A QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementGir struct.
 *
 * This type is a version of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement, using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementGir {
    guint8 cell_reselection_priority;
    guint8 cell_reselection_high_threshold;
    guint8 cell_reselection_low_threshold;
    guint8 ncc_permitted;
    GPtrArray *cell;
} QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementGir;

GType qmi_message_nas_get_cell_location_info_output_lte_info_neighboring_gsm_frequency_element_gir_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementCellElement:
 * @physical_cell_id: a #guint16.
 * @rsrq: a #gint16.
 * @rsrp: a #gint16.
 * @rssi: a #gint16.
 * @cell_selection_rx_level: a #gint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementCellElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementCellElement {
    guint16 physical_cell_id;
    gint16 rsrq;
    gint16 rsrp;
    gint16 rssi;
    gint16 cell_selection_rx_level;
} QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementCellElement;


/**
 * QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement: (skip)
 * @eutra_absolute_rf_channel_number: a #guint16.
 * @cell_selection_rx_level_low_threshold: a #guint8.
 * @cell_selection_rx_level_high_threshold: a #guint8.
 * @cell_reselection_priority: a #guint8.
 * @cell: a #GArray of #QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementCellElement elements.
 *
 * A QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement struct.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement {
    guint16 eutra_absolute_rf_channel_number;
    guint8 cell_selection_rx_level_low_threshold;
    guint8 cell_selection_rx_level_high_threshold;
    guint8 cell_reselection_priority;
    GArray *cell;
} QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement;

GType qmi_message_nas_get_cell_location_info_output_interfrequency_lte_info_frequency_element_cell_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementGir: (rename-to QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement)
 * @eutra_absolute_rf_channel_number: a #guint16.
 * @cell_selection_rx_level_low_threshold: a #guint8.
 * @cell_selection_rx_level_high_threshold: a #guint8.
 * @cell_reselection_priority: a #guint8.
 * @cell: (element-type QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementCellElement): an array of #QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementCellElement elements.
 *
 * A QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementGir struct.
 *
 * This type is a version of #QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement, using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementGir {
    guint16 eutra_absolute_rf_channel_number;
    guint8 cell_selection_rx_level_low_threshold;
    guint8 cell_selection_rx_level_high_threshold;
    guint8 cell_reselection_priority;
    GPtrArray *cell;
} QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementGir;

GType qmi_message_nas_get_cell_location_info_output_interfrequency_lte_info_frequency_element_gir_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoV2CellElement:
 * @physical_cell_id: a #guint16.
 * @rsrq: a #gint16.
 * @rsrp: a #gint16.
 * @rssi: a #gint16.
 * @cell_selection_rx_level: a #gint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoV2CellElement struct.
 *
 * Since: 1.26.6
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoV2CellElement {
    guint16 physical_cell_id;
    gint16 rsrq;
    gint16 rsrp;
    gint16 rssi;
    gint16 cell_selection_rx_level;
} QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoV2CellElement;

GType qmi_message_nas_get_cell_location_info_output_intrafrequency_lte_info_v2_cell_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2CellElement:
 * @utra_absolute_rf_channel_number: a #guint16.
 * @primary_scrambling_code: a #guint16.
 * @rscp: a #gint16.
 * @ecio: a #gint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2CellElement struct.
 *
 * Since: 1.26.6
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2CellElement {
    guint16 utra_absolute_rf_channel_number;
    guint16 primary_scrambling_code;
    gint16 rscp;
    gint16 ecio;
} QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2CellElement;


/**
 * QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2NeighboringGeranElement:
 * @geran_absolute_rf_channel_number: a #guint16.
 * @network_color_code: a #guint8.
 * @base_station_color_code: a #guint8.
 * @rssi: a #gint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2NeighboringGeranElement struct.
 *
 * Since: 1.26.6
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2NeighboringGeranElement {
    guint16 geran_absolute_rf_channel_number;
    guint8 network_color_code;
    guint8 base_station_color_code;
    gint16 rssi;
} QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2NeighboringGeranElement;

GType qmi_message_nas_get_cell_location_info_output_umts_info_v2_cell_element_get_type (void) G_GNUC_CONST;

GType qmi_message_nas_get_cell_location_info_output_umts_info_v2_neighboring_geran_element_get_type (void) G_GNUC_CONST;


/**
 * QmiMessageNasGetCellLocationInfoOutputGeranInfoV2CellElement:
 * @cell_id: a #guint32.
 * @plmn: a #GArray of #guint8 elements.
 * @lac: a #guint16.
 * @geran_absolute_rf_channel_number: a #guint16.
 * @base_station_identity_code: a #guint8.
 * @rx_level: a #guint16.
 *
 * A QmiMessageNasGetCellLocationInfoOutputGeranInfoV2CellElement struct.
 *
 * Since: 1.26.6
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutputGeranInfoV2CellElement {
    guint32 cell_id;
    GArray *plmn;
    guint16 lac;
    guint16 geran_absolute_rf_channel_number;
    guint8 base_station_identity_code;
    guint16 rx_level;
} QmiMessageNasGetCellLocationInfoOutputGeranInfoV2CellElement;

GType qmi_message_nas_get_cell_location_info_output_geran_info_v2_cell_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasGetCellLocationInfoOutput:
 *
 * The #QmiMessageNasGetCellLocationInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.10
 */
typedef struct _QmiMessageNasGetCellLocationInfoOutput QmiMessageNasGetCellLocationInfoOutput;
GType qmi_message_nas_get_cell_location_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_CELL_LOCATION_INFO_OUTPUT (qmi_message_nas_get_cell_location_info_output_get_type ())
G_GNUC_INTERNAL
gpointer qmi_message_nas_get_cell_location_info_output_get_compat_context (QmiMessageNasGetCellLocationInfoOutput *self);
G_GNUC_INTERNAL
void qmi_message_nas_get_cell_location_info_output_set_compat_context (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gpointer compat_context,
    GDestroyNotify compat_context_free);


/**
 * qmi_message_nas_get_cell_location_info_output_get_nr5g_cell_information:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_nr5g_cell_information_plmn: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_nr5g_cell_information_tracking_area_code: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_nr5g_cell_information_global_cell_id: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @value_nr5g_cell_information_physical_cell_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_nr5g_cell_information_rsrq: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @value_nr5g_cell_information_rsrp: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @value_nr5g_cell_information_snr: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G Cell Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_nr5g_cell_information (
    QmiMessageNasGetCellLocationInfoOutput *self,
    GArray **value_nr5g_cell_information_plmn,
    GArray **value_nr5g_cell_information_tracking_area_code,
    guint64 *value_nr5g_cell_information_global_cell_id,
    guint16 *value_nr5g_cell_information_physical_cell_id,
    gint16 *value_nr5g_cell_information_rsrq,
    gint16 *value_nr5g_cell_information_rsrp,
    gint16 *value_nr5g_cell_information_snr,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_nr5g_arfcn:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_nr5g_arfcn: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G ARFCN' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_nr5g_arfcn (
    QmiMessageNasGetCellLocationInfoOutput *self,
    guint32 *value_nr5g_arfcn,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_lte_info_timing_advance:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_lte_info_timing_advance: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Info Timing Advance' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_lte_info_timing_advance (
    QmiMessageNasGetCellLocationInfoOutput *self,
    guint32 *value_lte_info_timing_advance,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_umts_info_neighboring_lte: (skip)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_umts_info_neighboring_lte_rrc_state: (out)(optional): a placeholder for the output #QmiNasWcdmaRrcState, or %NULL if not required.
 * @value_umts_info_neighboring_lte_frequency: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Info Neighboring LTE' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_umts_info_neighboring_lte (
    QmiMessageNasGetCellLocationInfoOutput *self,
    QmiNasWcdmaRrcState *value_umts_info_neighboring_lte_rrc_state,
    GArray **value_umts_info_neighboring_lte_frequency,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_umts_info_neighboring_lte_gir: (rename-to qmi_message_nas_get_cell_location_info_output_get_umts_info_neighboring_lte)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_umts_info_neighboring_lte_rrc_state: (out)(optional): a placeholder for the output #QmiNasWcdmaRrcState, or %NULL if not required.
 * @value_umts_info_neighboring_lte_frequency_ptr: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetCellLocationInfoOutputUmtsInfoNeighboringLteFrequencyElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Info Neighboring LTE' field from @self.
 *
 * Version of qmi_message_nas_get_cell_location_info_output_get_umts_info_neighboring_lte() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_umts_info_neighboring_lte_gir (
    QmiMessageNasGetCellLocationInfoOutput *self,
    QmiNasWcdmaRrcState *value_umts_info_neighboring_lte_rrc_state,
    GPtrArray **value_umts_info_neighboring_lte_frequency_ptr,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_umts_cell_id:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_umts_cell_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Cell ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_umts_cell_id (
    QmiMessageNasGetCellLocationInfoOutput *self,
    guint32 *value_umts_cell_id,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_wcdma: (skip)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_lte_info_neighboring_wcdma_ue_in_idle: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_info_neighboring_wcdma_frequency: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Info Neighboring WCDMA' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_wcdma (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gboolean *value_lte_info_neighboring_wcdma_ue_in_idle,
    GArray **value_lte_info_neighboring_wcdma_frequency,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_wcdma_gir: (rename-to qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_wcdma)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_lte_info_neighboring_wcdma_ue_in_idle: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_info_neighboring_wcdma_frequency_ptr: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElementGir)(transfer none): a placeholder for the output array of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringWcdmaFrequencyElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Info Neighboring WCDMA' field from @self.
 *
 * Version of qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_wcdma() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_wcdma_gir (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gboolean *value_lte_info_neighboring_wcdma_ue_in_idle,
    GPtrArray **value_lte_info_neighboring_wcdma_frequency_ptr,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_gsm: (skip)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_lte_info_neighboring_gsm_ue_in_idle: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_info_neighboring_gsm_frequency: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Info Neighboring GSM' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_gsm (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gboolean *value_lte_info_neighboring_gsm_ue_in_idle,
    GArray **value_lte_info_neighboring_gsm_frequency,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_gsm_gir: (rename-to qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_gsm)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_lte_info_neighboring_gsm_ue_in_idle: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_info_neighboring_gsm_frequency_ptr: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElementGir)(transfer none): a placeholder for the output array of #QmiMessageNasGetCellLocationInfoOutputLteInfoNeighboringGsmFrequencyElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Info Neighboring GSM' field from @self.
 *
 * Version of qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_gsm() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_lte_info_neighboring_gsm_gir (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gboolean *value_lte_info_neighboring_gsm_ue_in_idle,
    GPtrArray **value_lte_info_neighboring_gsm_frequency_ptr,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_interfrequency_lte_info: (skip)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_interfrequency_lte_info_ue_in_idle: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_interfrequency_lte_info_frequency: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Interfrequency LTE Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_interfrequency_lte_info (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gboolean *value_interfrequency_lte_info_ue_in_idle,
    GArray **value_interfrequency_lte_info_frequency,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_interfrequency_lte_info_gir: (rename-to qmi_message_nas_get_cell_location_info_output_get_interfrequency_lte_info)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_interfrequency_lte_info_ue_in_idle: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_interfrequency_lte_info_frequency_ptr: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElementGir)(transfer none): a placeholder for the output array of #QmiMessageNasGetCellLocationInfoOutputInterfrequencyLteInfoFrequencyElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Interfrequency LTE Info' field from @self.
 *
 * Version of qmi_message_nas_get_cell_location_info_output_get_interfrequency_lte_info() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_interfrequency_lte_info_gir (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gboolean *value_interfrequency_lte_info_ue_in_idle,
    GPtrArray **value_interfrequency_lte_info_frequency_ptr,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_intrafrequency_lte_info_v2: (skip)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_intrafrequency_lte_info_v2_ue_in_idle: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_plmn: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_intrafrequency_lte_info_v2_tracking_area_code: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_global_cell_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_eutra_absolute_rf_channel_number: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_serving_cell_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_cell_reselection_priority: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_s_non_intra_search_threshold: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_serving_cell_low_threshold: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_s_intra_search_threshold: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_cell: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoV2CellElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoV2CellElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Intrafrequency LTE Info v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26.6
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_intrafrequency_lte_info_v2 (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gboolean *value_intrafrequency_lte_info_v2_ue_in_idle,
    GArray **value_intrafrequency_lte_info_v2_plmn,
    guint16 *value_intrafrequency_lte_info_v2_tracking_area_code,
    guint32 *value_intrafrequency_lte_info_v2_global_cell_id,
    guint16 *value_intrafrequency_lte_info_v2_eutra_absolute_rf_channel_number,
    guint16 *value_intrafrequency_lte_info_v2_serving_cell_id,
    guint8 *value_intrafrequency_lte_info_v2_cell_reselection_priority,
    guint8 *value_intrafrequency_lte_info_v2_s_non_intra_search_threshold,
    guint8 *value_intrafrequency_lte_info_v2_serving_cell_low_threshold,
    guint8 *value_intrafrequency_lte_info_v2_s_intra_search_threshold,
    GArray **value_intrafrequency_lte_info_v2_cell,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_intrafrequency_lte_info_v2_gir: (rename-to qmi_message_nas_get_cell_location_info_output_get_intrafrequency_lte_info_v2)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_intrafrequency_lte_info_v2_ue_in_idle: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_plmn: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_intrafrequency_lte_info_v2_tracking_area_code: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_global_cell_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_eutra_absolute_rf_channel_number: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_serving_cell_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_cell_reselection_priority: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_s_non_intra_search_threshold: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_serving_cell_low_threshold: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_s_intra_search_threshold: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_intrafrequency_lte_info_v2_cell_ptr: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoV2CellElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetCellLocationInfoOutputIntrafrequencyLteInfoV2CellElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Intrafrequency LTE Info v2' field from @self.
 *
 * Version of qmi_message_nas_get_cell_location_info_output_get_intrafrequency_lte_info_v2() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_intrafrequency_lte_info_v2_gir (
    QmiMessageNasGetCellLocationInfoOutput *self,
    gboolean *value_intrafrequency_lte_info_v2_ue_in_idle,
    GArray **value_intrafrequency_lte_info_v2_plmn,
    guint16 *value_intrafrequency_lte_info_v2_tracking_area_code,
    guint32 *value_intrafrequency_lte_info_v2_global_cell_id,
    guint16 *value_intrafrequency_lte_info_v2_eutra_absolute_rf_channel_number,
    guint16 *value_intrafrequency_lte_info_v2_serving_cell_id,
    guint8 *value_intrafrequency_lte_info_v2_cell_reselection_priority,
    guint8 *value_intrafrequency_lte_info_v2_s_non_intra_search_threshold,
    guint8 *value_intrafrequency_lte_info_v2_serving_cell_low_threshold,
    guint8 *value_intrafrequency_lte_info_v2_s_intra_search_threshold,
    GPtrArray **value_intrafrequency_lte_info_v2_cell_ptr,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_cdma_info:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_cdma_info_system_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_info_network_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_info_base_station_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_info_reference_pn: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_info_latitude: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_cdma_info_longitude: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_cdma_info (
    QmiMessageNasGetCellLocationInfoOutput *self,
    guint16 *value_cdma_info_system_id,
    guint16 *value_cdma_info_network_id,
    guint16 *value_cdma_info_base_station_id,
    guint16 *value_cdma_info_reference_pn,
    guint32 *value_cdma_info_latitude,
    guint32 *value_cdma_info_longitude,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_umts_info_v2: (skip)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_umts_info_v2_cell_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_umts_info_v2_plmn: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_umts_info_v2_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_umts_info_v2_utra_absolute_rf_channel_number: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_umts_info_v2_primary_scrambling_code: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_umts_info_v2_rscp: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @value_umts_info_v2_ecio: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @value_umts_info_v2_cell: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2CellElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2CellElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_umts_info_v2_neighboring_geran: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2NeighboringGeranElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2NeighboringGeranElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Info v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26.6
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_umts_info_v2 (
    QmiMessageNasGetCellLocationInfoOutput *self,
    guint16 *value_umts_info_v2_cell_id,
    GArray **value_umts_info_v2_plmn,
    guint16 *value_umts_info_v2_lac,
    guint16 *value_umts_info_v2_utra_absolute_rf_channel_number,
    guint16 *value_umts_info_v2_primary_scrambling_code,
    gint16 *value_umts_info_v2_rscp,
    gint16 *value_umts_info_v2_ecio,
    GArray **value_umts_info_v2_cell,
    GArray **value_umts_info_v2_neighboring_geran,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_umts_info_v2_gir: (rename-to qmi_message_nas_get_cell_location_info_output_get_umts_info_v2)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_umts_info_v2_cell_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_umts_info_v2_plmn: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_umts_info_v2_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_umts_info_v2_utra_absolute_rf_channel_number: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_umts_info_v2_primary_scrambling_code: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_umts_info_v2_rscp: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @value_umts_info_v2_ecio: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @value_umts_info_v2_cell_ptr: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2CellElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2CellElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @value_umts_info_v2_neighboring_geran_ptr: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2NeighboringGeranElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetCellLocationInfoOutputUmtsInfoV2NeighboringGeranElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Info v2' field from @self.
 *
 * Version of qmi_message_nas_get_cell_location_info_output_get_umts_info_v2() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_umts_info_v2_gir (
    QmiMessageNasGetCellLocationInfoOutput *self,
    guint16 *value_umts_info_v2_cell_id,
    GArray **value_umts_info_v2_plmn,
    guint16 *value_umts_info_v2_lac,
    guint16 *value_umts_info_v2_utra_absolute_rf_channel_number,
    guint16 *value_umts_info_v2_primary_scrambling_code,
    gint16 *value_umts_info_v2_rscp,
    gint16 *value_umts_info_v2_ecio,
    GPtrArray **value_umts_info_v2_cell_ptr,
    GPtrArray **value_umts_info_v2_neighboring_geran_ptr,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_geran_info_v2: (skip)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_geran_info_v2_cell_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_geran_info_v2_plmn: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_geran_info_v2_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_geran_info_v2_geran_absolute_rf_channel_number: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_geran_info_v2_base_station_identity_code: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_geran_info_v2_timing_advance: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_geran_info_v2_rx_level: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_geran_info_v2_cell: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputGeranInfoV2CellElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetCellLocationInfoOutputGeranInfoV2CellElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GERAN Info v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26.6
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_geran_info_v2 (
    QmiMessageNasGetCellLocationInfoOutput *self,
    guint32 *value_geran_info_v2_cell_id,
    GArray **value_geran_info_v2_plmn,
    guint16 *value_geran_info_v2_lac,
    guint16 *value_geran_info_v2_geran_absolute_rf_channel_number,
    guint8 *value_geran_info_v2_base_station_identity_code,
    guint32 *value_geran_info_v2_timing_advance,
    guint16 *value_geran_info_v2_rx_level,
    GArray **value_geran_info_v2_cell,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_geran_info_v2_gir: (rename-to qmi_message_nas_get_cell_location_info_output_get_geran_info_v2)
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 * @value_geran_info_v2_cell_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_geran_info_v2_plmn: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_geran_info_v2_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_geran_info_v2_geran_absolute_rf_channel_number: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_geran_info_v2_base_station_identity_code: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_geran_info_v2_timing_advance: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_geran_info_v2_rx_level: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_geran_info_v2_cell_ptr: (out)(optional)(element-type QmiMessageNasGetCellLocationInfoOutputGeranInfoV2CellElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetCellLocationInfoOutputGeranInfoV2CellElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GERAN Info v2' field from @self.
 *
 * Version of qmi_message_nas_get_cell_location_info_output_get_geran_info_v2() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_geran_info_v2_gir (
    QmiMessageNasGetCellLocationInfoOutput *self,
    guint32 *value_geran_info_v2_cell_id,
    GArray **value_geran_info_v2_plmn,
    guint16 *value_geran_info_v2_lac,
    guint16 *value_geran_info_v2_geran_absolute_rf_channel_number,
    guint8 *value_geran_info_v2_base_station_identity_code,
    guint32 *value_geran_info_v2_timing_advance,
    guint16 *value_geran_info_v2_rx_level,
    GPtrArray **value_geran_info_v2_cell_ptr,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_get_result:
 * @self: a QmiMessageNasGetCellLocationInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.10
 */
gboolean qmi_message_nas_get_cell_location_info_output_get_result (
    QmiMessageNasGetCellLocationInfoOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_cell_location_info_output_ref:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.10
 */
QmiMessageNasGetCellLocationInfoOutput *qmi_message_nas_get_cell_location_info_output_ref (QmiMessageNasGetCellLocationInfoOutput *self);

/**
 * qmi_message_nas_get_cell_location_info_output_unref:
 * @self: a #QmiMessageNasGetCellLocationInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.10
 */
void qmi_message_nas_get_cell_location_info_output_unref (QmiMessageNasGetCellLocationInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetCellLocationInfoOutput, qmi_message_nas_get_cell_location_info_output_unref)

/**
 * qmi_message_nas_get_cell_location_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetCellLocationInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetCellLocationInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_cell_location_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetCellLocationInfoOutput *qmi_message_nas_get_cell_location_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get PLMN Name */


/* --- Input -- */

/**
 * QmiMessageNasGetPlmnNameInput:
 *
 * The #QmiMessageNasGetPlmnNameInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageNasGetPlmnNameInput QmiMessageNasGetPlmnNameInput;
GType qmi_message_nas_get_plmn_name_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_PLMN_NAME_INPUT (qmi_message_nas_get_plmn_name_input_get_type ())


/**
 * qmi_message_nas_get_plmn_name_input_get_send_all_information:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_send_all_information: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Send All Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_get_send_all_information (
    QmiMessageNasGetPlmnNameInput *self,
    gboolean *value_send_all_information,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_set_send_all_information:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_send_all_information: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Send All Information' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_set_send_all_information (
    QmiMessageNasGetPlmnNameInput *self,
    gboolean value_send_all_information,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_get_radio_access_technology:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_radio_access_technology: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Radio Access Technology' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_get_radio_access_technology (
    QmiMessageNasGetPlmnNameInput *self,
    QmiNasRadioInterface *value_radio_access_technology,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_set_radio_access_technology:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_radio_access_technology: a #QmiNasRadioInterface.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Radio Access Technology' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_set_radio_access_technology (
    QmiMessageNasGetPlmnNameInput *self,
    QmiNasRadioInterface value_radio_access_technology,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_get_csg_id:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_csg_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CSG ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_get_csg_id (
    QmiMessageNasGetPlmnNameInput *self,
    guint32 *value_csg_id,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_set_csg_id:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_csg_id: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'CSG ID' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_set_csg_id (
    QmiMessageNasGetPlmnNameInput *self,
    guint32 value_csg_id,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_get_use_static_table_only:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_use_static_table_only: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Use Static Table Only' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_get_use_static_table_only (
    QmiMessageNasGetPlmnNameInput *self,
    gboolean *value_use_static_table_only,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_set_use_static_table_only:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_use_static_table_only: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Use Static Table Only' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_set_use_static_table_only (
    QmiMessageNasGetPlmnNameInput *self,
    gboolean value_use_static_table_only,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_get_always_send_plmn_name:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_always_send_plmn_name: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Always Send PLMN Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_get_always_send_plmn_name (
    QmiMessageNasGetPlmnNameInput *self,
    gboolean *value_always_send_plmn_name,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_set_always_send_plmn_name:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_always_send_plmn_name: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Always Send PLMN Name' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_set_always_send_plmn_name (
    QmiMessageNasGetPlmnNameInput *self,
    gboolean value_always_send_plmn_name,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_get_mnc_pcs_digit_include_status:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_mnc_pcs_digit_include_status: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MNC PCS Digit Include Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_get_mnc_pcs_digit_include_status (
    QmiMessageNasGetPlmnNameInput *self,
    gboolean *value_mnc_pcs_digit_include_status,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_set_mnc_pcs_digit_include_status:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_mnc_pcs_digit_include_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'MNC PCS Digit Include Status' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_set_mnc_pcs_digit_include_status (
    QmiMessageNasGetPlmnNameInput *self,
    gboolean value_mnc_pcs_digit_include_status,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_get_suppress_sim_error:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_suppress_sim_error: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Suppress SIM Error' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_get_suppress_sim_error (
    QmiMessageNasGetPlmnNameInput *self,
    gboolean *value_suppress_sim_error,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_set_suppress_sim_error:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_suppress_sim_error: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Suppress SIM Error' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_set_suppress_sim_error (
    QmiMessageNasGetPlmnNameInput *self,
    gboolean value_suppress_sim_error,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_get_plmn:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_plmn_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_plmn_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PLMN' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_get_plmn (
    QmiMessageNasGetPlmnNameInput *self,
    guint16 *value_plmn_mcc,
    guint16 *value_plmn_mnc,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_set_plmn:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 * @value_plmn_mcc: a #guint16.
 * @value_plmn_mnc: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PLMN' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_input_set_plmn (
    QmiMessageNasGetPlmnNameInput *self,
    guint16 value_plmn_mcc,
    guint16 value_plmn_mnc,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_input_ref:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageNasGetPlmnNameInput *qmi_message_nas_get_plmn_name_input_ref (QmiMessageNasGetPlmnNameInput *self);

/**
 * qmi_message_nas_get_plmn_name_input_unref:
 * @self: a #QmiMessageNasGetPlmnNameInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_nas_get_plmn_name_input_unref (QmiMessageNasGetPlmnNameInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetPlmnNameInput, qmi_message_nas_get_plmn_name_input_unref)

/**
 * qmi_message_nas_get_plmn_name_input_new:
 *
 * Allocates a new #QmiMessageNasGetPlmnNameInput.
 *
 * Returns: the newly created #QmiMessageNasGetPlmnNameInput. The returned value should be freed with qmi_message_nas_get_plmn_name_input_unref().
 *
 * Since: 1.28
 */
QmiMessageNasGetPlmnNameInput *qmi_message_nas_get_plmn_name_input_new (void);

/* --- Output -- */


/**
 * QmiMessageNasGetPlmnNameOutputPlmnNameWithLanguageIdElement:
 * @long_name: a #GArray of #guint16 elements.
 * @short_name: a #GArray of #guint16 elements.
 * @language_id: a #QmiNasPlmnLanguageId.
 *
 * A QmiMessageNasGetPlmnNameOutputPlmnNameWithLanguageIdElement struct.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageNasGetPlmnNameOutputPlmnNameWithLanguageIdElement {
    GArray *long_name;
    GArray *short_name;
    QmiNasPlmnLanguageId language_id;
} QmiMessageNasGetPlmnNameOutputPlmnNameWithLanguageIdElement;

GType qmi_message_nas_get_plmn_name_output_plmn_name_with_language_id_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasGetPlmnNameOutput:
 *
 * The #QmiMessageNasGetPlmnNameOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageNasGetPlmnNameOutput QmiMessageNasGetPlmnNameOutput;
GType qmi_message_nas_get_plmn_name_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_PLMN_NAME_OUTPUT (qmi_message_nas_get_plmn_name_output_get_type ())


/**
 * qmi_message_nas_get_plmn_name_output_get_network_name_source:
 * @self: a #QmiMessageNasGetPlmnNameOutput.
 * @value_network_name_source: (out)(optional): a placeholder for the output #QmiNasNetworkNameSource, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Name Source' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_output_get_network_name_source (
    QmiMessageNasGetPlmnNameOutput *self,
    QmiNasNetworkNameSource *value_network_name_source,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_output_get_additional_information:
 * @self: a #QmiMessageNasGetPlmnNameOutput.
 * @value_additional_information: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_output_get_additional_information (
    QmiMessageNasGetPlmnNameOutput *self,
    GArray **value_additional_information,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_output_get_plmn_name_with_language_id: (skip)
 * @self: a #QmiMessageNasGetPlmnNameOutput.
 * @value_plmn_name_with_language_id: (out)(optional)(element-type QmiMessageNasGetPlmnNameOutputPlmnNameWithLanguageIdElement)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetPlmnNameOutputPlmnNameWithLanguageIdElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PLMN Name With Language Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_output_get_plmn_name_with_language_id (
    QmiMessageNasGetPlmnNameOutput *self,
    GArray **value_plmn_name_with_language_id,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_output_get_plmn_name_with_language_id_gir: (rename-to qmi_message_nas_get_plmn_name_output_get_plmn_name_with_language_id)
 * @self: a #QmiMessageNasGetPlmnNameOutput.
 * @value_plmn_name_with_language_id_ptr: (out)(optional)(element-type QmiMessageNasGetPlmnNameOutputPlmnNameWithLanguageIdElement)(transfer none): a placeholder for the output array of #QmiMessageNasGetPlmnNameOutputPlmnNameWithLanguageIdElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PLMN Name With Language Id' field from @self.
 *
 * Version of qmi_message_nas_get_plmn_name_output_get_plmn_name_with_language_id() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_plmn_name_output_get_plmn_name_with_language_id_gir (
    QmiMessageNasGetPlmnNameOutput *self,
    GPtrArray **value_plmn_name_with_language_id_ptr,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_output_get_network_information:
 * @self: a #QmiMessageNasGetPlmnNameOutput.
 * @value_network_information: (out)(optional): a placeholder for the output #QmiNasBoolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_output_get_network_information (
    QmiMessageNasGetPlmnNameOutput *self,
    QmiNasBoolean *value_network_information,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_output_get_display_bit_information:
 * @self: a #QmiMessageNasGetPlmnNameOutput.
 * @value_display_bit_information_service_provider_name_set: (out)(optional): a placeholder for the output #QmiNasBoolean, or %NULL if not required.
 * @value_display_bit_information_plmn_name_set: (out)(optional): a placeholder for the output #QmiNasBoolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Display Bit Information' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_output_get_display_bit_information (
    QmiMessageNasGetPlmnNameOutput *self,
    QmiNasBoolean *value_display_bit_information_service_provider_name_set,
    QmiNasBoolean *value_display_bit_information_plmn_name_set,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_output_get_3gpp_eons_plmn_name:
 * @self: a #QmiMessageNasGetPlmnNameOutput.
 * @value_3gpp_eons_plmn_name_service_provider_name_encoding: (out)(optional): a placeholder for the output #QmiNasNetworkDescriptionEncoding, or %NULL if not required.
 * @value_3gpp_eons_plmn_name_service_provider_name: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_3gpp_eons_plmn_name_short_name_encoding: (out)(optional): a placeholder for the output #QmiNasNetworkDescriptionEncoding, or %NULL if not required.
 * @value_3gpp_eons_plmn_name_short_name_country_initials: (out)(optional): a placeholder for the output #QmiNasPlmnNameCountryInitials, or %NULL if not required.
 * @value_3gpp_eons_plmn_name_short_name_spare_bits: (out)(optional): a placeholder for the output #QmiNasPlmnNameSpareBits, or %NULL if not required.
 * @value_3gpp_eons_plmn_name_short_name: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_3gpp_eons_plmn_name_long_name_encoding: (out)(optional): a placeholder for the output #QmiNasNetworkDescriptionEncoding, or %NULL if not required.
 * @value_3gpp_eons_plmn_name_long_name_country_initials: (out)(optional): a placeholder for the output #QmiNasPlmnNameCountryInitials, or %NULL if not required.
 * @value_3gpp_eons_plmn_name_long_name_spare_bits: (out)(optional): a placeholder for the output #QmiNasPlmnNameSpareBits, or %NULL if not required.
 * @value_3gpp_eons_plmn_name_long_name: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the '3GPP EONS PLMN Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_output_get_3gpp_eons_plmn_name (
    QmiMessageNasGetPlmnNameOutput *self,
    QmiNasNetworkDescriptionEncoding *value_3gpp_eons_plmn_name_service_provider_name_encoding,
    GArray **value_3gpp_eons_plmn_name_service_provider_name,
    QmiNasNetworkDescriptionEncoding *value_3gpp_eons_plmn_name_short_name_encoding,
    QmiNasPlmnNameCountryInitials *value_3gpp_eons_plmn_name_short_name_country_initials,
    QmiNasPlmnNameSpareBits *value_3gpp_eons_plmn_name_short_name_spare_bits,
    GArray **value_3gpp_eons_plmn_name_short_name,
    QmiNasNetworkDescriptionEncoding *value_3gpp_eons_plmn_name_long_name_encoding,
    QmiNasPlmnNameCountryInitials *value_3gpp_eons_plmn_name_long_name_country_initials,
    QmiNasPlmnNameSpareBits *value_3gpp_eons_plmn_name_long_name_spare_bits,
    GArray **value_3gpp_eons_plmn_name_long_name,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_output_get_result:
 * @self: a QmiMessageNasGetPlmnNameOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_plmn_name_output_get_result (
    QmiMessageNasGetPlmnNameOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_plmn_name_output_ref:
 * @self: a #QmiMessageNasGetPlmnNameOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageNasGetPlmnNameOutput *qmi_message_nas_get_plmn_name_output_ref (QmiMessageNasGetPlmnNameOutput *self);

/**
 * qmi_message_nas_get_plmn_name_output_unref:
 * @self: a #QmiMessageNasGetPlmnNameOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_nas_get_plmn_name_output_unref (QmiMessageNasGetPlmnNameOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetPlmnNameOutput, qmi_message_nas_get_plmn_name_output_unref)

/**
 * qmi_message_nas_get_plmn_name_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetPlmnNameOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetPlmnNameOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_plmn_name_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetPlmnNameOutput *qmi_message_nas_get_plmn_name_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get System Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetSystemInfoOutput:
 *
 * The #QmiMessageNasGetSystemInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSystemInfoOutput QmiMessageNasGetSystemInfoOutput;
GType qmi_message_nas_get_system_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SYSTEM_INFO_OUTPUT (qmi_message_nas_get_system_info_output_get_type ())


/**
 * qmi_message_nas_get_system_info_output_get_nr5g_tracking_area_code:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_nr5g_tracking_area_code: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G Tracking Area Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_system_info_output_get_nr5g_tracking_area_code (
    QmiMessageNasGetSystemInfoOutput *self,
    GArray **value_nr5g_tracking_area_code,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_dcnr_restriction_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_dcnr_restriction_info: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'DCNR restriction Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_system_info_output_get_dcnr_restriction_info (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_dcnr_restriction_info,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_eutra_with_nr5g_availability:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_eutra_with_nr5g_availability: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'EUTRA with NR5G availability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_system_info_output_get_eutra_with_nr5g_availability (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_eutra_with_nr5g_availability,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_nr5g_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_nr5g_system_info_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_nr5g_system_info_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_nr5g_system_info_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_nr5g_system_info_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_lac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_nr5g_system_info_cid_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_cid: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_nr5g_system_info_registration_reject_info_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_registration_reject_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_nr5g_system_info_registration_reject_cause: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_nr5g_system_info_network_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_mcc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_nr5g_system_info_mnc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_nr5g_system_info_tac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_nr5g_system_info_tac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_system_info_output_get_nr5g_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_nr5g_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_nr5g_system_info_domain,
    gboolean *value_nr5g_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_nr5g_system_info_service_capability,
    gboolean *value_nr5g_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_nr5g_system_info_roaming_status,
    gboolean *value_nr5g_system_info_forbidden_valid,
    gboolean *value_nr5g_system_info_forbidden,
    gboolean *value_nr5g_system_info_lac_valid,
    guint16 *value_nr5g_system_info_lac,
    gboolean *value_nr5g_system_info_cid_valid,
    guint32 *value_nr5g_system_info_cid,
    gboolean *value_nr5g_system_info_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_nr5g_system_info_registration_reject_domain,
    guint8 *value_nr5g_system_info_registration_reject_cause,
    gboolean *value_nr5g_system_info_network_id_valid,
    const gchar **value_nr5g_system_info_mcc,
    const gchar **value_nr5g_system_info_mnc,
    gboolean *value_nr5g_system_info_tac_valid,
    guint16 *value_nr5g_system_info_tac,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_nr5g_service_status_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_nr5g_service_status_info_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_nr5g_service_status_info_true_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_nr5g_service_status_info_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G Service Status Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_system_info_output_get_nr5g_service_status_info (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_nr5g_service_status_info_service_status,
    QmiNasServiceStatus *value_nr5g_service_status_info_true_service_status,
    gboolean *value_nr5g_service_status_info_preferred_data_path,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_lte_cell_access_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_lte_cell_access_status: (out)(optional): a placeholder for the output #QmiNasLteCellAccessStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Cell Access Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_get_system_info_output_get_lte_cell_access_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasLteCellAccessStatus *value_lte_cell_access_status,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_lte_embms_coverage_info_trace_id:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_lte_embms_coverage_info_trace_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE eMBMS Coverage Info Trace ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_get_system_info_output_get_lte_embms_coverage_info_trace_id (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_lte_embms_coverage_info_trace_id,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_lte_registration_domain:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_lte_registration_domain: (out)(optional): a placeholder for the output #QmiNasLteRegistrationDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Registration Domain' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_get_system_info_output_get_lte_registration_domain (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasLteRegistrationDomain *value_lte_registration_domain,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_network_selection_registration_restriction:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_network_selection_registration_restriction: (out)(optional): a placeholder for the output #QmiNasNetworkSelectionRegistrationRestriction, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Selection Registration Restriction' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_get_system_info_output_get_network_selection_registration_restriction (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasNetworkSelectionRegistrationRestriction *value_network_selection_registration_restriction,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_cdma_resolved_mcc:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_cdma_resolved_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Resolved MCC' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_system_info_output_get_cdma_resolved_mcc (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_cdma_resolved_mcc,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_wcdma_routing_area_code:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_wcdma_routing_area_code: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Routing Area Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_system_info_output_get_wcdma_routing_area_code (
    QmiMessageNasGetSystemInfoOutput *self,
    guint8 *value_wcdma_routing_area_code,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_gsm_routing_area_code:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_gsm_routing_area_code: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Routing Area Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_system_info_output_get_gsm_routing_area_code (
    QmiMessageNasGetSystemInfoOutput *self,
    guint8 *value_gsm_routing_area_code,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_cdma_registration_zone_id:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_cdma_registration_zone_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Registration Zone ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_system_info_output_get_cdma_registration_zone_id (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_cdma_registration_zone_id,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_lte_voice_domain:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_lte_voice_domain: (out)(optional): a placeholder for the output #QmiNasLteVoiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Voice Domain' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_system_info_output_get_lte_voice_domain (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasLteVoiceDomain *value_lte_voice_domain,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_ims_voice_support:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_ims_voice_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMS Voice Support' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_get_system_info_output_get_ims_voice_support (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_ims_voice_support,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_sim_reject_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_sim_reject_info: (out)(optional): a placeholder for the output #QmiNasSimRejectState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SIM Reject Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_sim_reject_info (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasSimRejectState *value_sim_reject_info,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_lte_embms_coverage_info_support:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_lte_embms_coverage_info_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE eMBMS Coverage Info Support' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_lte_embms_coverage_info_support (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_lte_embms_coverage_info_support,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_td_scdma_system_info_v2:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_td_scdma_system_info_v2_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_td_scdma_system_info_v2_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_td_scdma_system_info_v2_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_td_scdma_system_info_v2_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_lac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_td_scdma_system_info_v2_cid_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_cid: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_td_scdma_system_info_v2_registration_reject_info_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_registration_reject_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_td_scdma_system_info_v2_registration_reject_cause: (out)(optional): a placeholder for the output #QmiNasRejectCause, or %NULL if not required.
 * @value_td_scdma_system_info_v2_network_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_mcc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_td_scdma_system_info_v2_mnc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_td_scdma_system_info_v2_hs_call_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_hs_call_status: (out)(optional): a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_td_scdma_system_info_v2_hs_service_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_hs_service: (out)(optional): a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_td_scdma_system_info_v2_cell_parameter_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_cell_parameter_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_td_scdma_system_info_v2_cell_broadcast_support_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_cell_broadcast_support: (out)(optional): a placeholder for the output #QmiNasCellBroadcastCapability, or %NULL if not required.
 * @value_td_scdma_system_info_v2_cs_call_barring_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_cs_call_barring_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_td_scdma_system_info_v2_ps_call_barring_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_ps_call_barring_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_td_scdma_system_info_v2_cipher_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_td_scdma_system_info_v2_cipher_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TD SCDMA System Info v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_system_info_output_get_td_scdma_system_info_v2 (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_td_scdma_system_info_v2_domain_valid,
    QmiNasNetworkServiceDomain *value_td_scdma_system_info_v2_domain,
    gboolean *value_td_scdma_system_info_v2_service_capability_valid,
    QmiNasNetworkServiceDomain *value_td_scdma_system_info_v2_service_capability,
    gboolean *value_td_scdma_system_info_v2_roaming_status_valid,
    QmiNasRoamingStatus *value_td_scdma_system_info_v2_roaming_status,
    gboolean *value_td_scdma_system_info_v2_forbidden_valid,
    gboolean *value_td_scdma_system_info_v2_forbidden,
    gboolean *value_td_scdma_system_info_v2_lac_valid,
    guint16 *value_td_scdma_system_info_v2_lac,
    gboolean *value_td_scdma_system_info_v2_cid_valid,
    guint32 *value_td_scdma_system_info_v2_cid,
    gboolean *value_td_scdma_system_info_v2_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_td_scdma_system_info_v2_registration_reject_domain,
    QmiNasRejectCause *value_td_scdma_system_info_v2_registration_reject_cause,
    gboolean *value_td_scdma_system_info_v2_network_id_valid,
    const gchar **value_td_scdma_system_info_v2_mcc,
    const gchar **value_td_scdma_system_info_v2_mnc,
    gboolean *value_td_scdma_system_info_v2_hs_call_status_valid,
    QmiNasWcdmaHsService *value_td_scdma_system_info_v2_hs_call_status,
    gboolean *value_td_scdma_system_info_v2_hs_service_valid,
    QmiNasWcdmaHsService *value_td_scdma_system_info_v2_hs_service,
    gboolean *value_td_scdma_system_info_v2_cell_parameter_id_valid,
    guint16 *value_td_scdma_system_info_v2_cell_parameter_id,
    gboolean *value_td_scdma_system_info_v2_cell_broadcast_support_valid,
    QmiNasCellBroadcastCapability *value_td_scdma_system_info_v2_cell_broadcast_support,
    gboolean *value_td_scdma_system_info_v2_cs_call_barring_status_valid,
    QmiNasCallBarringStatus *value_td_scdma_system_info_v2_cs_call_barring_status,
    gboolean *value_td_scdma_system_info_v2_ps_call_barring_status_valid,
    QmiNasCallBarringStatus *value_td_scdma_system_info_v2_ps_call_barring_status,
    gboolean *value_td_scdma_system_info_v2_cipher_domain_valid,
    QmiNasNetworkServiceDomain *value_td_scdma_system_info_v2_cipher_domain,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_td_scdma_service_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_td_scdma_service_status_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_td_scdma_service_status_true_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_td_scdma_service_status_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TD SCDMA Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_td_scdma_service_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_td_scdma_service_status_service_status,
    QmiNasServiceStatus *value_td_scdma_service_status_true_service_status,
    gboolean *value_td_scdma_service_status_preferred_data_path,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_wcdma_cipher_domain:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_wcdma_cipher_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Cipher Domain' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_wcdma_cipher_domain (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasNetworkServiceDomain *value_wcdma_cipher_domain,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_gsm_cipher_domain:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_gsm_cipher_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Cipher Domain' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_gsm_cipher_domain (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasNetworkServiceDomain *value_gsm_cipher_domain,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_lte_voice_support:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_lte_voice_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Voice Support' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_lte_voice_support (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_lte_voice_support,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_wcdma_call_barring_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_wcdma_call_barring_status_cs_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_wcdma_call_barring_status_ps_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Call Barring Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_wcdma_call_barring_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasCallBarringStatus *value_wcdma_call_barring_status_cs_status,
    QmiNasCallBarringStatus *value_wcdma_call_barring_status_ps_status,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_gsm_call_barring_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_gsm_call_barring_status_cs_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @value_gsm_call_barring_status_ps_status: (out)(optional): a placeholder for the output #QmiNasCallBarringStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Call Barring Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_gsm_call_barring_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasCallBarringStatus *value_gsm_call_barring_status_cs_status,
    QmiNasCallBarringStatus *value_gsm_call_barring_status_ps_status,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_additional_lte_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_additional_lte_system_info_geo_system_index: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional LTE System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_additional_lte_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_additional_lte_system_info_geo_system_index,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_additional_wcdma_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_additional_wcdma_system_info_geo_system_index: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_additional_wcdma_system_info_cell_broadcast_support: (out)(optional): a placeholder for the output #QmiNasCellBroadcastCapability, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional WCDMA System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_additional_wcdma_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_additional_wcdma_system_info_geo_system_index,
    QmiNasCellBroadcastCapability *value_additional_wcdma_system_info_cell_broadcast_support,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_additional_gsm_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_additional_gsm_system_info_geo_system_index: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_additional_gsm_system_info_cell_broadcast_support: (out)(optional): a placeholder for the output #QmiNasCellBroadcastCapability, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional GSM System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_additional_gsm_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_additional_gsm_system_info_geo_system_index,
    QmiNasCellBroadcastCapability *value_additional_gsm_system_info_cell_broadcast_support,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_additional_hdr_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_additional_hdr_system_info_geo_system_index: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional HDR System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_additional_hdr_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_additional_hdr_system_info_geo_system_index,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_additional_cdma_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_additional_cdma_system_info_geo_system_index: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_additional_cdma_system_info_registration_period: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Additional CDMA System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_additional_cdma_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    guint16 *value_additional_cdma_system_info_geo_system_index,
    guint16 *value_additional_cdma_system_info_registration_period,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_lte_system_info_v2:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_lte_system_info_v2_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_lte_system_info_v2_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_lte_system_info_v2_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_lte_system_info_v2_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_lac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_lte_system_info_v2_cid_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_cid: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_system_info_v2_registration_reject_info_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_registration_reject_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_lte_system_info_v2_registration_reject_cause: (out)(optional): a placeholder for the output #QmiNasRejectCause, or %NULL if not required.
 * @value_lte_system_info_v2_network_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_mcc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_lte_system_info_v2_mnc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_lte_system_info_v2_tac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_lte_system_info_v2_tac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE System Info v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_system_info_output_get_lte_system_info_v2 (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_lte_system_info_v2_domain_valid,
    QmiNasNetworkServiceDomain *value_lte_system_info_v2_domain,
    gboolean *value_lte_system_info_v2_service_capability_valid,
    QmiNasNetworkServiceDomain *value_lte_system_info_v2_service_capability,
    gboolean *value_lte_system_info_v2_roaming_status_valid,
    QmiNasRoamingStatus *value_lte_system_info_v2_roaming_status,
    gboolean *value_lte_system_info_v2_forbidden_valid,
    gboolean *value_lte_system_info_v2_forbidden,
    gboolean *value_lte_system_info_v2_lac_valid,
    guint16 *value_lte_system_info_v2_lac,
    gboolean *value_lte_system_info_v2_cid_valid,
    guint32 *value_lte_system_info_v2_cid,
    gboolean *value_lte_system_info_v2_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_lte_system_info_v2_registration_reject_domain,
    QmiNasRejectCause *value_lte_system_info_v2_registration_reject_cause,
    gboolean *value_lte_system_info_v2_network_id_valid,
    const gchar **value_lte_system_info_v2_mcc,
    const gchar **value_lte_system_info_v2_mnc,
    gboolean *value_lte_system_info_v2_tac_valid,
    guint16 *value_lte_system_info_v2_tac,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_wcdma_system_info_v2:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_wcdma_system_info_v2_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_wcdma_system_info_v2_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_wcdma_system_info_v2_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_wcdma_system_info_v2_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_lac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_wcdma_system_info_v2_cid_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_cid: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_wcdma_system_info_v2_registration_reject_info_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_registration_reject_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_wcdma_system_info_v2_registration_reject_cause: (out)(optional): a placeholder for the output #QmiNasRejectCause, or %NULL if not required.
 * @value_wcdma_system_info_v2_network_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_mcc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_wcdma_system_info_v2_mnc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_wcdma_system_info_v2_hs_call_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_hs_call_status: (out)(optional): a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_wcdma_system_info_v2_hs_service_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_hs_service: (out)(optional): a placeholder for the output #QmiNasWcdmaHsService, or %NULL if not required.
 * @value_wcdma_system_info_v2_primary_scrambling_code_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_wcdma_system_info_v2_primary_scrambling_code: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA System Info v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_system_info_output_get_wcdma_system_info_v2 (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_wcdma_system_info_v2_domain_valid,
    QmiNasNetworkServiceDomain *value_wcdma_system_info_v2_domain,
    gboolean *value_wcdma_system_info_v2_service_capability_valid,
    QmiNasNetworkServiceDomain *value_wcdma_system_info_v2_service_capability,
    gboolean *value_wcdma_system_info_v2_roaming_status_valid,
    QmiNasRoamingStatus *value_wcdma_system_info_v2_roaming_status,
    gboolean *value_wcdma_system_info_v2_forbidden_valid,
    gboolean *value_wcdma_system_info_v2_forbidden,
    gboolean *value_wcdma_system_info_v2_lac_valid,
    guint16 *value_wcdma_system_info_v2_lac,
    gboolean *value_wcdma_system_info_v2_cid_valid,
    guint32 *value_wcdma_system_info_v2_cid,
    gboolean *value_wcdma_system_info_v2_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_wcdma_system_info_v2_registration_reject_domain,
    QmiNasRejectCause *value_wcdma_system_info_v2_registration_reject_cause,
    gboolean *value_wcdma_system_info_v2_network_id_valid,
    const gchar **value_wcdma_system_info_v2_mcc,
    const gchar **value_wcdma_system_info_v2_mnc,
    gboolean *value_wcdma_system_info_v2_hs_call_status_valid,
    QmiNasWcdmaHsService *value_wcdma_system_info_v2_hs_call_status,
    gboolean *value_wcdma_system_info_v2_hs_service_valid,
    QmiNasWcdmaHsService *value_wcdma_system_info_v2_hs_service,
    gboolean *value_wcdma_system_info_v2_primary_scrambling_code_valid,
    guint16 *value_wcdma_system_info_v2_primary_scrambling_code,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_gsm_system_info_v2:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_gsm_system_info_v2_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_gsm_system_info_v2_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_gsm_system_info_v2_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_gsm_system_info_v2_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_lac_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_lac: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_gsm_system_info_v2_cid_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_cid: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gsm_system_info_v2_registration_reject_info_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_registration_reject_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_gsm_system_info_v2_registration_reject_cause: (out)(optional): a placeholder for the output #QmiNasRejectCause, or %NULL if not required.
 * @value_gsm_system_info_v2_network_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_mcc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_gsm_system_info_v2_mnc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_gsm_system_info_v2_egprs_support_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_egprs_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_dtm_support_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_gsm_system_info_v2_dtm_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM System Info v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_get_system_info_output_get_gsm_system_info_v2 (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_gsm_system_info_v2_domain_valid,
    QmiNasNetworkServiceDomain *value_gsm_system_info_v2_domain,
    gboolean *value_gsm_system_info_v2_service_capability_valid,
    QmiNasNetworkServiceDomain *value_gsm_system_info_v2_service_capability,
    gboolean *value_gsm_system_info_v2_roaming_status_valid,
    QmiNasRoamingStatus *value_gsm_system_info_v2_roaming_status,
    gboolean *value_gsm_system_info_v2_forbidden_valid,
    gboolean *value_gsm_system_info_v2_forbidden,
    gboolean *value_gsm_system_info_v2_lac_valid,
    guint16 *value_gsm_system_info_v2_lac,
    gboolean *value_gsm_system_info_v2_cid_valid,
    guint32 *value_gsm_system_info_v2_cid,
    gboolean *value_gsm_system_info_v2_registration_reject_info_valid,
    QmiNasNetworkServiceDomain *value_gsm_system_info_v2_registration_reject_domain,
    QmiNasRejectCause *value_gsm_system_info_v2_registration_reject_cause,
    gboolean *value_gsm_system_info_v2_network_id_valid,
    const gchar **value_gsm_system_info_v2_mcc,
    const gchar **value_gsm_system_info_v2_mnc,
    gboolean *value_gsm_system_info_v2_egprs_support_valid,
    gboolean *value_gsm_system_info_v2_egprs_support,
    gboolean *value_gsm_system_info_v2_dtm_support_valid,
    gboolean *value_gsm_system_info_v2_dtm_support,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_hdr_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_hdr_system_info_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_hdr_system_info_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_hdr_system_info_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_hdr_system_info_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_prl_match_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_prl_match: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_personality_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_personality: (out)(optional): a placeholder for the output #QmiNasHdrPersonality, or %NULL if not required.
 * @value_hdr_system_info_protocol_revision_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_protocol_revision: (out)(optional): a placeholder for the output #QmiNasHdrProtocolRevision, or %NULL if not required.
 * @value_hdr_system_info_is_856_system_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_hdr_system_info_is_856_system_id: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_hdr_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_hdr_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_hdr_system_info_domain,
    gboolean *value_hdr_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_hdr_system_info_service_capability,
    gboolean *value_hdr_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_hdr_system_info_roaming_status,
    gboolean *value_hdr_system_info_forbidden_valid,
    gboolean *value_hdr_system_info_forbidden,
    gboolean *value_hdr_system_info_prl_match_valid,
    gboolean *value_hdr_system_info_prl_match,
    gboolean *value_hdr_system_info_personality_valid,
    QmiNasHdrPersonality *value_hdr_system_info_personality,
    gboolean *value_hdr_system_info_protocol_revision_valid,
    QmiNasHdrProtocolRevision *value_hdr_system_info_protocol_revision,
    gboolean *value_hdr_system_info_is_856_system_id_valid,
    const gchar **value_hdr_system_info_is_856_system_id,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_cdma_system_info:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_cdma_system_info_domain_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_domain: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_cdma_system_info_service_capability_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_service_capability: (out)(optional): a placeholder for the output #QmiNasNetworkServiceDomain, or %NULL if not required.
 * @value_cdma_system_info_roaming_status_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_roaming_status: (out)(optional): a placeholder for the output #QmiNasRoamingStatus, or %NULL if not required.
 * @value_cdma_system_info_forbidden_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_forbidden: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_prl_match_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_prl_match: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_p_rev_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_p_rev: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_cdma_system_info_base_station_p_rev_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_base_station_p_rev: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_cdma_system_info_concurrent_service_support_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_concurrent_service_support: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_cdma_system_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_sid: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_nid: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_base_station_info_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_base_station_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_base_station_latitude: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_cdma_system_info_base_station_longitude: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_cdma_system_info_packet_zone_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_packet_zone: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_cdma_system_info_network_id_valid: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_cdma_system_info_mcc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_cdma_system_info_mnc: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA System Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_cdma_system_info (
    QmiMessageNasGetSystemInfoOutput *self,
    gboolean *value_cdma_system_info_domain_valid,
    QmiNasNetworkServiceDomain *value_cdma_system_info_domain,
    gboolean *value_cdma_system_info_service_capability_valid,
    QmiNasNetworkServiceDomain *value_cdma_system_info_service_capability,
    gboolean *value_cdma_system_info_roaming_status_valid,
    QmiNasRoamingStatus *value_cdma_system_info_roaming_status,
    gboolean *value_cdma_system_info_forbidden_valid,
    gboolean *value_cdma_system_info_forbidden,
    gboolean *value_cdma_system_info_prl_match_valid,
    gboolean *value_cdma_system_info_prl_match,
    gboolean *value_cdma_system_info_p_rev_valid,
    guint8 *value_cdma_system_info_p_rev,
    gboolean *value_cdma_system_info_base_station_p_rev_valid,
    guint8 *value_cdma_system_info_base_station_p_rev,
    gboolean *value_cdma_system_info_concurrent_service_support_valid,
    gboolean *value_cdma_system_info_concurrent_service_support,
    gboolean *value_cdma_system_info_cdma_system_id_valid,
    guint16 *value_cdma_system_info_sid,
    guint16 *value_cdma_system_info_nid,
    gboolean *value_cdma_system_info_base_station_info_valid,
    guint16 *value_cdma_system_info_base_station_id,
    gint32 *value_cdma_system_info_base_station_latitude,
    gint32 *value_cdma_system_info_base_station_longitude,
    gboolean *value_cdma_system_info_packet_zone_valid,
    guint16 *value_cdma_system_info_packet_zone,
    gboolean *value_cdma_system_info_network_id_valid,
    const gchar **value_cdma_system_info_mcc,
    const gchar **value_cdma_system_info_mnc,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_lte_service_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_lte_service_status_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_lte_service_status_true_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_lte_service_status_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_lte_service_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_lte_service_status_service_status,
    QmiNasServiceStatus *value_lte_service_status_true_service_status,
    gboolean *value_lte_service_status_preferred_data_path,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_wcdma_service_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_wcdma_service_status_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_wcdma_service_status_true_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_wcdma_service_status_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_wcdma_service_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_wcdma_service_status_service_status,
    QmiNasServiceStatus *value_wcdma_service_status_true_service_status,
    gboolean *value_wcdma_service_status_preferred_data_path,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_gsm_service_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_gsm_service_status_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_gsm_service_status_true_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_gsm_service_status_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_gsm_service_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_gsm_service_status_service_status,
    QmiNasServiceStatus *value_gsm_service_status_true_service_status,
    gboolean *value_gsm_service_status_preferred_data_path,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_hdr_service_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_hdr_service_status_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_hdr_service_status_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_hdr_service_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_hdr_service_status_service_status,
    gboolean *value_hdr_service_status_preferred_data_path,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_cdma_service_status:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 * @value_cdma_service_status_service_status: (out)(optional): a placeholder for the output #QmiNasServiceStatus, or %NULL if not required.
 * @value_cdma_service_status_preferred_data_path: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Service Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_cdma_service_status (
    QmiMessageNasGetSystemInfoOutput *self,
    QmiNasServiceStatus *value_cdma_service_status_service_status,
    gboolean *value_cdma_service_status_preferred_data_path,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_get_result:
 * @self: a QmiMessageNasGetSystemInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_system_info_output_get_result (
    QmiMessageNasGetSystemInfoOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_system_info_output_ref:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetSystemInfoOutput *qmi_message_nas_get_system_info_output_ref (QmiMessageNasGetSystemInfoOutput *self);

/**
 * qmi_message_nas_get_system_info_output_unref:
 * @self: a #QmiMessageNasGetSystemInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_system_info_output_unref (QmiMessageNasGetSystemInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetSystemInfoOutput, qmi_message_nas_get_system_info_output_unref)

/**
 * qmi_message_nas_get_system_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetSystemInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetSystemInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_system_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetSystemInfoOutput *qmi_message_nas_get_system_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Signal Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetSignalInfoOutput:
 *
 * The #QmiMessageNasGetSignalInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetSignalInfoOutput QmiMessageNasGetSignalInfoOutput;
GType qmi_message_nas_get_signal_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_SIGNAL_INFO_OUTPUT (qmi_message_nas_get_signal_info_output_get_type ())


/**
 * qmi_message_nas_get_signal_info_output_get_wcdma_rscp:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_wcdma_rscp: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA RSCP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_nas_get_signal_info_output_get_wcdma_rscp (
    QmiMessageNasGetSignalInfoOutput *self,
    gint16 *value_wcdma_rscp,
    GError **error);


/**
 * qmi_message_nas_get_signal_info_output_get_5g_signal_strength_extended:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_5g_signal_strength_extended: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the '5G Signal Strength Extended' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26.2
 */
gboolean qmi_message_nas_get_signal_info_output_get_5g_signal_strength_extended (
    QmiMessageNasGetSignalInfoOutput *self,
    gint16 *value_5g_signal_strength_extended,
    GError **error);


/**
 * qmi_message_nas_get_signal_info_output_get_5g_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_5g_signal_strength_rsrp: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @value_5g_signal_strength_snr: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the '5G Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26.2
 */
gboolean qmi_message_nas_get_signal_info_output_get_5g_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint16 *value_5g_signal_strength_rsrp,
    gint16 *value_5g_signal_strength_snr,
    GError **error);


/**
 * qmi_message_nas_get_signal_info_output_get_tdma_signal_strength_extended:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_tdma_signal_strength_extended_rssi: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_tdma_signal_strength_extended_rscp: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_tdma_signal_strength_extended_ecio: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_tdma_signal_strength_extended_sinr: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TDMA Signal Strength Extended' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26.2
 */
gboolean qmi_message_nas_get_signal_info_output_get_tdma_signal_strength_extended (
    QmiMessageNasGetSignalInfoOutput *self,
    gint32 *value_tdma_signal_strength_extended_rssi,
    gint32 *value_tdma_signal_strength_extended_rscp,
    gint32 *value_tdma_signal_strength_extended_ecio,
    gint32 *value_tdma_signal_strength_extended_sinr,
    GError **error);


/**
 * qmi_message_nas_get_signal_info_output_get_tdma_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_tdma_signal_strength: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'TDMA Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_tdma_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint8 *value_tdma_signal_strength,
    GError **error);


/**
 * qmi_message_nas_get_signal_info_output_get_lte_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_lte_signal_strength_rssi: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_lte_signal_strength_rsrq: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_lte_signal_strength_rsrp: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @value_lte_signal_strength_snr: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_lte_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint8 *value_lte_signal_strength_rssi,
    gint8 *value_lte_signal_strength_rsrq,
    gint16 *value_lte_signal_strength_rsrp,
    gint16 *value_lte_signal_strength_snr,
    GError **error);


/**
 * qmi_message_nas_get_signal_info_output_get_wcdma_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_wcdma_signal_strength_rssi: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_wcdma_signal_strength_ecio: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_wcdma_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint8 *value_wcdma_signal_strength_rssi,
    gint16 *value_wcdma_signal_strength_ecio,
    GError **error);


/**
 * qmi_message_nas_get_signal_info_output_get_gsm_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_gsm_signal_strength: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_gsm_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint8 *value_gsm_signal_strength,
    GError **error);


/**
 * qmi_message_nas_get_signal_info_output_get_hdr_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_hdr_signal_strength_rssi: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_hdr_signal_strength_ecio: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @value_hdr_signal_strength_sinr: (out)(optional): a placeholder for the output #QmiNasEvdoSinrLevel, or %NULL if not required.
 * @value_hdr_signal_strength_io: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_hdr_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint8 *value_hdr_signal_strength_rssi,
    gint16 *value_hdr_signal_strength_ecio,
    QmiNasEvdoSinrLevel *value_hdr_signal_strength_sinr,
    gint32 *value_hdr_signal_strength_io,
    GError **error);


/**
 * qmi_message_nas_get_signal_info_output_get_cdma_signal_strength:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 * @value_cdma_signal_strength_rssi: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_cdma_signal_strength_ecio: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Signal Strength' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_cdma_signal_strength (
    QmiMessageNasGetSignalInfoOutput *self,
    gint8 *value_cdma_signal_strength_rssi,
    gint16 *value_cdma_signal_strength_ecio,
    GError **error);


/**
 * qmi_message_nas_get_signal_info_output_get_result:
 * @self: a QmiMessageNasGetSignalInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_signal_info_output_get_result (
    QmiMessageNasGetSignalInfoOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_signal_info_output_ref:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetSignalInfoOutput *qmi_message_nas_get_signal_info_output_ref (QmiMessageNasGetSignalInfoOutput *self);

/**
 * qmi_message_nas_get_signal_info_output_unref:
 * @self: a #QmiMessageNasGetSignalInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_signal_info_output_unref (QmiMessageNasGetSignalInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetSignalInfoOutput, qmi_message_nas_get_signal_info_output_unref)

/**
 * qmi_message_nas_get_signal_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetSignalInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetSignalInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_signal_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetSignalInfoOutput *qmi_message_nas_get_signal_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Config Signal Info */


/* --- Input -- */

/**
 * QmiMessageNasConfigSignalInfoInput:
 *
 * The #QmiMessageNasConfigSignalInfoInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasConfigSignalInfoInput QmiMessageNasConfigSignalInfoInput;
GType qmi_message_nas_config_signal_info_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_CONFIG_SIGNAL_INFO_INPUT (qmi_message_nas_config_signal_info_input_get_type ())


/**
 * qmi_message_nas_config_signal_info_input_get_rscp_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rscp_threshold: (out)(optional)(element-type gint8)(transfer none): a placeholder for the output #GArray of #gint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSCP Threshold' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_rscp_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_rscp_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_set_rscp_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rscp_threshold: (in)(element-type gint8)(transfer none): a #GArray of #gint8 elements. A new reference to @value_rscp_threshold will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RSCP Threshold' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_rscp_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_rscp_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_get_lte_report:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_lte_report_rate: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_lte_report_average_period: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Report' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_lte_report (
    QmiMessageNasConfigSignalInfoInput *self,
    guint8 *value_lte_report_rate,
    guint8 *value_lte_report_average_period,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_set_lte_report:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_lte_report_rate: a #guint8.
 * @value_lte_report_average_period: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE Report' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_lte_report (
    QmiMessageNasConfigSignalInfoInput *self,
    guint8 value_lte_report_rate,
    guint8 value_lte_report_average_period,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_get_rsrp_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rsrp_threshold: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSRP Threshold' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_rsrp_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_rsrp_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_set_rsrp_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rsrp_threshold: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_rsrp_threshold will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RSRP Threshold' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_rsrp_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_rsrp_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_get_rsrq_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rsrq_threshold: (out)(optional)(element-type gint8)(transfer none): a placeholder for the output #GArray of #gint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSRQ Threshold' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_rsrq_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_rsrq_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_set_rsrq_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rsrq_threshold: (in)(element-type gint8)(transfer none): a #GArray of #gint8 elements. A new reference to @value_rsrq_threshold will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RSRQ Threshold' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_rsrq_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_rsrq_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_get_io_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_io_threshold: (out)(optional)(element-type gint32)(transfer none): a placeholder for the output #GArray of #gint32 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IO Threshold' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_io_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_io_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_set_io_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_io_threshold: (in)(element-type gint32)(transfer none): a #GArray of #gint32 elements. A new reference to @value_io_threshold will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IO Threshold' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_io_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_io_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_get_lte_snr_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_lte_snr_threshold: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE SNR Threshold' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_lte_snr_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_lte_snr_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_set_lte_snr_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_lte_snr_threshold: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_lte_snr_threshold will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE SNR Threshold' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_lte_snr_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_lte_snr_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_get_sinr_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_sinr_threshold: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SINR Threshold' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_sinr_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_sinr_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_set_sinr_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_sinr_threshold: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_sinr_threshold will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'SINR Threshold' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_sinr_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_sinr_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_get_ecio_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_ecio_threshold: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'ECIO Threshold' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_ecio_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_ecio_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_set_ecio_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_ecio_threshold: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_ecio_threshold will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'ECIO Threshold' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_ecio_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_ecio_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_get_rssi_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rssi_threshold: (out)(optional)(element-type gint8)(transfer none): a placeholder for the output #GArray of #gint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'RSSI Threshold' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_get_rssi_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray **value_rssi_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_set_rssi_threshold:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 * @value_rssi_threshold: (in)(element-type gint8)(transfer none): a #GArray of #gint8 elements. A new reference to @value_rssi_threshold will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'RSSI Threshold' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_input_set_rssi_threshold (
    QmiMessageNasConfigSignalInfoInput *self,
    GArray *value_rssi_threshold,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_input_ref:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasConfigSignalInfoInput *qmi_message_nas_config_signal_info_input_ref (QmiMessageNasConfigSignalInfoInput *self);

/**
 * qmi_message_nas_config_signal_info_input_unref:
 * @self: a #QmiMessageNasConfigSignalInfoInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_config_signal_info_input_unref (QmiMessageNasConfigSignalInfoInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasConfigSignalInfoInput, qmi_message_nas_config_signal_info_input_unref)

/**
 * qmi_message_nas_config_signal_info_input_new:
 *
 * Allocates a new #QmiMessageNasConfigSignalInfoInput.
 *
 * Returns: the newly created #QmiMessageNasConfigSignalInfoInput. The returned value should be freed with qmi_message_nas_config_signal_info_input_unref().
 *
 * Since: 1.0
 */
QmiMessageNasConfigSignalInfoInput *qmi_message_nas_config_signal_info_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasConfigSignalInfoOutput:
 *
 * The #QmiMessageNasConfigSignalInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasConfigSignalInfoOutput QmiMessageNasConfigSignalInfoOutput;
GType qmi_message_nas_config_signal_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_CONFIG_SIGNAL_INFO_OUTPUT (qmi_message_nas_config_signal_info_output_get_type ())


/**
 * qmi_message_nas_config_signal_info_output_get_result:
 * @self: a QmiMessageNasConfigSignalInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_config_signal_info_output_get_result (
    QmiMessageNasConfigSignalInfoOutput *self,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_output_ref:
 * @self: a #QmiMessageNasConfigSignalInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasConfigSignalInfoOutput *qmi_message_nas_config_signal_info_output_ref (QmiMessageNasConfigSignalInfoOutput *self);

/**
 * qmi_message_nas_config_signal_info_output_unref:
 * @self: a #QmiMessageNasConfigSignalInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_config_signal_info_output_unref (QmiMessageNasConfigSignalInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasConfigSignalInfoOutput, qmi_message_nas_config_signal_info_output_unref)

/**
 * qmi_message_nas_config_signal_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasConfigSignalInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasConfigSignalInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_config_signal_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasConfigSignalInfoOutput *qmi_message_nas_config_signal_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Config Signal Info v2 */


/* --- Input -- */

/**
 * QmiMessageNasConfigSignalInfoV2Input:
 *
 * The #QmiMessageNasConfigSignalInfoV2Input structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageNasConfigSignalInfoV2Input QmiMessageNasConfigSignalInfoV2Input;
GType qmi_message_nas_config_signal_info_v2_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_CONFIG_SIGNAL_INFO_V2_INPUT (qmi_message_nas_config_signal_info_v2_input_get_type ())


/**
 * qmi_message_nas_config_signal_info_v2_input_get_wcdma_rscp_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_wcdma_rscp_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA RSCP Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_wcdma_rscp_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_wcdma_rscp_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_wcdma_rscp_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_wcdma_rscp_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'WCDMA RSCP Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_wcdma_rscp_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_wcdma_rscp_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_wcdma_rscp_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_wcdma_rscp_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA RSCP Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_wcdma_rscp_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_wcdma_rscp_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_wcdma_rscp_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_wcdma_rscp_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_wcdma_rscp_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'WCDMA RSCP Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_wcdma_rscp_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_wcdma_rscp_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_nr5g_rsrq_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_rsrq_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G RSRQ Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_nr5g_rsrq_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_nr5g_rsrq_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_nr5g_rsrq_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_rsrq_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NR5G RSRQ Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_nr5g_rsrq_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_nr5g_rsrq_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_nr5g_rsrq_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_rsrq_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G RSRQ Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_nr5g_rsrq_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_nr5g_rsrq_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_nr5g_rsrq_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_rsrq_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_nr5g_rsrq_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NR5G RSRQ Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_nr5g_rsrq_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_nr5g_rsrq_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_nr5g_report:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_report_rate: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_nr5g_report_average_period: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G Report' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_nr5g_report (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint8 *value_nr5g_report_rate,
    guint8 *value_nr5g_report_average_period,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_nr5g_report:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_report_rate: a #guint8.
 * @value_nr5g_report_average_period: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NR5G Report' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_nr5g_report (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint8 value_nr5g_report_rate,
    guint8 value_nr5g_report_average_period,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_nr5g_rsrp_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_rsrp_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G RSRP Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_nr5g_rsrp_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_nr5g_rsrp_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_nr5g_rsrp_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_rsrp_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NR5G RSRP Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_nr5g_rsrp_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_nr5g_rsrp_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_nr5g_rsrp_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_rsrp_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G RSRP Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_nr5g_rsrp_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_nr5g_rsrp_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_nr5g_rsrp_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_rsrp_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_nr5g_rsrp_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NR5G RSRP Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_nr5g_rsrp_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_nr5g_rsrp_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_nr5g_snr_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_snr_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G SNR Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_nr5g_snr_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_nr5g_snr_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_nr5g_snr_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_snr_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NR5G SNR Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_nr5g_snr_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_nr5g_snr_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_nr5g_snr_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_snr_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'NR5G SNR Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_nr5g_snr_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_nr5g_snr_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_nr5g_snr_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_nr5g_snr_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_nr5g_snr_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'NR5G SNR Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_nr5g_snr_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_nr5g_snr_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_lte_report:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_report_rate: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_lte_report_average_period: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Report' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_lte_report (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint8 *value_lte_report_rate,
    guint8 *value_lte_report_average_period,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_lte_report:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_report_rate: a #guint8.
 * @value_lte_report_average_period: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE Report' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_lte_report (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint8 value_lte_report_rate,
    guint8 value_lte_report_average_period,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_lte_rsrp_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_rsrp_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE RSRP Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_lte_rsrp_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_lte_rsrp_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_lte_rsrp_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_rsrp_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE RSRP Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_lte_rsrp_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_lte_rsrp_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_lte_rsrp_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_rsrp_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE RSRP Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_lte_rsrp_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_lte_rsrp_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_lte_rsrp_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_rsrp_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_lte_rsrp_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE RSRP Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_lte_rsrp_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_lte_rsrp_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_lte_rsrq_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_rsrq_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE RSRQ Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_lte_rsrq_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_lte_rsrq_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_lte_rsrq_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_rsrq_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE RSRQ Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_lte_rsrq_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_lte_rsrq_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_lte_rsrq_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_rsrq_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE RSRQ Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_lte_rsrq_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_lte_rsrq_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_lte_rsrq_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_rsrq_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_lte_rsrq_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE RSRQ Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_lte_rsrq_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_lte_rsrq_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_lte_snr_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_snr_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE SNR Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_lte_snr_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_lte_snr_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_lte_snr_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_snr_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE SNR Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_lte_snr_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_lte_snr_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_lte_snr_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_snr_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE SNR Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_lte_snr_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_lte_snr_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_lte_snr_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_snr_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_lte_snr_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE SNR Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_lte_snr_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_lte_snr_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_lte_rssi_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_rssi_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE RSSI Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_lte_rssi_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_lte_rssi_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_lte_rssi_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_rssi_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE RSSI Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_lte_rssi_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_lte_rssi_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_lte_rssi_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_rssi_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE RSSI Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_lte_rssi_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_lte_rssi_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_lte_rssi_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_lte_rssi_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_lte_rssi_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE RSSI Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_lte_rssi_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_lte_rssi_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_wcdma_ecio_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_wcdma_ecio_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA ECIO Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_wcdma_ecio_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_wcdma_ecio_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_wcdma_ecio_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_wcdma_ecio_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'WCDMA ECIO Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_wcdma_ecio_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_wcdma_ecio_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_wcdma_ecio_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_wcdma_ecio_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA ECIO Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_wcdma_ecio_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_wcdma_ecio_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_wcdma_ecio_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_wcdma_ecio_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_wcdma_ecio_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'WCDMA ECIO Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_wcdma_ecio_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_wcdma_ecio_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_wcdma_rssi_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_wcdma_rssi_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA RSSI Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_wcdma_rssi_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_wcdma_rssi_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_wcdma_rssi_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_wcdma_rssi_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'WCDMA RSSI Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_wcdma_rssi_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_wcdma_rssi_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_wcdma_rssi_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_wcdma_rssi_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'WCDMA RSSI Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_wcdma_rssi_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_wcdma_rssi_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_wcdma_rssi_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_wcdma_rssi_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_wcdma_rssi_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'WCDMA RSSI Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_wcdma_rssi_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_wcdma_rssi_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_gsm_rssi_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_gsm_rssi_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM RSSI Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_gsm_rssi_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_gsm_rssi_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_gsm_rssi_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_gsm_rssi_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GSM RSSI Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_gsm_rssi_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_gsm_rssi_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_gsm_rssi_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_gsm_rssi_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GSM RSSI Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_gsm_rssi_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_gsm_rssi_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_gsm_rssi_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_gsm_rssi_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_gsm_rssi_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GSM RSSI Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_gsm_rssi_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_gsm_rssi_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_hdr_io_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_io_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR IO Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_hdr_io_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_hdr_io_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_hdr_io_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_io_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HDR IO Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_hdr_io_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_hdr_io_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_hdr_io_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_io_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR IO Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_hdr_io_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_hdr_io_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_hdr_io_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_io_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_hdr_io_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HDR IO Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_hdr_io_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_hdr_io_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_hdr_sinr_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_sinr_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR SINR Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_hdr_sinr_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_hdr_sinr_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_hdr_sinr_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_sinr_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HDR SINR Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_hdr_sinr_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_hdr_sinr_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_hdr_sinr_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_sinr_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR SINR Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_hdr_sinr_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_hdr_sinr_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_hdr_sinr_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_sinr_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_hdr_sinr_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HDR SINR Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_hdr_sinr_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_hdr_sinr_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_hdr_ecio_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_ecio_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR ECIO Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_hdr_ecio_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_hdr_ecio_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_hdr_ecio_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_ecio_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HDR ECIO Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_hdr_ecio_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_hdr_ecio_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_hdr_ecio_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_ecio_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR ECIO Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_hdr_ecio_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_hdr_ecio_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_hdr_ecio_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_ecio_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_hdr_ecio_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HDR ECIO Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_hdr_ecio_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_hdr_ecio_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_hdr_rssi_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_rssi_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR RSSI Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_hdr_rssi_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_hdr_rssi_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_hdr_rssi_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_rssi_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HDR RSSI Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_hdr_rssi_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_hdr_rssi_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_hdr_rssi_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_rssi_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'HDR RSSI Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_hdr_rssi_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_hdr_rssi_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_hdr_rssi_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_hdr_rssi_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_hdr_rssi_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'HDR RSSI Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_hdr_rssi_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_hdr_rssi_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_cdma_ecio_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_cdma_ecio_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA ECIO Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_cdma_ecio_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_cdma_ecio_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_cdma_ecio_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_cdma_ecio_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'CDMA ECIO Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_cdma_ecio_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_cdma_ecio_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_cdma_ecio_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_cdma_ecio_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA ECIO Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_cdma_ecio_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_cdma_ecio_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_cdma_ecio_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_cdma_ecio_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_cdma_ecio_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'CDMA ECIO Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_cdma_ecio_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_cdma_ecio_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_cdma_rssi_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_cdma_rssi_delta: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA RSSI Delta' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_cdma_rssi_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 *value_cdma_rssi_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_cdma_rssi_delta:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_cdma_rssi_delta: a #guint16.
 * @error: Return location for error or %NULL.
 *
 * Set the 'CDMA RSSI Delta' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_cdma_rssi_delta (
    QmiMessageNasConfigSignalInfoV2Input *self,
    guint16 value_cdma_rssi_delta,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_get_cdma_rssi_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_cdma_rssi_threshold_list: (out)(optional)(element-type gint16)(transfer none): a placeholder for the output #GArray of #gint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA RSSI Threshold List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_get_cdma_rssi_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray **value_cdma_rssi_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_set_cdma_rssi_threshold_list:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 * @value_cdma_rssi_threshold_list: (in)(element-type gint16)(transfer none): a #GArray of #gint16 elements. A new reference to @value_cdma_rssi_threshold_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'CDMA RSSI Threshold List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_input_set_cdma_rssi_threshold_list (
    QmiMessageNasConfigSignalInfoV2Input *self,
    GArray *value_cdma_rssi_threshold_list,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_input_ref:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageNasConfigSignalInfoV2Input *qmi_message_nas_config_signal_info_v2_input_ref (QmiMessageNasConfigSignalInfoV2Input *self);

/**
 * qmi_message_nas_config_signal_info_v2_input_unref:
 * @self: a #QmiMessageNasConfigSignalInfoV2Input.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_nas_config_signal_info_v2_input_unref (QmiMessageNasConfigSignalInfoV2Input *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasConfigSignalInfoV2Input, qmi_message_nas_config_signal_info_v2_input_unref)

/**
 * qmi_message_nas_config_signal_info_v2_input_new:
 *
 * Allocates a new #QmiMessageNasConfigSignalInfoV2Input.
 *
 * Returns: the newly created #QmiMessageNasConfigSignalInfoV2Input. The returned value should be freed with qmi_message_nas_config_signal_info_v2_input_unref().
 *
 * Since: 1.32
 */
QmiMessageNasConfigSignalInfoV2Input *qmi_message_nas_config_signal_info_v2_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasConfigSignalInfoV2Output:
 *
 * The #QmiMessageNasConfigSignalInfoV2Output structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageNasConfigSignalInfoV2Output QmiMessageNasConfigSignalInfoV2Output;
GType qmi_message_nas_config_signal_info_v2_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_CONFIG_SIGNAL_INFO_V2_OUTPUT (qmi_message_nas_config_signal_info_v2_output_get_type ())


/**
 * qmi_message_nas_config_signal_info_v2_output_get_result:
 * @self: a QmiMessageNasConfigSignalInfoV2Output.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_config_signal_info_v2_output_get_result (
    QmiMessageNasConfigSignalInfoV2Output *self,
    GError **error);


/**
 * qmi_message_nas_config_signal_info_v2_output_ref:
 * @self: a #QmiMessageNasConfigSignalInfoV2Output.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageNasConfigSignalInfoV2Output *qmi_message_nas_config_signal_info_v2_output_ref (QmiMessageNasConfigSignalInfoV2Output *self);

/**
 * qmi_message_nas_config_signal_info_v2_output_unref:
 * @self: a #QmiMessageNasConfigSignalInfoV2Output.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_nas_config_signal_info_v2_output_unref (QmiMessageNasConfigSignalInfoV2Output *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasConfigSignalInfoV2Output, qmi_message_nas_config_signal_info_v2_output_unref)

/**
 * qmi_message_nas_config_signal_info_v2_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasConfigSignalInfoV2Output out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasConfigSignalInfoV2Output, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_config_signal_info_v2_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasConfigSignalInfoV2Output *qmi_message_nas_config_signal_info_v2_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Tx Rx Info */


/* --- Input -- */

/**
 * QmiMessageNasGetTxRxInfoInput:
 *
 * The #QmiMessageNasGetTxRxInfoInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageNasGetTxRxInfoInput QmiMessageNasGetTxRxInfoInput;
GType qmi_message_nas_get_tx_rx_info_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_TX_RX_INFO_INPUT (qmi_message_nas_get_tx_rx_info_input_get_type ())


/**
 * qmi_message_nas_get_tx_rx_info_input_get_radio_interface:
 * @self: a #QmiMessageNasGetTxRxInfoInput.
 * @value_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Radio Interface' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_nas_get_tx_rx_info_input_get_radio_interface (
    QmiMessageNasGetTxRxInfoInput *self,
    QmiNasRadioInterface *value_radio_interface,
    GError **error);


/**
 * qmi_message_nas_get_tx_rx_info_input_set_radio_interface:
 * @self: a #QmiMessageNasGetTxRxInfoInput.
 * @value_radio_interface: a #QmiNasRadioInterface.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Radio Interface' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_nas_get_tx_rx_info_input_set_radio_interface (
    QmiMessageNasGetTxRxInfoInput *self,
    QmiNasRadioInterface value_radio_interface,
    GError **error);


/**
 * qmi_message_nas_get_tx_rx_info_input_ref:
 * @self: a #QmiMessageNasGetTxRxInfoInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageNasGetTxRxInfoInput *qmi_message_nas_get_tx_rx_info_input_ref (QmiMessageNasGetTxRxInfoInput *self);

/**
 * qmi_message_nas_get_tx_rx_info_input_unref:
 * @self: a #QmiMessageNasGetTxRxInfoInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_nas_get_tx_rx_info_input_unref (QmiMessageNasGetTxRxInfoInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetTxRxInfoInput, qmi_message_nas_get_tx_rx_info_input_unref)

/**
 * qmi_message_nas_get_tx_rx_info_input_new:
 *
 * Allocates a new #QmiMessageNasGetTxRxInfoInput.
 *
 * Returns: the newly created #QmiMessageNasGetTxRxInfoInput. The returned value should be freed with qmi_message_nas_get_tx_rx_info_input_unref().
 *
 * Since: 1.6
 */
QmiMessageNasGetTxRxInfoInput *qmi_message_nas_get_tx_rx_info_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasGetTxRxInfoOutput:
 *
 * The #QmiMessageNasGetTxRxInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageNasGetTxRxInfoOutput QmiMessageNasGetTxRxInfoOutput;
GType qmi_message_nas_get_tx_rx_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_TX_RX_INFO_OUTPUT (qmi_message_nas_get_tx_rx_info_output_get_type ())


/**
 * qmi_message_nas_get_tx_rx_info_output_get_result:
 * @self: a QmiMessageNasGetTxRxInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_nas_get_tx_rx_info_output_get_result (
    QmiMessageNasGetTxRxInfoOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_tx_rx_info_output_get_rx_chain_0_info:
 * @self: a #QmiMessageNasGetTxRxInfoOutput.
 * @value_rx_chain_0_info_is_radio_tuned: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_rx_chain_0_info_rx_power: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_0_info_ecio: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_0_info_rscp: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_0_info_rsrp: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_0_info_phase: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Chain 0 Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_nas_get_tx_rx_info_output_get_rx_chain_0_info (
    QmiMessageNasGetTxRxInfoOutput *self,
    gboolean *value_rx_chain_0_info_is_radio_tuned,
    gint32 *value_rx_chain_0_info_rx_power,
    gint32 *value_rx_chain_0_info_ecio,
    gint32 *value_rx_chain_0_info_rscp,
    gint32 *value_rx_chain_0_info_rsrp,
    guint32 *value_rx_chain_0_info_phase,
    GError **error);


/**
 * qmi_message_nas_get_tx_rx_info_output_get_rx_chain_1_info:
 * @self: a #QmiMessageNasGetTxRxInfoOutput.
 * @value_rx_chain_1_info_is_radio_tuned: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_rx_chain_1_info_rx_power: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_1_info_ecio: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_1_info_rscp: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_1_info_rsrp: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_1_info_phase: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Chain 1 Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_nas_get_tx_rx_info_output_get_rx_chain_1_info (
    QmiMessageNasGetTxRxInfoOutput *self,
    gboolean *value_rx_chain_1_info_is_radio_tuned,
    gint32 *value_rx_chain_1_info_rx_power,
    gint32 *value_rx_chain_1_info_ecio,
    gint32 *value_rx_chain_1_info_rscp,
    gint32 *value_rx_chain_1_info_rsrp,
    guint32 *value_rx_chain_1_info_phase,
    GError **error);


/**
 * qmi_message_nas_get_tx_rx_info_output_get_tx_info:
 * @self: a #QmiMessageNasGetTxRxInfoOutput.
 * @value_tx_info_is_in_traffic: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_tx_info_tx_power: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_nas_get_tx_rx_info_output_get_tx_info (
    QmiMessageNasGetTxRxInfoOutput *self,
    gboolean *value_tx_info_is_in_traffic,
    gint32 *value_tx_info_tx_power,
    GError **error);


/**
 * qmi_message_nas_get_tx_rx_info_output_get_rx_chain_2_info:
 * @self: a #QmiMessageNasGetTxRxInfoOutput.
 * @value_rx_chain_2_info_is_radio_tuned: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_rx_chain_2_info_rx_power: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_2_info_ecio: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_2_info_rscp: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_2_info_rsrp: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_2_info_phase: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Chain 2 Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_tx_rx_info_output_get_rx_chain_2_info (
    QmiMessageNasGetTxRxInfoOutput *self,
    gboolean *value_rx_chain_2_info_is_radio_tuned,
    gint32 *value_rx_chain_2_info_rx_power,
    gint32 *value_rx_chain_2_info_ecio,
    gint32 *value_rx_chain_2_info_rscp,
    gint32 *value_rx_chain_2_info_rsrp,
    guint32 *value_rx_chain_2_info_phase,
    GError **error);


/**
 * qmi_message_nas_get_tx_rx_info_output_get_rx_chain_3_info:
 * @self: a #QmiMessageNasGetTxRxInfoOutput.
 * @value_rx_chain_3_info_is_radio_tuned: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_rx_chain_3_info_rx_power: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_3_info_ecio: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_3_info_rscp: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_3_info_rsrp: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_rx_chain_3_info_phase: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Chain 3 Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_tx_rx_info_output_get_rx_chain_3_info (
    QmiMessageNasGetTxRxInfoOutput *self,
    gboolean *value_rx_chain_3_info_is_radio_tuned,
    gint32 *value_rx_chain_3_info_rx_power,
    gint32 *value_rx_chain_3_info_ecio,
    gint32 *value_rx_chain_3_info_rscp,
    gint32 *value_rx_chain_3_info_rsrp,
    guint32 *value_rx_chain_3_info_phase,
    GError **error);


/**
 * qmi_message_nas_get_tx_rx_info_output_ref:
 * @self: a #QmiMessageNasGetTxRxInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageNasGetTxRxInfoOutput *qmi_message_nas_get_tx_rx_info_output_ref (QmiMessageNasGetTxRxInfoOutput *self);

/**
 * qmi_message_nas_get_tx_rx_info_output_unref:
 * @self: a #QmiMessageNasGetTxRxInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_nas_get_tx_rx_info_output_unref (QmiMessageNasGetTxRxInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetTxRxInfoOutput, qmi_message_nas_get_tx_rx_info_output_unref)

/**
 * qmi_message_nas_get_tx_rx_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetTxRxInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetTxRxInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_tx_rx_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetTxRxInfoOutput *qmi_message_nas_get_tx_rx_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get CDMA Position Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation:
 * @pilot_type: a #QmiNasCdmaPilotType.
 * @system_id: a #guint16.
 * @network_id: a #guint16.
 * @base_station_id: a #guint16.
 * @pilot_pn: a #guint16.
 * @pilot_strength: a #guint16.
 * @latitude: a #gint32.
 * @longitude: a #gint32.
 * @gps_time_in_milliseconds: a #guint64.
 *
 * A QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation struct.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation {
    QmiNasCdmaPilotType pilot_type;
    guint16 system_id;
    guint16 network_id;
    guint16 base_station_id;
    guint16 pilot_pn;
    guint16 pilot_strength;
    gint32 latitude;
    gint32 longitude;
    guint64 gps_time_in_milliseconds;
} QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation;

GType qmi_message_nas_get_cdma_position_info_output_cdma_position_info_basestations_basestation_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasGetCdmaPositionInfoOutput:
 *
 * The #QmiMessageNasGetCdmaPositionInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageNasGetCdmaPositionInfoOutput QmiMessageNasGetCdmaPositionInfoOutput;
GType qmi_message_nas_get_cdma_position_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_CDMA_POSITION_INFO_OUTPUT (qmi_message_nas_get_cdma_position_info_output_get_type ())


/**
 * qmi_message_nas_get_cdma_position_info_output_get_result:
 * @self: a QmiMessageNasGetCdmaPositionInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_cdma_position_info_output_get_result (
    QmiMessageNasGetCdmaPositionInfoOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_cdma_position_info_output_get_cdma_position_info: (skip)
 * @self: a #QmiMessageNasGetCdmaPositionInfoOutput.
 * @value_cdma_position_info_ui_in_idle_mode: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_cdma_position_info_basestations: (out)(optional)(element-type QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Position Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_get_cdma_position_info_output_get_cdma_position_info (
    QmiMessageNasGetCdmaPositionInfoOutput *self,
    gint8 *value_cdma_position_info_ui_in_idle_mode,
    GArray **value_cdma_position_info_basestations,
    GError **error);


/**
 * qmi_message_nas_get_cdma_position_info_output_get_cdma_position_info_gir: (rename-to qmi_message_nas_get_cdma_position_info_output_get_cdma_position_info)
 * @self: a #QmiMessageNasGetCdmaPositionInfoOutput.
 * @value_cdma_position_info_ui_in_idle_mode: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_cdma_position_info_basestations_ptr: (out)(optional)(element-type QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation)(transfer none): a placeholder for the output array of #QmiMessageNasGetCdmaPositionInfoOutputCdmaPositionInfoBasestationsBasestation elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CDMA Position Info' field from @self.
 *
 * Version of qmi_message_nas_get_cdma_position_info_output_get_cdma_position_info() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_cdma_position_info_output_get_cdma_position_info_gir (
    QmiMessageNasGetCdmaPositionInfoOutput *self,
    gint8 *value_cdma_position_info_ui_in_idle_mode,
    GPtrArray **value_cdma_position_info_basestations_ptr,
    GError **error);


/**
 * qmi_message_nas_get_cdma_position_info_output_ref:
 * @self: a #QmiMessageNasGetCdmaPositionInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageNasGetCdmaPositionInfoOutput *qmi_message_nas_get_cdma_position_info_output_ref (QmiMessageNasGetCdmaPositionInfoOutput *self);

/**
 * qmi_message_nas_get_cdma_position_info_output_unref:
 * @self: a #QmiMessageNasGetCdmaPositionInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_nas_get_cdma_position_info_output_unref (QmiMessageNasGetCdmaPositionInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetCdmaPositionInfoOutput, qmi_message_nas_get_cdma_position_info_output_unref)

/**
 * qmi_message_nas_get_cdma_position_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetCdmaPositionInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetCdmaPositionInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_cdma_position_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetCdmaPositionInfoOutput *qmi_message_nas_get_cdma_position_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Force Network Search */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasForceNetworkSearchOutput:
 *
 * The #QmiMessageNasForceNetworkSearchOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.16
 */
typedef struct _QmiMessageNasForceNetworkSearchOutput QmiMessageNasForceNetworkSearchOutput;
GType qmi_message_nas_force_network_search_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_FORCE_NETWORK_SEARCH_OUTPUT (qmi_message_nas_force_network_search_output_get_type ())


/**
 * qmi_message_nas_force_network_search_output_get_result:
 * @self: a QmiMessageNasForceNetworkSearchOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.16
 */
gboolean qmi_message_nas_force_network_search_output_get_result (
    QmiMessageNasForceNetworkSearchOutput *self,
    GError **error);


/**
 * qmi_message_nas_force_network_search_output_ref:
 * @self: a #QmiMessageNasForceNetworkSearchOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.16
 */
QmiMessageNasForceNetworkSearchOutput *qmi_message_nas_force_network_search_output_ref (QmiMessageNasForceNetworkSearchOutput *self);

/**
 * qmi_message_nas_force_network_search_output_unref:
 * @self: a #QmiMessageNasForceNetworkSearchOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.16
 */
void qmi_message_nas_force_network_search_output_unref (QmiMessageNasForceNetworkSearchOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasForceNetworkSearchOutput, qmi_message_nas_force_network_search_output_unref)

/**
 * qmi_message_nas_force_network_search_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasForceNetworkSearchOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasForceNetworkSearchOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_force_network_search_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasForceNetworkSearchOutput *qmi_message_nas_force_network_search_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get Network Time */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetNetworkTimeOutput:
 *
 * The #QmiMessageNasGetNetworkTimeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.36
 */
typedef struct _QmiMessageNasGetNetworkTimeOutput QmiMessageNasGetNetworkTimeOutput;
GType qmi_message_nas_get_network_time_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_NETWORK_TIME_OUTPUT (qmi_message_nas_get_network_time_output_get_type ())


/**
 * qmi_message_nas_get_network_time_output_get_3gpp_time:
 * @self: a #QmiMessageNasGetNetworkTimeOutput.
 * @value_3gpp_time_universal_time_year: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_3gpp_time_universal_time_month: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_3gpp_time_universal_time_day: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_3gpp_time_universal_time_hour: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_3gpp_time_universal_time_minute: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_3gpp_time_universal_time_second: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_3gpp_time_universal_time_day_of_week: (out)(optional): a placeholder for the output #QmiNasDayOfWeek, or %NULL if not required.
 * @value_3gpp_time_timezone_offset: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_3gpp_time_daylight_savings_adjustment: (out)(optional): a placeholder for the output #QmiNasDaylightSavingsAdjustment, or %NULL if not required.
 * @value_3gpp_time_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the '3GPP Time' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_nas_get_network_time_output_get_3gpp_time (
    QmiMessageNasGetNetworkTimeOutput *self,
    guint16 *value_3gpp_time_universal_time_year,
    guint8 *value_3gpp_time_universal_time_month,
    guint8 *value_3gpp_time_universal_time_day,
    guint8 *value_3gpp_time_universal_time_hour,
    guint8 *value_3gpp_time_universal_time_minute,
    guint8 *value_3gpp_time_universal_time_second,
    QmiNasDayOfWeek *value_3gpp_time_universal_time_day_of_week,
    gint8 *value_3gpp_time_timezone_offset,
    QmiNasDaylightSavingsAdjustment *value_3gpp_time_daylight_savings_adjustment,
    QmiNasRadioInterface *value_3gpp_time_radio_interface,
    GError **error);


/**
 * qmi_message_nas_get_network_time_output_get_3gpp2_time:
 * @self: a #QmiMessageNasGetNetworkTimeOutput.
 * @value_3gpp2_time_universal_time_year: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_3gpp2_time_universal_time_month: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_3gpp2_time_universal_time_day: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_3gpp2_time_universal_time_hour: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_3gpp2_time_universal_time_minute: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_3gpp2_time_universal_time_second: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_3gpp2_time_universal_time_day_of_week: (out)(optional): a placeholder for the output #QmiNasDayOfWeek, or %NULL if not required.
 * @value_3gpp2_time_timezone_offset: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_3gpp2_time_daylight_savings_adjustment: (out)(optional): a placeholder for the output #QmiNasDaylightSavingsAdjustment, or %NULL if not required.
 * @value_3gpp2_time_radio_interface: (out)(optional): a placeholder for the output #QmiNasRadioInterface, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the '3GPP2 Time' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_nas_get_network_time_output_get_3gpp2_time (
    QmiMessageNasGetNetworkTimeOutput *self,
    guint16 *value_3gpp2_time_universal_time_year,
    guint8 *value_3gpp2_time_universal_time_month,
    guint8 *value_3gpp2_time_universal_time_day,
    guint8 *value_3gpp2_time_universal_time_hour,
    guint8 *value_3gpp2_time_universal_time_minute,
    guint8 *value_3gpp2_time_universal_time_second,
    QmiNasDayOfWeek *value_3gpp2_time_universal_time_day_of_week,
    gint8 *value_3gpp2_time_timezone_offset,
    QmiNasDaylightSavingsAdjustment *value_3gpp2_time_daylight_savings_adjustment,
    QmiNasRadioInterface *value_3gpp2_time_radio_interface,
    GError **error);


/**
 * qmi_message_nas_get_network_time_output_get_result:
 * @self: a QmiMessageNasGetNetworkTimeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.36
 */
gboolean qmi_message_nas_get_network_time_output_get_result (
    QmiMessageNasGetNetworkTimeOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_network_time_output_ref:
 * @self: a #QmiMessageNasGetNetworkTimeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.36
 */
QmiMessageNasGetNetworkTimeOutput *qmi_message_nas_get_network_time_output_ref (QmiMessageNasGetNetworkTimeOutput *self);

/**
 * qmi_message_nas_get_network_time_output_unref:
 * @self: a #QmiMessageNasGetNetworkTimeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.36
 */
void qmi_message_nas_get_network_time_output_unref (QmiMessageNasGetNetworkTimeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetNetworkTimeOutput, qmi_message_nas_get_network_time_output_unref)

/**
 * qmi_message_nas_get_network_time_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetNetworkTimeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetNetworkTimeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_network_time_output_unref().
 *
 * Since: 1.36
 */
QmiMessageNasGetNetworkTimeOutput *qmi_message_nas_get_network_time_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Incremental Network Scan */


/* --- Input -- */

/**
 * QmiMessageNasIncrementalNetworkScanInput:
 *
 * The #QmiMessageNasIncrementalNetworkScanInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.38
 */
typedef struct _QmiMessageNasIncrementalNetworkScanInput QmiMessageNasIncrementalNetworkScanInput;
GType qmi_message_nas_incremental_network_scan_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_INCREMENTAL_NETWORK_SCAN_INPUT (qmi_message_nas_incremental_network_scan_input_get_type ())


/**
 * qmi_message_nas_incremental_network_scan_input_get_network_type:
 * @self: a #QmiMessageNasIncrementalNetworkScanInput.
 * @value_network_type: (out)(optional): a placeholder for the output #QmiNasNetworkScanType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_incremental_network_scan_input_get_network_type (
    QmiMessageNasIncrementalNetworkScanInput *self,
    QmiNasNetworkScanType *value_network_type,
    GError **error);


/**
 * qmi_message_nas_incremental_network_scan_input_set_network_type:
 * @self: a #QmiMessageNasIncrementalNetworkScanInput.
 * @value_network_type: a #QmiNasNetworkScanType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_nas_incremental_network_scan_input_set_network_type (
    QmiMessageNasIncrementalNetworkScanInput *self,
    QmiNasNetworkScanType value_network_type,
    GError **error);


/**
 * qmi_message_nas_incremental_network_scan_input_ref:
 * @self: a #QmiMessageNasIncrementalNetworkScanInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.38
 */
QmiMessageNasIncrementalNetworkScanInput *qmi_message_nas_incremental_network_scan_input_ref (QmiMessageNasIncrementalNetworkScanInput *self);

/**
 * qmi_message_nas_incremental_network_scan_input_unref:
 * @self: a #QmiMessageNasIncrementalNetworkScanInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.38
 */
void qmi_message_nas_incremental_network_scan_input_unref (QmiMessageNasIncrementalNetworkScanInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasIncrementalNetworkScanInput, qmi_message_nas_incremental_network_scan_input_unref)

/**
 * qmi_message_nas_incremental_network_scan_input_new:
 *
 * Allocates a new #QmiMessageNasIncrementalNetworkScanInput.
 *
 * Returns: the newly created #QmiMessageNasIncrementalNetworkScanInput. The returned value should be freed with qmi_message_nas_incremental_network_scan_input_unref().
 *
 * Since: 1.38
 */
QmiMessageNasIncrementalNetworkScanInput *qmi_message_nas_incremental_network_scan_input_new (void);

/* --- Output -- */

/**
 * QmiMessageNasIncrementalNetworkScanOutput:
 *
 * The #QmiMessageNasIncrementalNetworkScanOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.38
 */
typedef struct _QmiMessageNasIncrementalNetworkScanOutput QmiMessageNasIncrementalNetworkScanOutput;
GType qmi_message_nas_incremental_network_scan_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_INCREMENTAL_NETWORK_SCAN_OUTPUT (qmi_message_nas_incremental_network_scan_output_get_type ())


/**
 * qmi_message_nas_incremental_network_scan_output_get_result:
 * @self: a QmiMessageNasIncrementalNetworkScanOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.38
 */
gboolean qmi_message_nas_incremental_network_scan_output_get_result (
    QmiMessageNasIncrementalNetworkScanOutput *self,
    GError **error);


/**
 * qmi_message_nas_incremental_network_scan_output_ref:
 * @self: a #QmiMessageNasIncrementalNetworkScanOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.38
 */
QmiMessageNasIncrementalNetworkScanOutput *qmi_message_nas_incremental_network_scan_output_ref (QmiMessageNasIncrementalNetworkScanOutput *self);

/**
 * qmi_message_nas_incremental_network_scan_output_unref:
 * @self: a #QmiMessageNasIncrementalNetworkScanOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.38
 */
void qmi_message_nas_incremental_network_scan_output_unref (QmiMessageNasIncrementalNetworkScanOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasIncrementalNetworkScanOutput, qmi_message_nas_incremental_network_scan_output_unref)

/**
 * qmi_message_nas_incremental_network_scan_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasIncrementalNetworkScanOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasIncrementalNetworkScanOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_incremental_network_scan_output_unref().
 *
 * Since: 1.38
 */
QmiMessageNasIncrementalNetworkScanOutput *qmi_message_nas_incremental_network_scan_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get DRX */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetDrxOutput:
 *
 * The #QmiMessageNasGetDrxOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageNasGetDrxOutput QmiMessageNasGetDrxOutput;
GType qmi_message_nas_get_drx_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_DRX_OUTPUT (qmi_message_nas_get_drx_output_get_type ())


/**
 * qmi_message_nas_get_drx_output_get_result:
 * @self: a QmiMessageNasGetDrxOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_drx_output_get_result (
    QmiMessageNasGetDrxOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_drx_output_get_info:
 * @self: a #QmiMessageNasGetDrxOutput.
 * @value_info: (out)(optional): a placeholder for the output #QmiNasDrx, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_nas_get_drx_output_get_info (
    QmiMessageNasGetDrxOutput *self,
    QmiNasDrx *value_info,
    GError **error);


/**
 * qmi_message_nas_get_drx_output_ref:
 * @self: a #QmiMessageNasGetDrxOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageNasGetDrxOutput *qmi_message_nas_get_drx_output_ref (QmiMessageNasGetDrxOutput *self);

/**
 * qmi_message_nas_get_drx_output_unref:
 * @self: a #QmiMessageNasGetDrxOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_nas_get_drx_output_unref (QmiMessageNasGetDrxOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetDrxOutput, qmi_message_nas_get_drx_output_unref)

/**
 * qmi_message_nas_get_drx_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetDrxOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetDrxOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_drx_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetDrxOutput *qmi_message_nas_get_drx_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get LTE Cphy CA Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageNasGetLteCphyCaInfoOutputPhyCaAggSecondaryCellsSsc:
 * @physical_cell_id: a #guint16.
 * @rx_channel: a #guint16.
 * @dl_bandwidth: a #QmiNasDLBandwidth.
 * @lte_band: a #QmiNasActiveBand.
 * @state: a #QmiNasScellState.
 * @cell_index: a #guint8.
 *
 * A QmiMessageNasGetLteCphyCaInfoOutputPhyCaAggSecondaryCellsSsc struct.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageNasGetLteCphyCaInfoOutputPhyCaAggSecondaryCellsSsc {
    guint16 physical_cell_id;
    guint16 rx_channel;
    QmiNasDLBandwidth dl_bandwidth;
    QmiNasActiveBand lte_band;
    QmiNasScellState state;
    guint8 cell_index;
} QmiMessageNasGetLteCphyCaInfoOutputPhyCaAggSecondaryCellsSsc;

GType qmi_message_nas_get_lte_cphy_ca_info_output_phy_ca_agg_secondary_cells_ssc_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageNasGetLteCphyCaInfoOutput:
 *
 * The #QmiMessageNasGetLteCphyCaInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.16
 */
typedef struct _QmiMessageNasGetLteCphyCaInfoOutput QmiMessageNasGetLteCphyCaInfoOutput;
GType qmi_message_nas_get_lte_cphy_ca_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_LTE_CPHY_CA_INFO_OUTPUT (qmi_message_nas_get_lte_cphy_ca_info_output_get_type ())


/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_get_result:
 * @self: a QmiMessageNasGetLteCphyCaInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.16
 */
gboolean qmi_message_nas_get_lte_cphy_ca_info_output_get_result (
    QmiMessageNasGetLteCphyCaInfoOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_get_dl_bandwidth:
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 * @value_dl_bandwidth: (out)(optional): a placeholder for the output #QmiNasDLBandwidth, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'DL Bandwidth' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.16
 */
gboolean qmi_message_nas_get_lte_cphy_ca_info_output_get_dl_bandwidth (
    QmiMessageNasGetLteCphyCaInfoOutput *self,
    QmiNasDLBandwidth *value_dl_bandwidth,
    GError **error);


/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_scell_info:
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 * @value_phy_ca_agg_scell_info_physical_cell_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_phy_ca_agg_scell_info_rx_channel: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_phy_ca_agg_scell_info_dl_bandwidth: (out)(optional): a placeholder for the output #QmiNasDLBandwidth, or %NULL if not required.
 * @value_phy_ca_agg_scell_info_lte_band: (out)(optional): a placeholder for the output #QmiNasActiveBand, or %NULL if not required.
 * @value_phy_ca_agg_scell_info_state: (out)(optional): a placeholder for the output #QmiNasScellState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Phy CA Agg SCell Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.16
 */
gboolean qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_scell_info (
    QmiMessageNasGetLteCphyCaInfoOutput *self,
    guint16 *value_phy_ca_agg_scell_info_physical_cell_id,
    guint16 *value_phy_ca_agg_scell_info_rx_channel,
    QmiNasDLBandwidth *value_phy_ca_agg_scell_info_dl_bandwidth,
    QmiNasActiveBand *value_phy_ca_agg_scell_info_lte_band,
    QmiNasScellState *value_phy_ca_agg_scell_info_state,
    GError **error);


/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_pcell_info:
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 * @value_phy_ca_agg_pcell_info_physical_cell_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_phy_ca_agg_pcell_info_rx_channel: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_phy_ca_agg_pcell_info_dl_bandwidth: (out)(optional): a placeholder for the output #QmiNasDLBandwidth, or %NULL if not required.
 * @value_phy_ca_agg_pcell_info_lte_band: (out)(optional): a placeholder for the output #QmiNasActiveBand, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Phy CA Agg PCell Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.16
 */
gboolean qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_pcell_info (
    QmiMessageNasGetLteCphyCaInfoOutput *self,
    guint16 *value_phy_ca_agg_pcell_info_physical_cell_id,
    guint16 *value_phy_ca_agg_pcell_info_rx_channel,
    QmiNasDLBandwidth *value_phy_ca_agg_pcell_info_dl_bandwidth,
    QmiNasActiveBand *value_phy_ca_agg_pcell_info_lte_band,
    GError **error);


/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_get_scell_index:
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 * @value_scell_index: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'SCell index' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.16
 */
gboolean qmi_message_nas_get_lte_cphy_ca_info_output_get_scell_index (
    QmiMessageNasGetLteCphyCaInfoOutput *self,
    guint8 *value_scell_index,
    GError **error);


/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_secondary_cells: (skip)
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 * @value_phy_ca_agg_secondary_cells: (out)(optional)(element-type QmiMessageNasGetLteCphyCaInfoOutputPhyCaAggSecondaryCellsSsc)(transfer none): a placeholder for the output #GArray of #QmiMessageNasGetLteCphyCaInfoOutputPhyCaAggSecondaryCellsSsc elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Phy CA Agg Secondary Cells' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_secondary_cells (
    QmiMessageNasGetLteCphyCaInfoOutput *self,
    GArray **value_phy_ca_agg_secondary_cells,
    GError **error);


/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_secondary_cells_gir: (rename-to qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_secondary_cells)
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 * @value_phy_ca_agg_secondary_cells_ptr: (out)(optional)(element-type QmiMessageNasGetLteCphyCaInfoOutputPhyCaAggSecondaryCellsSsc)(transfer none): a placeholder for the output array of #QmiMessageNasGetLteCphyCaInfoOutputPhyCaAggSecondaryCellsSsc elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Phy CA Agg Secondary Cells' field from @self.
 *
 * Version of qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_secondary_cells() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_nas_get_lte_cphy_ca_info_output_get_phy_ca_agg_secondary_cells_gir (
    QmiMessageNasGetLteCphyCaInfoOutput *self,
    GPtrArray **value_phy_ca_agg_secondary_cells_ptr,
    GError **error);


/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_ref:
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.16
 */
QmiMessageNasGetLteCphyCaInfoOutput *qmi_message_nas_get_lte_cphy_ca_info_output_ref (QmiMessageNasGetLteCphyCaInfoOutput *self);

/**
 * qmi_message_nas_get_lte_cphy_ca_info_output_unref:
 * @self: a #QmiMessageNasGetLteCphyCaInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.16
 */
void qmi_message_nas_get_lte_cphy_ca_info_output_unref (QmiMessageNasGetLteCphyCaInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetLteCphyCaInfoOutput, qmi_message_nas_get_lte_cphy_ca_info_output_unref)

/**
 * qmi_message_nas_get_lte_cphy_ca_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetLteCphyCaInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetLteCphyCaInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_lte_cphy_ca_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasGetLteCphyCaInfoOutput *qmi_message_nas_get_lte_cphy_ca_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Get ENDC Config */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasGetEndcConfigOutput:
 *
 * The #QmiMessageNasGetEndcConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.38
 */
typedef struct _QmiMessageNasGetEndcConfigOutput QmiMessageNasGetEndcConfigOutput;
GType qmi_message_nas_get_endc_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_GET_ENDC_CONFIG_OUTPUT (qmi_message_nas_get_endc_config_output_get_type ())


/**
 * qmi_message_nas_get_endc_config_output_get_result:
 * @self: a QmiMessageNasGetEndcConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.38
 */
gboolean qmi_message_nas_get_endc_config_output_get_result (
    QmiMessageNasGetEndcConfigOutput *self,
    GError **error);


/**
 * qmi_message_nas_get_endc_config_output_get_enabled:
 * @self: a #QmiMessageNasGetEndcConfigOutput.
 * @value_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_nas_get_endc_config_output_get_enabled (
    QmiMessageNasGetEndcConfigOutput *self,
    gboolean *value_enabled,
    GError **error);


/**
 * qmi_message_nas_get_endc_config_output_get_immediate_scg_release:
 * @self: a #QmiMessageNasGetEndcConfigOutput.
 * @value_immediate_scg_release: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Immediate SCG Release' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.38
 */
gboolean qmi_message_nas_get_endc_config_output_get_immediate_scg_release (
    QmiMessageNasGetEndcConfigOutput *self,
    gboolean *value_immediate_scg_release,
    GError **error);


/**
 * qmi_message_nas_get_endc_config_output_ref:
 * @self: a #QmiMessageNasGetEndcConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.38
 */
QmiMessageNasGetEndcConfigOutput *qmi_message_nas_get_endc_config_output_ref (QmiMessageNasGetEndcConfigOutput *self);

/**
 * qmi_message_nas_get_endc_config_output_unref:
 * @self: a #QmiMessageNasGetEndcConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.38
 */
void qmi_message_nas_get_endc_config_output_unref (QmiMessageNasGetEndcConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasGetEndcConfigOutput, qmi_message_nas_get_endc_config_output_unref)

/**
 * qmi_message_nas_get_endc_config_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasGetEndcConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasGetEndcConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_endc_config_output_unref().
 *
 * Since: 1.38
 */
QmiMessageNasGetEndcConfigOutput *qmi_message_nas_get_endc_config_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message NAS Swi Get Status */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageNasSwiGetStatusOutput:
 *
 * The #QmiMessageNasSwiGetStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.24
 */
typedef struct _QmiMessageNasSwiGetStatusOutput QmiMessageNasSwiGetStatusOutput;
GType qmi_message_nas_swi_get_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_NAS_SWI_GET_STATUS_OUTPUT (qmi_message_nas_swi_get_status_output_get_type ())


/**
 * qmi_message_nas_swi_get_status_output_get_result:
 * @self: a QmiMessageNasSwiGetStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_swi_get_status_output_get_result (
    QmiMessageNasSwiGetStatusOutput *self,
    GError **error);


/**
 * qmi_message_nas_swi_get_status_output_get_common_info_v2:
 * @self: a #QmiMessageNasSwiGetStatusOutput.
 * @value_common_info_v2_temperature: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @value_common_info_v2_modem_mode: (out)(optional): a placeholder for the output #QmiNasSwiModemMode, or %NULL if not required.
 * @value_common_info_v2_system_mode: (out)(optional): a placeholder for the output #QmiNasSwiSystemMode, or %NULL if not required.
 * @value_common_info_v2_ims_registration_state: (out)(optional): a placeholder for the output #QmiNasSwiImsRegState, or %NULL if not required.
 * @value_common_info_v2_packet_service_state: (out)(optional): a placeholder for the output #QmiNasSwiPsState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Common Info v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_nas_swi_get_status_output_get_common_info_v2 (
    QmiMessageNasSwiGetStatusOutput *self,
    gint8 *value_common_info_v2_temperature,
    QmiNasSwiModemMode *value_common_info_v2_modem_mode,
    QmiNasSwiSystemMode *value_common_info_v2_system_mode,
    QmiNasSwiImsRegState *value_common_info_v2_ims_registration_state,
    QmiNasSwiPsState *value_common_info_v2_packet_service_state,
    GError **error);


/**
 * qmi_message_nas_swi_get_status_output_get_lte_info:
 * @self: a #QmiMessageNasSwiGetStatusOutput.
 * @value_lte_info_band: (out)(optional): a placeholder for the output #QmiNasActiveBand, or %NULL if not required.
 * @value_lte_info_bandwidth: (out)(optional): a placeholder for the output #QmiNasDLBandwidth, or %NULL if not required.
 * @value_lte_info_rx_channel: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_lte_info_tx_channel: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_lte_info_emm_state: (out)(optional): a placeholder for the output #QmiNasSwiEmmState, or %NULL if not required.
 * @value_lte_info_emm_sub_state: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_lte_info_emm_connection_state: (out)(optional): a placeholder for the output #QmiNasSwiEmmConnectionState, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.24
 */
gboolean qmi_message_nas_swi_get_status_output_get_lte_info (
    QmiMessageNasSwiGetStatusOutput *self,
    QmiNasActiveBand *value_lte_info_band,
    QmiNasDLBandwidth *value_lte_info_bandwidth,
    guint16 *value_lte_info_rx_channel,
    guint16 *value_lte_info_tx_channel,
    QmiNasSwiEmmState *value_lte_info_emm_state,
    guint8 *value_lte_info_emm_sub_state,
    QmiNasSwiEmmConnectionState *value_lte_info_emm_connection_state,
    GError **error);


/**
 * qmi_message_nas_swi_get_status_output_ref:
 * @self: a #QmiMessageNasSwiGetStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.24
 */
QmiMessageNasSwiGetStatusOutput *qmi_message_nas_swi_get_status_output_ref (QmiMessageNasSwiGetStatusOutput *self);

/**
 * qmi_message_nas_swi_get_status_output_unref:
 * @self: a #QmiMessageNasSwiGetStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.24
 */
void qmi_message_nas_swi_get_status_output_unref (QmiMessageNasSwiGetStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageNasSwiGetStatusOutput, qmi_message_nas_swi_get_status_output_unref)

/**
 * qmi_message_nas_swi_get_status_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageNasSwiGetStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageNasSwiGetStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_swi_get_status_output_unref().
 *
 * Since: 1.34
 */
QmiMessageNasSwiGetStatusOutput *qmi_message_nas_swi_get_status_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: NAS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_nas_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gboolean __qmi_message_nas_is_abortable (
    QmiMessage *self,
    QmiMessageContext *context);

#endif


#define HAVE_QMI_SERVICE_NAS

/*****************************************************************************/
/* CLIENT: QMI Client NAS */

#define QMI_TYPE_CLIENT_NAS            (qmi_client_nas_get_type ())
#define QMI_CLIENT_NAS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_NAS, QmiClientNas))
#define QMI_CLIENT_NAS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_NAS, QmiClientNasClass))
#define QMI_IS_CLIENT_NAS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_NAS))
#define QMI_IS_CLIENT_NAS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_NAS))
#define QMI_CLIENT_NAS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_NAS, QmiClientNasClass))

typedef struct _QmiClientNas QmiClientNas;
typedef struct _QmiClientNasClass QmiClientNasClass;

/**
 * QmiClientNas:
 *
 * #QmiClient which handles operations in the NAS service.
 *
 * The #QmiClientNas structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
struct _QmiClientNas {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientNasClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_nas_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientNas, g_object_unref)

/**
 * qmi_client_nas_reset:
 * @self: a #QmiClientNas.
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
 * You can then call qmi_client_nas_reset_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_reset (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_reset_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_reset().
 *
 * Returns: a #QmiMessageNasResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_reset_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasResetOutput *qmi_client_nas_reset_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_set_event_report:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasSetEventReportInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Event Report request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_set_event_report_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_set_event_report (
    QmiClientNas *self,
    QmiMessageNasSetEventReportInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_set_event_report_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_set_event_report().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_set_event_report().
 *
 * Returns: a #QmiMessageNasSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_set_event_report_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasSetEventReportOutput *qmi_client_nas_set_event_report_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_register_indications:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasRegisterIndicationsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Register Indications request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_register_indications_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_register_indications (
    QmiClientNas *self,
    QmiMessageNasRegisterIndicationsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_register_indications_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_register_indications().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_register_indications().
 *
 * Returns: a #QmiMessageNasRegisterIndicationsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_register_indications_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasRegisterIndicationsOutput *qmi_client_nas_register_indications_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_supported_messages:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Supported Messages request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_supported_messages_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_nas_get_supported_messages (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_supported_messages_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_supported_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_supported_messages().
 *
 * Returns: a #QmiMessageNasGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_supported_messages_output_unref().
 *
 * Since: 1.14
 */
QmiMessageNasGetSupportedMessagesOutput *qmi_client_nas_get_supported_messages_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_signal_strength:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasGetSignalStrengthInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Signal Strength request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_signal_strength_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_signal_strength (
    QmiClientNas *self,
    QmiMessageNasGetSignalStrengthInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_signal_strength_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_signal_strength().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_signal_strength().
 *
 * Returns: a #QmiMessageNasGetSignalStrengthOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_signal_strength_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetSignalStrengthOutput *qmi_client_nas_get_signal_strength_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_network_scan:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasNetworkScanInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Network Scan request to the device.
 *
 * This message is abortable. If @cancellable is cancelled or if @timeout expires,
 * an abort request will be sent to the device, and the asynchronous operation will
 * not return until the abort response is received. It is not an error if a successful
 * response is returned for the asynchronous operation even after the user has cancelled
 * the cancellable, because it may happen that the response is received before the
 * modem had a chance to run the abort.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_network_scan_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_network_scan (
    QmiClientNas *self,
    QmiMessageNasNetworkScanInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_network_scan_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_network_scan().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_network_scan().
 *
 * Returns: a #QmiMessageNasNetworkScanOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_network_scan_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasNetworkScanOutput *qmi_client_nas_network_scan_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_initiate_network_register:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasInitiateNetworkRegisterInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Initiate Network Register request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_initiate_network_register_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_initiate_network_register (
    QmiClientNas *self,
    QmiMessageNasInitiateNetworkRegisterInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_initiate_network_register_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_initiate_network_register().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_initiate_network_register().
 *
 * Returns: a #QmiMessageNasInitiateNetworkRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_initiate_network_register_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasInitiateNetworkRegisterOutput *qmi_client_nas_initiate_network_register_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_attach_detach:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasAttachDetachInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Attach Detach request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_attach_detach_finish() to get the result of the operation.
 *
 * Since: 1.20
 */
void qmi_client_nas_attach_detach (
    QmiClientNas *self,
    QmiMessageNasAttachDetachInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_attach_detach_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_attach_detach().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_attach_detach().
 *
 * Returns: a #QmiMessageNasAttachDetachOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_attach_detach_output_unref().
 *
 * Since: 1.20
 */
QmiMessageNasAttachDetachOutput *qmi_client_nas_attach_detach_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_serving_system:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Serving System request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_serving_system_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_serving_system (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_serving_system_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_serving_system().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_serving_system().
 *
 * Returns: a #QmiMessageNasGetServingSystemOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_serving_system_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetServingSystemOutput *qmi_client_nas_get_serving_system_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_home_network:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Home Network request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_home_network_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_home_network (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_home_network_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_home_network().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_home_network().
 *
 * Returns: a #QmiMessageNasGetHomeNetworkOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_home_network_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetHomeNetworkOutput *qmi_client_nas_get_home_network_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_preferred_networks:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Preferred Networks request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_preferred_networks_finish() to get the result of the operation.
 *
 * Since: 1.30
 */
void qmi_client_nas_get_preferred_networks (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_preferred_networks_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_preferred_networks().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_preferred_networks().
 *
 * Returns: a #QmiMessageNasGetPreferredNetworksOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_preferred_networks_output_unref().
 *
 * Since: 1.30
 */
QmiMessageNasGetPreferredNetworksOutput *qmi_client_nas_get_preferred_networks_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_set_preferred_networks:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasSetPreferredNetworksInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Preferred Networks request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_set_preferred_networks_finish() to get the result of the operation.
 *
 * Since: 1.30
 */
void qmi_client_nas_set_preferred_networks (
    QmiClientNas *self,
    QmiMessageNasSetPreferredNetworksInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_set_preferred_networks_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_set_preferred_networks().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_set_preferred_networks().
 *
 * Returns: a #QmiMessageNasSetPreferredNetworksOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_set_preferred_networks_output_unref().
 *
 * Since: 1.30
 */
QmiMessageNasSetPreferredNetworksOutput *qmi_client_nas_set_preferred_networks_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_set_technology_preference:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasSetTechnologyPreferenceInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Technology Preference request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_set_technology_preference_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_set_technology_preference (
    QmiClientNas *self,
    QmiMessageNasSetTechnologyPreferenceInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_set_technology_preference_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_set_technology_preference().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_set_technology_preference().
 *
 * Returns: a #QmiMessageNasSetTechnologyPreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_set_technology_preference_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasSetTechnologyPreferenceOutput *qmi_client_nas_set_technology_preference_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_technology_preference:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Technology Preference request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_technology_preference_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_technology_preference (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_technology_preference_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_technology_preference().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_technology_preference().
 *
 * Returns: a #QmiMessageNasGetTechnologyPreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_technology_preference_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetTechnologyPreferenceOutput *qmi_client_nas_get_technology_preference_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_rf_band_information:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get RF Band Information request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_rf_band_information_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_rf_band_information (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_rf_band_information_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_rf_band_information().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_rf_band_information().
 *
 * Returns: a #QmiMessageNasGetRfBandInformationOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_rf_band_information_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetRfBandInformationOutput *qmi_client_nas_get_rf_band_information_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_set_system_selection_preference:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasSetSystemSelectionPreferenceInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set System Selection Preference request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_set_system_selection_preference_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_set_system_selection_preference (
    QmiClientNas *self,
    QmiMessageNasSetSystemSelectionPreferenceInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_set_system_selection_preference_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_set_system_selection_preference().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_set_system_selection_preference().
 *
 * Returns: a #QmiMessageNasSetSystemSelectionPreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_set_system_selection_preference_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasSetSystemSelectionPreferenceOutput *qmi_client_nas_set_system_selection_preference_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_system_selection_preference:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get System Selection Preference request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_system_selection_preference_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_system_selection_preference (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_system_selection_preference_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_system_selection_preference().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_system_selection_preference().
 *
 * Returns: a #QmiMessageNasGetSystemSelectionPreferenceOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_system_selection_preference_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetSystemSelectionPreferenceOutput *qmi_client_nas_get_system_selection_preference_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_operator_name:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Operator Name request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_operator_name_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_nas_get_operator_name (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_operator_name_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_operator_name().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_operator_name().
 *
 * Returns: a #QmiMessageNasGetOperatorNameOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_operator_name_output_unref().
 *
 * Since: 1.18
 */
QmiMessageNasGetOperatorNameOutput *qmi_client_nas_get_operator_name_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_cell_location_info:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Cell Location Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_cell_location_info_finish() to get the result of the operation.
 *
 * Since: 1.10
 */
void qmi_client_nas_get_cell_location_info (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_cell_location_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_cell_location_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_cell_location_info().
 *
 * Returns: a #QmiMessageNasGetCellLocationInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_cell_location_info_output_unref().
 *
 * Since: 1.10
 */
QmiMessageNasGetCellLocationInfoOutput *qmi_client_nas_get_cell_location_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_plmn_name:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasGetPlmnNameInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get PLMN Name request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_plmn_name_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_nas_get_plmn_name (
    QmiClientNas *self,
    QmiMessageNasGetPlmnNameInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_plmn_name_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_plmn_name().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_plmn_name().
 *
 * Returns: a #QmiMessageNasGetPlmnNameOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_plmn_name_output_unref().
 *
 * Since: 1.28
 */
QmiMessageNasGetPlmnNameOutput *qmi_client_nas_get_plmn_name_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_system_info:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get System Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_system_info_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_system_info (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_system_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_system_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_system_info().
 *
 * Returns: a #QmiMessageNasGetSystemInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_system_info_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetSystemInfoOutput *qmi_client_nas_get_system_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_signal_info:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Signal Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_signal_info_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_signal_info (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_signal_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_signal_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_signal_info().
 *
 * Returns: a #QmiMessageNasGetSignalInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_signal_info_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetSignalInfoOutput *qmi_client_nas_get_signal_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_config_signal_info:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasConfigSignalInfoInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Config Signal Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_config_signal_info_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_config_signal_info (
    QmiClientNas *self,
    QmiMessageNasConfigSignalInfoInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_config_signal_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_config_signal_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_config_signal_info().
 *
 * Returns: a #QmiMessageNasConfigSignalInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_config_signal_info_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasConfigSignalInfoOutput *qmi_client_nas_config_signal_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_config_signal_info_v2:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasConfigSignalInfoV2Input.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Config Signal Info v2 request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_config_signal_info_v2_finish() to get the result of the operation.
 *
 * Since: 1.32
 */
void qmi_client_nas_config_signal_info_v2 (
    QmiClientNas *self,
    QmiMessageNasConfigSignalInfoV2Input *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_config_signal_info_v2_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_config_signal_info_v2().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_config_signal_info_v2().
 *
 * Returns: a #QmiMessageNasConfigSignalInfoV2Output, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_config_signal_info_v2_output_unref().
 *
 * Since: 1.32
 */
QmiMessageNasConfigSignalInfoV2Output *qmi_client_nas_config_signal_info_v2_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_tx_rx_info:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasGetTxRxInfoInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Tx Rx Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_tx_rx_info_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_nas_get_tx_rx_info (
    QmiClientNas *self,
    QmiMessageNasGetTxRxInfoInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_tx_rx_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_tx_rx_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_tx_rx_info().
 *
 * Returns: a #QmiMessageNasGetTxRxInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_tx_rx_info_output_unref().
 *
 * Since: 1.6
 */
QmiMessageNasGetTxRxInfoOutput *qmi_client_nas_get_tx_rx_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_cdma_position_info:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get CDMA Position Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_cdma_position_info_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_nas_get_cdma_position_info (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_cdma_position_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_cdma_position_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_cdma_position_info().
 *
 * Returns: a #QmiMessageNasGetCdmaPositionInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_cdma_position_info_output_unref().
 *
 * Since: 1.0
 */
QmiMessageNasGetCdmaPositionInfoOutput *qmi_client_nas_get_cdma_position_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_force_network_search:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Force Network Search request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_force_network_search_finish() to get the result of the operation.
 *
 * Since: 1.16
 */
void qmi_client_nas_force_network_search (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_force_network_search_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_force_network_search().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_force_network_search().
 *
 * Returns: a #QmiMessageNasForceNetworkSearchOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_force_network_search_output_unref().
 *
 * Since: 1.16
 */
QmiMessageNasForceNetworkSearchOutput *qmi_client_nas_force_network_search_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_network_time:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Network Time request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_network_time_finish() to get the result of the operation.
 *
 * Since: 1.36
 */
void qmi_client_nas_get_network_time (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_network_time_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_network_time().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_network_time().
 *
 * Returns: a #QmiMessageNasGetNetworkTimeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_network_time_output_unref().
 *
 * Since: 1.36
 */
QmiMessageNasGetNetworkTimeOutput *qmi_client_nas_get_network_time_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_incremental_network_scan:
 * @self: a #QmiClientNas.
 * @input: a #QmiMessageNasIncrementalNetworkScanInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Incremental Network Scan request to the device.
 *
 * This message is abortable. If @cancellable is cancelled or if @timeout expires,
 * an abort request will be sent to the device, and the asynchronous operation will
 * not return until the abort response is received. It is not an error if a successful
 * response is returned for the asynchronous operation even after the user has cancelled
 * the cancellable, because it may happen that the response is received before the
 * modem had a chance to run the abort.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_incremental_network_scan_finish() to get the result of the operation.
 *
 * Since: 1.38
 */
void qmi_client_nas_incremental_network_scan (
    QmiClientNas *self,
    QmiMessageNasIncrementalNetworkScanInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_incremental_network_scan_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_incremental_network_scan().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_incremental_network_scan().
 *
 * Returns: a #QmiMessageNasIncrementalNetworkScanOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_incremental_network_scan_output_unref().
 *
 * Since: 1.38
 */
QmiMessageNasIncrementalNetworkScanOutput *qmi_client_nas_incremental_network_scan_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_drx:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get DRX request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_drx_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_nas_get_drx (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_drx_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_drx().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_drx().
 *
 * Returns: a #QmiMessageNasGetDrxOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_drx_output_unref().
 *
 * Since: 1.28
 */
QmiMessageNasGetDrxOutput *qmi_client_nas_get_drx_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_lte_cphy_ca_info:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get LTE Cphy CA Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_lte_cphy_ca_info_finish() to get the result of the operation.
 *
 * Since: 1.16
 */
void qmi_client_nas_get_lte_cphy_ca_info (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_lte_cphy_ca_info_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_lte_cphy_ca_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_lte_cphy_ca_info().
 *
 * Returns: a #QmiMessageNasGetLteCphyCaInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_lte_cphy_ca_info_output_unref().
 *
 * Since: 1.16
 */
QmiMessageNasGetLteCphyCaInfoOutput *qmi_client_nas_get_lte_cphy_ca_info_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_get_endc_config:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get ENDC Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_get_endc_config_finish() to get the result of the operation.
 *
 * Since: 1.38
 */
void qmi_client_nas_get_endc_config (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_get_endc_config_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_get_endc_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_get_endc_config().
 *
 * Returns: a #QmiMessageNasGetEndcConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_get_endc_config_output_unref().
 *
 * Since: 1.38
 */
QmiMessageNasGetEndcConfigOutput *qmi_client_nas_get_endc_config_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_nas_swi_get_status:
 * @self: a #QmiClientNas.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Swi Get Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_nas_swi_get_status_finish() to get the result of the operation.
 *
 * Since: 1.24
 */
void qmi_client_nas_swi_get_status (
    QmiClientNas *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_nas_swi_get_status_finish:
 * @self: a #QmiClientNas.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_nas_swi_get_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_nas_swi_get_status().
 *
 * Returns: a #QmiMessageNasSwiGetStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_nas_swi_get_status_output_unref().
 *
 * Since: 1.24
 */
QmiMessageNasSwiGetStatusOutput *qmi_client_nas_swi_get_status_finish (
    QmiClientNas *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_NAS__ */
