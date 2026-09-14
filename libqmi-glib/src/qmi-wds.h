
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
#include "qmi-enums-wds.h"
#include "qmi-flags64-wds.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_WDS__
#define __LIBQMI_GLIB_QMI_WDS__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_WDS_RESET
#define HAVE_QMI_MESSAGE_WDS_SET_EVENT_REPORT
#define HAVE_QMI_MESSAGE_WDS_ABORT
#define HAVE_QMI_MESSAGE_WDS_INDICATION_REGISTER
#define HAVE_QMI_MESSAGE_WDS_GET_SUPPORTED_MESSAGES
#define HAVE_QMI_MESSAGE_WDS_START_NETWORK
#define HAVE_QMI_MESSAGE_WDS_STOP_NETWORK
#define HAVE_QMI_MESSAGE_WDS_GET_PACKET_SERVICE_STATUS
#define HAVE_QMI_MESSAGE_WDS_GET_CHANNEL_RATES
#define HAVE_QMI_MESSAGE_WDS_GET_PACKET_STATISTICS
#define HAVE_QMI_MESSAGE_WDS_GO_DORMANT
#define HAVE_QMI_MESSAGE_WDS_GO_ACTIVE
#define HAVE_QMI_MESSAGE_WDS_CREATE_PROFILE
#define HAVE_QMI_MESSAGE_WDS_MODIFY_PROFILE
#define HAVE_QMI_MESSAGE_WDS_DELETE_PROFILE
#define HAVE_QMI_MESSAGE_WDS_GET_PROFILE_LIST
#define HAVE_QMI_MESSAGE_WDS_GET_PROFILE_SETTINGS
#define HAVE_QMI_MESSAGE_WDS_GET_DEFAULT_SETTINGS
#define HAVE_QMI_MESSAGE_WDS_GET_CURRENT_SETTINGS
#define HAVE_QMI_MESSAGE_WDS_GET_DORMANCY_STATUS
#define HAVE_QMI_MESSAGE_WDS_GET_AUTOCONNECT_SETTINGS
#define HAVE_QMI_MESSAGE_WDS_GET_DATA_BEARER_TECHNOLOGY
#define HAVE_QMI_MESSAGE_WDS_GET_CURRENT_DATA_BEARER_TECHNOLOGY
#define HAVE_QMI_MESSAGE_WDS_GET_DEFAULT_PROFILE_NUMBER
#define HAVE_QMI_MESSAGE_WDS_SET_DEFAULT_PROFILE_NUMBER
#define HAVE_QMI_MESSAGE_WDS_SET_IP_FAMILY
#define HAVE_QMI_MESSAGE_WDS_SET_AUTOCONNECT_SETTINGS
#define HAVE_QMI_MESSAGE_WDS_GET_PDN_THROTTLE_INFO
#define HAVE_QMI_MESSAGE_WDS_GET_LTE_ATTACH_PARAMETERS
#define HAVE_QMI_MESSAGE_WDS_BIND_DATA_PORT
#define HAVE_QMI_MESSAGE_WDS_GET_MAX_LTE_ATTACH_PDN_NUMBER
#define HAVE_QMI_MESSAGE_WDS_SET_LTE_ATTACH_PDN_LIST
#define HAVE_QMI_MESSAGE_WDS_GET_LTE_ATTACH_PDN_LIST
#define HAVE_QMI_MESSAGE_WDS_BIND_MUX_DATA_PORT
#define HAVE_QMI_MESSAGE_WDS_CONFIGURE_PROFILE_EVENT_LIST
#define HAVE_QMI_MESSAGE_WDS_BIND_SUBSCRIPTION
#define HAVE_QMI_MESSAGE_WDS_GET_BIND_SUBSCRIPTION
#define HAVE_QMI_MESSAGE_WDS_SWI_CREATE_PROFILE_INDEXED
#define HAVE_QMI_INDICATION_WDS_EVENT_REPORT
#define HAVE_QMI_INDICATION_WDS_PACKET_SERVICE_STATUS
#define HAVE_QMI_INDICATION_WDS_EXTENDED_IP_CONFIG
#define HAVE_QMI_INDICATION_WDS_SET_LTE_ATTACH_PDN_LIST
#define HAVE_QMI_INDICATION_WDS_PROFILE_CHANGED

/*****************************************************************************/
/* INDICATION: Qmi Indication WDS Event Report */


/* --- Output -- */


/**
 * QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork:
 * @network_type: a #QmiWdsDataSystemNetworkType.
 * @rat_mask: a #guint32.
 * @so_mask: a #guint32.
 *
 * A QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork struct.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork {
    QmiWdsDataSystemNetworkType network_type;
    guint32 rat_mask;
    guint32 so_mask;
} QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork;

GType qmi_indication_wds_event_report_output_data_systems_networks_network_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationWdsEventReportOutput:
 *
 * The #QmiIndicationWdsEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationWdsEventReportOutput QmiIndicationWdsEventReportOutput;
GType qmi_indication_wds_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_WDS_EVENT_REPORT_OUTPUT (qmi_indication_wds_event_report_output_get_type ())


/**
 * qmi_indication_wds_event_report_output_get_extended_data_bearer_technology:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_extended_data_bearer_technology_data_bearer_technology: (out)(optional): a placeholder for the output #QmiWdsDataSystemNetworkType, or %NULL if not required.
 * @value_extended_data_bearer_technology_radio_access_technology: (out)(optional): a placeholder for the output #QmiWdsRadioAccessTechnology, or %NULL if not required.
 * @value_extended_data_bearer_technology_extended_data_bearer_technology_3gpp: (out)(optional): a placeholder for the output #QmiWdsExtendedDataBearerTechnology3gpp, or %NULL if not required.
 * @value_extended_data_bearer_technology_extended_data_bearer_technology_3gpp2: (out)(optional): a placeholder for the output #QmiWdsExtendedDataBearerTechnology3gpp2, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Data Bearer Technology' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_extended_data_bearer_technology (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataSystemNetworkType *value_extended_data_bearer_technology_data_bearer_technology,
    QmiWdsRadioAccessTechnology *value_extended_data_bearer_technology_radio_access_technology,
    QmiWdsExtendedDataBearerTechnology3gpp *value_extended_data_bearer_technology_extended_data_bearer_technology_3gpp,
    QmiWdsExtendedDataBearerTechnology3gpp2 *value_extended_data_bearer_technology_extended_data_bearer_technology_3gpp2,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_pdn_filters_removed:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_pdn_filters_removed_pdn_filter_handler: (out)(optional)(element-type guint32)(transfer none): a placeholder for the output #GArray of #guint32 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDN Filters Removed' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_pdn_filters_removed (
    QmiIndicationWdsEventReportOutput *self,
    GArray **value_pdn_filters_removed_pdn_filter_handler,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_data_call_address_family:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_data_call_address_family: (out)(optional): a placeholder for the output #QmiWdsIpFamily, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Call Address Family' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_data_call_address_family (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsIpFamily *value_data_call_address_family,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_uplink_flow_control_enabled:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_uplink_flow_control_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Uplink Flow Control Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_uplink_flow_control_enabled (
    QmiIndicationWdsEventReportOutput *self,
    gboolean *value_uplink_flow_control_enabled,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_rx_packets_dropped:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_rx_packets_dropped: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Packets Dropped' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_rx_packets_dropped (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_rx_packets_dropped,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_tx_packets_dropped:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_tx_packets_dropped: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Packets Dropped' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_tx_packets_dropped (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_tx_packets_dropped,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_data_systems: (skip)
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_data_systems_preferred_network_type: (out)(optional): a placeholder for the output #QmiWdsDataSystemNetworkType, or %NULL if not required.
 * @value_data_systems_networks: (out)(optional)(element-type QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork)(transfer none): a placeholder for the output #GArray of #QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Systems' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_data_systems (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataSystemNetworkType *value_data_systems_preferred_network_type,
    GArray **value_data_systems_networks,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_data_systems_gir: (rename-to qmi_indication_wds_event_report_output_get_data_systems)
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_data_systems_preferred_network_type: (out)(optional): a placeholder for the output #QmiWdsDataSystemNetworkType, or %NULL if not required.
 * @value_data_systems_networks_ptr: (out)(optional)(element-type QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork)(transfer none): a placeholder for the output array of #QmiIndicationWdsEventReportOutputDataSystemsNetworksNetwork elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Systems' field from @self.
 *
 * Version of qmi_indication_wds_event_report_output_get_data_systems() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_wds_event_report_output_get_data_systems_gir (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataSystemNetworkType *value_data_systems_preferred_network_type,
    GPtrArray **value_data_systems_networks_ptr,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_evdo_page_monitor_period_change:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_evdo_page_monitor_period_change_period_change: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_evdo_page_monitor_period_change_force_long_sleep: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'EVDO Page Monitor Period Change' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_evdo_page_monitor_period_change (
    QmiIndicationWdsEventReportOutput *self,
    guint8 *value_evdo_page_monitor_period_change_period_change,
    gboolean *value_evdo_page_monitor_period_change_force_long_sleep,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_data_call_type:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_data_call_type_data_call_type: (out)(optional): a placeholder for the output #QmiWdsDataCallType, or %NULL if not required.
 * @value_data_call_type_tethered_call_type: (out)(optional): a placeholder for the output #QmiWdsTetheredCallType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Call Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_data_call_type (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataCallType *value_data_call_type_data_call_type,
    QmiWdsTetheredCallType *value_data_call_type_tethered_call_type,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_preferred_data_system:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_preferred_data_system: (out)(optional): a placeholder for the output #QmiWdsDataSystem, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preferred Data System' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_preferred_data_system (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataSystem *value_preferred_data_system,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_data_call_status:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_data_call_status: (out)(optional): a placeholder for the output #QmiWdsDataCallStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Call Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_data_call_status (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataCallStatus *value_data_call_status,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_current_data_bearer_technology:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_current_data_bearer_technology_network_type: (out)(optional): a placeholder for the output #QmiWdsNetworkType, or %NULL if not required.
 * @value_current_data_bearer_technology_rat_mask: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_current_data_bearer_technology_so_mask: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Data Bearer Technology' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_current_data_bearer_technology (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsNetworkType *value_current_data_bearer_technology_network_type,
    guint32 *value_current_data_bearer_technology_rat_mask,
    guint32 *value_current_data_bearer_technology_so_mask,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_mip_status:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_mip_status: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MIP Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_mip_status (
    QmiIndicationWdsEventReportOutput *self,
    gboolean *value_mip_status,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_rx_bytes_ok:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_rx_bytes_ok: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Bytes Ok' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_rx_bytes_ok (
    QmiIndicationWdsEventReportOutput *self,
    guint64 *value_rx_bytes_ok,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_tx_bytes_ok:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_tx_bytes_ok: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Bytes Ok' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_tx_bytes_ok (
    QmiIndicationWdsEventReportOutput *self,
    guint64 *value_tx_bytes_ok,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_dormancy_status:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_dormancy_status: (out)(optional): a placeholder for the output #QmiWdsDormancyStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Dormancy Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_dormancy_status (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDormancyStatus *value_dormancy_status,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_data_bearer_technology:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_data_bearer_technology: (out)(optional): a placeholder for the output #QmiWdsDataBearerTechnology, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Bearer Technology' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_data_bearer_technology (
    QmiIndicationWdsEventReportOutput *self,
    QmiWdsDataBearerTechnology *value_data_bearer_technology,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_channel_rates:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_channel_rates_tx_rate_bps: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @value_channel_rates_rx_rate_bps: (out)(optional): a placeholder for the output #gint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Channel Rates' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_channel_rates (
    QmiIndicationWdsEventReportOutput *self,
    gint32 *value_channel_rates_tx_rate_bps,
    gint32 *value_channel_rates_rx_rate_bps,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_rx_overflows:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_rx_overflows: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Overflows' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_rx_overflows (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_rx_overflows,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_tx_overflows:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_tx_overflows: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Overflows' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_tx_overflows (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_tx_overflows,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_rx_packets_error:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_rx_packets_error: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Packets Error' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_rx_packets_error (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_rx_packets_error,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_tx_packets_error:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_tx_packets_error: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Packets Error' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_tx_packets_error (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_tx_packets_error,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_rx_packets_ok:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_rx_packets_ok: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Packets Ok' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_rx_packets_ok (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_rx_packets_ok,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_get_tx_packets_ok:
 * @self: a #QmiIndicationWdsEventReportOutput.
 * @value_tx_packets_ok: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Packets Ok' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_wds_event_report_output_get_tx_packets_ok (
    QmiIndicationWdsEventReportOutput *self,
    guint32 *value_tx_packets_ok,
    GError **error);


/**
 * qmi_indication_wds_event_report_output_ref:
 * @self: a #QmiIndicationWdsEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiIndicationWdsEventReportOutput *qmi_indication_wds_event_report_output_ref (QmiIndicationWdsEventReportOutput *self);

/**
 * qmi_indication_wds_event_report_output_unref:
 * @self: a #QmiIndicationWdsEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_indication_wds_event_report_output_unref (QmiIndicationWdsEventReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationWdsEventReportOutput, qmi_indication_wds_event_report_output_unref)

/**
 * qmi_indication_wds_event_report_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationWdsEventReportOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationWdsEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_wds_event_report_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationWdsEventReportOutput *qmi_indication_wds_event_report_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication WDS Packet Service Status */


/* --- Output -- */

/**
 * QmiIndicationWdsPacketServiceStatusOutput:
 *
 * The #QmiIndicationWdsPacketServiceStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiIndicationWdsPacketServiceStatusOutput QmiIndicationWdsPacketServiceStatusOutput;
GType qmi_indication_wds_packet_service_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_WDS_PACKET_SERVICE_STATUS_OUTPUT (qmi_indication_wds_packet_service_status_output_get_type ())


/**
 * qmi_indication_wds_packet_service_status_output_get_extended_technology_preference:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 * @value_extended_technology_preference: (out)(optional): a placeholder for the output #QmiWdsExtendedTechnologyPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Technology Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_wds_packet_service_status_output_get_extended_technology_preference (
    QmiIndicationWdsPacketServiceStatusOutput *self,
    QmiWdsExtendedTechnologyPreference *value_extended_technology_preference,
    GError **error);


/**
 * qmi_indication_wds_packet_service_status_output_get_xlat_capability:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 * @value_xlat_capability: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'XLAT Capability' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_indication_wds_packet_service_status_output_get_xlat_capability (
    QmiIndicationWdsPacketServiceStatusOutput *self,
    gboolean *value_xlat_capability,
    GError **error);


/**
 * qmi_indication_wds_packet_service_status_output_get_bearer_id:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 * @value_bearer_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Bearer ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_indication_wds_packet_service_status_output_get_bearer_id (
    QmiIndicationWdsPacketServiceStatusOutput *self,
    guint8 *value_bearer_id,
    GError **error);


/**
 * qmi_indication_wds_packet_service_status_output_get_ip_family:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 * @value_ip_family: (out)(optional): a placeholder for the output #QmiWdsIpFamily, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IP Family' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_wds_packet_service_status_output_get_ip_family (
    QmiIndicationWdsPacketServiceStatusOutput *self,
    QmiWdsIpFamily *value_ip_family,
    GError **error);


/**
 * qmi_indication_wds_packet_service_status_output_get_verbose_call_end_reason:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 * @value_verbose_call_end_reason_type: (out)(optional): a placeholder for the output #QmiWdsVerboseCallEndReasonType, or %NULL if not required.
 * @value_verbose_call_end_reason_reason: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Verbose Call End Reason' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_wds_packet_service_status_output_get_verbose_call_end_reason (
    QmiIndicationWdsPacketServiceStatusOutput *self,
    QmiWdsVerboseCallEndReasonType *value_verbose_call_end_reason_type,
    gint16 *value_verbose_call_end_reason_reason,
    GError **error);


/**
 * qmi_indication_wds_packet_service_status_output_get_call_end_reason:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 * @value_call_end_reason: (out)(optional): a placeholder for the output #QmiWdsCallEndReason, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call End Reason' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_wds_packet_service_status_output_get_call_end_reason (
    QmiIndicationWdsPacketServiceStatusOutput *self,
    QmiWdsCallEndReason *value_call_end_reason,
    GError **error);


/**
 * qmi_indication_wds_packet_service_status_output_get_connection_status:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 * @value_connection_status_status: (out)(optional): a placeholder for the output #QmiWdsConnectionStatus, or %NULL if not required.
 * @value_connection_status_reconfiguration_required: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Connection Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_indication_wds_packet_service_status_output_get_connection_status (
    QmiIndicationWdsPacketServiceStatusOutput *self,
    QmiWdsConnectionStatus *value_connection_status_status,
    gboolean *value_connection_status_reconfiguration_required,
    GError **error);


/**
 * qmi_indication_wds_packet_service_status_output_ref:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiIndicationWdsPacketServiceStatusOutput *qmi_indication_wds_packet_service_status_output_ref (QmiIndicationWdsPacketServiceStatusOutput *self);

/**
 * qmi_indication_wds_packet_service_status_output_unref:
 * @self: a #QmiIndicationWdsPacketServiceStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_indication_wds_packet_service_status_output_unref (QmiIndicationWdsPacketServiceStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationWdsPacketServiceStatusOutput, qmi_indication_wds_packet_service_status_output_unref)

/**
 * qmi_indication_wds_packet_service_status_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationWdsPacketServiceStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationWdsPacketServiceStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_wds_packet_service_status_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationWdsPacketServiceStatusOutput *qmi_indication_wds_packet_service_status_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication WDS Extended Ip Config */


/* --- Output -- */

/**
 * QmiIndicationWdsExtendedIpConfigOutput:
 *
 * The #QmiIndicationWdsExtendedIpConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiIndicationWdsExtendedIpConfigOutput QmiIndicationWdsExtendedIpConfigOutput;
GType qmi_indication_wds_extended_ip_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_WDS_EXTENDED_IP_CONFIG_OUTPUT (qmi_indication_wds_extended_ip_config_output_get_type ())


/**
 * qmi_indication_wds_extended_ip_config_output_get_changed_ip_configuration:
 * @self: a #QmiIndicationWdsExtendedIpConfigOutput.
 * @value_changed_ip_configuration: (out)(optional): a placeholder for the output #QmiWdsRequestedSettings, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Changed IP Configuration' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_wds_extended_ip_config_output_get_changed_ip_configuration (
    QmiIndicationWdsExtendedIpConfigOutput *self,
    QmiWdsRequestedSettings *value_changed_ip_configuration,
    GError **error);


/**
 * qmi_indication_wds_extended_ip_config_output_ref:
 * @self: a #QmiIndicationWdsExtendedIpConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiIndicationWdsExtendedIpConfigOutput *qmi_indication_wds_extended_ip_config_output_ref (QmiIndicationWdsExtendedIpConfigOutput *self);

/**
 * qmi_indication_wds_extended_ip_config_output_unref:
 * @self: a #QmiIndicationWdsExtendedIpConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_indication_wds_extended_ip_config_output_unref (QmiIndicationWdsExtendedIpConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationWdsExtendedIpConfigOutput, qmi_indication_wds_extended_ip_config_output_unref)

/**
 * qmi_indication_wds_extended_ip_config_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationWdsExtendedIpConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationWdsExtendedIpConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_wds_extended_ip_config_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationWdsExtendedIpConfigOutput *qmi_indication_wds_extended_ip_config_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication WDS Set LTE Attach PDN List */


/* --- Output -- */

/**
 * QmiIndicationWdsSetLteAttachPdnListOutput:
 *
 * The #QmiIndicationWdsSetLteAttachPdnListOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiIndicationWdsSetLteAttachPdnListOutput QmiIndicationWdsSetLteAttachPdnListOutput;
GType qmi_indication_wds_set_lte_attach_pdn_list_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_WDS_SET_LTE_ATTACH_PDN_LIST_OUTPUT (qmi_indication_wds_set_lte_attach_pdn_list_output_get_type ())


/**
 * qmi_indication_wds_set_lte_attach_pdn_list_output_get_action_result:
 * @self: a #QmiIndicationWdsSetLteAttachPdnListOutput.
 * @value_action_result: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Action Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_indication_wds_set_lte_attach_pdn_list_output_get_action_result (
    QmiIndicationWdsSetLteAttachPdnListOutput *self,
    gboolean *value_action_result,
    GError **error);


/**
 * qmi_indication_wds_set_lte_attach_pdn_list_output_ref:
 * @self: a #QmiIndicationWdsSetLteAttachPdnListOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiIndicationWdsSetLteAttachPdnListOutput *qmi_indication_wds_set_lte_attach_pdn_list_output_ref (QmiIndicationWdsSetLteAttachPdnListOutput *self);

/**
 * qmi_indication_wds_set_lte_attach_pdn_list_output_unref:
 * @self: a #QmiIndicationWdsSetLteAttachPdnListOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_indication_wds_set_lte_attach_pdn_list_output_unref (QmiIndicationWdsSetLteAttachPdnListOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationWdsSetLteAttachPdnListOutput, qmi_indication_wds_set_lte_attach_pdn_list_output_unref)

/**
 * qmi_indication_wds_set_lte_attach_pdn_list_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationWdsSetLteAttachPdnListOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationWdsSetLteAttachPdnListOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_wds_set_lte_attach_pdn_list_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationWdsSetLteAttachPdnListOutput *qmi_indication_wds_set_lte_attach_pdn_list_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication WDS Profile Changed */


/* --- Output -- */

/**
 * QmiIndicationWdsProfileChangedOutput:
 *
 * The #QmiIndicationWdsProfileChangedOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
typedef struct _QmiIndicationWdsProfileChangedOutput QmiIndicationWdsProfileChangedOutput;
GType qmi_indication_wds_profile_changed_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_WDS_PROFILE_CHANGED_OUTPUT (qmi_indication_wds_profile_changed_output_get_type ())


/**
 * qmi_indication_wds_profile_changed_output_get_profile_event:
 * @self: a #QmiIndicationWdsProfileChangedOutput.
 * @value_profile_event_profile_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_event_profile_index: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_profile_event_change_event: (out)(optional): a placeholder for the output #QmiWdsProfileChangeEvent, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Event' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_indication_wds_profile_changed_output_get_profile_event (
    QmiIndicationWdsProfileChangedOutput *self,
    QmiWdsProfileType *value_profile_event_profile_type,
    guint8 *value_profile_event_profile_index,
    QmiWdsProfileChangeEvent *value_profile_event_change_event,
    GError **error);


/**
 * qmi_indication_wds_profile_changed_output_ref:
 * @self: a #QmiIndicationWdsProfileChangedOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.34
 */
QmiIndicationWdsProfileChangedOutput *qmi_indication_wds_profile_changed_output_ref (QmiIndicationWdsProfileChangedOutput *self);

/**
 * qmi_indication_wds_profile_changed_output_unref:
 * @self: a #QmiIndicationWdsProfileChangedOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.34
 */
void qmi_indication_wds_profile_changed_output_unref (QmiIndicationWdsProfileChangedOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationWdsProfileChangedOutput, qmi_indication_wds_profile_changed_output_unref)

/**
 * qmi_indication_wds_profile_changed_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationWdsProfileChangedOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationWdsProfileChangedOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_wds_profile_changed_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationWdsProfileChangedOutput *qmi_indication_wds_profile_changed_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsResetOutput:
 *
 * The #QmiMessageWdsResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsResetOutput QmiMessageWdsResetOutput;
GType qmi_message_wds_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_RESET_OUTPUT (qmi_message_wds_reset_output_get_type ())


/**
 * qmi_message_wds_reset_output_get_result:
 * @self: a QmiMessageWdsResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_reset_output_get_result (
    QmiMessageWdsResetOutput *self,
    GError **error);


/**
 * qmi_message_wds_reset_output_ref:
 * @self: a #QmiMessageWdsResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsResetOutput *qmi_message_wds_reset_output_ref (QmiMessageWdsResetOutput *self);

/**
 * qmi_message_wds_reset_output_unref:
 * @self: a #QmiMessageWdsResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_reset_output_unref (QmiMessageWdsResetOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsResetOutput, qmi_message_wds_reset_output_unref)

/**
 * qmi_message_wds_reset_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsResetOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_reset_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsResetOutput *qmi_message_wds_reset_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Set Event Report */


/* --- Input -- */

/**
 * QmiMessageWdsSetEventReportInput:
 *
 * The #QmiMessageWdsSetEventReportInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsSetEventReportInput QmiMessageWdsSetEventReportInput;
GType qmi_message_wds_set_event_report_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_EVENT_REPORT_INPUT (qmi_message_wds_set_event_report_input_get_type ())


/**
 * qmi_message_wds_set_event_report_input_get_extended_data_bearer_technology:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_extended_data_bearer_technology: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Data Bearer Technology' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_extended_data_bearer_technology (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_extended_data_bearer_technology,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_extended_data_bearer_technology:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_extended_data_bearer_technology: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Extended Data Bearer Technology' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_extended_data_bearer_technology (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_extended_data_bearer_technology,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_pdn_filter_removals:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_pdn_filter_removals: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDN Filter Removals' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_pdn_filter_removals (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_pdn_filter_removals,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_pdn_filter_removals:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_pdn_filter_removals: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDN Filter Removals' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_pdn_filter_removals (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_pdn_filter_removals,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_limited_data_system_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_limited_data_system_status: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Limited Data System Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_limited_data_system_status (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_limited_data_system_status,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_limited_data_system_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_limited_data_system_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Limited Data System Status' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_limited_data_system_status (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_limited_data_system_status,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_uplink_flow_control:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_uplink_flow_control: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Uplink Flow Control' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_uplink_flow_control (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_uplink_flow_control,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_uplink_flow_control:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_uplink_flow_control: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Uplink Flow Control' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_uplink_flow_control (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_uplink_flow_control,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_data_systems:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_data_systems: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Systems' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_data_systems (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_data_systems,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_data_systems:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_data_systems: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Data Systems' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_data_systems (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_data_systems,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_evdo_pm_change:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_evdo_pm_change: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'EVDO PM Change' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_evdo_pm_change (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_evdo_pm_change,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_evdo_pm_change:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_evdo_pm_change: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'EVDO PM Change' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_evdo_pm_change (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_evdo_pm_change,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_preferred_data_system:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_preferred_data_system: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preferred Data System' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_preferred_data_system (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_preferred_data_system,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_preferred_data_system:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_preferred_data_system: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Preferred Data System' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_preferred_data_system (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_preferred_data_system,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_data_call_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_data_call_status: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Call Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_data_call_status (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_data_call_status,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_data_call_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_data_call_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Data Call Status' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_data_call_status (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_data_call_status,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_current_data_bearer_technology:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_current_data_bearer_technology: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Data Bearer Technology' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_current_data_bearer_technology (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_current_data_bearer_technology,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_current_data_bearer_technology:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_current_data_bearer_technology: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Current Data Bearer Technology' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_current_data_bearer_technology (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_current_data_bearer_technology,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_mip_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_mip_status: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MIP Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_mip_status (
    QmiMessageWdsSetEventReportInput *self,
    guint8 *value_mip_status,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_mip_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_mip_status: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'MIP Status' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_mip_status (
    QmiMessageWdsSetEventReportInput *self,
    guint8 value_mip_status,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_dormancy_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_dormancy_status: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Dormancy Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_dormancy_status (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_dormancy_status,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_dormancy_status:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_dormancy_status: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Dormancy Status' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_dormancy_status (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_dormancy_status,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_data_bearer_technology:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_data_bearer_technology: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Bearer Technology' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_data_bearer_technology (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_data_bearer_technology,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_data_bearer_technology:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_data_bearer_technology: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Data Bearer Technology' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_data_bearer_technology (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_data_bearer_technology,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_transfer_statistics:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_transfer_statistics_interval_seconds: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @value_transfer_statistics_indicators: (out)(optional): a placeholder for the output #QmiWdsSetEventReportTransferStatistics, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Transfer Statistics' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_transfer_statistics (
    QmiMessageWdsSetEventReportInput *self,
    guint8 *value_transfer_statistics_interval_seconds,
    QmiWdsSetEventReportTransferStatistics *value_transfer_statistics_indicators,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_transfer_statistics:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_transfer_statistics_interval_seconds: a #guint8.
 * @value_transfer_statistics_indicators: a #QmiWdsSetEventReportTransferStatistics.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Transfer Statistics' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_transfer_statistics (
    QmiMessageWdsSetEventReportInput *self,
    guint8 value_transfer_statistics_interval_seconds,
    QmiWdsSetEventReportTransferStatistics value_transfer_statistics_indicators,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_get_channel_rate:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_channel_rate: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Channel Rate' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_get_channel_rate (
    QmiMessageWdsSetEventReportInput *self,
    gboolean *value_channel_rate,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_set_channel_rate:
 * @self: a #QmiMessageWdsSetEventReportInput.
 * @value_channel_rate: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Channel Rate' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_input_set_channel_rate (
    QmiMessageWdsSetEventReportInput *self,
    gboolean value_channel_rate,
    GError **error);


/**
 * qmi_message_wds_set_event_report_input_ref:
 * @self: a #QmiMessageWdsSetEventReportInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsSetEventReportInput *qmi_message_wds_set_event_report_input_ref (QmiMessageWdsSetEventReportInput *self);

/**
 * qmi_message_wds_set_event_report_input_unref:
 * @self: a #QmiMessageWdsSetEventReportInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_set_event_report_input_unref (QmiMessageWdsSetEventReportInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsSetEventReportInput, qmi_message_wds_set_event_report_input_unref)

/**
 * qmi_message_wds_set_event_report_input_new:
 *
 * Allocates a new #QmiMessageWdsSetEventReportInput.
 *
 * Returns: the newly created #QmiMessageWdsSetEventReportInput. The returned value should be freed with qmi_message_wds_set_event_report_input_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsSetEventReportInput *qmi_message_wds_set_event_report_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsSetEventReportOutput:
 *
 * The #QmiMessageWdsSetEventReportOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsSetEventReportOutput QmiMessageWdsSetEventReportOutput;
GType qmi_message_wds_set_event_report_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_EVENT_REPORT_OUTPUT (qmi_message_wds_set_event_report_output_get_type ())


/**
 * qmi_message_wds_set_event_report_output_get_result:
 * @self: a QmiMessageWdsSetEventReportOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_set_event_report_output_get_result (
    QmiMessageWdsSetEventReportOutput *self,
    GError **error);


/**
 * qmi_message_wds_set_event_report_output_ref:
 * @self: a #QmiMessageWdsSetEventReportOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsSetEventReportOutput *qmi_message_wds_set_event_report_output_ref (QmiMessageWdsSetEventReportOutput *self);

/**
 * qmi_message_wds_set_event_report_output_unref:
 * @self: a #QmiMessageWdsSetEventReportOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_set_event_report_output_unref (QmiMessageWdsSetEventReportOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsSetEventReportOutput, qmi_message_wds_set_event_report_output_unref)

/**
 * qmi_message_wds_set_event_report_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsSetEventReportOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_event_report_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsSetEventReportOutput *qmi_message_wds_set_event_report_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Abort */


/* --- Input -- */

/* --- Output -- */

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Indication Register */


/* --- Input -- */

/**
 * QmiMessageWdsIndicationRegisterInput:
 *
 * The #QmiMessageWdsIndicationRegisterInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageWdsIndicationRegisterInput QmiMessageWdsIndicationRegisterInput;
GType qmi_message_wds_indication_register_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_INDICATION_REGISTER_INPUT (qmi_message_wds_indication_register_input_get_type ())


/**
 * qmi_message_wds_indication_register_input_get_report_profile_changes:
 * @self: a #QmiMessageWdsIndicationRegisterInput.
 * @value_report_profile_changes: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Report Profile Changes' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_wds_indication_register_input_get_report_profile_changes (
    QmiMessageWdsIndicationRegisterInput *self,
    gboolean *value_report_profile_changes,
    GError **error);


/**
 * qmi_message_wds_indication_register_input_set_report_profile_changes:
 * @self: a #QmiMessageWdsIndicationRegisterInput.
 * @value_report_profile_changes: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Report Profile Changes' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_wds_indication_register_input_set_report_profile_changes (
    QmiMessageWdsIndicationRegisterInput *self,
    gboolean value_report_profile_changes,
    GError **error);


/**
 * qmi_message_wds_indication_register_input_get_report_extended_ip_configuration_change:
 * @self: a #QmiMessageWdsIndicationRegisterInput.
 * @value_report_extended_ip_configuration_change: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Report Extended IP Configuration Change' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_wds_indication_register_input_get_report_extended_ip_configuration_change (
    QmiMessageWdsIndicationRegisterInput *self,
    gboolean *value_report_extended_ip_configuration_change,
    GError **error);


/**
 * qmi_message_wds_indication_register_input_set_report_extended_ip_configuration_change:
 * @self: a #QmiMessageWdsIndicationRegisterInput.
 * @value_report_extended_ip_configuration_change: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Report Extended IP Configuration Change' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_wds_indication_register_input_set_report_extended_ip_configuration_change (
    QmiMessageWdsIndicationRegisterInput *self,
    gboolean value_report_extended_ip_configuration_change,
    GError **error);


/**
 * qmi_message_wds_indication_register_input_ref:
 * @self: a #QmiMessageWdsIndicationRegisterInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageWdsIndicationRegisterInput *qmi_message_wds_indication_register_input_ref (QmiMessageWdsIndicationRegisterInput *self);

/**
 * qmi_message_wds_indication_register_input_unref:
 * @self: a #QmiMessageWdsIndicationRegisterInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_wds_indication_register_input_unref (QmiMessageWdsIndicationRegisterInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsIndicationRegisterInput, qmi_message_wds_indication_register_input_unref)

/**
 * qmi_message_wds_indication_register_input_new:
 *
 * Allocates a new #QmiMessageWdsIndicationRegisterInput.
 *
 * Returns: the newly created #QmiMessageWdsIndicationRegisterInput. The returned value should be freed with qmi_message_wds_indication_register_input_unref().
 *
 * Since: 1.32
 */
QmiMessageWdsIndicationRegisterInput *qmi_message_wds_indication_register_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsIndicationRegisterOutput:
 *
 * The #QmiMessageWdsIndicationRegisterOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageWdsIndicationRegisterOutput QmiMessageWdsIndicationRegisterOutput;
GType qmi_message_wds_indication_register_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_INDICATION_REGISTER_OUTPUT (qmi_message_wds_indication_register_output_get_type ())


/**
 * qmi_message_wds_indication_register_output_get_result:
 * @self: a QmiMessageWdsIndicationRegisterOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.32
 */
gboolean qmi_message_wds_indication_register_output_get_result (
    QmiMessageWdsIndicationRegisterOutput *self,
    GError **error);


/**
 * qmi_message_wds_indication_register_output_ref:
 * @self: a #QmiMessageWdsIndicationRegisterOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageWdsIndicationRegisterOutput *qmi_message_wds_indication_register_output_ref (QmiMessageWdsIndicationRegisterOutput *self);

/**
 * qmi_message_wds_indication_register_output_unref:
 * @self: a #QmiMessageWdsIndicationRegisterOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_wds_indication_register_output_unref (QmiMessageWdsIndicationRegisterOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsIndicationRegisterOutput, qmi_message_wds_indication_register_output_unref)

/**
 * qmi_message_wds_indication_register_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsIndicationRegisterOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsIndicationRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_indication_register_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsIndicationRegisterOutput *qmi_message_wds_indication_register_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Supported Messages */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetSupportedMessagesOutput:
 *
 * The #QmiMessageWdsGetSupportedMessagesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsGetSupportedMessagesOutput QmiMessageWdsGetSupportedMessagesOutput;
GType qmi_message_wds_get_supported_messages_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_SUPPORTED_MESSAGES_OUTPUT (qmi_message_wds_get_supported_messages_output_get_type ())


/**
 * qmi_message_wds_get_supported_messages_output_get_result:
 * @self: a QmiMessageWdsGetSupportedMessagesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_supported_messages_output_get_result (
    QmiMessageWdsGetSupportedMessagesOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_supported_messages_output_get_list:
 * @self: a #QmiMessageWdsGetSupportedMessagesOutput.
 * @value_list: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_supported_messages_output_get_list (
    QmiMessageWdsGetSupportedMessagesOutput *self,
    GArray **value_list,
    GError **error);


/**
 * qmi_message_wds_get_supported_messages_output_ref:
 * @self: a #QmiMessageWdsGetSupportedMessagesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsGetSupportedMessagesOutput *qmi_message_wds_get_supported_messages_output_ref (QmiMessageWdsGetSupportedMessagesOutput *self);

/**
 * qmi_message_wds_get_supported_messages_output_unref:
 * @self: a #QmiMessageWdsGetSupportedMessagesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_get_supported_messages_output_unref (QmiMessageWdsGetSupportedMessagesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetSupportedMessagesOutput, qmi_message_wds_get_supported_messages_output_unref)

/**
 * qmi_message_wds_get_supported_messages_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetSupportedMessagesOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_supported_messages_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetSupportedMessagesOutput *qmi_message_wds_get_supported_messages_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Start Network */


/* --- Input -- */

/**
 * QmiMessageWdsStartNetworkInput:
 *
 * The #QmiMessageWdsStartNetworkInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsStartNetworkInput QmiMessageWdsStartNetworkInput;
GType qmi_message_wds_start_network_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_START_NETWORK_INPUT (qmi_message_wds_start_network_input_get_type ())


/**
 * qmi_message_wds_start_network_input_get_call_type:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_call_type: (out)(optional): a placeholder for the output #QmiWdsCallType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_call_type (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsCallType *value_call_type,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_call_type:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_call_type: a #QmiWdsCallType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Call Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_call_type (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsCallType value_call_type,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_extended_technology_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_extended_technology_preference: (out)(optional): a placeholder for the output #QmiWdsExtendedTechnologyPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Technology Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_extended_technology_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsExtendedTechnologyPreference *value_extended_technology_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_extended_technology_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_extended_technology_preference: a #QmiWdsExtendedTechnologyPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Extended Technology Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_extended_technology_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsExtendedTechnologyPreference value_extended_technology_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_enable_autoconnect:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_enable_autoconnect: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Enable Autoconnect' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_enable_autoconnect (
    QmiMessageWdsStartNetworkInput *self,
    gboolean *value_enable_autoconnect,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_enable_autoconnect:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_enable_autoconnect: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Enable Autoconnect' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_enable_autoconnect (
    QmiMessageWdsStartNetworkInput *self,
    gboolean value_enable_autoconnect,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_profile_index_3gpp2:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_profile_index_3gpp2: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Index 3GPP2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_profile_index_3gpp2 (
    QmiMessageWdsStartNetworkInput *self,
    guint8 *value_profile_index_3gpp2,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_profile_index_3gpp2:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_profile_index_3gpp2: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Index 3GPP2' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_profile_index_3gpp2 (
    QmiMessageWdsStartNetworkInput *self,
    guint8 value_profile_index_3gpp2,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_profile_index_3gpp:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_profile_index_3gpp: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Index 3GPP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_profile_index_3gpp (
    QmiMessageWdsStartNetworkInput *self,
    guint8 *value_profile_index_3gpp,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_profile_index_3gpp:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_profile_index_3gpp: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Index 3GPP' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_profile_index_3gpp (
    QmiMessageWdsStartNetworkInput *self,
    guint8 value_profile_index_3gpp,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_technology_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_technology_preference: (out)(optional): a placeholder for the output #QmiWdsTechnologyPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Technology Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_technology_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsTechnologyPreference *value_technology_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_technology_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_technology_preference: a #QmiWdsTechnologyPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Technology Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_technology_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsTechnologyPreference value_technology_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_ip_family_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_ip_family_preference: (out)(optional): a placeholder for the output #QmiWdsIpFamily, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IP Family Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_ip_family_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsIpFamily *value_ip_family_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_ip_family_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_ip_family_preference: a #QmiWdsIpFamily.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IP Family Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_ip_family_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsIpFamily value_ip_family_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_password:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_password: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Password' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_password (
    QmiMessageWdsStartNetworkInput *self,
    const gchar **value_password,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_password:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_password: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Password' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_password (
    QmiMessageWdsStartNetworkInput *self,
    const gchar *value_password,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_username:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_username: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_username (
    QmiMessageWdsStartNetworkInput *self,
    const gchar **value_username,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_username:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_username: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Username' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_username (
    QmiMessageWdsStartNetworkInput *self,
    const gchar *value_username,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_authentication_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_authentication_preference: (out)(optional): a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_authentication_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsAuthentication *value_authentication_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_authentication_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_authentication_preference: a #QmiWdsAuthentication.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Authentication Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_authentication_preference (
    QmiMessageWdsStartNetworkInput *self,
    QmiWdsAuthentication value_authentication_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_ipv4_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_ipv4_address_preference: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_ipv4_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 *value_ipv4_address_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_ipv4_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_ipv4_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv4 Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_ipv4_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 value_ipv4_address_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_apn:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_apn: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_apn (
    QmiMessageWdsStartNetworkInput *self,
    const gchar **value_apn,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_apn:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_apn: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_apn (
    QmiMessageWdsStartNetworkInput *self,
    const gchar *value_apn,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_secondary_nbns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_secondary_nbns_address_preference: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary NBNS Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_secondary_nbns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 *value_secondary_nbns_address_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_secondary_nbns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_secondary_nbns_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Secondary NBNS Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_secondary_nbns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 value_secondary_nbns_address_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_primary_nbns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_primary_nbns_address_preference: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary NBNS Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_primary_nbns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 *value_primary_nbns_address_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_primary_nbns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_primary_nbns_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Primary NBNS Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_primary_nbns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 value_primary_nbns_address_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_secondary_dns_address_preference: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary DNS Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_secondary_dns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 *value_secondary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_secondary_dns_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Secondary DNS Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_secondary_dns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 value_secondary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_get_primary_dns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_primary_dns_address_preference: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary DNS Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_get_primary_dns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 *value_primary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_set_primary_dns_address_preference:
 * @self: a #QmiMessageWdsStartNetworkInput.
 * @value_primary_dns_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Primary DNS Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_input_set_primary_dns_address_preference (
    QmiMessageWdsStartNetworkInput *self,
    guint32 value_primary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_start_network_input_ref:
 * @self: a #QmiMessageWdsStartNetworkInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsStartNetworkInput *qmi_message_wds_start_network_input_ref (QmiMessageWdsStartNetworkInput *self);

/**
 * qmi_message_wds_start_network_input_unref:
 * @self: a #QmiMessageWdsStartNetworkInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_start_network_input_unref (QmiMessageWdsStartNetworkInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsStartNetworkInput, qmi_message_wds_start_network_input_unref)

/**
 * qmi_message_wds_start_network_input_new:
 *
 * Allocates a new #QmiMessageWdsStartNetworkInput.
 *
 * Returns: the newly created #QmiMessageWdsStartNetworkInput. The returned value should be freed with qmi_message_wds_start_network_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsStartNetworkInput *qmi_message_wds_start_network_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsStartNetworkOutput:
 *
 * The #QmiMessageWdsStartNetworkOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsStartNetworkOutput QmiMessageWdsStartNetworkOutput;
GType qmi_message_wds_start_network_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_START_NETWORK_OUTPUT (qmi_message_wds_start_network_output_get_type ())


/**
 * qmi_message_wds_start_network_output_get_result:
 * @self: a QmiMessageWdsStartNetworkOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_output_get_result (
    QmiMessageWdsStartNetworkOutput *self,
    GError **error);


/**
 * qmi_message_wds_start_network_output_get_packet_data_handle:
 * @self: a #QmiMessageWdsStartNetworkOutput.
 * @value_packet_data_handle: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Packet Data Handle' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_output_get_packet_data_handle (
    QmiMessageWdsStartNetworkOutput *self,
    guint32 *value_packet_data_handle,
    GError **error);


/**
 * qmi_message_wds_start_network_output_get_call_end_reason:
 * @self: a #QmiMessageWdsStartNetworkOutput.
 * @value_call_end_reason: (out)(optional): a placeholder for the output #QmiWdsCallEndReason, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Call End Reason' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_output_get_call_end_reason (
    QmiMessageWdsStartNetworkOutput *self,
    QmiWdsCallEndReason *value_call_end_reason,
    GError **error);


/**
 * qmi_message_wds_start_network_output_get_verbose_call_end_reason:
 * @self: a #QmiMessageWdsStartNetworkOutput.
 * @value_verbose_call_end_reason_type: (out)(optional): a placeholder for the output #QmiWdsVerboseCallEndReasonType, or %NULL if not required.
 * @value_verbose_call_end_reason_reason: (out)(optional): a placeholder for the output #gint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Verbose Call End Reason' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_start_network_output_get_verbose_call_end_reason (
    QmiMessageWdsStartNetworkOutput *self,
    QmiWdsVerboseCallEndReasonType *value_verbose_call_end_reason_type,
    gint16 *value_verbose_call_end_reason_reason,
    GError **error);


/**
 * qmi_message_wds_start_network_output_ref:
 * @self: a #QmiMessageWdsStartNetworkOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsStartNetworkOutput *qmi_message_wds_start_network_output_ref (QmiMessageWdsStartNetworkOutput *self);

/**
 * qmi_message_wds_start_network_output_unref:
 * @self: a #QmiMessageWdsStartNetworkOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_start_network_output_unref (QmiMessageWdsStartNetworkOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsStartNetworkOutput, qmi_message_wds_start_network_output_unref)

/**
 * qmi_message_wds_start_network_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsStartNetworkOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsStartNetworkOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_start_network_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsStartNetworkOutput *qmi_message_wds_start_network_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Stop Network */


/* --- Input -- */

/**
 * QmiMessageWdsStopNetworkInput:
 *
 * The #QmiMessageWdsStopNetworkInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsStopNetworkInput QmiMessageWdsStopNetworkInput;
GType qmi_message_wds_stop_network_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_STOP_NETWORK_INPUT (qmi_message_wds_stop_network_input_get_type ())


/**
 * qmi_message_wds_stop_network_input_get_disable_autoconnect:
 * @self: a #QmiMessageWdsStopNetworkInput.
 * @value_disable_autoconnect: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Disable Autoconnect' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_stop_network_input_get_disable_autoconnect (
    QmiMessageWdsStopNetworkInput *self,
    gboolean *value_disable_autoconnect,
    GError **error);


/**
 * qmi_message_wds_stop_network_input_set_disable_autoconnect:
 * @self: a #QmiMessageWdsStopNetworkInput.
 * @value_disable_autoconnect: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Disable Autoconnect' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_stop_network_input_set_disable_autoconnect (
    QmiMessageWdsStopNetworkInput *self,
    gboolean value_disable_autoconnect,
    GError **error);


/**
 * qmi_message_wds_stop_network_input_get_packet_data_handle:
 * @self: a #QmiMessageWdsStopNetworkInput.
 * @value_packet_data_handle: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Packet Data Handle' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_stop_network_input_get_packet_data_handle (
    QmiMessageWdsStopNetworkInput *self,
    guint32 *value_packet_data_handle,
    GError **error);


/**
 * qmi_message_wds_stop_network_input_set_packet_data_handle:
 * @self: a #QmiMessageWdsStopNetworkInput.
 * @value_packet_data_handle: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Packet Data Handle' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_stop_network_input_set_packet_data_handle (
    QmiMessageWdsStopNetworkInput *self,
    guint32 value_packet_data_handle,
    GError **error);


/**
 * qmi_message_wds_stop_network_input_ref:
 * @self: a #QmiMessageWdsStopNetworkInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsStopNetworkInput *qmi_message_wds_stop_network_input_ref (QmiMessageWdsStopNetworkInput *self);

/**
 * qmi_message_wds_stop_network_input_unref:
 * @self: a #QmiMessageWdsStopNetworkInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_stop_network_input_unref (QmiMessageWdsStopNetworkInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsStopNetworkInput, qmi_message_wds_stop_network_input_unref)

/**
 * qmi_message_wds_stop_network_input_new:
 *
 * Allocates a new #QmiMessageWdsStopNetworkInput.
 *
 * Returns: the newly created #QmiMessageWdsStopNetworkInput. The returned value should be freed with qmi_message_wds_stop_network_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsStopNetworkInput *qmi_message_wds_stop_network_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsStopNetworkOutput:
 *
 * The #QmiMessageWdsStopNetworkOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsStopNetworkOutput QmiMessageWdsStopNetworkOutput;
GType qmi_message_wds_stop_network_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_STOP_NETWORK_OUTPUT (qmi_message_wds_stop_network_output_get_type ())


/**
 * qmi_message_wds_stop_network_output_get_result:
 * @self: a QmiMessageWdsStopNetworkOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_stop_network_output_get_result (
    QmiMessageWdsStopNetworkOutput *self,
    GError **error);


/**
 * qmi_message_wds_stop_network_output_ref:
 * @self: a #QmiMessageWdsStopNetworkOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsStopNetworkOutput *qmi_message_wds_stop_network_output_ref (QmiMessageWdsStopNetworkOutput *self);

/**
 * qmi_message_wds_stop_network_output_unref:
 * @self: a #QmiMessageWdsStopNetworkOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_stop_network_output_unref (QmiMessageWdsStopNetworkOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsStopNetworkOutput, qmi_message_wds_stop_network_output_unref)

/**
 * qmi_message_wds_stop_network_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsStopNetworkOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsStopNetworkOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_stop_network_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsStopNetworkOutput *qmi_message_wds_stop_network_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Packet Service Status */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetPacketServiceStatusOutput:
 *
 * The #QmiMessageWdsGetPacketServiceStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsGetPacketServiceStatusOutput QmiMessageWdsGetPacketServiceStatusOutput;
GType qmi_message_wds_get_packet_service_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PACKET_SERVICE_STATUS_OUTPUT (qmi_message_wds_get_packet_service_status_output_get_type ())


/**
 * qmi_message_wds_get_packet_service_status_output_get_result:
 * @self: a QmiMessageWdsGetPacketServiceStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_packet_service_status_output_get_result (
    QmiMessageWdsGetPacketServiceStatusOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_packet_service_status_output_get_connection_status:
 * @self: a #QmiMessageWdsGetPacketServiceStatusOutput.
 * @value_connection_status: (out)(optional): a placeholder for the output #QmiWdsConnectionStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Connection Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_packet_service_status_output_get_connection_status (
    QmiMessageWdsGetPacketServiceStatusOutput *self,
    QmiWdsConnectionStatus *value_connection_status,
    GError **error);


/**
 * qmi_message_wds_get_packet_service_status_output_ref:
 * @self: a #QmiMessageWdsGetPacketServiceStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsGetPacketServiceStatusOutput *qmi_message_wds_get_packet_service_status_output_ref (QmiMessageWdsGetPacketServiceStatusOutput *self);

/**
 * qmi_message_wds_get_packet_service_status_output_unref:
 * @self: a #QmiMessageWdsGetPacketServiceStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_get_packet_service_status_output_unref (QmiMessageWdsGetPacketServiceStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetPacketServiceStatusOutput, qmi_message_wds_get_packet_service_status_output_unref)

/**
 * qmi_message_wds_get_packet_service_status_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetPacketServiceStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetPacketServiceStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_packet_service_status_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetPacketServiceStatusOutput *qmi_message_wds_get_packet_service_status_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Channel Rates */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetChannelRatesOutput:
 *
 * The #QmiMessageWdsGetChannelRatesOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.20
 */
typedef struct _QmiMessageWdsGetChannelRatesOutput QmiMessageWdsGetChannelRatesOutput;
GType qmi_message_wds_get_channel_rates_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_CHANNEL_RATES_OUTPUT (qmi_message_wds_get_channel_rates_output_get_type ())


/**
 * qmi_message_wds_get_channel_rates_output_get_channel_rates:
 * @self: a #QmiMessageWdsGetChannelRatesOutput.
 * @value_channel_rates_channel_tx_rate_bps: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_channel_rates_channel_rx_rate_bps: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_channel_rates_max_channel_tx_rate_bps: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_channel_rates_max_channel_rx_rate_bps: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Channel Rates' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_channel_rates_output_get_channel_rates (
    QmiMessageWdsGetChannelRatesOutput *self,
    guint32 *value_channel_rates_channel_tx_rate_bps,
    guint32 *value_channel_rates_channel_rx_rate_bps,
    guint32 *value_channel_rates_max_channel_tx_rate_bps,
    guint32 *value_channel_rates_max_channel_rx_rate_bps,
    GError **error);


/**
 * qmi_message_wds_get_channel_rates_output_get_result:
 * @self: a QmiMessageWdsGetChannelRatesOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.20
 */
gboolean qmi_message_wds_get_channel_rates_output_get_result (
    QmiMessageWdsGetChannelRatesOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_channel_rates_output_ref:
 * @self: a #QmiMessageWdsGetChannelRatesOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.20
 */
QmiMessageWdsGetChannelRatesOutput *qmi_message_wds_get_channel_rates_output_ref (QmiMessageWdsGetChannelRatesOutput *self);

/**
 * qmi_message_wds_get_channel_rates_output_unref:
 * @self: a #QmiMessageWdsGetChannelRatesOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.20
 */
void qmi_message_wds_get_channel_rates_output_unref (QmiMessageWdsGetChannelRatesOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetChannelRatesOutput, qmi_message_wds_get_channel_rates_output_unref)

/**
 * qmi_message_wds_get_channel_rates_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetChannelRatesOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetChannelRatesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_channel_rates_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetChannelRatesOutput *qmi_message_wds_get_channel_rates_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Packet Statistics */


/* --- Input -- */

/**
 * QmiMessageWdsGetPacketStatisticsInput:
 *
 * The #QmiMessageWdsGetPacketStatisticsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageWdsGetPacketStatisticsInput QmiMessageWdsGetPacketStatisticsInput;
GType qmi_message_wds_get_packet_statistics_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PACKET_STATISTICS_INPUT (qmi_message_wds_get_packet_statistics_input_get_type ())


/**
 * qmi_message_wds_get_packet_statistics_input_get_mask:
 * @self: a #QmiMessageWdsGetPacketStatisticsInput.
 * @value_mask: (out)(optional): a placeholder for the output #QmiWdsPacketStatisticsMaskFlag, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_input_get_mask (
    QmiMessageWdsGetPacketStatisticsInput *self,
    QmiWdsPacketStatisticsMaskFlag *value_mask,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_input_set_mask:
 * @self: a #QmiMessageWdsGetPacketStatisticsInput.
 * @value_mask: a #QmiWdsPacketStatisticsMaskFlag.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Mask' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_input_set_mask (
    QmiMessageWdsGetPacketStatisticsInput *self,
    QmiWdsPacketStatisticsMaskFlag value_mask,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_input_ref:
 * @self: a #QmiMessageWdsGetPacketStatisticsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageWdsGetPacketStatisticsInput *qmi_message_wds_get_packet_statistics_input_ref (QmiMessageWdsGetPacketStatisticsInput *self);

/**
 * qmi_message_wds_get_packet_statistics_input_unref:
 * @self: a #QmiMessageWdsGetPacketStatisticsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_wds_get_packet_statistics_input_unref (QmiMessageWdsGetPacketStatisticsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetPacketStatisticsInput, qmi_message_wds_get_packet_statistics_input_unref)

/**
 * qmi_message_wds_get_packet_statistics_input_new:
 *
 * Allocates a new #QmiMessageWdsGetPacketStatisticsInput.
 *
 * Returns: the newly created #QmiMessageWdsGetPacketStatisticsInput. The returned value should be freed with qmi_message_wds_get_packet_statistics_input_unref().
 *
 * Since: 1.6
 */
QmiMessageWdsGetPacketStatisticsInput *qmi_message_wds_get_packet_statistics_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsGetPacketStatisticsOutput:
 *
 * The #QmiMessageWdsGetPacketStatisticsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.6
 */
typedef struct _QmiMessageWdsGetPacketStatisticsOutput QmiMessageWdsGetPacketStatisticsOutput;
GType qmi_message_wds_get_packet_statistics_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PACKET_STATISTICS_OUTPUT (qmi_message_wds_get_packet_statistics_output_get_type ())


/**
 * qmi_message_wds_get_packet_statistics_output_get_last_call_rx_bytes_ok:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_last_call_rx_bytes_ok: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Last Call Rx Bytes Ok' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_last_call_rx_bytes_ok (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint64 *value_last_call_rx_bytes_ok,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_get_last_call_tx_bytes_ok:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_last_call_tx_bytes_ok: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Last Call Tx Bytes Ok' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_last_call_tx_bytes_ok (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint64 *value_last_call_tx_bytes_ok,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_get_result:
 * @self: a QmiMessageWdsGetPacketStatisticsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_result (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_get_tx_packets_ok:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_tx_packets_ok: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Packets Ok' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_tx_packets_ok (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_tx_packets_ok,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_get_rx_packets_ok:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_rx_packets_ok: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Packets Ok' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_rx_packets_ok (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_rx_packets_ok,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_get_tx_packets_error:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_tx_packets_error: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Packets Error' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_tx_packets_error (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_tx_packets_error,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_get_rx_packets_error:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_rx_packets_error: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Packets Error' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_rx_packets_error (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_rx_packets_error,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_get_tx_overflows:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_tx_overflows: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Overflows' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_tx_overflows (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_tx_overflows,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_get_rx_overflows:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_rx_overflows: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Overflows' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_rx_overflows (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_rx_overflows,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_get_tx_bytes_ok:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_tx_bytes_ok: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Bytes Ok' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_tx_bytes_ok (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint64 *value_tx_bytes_ok,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_get_rx_bytes_ok:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_rx_bytes_ok: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Bytes Ok' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_rx_bytes_ok (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint64 *value_rx_bytes_ok,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_get_tx_packets_dropped:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_tx_packets_dropped: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Tx Packets Dropped' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_tx_packets_dropped (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_tx_packets_dropped,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_get_rx_packets_dropped:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 * @value_rx_packets_dropped: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Rx Packets Dropped' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.6
 */
gboolean qmi_message_wds_get_packet_statistics_output_get_rx_packets_dropped (
    QmiMessageWdsGetPacketStatisticsOutput *self,
    guint32 *value_rx_packets_dropped,
    GError **error);


/**
 * qmi_message_wds_get_packet_statistics_output_ref:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.6
 */
QmiMessageWdsGetPacketStatisticsOutput *qmi_message_wds_get_packet_statistics_output_ref (QmiMessageWdsGetPacketStatisticsOutput *self);

/**
 * qmi_message_wds_get_packet_statistics_output_unref:
 * @self: a #QmiMessageWdsGetPacketStatisticsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.6
 */
void qmi_message_wds_get_packet_statistics_output_unref (QmiMessageWdsGetPacketStatisticsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetPacketStatisticsOutput, qmi_message_wds_get_packet_statistics_output_unref)

/**
 * qmi_message_wds_get_packet_statistics_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetPacketStatisticsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetPacketStatisticsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_packet_statistics_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetPacketStatisticsOutput *qmi_message_wds_get_packet_statistics_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Go Dormant */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGoDormantOutput:
 *
 * The #QmiMessageWdsGoDormantOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsGoDormantOutput QmiMessageWdsGoDormantOutput;
GType qmi_message_wds_go_dormant_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GO_DORMANT_OUTPUT (qmi_message_wds_go_dormant_output_get_type ())


/**
 * qmi_message_wds_go_dormant_output_get_result:
 * @self: a QmiMessageWdsGoDormantOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_go_dormant_output_get_result (
    QmiMessageWdsGoDormantOutput *self,
    GError **error);


/**
 * qmi_message_wds_go_dormant_output_ref:
 * @self: a #QmiMessageWdsGoDormantOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsGoDormantOutput *qmi_message_wds_go_dormant_output_ref (QmiMessageWdsGoDormantOutput *self);

/**
 * qmi_message_wds_go_dormant_output_unref:
 * @self: a #QmiMessageWdsGoDormantOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_go_dormant_output_unref (QmiMessageWdsGoDormantOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGoDormantOutput, qmi_message_wds_go_dormant_output_unref)

/**
 * qmi_message_wds_go_dormant_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGoDormantOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGoDormantOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_go_dormant_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGoDormantOutput *qmi_message_wds_go_dormant_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Go Active */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGoActiveOutput:
 *
 * The #QmiMessageWdsGoActiveOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsGoActiveOutput QmiMessageWdsGoActiveOutput;
GType qmi_message_wds_go_active_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GO_ACTIVE_OUTPUT (qmi_message_wds_go_active_output_get_type ())


/**
 * qmi_message_wds_go_active_output_get_result:
 * @self: a QmiMessageWdsGoActiveOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_go_active_output_get_result (
    QmiMessageWdsGoActiveOutput *self,
    GError **error);


/**
 * qmi_message_wds_go_active_output_ref:
 * @self: a #QmiMessageWdsGoActiveOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsGoActiveOutput *qmi_message_wds_go_active_output_ref (QmiMessageWdsGoActiveOutput *self);

/**
 * qmi_message_wds_go_active_output_unref:
 * @self: a #QmiMessageWdsGoActiveOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_go_active_output_unref (QmiMessageWdsGoActiveOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGoActiveOutput, qmi_message_wds_go_active_output_unref)

/**
 * qmi_message_wds_go_active_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGoActiveOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGoActiveOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_go_active_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGoActiveOutput *qmi_message_wds_go_active_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Create Profile */


/* --- Input -- */

/**
 * QmiMessageWdsCreateProfileInput:
 *
 * The #QmiMessageWdsCreateProfileInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsCreateProfileInput QmiMessageWdsCreateProfileInput;
GType qmi_message_wds_create_profile_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_CREATE_PROFILE_INPUT (qmi_message_wds_create_profile_input_get_type ())


/**
 * qmi_message_wds_create_profile_input_get_apn_type_mask:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_apn_type_mask: (out)(optional): a placeholder for the output #QmiWdsApnTypeMask, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Type Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_wds_create_profile_input_get_apn_type_mask (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsApnTypeMask *value_apn_type_mask,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_apn_type_mask:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_apn_type_mask: a #QmiWdsApnTypeMask.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Type Mask' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_wds_create_profile_input_set_apn_type_mask (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsApnTypeMask value_apn_type_mask,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_roaming_disallowed_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_roaming_disallowed_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Disallowed Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_create_profile_input_get_roaming_disallowed_flag (
    QmiMessageWdsCreateProfileInput *self,
    gboolean *value_roaming_disallowed_flag,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_roaming_disallowed_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_roaming_disallowed_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Roaming Disallowed Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_create_profile_input_set_roaming_disallowed_flag (
    QmiMessageWdsCreateProfileInput *self,
    gboolean value_roaming_disallowed_flag,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_apn_disabled_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_apn_disabled_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Disabled Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_create_profile_input_get_apn_disabled_flag (
    QmiMessageWdsCreateProfileInput *self,
    gboolean *value_apn_disabled_flag,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_apn_disabled_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_apn_disabled_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Disabled Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_create_profile_input_set_apn_disabled_flag (
    QmiMessageWdsCreateProfileInput *self,
    gboolean value_apn_disabled_flag,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_lte_qos_parameters:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_lte_qos_parameters_qos_class_identifier: (out)(optional): a placeholder for the output #QmiWdsQosClassIdentifier, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE QoS Parameters' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_lte_qos_parameters (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsQosClassIdentifier *value_lte_qos_parameters_qos_class_identifier,
    guint32 *value_lte_qos_parameters_guaranteed_downlink_bitrate,
    guint32 *value_lte_qos_parameters_max_downlink_bitrate,
    guint32 *value_lte_qos_parameters_guaranteed_uplink_bitrate,
    guint32 *value_lte_qos_parameters_max_uplink_bitrate,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_lte_qos_parameters:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_lte_qos_parameters_qos_class_identifier: a #QmiWdsQosClassIdentifier.
 * @value_lte_qos_parameters_guaranteed_downlink_bitrate: a #guint32.
 * @value_lte_qos_parameters_max_downlink_bitrate: a #guint32.
 * @value_lte_qos_parameters_guaranteed_uplink_bitrate: a #guint32.
 * @value_lte_qos_parameters_max_uplink_bitrate: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE QoS Parameters' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_lte_qos_parameters (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsQosClassIdentifier value_lte_qos_parameters_qos_class_identifier,
    guint32 value_lte_qos_parameters_guaranteed_downlink_bitrate,
    guint32 value_lte_qos_parameters_max_downlink_bitrate,
    guint32 value_lte_qos_parameters_guaranteed_uplink_bitrate,
    guint32 value_lte_qos_parameters_max_uplink_bitrate,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_address_allocation_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_address_allocation_preference: (out)(optional): a placeholder for the output #QmiWdsAddressAllocationPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Address Allocation Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_create_profile_input_get_address_allocation_preference (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsAddressAllocationPreference *value_address_allocation_preference,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_address_allocation_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_address_allocation_preference: a #QmiWdsAddressAllocationPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Address Allocation Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_create_profile_input_set_address_allocation_preference (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsAddressAllocationPreference value_address_allocation_preference,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_ipv6_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv6_secondary_dns_address_preference: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Secondary DNS Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_ipv6_secondary_dns_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    GArray **value_ipv6_secondary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_ipv6_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv6_secondary_dns_address_preference: (in)(element-type guint16)(transfer none): a #GArray of #guint16 elements. A new reference to @value_ipv6_secondary_dns_address_preference will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Secondary DNS Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_ipv6_secondary_dns_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    GArray *value_ipv6_secondary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_ipv6_primary_dns_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv6_primary_dns_address_preference: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Primary DNS Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_ipv6_primary_dns_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    GArray **value_ipv6_primary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_ipv6_primary_dns_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv6_primary_dns_address_preference: (in)(element-type guint16)(transfer none): a #GArray of #guint16 elements. A new reference to @value_ipv6_primary_dns_address_preference will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Primary DNS Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_ipv6_primary_dns_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    GArray *value_ipv6_primary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_umts_minimum_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_umts_minimum_qos_with_signaling_indication_flag (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_umts_minimum_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication: a #gint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Minimum QoS With Signaling Indication Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_umts_minimum_qos_with_signaling_indication_flag (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass value_umts_minimum_qos_with_signaling_indication_flag_traffic_class,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_umts_requested_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_signaling_indication: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_umts_requested_qos_with_signaling_indication_flag (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_requested_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_umts_requested_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_requested_qos_with_signaling_indication_flag_transfer_delay: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_signaling_indication: a #gint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Requested QoS With Signaling Indication Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_umts_requested_qos_with_signaling_indication_flag (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass value_umts_requested_qos_with_signaling_indication_flag_traffic_class,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_transfer_delay,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 value_umts_requested_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_ipv6_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv6_address_preference_address: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_ipv6_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    GArray **value_ipv6_address_preference_address,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_ipv6_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv6_address_preference_address: (in)(element-type guint16)(transfer none): a #GArray of #guint16 elements. A new reference to @value_ipv6_address_preference_address will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_ipv6_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    GArray *value_ipv6_address_preference_address,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_pdp_context_primary_id:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_context_primary_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Primary ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_context_primary_id (
    QmiMessageWdsCreateProfileInput *self,
    guint8 *value_pdp_context_primary_id,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_pdp_context_primary_id:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_context_primary_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Primary ID' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_context_primary_id (
    QmiMessageWdsCreateProfileInput *self,
    guint8 value_pdp_context_primary_id,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_pdp_context_secondary_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_context_secondary_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Secondary Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_context_secondary_flag (
    QmiMessageWdsCreateProfileInput *self,
    gboolean *value_pdp_context_secondary_flag,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_pdp_context_secondary_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_context_secondary_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Secondary Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_context_secondary_flag (
    QmiMessageWdsCreateProfileInput *self,
    gboolean value_pdp_context_secondary_flag,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_pdp_context_number:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_context_number: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_context_number (
    QmiMessageWdsCreateProfileInput *self,
    guint8 *value_pdp_context_number,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_pdp_context_number:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_context_number: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Number' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_context_number (
    QmiMessageWdsCreateProfileInput *self,
    guint8 value_pdp_context_number,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_imcn_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_imcn_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMCN Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_imcn_flag (
    QmiMessageWdsCreateProfileInput *self,
    gboolean *value_imcn_flag,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_imcn_flag:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_imcn_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMCN Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_imcn_flag (
    QmiMessageWdsCreateProfileInput *self,
    gboolean value_imcn_flag,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_pcscf_address_using_dhcp:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pcscf_address_using_dhcp: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using DHCP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pcscf_address_using_dhcp (
    QmiMessageWdsCreateProfileInput *self,
    gboolean *value_pcscf_address_using_dhcp,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_pcscf_address_using_dhcp:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pcscf_address_using_dhcp: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PCSCF Address Using DHCP' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pcscf_address_using_dhcp (
    QmiMessageWdsCreateProfileInput *self,
    gboolean value_pcscf_address_using_dhcp,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_pdp_access_control:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_access_control: (out)(optional): a placeholder for the output #QmiWdsPdpAccessControl, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Access Control' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_access_control (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpAccessControl *value_pdp_access_control,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_pdp_access_control:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_access_control: a #QmiWdsPdpAccessControl.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Access Control' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_access_control (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpAccessControl value_pdp_access_control,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pcscf_address_using_pco: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using PCO' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pcscf_address_using_pco (
    QmiMessageWdsCreateProfileInput *self,
    gboolean *value_pcscf_address_using_pco,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pcscf_address_using_pco: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PCSCF Address Using PCO' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pcscf_address_using_pco (
    QmiMessageWdsCreateProfileInput *self,
    gboolean value_pcscf_address_using_pco,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_ipv4_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv4_address_preference: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_ipv4_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    guint32 *value_ipv4_address_preference,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_ipv4_address_preference:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_ipv4_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv4 Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_ipv4_address_preference (
    QmiMessageWdsCreateProfileInput *self,
    guint32 value_ipv4_address_preference,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_authentication:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_authentication: (out)(optional): a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_authentication (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsAuthentication *value_authentication,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_authentication:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_authentication: a #QmiWdsAuthentication.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Authentication' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_authentication (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsAuthentication value_authentication,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_password:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_password: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Password' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_password (
    QmiMessageWdsCreateProfileInput *self,
    const gchar **value_password,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_password:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_password: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Password' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_password (
    QmiMessageWdsCreateProfileInput *self,
    const gchar *value_password,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_username:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_username: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_username (
    QmiMessageWdsCreateProfileInput *self,
    const gchar **value_username,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_username:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_username: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Username' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_username (
    QmiMessageWdsCreateProfileInput *self,
    const gchar *value_username,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_gprs_minimum_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_gprs_minimum_qos_precedence_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_delay_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_reliability_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_peak_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_mean_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Minimum QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_gprs_minimum_qos (
    QmiMessageWdsCreateProfileInput *self,
    guint32 *value_gprs_minimum_qos_precedence_class,
    guint32 *value_gprs_minimum_qos_delay_class,
    guint32 *value_gprs_minimum_qos_reliability_class,
    guint32 *value_gprs_minimum_qos_peak_throughput_class,
    guint32 *value_gprs_minimum_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_gprs_minimum_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_gprs_minimum_qos_precedence_class: a #guint32.
 * @value_gprs_minimum_qos_delay_class: a #guint32.
 * @value_gprs_minimum_qos_reliability_class: a #guint32.
 * @value_gprs_minimum_qos_peak_throughput_class: a #guint32.
 * @value_gprs_minimum_qos_mean_throughput_class: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GPRS Minimum QoS' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_gprs_minimum_qos (
    QmiMessageWdsCreateProfileInput *self,
    guint32 value_gprs_minimum_qos_precedence_class,
    guint32 value_gprs_minimum_qos_delay_class,
    guint32 value_gprs_minimum_qos_reliability_class,
    guint32 value_gprs_minimum_qos_peak_throughput_class,
    guint32 value_gprs_minimum_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_gprs_requested_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_gprs_requested_qos_precedence_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_delay_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_reliability_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_peak_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_mean_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Requested QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_gprs_requested_qos (
    QmiMessageWdsCreateProfileInput *self,
    guint32 *value_gprs_requested_qos_precedence_class,
    guint32 *value_gprs_requested_qos_delay_class,
    guint32 *value_gprs_requested_qos_reliability_class,
    guint32 *value_gprs_requested_qos_peak_throughput_class,
    guint32 *value_gprs_requested_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_gprs_requested_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_gprs_requested_qos_precedence_class: a #guint32.
 * @value_gprs_requested_qos_delay_class: a #guint32.
 * @value_gprs_requested_qos_reliability_class: a #guint32.
 * @value_gprs_requested_qos_peak_throughput_class: a #guint32.
 * @value_gprs_requested_qos_mean_throughput_class: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GPRS Requested QoS' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_gprs_requested_qos (
    QmiMessageWdsCreateProfileInput *self,
    guint32 value_gprs_requested_qos_precedence_class,
    guint32 value_gprs_requested_qos_delay_class,
    guint32 value_gprs_requested_qos_reliability_class,
    guint32 value_gprs_requested_qos_peak_throughput_class,
    guint32 value_gprs_requested_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_umts_minimum_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_minimum_qos_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_umts_minimum_qos (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_traffic_class,
    guint32 *value_umts_minimum_qos_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_qos_delivery_order,
    guint32 *value_umts_minimum_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_transfer_delay,
    guint32 *value_umts_minimum_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_umts_minimum_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_minimum_qos_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_minimum_qos_max_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_max_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_minimum_qos_maximum_sdu_size: a #guint32.
 * @value_umts_minimum_qos_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_minimum_qos_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_minimum_qos_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_minimum_qos_transfer_delay: a #guint32.
 * @value_umts_minimum_qos_traffic_handling_priority: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Minimum QoS' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_umts_minimum_qos (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass value_umts_minimum_qos_traffic_class,
    guint32 value_umts_minimum_qos_max_uplink_bitrate,
    guint32 value_umts_minimum_qos_max_downlink_bitrate,
    guint32 value_umts_minimum_qos_guaranteed_uplink_bitrate,
    guint32 value_umts_minimum_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_minimum_qos_qos_delivery_order,
    guint32 value_umts_minimum_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_minimum_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_minimum_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_minimum_qos_delivery_erroneous_sdu,
    guint32 value_umts_minimum_qos_transfer_delay,
    guint32 value_umts_minimum_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_umts_requested_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_requested_qos_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_umts_requested_qos (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_traffic_class,
    guint32 *value_umts_requested_qos_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_qos_delivery_order,
    guint32 *value_umts_requested_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_transfer_delay,
    guint32 *value_umts_requested_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_umts_requested_qos:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_umts_requested_qos_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_requested_qos_max_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_max_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_requested_qos_maximum_sdu_size: a #guint32.
 * @value_umts_requested_qos_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_requested_qos_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_requested_qos_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_requested_qos_transfer_delay: a #guint32.
 * @value_umts_requested_qos_traffic_handling_priority: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Requested QoS' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_umts_requested_qos (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsTrafficClass value_umts_requested_qos_traffic_class,
    guint32 value_umts_requested_qos_max_uplink_bitrate,
    guint32 value_umts_requested_qos_max_downlink_bitrate,
    guint32 value_umts_requested_qos_guaranteed_uplink_bitrate,
    guint32 value_umts_requested_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_requested_qos_qos_delivery_order,
    guint32 value_umts_requested_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_requested_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_requested_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_requested_qos_delivery_erroneous_sdu,
    guint32 value_umts_requested_qos_transfer_delay,
    guint32 value_umts_requested_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_secondary_ipv4_dns_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary IPv4 DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_secondary_ipv4_dns_address (
    QmiMessageWdsCreateProfileInput *self,
    guint32 *value_secondary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_secondary_ipv4_dns_address: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Secondary IPv4 DNS Address' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_secondary_ipv4_dns_address (
    QmiMessageWdsCreateProfileInput *self,
    guint32 value_secondary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_primary_ipv4_dns_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary IPv4 DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_primary_ipv4_dns_address (
    QmiMessageWdsCreateProfileInput *self,
    guint32 *value_primary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_primary_ipv4_dns_address: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Primary IPv4 DNS Address' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_primary_ipv4_dns_address (
    QmiMessageWdsCreateProfileInput *self,
    guint32 value_primary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_apn_name:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_apn_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_apn_name (
    QmiMessageWdsCreateProfileInput *self,
    const gchar **value_apn_name,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_apn_name:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_apn_name: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Name' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_apn_name (
    QmiMessageWdsCreateProfileInput *self,
    const gchar *value_apn_name,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_pdp_data_compression_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_data_compression_type: (out)(optional): a placeholder for the output #QmiWdsPdpDataCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Data Compression Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_data_compression_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpDataCompressionType *value_pdp_data_compression_type,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_pdp_data_compression_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_data_compression_type: a #QmiWdsPdpDataCompressionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Data Compression Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_data_compression_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpDataCompressionType value_pdp_data_compression_type,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_pdp_header_compression_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_header_compression_type: (out)(optional): a placeholder for the output #QmiWdsPdpHeaderCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Header Compression Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_header_compression_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpHeaderCompressionType *value_pdp_header_compression_type,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_pdp_header_compression_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_header_compression_type: a #QmiWdsPdpHeaderCompressionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Header Compression Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_header_compression_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpHeaderCompressionType value_pdp_header_compression_type,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_pdp_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_type: (out)(optional): a placeholder for the output #QmiWdsPdpType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_pdp_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpType *value_pdp_type,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_pdp_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_pdp_type: a #QmiWdsPdpType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_pdp_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsPdpType value_pdp_type,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_profile_name:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_profile_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_profile_name (
    QmiMessageWdsCreateProfileInput *self,
    const gchar **value_profile_name,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_profile_name:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_profile_name: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Name' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_profile_name (
    QmiMessageWdsCreateProfileInput *self,
    const gchar *value_profile_name,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_get_profile_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_profile_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_get_profile_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsProfileType *value_profile_type,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_set_profile_type:
 * @self: a #QmiMessageWdsCreateProfileInput.
 * @value_profile_type: a #QmiWdsProfileType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_input_set_profile_type (
    QmiMessageWdsCreateProfileInput *self,
    QmiWdsProfileType value_profile_type,
    GError **error);


/**
 * qmi_message_wds_create_profile_input_ref:
 * @self: a #QmiMessageWdsCreateProfileInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsCreateProfileInput *qmi_message_wds_create_profile_input_ref (QmiMessageWdsCreateProfileInput *self);

/**
 * qmi_message_wds_create_profile_input_unref:
 * @self: a #QmiMessageWdsCreateProfileInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_create_profile_input_unref (QmiMessageWdsCreateProfileInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsCreateProfileInput, qmi_message_wds_create_profile_input_unref)

/**
 * qmi_message_wds_create_profile_input_new:
 *
 * Allocates a new #QmiMessageWdsCreateProfileInput.
 *
 * Returns: the newly created #QmiMessageWdsCreateProfileInput. The returned value should be freed with qmi_message_wds_create_profile_input_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsCreateProfileInput *qmi_message_wds_create_profile_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsCreateProfileOutput:
 *
 * The #QmiMessageWdsCreateProfileOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsCreateProfileOutput QmiMessageWdsCreateProfileOutput;
GType qmi_message_wds_create_profile_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_CREATE_PROFILE_OUTPUT (qmi_message_wds_create_profile_output_get_type ())


/**
 * qmi_message_wds_create_profile_output_get_result:
 * @self: a QmiMessageWdsCreateProfileOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_output_get_result (
    QmiMessageWdsCreateProfileOutput *self,
    GError **error);


/**
 * qmi_message_wds_create_profile_output_get_profile_identifier:
 * @self: a #QmiMessageWdsCreateProfileOutput.
 * @value_profile_identifier_profile_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_identifier_profile_index: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Identifier' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_output_get_profile_identifier (
    QmiMessageWdsCreateProfileOutput *self,
    QmiWdsProfileType *value_profile_identifier_profile_type,
    guint8 *value_profile_identifier_profile_index,
    GError **error);


/**
 * qmi_message_wds_create_profile_output_get_extended_error_code:
 * @self: a #QmiMessageWdsCreateProfileOutput.
 * @value_extended_error_code: (out)(optional): a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_create_profile_output_get_extended_error_code (
    QmiMessageWdsCreateProfileOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);


/**
 * qmi_message_wds_create_profile_output_ref:
 * @self: a #QmiMessageWdsCreateProfileOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsCreateProfileOutput *qmi_message_wds_create_profile_output_ref (QmiMessageWdsCreateProfileOutput *self);

/**
 * qmi_message_wds_create_profile_output_unref:
 * @self: a #QmiMessageWdsCreateProfileOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_create_profile_output_unref (QmiMessageWdsCreateProfileOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsCreateProfileOutput, qmi_message_wds_create_profile_output_unref)

/**
 * qmi_message_wds_create_profile_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsCreateProfileOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsCreateProfileOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_create_profile_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsCreateProfileOutput *qmi_message_wds_create_profile_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Modify Profile */


/* --- Input -- */

/**
 * QmiMessageWdsModifyProfileInput:
 *
 * The #QmiMessageWdsModifyProfileInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsModifyProfileInput QmiMessageWdsModifyProfileInput;
GType qmi_message_wds_modify_profile_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_MODIFY_PROFILE_INPUT (qmi_message_wds_modify_profile_input_get_type ())


/**
 * qmi_message_wds_modify_profile_input_get_ipv6_prefix_delegation:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_prefix_delegation: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Prefix Delegation' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_modify_profile_input_get_ipv6_prefix_delegation (
    QmiMessageWdsModifyProfileInput *self,
    gboolean *value_ipv6_prefix_delegation,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_ipv6_prefix_delegation:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_prefix_delegation: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Prefix Delegation' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_modify_profile_input_set_ipv6_prefix_delegation (
    QmiMessageWdsModifyProfileInput *self,
    gboolean value_ipv6_prefix_delegation,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_clat_enabled:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_clat_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CLAT Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_modify_profile_input_get_clat_enabled (
    QmiMessageWdsModifyProfileInput *self,
    gboolean *value_clat_enabled,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_clat_enabled:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_clat_enabled: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'CLAT Enabled' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_modify_profile_input_set_clat_enabled (
    QmiMessageWdsModifyProfileInput *self,
    gboolean value_clat_enabled,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_apn_type_mask:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_apn_type_mask: (out)(optional): a placeholder for the output #QmiWdsApnTypeMask, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Type Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_wds_modify_profile_input_get_apn_type_mask (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsApnTypeMask *value_apn_type_mask,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_apn_type_mask:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_apn_type_mask: a #QmiWdsApnTypeMask.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Type Mask' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_wds_modify_profile_input_set_apn_type_mask (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsApnTypeMask value_apn_type_mask,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_roaming_disallowed_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_roaming_disallowed_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Disallowed Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_modify_profile_input_get_roaming_disallowed_flag (
    QmiMessageWdsModifyProfileInput *self,
    gboolean *value_roaming_disallowed_flag,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_roaming_disallowed_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_roaming_disallowed_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Roaming Disallowed Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_modify_profile_input_set_roaming_disallowed_flag (
    QmiMessageWdsModifyProfileInput *self,
    gboolean value_roaming_disallowed_flag,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_apn_disabled_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_apn_disabled_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Disabled Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_modify_profile_input_get_apn_disabled_flag (
    QmiMessageWdsModifyProfileInput *self,
    gboolean *value_apn_disabled_flag,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_apn_disabled_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_apn_disabled_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Disabled Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_modify_profile_input_set_apn_disabled_flag (
    QmiMessageWdsModifyProfileInput *self,
    gboolean value_apn_disabled_flag,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_lte_qos_parameters:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_lte_qos_parameters_qos_class_identifier: (out)(optional): a placeholder for the output #QmiWdsQosClassIdentifier, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE QoS Parameters' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_lte_qos_parameters (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsQosClassIdentifier *value_lte_qos_parameters_qos_class_identifier,
    guint32 *value_lte_qos_parameters_guaranteed_downlink_bitrate,
    guint32 *value_lte_qos_parameters_max_downlink_bitrate,
    guint32 *value_lte_qos_parameters_guaranteed_uplink_bitrate,
    guint32 *value_lte_qos_parameters_max_uplink_bitrate,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_lte_qos_parameters:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_lte_qos_parameters_qos_class_identifier: a #QmiWdsQosClassIdentifier.
 * @value_lte_qos_parameters_guaranteed_downlink_bitrate: a #guint32.
 * @value_lte_qos_parameters_max_downlink_bitrate: a #guint32.
 * @value_lte_qos_parameters_guaranteed_uplink_bitrate: a #guint32.
 * @value_lte_qos_parameters_max_uplink_bitrate: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'LTE QoS Parameters' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_lte_qos_parameters (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsQosClassIdentifier value_lte_qos_parameters_qos_class_identifier,
    guint32 value_lte_qos_parameters_guaranteed_downlink_bitrate,
    guint32 value_lte_qos_parameters_max_downlink_bitrate,
    guint32 value_lte_qos_parameters_guaranteed_uplink_bitrate,
    guint32 value_lte_qos_parameters_max_uplink_bitrate,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_address_allocation_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_address_allocation_preference: (out)(optional): a placeholder for the output #QmiWdsAddressAllocationPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Address Allocation Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_modify_profile_input_get_address_allocation_preference (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsAddressAllocationPreference *value_address_allocation_preference,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_address_allocation_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_address_allocation_preference: a #QmiWdsAddressAllocationPreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Address Allocation Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_modify_profile_input_set_address_allocation_preference (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsAddressAllocationPreference value_address_allocation_preference,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_ipv6_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_secondary_dns_address_preference: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Secondary DNS Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_ipv6_secondary_dns_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    GArray **value_ipv6_secondary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_ipv6_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_secondary_dns_address_preference: (in)(element-type guint16)(transfer none): a #GArray of #guint16 elements. A new reference to @value_ipv6_secondary_dns_address_preference will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Secondary DNS Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_ipv6_secondary_dns_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    GArray *value_ipv6_secondary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_ipv6_primary_dns_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_primary_dns_address_preference: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Primary DNS Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_ipv6_primary_dns_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    GArray **value_ipv6_primary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_ipv6_primary_dns_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_primary_dns_address_preference: (in)(element-type guint16)(transfer none): a #GArray of #guint16 elements. A new reference to @value_ipv6_primary_dns_address_preference will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Primary DNS Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_ipv6_primary_dns_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    GArray *value_ipv6_primary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_umts_minimum_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_umts_minimum_qos_with_signaling_indication_flag (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_umts_minimum_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority: a #guint32.
 * @value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication: a #gint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Minimum QoS With Signaling Indication Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_umts_minimum_qos_with_signaling_indication_flag (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass value_umts_minimum_qos_with_signaling_indication_flag_traffic_class,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay,
    guint32 value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_umts_requested_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_signaling_indication: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_umts_requested_qos_with_signaling_indication_flag (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_requested_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_umts_requested_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_requested_qos_with_signaling_indication_flag_transfer_delay: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority: a #guint32.
 * @value_umts_requested_qos_with_signaling_indication_flag_signaling_indication: a #gint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Requested QoS With Signaling Indication Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_umts_requested_qos_with_signaling_indication_flag (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass value_umts_requested_qos_with_signaling_indication_flag_traffic_class,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_transfer_delay,
    guint32 value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 value_umts_requested_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_ipv6_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_address_preference_address: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_ipv6_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    GArray **value_ipv6_address_preference_address,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_ipv6_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv6_address_preference_address: (in)(element-type guint16)(transfer none): a #GArray of #guint16 elements. A new reference to @value_ipv6_address_preference_address will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv6 Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_ipv6_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    GArray *value_ipv6_address_preference_address,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_pdp_context_primary_id:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_context_primary_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Primary ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_context_primary_id (
    QmiMessageWdsModifyProfileInput *self,
    guint8 *value_pdp_context_primary_id,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_pdp_context_primary_id:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_context_primary_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Primary ID' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_context_primary_id (
    QmiMessageWdsModifyProfileInput *self,
    guint8 value_pdp_context_primary_id,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_pdp_context_secondary_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_context_secondary_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Secondary Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_context_secondary_flag (
    QmiMessageWdsModifyProfileInput *self,
    gboolean *value_pdp_context_secondary_flag,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_pdp_context_secondary_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_context_secondary_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Secondary Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_context_secondary_flag (
    QmiMessageWdsModifyProfileInput *self,
    gboolean value_pdp_context_secondary_flag,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_pdp_context_number:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_context_number: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_context_number (
    QmiMessageWdsModifyProfileInput *self,
    guint8 *value_pdp_context_number,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_pdp_context_number:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_context_number: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Number' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_context_number (
    QmiMessageWdsModifyProfileInput *self,
    guint8 value_pdp_context_number,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_imcn_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_imcn_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMCN Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_imcn_flag (
    QmiMessageWdsModifyProfileInput *self,
    gboolean *value_imcn_flag,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_imcn_flag:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_imcn_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IMCN Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_imcn_flag (
    QmiMessageWdsModifyProfileInput *self,
    gboolean value_imcn_flag,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_pcscf_address_using_dhcp:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pcscf_address_using_dhcp: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using DHCP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pcscf_address_using_dhcp (
    QmiMessageWdsModifyProfileInput *self,
    gboolean *value_pcscf_address_using_dhcp,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_pcscf_address_using_dhcp:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pcscf_address_using_dhcp: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PCSCF Address Using DHCP' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pcscf_address_using_dhcp (
    QmiMessageWdsModifyProfileInput *self,
    gboolean value_pcscf_address_using_dhcp,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_pdp_access_control:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_access_control: (out)(optional): a placeholder for the output #QmiWdsPdpAccessControl, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Access Control' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_access_control (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpAccessControl *value_pdp_access_control,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_pdp_access_control:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_access_control: a #QmiWdsPdpAccessControl.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Access Control' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_access_control (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpAccessControl value_pdp_access_control,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pcscf_address_using_pco: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using PCO' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pcscf_address_using_pco (
    QmiMessageWdsModifyProfileInput *self,
    gboolean *value_pcscf_address_using_pco,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pcscf_address_using_pco: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PCSCF Address Using PCO' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pcscf_address_using_pco (
    QmiMessageWdsModifyProfileInput *self,
    gboolean value_pcscf_address_using_pco,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_ipv4_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv4_address_preference: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_ipv4_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    guint32 *value_ipv4_address_preference,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_ipv4_address_preference:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_ipv4_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv4 Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_ipv4_address_preference (
    QmiMessageWdsModifyProfileInput *self,
    guint32 value_ipv4_address_preference,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_authentication:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_authentication: (out)(optional): a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_authentication (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsAuthentication *value_authentication,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_authentication:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_authentication: a #QmiWdsAuthentication.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Authentication' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_authentication (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsAuthentication value_authentication,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_password:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_password: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Password' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_password (
    QmiMessageWdsModifyProfileInput *self,
    const gchar **value_password,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_password:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_password: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Password' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_password (
    QmiMessageWdsModifyProfileInput *self,
    const gchar *value_password,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_username:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_username: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_username (
    QmiMessageWdsModifyProfileInput *self,
    const gchar **value_username,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_username:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_username: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Username' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_username (
    QmiMessageWdsModifyProfileInput *self,
    const gchar *value_username,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_gprs_minimum_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_gprs_minimum_qos_precedence_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_delay_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_reliability_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_peak_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_mean_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Minimum QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_gprs_minimum_qos (
    QmiMessageWdsModifyProfileInput *self,
    guint32 *value_gprs_minimum_qos_precedence_class,
    guint32 *value_gprs_minimum_qos_delay_class,
    guint32 *value_gprs_minimum_qos_reliability_class,
    guint32 *value_gprs_minimum_qos_peak_throughput_class,
    guint32 *value_gprs_minimum_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_gprs_minimum_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_gprs_minimum_qos_precedence_class: a #guint32.
 * @value_gprs_minimum_qos_delay_class: a #guint32.
 * @value_gprs_minimum_qos_reliability_class: a #guint32.
 * @value_gprs_minimum_qos_peak_throughput_class: a #guint32.
 * @value_gprs_minimum_qos_mean_throughput_class: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GPRS Minimum QoS' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_gprs_minimum_qos (
    QmiMessageWdsModifyProfileInput *self,
    guint32 value_gprs_minimum_qos_precedence_class,
    guint32 value_gprs_minimum_qos_delay_class,
    guint32 value_gprs_minimum_qos_reliability_class,
    guint32 value_gprs_minimum_qos_peak_throughput_class,
    guint32 value_gprs_minimum_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_gprs_requested_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_gprs_requested_qos_precedence_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_delay_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_reliability_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_peak_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_mean_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Requested QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_gprs_requested_qos (
    QmiMessageWdsModifyProfileInput *self,
    guint32 *value_gprs_requested_qos_precedence_class,
    guint32 *value_gprs_requested_qos_delay_class,
    guint32 *value_gprs_requested_qos_reliability_class,
    guint32 *value_gprs_requested_qos_peak_throughput_class,
    guint32 *value_gprs_requested_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_gprs_requested_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_gprs_requested_qos_precedence_class: a #guint32.
 * @value_gprs_requested_qos_delay_class: a #guint32.
 * @value_gprs_requested_qos_reliability_class: a #guint32.
 * @value_gprs_requested_qos_peak_throughput_class: a #guint32.
 * @value_gprs_requested_qos_mean_throughput_class: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'GPRS Requested QoS' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_gprs_requested_qos (
    QmiMessageWdsModifyProfileInput *self,
    guint32 value_gprs_requested_qos_precedence_class,
    guint32 value_gprs_requested_qos_delay_class,
    guint32 value_gprs_requested_qos_reliability_class,
    guint32 value_gprs_requested_qos_peak_throughput_class,
    guint32 value_gprs_requested_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_umts_minimum_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_minimum_qos_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_umts_minimum_qos (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_traffic_class,
    guint32 *value_umts_minimum_qos_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_qos_delivery_order,
    guint32 *value_umts_minimum_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_transfer_delay,
    guint32 *value_umts_minimum_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_umts_minimum_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_minimum_qos_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_minimum_qos_max_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_max_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_minimum_qos_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_minimum_qos_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_minimum_qos_maximum_sdu_size: a #guint32.
 * @value_umts_minimum_qos_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_minimum_qos_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_minimum_qos_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_minimum_qos_transfer_delay: a #guint32.
 * @value_umts_minimum_qos_traffic_handling_priority: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Minimum QoS' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_umts_minimum_qos (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass value_umts_minimum_qos_traffic_class,
    guint32 value_umts_minimum_qos_max_uplink_bitrate,
    guint32 value_umts_minimum_qos_max_downlink_bitrate,
    guint32 value_umts_minimum_qos_guaranteed_uplink_bitrate,
    guint32 value_umts_minimum_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_minimum_qos_qos_delivery_order,
    guint32 value_umts_minimum_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_minimum_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_minimum_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_minimum_qos_delivery_erroneous_sdu,
    guint32 value_umts_minimum_qos_transfer_delay,
    guint32 value_umts_minimum_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_umts_requested_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_requested_qos_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_umts_requested_qos (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_traffic_class,
    guint32 *value_umts_requested_qos_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_qos_delivery_order,
    guint32 *value_umts_requested_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_transfer_delay,
    guint32 *value_umts_requested_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_umts_requested_qos:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_umts_requested_qos_traffic_class: a #QmiWdsTrafficClass.
 * @value_umts_requested_qos_max_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_max_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_guaranteed_uplink_bitrate: a #guint32.
 * @value_umts_requested_qos_guaranteed_downlink_bitrate: a #guint32.
 * @value_umts_requested_qos_qos_delivery_order: a #QmiWdsDeliveryOrder.
 * @value_umts_requested_qos_maximum_sdu_size: a #guint32.
 * @value_umts_requested_qos_sdu_error_ratio: a #QmiWdsSduErrorRatio.
 * @value_umts_requested_qos_residual_bit_error_ratio: a #QmiWdsSduResidualBitErrorRatio.
 * @value_umts_requested_qos_delivery_erroneous_sdu: a #QmiWdsSduErroneousDelivery.
 * @value_umts_requested_qos_transfer_delay: a #guint32.
 * @value_umts_requested_qos_traffic_handling_priority: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'UMTS Requested QoS' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_umts_requested_qos (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsTrafficClass value_umts_requested_qos_traffic_class,
    guint32 value_umts_requested_qos_max_uplink_bitrate,
    guint32 value_umts_requested_qos_max_downlink_bitrate,
    guint32 value_umts_requested_qos_guaranteed_uplink_bitrate,
    guint32 value_umts_requested_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder value_umts_requested_qos_qos_delivery_order,
    guint32 value_umts_requested_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio value_umts_requested_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio value_umts_requested_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery value_umts_requested_qos_delivery_erroneous_sdu,
    guint32 value_umts_requested_qos_transfer_delay,
    guint32 value_umts_requested_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_secondary_ipv4_dns_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary IPv4 DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_secondary_ipv4_dns_address (
    QmiMessageWdsModifyProfileInput *self,
    guint32 *value_secondary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_secondary_ipv4_dns_address: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Secondary IPv4 DNS Address' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_secondary_ipv4_dns_address (
    QmiMessageWdsModifyProfileInput *self,
    guint32 value_secondary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_primary_ipv4_dns_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary IPv4 DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_primary_ipv4_dns_address (
    QmiMessageWdsModifyProfileInput *self,
    guint32 *value_primary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_primary_ipv4_dns_address: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Primary IPv4 DNS Address' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_primary_ipv4_dns_address (
    QmiMessageWdsModifyProfileInput *self,
    guint32 value_primary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_apn_name:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_apn_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_apn_name (
    QmiMessageWdsModifyProfileInput *self,
    const gchar **value_apn_name,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_apn_name:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_apn_name: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Name' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_apn_name (
    QmiMessageWdsModifyProfileInput *self,
    const gchar *value_apn_name,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_pdp_data_compression_type:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_data_compression_type: (out)(optional): a placeholder for the output #QmiWdsPdpDataCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Data Compression Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_data_compression_type (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpDataCompressionType *value_pdp_data_compression_type,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_pdp_data_compression_type:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_data_compression_type: a #QmiWdsPdpDataCompressionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Data Compression Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_data_compression_type (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpDataCompressionType value_pdp_data_compression_type,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_pdp_header_compression_type:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_header_compression_type: (out)(optional): a placeholder for the output #QmiWdsPdpHeaderCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Header Compression Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_header_compression_type (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpHeaderCompressionType *value_pdp_header_compression_type,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_pdp_header_compression_type:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_header_compression_type: a #QmiWdsPdpHeaderCompressionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Header Compression Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_header_compression_type (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpHeaderCompressionType value_pdp_header_compression_type,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_pdp_type:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_type: (out)(optional): a placeholder for the output #QmiWdsPdpType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_pdp_type (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpType *value_pdp_type,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_pdp_type:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_pdp_type: a #QmiWdsPdpType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_pdp_type (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsPdpType value_pdp_type,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_profile_name:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_profile_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_profile_name (
    QmiMessageWdsModifyProfileInput *self,
    const gchar **value_profile_name,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_profile_name:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_profile_name: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Name' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_profile_name (
    QmiMessageWdsModifyProfileInput *self,
    const gchar *value_profile_name,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_get_profile_identifier:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_profile_identifier_profile_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_identifier_profile_index: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Identifier' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_get_profile_identifier (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsProfileType *value_profile_identifier_profile_type,
    guint8 *value_profile_identifier_profile_index,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_set_profile_identifier:
 * @self: a #QmiMessageWdsModifyProfileInput.
 * @value_profile_identifier_profile_type: a #QmiWdsProfileType.
 * @value_profile_identifier_profile_index: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Identifier' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_input_set_profile_identifier (
    QmiMessageWdsModifyProfileInput *self,
    QmiWdsProfileType value_profile_identifier_profile_type,
    guint8 value_profile_identifier_profile_index,
    GError **error);


/**
 * qmi_message_wds_modify_profile_input_ref:
 * @self: a #QmiMessageWdsModifyProfileInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsModifyProfileInput *qmi_message_wds_modify_profile_input_ref (QmiMessageWdsModifyProfileInput *self);

/**
 * qmi_message_wds_modify_profile_input_unref:
 * @self: a #QmiMessageWdsModifyProfileInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_modify_profile_input_unref (QmiMessageWdsModifyProfileInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsModifyProfileInput, qmi_message_wds_modify_profile_input_unref)

/**
 * qmi_message_wds_modify_profile_input_new:
 *
 * Allocates a new #QmiMessageWdsModifyProfileInput.
 *
 * Returns: the newly created #QmiMessageWdsModifyProfileInput. The returned value should be freed with qmi_message_wds_modify_profile_input_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsModifyProfileInput *qmi_message_wds_modify_profile_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsModifyProfileOutput:
 *
 * The #QmiMessageWdsModifyProfileOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsModifyProfileOutput QmiMessageWdsModifyProfileOutput;
GType qmi_message_wds_modify_profile_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_MODIFY_PROFILE_OUTPUT (qmi_message_wds_modify_profile_output_get_type ())


/**
 * qmi_message_wds_modify_profile_output_get_result:
 * @self: a QmiMessageWdsModifyProfileOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_output_get_result (
    QmiMessageWdsModifyProfileOutput *self,
    GError **error);


/**
 * qmi_message_wds_modify_profile_output_get_extended_error_code:
 * @self: a #QmiMessageWdsModifyProfileOutput.
 * @value_extended_error_code: (out)(optional): a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_modify_profile_output_get_extended_error_code (
    QmiMessageWdsModifyProfileOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);


/**
 * qmi_message_wds_modify_profile_output_ref:
 * @self: a #QmiMessageWdsModifyProfileOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsModifyProfileOutput *qmi_message_wds_modify_profile_output_ref (QmiMessageWdsModifyProfileOutput *self);

/**
 * qmi_message_wds_modify_profile_output_unref:
 * @self: a #QmiMessageWdsModifyProfileOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_modify_profile_output_unref (QmiMessageWdsModifyProfileOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsModifyProfileOutput, qmi_message_wds_modify_profile_output_unref)

/**
 * qmi_message_wds_modify_profile_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsModifyProfileOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsModifyProfileOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_modify_profile_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsModifyProfileOutput *qmi_message_wds_modify_profile_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Delete Profile */


/* --- Input -- */

/**
 * QmiMessageWdsDeleteProfileInput:
 *
 * The #QmiMessageWdsDeleteProfileInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsDeleteProfileInput QmiMessageWdsDeleteProfileInput;
GType qmi_message_wds_delete_profile_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_DELETE_PROFILE_INPUT (qmi_message_wds_delete_profile_input_get_type ())


/**
 * qmi_message_wds_delete_profile_input_get_profile_identifier:
 * @self: a #QmiMessageWdsDeleteProfileInput.
 * @value_profile_identifier_profile_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_identifier_profile_index: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Identifier' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_delete_profile_input_get_profile_identifier (
    QmiMessageWdsDeleteProfileInput *self,
    QmiWdsProfileType *value_profile_identifier_profile_type,
    guint8 *value_profile_identifier_profile_index,
    GError **error);


/**
 * qmi_message_wds_delete_profile_input_set_profile_identifier:
 * @self: a #QmiMessageWdsDeleteProfileInput.
 * @value_profile_identifier_profile_type: a #QmiWdsProfileType.
 * @value_profile_identifier_profile_index: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Identifier' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_delete_profile_input_set_profile_identifier (
    QmiMessageWdsDeleteProfileInput *self,
    QmiWdsProfileType value_profile_identifier_profile_type,
    guint8 value_profile_identifier_profile_index,
    GError **error);


/**
 * qmi_message_wds_delete_profile_input_ref:
 * @self: a #QmiMessageWdsDeleteProfileInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsDeleteProfileInput *qmi_message_wds_delete_profile_input_ref (QmiMessageWdsDeleteProfileInput *self);

/**
 * qmi_message_wds_delete_profile_input_unref:
 * @self: a #QmiMessageWdsDeleteProfileInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_delete_profile_input_unref (QmiMessageWdsDeleteProfileInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsDeleteProfileInput, qmi_message_wds_delete_profile_input_unref)

/**
 * qmi_message_wds_delete_profile_input_new:
 *
 * Allocates a new #QmiMessageWdsDeleteProfileInput.
 *
 * Returns: the newly created #QmiMessageWdsDeleteProfileInput. The returned value should be freed with qmi_message_wds_delete_profile_input_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsDeleteProfileInput *qmi_message_wds_delete_profile_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsDeleteProfileOutput:
 *
 * The #QmiMessageWdsDeleteProfileOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsDeleteProfileOutput QmiMessageWdsDeleteProfileOutput;
GType qmi_message_wds_delete_profile_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_DELETE_PROFILE_OUTPUT (qmi_message_wds_delete_profile_output_get_type ())


/**
 * qmi_message_wds_delete_profile_output_get_result:
 * @self: a QmiMessageWdsDeleteProfileOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_delete_profile_output_get_result (
    QmiMessageWdsDeleteProfileOutput *self,
    GError **error);


/**
 * qmi_message_wds_delete_profile_output_get_extended_error_code:
 * @self: a #QmiMessageWdsDeleteProfileOutput.
 * @value_extended_error_code: (out)(optional): a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_delete_profile_output_get_extended_error_code (
    QmiMessageWdsDeleteProfileOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);


/**
 * qmi_message_wds_delete_profile_output_ref:
 * @self: a #QmiMessageWdsDeleteProfileOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsDeleteProfileOutput *qmi_message_wds_delete_profile_output_ref (QmiMessageWdsDeleteProfileOutput *self);

/**
 * qmi_message_wds_delete_profile_output_unref:
 * @self: a #QmiMessageWdsDeleteProfileOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_delete_profile_output_unref (QmiMessageWdsDeleteProfileOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsDeleteProfileOutput, qmi_message_wds_delete_profile_output_unref)

/**
 * qmi_message_wds_delete_profile_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsDeleteProfileOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsDeleteProfileOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_delete_profile_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsDeleteProfileOutput *qmi_message_wds_delete_profile_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Profile List */


/* --- Input -- */

/**
 * QmiMessageWdsGetProfileListInput:
 *
 * The #QmiMessageWdsGetProfileListInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetProfileListInput QmiMessageWdsGetProfileListInput;
GType qmi_message_wds_get_profile_list_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PROFILE_LIST_INPUT (qmi_message_wds_get_profile_list_input_get_type ())


/**
 * qmi_message_wds_get_profile_list_input_get_profile_type:
 * @self: a #QmiMessageWdsGetProfileListInput.
 * @value_profile_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_list_input_get_profile_type (
    QmiMessageWdsGetProfileListInput *self,
    QmiWdsProfileType *value_profile_type,
    GError **error);


/**
 * qmi_message_wds_get_profile_list_input_set_profile_type:
 * @self: a #QmiMessageWdsGetProfileListInput.
 * @value_profile_type: a #QmiWdsProfileType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_list_input_set_profile_type (
    QmiMessageWdsGetProfileListInput *self,
    QmiWdsProfileType value_profile_type,
    GError **error);


/**
 * qmi_message_wds_get_profile_list_input_ref:
 * @self: a #QmiMessageWdsGetProfileListInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileListInput *qmi_message_wds_get_profile_list_input_ref (QmiMessageWdsGetProfileListInput *self);

/**
 * qmi_message_wds_get_profile_list_input_unref:
 * @self: a #QmiMessageWdsGetProfileListInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.8
 */
void qmi_message_wds_get_profile_list_input_unref (QmiMessageWdsGetProfileListInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetProfileListInput, qmi_message_wds_get_profile_list_input_unref)

/**
 * qmi_message_wds_get_profile_list_input_new:
 *
 * Allocates a new #QmiMessageWdsGetProfileListInput.
 *
 * Returns: the newly created #QmiMessageWdsGetProfileListInput. The returned value should be freed with qmi_message_wds_get_profile_list_input_unref().
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileListInput *qmi_message_wds_get_profile_list_input_new (void);

/* --- Output -- */


/**
 * QmiMessageWdsGetProfileListOutputProfileListProfile:
 * @profile_type: a #QmiWdsProfileType.
 * @profile_index: a #guint8.
 * @profile_name: a string.
 *
 * A QmiMessageWdsGetProfileListOutputProfileListProfile struct.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetProfileListOutputProfileListProfile {
    QmiWdsProfileType profile_type;
    guint8 profile_index;
    gchar *profile_name;
} QmiMessageWdsGetProfileListOutputProfileListProfile;

GType qmi_message_wds_get_profile_list_output_profile_list_profile_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageWdsGetProfileListOutput:
 *
 * The #QmiMessageWdsGetProfileListOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetProfileListOutput QmiMessageWdsGetProfileListOutput;
GType qmi_message_wds_get_profile_list_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PROFILE_LIST_OUTPUT (qmi_message_wds_get_profile_list_output_get_type ())


/**
 * qmi_message_wds_get_profile_list_output_get_result:
 * @self: a QmiMessageWdsGetProfileListOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_list_output_get_result (
    QmiMessageWdsGetProfileListOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_profile_list_output_get_profile_list: (skip)
 * @self: a #QmiMessageWdsGetProfileListOutput.
 * @value_profile_list: (out)(optional)(element-type QmiMessageWdsGetProfileListOutputProfileListProfile)(transfer none): a placeholder for the output #GArray of #QmiMessageWdsGetProfileListOutputProfileListProfile elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_list_output_get_profile_list (
    QmiMessageWdsGetProfileListOutput *self,
    GArray **value_profile_list,
    GError **error);


/**
 * qmi_message_wds_get_profile_list_output_get_profile_list_gir: (rename-to qmi_message_wds_get_profile_list_output_get_profile_list)
 * @self: a #QmiMessageWdsGetProfileListOutput.
 * @value_profile_list_ptr: (out)(optional)(element-type QmiMessageWdsGetProfileListOutputProfileListProfile)(transfer none): a placeholder for the output array of #QmiMessageWdsGetProfileListOutputProfileListProfile elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile List' field from @self.
 *
 * Version of qmi_message_wds_get_profile_list_output_get_profile_list() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_wds_get_profile_list_output_get_profile_list_gir (
    QmiMessageWdsGetProfileListOutput *self,
    GPtrArray **value_profile_list_ptr,
    GError **error);


/**
 * qmi_message_wds_get_profile_list_output_get_extended_error_code:
 * @self: a #QmiMessageWdsGetProfileListOutput.
 * @value_extended_error_code: (out)(optional): a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_list_output_get_extended_error_code (
    QmiMessageWdsGetProfileListOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);


/**
 * qmi_message_wds_get_profile_list_output_ref:
 * @self: a #QmiMessageWdsGetProfileListOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileListOutput *qmi_message_wds_get_profile_list_output_ref (QmiMessageWdsGetProfileListOutput *self);

/**
 * qmi_message_wds_get_profile_list_output_unref:
 * @self: a #QmiMessageWdsGetProfileListOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.8
 */
void qmi_message_wds_get_profile_list_output_unref (QmiMessageWdsGetProfileListOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetProfileListOutput, qmi_message_wds_get_profile_list_output_unref)

/**
 * qmi_message_wds_get_profile_list_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetProfileListOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetProfileListOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_profile_list_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetProfileListOutput *qmi_message_wds_get_profile_list_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Profile Settings */


/* --- Input -- */

/**
 * QmiMessageWdsGetProfileSettingsInput:
 *
 * The #QmiMessageWdsGetProfileSettingsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetProfileSettingsInput QmiMessageWdsGetProfileSettingsInput;
GType qmi_message_wds_get_profile_settings_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PROFILE_SETTINGS_INPUT (qmi_message_wds_get_profile_settings_input_get_type ())


/**
 * qmi_message_wds_get_profile_settings_input_get_profile_id:
 * @self: a #QmiMessageWdsGetProfileSettingsInput.
 * @value_profile_id_profile_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_id_profile_index: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_input_get_profile_id (
    QmiMessageWdsGetProfileSettingsInput *self,
    QmiWdsProfileType *value_profile_id_profile_type,
    guint8 *value_profile_id_profile_index,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_input_set_profile_id:
 * @self: a #QmiMessageWdsGetProfileSettingsInput.
 * @value_profile_id_profile_type: a #QmiWdsProfileType.
 * @value_profile_id_profile_index: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile ID' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_input_set_profile_id (
    QmiMessageWdsGetProfileSettingsInput *self,
    QmiWdsProfileType value_profile_id_profile_type,
    guint8 value_profile_id_profile_index,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_input_ref:
 * @self: a #QmiMessageWdsGetProfileSettingsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileSettingsInput *qmi_message_wds_get_profile_settings_input_ref (QmiMessageWdsGetProfileSettingsInput *self);

/**
 * qmi_message_wds_get_profile_settings_input_unref:
 * @self: a #QmiMessageWdsGetProfileSettingsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.8
 */
void qmi_message_wds_get_profile_settings_input_unref (QmiMessageWdsGetProfileSettingsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetProfileSettingsInput, qmi_message_wds_get_profile_settings_input_unref)

/**
 * qmi_message_wds_get_profile_settings_input_new:
 *
 * Allocates a new #QmiMessageWdsGetProfileSettingsInput.
 *
 * Returns: the newly created #QmiMessageWdsGetProfileSettingsInput. The returned value should be freed with qmi_message_wds_get_profile_settings_input_unref().
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileSettingsInput *qmi_message_wds_get_profile_settings_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsGetProfileSettingsOutput:
 *
 * The #QmiMessageWdsGetProfileSettingsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetProfileSettingsOutput QmiMessageWdsGetProfileSettingsOutput;
GType qmi_message_wds_get_profile_settings_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PROFILE_SETTINGS_OUTPUT (qmi_message_wds_get_profile_settings_output_get_type ())


/**
 * qmi_message_wds_get_profile_settings_output_get_result:
 * @self: a QmiMessageWdsGetProfileSettingsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_result (
    QmiMessageWdsGetProfileSettingsOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_profile_name:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_profile_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_profile_name (
    QmiMessageWdsGetProfileSettingsOutput *self,
    const gchar **value_profile_name,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_type:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_type: (out)(optional): a placeholder for the output #QmiWdsPdpType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_type (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsPdpType *value_pdp_type,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_header_compression_type:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_header_compression_type: (out)(optional): a placeholder for the output #QmiWdsPdpHeaderCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Header Compression Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_header_compression_type (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsPdpHeaderCompressionType *value_pdp_header_compression_type,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_data_compression_type:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_data_compression_type: (out)(optional): a placeholder for the output #QmiWdsPdpDataCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Data Compression Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_data_compression_type (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsPdpDataCompressionType *value_pdp_data_compression_type,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_apn_name:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_apn_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_apn_name (
    QmiMessageWdsGetProfileSettingsOutput *self,
    const gchar **value_apn_name,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_primary_ipv4_dns_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary IPv4 DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_primary_ipv4_dns_address (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint32 *value_primary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_secondary_ipv4_dns_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary IPv4 DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_secondary_ipv4_dns_address (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint32 *value_secondary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_umts_requested_qos:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_umts_requested_qos_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_umts_requested_qos (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_traffic_class,
    guint32 *value_umts_requested_qos_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_qos_delivery_order,
    guint32 *value_umts_requested_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_transfer_delay,
    guint32 *value_umts_requested_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_umts_minimum_qos:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_umts_minimum_qos_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_umts_minimum_qos (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_traffic_class,
    guint32 *value_umts_minimum_qos_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_qos_delivery_order,
    guint32 *value_umts_minimum_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_transfer_delay,
    guint32 *value_umts_minimum_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_gprs_requested_qos:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_gprs_requested_qos_precedence_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_delay_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_reliability_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_peak_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_mean_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Requested QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_gprs_requested_qos (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint32 *value_gprs_requested_qos_precedence_class,
    guint32 *value_gprs_requested_qos_delay_class,
    guint32 *value_gprs_requested_qos_reliability_class,
    guint32 *value_gprs_requested_qos_peak_throughput_class,
    guint32 *value_gprs_requested_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_gprs_minimum_qos:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_gprs_minimum_qos_precedence_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_delay_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_reliability_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_peak_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_mean_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Minimum QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_gprs_minimum_qos (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint32 *value_gprs_minimum_qos_precedence_class,
    guint32 *value_gprs_minimum_qos_delay_class,
    guint32 *value_gprs_minimum_qos_reliability_class,
    guint32 *value_gprs_minimum_qos_peak_throughput_class,
    guint32 *value_gprs_minimum_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_username:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_username: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_username (
    QmiMessageWdsGetProfileSettingsOutput *self,
    const gchar **value_username,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_password:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_password: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Password' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_password (
    QmiMessageWdsGetProfileSettingsOutput *self,
    const gchar **value_password,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_authentication:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_authentication: (out)(optional): a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_authentication (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsAuthentication *value_authentication,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_ipv4_address_preference:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_ipv4_address_preference: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_ipv4_address_preference (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint32 *value_ipv4_address_preference,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pcscf_address_using_pco: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using PCO' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pcscf_address_using_pco (
    QmiMessageWdsGetProfileSettingsOutput *self,
    gboolean *value_pcscf_address_using_pco,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_access_control:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_access_control: (out)(optional): a placeholder for the output #QmiWdsPdpAccessControl, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Access Control' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_access_control (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsPdpAccessControl *value_pdp_access_control,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_pcscf_address_using_dhcp:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pcscf_address_using_dhcp: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using DHCP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pcscf_address_using_dhcp (
    QmiMessageWdsGetProfileSettingsOutput *self,
    gboolean *value_pcscf_address_using_dhcp,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_imcn_flag:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_imcn_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMCN Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_imcn_flag (
    QmiMessageWdsGetProfileSettingsOutput *self,
    gboolean *value_imcn_flag,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_context_number:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_context_number: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_context_number (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint8 *value_pdp_context_number,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_context_secondary_flag:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_context_secondary_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Secondary Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_context_secondary_flag (
    QmiMessageWdsGetProfileSettingsOutput *self,
    gboolean *value_pdp_context_secondary_flag,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_pdp_context_primary_id:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_pdp_context_primary_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Primary ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_pdp_context_primary_id (
    QmiMessageWdsGetProfileSettingsOutput *self,
    guint8 *value_pdp_context_primary_id,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_ipv6_address_preference:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_ipv6_address_preference_address: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_ipv6_address_preference (
    QmiMessageWdsGetProfileSettingsOutput *self,
    GArray **value_ipv6_address_preference_address,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_umts_requested_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_signaling_indication: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_umts_requested_qos_with_signaling_indication_flag (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_requested_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_umts_minimum_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_umts_minimum_qos_with_signaling_indication_flag (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_ipv6_primary_dns_address_preference:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_ipv6_primary_dns_address_preference: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Primary DNS Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_ipv6_primary_dns_address_preference (
    QmiMessageWdsGetProfileSettingsOutput *self,
    GArray **value_ipv6_primary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_ipv6_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_ipv6_secondary_dns_address_preference: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Secondary DNS Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_ipv6_secondary_dns_address_preference (
    QmiMessageWdsGetProfileSettingsOutput *self,
    GArray **value_ipv6_secondary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_address_allocation_preference:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_address_allocation_preference: (out)(optional): a placeholder for the output #QmiWdsAddressAllocationPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Address Allocation Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_get_profile_settings_output_get_address_allocation_preference (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsAddressAllocationPreference *value_address_allocation_preference,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_lte_qos_parameters:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_lte_qos_parameters_qos_class_identifier: (out)(optional): a placeholder for the output #QmiWdsQosClassIdentifier, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE QoS Parameters' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_profile_settings_output_get_lte_qos_parameters (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsQosClassIdentifier *value_lte_qos_parameters_qos_class_identifier,
    guint32 *value_lte_qos_parameters_guaranteed_downlink_bitrate,
    guint32 *value_lte_qos_parameters_max_downlink_bitrate,
    guint32 *value_lte_qos_parameters_guaranteed_uplink_bitrate,
    guint32 *value_lte_qos_parameters_max_uplink_bitrate,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_apn_disabled_flag:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_apn_disabled_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Disabled Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_get_profile_settings_output_get_apn_disabled_flag (
    QmiMessageWdsGetProfileSettingsOutput *self,
    gboolean *value_apn_disabled_flag,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_roaming_disallowed_flag:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_roaming_disallowed_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Disallowed Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_get_profile_settings_output_get_roaming_disallowed_flag (
    QmiMessageWdsGetProfileSettingsOutput *self,
    gboolean *value_roaming_disallowed_flag,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_apn_type_mask:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_apn_type_mask: (out)(optional): a placeholder for the output #QmiWdsApnTypeMask, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Type Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.30
 */
gboolean qmi_message_wds_get_profile_settings_output_get_apn_type_mask (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsApnTypeMask *value_apn_type_mask,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_clat_enabled:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_clat_enabled: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'CLAT Enabled' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_get_profile_settings_output_get_clat_enabled (
    QmiMessageWdsGetProfileSettingsOutput *self,
    gboolean *value_clat_enabled,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_ipv6_prefix_delegation:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_ipv6_prefix_delegation: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Prefix Delegation' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_get_profile_settings_output_get_ipv6_prefix_delegation (
    QmiMessageWdsGetProfileSettingsOutput *self,
    gboolean *value_ipv6_prefix_delegation,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_get_extended_error_code:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 * @value_extended_error_code: (out)(optional): a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_profile_settings_output_get_extended_error_code (
    QmiMessageWdsGetProfileSettingsOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);


/**
 * qmi_message_wds_get_profile_settings_output_ref:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileSettingsOutput *qmi_message_wds_get_profile_settings_output_ref (QmiMessageWdsGetProfileSettingsOutput *self);

/**
 * qmi_message_wds_get_profile_settings_output_unref:
 * @self: a #QmiMessageWdsGetProfileSettingsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.8
 */
void qmi_message_wds_get_profile_settings_output_unref (QmiMessageWdsGetProfileSettingsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetProfileSettingsOutput, qmi_message_wds_get_profile_settings_output_unref)

/**
 * qmi_message_wds_get_profile_settings_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetProfileSettingsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetProfileSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_profile_settings_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetProfileSettingsOutput *qmi_message_wds_get_profile_settings_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Default Settings */


/* --- Input -- */

/**
 * QmiMessageWdsGetDefaultSettingsInput:
 *
 * The #QmiMessageWdsGetDefaultSettingsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetDefaultSettingsInput QmiMessageWdsGetDefaultSettingsInput;
GType qmi_message_wds_get_default_settings_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_DEFAULT_SETTINGS_INPUT (qmi_message_wds_get_default_settings_input_get_type ())


/**
 * qmi_message_wds_get_default_settings_input_get_profile_type:
 * @self: a #QmiMessageWdsGetDefaultSettingsInput.
 * @value_profile_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_input_get_profile_type (
    QmiMessageWdsGetDefaultSettingsInput *self,
    QmiWdsProfileType *value_profile_type,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_input_set_profile_type:
 * @self: a #QmiMessageWdsGetDefaultSettingsInput.
 * @value_profile_type: a #QmiWdsProfileType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_input_set_profile_type (
    QmiMessageWdsGetDefaultSettingsInput *self,
    QmiWdsProfileType value_profile_type,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_input_ref:
 * @self: a #QmiMessageWdsGetDefaultSettingsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.8
 */
QmiMessageWdsGetDefaultSettingsInput *qmi_message_wds_get_default_settings_input_ref (QmiMessageWdsGetDefaultSettingsInput *self);

/**
 * qmi_message_wds_get_default_settings_input_unref:
 * @self: a #QmiMessageWdsGetDefaultSettingsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.8
 */
void qmi_message_wds_get_default_settings_input_unref (QmiMessageWdsGetDefaultSettingsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetDefaultSettingsInput, qmi_message_wds_get_default_settings_input_unref)

/**
 * qmi_message_wds_get_default_settings_input_new:
 *
 * Allocates a new #QmiMessageWdsGetDefaultSettingsInput.
 *
 * Returns: the newly created #QmiMessageWdsGetDefaultSettingsInput. The returned value should be freed with qmi_message_wds_get_default_settings_input_unref().
 *
 * Since: 1.8
 */
QmiMessageWdsGetDefaultSettingsInput *qmi_message_wds_get_default_settings_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsGetDefaultSettingsOutput:
 *
 * The #QmiMessageWdsGetDefaultSettingsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.8
 */
typedef struct _QmiMessageWdsGetDefaultSettingsOutput QmiMessageWdsGetDefaultSettingsOutput;
GType qmi_message_wds_get_default_settings_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_DEFAULT_SETTINGS_OUTPUT (qmi_message_wds_get_default_settings_output_get_type ())


/**
 * qmi_message_wds_get_default_settings_output_get_result:
 * @self: a QmiMessageWdsGetDefaultSettingsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_result (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_profile_name:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_profile_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_profile_name (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    const gchar **value_profile_name,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_pdp_type:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_type: (out)(optional): a placeholder for the output #QmiWdsPdpType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_type (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsPdpType *value_pdp_type,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_pdp_header_compression_type:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_header_compression_type: (out)(optional): a placeholder for the output #QmiWdsPdpHeaderCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Header Compression Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_header_compression_type (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsPdpHeaderCompressionType *value_pdp_header_compression_type,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_pdp_data_compression_type:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_data_compression_type: (out)(optional): a placeholder for the output #QmiWdsPdpDataCompressionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Data Compression Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_data_compression_type (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsPdpDataCompressionType *value_pdp_data_compression_type,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_apn_name:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_apn_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_apn_name (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    const gchar **value_apn_name,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_primary_ipv4_dns_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary IPv4 DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_primary_ipv4_dns_address (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint32 *value_primary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_secondary_ipv4_dns_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary IPv4 DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_secondary_ipv4_dns_address (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint32 *value_secondary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_umts_requested_qos:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_umts_requested_qos_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_umts_requested_qos (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_traffic_class,
    guint32 *value_umts_requested_qos_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_qos_delivery_order,
    guint32 *value_umts_requested_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_transfer_delay,
    guint32 *value_umts_requested_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_umts_minimum_qos:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_umts_minimum_qos_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_umts_minimum_qos (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_traffic_class,
    guint32 *value_umts_minimum_qos_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_qos_delivery_order,
    guint32 *value_umts_minimum_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_transfer_delay,
    guint32 *value_umts_minimum_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_gprs_requested_qos:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_gprs_requested_qos_precedence_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_delay_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_reliability_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_peak_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_requested_qos_mean_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Requested QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_gprs_requested_qos (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint32 *value_gprs_requested_qos_precedence_class,
    guint32 *value_gprs_requested_qos_delay_class,
    guint32 *value_gprs_requested_qos_reliability_class,
    guint32 *value_gprs_requested_qos_peak_throughput_class,
    guint32 *value_gprs_requested_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_gprs_minimum_qos:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_gprs_minimum_qos_precedence_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_delay_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_reliability_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_peak_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_minimum_qos_mean_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Minimum QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_gprs_minimum_qos (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint32 *value_gprs_minimum_qos_precedence_class,
    guint32 *value_gprs_minimum_qos_delay_class,
    guint32 *value_gprs_minimum_qos_reliability_class,
    guint32 *value_gprs_minimum_qos_peak_throughput_class,
    guint32 *value_gprs_minimum_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_username:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_username: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_username (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    const gchar **value_username,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_password:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_password: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Password' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_password (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    const gchar **value_password,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_authentication:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_authentication: (out)(optional): a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_authentication (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsAuthentication *value_authentication,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_ipv4_address_preference:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_ipv4_address_preference: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_ipv4_address_preference (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint32 *value_ipv4_address_preference,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pcscf_address_using_pco: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using PCO' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_pcscf_address_using_pco (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    gboolean *value_pcscf_address_using_pco,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_pdp_access_control:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_access_control: (out)(optional): a placeholder for the output #QmiWdsPdpAccessControl, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Access Control' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_access_control (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsPdpAccessControl *value_pdp_access_control,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_pcscf_address_using_dhcp:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pcscf_address_using_dhcp: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using DHCP' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_pcscf_address_using_dhcp (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    gboolean *value_pcscf_address_using_dhcp,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_imcn_flag:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_imcn_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMCN Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_imcn_flag (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    gboolean *value_imcn_flag,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_pdp_context_number:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_context_number: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_context_number (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint8 *value_pdp_context_number,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_pdp_context_secondary_flag:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_context_secondary_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Secondary Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_context_secondary_flag (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    gboolean *value_pdp_context_secondary_flag,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_pdp_context_primary_id:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_pdp_context_primary_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Primary ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_pdp_context_primary_id (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    guint8 *value_pdp_context_primary_id,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_ipv6_address_preference:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_ipv6_address_preference_address: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_ipv6_address_preference (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    GArray **value_ipv6_address_preference_address,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_umts_requested_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_requested_qos_with_signaling_indication_flag_signaling_indication: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Requested QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_umts_requested_qos_with_signaling_indication_flag (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_requested_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_requested_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_requested_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_requested_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_requested_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_requested_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_umts_minimum_qos_with_signaling_indication_flag:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Minimum QoS With Signaling Indication Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_umts_minimum_qos_with_signaling_indication_flag (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_minimum_qos_with_signaling_indication_flag_traffic_class,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_max_downlink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_uplink_bitrate,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_minimum_qos_with_signaling_indication_flag_qos_delivery_order,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_minimum_qos_with_signaling_indication_flag_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_minimum_qos_with_signaling_indication_flag_delivery_erroneous_sdu,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_transfer_delay,
    guint32 *value_umts_minimum_qos_with_signaling_indication_flag_traffic_handling_priority,
    gint8 *value_umts_minimum_qos_with_signaling_indication_flag_signaling_indication,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_ipv6_primary_dns_address_preference:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_ipv6_primary_dns_address_preference: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Primary DNS Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_ipv6_primary_dns_address_preference (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    GArray **value_ipv6_primary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_ipv6_secondary_dns_address_preference:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_ipv6_secondary_dns_address_preference: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Secondary DNS Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_ipv6_secondary_dns_address_preference (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    GArray **value_ipv6_secondary_dns_address_preference,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_address_allocation_preference:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_address_allocation_preference: (out)(optional): a placeholder for the output #QmiWdsAddressAllocationPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Address Allocation Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_get_default_settings_output_get_address_allocation_preference (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsAddressAllocationPreference *value_address_allocation_preference,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_lte_qos_parameters:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_lte_qos_parameters_qos_class_identifier: (out)(optional): a placeholder for the output #QmiWdsQosClassIdentifier, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_lte_qos_parameters_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'LTE QoS Parameters' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_get_default_settings_output_get_lte_qos_parameters (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsQosClassIdentifier *value_lte_qos_parameters_qos_class_identifier,
    guint32 *value_lte_qos_parameters_guaranteed_downlink_bitrate,
    guint32 *value_lte_qos_parameters_max_downlink_bitrate,
    guint32 *value_lte_qos_parameters_guaranteed_uplink_bitrate,
    guint32 *value_lte_qos_parameters_max_uplink_bitrate,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_apn_disabled_flag:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_apn_disabled_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Disabled Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.36
 */
gboolean qmi_message_wds_get_default_settings_output_get_apn_disabled_flag (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    gboolean *value_apn_disabled_flag,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_get_extended_error_code:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 * @value_extended_error_code: (out)(optional): a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.8
 */
gboolean qmi_message_wds_get_default_settings_output_get_extended_error_code (
    QmiMessageWdsGetDefaultSettingsOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);


/**
 * qmi_message_wds_get_default_settings_output_ref:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.8
 */
QmiMessageWdsGetDefaultSettingsOutput *qmi_message_wds_get_default_settings_output_ref (QmiMessageWdsGetDefaultSettingsOutput *self);

/**
 * qmi_message_wds_get_default_settings_output_unref:
 * @self: a #QmiMessageWdsGetDefaultSettingsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.8
 */
void qmi_message_wds_get_default_settings_output_unref (QmiMessageWdsGetDefaultSettingsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetDefaultSettingsOutput, qmi_message_wds_get_default_settings_output_unref)

/**
 * qmi_message_wds_get_default_settings_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetDefaultSettingsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetDefaultSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_default_settings_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetDefaultSettingsOutput *qmi_message_wds_get_default_settings_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Current Settings */


/* --- Input -- */

/**
 * QmiMessageWdsGetCurrentSettingsInput:
 *
 * The #QmiMessageWdsGetCurrentSettingsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsGetCurrentSettingsInput QmiMessageWdsGetCurrentSettingsInput;
GType qmi_message_wds_get_current_settings_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_CURRENT_SETTINGS_INPUT (qmi_message_wds_get_current_settings_input_get_type ())


/**
 * qmi_message_wds_get_current_settings_input_get_requested_settings:
 * @self: a #QmiMessageWdsGetCurrentSettingsInput.
 * @value_requested_settings: (out)(optional): a placeholder for the output #QmiWdsRequestedSettings, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Requested Settings' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_input_get_requested_settings (
    QmiMessageWdsGetCurrentSettingsInput *self,
    QmiWdsRequestedSettings *value_requested_settings,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_input_set_requested_settings:
 * @self: a #QmiMessageWdsGetCurrentSettingsInput.
 * @value_requested_settings: a #QmiWdsRequestedSettings.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Requested Settings' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_input_set_requested_settings (
    QmiMessageWdsGetCurrentSettingsInput *self,
    QmiWdsRequestedSettings value_requested_settings,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_input_ref:
 * @self: a #QmiMessageWdsGetCurrentSettingsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsGetCurrentSettingsInput *qmi_message_wds_get_current_settings_input_ref (QmiMessageWdsGetCurrentSettingsInput *self);

/**
 * qmi_message_wds_get_current_settings_input_unref:
 * @self: a #QmiMessageWdsGetCurrentSettingsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_get_current_settings_input_unref (QmiMessageWdsGetCurrentSettingsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetCurrentSettingsInput, qmi_message_wds_get_current_settings_input_unref)

/**
 * qmi_message_wds_get_current_settings_input_new:
 *
 * Allocates a new #QmiMessageWdsGetCurrentSettingsInput.
 *
 * Returns: the newly created #QmiMessageWdsGetCurrentSettingsInput. The returned value should be freed with qmi_message_wds_get_current_settings_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsGetCurrentSettingsInput *qmi_message_wds_get_current_settings_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsGetCurrentSettingsOutput:
 *
 * The #QmiMessageWdsGetCurrentSettingsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsGetCurrentSettingsOutput QmiMessageWdsGetCurrentSettingsOutput;
GType qmi_message_wds_get_current_settings_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_CURRENT_SETTINGS_OUTPUT (qmi_message_wds_get_current_settings_output_get_type ())


/**
 * qmi_message_wds_get_current_settings_output_get_result:
 * @self: a QmiMessageWdsGetCurrentSettingsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_result (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_profile_name:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_profile_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_profile_name (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    const gchar **value_profile_name,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_pdp_type:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_pdp_type: (out)(optional): a placeholder for the output #QmiWdsPdpType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_pdp_type (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    QmiWdsPdpType *value_pdp_type,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_apn_name:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_apn_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_apn_name (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    const gchar **value_apn_name,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_primary_ipv4_dns_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary IPv4 DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_primary_ipv4_dns_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_primary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_secondary_ipv4_dns_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary IPv4 DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_secondary_ipv4_dns_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_secondary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_umts_granted_qos:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_umts_granted_qos_traffic_class: (out)(optional): a placeholder for the output #QmiWdsTrafficClass, or %NULL if not required.
 * @value_umts_granted_qos_max_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_granted_qos_max_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_granted_qos_guaranteed_uplink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_granted_qos_guaranteed_downlink_bitrate: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_granted_qos_qos_delivery_order: (out)(optional): a placeholder for the output #QmiWdsDeliveryOrder, or %NULL if not required.
 * @value_umts_granted_qos_maximum_sdu_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_granted_qos_sdu_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduErrorRatio, or %NULL if not required.
 * @value_umts_granted_qos_residual_bit_error_ratio: (out)(optional): a placeholder for the output #QmiWdsSduResidualBitErrorRatio, or %NULL if not required.
 * @value_umts_granted_qos_delivery_erroneous_sdu: (out)(optional): a placeholder for the output #QmiWdsSduErroneousDelivery, or %NULL if not required.
 * @value_umts_granted_qos_transfer_delay: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_umts_granted_qos_traffic_handling_priority: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'UMTS Granted QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_current_settings_output_get_umts_granted_qos (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    QmiWdsTrafficClass *value_umts_granted_qos_traffic_class,
    guint32 *value_umts_granted_qos_max_uplink_bitrate,
    guint32 *value_umts_granted_qos_max_downlink_bitrate,
    guint32 *value_umts_granted_qos_guaranteed_uplink_bitrate,
    guint32 *value_umts_granted_qos_guaranteed_downlink_bitrate,
    QmiWdsDeliveryOrder *value_umts_granted_qos_qos_delivery_order,
    guint32 *value_umts_granted_qos_maximum_sdu_size,
    QmiWdsSduErrorRatio *value_umts_granted_qos_sdu_error_ratio,
    QmiWdsSduResidualBitErrorRatio *value_umts_granted_qos_residual_bit_error_ratio,
    QmiWdsSduErroneousDelivery *value_umts_granted_qos_delivery_erroneous_sdu,
    guint32 *value_umts_granted_qos_transfer_delay,
    guint32 *value_umts_granted_qos_traffic_handling_priority,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_gprs_granted_qos:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_gprs_granted_qos_precedence_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_granted_qos_delay_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_granted_qos_reliability_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_granted_qos_peak_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_gprs_granted_qos_mean_throughput_class: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'GPRS Granted QoS' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_gprs_granted_qos (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_gprs_granted_qos_precedence_class,
    guint32 *value_gprs_granted_qos_delay_class,
    guint32 *value_gprs_granted_qos_reliability_class,
    guint32 *value_gprs_granted_qos_peak_throughput_class,
    guint32 *value_gprs_granted_qos_mean_throughput_class,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_username:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_username: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_username (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    const gchar **value_username,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_authentication:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_authentication: (out)(optional): a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_authentication (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    QmiWdsAuthentication *value_authentication,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_ipv4_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv4_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv4_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_ipv4_address,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_profile_id:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_profile_id_profile_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_id_profile_index: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_profile_id (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    QmiWdsProfileType *value_profile_id_profile_type,
    guint8 *value_profile_id_profile_index,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_ipv4_gateway_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv4_gateway_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Gateway Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv4_gateway_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_ipv4_gateway_address,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_ipv4_gateway_subnet_mask:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv4_gateway_subnet_mask: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Gateway Subnet Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv4_gateway_subnet_mask (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_ipv4_gateway_subnet_mask,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_pcscf_address_using_pco:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_pcscf_address_using_pco: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Address Using PCO' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_pcscf_address_using_pco (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint8 *value_pcscf_address_using_pco,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_pcscf_server_address_list:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_pcscf_server_address_list: (out)(optional)(element-type guint32)(transfer none): a placeholder for the output #GArray of #guint32 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Server Address List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_pcscf_server_address_list (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_pcscf_server_address_list,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_pcscf_domain_name_list:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_pcscf_domain_name_list: (out)(optional)(element-type utf8)(transfer none): a placeholder for the output #GArray of #gchar * elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PCSCF Domain Name List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_pcscf_domain_name_list (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_pcscf_domain_name_list,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_ipv6_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv6_address_address: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_ipv6_address_prefix_length: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv6_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_ipv6_address_address,
    guint8 *value_ipv6_address_prefix_length,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_ipv6_gateway_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv6_gateway_address_address: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_ipv6_gateway_address_prefix_length: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Gateway Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv6_gateway_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_ipv6_gateway_address_address,
    guint8 *value_ipv6_gateway_address_prefix_length,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_ipv6_primary_dns_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv6_primary_dns_address: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Primary DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv6_primary_dns_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_ipv6_primary_dns_address,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_ipv6_secondary_dns_address:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ipv6_secondary_dns_address: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv6 Secondary DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ipv6_secondary_dns_address (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_ipv6_secondary_dns_address,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_mtu:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_mtu: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'MTU' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_mtu (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint32 *value_mtu,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_domain_name_list:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_domain_name_list: (out)(optional)(element-type utf8)(transfer none): a placeholder for the output #GArray of #gchar * elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Domain Name List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_domain_name_list (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    GArray **value_domain_name_list,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_ip_family:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_ip_family: (out)(optional): a placeholder for the output #QmiWdsIpFamily, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IP Family' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_ip_family (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    QmiWdsIpFamily *value_ip_family,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_imcn_flag:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_imcn_flag: (out)(optional): a placeholder for the output #gint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IMCN Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_imcn_flag (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    gint8 *value_imcn_flag,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_extended_technology_preference:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_extended_technology_preference: (out)(optional): a placeholder for the output #QmiWdsExtendedTechnologyPreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Technology Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_settings_output_get_extended_technology_preference (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    QmiWdsExtendedTechnologyPreference *value_extended_technology_preference,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_get_operator_reserved_pco:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 * @value_operator_reserved_pco_mcc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_operator_reserved_pco_mnc: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @value_operator_reserved_pco_mnc_includes_pcs_digit: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @value_operator_reserved_pco_app_specific_info: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_operator_reserved_pco_container_id: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Operator Reserved PCO' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_wds_get_current_settings_output_get_operator_reserved_pco (
    QmiMessageWdsGetCurrentSettingsOutput *self,
    guint16 *value_operator_reserved_pco_mcc,
    guint16 *value_operator_reserved_pco_mnc,
    gboolean *value_operator_reserved_pco_mnc_includes_pcs_digit,
    GArray **value_operator_reserved_pco_app_specific_info,
    guint16 *value_operator_reserved_pco_container_id,
    GError **error);


/**
 * qmi_message_wds_get_current_settings_output_ref:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsGetCurrentSettingsOutput *qmi_message_wds_get_current_settings_output_ref (QmiMessageWdsGetCurrentSettingsOutput *self);

/**
 * qmi_message_wds_get_current_settings_output_unref:
 * @self: a #QmiMessageWdsGetCurrentSettingsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_get_current_settings_output_unref (QmiMessageWdsGetCurrentSettingsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetCurrentSettingsOutput, qmi_message_wds_get_current_settings_output_unref)

/**
 * qmi_message_wds_get_current_settings_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetCurrentSettingsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetCurrentSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_current_settings_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetCurrentSettingsOutput *qmi_message_wds_get_current_settings_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Dormancy Status */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetDormancyStatusOutput:
 *
 * The #QmiMessageWdsGetDormancyStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsGetDormancyStatusOutput QmiMessageWdsGetDormancyStatusOutput;
GType qmi_message_wds_get_dormancy_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_DORMANCY_STATUS_OUTPUT (qmi_message_wds_get_dormancy_status_output_get_type ())


/**
 * qmi_message_wds_get_dormancy_status_output_get_result:
 * @self: a QmiMessageWdsGetDormancyStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_dormancy_status_output_get_result (
    QmiMessageWdsGetDormancyStatusOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_dormancy_status_output_get_dormancy_status:
 * @self: a #QmiMessageWdsGetDormancyStatusOutput.
 * @value_dormancy_status: (out)(optional): a placeholder for the output #QmiWdsDormancyStatus, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Dormancy Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_dormancy_status_output_get_dormancy_status (
    QmiMessageWdsGetDormancyStatusOutput *self,
    QmiWdsDormancyStatus *value_dormancy_status,
    GError **error);


/**
 * qmi_message_wds_get_dormancy_status_output_ref:
 * @self: a #QmiMessageWdsGetDormancyStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsGetDormancyStatusOutput *qmi_message_wds_get_dormancy_status_output_ref (QmiMessageWdsGetDormancyStatusOutput *self);

/**
 * qmi_message_wds_get_dormancy_status_output_unref:
 * @self: a #QmiMessageWdsGetDormancyStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_get_dormancy_status_output_unref (QmiMessageWdsGetDormancyStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetDormancyStatusOutput, qmi_message_wds_get_dormancy_status_output_unref)

/**
 * qmi_message_wds_get_dormancy_status_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetDormancyStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetDormancyStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_dormancy_status_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetDormancyStatusOutput *qmi_message_wds_get_dormancy_status_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Autoconnect Settings */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetAutoconnectSettingsOutput:
 *
 * The #QmiMessageWdsGetAutoconnectSettingsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsGetAutoconnectSettingsOutput QmiMessageWdsGetAutoconnectSettingsOutput;
GType qmi_message_wds_get_autoconnect_settings_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_AUTOCONNECT_SETTINGS_OUTPUT (qmi_message_wds_get_autoconnect_settings_output_get_type ())


/**
 * qmi_message_wds_get_autoconnect_settings_output_get_result:
 * @self: a QmiMessageWdsGetAutoconnectSettingsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_autoconnect_settings_output_get_result (
    QmiMessageWdsGetAutoconnectSettingsOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_autoconnect_settings_output_get_status:
 * @self: a #QmiMessageWdsGetAutoconnectSettingsOutput.
 * @value_status: (out)(optional): a placeholder for the output #QmiWdsAutoconnectSetting, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_autoconnect_settings_output_get_status (
    QmiMessageWdsGetAutoconnectSettingsOutput *self,
    QmiWdsAutoconnectSetting *value_status,
    GError **error);


/**
 * qmi_message_wds_get_autoconnect_settings_output_get_roaming:
 * @self: a #QmiMessageWdsGetAutoconnectSettingsOutput.
 * @value_roaming: (out)(optional): a placeholder for the output #QmiWdsAutoconnectSettingRoaming, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_autoconnect_settings_output_get_roaming (
    QmiMessageWdsGetAutoconnectSettingsOutput *self,
    QmiWdsAutoconnectSettingRoaming *value_roaming,
    GError **error);


/**
 * qmi_message_wds_get_autoconnect_settings_output_ref:
 * @self: a #QmiMessageWdsGetAutoconnectSettingsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsGetAutoconnectSettingsOutput *qmi_message_wds_get_autoconnect_settings_output_ref (QmiMessageWdsGetAutoconnectSettingsOutput *self);

/**
 * qmi_message_wds_get_autoconnect_settings_output_unref:
 * @self: a #QmiMessageWdsGetAutoconnectSettingsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_get_autoconnect_settings_output_unref (QmiMessageWdsGetAutoconnectSettingsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetAutoconnectSettingsOutput, qmi_message_wds_get_autoconnect_settings_output_unref)

/**
 * qmi_message_wds_get_autoconnect_settings_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetAutoconnectSettingsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetAutoconnectSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_autoconnect_settings_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetAutoconnectSettingsOutput *qmi_message_wds_get_autoconnect_settings_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Data Bearer Technology */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetDataBearerTechnologyOutput:
 *
 * The #QmiMessageWdsGetDataBearerTechnologyOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsGetDataBearerTechnologyOutput QmiMessageWdsGetDataBearerTechnologyOutput;
GType qmi_message_wds_get_data_bearer_technology_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_DATA_BEARER_TECHNOLOGY_OUTPUT (qmi_message_wds_get_data_bearer_technology_output_get_type ())


/**
 * qmi_message_wds_get_data_bearer_technology_output_get_result:
 * @self: a QmiMessageWdsGetDataBearerTechnologyOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_data_bearer_technology_output_get_result (
    QmiMessageWdsGetDataBearerTechnologyOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_data_bearer_technology_output_get_current:
 * @self: a #QmiMessageWdsGetDataBearerTechnologyOutput.
 * @value_current: (out)(optional): a placeholder for the output #QmiWdsDataBearerTechnology, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_data_bearer_technology_output_get_current (
    QmiMessageWdsGetDataBearerTechnologyOutput *self,
    QmiWdsDataBearerTechnology *value_current,
    GError **error);


/**
 * qmi_message_wds_get_data_bearer_technology_output_get_last:
 * @self: a #QmiMessageWdsGetDataBearerTechnologyOutput.
 * @value_last: (out)(optional): a placeholder for the output #QmiWdsDataBearerTechnology, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Last' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_data_bearer_technology_output_get_last (
    QmiMessageWdsGetDataBearerTechnologyOutput *self,
    QmiWdsDataBearerTechnology *value_last,
    GError **error);


/**
 * qmi_message_wds_get_data_bearer_technology_output_ref:
 * @self: a #QmiMessageWdsGetDataBearerTechnologyOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsGetDataBearerTechnologyOutput *qmi_message_wds_get_data_bearer_technology_output_ref (QmiMessageWdsGetDataBearerTechnologyOutput *self);

/**
 * qmi_message_wds_get_data_bearer_technology_output_unref:
 * @self: a #QmiMessageWdsGetDataBearerTechnologyOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_get_data_bearer_technology_output_unref (QmiMessageWdsGetDataBearerTechnologyOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetDataBearerTechnologyOutput, qmi_message_wds_get_data_bearer_technology_output_unref)

/**
 * qmi_message_wds_get_data_bearer_technology_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetDataBearerTechnologyOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetDataBearerTechnologyOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_data_bearer_technology_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetDataBearerTechnologyOutput *qmi_message_wds_get_data_bearer_technology_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Current Data Bearer Technology */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetCurrentDataBearerTechnologyOutput:
 *
 * The #QmiMessageWdsGetCurrentDataBearerTechnologyOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsGetCurrentDataBearerTechnologyOutput QmiMessageWdsGetCurrentDataBearerTechnologyOutput;
GType qmi_message_wds_get_current_data_bearer_technology_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_CURRENT_DATA_BEARER_TECHNOLOGY_OUTPUT (qmi_message_wds_get_current_data_bearer_technology_output_get_type ())


/**
 * qmi_message_wds_get_current_data_bearer_technology_output_get_last:
 * @self: a #QmiMessageWdsGetCurrentDataBearerTechnologyOutput.
 * @value_last_network_type: (out)(optional): a placeholder for the output #QmiWdsNetworkType, or %NULL if not required.
 * @value_last_rat_mask: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_last_so_mask: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Last' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_data_bearer_technology_output_get_last (
    QmiMessageWdsGetCurrentDataBearerTechnologyOutput *self,
    QmiWdsNetworkType *value_last_network_type,
    guint32 *value_last_rat_mask,
    guint32 *value_last_so_mask,
    GError **error);


/**
 * qmi_message_wds_get_current_data_bearer_technology_output_get_result:
 * @self: a QmiMessageWdsGetCurrentDataBearerTechnologyOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_data_bearer_technology_output_get_result (
    QmiMessageWdsGetCurrentDataBearerTechnologyOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_current_data_bearer_technology_output_get_current:
 * @self: a #QmiMessageWdsGetCurrentDataBearerTechnologyOutput.
 * @value_current_network_type: (out)(optional): a placeholder for the output #QmiWdsNetworkType, or %NULL if not required.
 * @value_current_rat_mask: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_current_so_mask: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_get_current_data_bearer_technology_output_get_current (
    QmiMessageWdsGetCurrentDataBearerTechnologyOutput *self,
    QmiWdsNetworkType *value_current_network_type,
    guint32 *value_current_rat_mask,
    guint32 *value_current_so_mask,
    GError **error);


/**
 * qmi_message_wds_get_current_data_bearer_technology_output_ref:
 * @self: a #QmiMessageWdsGetCurrentDataBearerTechnologyOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsGetCurrentDataBearerTechnologyOutput *qmi_message_wds_get_current_data_bearer_technology_output_ref (QmiMessageWdsGetCurrentDataBearerTechnologyOutput *self);

/**
 * qmi_message_wds_get_current_data_bearer_technology_output_unref:
 * @self: a #QmiMessageWdsGetCurrentDataBearerTechnologyOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_get_current_data_bearer_technology_output_unref (QmiMessageWdsGetCurrentDataBearerTechnologyOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetCurrentDataBearerTechnologyOutput, qmi_message_wds_get_current_data_bearer_technology_output_unref)

/**
 * qmi_message_wds_get_current_data_bearer_technology_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetCurrentDataBearerTechnologyOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetCurrentDataBearerTechnologyOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_current_data_bearer_technology_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetCurrentDataBearerTechnologyOutput *qmi_message_wds_get_current_data_bearer_technology_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Default Profile Number */


/* --- Input -- */

/**
 * QmiMessageWdsGetDefaultProfileNumberInput:
 *
 * The #QmiMessageWdsGetDefaultProfileNumberInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWdsGetDefaultProfileNumberInput QmiMessageWdsGetDefaultProfileNumberInput;
GType qmi_message_wds_get_default_profile_number_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_DEFAULT_PROFILE_NUMBER_INPUT (qmi_message_wds_get_default_profile_number_input_get_type ())


/**
 * qmi_message_wds_get_default_profile_number_input_get_profile_type:
 * @self: a #QmiMessageWdsGetDefaultProfileNumberInput.
 * @value_profile_type_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_type_family: (out)(optional): a placeholder for the output #QmiWdsProfileFamily, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_default_profile_number_input_get_profile_type (
    QmiMessageWdsGetDefaultProfileNumberInput *self,
    QmiWdsProfileType *value_profile_type_type,
    QmiWdsProfileFamily *value_profile_type_family,
    GError **error);


/**
 * qmi_message_wds_get_default_profile_number_input_set_profile_type:
 * @self: a #QmiMessageWdsGetDefaultProfileNumberInput.
 * @value_profile_type_type: a #QmiWdsProfileType.
 * @value_profile_type_family: a #QmiWdsProfileFamily.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_default_profile_number_input_set_profile_type (
    QmiMessageWdsGetDefaultProfileNumberInput *self,
    QmiWdsProfileType value_profile_type_type,
    QmiWdsProfileFamily value_profile_type_family,
    GError **error);


/**
 * qmi_message_wds_get_default_profile_number_input_ref:
 * @self: a #QmiMessageWdsGetDefaultProfileNumberInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWdsGetDefaultProfileNumberInput *qmi_message_wds_get_default_profile_number_input_ref (QmiMessageWdsGetDefaultProfileNumberInput *self);

/**
 * qmi_message_wds_get_default_profile_number_input_unref:
 * @self: a #QmiMessageWdsGetDefaultProfileNumberInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wds_get_default_profile_number_input_unref (QmiMessageWdsGetDefaultProfileNumberInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetDefaultProfileNumberInput, qmi_message_wds_get_default_profile_number_input_unref)

/**
 * qmi_message_wds_get_default_profile_number_input_new:
 *
 * Allocates a new #QmiMessageWdsGetDefaultProfileNumberInput.
 *
 * Returns: the newly created #QmiMessageWdsGetDefaultProfileNumberInput. The returned value should be freed with qmi_message_wds_get_default_profile_number_input_unref().
 *
 * Since: 1.28
 */
QmiMessageWdsGetDefaultProfileNumberInput *qmi_message_wds_get_default_profile_number_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsGetDefaultProfileNumberOutput:
 *
 * The #QmiMessageWdsGetDefaultProfileNumberOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWdsGetDefaultProfileNumberOutput QmiMessageWdsGetDefaultProfileNumberOutput;
GType qmi_message_wds_get_default_profile_number_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_DEFAULT_PROFILE_NUMBER_OUTPUT (qmi_message_wds_get_default_profile_number_output_get_type ())


/**
 * qmi_message_wds_get_default_profile_number_output_get_result:
 * @self: a QmiMessageWdsGetDefaultProfileNumberOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_default_profile_number_output_get_result (
    QmiMessageWdsGetDefaultProfileNumberOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_default_profile_number_output_get_index:
 * @self: a #QmiMessageWdsGetDefaultProfileNumberOutput.
 * @value_index: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Index' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_default_profile_number_output_get_index (
    QmiMessageWdsGetDefaultProfileNumberOutput *self,
    guint8 *value_index,
    GError **error);


/**
 * qmi_message_wds_get_default_profile_number_output_get_extended_error_code:
 * @self: a #QmiMessageWdsGetDefaultProfileNumberOutput.
 * @value_extended_error_code: (out)(optional): a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_default_profile_number_output_get_extended_error_code (
    QmiMessageWdsGetDefaultProfileNumberOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);


/**
 * qmi_message_wds_get_default_profile_number_output_ref:
 * @self: a #QmiMessageWdsGetDefaultProfileNumberOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWdsGetDefaultProfileNumberOutput *qmi_message_wds_get_default_profile_number_output_ref (QmiMessageWdsGetDefaultProfileNumberOutput *self);

/**
 * qmi_message_wds_get_default_profile_number_output_unref:
 * @self: a #QmiMessageWdsGetDefaultProfileNumberOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wds_get_default_profile_number_output_unref (QmiMessageWdsGetDefaultProfileNumberOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetDefaultProfileNumberOutput, qmi_message_wds_get_default_profile_number_output_unref)

/**
 * qmi_message_wds_get_default_profile_number_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetDefaultProfileNumberOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetDefaultProfileNumberOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_default_profile_number_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetDefaultProfileNumberOutput *qmi_message_wds_get_default_profile_number_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Set Default Profile Number */


/* --- Input -- */

/**
 * QmiMessageWdsSetDefaultProfileNumberInput:
 *
 * The #QmiMessageWdsSetDefaultProfileNumberInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWdsSetDefaultProfileNumberInput QmiMessageWdsSetDefaultProfileNumberInput;
GType qmi_message_wds_set_default_profile_number_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_DEFAULT_PROFILE_NUMBER_INPUT (qmi_message_wds_set_default_profile_number_input_get_type ())


/**
 * qmi_message_wds_set_default_profile_number_input_get_profile_identifier:
 * @self: a #QmiMessageWdsSetDefaultProfileNumberInput.
 * @value_profile_identifier_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_identifier_family: (out)(optional): a placeholder for the output #QmiWdsProfileFamily, or %NULL if not required.
 * @value_profile_identifier_index: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Identifier' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_set_default_profile_number_input_get_profile_identifier (
    QmiMessageWdsSetDefaultProfileNumberInput *self,
    QmiWdsProfileType *value_profile_identifier_type,
    QmiWdsProfileFamily *value_profile_identifier_family,
    guint8 *value_profile_identifier_index,
    GError **error);


/**
 * qmi_message_wds_set_default_profile_number_input_set_profile_identifier:
 * @self: a #QmiMessageWdsSetDefaultProfileNumberInput.
 * @value_profile_identifier_type: a #QmiWdsProfileType.
 * @value_profile_identifier_family: a #QmiWdsProfileFamily.
 * @value_profile_identifier_index: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Identifier' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_set_default_profile_number_input_set_profile_identifier (
    QmiMessageWdsSetDefaultProfileNumberInput *self,
    QmiWdsProfileType value_profile_identifier_type,
    QmiWdsProfileFamily value_profile_identifier_family,
    guint8 value_profile_identifier_index,
    GError **error);


/**
 * qmi_message_wds_set_default_profile_number_input_ref:
 * @self: a #QmiMessageWdsSetDefaultProfileNumberInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWdsSetDefaultProfileNumberInput *qmi_message_wds_set_default_profile_number_input_ref (QmiMessageWdsSetDefaultProfileNumberInput *self);

/**
 * qmi_message_wds_set_default_profile_number_input_unref:
 * @self: a #QmiMessageWdsSetDefaultProfileNumberInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wds_set_default_profile_number_input_unref (QmiMessageWdsSetDefaultProfileNumberInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsSetDefaultProfileNumberInput, qmi_message_wds_set_default_profile_number_input_unref)

/**
 * qmi_message_wds_set_default_profile_number_input_new:
 *
 * Allocates a new #QmiMessageWdsSetDefaultProfileNumberInput.
 *
 * Returns: the newly created #QmiMessageWdsSetDefaultProfileNumberInput. The returned value should be freed with qmi_message_wds_set_default_profile_number_input_unref().
 *
 * Since: 1.28
 */
QmiMessageWdsSetDefaultProfileNumberInput *qmi_message_wds_set_default_profile_number_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsSetDefaultProfileNumberOutput:
 *
 * The #QmiMessageWdsSetDefaultProfileNumberOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWdsSetDefaultProfileNumberOutput QmiMessageWdsSetDefaultProfileNumberOutput;
GType qmi_message_wds_set_default_profile_number_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_DEFAULT_PROFILE_NUMBER_OUTPUT (qmi_message_wds_set_default_profile_number_output_get_type ())


/**
 * qmi_message_wds_set_default_profile_number_output_get_result:
 * @self: a QmiMessageWdsSetDefaultProfileNumberOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_set_default_profile_number_output_get_result (
    QmiMessageWdsSetDefaultProfileNumberOutput *self,
    GError **error);


/**
 * qmi_message_wds_set_default_profile_number_output_get_extended_error_code:
 * @self: a #QmiMessageWdsSetDefaultProfileNumberOutput.
 * @value_extended_error_code: (out)(optional): a placeholder for the output #QmiWdsDsProfileError, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Extended Error Code' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_set_default_profile_number_output_get_extended_error_code (
    QmiMessageWdsSetDefaultProfileNumberOutput *self,
    QmiWdsDsProfileError *value_extended_error_code,
    GError **error);


/**
 * qmi_message_wds_set_default_profile_number_output_ref:
 * @self: a #QmiMessageWdsSetDefaultProfileNumberOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWdsSetDefaultProfileNumberOutput *qmi_message_wds_set_default_profile_number_output_ref (QmiMessageWdsSetDefaultProfileNumberOutput *self);

/**
 * qmi_message_wds_set_default_profile_number_output_unref:
 * @self: a #QmiMessageWdsSetDefaultProfileNumberOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wds_set_default_profile_number_output_unref (QmiMessageWdsSetDefaultProfileNumberOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsSetDefaultProfileNumberOutput, qmi_message_wds_set_default_profile_number_output_unref)

/**
 * qmi_message_wds_set_default_profile_number_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsSetDefaultProfileNumberOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsSetDefaultProfileNumberOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_default_profile_number_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsSetDefaultProfileNumberOutput *qmi_message_wds_set_default_profile_number_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Set IP Family */


/* --- Input -- */

/**
 * QmiMessageWdsSetIpFamilyInput:
 *
 * The #QmiMessageWdsSetIpFamilyInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsSetIpFamilyInput QmiMessageWdsSetIpFamilyInput;
GType qmi_message_wds_set_ip_family_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_IP_FAMILY_INPUT (qmi_message_wds_set_ip_family_input_get_type ())


/**
 * qmi_message_wds_set_ip_family_input_get_preference:
 * @self: a #QmiMessageWdsSetIpFamilyInput.
 * @value_preference: (out)(optional): a placeholder for the output #QmiWdsIpFamily, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_set_ip_family_input_get_preference (
    QmiMessageWdsSetIpFamilyInput *self,
    QmiWdsIpFamily *value_preference,
    GError **error);


/**
 * qmi_message_wds_set_ip_family_input_set_preference:
 * @self: a #QmiMessageWdsSetIpFamilyInput.
 * @value_preference: a #QmiWdsIpFamily.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_set_ip_family_input_set_preference (
    QmiMessageWdsSetIpFamilyInput *self,
    QmiWdsIpFamily value_preference,
    GError **error);


/**
 * qmi_message_wds_set_ip_family_input_ref:
 * @self: a #QmiMessageWdsSetIpFamilyInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsSetIpFamilyInput *qmi_message_wds_set_ip_family_input_ref (QmiMessageWdsSetIpFamilyInput *self);

/**
 * qmi_message_wds_set_ip_family_input_unref:
 * @self: a #QmiMessageWdsSetIpFamilyInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_set_ip_family_input_unref (QmiMessageWdsSetIpFamilyInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsSetIpFamilyInput, qmi_message_wds_set_ip_family_input_unref)

/**
 * qmi_message_wds_set_ip_family_input_new:
 *
 * Allocates a new #QmiMessageWdsSetIpFamilyInput.
 *
 * Returns: the newly created #QmiMessageWdsSetIpFamilyInput. The returned value should be freed with qmi_message_wds_set_ip_family_input_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsSetIpFamilyInput *qmi_message_wds_set_ip_family_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsSetIpFamilyOutput:
 *
 * The #QmiMessageWdsSetIpFamilyOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
typedef struct _QmiMessageWdsSetIpFamilyOutput QmiMessageWdsSetIpFamilyOutput;
GType qmi_message_wds_set_ip_family_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_IP_FAMILY_OUTPUT (qmi_message_wds_set_ip_family_output_get_type ())


/**
 * qmi_message_wds_set_ip_family_output_get_result:
 * @self: a QmiMessageWdsSetIpFamilyOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.0
 */
gboolean qmi_message_wds_set_ip_family_output_get_result (
    QmiMessageWdsSetIpFamilyOutput *self,
    GError **error);


/**
 * qmi_message_wds_set_ip_family_output_ref:
 * @self: a #QmiMessageWdsSetIpFamilyOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.0
 */
QmiMessageWdsSetIpFamilyOutput *qmi_message_wds_set_ip_family_output_ref (QmiMessageWdsSetIpFamilyOutput *self);

/**
 * qmi_message_wds_set_ip_family_output_unref:
 * @self: a #QmiMessageWdsSetIpFamilyOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.0
 */
void qmi_message_wds_set_ip_family_output_unref (QmiMessageWdsSetIpFamilyOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsSetIpFamilyOutput, qmi_message_wds_set_ip_family_output_unref)

/**
 * qmi_message_wds_set_ip_family_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsSetIpFamilyOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsSetIpFamilyOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_ip_family_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsSetIpFamilyOutput *qmi_message_wds_set_ip_family_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Set Autoconnect Settings */


/* --- Input -- */

/**
 * QmiMessageWdsSetAutoconnectSettingsInput:
 *
 * The #QmiMessageWdsSetAutoconnectSettingsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsSetAutoconnectSettingsInput QmiMessageWdsSetAutoconnectSettingsInput;
GType qmi_message_wds_set_autoconnect_settings_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_AUTOCONNECT_SETTINGS_INPUT (qmi_message_wds_set_autoconnect_settings_input_get_type ())


/**
 * qmi_message_wds_set_autoconnect_settings_input_get_roaming:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsInput.
 * @value_roaming: (out)(optional): a placeholder for the output #QmiWdsAutoconnectSettingRoaming, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_set_autoconnect_settings_input_get_roaming (
    QmiMessageWdsSetAutoconnectSettingsInput *self,
    QmiWdsAutoconnectSettingRoaming *value_roaming,
    GError **error);


/**
 * qmi_message_wds_set_autoconnect_settings_input_set_roaming:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsInput.
 * @value_roaming: a #QmiWdsAutoconnectSettingRoaming.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Roaming' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_set_autoconnect_settings_input_set_roaming (
    QmiMessageWdsSetAutoconnectSettingsInput *self,
    QmiWdsAutoconnectSettingRoaming value_roaming,
    GError **error);


/**
 * qmi_message_wds_set_autoconnect_settings_input_get_status:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsInput.
 * @value_status: (out)(optional): a placeholder for the output #QmiWdsAutoconnectSetting, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Status' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_set_autoconnect_settings_input_get_status (
    QmiMessageWdsSetAutoconnectSettingsInput *self,
    QmiWdsAutoconnectSetting *value_status,
    GError **error);


/**
 * qmi_message_wds_set_autoconnect_settings_input_set_status:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsInput.
 * @value_status: a #QmiWdsAutoconnectSetting.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Status' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_set_autoconnect_settings_input_set_status (
    QmiMessageWdsSetAutoconnectSettingsInput *self,
    QmiWdsAutoconnectSetting value_status,
    GError **error);


/**
 * qmi_message_wds_set_autoconnect_settings_input_ref:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsSetAutoconnectSettingsInput *qmi_message_wds_set_autoconnect_settings_input_ref (QmiMessageWdsSetAutoconnectSettingsInput *self);

/**
 * qmi_message_wds_set_autoconnect_settings_input_unref:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_set_autoconnect_settings_input_unref (QmiMessageWdsSetAutoconnectSettingsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsSetAutoconnectSettingsInput, qmi_message_wds_set_autoconnect_settings_input_unref)

/**
 * qmi_message_wds_set_autoconnect_settings_input_new:
 *
 * Allocates a new #QmiMessageWdsSetAutoconnectSettingsInput.
 *
 * Returns: the newly created #QmiMessageWdsSetAutoconnectSettingsInput. The returned value should be freed with qmi_message_wds_set_autoconnect_settings_input_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsSetAutoconnectSettingsInput *qmi_message_wds_set_autoconnect_settings_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsSetAutoconnectSettingsOutput:
 *
 * The #QmiMessageWdsSetAutoconnectSettingsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsSetAutoconnectSettingsOutput QmiMessageWdsSetAutoconnectSettingsOutput;
GType qmi_message_wds_set_autoconnect_settings_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_AUTOCONNECT_SETTINGS_OUTPUT (qmi_message_wds_set_autoconnect_settings_output_get_type ())


/**
 * qmi_message_wds_set_autoconnect_settings_output_get_result:
 * @self: a QmiMessageWdsSetAutoconnectSettingsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_set_autoconnect_settings_output_get_result (
    QmiMessageWdsSetAutoconnectSettingsOutput *self,
    GError **error);


/**
 * qmi_message_wds_set_autoconnect_settings_output_ref:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsSetAutoconnectSettingsOutput *qmi_message_wds_set_autoconnect_settings_output_ref (QmiMessageWdsSetAutoconnectSettingsOutput *self);

/**
 * qmi_message_wds_set_autoconnect_settings_output_unref:
 * @self: a #QmiMessageWdsSetAutoconnectSettingsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_set_autoconnect_settings_output_unref (QmiMessageWdsSetAutoconnectSettingsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsSetAutoconnectSettingsOutput, qmi_message_wds_set_autoconnect_settings_output_unref)

/**
 * qmi_message_wds_set_autoconnect_settings_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsSetAutoconnectSettingsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsSetAutoconnectSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_autoconnect_settings_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsSetAutoconnectSettingsOutput *qmi_message_wds_set_autoconnect_settings_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get PDN Throttle Info */


/* --- Input -- */

/**
 * QmiMessageWdsGetPdnThrottleInfoInput:
 *
 * The #QmiMessageWdsGetPdnThrottleInfoInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsGetPdnThrottleInfoInput QmiMessageWdsGetPdnThrottleInfoInput;
GType qmi_message_wds_get_pdn_throttle_info_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PDN_THROTTLE_INFO_INPUT (qmi_message_wds_get_pdn_throttle_info_input_get_type ())


/**
 * qmi_message_wds_get_pdn_throttle_info_input_get_network_type:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoInput.
 * @value_network_type: (out)(optional): a placeholder for the output #QmiWdsDataSystemNetworkType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Network Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_pdn_throttle_info_input_get_network_type (
    QmiMessageWdsGetPdnThrottleInfoInput *self,
    QmiWdsDataSystemNetworkType *value_network_type,
    GError **error);


/**
 * qmi_message_wds_get_pdn_throttle_info_input_set_network_type:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoInput.
 * @value_network_type: a #QmiWdsDataSystemNetworkType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Network Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_pdn_throttle_info_input_set_network_type (
    QmiMessageWdsGetPdnThrottleInfoInput *self,
    QmiWdsDataSystemNetworkType value_network_type,
    GError **error);


/**
 * qmi_message_wds_get_pdn_throttle_info_input_ref:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsGetPdnThrottleInfoInput *qmi_message_wds_get_pdn_throttle_info_input_ref (QmiMessageWdsGetPdnThrottleInfoInput *self);

/**
 * qmi_message_wds_get_pdn_throttle_info_input_unref:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_get_pdn_throttle_info_input_unref (QmiMessageWdsGetPdnThrottleInfoInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetPdnThrottleInfoInput, qmi_message_wds_get_pdn_throttle_info_input_unref)

/**
 * qmi_message_wds_get_pdn_throttle_info_input_new:
 *
 * Allocates a new #QmiMessageWdsGetPdnThrottleInfoInput.
 *
 * Returns: the newly created #QmiMessageWdsGetPdnThrottleInfoInput. The returned value should be freed with qmi_message_wds_get_pdn_throttle_info_input_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsGetPdnThrottleInfoInput *qmi_message_wds_get_pdn_throttle_info_input_new (void);

/* --- Output -- */


/**
 * QmiMessageWdsGetPdnThrottleInfoOutputInfoElement:
 * @ipv4_throttled: a #gboolean.
 * @ipv6_throttled: a #gboolean.
 * @ipv4_throttle_time_left_ms: a #guint32.
 * @ipv6_throttle_time_left_ms: a #guint32.
 * @apn: a string.
 *
 * A QmiMessageWdsGetPdnThrottleInfoOutputInfoElement struct.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsGetPdnThrottleInfoOutputInfoElement {
    gboolean ipv4_throttled;
    gboolean ipv6_throttled;
    guint32 ipv4_throttle_time_left_ms;
    guint32 ipv6_throttle_time_left_ms;
    gchar *apn;
} QmiMessageWdsGetPdnThrottleInfoOutputInfoElement;

GType qmi_message_wds_get_pdn_throttle_info_output_info_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageWdsGetPdnThrottleInfoOutput:
 *
 * The #QmiMessageWdsGetPdnThrottleInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.14
 */
typedef struct _QmiMessageWdsGetPdnThrottleInfoOutput QmiMessageWdsGetPdnThrottleInfoOutput;
GType qmi_message_wds_get_pdn_throttle_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_PDN_THROTTLE_INFO_OUTPUT (qmi_message_wds_get_pdn_throttle_info_output_get_type ())


/**
 * qmi_message_wds_get_pdn_throttle_info_output_get_result:
 * @self: a QmiMessageWdsGetPdnThrottleInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_pdn_throttle_info_output_get_result (
    QmiMessageWdsGetPdnThrottleInfoOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_pdn_throttle_info_output_get_info: (skip)
 * @self: a #QmiMessageWdsGetPdnThrottleInfoOutput.
 * @value_info: (out)(optional)(element-type QmiMessageWdsGetPdnThrottleInfoOutputInfoElement)(transfer none): a placeholder for the output #GArray of #QmiMessageWdsGetPdnThrottleInfoOutputInfoElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.14
 */
gboolean qmi_message_wds_get_pdn_throttle_info_output_get_info (
    QmiMessageWdsGetPdnThrottleInfoOutput *self,
    GArray **value_info,
    GError **error);


/**
 * qmi_message_wds_get_pdn_throttle_info_output_get_info_gir: (rename-to qmi_message_wds_get_pdn_throttle_info_output_get_info)
 * @self: a #QmiMessageWdsGetPdnThrottleInfoOutput.
 * @value_info_ptr: (out)(optional)(element-type QmiMessageWdsGetPdnThrottleInfoOutputInfoElement)(transfer none): a placeholder for the output array of #QmiMessageWdsGetPdnThrottleInfoOutputInfoElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Version of qmi_message_wds_get_pdn_throttle_info_output_get_info() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_wds_get_pdn_throttle_info_output_get_info_gir (
    QmiMessageWdsGetPdnThrottleInfoOutput *self,
    GPtrArray **value_info_ptr,
    GError **error);


/**
 * qmi_message_wds_get_pdn_throttle_info_output_ref:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.14
 */
QmiMessageWdsGetPdnThrottleInfoOutput *qmi_message_wds_get_pdn_throttle_info_output_ref (QmiMessageWdsGetPdnThrottleInfoOutput *self);

/**
 * qmi_message_wds_get_pdn_throttle_info_output_unref:
 * @self: a #QmiMessageWdsGetPdnThrottleInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.14
 */
void qmi_message_wds_get_pdn_throttle_info_output_unref (QmiMessageWdsGetPdnThrottleInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetPdnThrottleInfoOutput, qmi_message_wds_get_pdn_throttle_info_output_unref)

/**
 * qmi_message_wds_get_pdn_throttle_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetPdnThrottleInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetPdnThrottleInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_pdn_throttle_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetPdnThrottleInfoOutput *qmi_message_wds_get_pdn_throttle_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get LTE Attach Parameters */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetLteAttachParametersOutput:
 *
 * The #QmiMessageWdsGetLteAttachParametersOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWdsGetLteAttachParametersOutput QmiMessageWdsGetLteAttachParametersOutput;
GType qmi_message_wds_get_lte_attach_parameters_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_LTE_ATTACH_PARAMETERS_OUTPUT (qmi_message_wds_get_lte_attach_parameters_output_get_type ())


/**
 * qmi_message_wds_get_lte_attach_parameters_output_get_result:
 * @self: a QmiMessageWdsGetLteAttachParametersOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_lte_attach_parameters_output_get_result (
    QmiMessageWdsGetLteAttachParametersOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_lte_attach_parameters_output_get_apn:
 * @self: a #QmiMessageWdsGetLteAttachParametersOutput.
 * @value_apn: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_lte_attach_parameters_output_get_apn (
    QmiMessageWdsGetLteAttachParametersOutput *self,
    const gchar **value_apn,
    GError **error);


/**
 * qmi_message_wds_get_lte_attach_parameters_output_get_ip_support_type:
 * @self: a #QmiMessageWdsGetLteAttachParametersOutput.
 * @value_ip_support_type: (out)(optional): a placeholder for the output #QmiWdsIpSupportType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IP Support Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_lte_attach_parameters_output_get_ip_support_type (
    QmiMessageWdsGetLteAttachParametersOutput *self,
    QmiWdsIpSupportType *value_ip_support_type,
    GError **error);


/**
 * qmi_message_wds_get_lte_attach_parameters_output_get_ota_attach_performed:
 * @self: a #QmiMessageWdsGetLteAttachParametersOutput.
 * @value_ota_attach_performed: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'OTA Attach Performed' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_lte_attach_parameters_output_get_ota_attach_performed (
    QmiMessageWdsGetLteAttachParametersOutput *self,
    gboolean *value_ota_attach_performed,
    GError **error);


/**
 * qmi_message_wds_get_lte_attach_parameters_output_ref:
 * @self: a #QmiMessageWdsGetLteAttachParametersOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWdsGetLteAttachParametersOutput *qmi_message_wds_get_lte_attach_parameters_output_ref (QmiMessageWdsGetLteAttachParametersOutput *self);

/**
 * qmi_message_wds_get_lte_attach_parameters_output_unref:
 * @self: a #QmiMessageWdsGetLteAttachParametersOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wds_get_lte_attach_parameters_output_unref (QmiMessageWdsGetLteAttachParametersOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetLteAttachParametersOutput, qmi_message_wds_get_lte_attach_parameters_output_unref)

/**
 * qmi_message_wds_get_lte_attach_parameters_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetLteAttachParametersOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetLteAttachParametersOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_lte_attach_parameters_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetLteAttachParametersOutput *qmi_message_wds_get_lte_attach_parameters_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Bind Data Port */


/* --- Input -- */

/**
 * QmiMessageWdsBindDataPortInput:
 *
 * The #QmiMessageWdsBindDataPortInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWdsBindDataPortInput QmiMessageWdsBindDataPortInput;
GType qmi_message_wds_bind_data_port_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_BIND_DATA_PORT_INPUT (qmi_message_wds_bind_data_port_input_get_type ())


/**
 * qmi_message_wds_bind_data_port_input_get_data_port:
 * @self: a #QmiMessageWdsBindDataPortInput.
 * @value_data_port: (out)(optional): a placeholder for the output #QmiSioPort, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Data Port' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_bind_data_port_input_get_data_port (
    QmiMessageWdsBindDataPortInput *self,
    QmiSioPort *value_data_port,
    GError **error);


/**
 * qmi_message_wds_bind_data_port_input_set_data_port:
 * @self: a #QmiMessageWdsBindDataPortInput.
 * @value_data_port: a #QmiSioPort.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Data Port' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_bind_data_port_input_set_data_port (
    QmiMessageWdsBindDataPortInput *self,
    QmiSioPort value_data_port,
    GError **error);


/**
 * qmi_message_wds_bind_data_port_input_ref:
 * @self: a #QmiMessageWdsBindDataPortInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWdsBindDataPortInput *qmi_message_wds_bind_data_port_input_ref (QmiMessageWdsBindDataPortInput *self);

/**
 * qmi_message_wds_bind_data_port_input_unref:
 * @self: a #QmiMessageWdsBindDataPortInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wds_bind_data_port_input_unref (QmiMessageWdsBindDataPortInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsBindDataPortInput, qmi_message_wds_bind_data_port_input_unref)

/**
 * qmi_message_wds_bind_data_port_input_new:
 *
 * Allocates a new #QmiMessageWdsBindDataPortInput.
 *
 * Returns: the newly created #QmiMessageWdsBindDataPortInput. The returned value should be freed with qmi_message_wds_bind_data_port_input_unref().
 *
 * Since: 1.28
 */
QmiMessageWdsBindDataPortInput *qmi_message_wds_bind_data_port_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsBindDataPortOutput:
 *
 * The #QmiMessageWdsBindDataPortOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWdsBindDataPortOutput QmiMessageWdsBindDataPortOutput;
GType qmi_message_wds_bind_data_port_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_BIND_DATA_PORT_OUTPUT (qmi_message_wds_bind_data_port_output_get_type ())


/**
 * qmi_message_wds_bind_data_port_output_get_result:
 * @self: a QmiMessageWdsBindDataPortOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_bind_data_port_output_get_result (
    QmiMessageWdsBindDataPortOutput *self,
    GError **error);


/**
 * qmi_message_wds_bind_data_port_output_ref:
 * @self: a #QmiMessageWdsBindDataPortOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWdsBindDataPortOutput *qmi_message_wds_bind_data_port_output_ref (QmiMessageWdsBindDataPortOutput *self);

/**
 * qmi_message_wds_bind_data_port_output_unref:
 * @self: a #QmiMessageWdsBindDataPortOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wds_bind_data_port_output_unref (QmiMessageWdsBindDataPortOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsBindDataPortOutput, qmi_message_wds_bind_data_port_output_unref)

/**
 * qmi_message_wds_bind_data_port_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsBindDataPortOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsBindDataPortOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_bind_data_port_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsBindDataPortOutput *qmi_message_wds_bind_data_port_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Max LTE Attach PDN Number */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetMaxLteAttachPdnNumberOutput:
 *
 * The #QmiMessageWdsGetMaxLteAttachPdnNumberOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWdsGetMaxLteAttachPdnNumberOutput QmiMessageWdsGetMaxLteAttachPdnNumberOutput;
GType qmi_message_wds_get_max_lte_attach_pdn_number_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_MAX_LTE_ATTACH_PDN_NUMBER_OUTPUT (qmi_message_wds_get_max_lte_attach_pdn_number_output_get_type ())


/**
 * qmi_message_wds_get_max_lte_attach_pdn_number_output_get_result:
 * @self: a QmiMessageWdsGetMaxLteAttachPdnNumberOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_max_lte_attach_pdn_number_output_get_result (
    QmiMessageWdsGetMaxLteAttachPdnNumberOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_max_lte_attach_pdn_number_output_get_info:
 * @self: a #QmiMessageWdsGetMaxLteAttachPdnNumberOutput.
 * @value_info: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_max_lte_attach_pdn_number_output_get_info (
    QmiMessageWdsGetMaxLteAttachPdnNumberOutput *self,
    guint8 *value_info,
    GError **error);


/**
 * qmi_message_wds_get_max_lte_attach_pdn_number_output_ref:
 * @self: a #QmiMessageWdsGetMaxLteAttachPdnNumberOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWdsGetMaxLteAttachPdnNumberOutput *qmi_message_wds_get_max_lte_attach_pdn_number_output_ref (QmiMessageWdsGetMaxLteAttachPdnNumberOutput *self);

/**
 * qmi_message_wds_get_max_lte_attach_pdn_number_output_unref:
 * @self: a #QmiMessageWdsGetMaxLteAttachPdnNumberOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wds_get_max_lte_attach_pdn_number_output_unref (QmiMessageWdsGetMaxLteAttachPdnNumberOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetMaxLteAttachPdnNumberOutput, qmi_message_wds_get_max_lte_attach_pdn_number_output_unref)

/**
 * qmi_message_wds_get_max_lte_attach_pdn_number_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetMaxLteAttachPdnNumberOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetMaxLteAttachPdnNumberOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_max_lte_attach_pdn_number_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetMaxLteAttachPdnNumberOutput *qmi_message_wds_get_max_lte_attach_pdn_number_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Set LTE Attach PDN List */


/* --- Input -- */

/**
 * QmiMessageWdsSetLteAttachPdnListInput:
 *
 * The #QmiMessageWdsSetLteAttachPdnListInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWdsSetLteAttachPdnListInput QmiMessageWdsSetLteAttachPdnListInput;
GType qmi_message_wds_set_lte_attach_pdn_list_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_LTE_ATTACH_PDN_LIST_INPUT (qmi_message_wds_set_lte_attach_pdn_list_input_get_type ())


/**
 * qmi_message_wds_set_lte_attach_pdn_list_input_get_action:
 * @self: a #QmiMessageWdsSetLteAttachPdnListInput.
 * @value_action: (out)(optional): a placeholder for the output #QmiWdsAttachPdnListAction, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Action' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_set_lte_attach_pdn_list_input_get_action (
    QmiMessageWdsSetLteAttachPdnListInput *self,
    QmiWdsAttachPdnListAction *value_action,
    GError **error);


/**
 * qmi_message_wds_set_lte_attach_pdn_list_input_set_action:
 * @self: a #QmiMessageWdsSetLteAttachPdnListInput.
 * @value_action: a #QmiWdsAttachPdnListAction.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Action' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_set_lte_attach_pdn_list_input_set_action (
    QmiMessageWdsSetLteAttachPdnListInput *self,
    QmiWdsAttachPdnListAction value_action,
    GError **error);


/**
 * qmi_message_wds_set_lte_attach_pdn_list_input_get_list:
 * @self: a #QmiMessageWdsSetLteAttachPdnListInput.
 * @value_list: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_set_lte_attach_pdn_list_input_get_list (
    QmiMessageWdsSetLteAttachPdnListInput *self,
    GArray **value_list,
    GError **error);


/**
 * qmi_message_wds_set_lte_attach_pdn_list_input_set_list:
 * @self: a #QmiMessageWdsSetLteAttachPdnListInput.
 * @value_list: (in)(element-type guint16)(transfer none): a #GArray of #guint16 elements. A new reference to @value_list will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'List' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_set_lte_attach_pdn_list_input_set_list (
    QmiMessageWdsSetLteAttachPdnListInput *self,
    GArray *value_list,
    GError **error);


/**
 * qmi_message_wds_set_lte_attach_pdn_list_input_ref:
 * @self: a #QmiMessageWdsSetLteAttachPdnListInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWdsSetLteAttachPdnListInput *qmi_message_wds_set_lte_attach_pdn_list_input_ref (QmiMessageWdsSetLteAttachPdnListInput *self);

/**
 * qmi_message_wds_set_lte_attach_pdn_list_input_unref:
 * @self: a #QmiMessageWdsSetLteAttachPdnListInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wds_set_lte_attach_pdn_list_input_unref (QmiMessageWdsSetLteAttachPdnListInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsSetLteAttachPdnListInput, qmi_message_wds_set_lte_attach_pdn_list_input_unref)

/**
 * qmi_message_wds_set_lte_attach_pdn_list_input_new:
 *
 * Allocates a new #QmiMessageWdsSetLteAttachPdnListInput.
 *
 * Returns: the newly created #QmiMessageWdsSetLteAttachPdnListInput. The returned value should be freed with qmi_message_wds_set_lte_attach_pdn_list_input_unref().
 *
 * Since: 1.28
 */
QmiMessageWdsSetLteAttachPdnListInput *qmi_message_wds_set_lte_attach_pdn_list_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsSetLteAttachPdnListOutput:
 *
 * The #QmiMessageWdsSetLteAttachPdnListOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWdsSetLteAttachPdnListOutput QmiMessageWdsSetLteAttachPdnListOutput;
GType qmi_message_wds_set_lte_attach_pdn_list_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SET_LTE_ATTACH_PDN_LIST_OUTPUT (qmi_message_wds_set_lte_attach_pdn_list_output_get_type ())


/**
 * qmi_message_wds_set_lte_attach_pdn_list_output_get_result:
 * @self: a QmiMessageWdsSetLteAttachPdnListOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_set_lte_attach_pdn_list_output_get_result (
    QmiMessageWdsSetLteAttachPdnListOutput *self,
    GError **error);


/**
 * qmi_message_wds_set_lte_attach_pdn_list_output_ref:
 * @self: a #QmiMessageWdsSetLteAttachPdnListOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWdsSetLteAttachPdnListOutput *qmi_message_wds_set_lte_attach_pdn_list_output_ref (QmiMessageWdsSetLteAttachPdnListOutput *self);

/**
 * qmi_message_wds_set_lte_attach_pdn_list_output_unref:
 * @self: a #QmiMessageWdsSetLteAttachPdnListOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wds_set_lte_attach_pdn_list_output_unref (QmiMessageWdsSetLteAttachPdnListOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsSetLteAttachPdnListOutput, qmi_message_wds_set_lte_attach_pdn_list_output_unref)

/**
 * qmi_message_wds_set_lte_attach_pdn_list_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsSetLteAttachPdnListOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsSetLteAttachPdnListOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_lte_attach_pdn_list_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsSetLteAttachPdnListOutput *qmi_message_wds_set_lte_attach_pdn_list_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get LTE Attach PDN List */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetLteAttachPdnListOutput:
 *
 * The #QmiMessageWdsGetLteAttachPdnListOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.28
 */
typedef struct _QmiMessageWdsGetLteAttachPdnListOutput QmiMessageWdsGetLteAttachPdnListOutput;
GType qmi_message_wds_get_lte_attach_pdn_list_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_LTE_ATTACH_PDN_LIST_OUTPUT (qmi_message_wds_get_lte_attach_pdn_list_output_get_type ())


/**
 * qmi_message_wds_get_lte_attach_pdn_list_output_get_result:
 * @self: a QmiMessageWdsGetLteAttachPdnListOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_lte_attach_pdn_list_output_get_result (
    QmiMessageWdsGetLteAttachPdnListOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_lte_attach_pdn_list_output_get_current_list:
 * @self: a #QmiMessageWdsGetLteAttachPdnListOutput.
 * @value_current_list: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_lte_attach_pdn_list_output_get_current_list (
    QmiMessageWdsGetLteAttachPdnListOutput *self,
    GArray **value_current_list,
    GError **error);


/**
 * qmi_message_wds_get_lte_attach_pdn_list_output_get_pending_list:
 * @self: a #QmiMessageWdsGetLteAttachPdnListOutput.
 * @value_pending_list: (out)(optional)(element-type guint16)(transfer none): a placeholder for the output #GArray of #guint16 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Pending List' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.28
 */
gboolean qmi_message_wds_get_lte_attach_pdn_list_output_get_pending_list (
    QmiMessageWdsGetLteAttachPdnListOutput *self,
    GArray **value_pending_list,
    GError **error);


/**
 * qmi_message_wds_get_lte_attach_pdn_list_output_ref:
 * @self: a #QmiMessageWdsGetLteAttachPdnListOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.28
 */
QmiMessageWdsGetLteAttachPdnListOutput *qmi_message_wds_get_lte_attach_pdn_list_output_ref (QmiMessageWdsGetLteAttachPdnListOutput *self);

/**
 * qmi_message_wds_get_lte_attach_pdn_list_output_unref:
 * @self: a #QmiMessageWdsGetLteAttachPdnListOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.28
 */
void qmi_message_wds_get_lte_attach_pdn_list_output_unref (QmiMessageWdsGetLteAttachPdnListOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetLteAttachPdnListOutput, qmi_message_wds_get_lte_attach_pdn_list_output_unref)

/**
 * qmi_message_wds_get_lte_attach_pdn_list_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetLteAttachPdnListOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetLteAttachPdnListOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_lte_attach_pdn_list_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsGetLteAttachPdnListOutput *qmi_message_wds_get_lte_attach_pdn_list_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Bind Mux Data Port */


/* --- Input -- */

/**
 * QmiMessageWdsBindMuxDataPortInput:
 *
 * The #QmiMessageWdsBindMuxDataPortInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsBindMuxDataPortInput QmiMessageWdsBindMuxDataPortInput;
GType qmi_message_wds_bind_mux_data_port_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_BIND_MUX_DATA_PORT_INPUT (qmi_message_wds_bind_mux_data_port_input_get_type ())


/**
 * qmi_message_wds_bind_mux_data_port_input_get_client_type:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 * @value_client_type: (out)(optional): a placeholder for the output #QmiWdsClientType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Client Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_input_get_client_type (
    QmiMessageWdsBindMuxDataPortInput *self,
    QmiWdsClientType *value_client_type,
    GError **error);


/**
 * qmi_message_wds_bind_mux_data_port_input_set_client_type:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 * @value_client_type: a #QmiWdsClientType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Client Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_input_set_client_type (
    QmiMessageWdsBindMuxDataPortInput *self,
    QmiWdsClientType value_client_type,
    GError **error);


/**
 * qmi_message_wds_bind_mux_data_port_input_get_mux_id:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 * @value_mux_id: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Mux ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_input_get_mux_id (
    QmiMessageWdsBindMuxDataPortInput *self,
    guint8 *value_mux_id,
    GError **error);


/**
 * qmi_message_wds_bind_mux_data_port_input_set_mux_id:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 * @value_mux_id: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Mux ID' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_input_set_mux_id (
    QmiMessageWdsBindMuxDataPortInput *self,
    guint8 value_mux_id,
    GError **error);


/**
 * qmi_message_wds_bind_mux_data_port_input_get_endpoint_info:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 * @value_endpoint_info_endpoint_type: (out)(optional): a placeholder for the output #QmiDataEndpointType, or %NULL if not required.
 * @value_endpoint_info_interface_number: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Endpoint Info' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_input_get_endpoint_info (
    QmiMessageWdsBindMuxDataPortInput *self,
    QmiDataEndpointType *value_endpoint_info_endpoint_type,
    guint32 *value_endpoint_info_interface_number,
    GError **error);


/**
 * qmi_message_wds_bind_mux_data_port_input_set_endpoint_info:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 * @value_endpoint_info_endpoint_type: a #QmiDataEndpointType.
 * @value_endpoint_info_interface_number: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Endpoint Info' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_input_set_endpoint_info (
    QmiMessageWdsBindMuxDataPortInput *self,
    QmiDataEndpointType value_endpoint_info_endpoint_type,
    guint32 value_endpoint_info_interface_number,
    GError **error);


/**
 * qmi_message_wds_bind_mux_data_port_input_ref:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsBindMuxDataPortInput *qmi_message_wds_bind_mux_data_port_input_ref (QmiMessageWdsBindMuxDataPortInput *self);

/**
 * qmi_message_wds_bind_mux_data_port_input_unref:
 * @self: a #QmiMessageWdsBindMuxDataPortInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_bind_mux_data_port_input_unref (QmiMessageWdsBindMuxDataPortInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsBindMuxDataPortInput, qmi_message_wds_bind_mux_data_port_input_unref)

/**
 * qmi_message_wds_bind_mux_data_port_input_new:
 *
 * Allocates a new #QmiMessageWdsBindMuxDataPortInput.
 *
 * Returns: the newly created #QmiMessageWdsBindMuxDataPortInput. The returned value should be freed with qmi_message_wds_bind_mux_data_port_input_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsBindMuxDataPortInput *qmi_message_wds_bind_mux_data_port_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsBindMuxDataPortOutput:
 *
 * The #QmiMessageWdsBindMuxDataPortOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessageWdsBindMuxDataPortOutput QmiMessageWdsBindMuxDataPortOutput;
GType qmi_message_wds_bind_mux_data_port_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_BIND_MUX_DATA_PORT_OUTPUT (qmi_message_wds_bind_mux_data_port_output_get_type ())


/**
 * qmi_message_wds_bind_mux_data_port_output_get_result:
 * @self: a QmiMessageWdsBindMuxDataPortOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_wds_bind_mux_data_port_output_get_result (
    QmiMessageWdsBindMuxDataPortOutput *self,
    GError **error);


/**
 * qmi_message_wds_bind_mux_data_port_output_ref:
 * @self: a #QmiMessageWdsBindMuxDataPortOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessageWdsBindMuxDataPortOutput *qmi_message_wds_bind_mux_data_port_output_ref (QmiMessageWdsBindMuxDataPortOutput *self);

/**
 * qmi_message_wds_bind_mux_data_port_output_unref:
 * @self: a #QmiMessageWdsBindMuxDataPortOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_wds_bind_mux_data_port_output_unref (QmiMessageWdsBindMuxDataPortOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsBindMuxDataPortOutput, qmi_message_wds_bind_mux_data_port_output_unref)

/**
 * qmi_message_wds_bind_mux_data_port_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsBindMuxDataPortOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsBindMuxDataPortOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_bind_mux_data_port_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsBindMuxDataPortOutput *qmi_message_wds_bind_mux_data_port_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Configure Profile Event List */


/* --- Input -- */


/**
 * QmiMessageWdsConfigureProfileEventListInputRegisterElement:
 * @profile_type: a #QmiWdsProfileType.
 * @profile_index: a #guint8.
 *
 * A QmiMessageWdsConfigureProfileEventListInputRegisterElement struct.
 *
 * Since: 1.34
 */
typedef struct _QmiMessageWdsConfigureProfileEventListInputRegisterElement {
    QmiWdsProfileType profile_type;
    guint8 profile_index;
} QmiMessageWdsConfigureProfileEventListInputRegisterElement;

GType qmi_message_wds_configure_profile_event_list_input_register_element_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageWdsConfigureProfileEventListInput:
 *
 * The #QmiMessageWdsConfigureProfileEventListInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
typedef struct _QmiMessageWdsConfigureProfileEventListInput QmiMessageWdsConfigureProfileEventListInput;
GType qmi_message_wds_configure_profile_event_list_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_CONFIGURE_PROFILE_EVENT_LIST_INPUT (qmi_message_wds_configure_profile_event_list_input_get_type ())


/**
 * qmi_message_wds_configure_profile_event_list_input_get_register: (skip)
 * @self: a #QmiMessageWdsConfigureProfileEventListInput.
 * @value_register: (out)(optional)(element-type QmiMessageWdsConfigureProfileEventListInputRegisterElement)(transfer none): a placeholder for the output #GArray of #QmiMessageWdsConfigureProfileEventListInputRegisterElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Register' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_wds_configure_profile_event_list_input_get_register (
    QmiMessageWdsConfigureProfileEventListInput *self,
    GArray **value_register,
    GError **error);


/**
 * qmi_message_wds_configure_profile_event_list_input_get_register_gir: (rename-to qmi_message_wds_configure_profile_event_list_input_get_register)
 * @self: a #QmiMessageWdsConfigureProfileEventListInput.
 * @value_register_ptr: (out)(optional)(element-type QmiMessageWdsConfigureProfileEventListInputRegisterElement)(transfer none): a placeholder for the output array of #QmiMessageWdsConfigureProfileEventListInputRegisterElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Register' field from @self.
 *
 * Version of qmi_message_wds_configure_profile_event_list_input_get_register() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_wds_configure_profile_event_list_input_get_register_gir (
    QmiMessageWdsConfigureProfileEventListInput *self,
    GPtrArray **value_register_ptr,
    GError **error);


/**
 * qmi_message_wds_configure_profile_event_list_input_set_register: (skip)
 * @self: a #QmiMessageWdsConfigureProfileEventListInput.
 * @value_register: (in)(element-type QmiMessageWdsConfigureProfileEventListInputRegisterElement)(transfer none): a #GArray of #QmiMessageWdsConfigureProfileEventListInputRegisterElement elements. A new reference to @value_register will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Register' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_wds_configure_profile_event_list_input_set_register (
    QmiMessageWdsConfigureProfileEventListInput *self,
    GArray *value_register,
    GError **error);


/**
 * qmi_message_wds_configure_profile_event_list_input_set_register_gir: (rename-to qmi_message_wds_configure_profile_event_list_input_set_register)
 * @self: a #QmiMessageWdsConfigureProfileEventListInput.
 * @value_register_ptr: (in)(element-type QmiMessageWdsConfigureProfileEventListInputRegisterElement)(transfer none): array of #QmiMessageWdsConfigureProfileEventListInputRegisterElement elements. The contents of the given array will be copied, the #GPtrArray will not increase its reference count.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Register' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.34
 */
gboolean qmi_message_wds_configure_profile_event_list_input_set_register_gir (
    QmiMessageWdsConfigureProfileEventListInput *self,
    GPtrArray *value_register_ptr,
    GError **error);


/**
 * qmi_message_wds_configure_profile_event_list_input_ref:
 * @self: a #QmiMessageWdsConfigureProfileEventListInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.34
 */
QmiMessageWdsConfigureProfileEventListInput *qmi_message_wds_configure_profile_event_list_input_ref (QmiMessageWdsConfigureProfileEventListInput *self);

/**
 * qmi_message_wds_configure_profile_event_list_input_unref:
 * @self: a #QmiMessageWdsConfigureProfileEventListInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.34
 */
void qmi_message_wds_configure_profile_event_list_input_unref (QmiMessageWdsConfigureProfileEventListInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsConfigureProfileEventListInput, qmi_message_wds_configure_profile_event_list_input_unref)

/**
 * qmi_message_wds_configure_profile_event_list_input_new:
 *
 * Allocates a new #QmiMessageWdsConfigureProfileEventListInput.
 *
 * Returns: the newly created #QmiMessageWdsConfigureProfileEventListInput. The returned value should be freed with qmi_message_wds_configure_profile_event_list_input_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsConfigureProfileEventListInput *qmi_message_wds_configure_profile_event_list_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsConfigureProfileEventListOutput:
 *
 * The #QmiMessageWdsConfigureProfileEventListOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.34
 */
typedef struct _QmiMessageWdsConfigureProfileEventListOutput QmiMessageWdsConfigureProfileEventListOutput;
GType qmi_message_wds_configure_profile_event_list_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_CONFIGURE_PROFILE_EVENT_LIST_OUTPUT (qmi_message_wds_configure_profile_event_list_output_get_type ())


/**
 * qmi_message_wds_configure_profile_event_list_output_get_result:
 * @self: a QmiMessageWdsConfigureProfileEventListOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.34
 */
gboolean qmi_message_wds_configure_profile_event_list_output_get_result (
    QmiMessageWdsConfigureProfileEventListOutput *self,
    GError **error);


/**
 * qmi_message_wds_configure_profile_event_list_output_ref:
 * @self: a #QmiMessageWdsConfigureProfileEventListOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.34
 */
QmiMessageWdsConfigureProfileEventListOutput *qmi_message_wds_configure_profile_event_list_output_ref (QmiMessageWdsConfigureProfileEventListOutput *self);

/**
 * qmi_message_wds_configure_profile_event_list_output_unref:
 * @self: a #QmiMessageWdsConfigureProfileEventListOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.34
 */
void qmi_message_wds_configure_profile_event_list_output_unref (QmiMessageWdsConfigureProfileEventListOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsConfigureProfileEventListOutput, qmi_message_wds_configure_profile_event_list_output_unref)

/**
 * qmi_message_wds_configure_profile_event_list_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsConfigureProfileEventListOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsConfigureProfileEventListOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_configure_profile_event_list_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsConfigureProfileEventListOutput *qmi_message_wds_configure_profile_event_list_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Bind Subscription */


/* --- Input -- */

/**
 * QmiMessageWdsBindSubscriptionInput:
 *
 * The #QmiMessageWdsBindSubscriptionInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiMessageWdsBindSubscriptionInput QmiMessageWdsBindSubscriptionInput;
GType qmi_message_wds_bind_subscription_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_BIND_SUBSCRIPTION_INPUT (qmi_message_wds_bind_subscription_input_get_type ())


/**
 * qmi_message_wds_bind_subscription_input_get_subscription_id:
 * @self: a #QmiMessageWdsBindSubscriptionInput.
 * @value_subscription_id: (out)(optional): a placeholder for the output #QmiSubscriptionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Subscription Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_wds_bind_subscription_input_get_subscription_id (
    QmiMessageWdsBindSubscriptionInput *self,
    QmiSubscriptionType *value_subscription_id,
    GError **error);


/**
 * qmi_message_wds_bind_subscription_input_set_subscription_id:
 * @self: a #QmiMessageWdsBindSubscriptionInput.
 * @value_subscription_id: a #QmiSubscriptionType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Subscription Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_wds_bind_subscription_input_set_subscription_id (
    QmiMessageWdsBindSubscriptionInput *self,
    QmiSubscriptionType value_subscription_id,
    GError **error);


/**
 * qmi_message_wds_bind_subscription_input_ref:
 * @self: a #QmiMessageWdsBindSubscriptionInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiMessageWdsBindSubscriptionInput *qmi_message_wds_bind_subscription_input_ref (QmiMessageWdsBindSubscriptionInput *self);

/**
 * qmi_message_wds_bind_subscription_input_unref:
 * @self: a #QmiMessageWdsBindSubscriptionInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_message_wds_bind_subscription_input_unref (QmiMessageWdsBindSubscriptionInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsBindSubscriptionInput, qmi_message_wds_bind_subscription_input_unref)

/**
 * qmi_message_wds_bind_subscription_input_new:
 *
 * Allocates a new #QmiMessageWdsBindSubscriptionInput.
 *
 * Returns: the newly created #QmiMessageWdsBindSubscriptionInput. The returned value should be freed with qmi_message_wds_bind_subscription_input_unref().
 *
 * Since: 1.37
 */
QmiMessageWdsBindSubscriptionInput *qmi_message_wds_bind_subscription_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsBindSubscriptionOutput:
 *
 * The #QmiMessageWdsBindSubscriptionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiMessageWdsBindSubscriptionOutput QmiMessageWdsBindSubscriptionOutput;
GType qmi_message_wds_bind_subscription_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_BIND_SUBSCRIPTION_OUTPUT (qmi_message_wds_bind_subscription_output_get_type ())


/**
 * qmi_message_wds_bind_subscription_output_get_result:
 * @self: a QmiMessageWdsBindSubscriptionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.37
 */
gboolean qmi_message_wds_bind_subscription_output_get_result (
    QmiMessageWdsBindSubscriptionOutput *self,
    GError **error);


/**
 * qmi_message_wds_bind_subscription_output_ref:
 * @self: a #QmiMessageWdsBindSubscriptionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiMessageWdsBindSubscriptionOutput *qmi_message_wds_bind_subscription_output_ref (QmiMessageWdsBindSubscriptionOutput *self);

/**
 * qmi_message_wds_bind_subscription_output_unref:
 * @self: a #QmiMessageWdsBindSubscriptionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_message_wds_bind_subscription_output_unref (QmiMessageWdsBindSubscriptionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsBindSubscriptionOutput, qmi_message_wds_bind_subscription_output_unref)

/**
 * qmi_message_wds_bind_subscription_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsBindSubscriptionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsBindSubscriptionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_bind_subscription_output_unref().
 *
 * Since: 1.37
 */
QmiMessageWdsBindSubscriptionOutput *qmi_message_wds_bind_subscription_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Get Bind Subscription */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessageWdsGetBindSubscriptionOutput:
 *
 * The #QmiMessageWdsGetBindSubscriptionOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.37
 */
typedef struct _QmiMessageWdsGetBindSubscriptionOutput QmiMessageWdsGetBindSubscriptionOutput;
GType qmi_message_wds_get_bind_subscription_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_GET_BIND_SUBSCRIPTION_OUTPUT (qmi_message_wds_get_bind_subscription_output_get_type ())


/**
 * qmi_message_wds_get_bind_subscription_output_get_result:
 * @self: a QmiMessageWdsGetBindSubscriptionOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.37
 */
gboolean qmi_message_wds_get_bind_subscription_output_get_result (
    QmiMessageWdsGetBindSubscriptionOutput *self,
    GError **error);


/**
 * qmi_message_wds_get_bind_subscription_output_get_subscription_id:
 * @self: a #QmiMessageWdsGetBindSubscriptionOutput.
 * @value_subscription_id: (out)(optional): a placeholder for the output #QmiSubscriptionType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Subscription Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.37
 */
gboolean qmi_message_wds_get_bind_subscription_output_get_subscription_id (
    QmiMessageWdsGetBindSubscriptionOutput *self,
    QmiSubscriptionType *value_subscription_id,
    GError **error);


/**
 * qmi_message_wds_get_bind_subscription_output_ref:
 * @self: a #QmiMessageWdsGetBindSubscriptionOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.37
 */
QmiMessageWdsGetBindSubscriptionOutput *qmi_message_wds_get_bind_subscription_output_ref (QmiMessageWdsGetBindSubscriptionOutput *self);

/**
 * qmi_message_wds_get_bind_subscription_output_unref:
 * @self: a #QmiMessageWdsGetBindSubscriptionOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.37
 */
void qmi_message_wds_get_bind_subscription_output_unref (QmiMessageWdsGetBindSubscriptionOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsGetBindSubscriptionOutput, qmi_message_wds_get_bind_subscription_output_unref)

/**
 * qmi_message_wds_get_bind_subscription_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsGetBindSubscriptionOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsGetBindSubscriptionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_bind_subscription_output_unref().
 *
 * Since: 1.37
 */
QmiMessageWdsGetBindSubscriptionOutput *qmi_message_wds_get_bind_subscription_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message WDS Swi Create Profile Indexed */


/* --- Input -- */

/**
 * QmiMessageWdsSwiCreateProfileIndexedInput:
 *
 * The #QmiMessageWdsSwiCreateProfileIndexedInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageWdsSwiCreateProfileIndexedInput QmiMessageWdsSwiCreateProfileIndexedInput;
GType qmi_message_wds_swi_create_profile_indexed_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SWI_CREATE_PROFILE_INDEXED_INPUT (qmi_message_wds_swi_create_profile_indexed_input_get_type ())


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_roaming_disallowed_flag:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_roaming_disallowed_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Roaming Disallowed Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_roaming_disallowed_flag (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    gboolean *value_roaming_disallowed_flag,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_roaming_disallowed_flag:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_roaming_disallowed_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Roaming Disallowed Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_roaming_disallowed_flag (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    gboolean value_roaming_disallowed_flag,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_apn_disabled_flag:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_apn_disabled_flag: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Disabled Flag' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_apn_disabled_flag (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    gboolean *value_apn_disabled_flag,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_apn_disabled_flag:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_apn_disabled_flag: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Disabled Flag' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_apn_disabled_flag (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    gboolean value_apn_disabled_flag,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_pdp_context_number:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_pdp_context_number: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Context Number' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_pdp_context_number (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    guint8 *value_pdp_context_number,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_pdp_context_number:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_pdp_context_number: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Context Number' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_pdp_context_number (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    guint8 value_pdp_context_number,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_ipv4_address_preference:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_ipv4_address_preference: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'IPv4 Address Preference' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_ipv4_address_preference (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    guint32 *value_ipv4_address_preference,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_ipv4_address_preference:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_ipv4_address_preference: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'IPv4 Address Preference' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_ipv4_address_preference (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    guint32 value_ipv4_address_preference,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_authentication:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_authentication: (out)(optional): a placeholder for the output #QmiWdsAuthentication, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Authentication' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_authentication (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    QmiWdsAuthentication *value_authentication,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_authentication:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_authentication: a #QmiWdsAuthentication.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Authentication' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_authentication (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    QmiWdsAuthentication value_authentication,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_password:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_password: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Password' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_password (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    const gchar **value_password,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_password:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_password: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Password' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_password (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    const gchar *value_password,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_username:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_username: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Username' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_username (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    const gchar **value_username,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_username:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_username: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Username' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_username (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    const gchar *value_username,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_secondary_ipv4_dns_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Secondary IPv4 DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_secondary_ipv4_dns_address (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    guint32 *value_secondary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_secondary_ipv4_dns_address:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_secondary_ipv4_dns_address: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Secondary IPv4 DNS Address' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_secondary_ipv4_dns_address (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    guint32 value_secondary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_primary_ipv4_dns_address: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Primary IPv4 DNS Address' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_primary_ipv4_dns_address (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    guint32 *value_primary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_primary_ipv4_dns_address:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_primary_ipv4_dns_address: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Primary IPv4 DNS Address' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_primary_ipv4_dns_address (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    guint32 value_primary_ipv4_dns_address,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_apn_name:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_apn_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_apn_name (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    const gchar **value_apn_name,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_apn_name:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_apn_name: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Name' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_apn_name (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    const gchar *value_apn_name,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_pdp_type:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_pdp_type: (out)(optional): a placeholder for the output #QmiWdsPdpType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'PDP Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_pdp_type (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    QmiWdsPdpType *value_pdp_type,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_pdp_type:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_pdp_type: a #QmiWdsPdpType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'PDP Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_pdp_type (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    QmiWdsPdpType value_pdp_type,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_profile_name:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_profile_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_profile_name (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    const gchar **value_profile_name,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_profile_name:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_profile_name: a constant string.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Name' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_profile_name (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    const gchar *value_profile_name,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_get_profile_identifier:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_profile_identifier_profile_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_identifier_profile_index: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Identifier' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_get_profile_identifier (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    QmiWdsProfileType *value_profile_identifier_profile_type,
    guint8 *value_profile_identifier_profile_index,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_set_profile_identifier:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @value_profile_identifier_profile_type: a #QmiWdsProfileType.
 * @value_profile_identifier_profile_index: a #guint8.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Profile Identifier' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_input_set_profile_identifier (
    QmiMessageWdsSwiCreateProfileIndexedInput *self,
    QmiWdsProfileType value_profile_identifier_profile_type,
    guint8 value_profile_identifier_profile_index,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_input_ref:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageWdsSwiCreateProfileIndexedInput *qmi_message_wds_swi_create_profile_indexed_input_ref (QmiMessageWdsSwiCreateProfileIndexedInput *self);

/**
 * qmi_message_wds_swi_create_profile_indexed_input_unref:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_wds_swi_create_profile_indexed_input_unref (QmiMessageWdsSwiCreateProfileIndexedInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsSwiCreateProfileIndexedInput, qmi_message_wds_swi_create_profile_indexed_input_unref)

/**
 * qmi_message_wds_swi_create_profile_indexed_input_new:
 *
 * Allocates a new #QmiMessageWdsSwiCreateProfileIndexedInput.
 *
 * Returns: the newly created #QmiMessageWdsSwiCreateProfileIndexedInput. The returned value should be freed with qmi_message_wds_swi_create_profile_indexed_input_unref().
 *
 * Since: 1.22
 */
QmiMessageWdsSwiCreateProfileIndexedInput *qmi_message_wds_swi_create_profile_indexed_input_new (void);

/* --- Output -- */

/**
 * QmiMessageWdsSwiCreateProfileIndexedOutput:
 *
 * The #QmiMessageWdsSwiCreateProfileIndexedOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.22
 */
typedef struct _QmiMessageWdsSwiCreateProfileIndexedOutput QmiMessageWdsSwiCreateProfileIndexedOutput;
GType qmi_message_wds_swi_create_profile_indexed_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_WDS_SWI_CREATE_PROFILE_INDEXED_OUTPUT (qmi_message_wds_swi_create_profile_indexed_output_get_type ())


/**
 * qmi_message_wds_swi_create_profile_indexed_output_get_result:
 * @self: a QmiMessageWdsSwiCreateProfileIndexedOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_output_get_result (
    QmiMessageWdsSwiCreateProfileIndexedOutput *self,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_output_get_profile_identifier:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedOutput.
 * @value_profile_identifier_profile_type: (out)(optional): a placeholder for the output #QmiWdsProfileType, or %NULL if not required.
 * @value_profile_identifier_profile_index: (out)(optional): a placeholder for the output #guint8, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Profile Identifier' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.22
 */
gboolean qmi_message_wds_swi_create_profile_indexed_output_get_profile_identifier (
    QmiMessageWdsSwiCreateProfileIndexedOutput *self,
    QmiWdsProfileType *value_profile_identifier_profile_type,
    guint8 *value_profile_identifier_profile_index,
    GError **error);


/**
 * qmi_message_wds_swi_create_profile_indexed_output_ref:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.22
 */
QmiMessageWdsSwiCreateProfileIndexedOutput *qmi_message_wds_swi_create_profile_indexed_output_ref (QmiMessageWdsSwiCreateProfileIndexedOutput *self);

/**
 * qmi_message_wds_swi_create_profile_indexed_output_unref:
 * @self: a #QmiMessageWdsSwiCreateProfileIndexedOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.22
 */
void qmi_message_wds_swi_create_profile_indexed_output_unref (QmiMessageWdsSwiCreateProfileIndexedOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageWdsSwiCreateProfileIndexedOutput, qmi_message_wds_swi_create_profile_indexed_output_unref)

/**
 * qmi_message_wds_swi_create_profile_indexed_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageWdsSwiCreateProfileIndexedOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageWdsSwiCreateProfileIndexedOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_swi_create_profile_indexed_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsSwiCreateProfileIndexedOutput *qmi_message_wds_swi_create_profile_indexed_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: WDS */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_wds_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gboolean __qmi_message_wds_is_abortable (
    QmiMessage *self,
    QmiMessageContext *context);

#endif


#define HAVE_QMI_SERVICE_WDS

/*****************************************************************************/
/* CLIENT: QMI Client WDS */

#define QMI_TYPE_CLIENT_WDS            (qmi_client_wds_get_type ())
#define QMI_CLIENT_WDS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_WDS, QmiClientWds))
#define QMI_CLIENT_WDS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_WDS, QmiClientWdsClass))
#define QMI_IS_CLIENT_WDS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_WDS))
#define QMI_IS_CLIENT_WDS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_WDS))
#define QMI_CLIENT_WDS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_WDS, QmiClientWdsClass))

typedef struct _QmiClientWds QmiClientWds;
typedef struct _QmiClientWdsClass QmiClientWdsClass;

/**
 * QmiClientWds:
 *
 * #QmiClient which handles operations in the WDS service.
 *
 * The #QmiClientWds structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.0
 */
struct _QmiClientWds {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientWdsClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_wds_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientWds, g_object_unref)

/**
 * qmi_client_wds_reset:
 * @self: a #QmiClientWds.
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
 * You can then call qmi_client_wds_reset_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_reset (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_reset_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_reset().
 *
 * Returns: a #QmiMessageWdsResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_reset_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsResetOutput *qmi_client_wds_reset_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_set_event_report:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsSetEventReportInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Event Report request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_set_event_report_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_set_event_report (
    QmiClientWds *self,
    QmiMessageWdsSetEventReportInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_set_event_report_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_set_event_report().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_set_event_report().
 *
 * Returns: a #QmiMessageWdsSetEventReportOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_event_report_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsSetEventReportOutput *qmi_client_wds_set_event_report_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_indication_register:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsIndicationRegisterInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Indication Register request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_indication_register_finish() to get the result of the operation.
 *
 * Since: 1.32
 */
void qmi_client_wds_indication_register (
    QmiClientWds *self,
    QmiMessageWdsIndicationRegisterInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_indication_register_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_indication_register().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_indication_register().
 *
 * Returns: a #QmiMessageWdsIndicationRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_indication_register_output_unref().
 *
 * Since: 1.32
 */
QmiMessageWdsIndicationRegisterOutput *qmi_client_wds_indication_register_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_supported_messages:
 * @self: a #QmiClientWds.
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
 * You can then call qmi_client_wds_get_supported_messages_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wds_get_supported_messages (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_supported_messages_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_supported_messages().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_supported_messages().
 *
 * Returns: a #QmiMessageWdsGetSupportedMessagesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_supported_messages_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsGetSupportedMessagesOutput *qmi_client_wds_get_supported_messages_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_start_network:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsStartNetworkInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Start Network request to the device.
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
 * You can then call qmi_client_wds_start_network_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_start_network (
    QmiClientWds *self,
    QmiMessageWdsStartNetworkInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_start_network_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_start_network().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_start_network().
 *
 * Returns: a #QmiMessageWdsStartNetworkOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_start_network_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsStartNetworkOutput *qmi_client_wds_start_network_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_stop_network:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsStopNetworkInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Stop Network request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_stop_network_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_stop_network (
    QmiClientWds *self,
    QmiMessageWdsStopNetworkInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_stop_network_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_stop_network().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_stop_network().
 *
 * Returns: a #QmiMessageWdsStopNetworkOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_stop_network_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsStopNetworkOutput *qmi_client_wds_stop_network_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_packet_service_status:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Packet Service Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_packet_service_status_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_get_packet_service_status (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_packet_service_status_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_packet_service_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_packet_service_status().
 *
 * Returns: a #QmiMessageWdsGetPacketServiceStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_packet_service_status_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsGetPacketServiceStatusOutput *qmi_client_wds_get_packet_service_status_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_channel_rates:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Channel Rates request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_channel_rates_finish() to get the result of the operation.
 *
 * Since: 1.20
 */
void qmi_client_wds_get_channel_rates (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_channel_rates_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_channel_rates().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_channel_rates().
 *
 * Returns: a #QmiMessageWdsGetChannelRatesOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_channel_rates_output_unref().
 *
 * Since: 1.20
 */
QmiMessageWdsGetChannelRatesOutput *qmi_client_wds_get_channel_rates_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_packet_statistics:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetPacketStatisticsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Packet Statistics request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_packet_statistics_finish() to get the result of the operation.
 *
 * Since: 1.6
 */
void qmi_client_wds_get_packet_statistics (
    QmiClientWds *self,
    QmiMessageWdsGetPacketStatisticsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_packet_statistics_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_packet_statistics().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_packet_statistics().
 *
 * Returns: a #QmiMessageWdsGetPacketStatisticsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_packet_statistics_output_unref().
 *
 * Since: 1.6
 */
QmiMessageWdsGetPacketStatisticsOutput *qmi_client_wds_get_packet_statistics_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_go_dormant:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Go Dormant request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_go_dormant_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_go_dormant (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_go_dormant_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_go_dormant().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_go_dormant().
 *
 * Returns: a #QmiMessageWdsGoDormantOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_go_dormant_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsGoDormantOutput *qmi_client_wds_go_dormant_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_go_active:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Go Active request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_go_active_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_go_active (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_go_active_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_go_active().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_go_active().
 *
 * Returns: a #QmiMessageWdsGoActiveOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_go_active_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsGoActiveOutput *qmi_client_wds_go_active_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_create_profile:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsCreateProfileInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Create Profile request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_create_profile_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_create_profile (
    QmiClientWds *self,
    QmiMessageWdsCreateProfileInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_create_profile_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_create_profile().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_create_profile().
 *
 * Returns: a #QmiMessageWdsCreateProfileOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_create_profile_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsCreateProfileOutput *qmi_client_wds_create_profile_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_modify_profile:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsModifyProfileInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Modify Profile request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_modify_profile_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_modify_profile (
    QmiClientWds *self,
    QmiMessageWdsModifyProfileInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_modify_profile_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_modify_profile().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_modify_profile().
 *
 * Returns: a #QmiMessageWdsModifyProfileOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_modify_profile_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsModifyProfileOutput *qmi_client_wds_modify_profile_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_delete_profile:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsDeleteProfileInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Delete Profile request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_delete_profile_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_delete_profile (
    QmiClientWds *self,
    QmiMessageWdsDeleteProfileInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_delete_profile_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_delete_profile().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_delete_profile().
 *
 * Returns: a #QmiMessageWdsDeleteProfileOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_delete_profile_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsDeleteProfileOutput *qmi_client_wds_delete_profile_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_profile_list:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetProfileListInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Profile List request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_profile_list_finish() to get the result of the operation.
 *
 * Since: 1.8
 */
void qmi_client_wds_get_profile_list (
    QmiClientWds *self,
    QmiMessageWdsGetProfileListInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_profile_list_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_profile_list().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_profile_list().
 *
 * Returns: a #QmiMessageWdsGetProfileListOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_profile_list_output_unref().
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileListOutput *qmi_client_wds_get_profile_list_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_profile_settings:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetProfileSettingsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Profile Settings request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_profile_settings_finish() to get the result of the operation.
 *
 * Since: 1.8
 */
void qmi_client_wds_get_profile_settings (
    QmiClientWds *self,
    QmiMessageWdsGetProfileSettingsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_profile_settings_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_profile_settings().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_profile_settings().
 *
 * Returns: a #QmiMessageWdsGetProfileSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_profile_settings_output_unref().
 *
 * Since: 1.8
 */
QmiMessageWdsGetProfileSettingsOutput *qmi_client_wds_get_profile_settings_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_default_settings:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetDefaultSettingsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Default Settings request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_default_settings_finish() to get the result of the operation.
 *
 * Since: 1.8
 */
void qmi_client_wds_get_default_settings (
    QmiClientWds *self,
    QmiMessageWdsGetDefaultSettingsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_default_settings_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_default_settings().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_default_settings().
 *
 * Returns: a #QmiMessageWdsGetDefaultSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_default_settings_output_unref().
 *
 * Since: 1.8
 */
QmiMessageWdsGetDefaultSettingsOutput *qmi_client_wds_get_default_settings_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_current_settings:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetCurrentSettingsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Current Settings request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_current_settings_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_get_current_settings (
    QmiClientWds *self,
    QmiMessageWdsGetCurrentSettingsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_current_settings_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_current_settings().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_current_settings().
 *
 * Returns: a #QmiMessageWdsGetCurrentSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_current_settings_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsGetCurrentSettingsOutput *qmi_client_wds_get_current_settings_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_dormancy_status:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Dormancy Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_dormancy_status_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wds_get_dormancy_status (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_dormancy_status_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_dormancy_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_dormancy_status().
 *
 * Returns: a #QmiMessageWdsGetDormancyStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_dormancy_status_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsGetDormancyStatusOutput *qmi_client_wds_get_dormancy_status_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_autoconnect_settings:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Autoconnect Settings request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_autoconnect_settings_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wds_get_autoconnect_settings (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_autoconnect_settings_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_autoconnect_settings().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_autoconnect_settings().
 *
 * Returns: a #QmiMessageWdsGetAutoconnectSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_autoconnect_settings_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsGetAutoconnectSettingsOutput *qmi_client_wds_get_autoconnect_settings_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_data_bearer_technology:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Data Bearer Technology request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_data_bearer_technology_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_get_data_bearer_technology (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_data_bearer_technology_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_data_bearer_technology().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_data_bearer_technology().
 *
 * Returns: a #QmiMessageWdsGetDataBearerTechnologyOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_data_bearer_technology_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsGetDataBearerTechnologyOutput *qmi_client_wds_get_data_bearer_technology_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_current_data_bearer_technology:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Current Data Bearer Technology request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_current_data_bearer_technology_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_get_current_data_bearer_technology (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_current_data_bearer_technology_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_current_data_bearer_technology().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_current_data_bearer_technology().
 *
 * Returns: a #QmiMessageWdsGetCurrentDataBearerTechnologyOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_current_data_bearer_technology_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsGetCurrentDataBearerTechnologyOutput *qmi_client_wds_get_current_data_bearer_technology_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_default_profile_number:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetDefaultProfileNumberInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Default Profile Number request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_default_profile_number_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_wds_get_default_profile_number (
    QmiClientWds *self,
    QmiMessageWdsGetDefaultProfileNumberInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_default_profile_number_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_default_profile_number().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_default_profile_number().
 *
 * Returns: a #QmiMessageWdsGetDefaultProfileNumberOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_default_profile_number_output_unref().
 *
 * Since: 1.28
 */
QmiMessageWdsGetDefaultProfileNumberOutput *qmi_client_wds_get_default_profile_number_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_set_default_profile_number:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsSetDefaultProfileNumberInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Default Profile Number request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_set_default_profile_number_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_wds_set_default_profile_number (
    QmiClientWds *self,
    QmiMessageWdsSetDefaultProfileNumberInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_set_default_profile_number_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_set_default_profile_number().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_set_default_profile_number().
 *
 * Returns: a #QmiMessageWdsSetDefaultProfileNumberOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_default_profile_number_output_unref().
 *
 * Since: 1.28
 */
QmiMessageWdsSetDefaultProfileNumberOutput *qmi_client_wds_set_default_profile_number_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_set_ip_family:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsSetIpFamilyInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set IP Family request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_set_ip_family_finish() to get the result of the operation.
 *
 * Since: 1.0
 */
void qmi_client_wds_set_ip_family (
    QmiClientWds *self,
    QmiMessageWdsSetIpFamilyInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_set_ip_family_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_set_ip_family().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_set_ip_family().
 *
 * Returns: a #QmiMessageWdsSetIpFamilyOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_ip_family_output_unref().
 *
 * Since: 1.0
 */
QmiMessageWdsSetIpFamilyOutput *qmi_client_wds_set_ip_family_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_set_autoconnect_settings:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsSetAutoconnectSettingsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Autoconnect Settings request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_set_autoconnect_settings_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wds_set_autoconnect_settings (
    QmiClientWds *self,
    QmiMessageWdsSetAutoconnectSettingsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_set_autoconnect_settings_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_set_autoconnect_settings().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_set_autoconnect_settings().
 *
 * Returns: a #QmiMessageWdsSetAutoconnectSettingsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_autoconnect_settings_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsSetAutoconnectSettingsOutput *qmi_client_wds_set_autoconnect_settings_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_pdn_throttle_info:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsGetPdnThrottleInfoInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get PDN Throttle Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_pdn_throttle_info_finish() to get the result of the operation.
 *
 * Since: 1.14
 */
void qmi_client_wds_get_pdn_throttle_info (
    QmiClientWds *self,
    QmiMessageWdsGetPdnThrottleInfoInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_pdn_throttle_info_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_pdn_throttle_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_pdn_throttle_info().
 *
 * Returns: a #QmiMessageWdsGetPdnThrottleInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_pdn_throttle_info_output_unref().
 *
 * Since: 1.14
 */
QmiMessageWdsGetPdnThrottleInfoOutput *qmi_client_wds_get_pdn_throttle_info_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_lte_attach_parameters:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get LTE Attach Parameters request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_lte_attach_parameters_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_wds_get_lte_attach_parameters (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_lte_attach_parameters_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_lte_attach_parameters().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_lte_attach_parameters().
 *
 * Returns: a #QmiMessageWdsGetLteAttachParametersOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_lte_attach_parameters_output_unref().
 *
 * Since: 1.28
 */
QmiMessageWdsGetLteAttachParametersOutput *qmi_client_wds_get_lte_attach_parameters_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_bind_data_port:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsBindDataPortInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Bind Data Port request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_bind_data_port_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_wds_bind_data_port (
    QmiClientWds *self,
    QmiMessageWdsBindDataPortInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_bind_data_port_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_bind_data_port().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_bind_data_port().
 *
 * Returns: a #QmiMessageWdsBindDataPortOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_bind_data_port_output_unref().
 *
 * Since: 1.28
 */
QmiMessageWdsBindDataPortOutput *qmi_client_wds_bind_data_port_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_max_lte_attach_pdn_number:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Max LTE Attach PDN Number request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_max_lte_attach_pdn_number_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_wds_get_max_lte_attach_pdn_number (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_max_lte_attach_pdn_number_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_max_lte_attach_pdn_number().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_max_lte_attach_pdn_number().
 *
 * Returns: a #QmiMessageWdsGetMaxLteAttachPdnNumberOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_max_lte_attach_pdn_number_output_unref().
 *
 * Since: 1.28
 */
QmiMessageWdsGetMaxLteAttachPdnNumberOutput *qmi_client_wds_get_max_lte_attach_pdn_number_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_set_lte_attach_pdn_list:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsSetLteAttachPdnListInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set LTE Attach PDN List request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_set_lte_attach_pdn_list_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_wds_set_lte_attach_pdn_list (
    QmiClientWds *self,
    QmiMessageWdsSetLteAttachPdnListInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_set_lte_attach_pdn_list_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_set_lte_attach_pdn_list().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_set_lte_attach_pdn_list().
 *
 * Returns: a #QmiMessageWdsSetLteAttachPdnListOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_set_lte_attach_pdn_list_output_unref().
 *
 * Since: 1.28
 */
QmiMessageWdsSetLteAttachPdnListOutput *qmi_client_wds_set_lte_attach_pdn_list_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_lte_attach_pdn_list:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get LTE Attach PDN List request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_lte_attach_pdn_list_finish() to get the result of the operation.
 *
 * Since: 1.28
 */
void qmi_client_wds_get_lte_attach_pdn_list (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_lte_attach_pdn_list_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_lte_attach_pdn_list().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_lte_attach_pdn_list().
 *
 * Returns: a #QmiMessageWdsGetLteAttachPdnListOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_lte_attach_pdn_list_output_unref().
 *
 * Since: 1.28
 */
QmiMessageWdsGetLteAttachPdnListOutput *qmi_client_wds_get_lte_attach_pdn_list_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_bind_mux_data_port:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsBindMuxDataPortInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Bind Mux Data Port request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_bind_mux_data_port_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_wds_bind_mux_data_port (
    QmiClientWds *self,
    QmiMessageWdsBindMuxDataPortInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_bind_mux_data_port_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_bind_mux_data_port().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_bind_mux_data_port().
 *
 * Returns: a #QmiMessageWdsBindMuxDataPortOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_bind_mux_data_port_output_unref().
 *
 * Since: 1.18
 */
QmiMessageWdsBindMuxDataPortOutput *qmi_client_wds_bind_mux_data_port_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_configure_profile_event_list:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsConfigureProfileEventListInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Configure Profile Event List request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_configure_profile_event_list_finish() to get the result of the operation.
 *
 * Since: 1.34
 */
void qmi_client_wds_configure_profile_event_list (
    QmiClientWds *self,
    QmiMessageWdsConfigureProfileEventListInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_configure_profile_event_list_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_configure_profile_event_list().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_configure_profile_event_list().
 *
 * Returns: a #QmiMessageWdsConfigureProfileEventListOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_configure_profile_event_list_output_unref().
 *
 * Since: 1.34
 */
QmiMessageWdsConfigureProfileEventListOutput *qmi_client_wds_configure_profile_event_list_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_bind_subscription:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsBindSubscriptionInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Bind Subscription request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_bind_subscription_finish() to get the result of the operation.
 *
 * Since: 1.37
 */
void qmi_client_wds_bind_subscription (
    QmiClientWds *self,
    QmiMessageWdsBindSubscriptionInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_bind_subscription_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_bind_subscription().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_bind_subscription().
 *
 * Returns: a #QmiMessageWdsBindSubscriptionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_bind_subscription_output_unref().
 *
 * Since: 1.37
 */
QmiMessageWdsBindSubscriptionOutput *qmi_client_wds_bind_subscription_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_get_bind_subscription:
 * @self: a #QmiClientWds.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Bind Subscription request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_get_bind_subscription_finish() to get the result of the operation.
 *
 * Since: 1.37
 */
void qmi_client_wds_get_bind_subscription (
    QmiClientWds *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_get_bind_subscription_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_get_bind_subscription().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_get_bind_subscription().
 *
 * Returns: a #QmiMessageWdsGetBindSubscriptionOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_get_bind_subscription_output_unref().
 *
 * Since: 1.37
 */
QmiMessageWdsGetBindSubscriptionOutput *qmi_client_wds_get_bind_subscription_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_wds_swi_create_profile_indexed:
 * @self: a #QmiClientWds.
 * @input: a #QmiMessageWdsSwiCreateProfileIndexedInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Swi Create Profile Indexed request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_wds_swi_create_profile_indexed_finish() to get the result of the operation.
 *
 * Since: 1.22
 */
void qmi_client_wds_swi_create_profile_indexed (
    QmiClientWds *self,
    QmiMessageWdsSwiCreateProfileIndexedInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_wds_swi_create_profile_indexed_finish:
 * @self: a #QmiClientWds.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_wds_swi_create_profile_indexed().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_wds_swi_create_profile_indexed().
 *
 * Returns: a #QmiMessageWdsSwiCreateProfileIndexedOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_wds_swi_create_profile_indexed_output_unref().
 *
 * Since: 1.22
 */
QmiMessageWdsSwiCreateProfileIndexedOutput *qmi_client_wds_swi_create_profile_indexed_finish (
    QmiClientWds *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_WDS__ */
