
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
#include "qmi-enums-private.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_CTL__
#define __LIBQMI_GLIB_QMI_CTL__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_CTL_SET_INSTANCE_ID
#define HAVE_QMI_MESSAGE_CTL_GET_VERSION_INFO
#define HAVE_QMI_MESSAGE_CTL_ALLOCATE_CID
#define HAVE_QMI_MESSAGE_CTL_RELEASE_CID
#define HAVE_QMI_MESSAGE_CTL_SET_DATA_FORMAT
#define HAVE_QMI_MESSAGE_CTL_SYNC
#define HAVE_QMI_MESSAGE_CTL_INTERNAL_PROXY_OPEN
#define HAVE_QMI_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR
#define HAVE_QMI_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR
#define HAVE_QMI_INDICATION_CTL_SYNC

/*****************************************************************************/
/* INDICATION: Qmi Indication CTL Sync */


/* --- Output -- */

/* Note: no fields in the Output container */

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Set Instance ID */


/* --- Input -- */

typedef struct _QmiMessageCtlSetInstanceIdInput QmiMessageCtlSetInstanceIdInput;
GType qmi_message_ctl_set_instance_id_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_SET_INSTANCE_ID_INPUT (qmi_message_ctl_set_instance_id_input_get_type ())

gboolean qmi_message_ctl_set_instance_id_input_get_id (
    QmiMessageCtlSetInstanceIdInput *self,
    guint8 *value_id,
    GError **error);

gboolean qmi_message_ctl_set_instance_id_input_set_id (
    QmiMessageCtlSetInstanceIdInput *self,
    guint8 value_id,
    GError **error);

QmiMessageCtlSetInstanceIdInput *qmi_message_ctl_set_instance_id_input_ref (QmiMessageCtlSetInstanceIdInput *self);

void qmi_message_ctl_set_instance_id_input_unref (QmiMessageCtlSetInstanceIdInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlSetInstanceIdInput, qmi_message_ctl_set_instance_id_input_unref)

/**
 * qmi_message_ctl_set_instance_id_input_new:
 *
 * Allocates a new #QmiMessageCtlSetInstanceIdInput.
 *
 * Returns: the newly created #QmiMessageCtlSetInstanceIdInput. The returned value should be freed with qmi_message_ctl_set_instance_id_input_unref().
 *
 * Since: 1.0
 */
QmiMessageCtlSetInstanceIdInput *qmi_message_ctl_set_instance_id_input_new (void);

/* --- Output -- */

typedef struct _QmiMessageCtlSetInstanceIdOutput QmiMessageCtlSetInstanceIdOutput;
GType qmi_message_ctl_set_instance_id_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_SET_INSTANCE_ID_OUTPUT (qmi_message_ctl_set_instance_id_output_get_type ())

gboolean qmi_message_ctl_set_instance_id_output_get_result (
    QmiMessageCtlSetInstanceIdOutput *self,
    GError **error);

gboolean qmi_message_ctl_set_instance_id_output_get_link_id (
    QmiMessageCtlSetInstanceIdOutput *self,
    guint16 *value_link_id,
    GError **error);

QmiMessageCtlSetInstanceIdOutput *qmi_message_ctl_set_instance_id_output_ref (QmiMessageCtlSetInstanceIdOutput *self);

void qmi_message_ctl_set_instance_id_output_unref (QmiMessageCtlSetInstanceIdOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlSetInstanceIdOutput, qmi_message_ctl_set_instance_id_output_unref)

/**
 * qmi_message_ctl_set_instance_id_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageCtlSetInstanceIdOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageCtlSetInstanceIdOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ctl_set_instance_id_output_unref().
 *
 * Since: 1.34
 */
QmiMessageCtlSetInstanceIdOutput *qmi_message_ctl_set_instance_id_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Get Version Info */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

typedef struct _QmiMessageCtlGetVersionInfoOutputServiceListService {
    QmiService service;
    guint16 major_version;
    guint16 minor_version;
} QmiMessageCtlGetVersionInfoOutputServiceListService;

typedef struct _QmiMessageCtlGetVersionInfoOutput QmiMessageCtlGetVersionInfoOutput;
GType qmi_message_ctl_get_version_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_GET_VERSION_INFO_OUTPUT (qmi_message_ctl_get_version_info_output_get_type ())

gboolean qmi_message_ctl_get_version_info_output_get_result (
    QmiMessageCtlGetVersionInfoOutput *self,
    GError **error);

gboolean qmi_message_ctl_get_version_info_output_get_service_list (
    QmiMessageCtlGetVersionInfoOutput *self,
    GArray **value_service_list,
    GError **error);

QmiMessageCtlGetVersionInfoOutput *qmi_message_ctl_get_version_info_output_ref (QmiMessageCtlGetVersionInfoOutput *self);

void qmi_message_ctl_get_version_info_output_unref (QmiMessageCtlGetVersionInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlGetVersionInfoOutput, qmi_message_ctl_get_version_info_output_unref)

/**
 * qmi_message_ctl_get_version_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageCtlGetVersionInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageCtlGetVersionInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ctl_get_version_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageCtlGetVersionInfoOutput *qmi_message_ctl_get_version_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Allocate CID */


/* --- Input -- */

typedef struct _QmiMessageCtlAllocateCidInput QmiMessageCtlAllocateCidInput;
GType qmi_message_ctl_allocate_cid_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_ALLOCATE_CID_INPUT (qmi_message_ctl_allocate_cid_input_get_type ())

gboolean qmi_message_ctl_allocate_cid_input_get_service (
    QmiMessageCtlAllocateCidInput *self,
    QmiService *value_service,
    GError **error);

gboolean qmi_message_ctl_allocate_cid_input_set_service (
    QmiMessageCtlAllocateCidInput *self,
    QmiService value_service,
    GError **error);

QmiMessageCtlAllocateCidInput *qmi_message_ctl_allocate_cid_input_ref (QmiMessageCtlAllocateCidInput *self);

void qmi_message_ctl_allocate_cid_input_unref (QmiMessageCtlAllocateCidInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlAllocateCidInput, qmi_message_ctl_allocate_cid_input_unref)

/**
 * qmi_message_ctl_allocate_cid_input_new:
 *
 * Allocates a new #QmiMessageCtlAllocateCidInput.
 *
 * Returns: the newly created #QmiMessageCtlAllocateCidInput. The returned value should be freed with qmi_message_ctl_allocate_cid_input_unref().
 *
 * Since: 1.0
 */
QmiMessageCtlAllocateCidInput *qmi_message_ctl_allocate_cid_input_new (void);

/* --- Output -- */

typedef struct _QmiMessageCtlAllocateCidOutput QmiMessageCtlAllocateCidOutput;
GType qmi_message_ctl_allocate_cid_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_ALLOCATE_CID_OUTPUT (qmi_message_ctl_allocate_cid_output_get_type ())

gboolean qmi_message_ctl_allocate_cid_output_get_result (
    QmiMessageCtlAllocateCidOutput *self,
    GError **error);

gboolean qmi_message_ctl_allocate_cid_output_get_allocation_info (
    QmiMessageCtlAllocateCidOutput *self,
    QmiService *value_allocation_info_service,
    guint8 *value_allocation_info_cid,
    GError **error);

QmiMessageCtlAllocateCidOutput *qmi_message_ctl_allocate_cid_output_ref (QmiMessageCtlAllocateCidOutput *self);

void qmi_message_ctl_allocate_cid_output_unref (QmiMessageCtlAllocateCidOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlAllocateCidOutput, qmi_message_ctl_allocate_cid_output_unref)

/**
 * qmi_message_ctl_allocate_cid_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageCtlAllocateCidOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageCtlAllocateCidOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ctl_allocate_cid_output_unref().
 *
 * Since: 1.34
 */
QmiMessageCtlAllocateCidOutput *qmi_message_ctl_allocate_cid_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Release CID */


/* --- Input -- */

typedef struct _QmiMessageCtlReleaseCidInput QmiMessageCtlReleaseCidInput;
GType qmi_message_ctl_release_cid_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_RELEASE_CID_INPUT (qmi_message_ctl_release_cid_input_get_type ())

gboolean qmi_message_ctl_release_cid_input_get_release_info (
    QmiMessageCtlReleaseCidInput *self,
    QmiService *value_release_info_service,
    guint8 *value_release_info_cid,
    GError **error);

gboolean qmi_message_ctl_release_cid_input_set_release_info (
    QmiMessageCtlReleaseCidInput *self,
    QmiService value_release_info_service,
    guint8 value_release_info_cid,
    GError **error);

QmiMessageCtlReleaseCidInput *qmi_message_ctl_release_cid_input_ref (QmiMessageCtlReleaseCidInput *self);

void qmi_message_ctl_release_cid_input_unref (QmiMessageCtlReleaseCidInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlReleaseCidInput, qmi_message_ctl_release_cid_input_unref)

/**
 * qmi_message_ctl_release_cid_input_new:
 *
 * Allocates a new #QmiMessageCtlReleaseCidInput.
 *
 * Returns: the newly created #QmiMessageCtlReleaseCidInput. The returned value should be freed with qmi_message_ctl_release_cid_input_unref().
 *
 * Since: 1.0
 */
QmiMessageCtlReleaseCidInput *qmi_message_ctl_release_cid_input_new (void);

/* --- Output -- */

typedef struct _QmiMessageCtlReleaseCidOutput QmiMessageCtlReleaseCidOutput;
GType qmi_message_ctl_release_cid_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_RELEASE_CID_OUTPUT (qmi_message_ctl_release_cid_output_get_type ())

gboolean qmi_message_ctl_release_cid_output_get_result (
    QmiMessageCtlReleaseCidOutput *self,
    GError **error);

gboolean qmi_message_ctl_release_cid_output_get_release_info (
    QmiMessageCtlReleaseCidOutput *self,
    QmiService *value_release_info_service,
    guint8 *value_release_info_cid,
    GError **error);

QmiMessageCtlReleaseCidOutput *qmi_message_ctl_release_cid_output_ref (QmiMessageCtlReleaseCidOutput *self);

void qmi_message_ctl_release_cid_output_unref (QmiMessageCtlReleaseCidOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlReleaseCidOutput, qmi_message_ctl_release_cid_output_unref)

/**
 * qmi_message_ctl_release_cid_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageCtlReleaseCidOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageCtlReleaseCidOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ctl_release_cid_output_unref().
 *
 * Since: 1.34
 */
QmiMessageCtlReleaseCidOutput *qmi_message_ctl_release_cid_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Set Data Format */


/* --- Input -- */

typedef struct _QmiMessageCtlSetDataFormatInput QmiMessageCtlSetDataFormatInput;
GType qmi_message_ctl_set_data_format_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_SET_DATA_FORMAT_INPUT (qmi_message_ctl_set_data_format_input_get_type ())

gboolean qmi_message_ctl_set_data_format_input_get_protocol (
    QmiMessageCtlSetDataFormatInput *self,
    QmiCtlDataLinkProtocol *value_protocol,
    GError **error);

gboolean qmi_message_ctl_set_data_format_input_set_protocol (
    QmiMessageCtlSetDataFormatInput *self,
    QmiCtlDataLinkProtocol value_protocol,
    GError **error);

gboolean qmi_message_ctl_set_data_format_input_get_format (
    QmiMessageCtlSetDataFormatInput *self,
    QmiCtlDataFormat *value_format,
    GError **error);

gboolean qmi_message_ctl_set_data_format_input_set_format (
    QmiMessageCtlSetDataFormatInput *self,
    QmiCtlDataFormat value_format,
    GError **error);

QmiMessageCtlSetDataFormatInput *qmi_message_ctl_set_data_format_input_ref (QmiMessageCtlSetDataFormatInput *self);

void qmi_message_ctl_set_data_format_input_unref (QmiMessageCtlSetDataFormatInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlSetDataFormatInput, qmi_message_ctl_set_data_format_input_unref)

/**
 * qmi_message_ctl_set_data_format_input_new:
 *
 * Allocates a new #QmiMessageCtlSetDataFormatInput.
 *
 * Returns: the newly created #QmiMessageCtlSetDataFormatInput. The returned value should be freed with qmi_message_ctl_set_data_format_input_unref().
 *
 * Since: 1.0
 */
QmiMessageCtlSetDataFormatInput *qmi_message_ctl_set_data_format_input_new (void);

/* --- Output -- */

typedef struct _QmiMessageCtlSetDataFormatOutput QmiMessageCtlSetDataFormatOutput;
GType qmi_message_ctl_set_data_format_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_SET_DATA_FORMAT_OUTPUT (qmi_message_ctl_set_data_format_output_get_type ())

gboolean qmi_message_ctl_set_data_format_output_get_result (
    QmiMessageCtlSetDataFormatOutput *self,
    GError **error);

gboolean qmi_message_ctl_set_data_format_output_get_protocol (
    QmiMessageCtlSetDataFormatOutput *self,
    QmiCtlDataLinkProtocol *value_protocol,
    GError **error);

QmiMessageCtlSetDataFormatOutput *qmi_message_ctl_set_data_format_output_ref (QmiMessageCtlSetDataFormatOutput *self);

void qmi_message_ctl_set_data_format_output_unref (QmiMessageCtlSetDataFormatOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlSetDataFormatOutput, qmi_message_ctl_set_data_format_output_unref)

/**
 * qmi_message_ctl_set_data_format_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageCtlSetDataFormatOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageCtlSetDataFormatOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ctl_set_data_format_output_unref().
 *
 * Since: 1.34
 */
QmiMessageCtlSetDataFormatOutput *qmi_message_ctl_set_data_format_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Sync */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

typedef struct _QmiMessageCtlSyncOutput QmiMessageCtlSyncOutput;
GType qmi_message_ctl_sync_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_SYNC_OUTPUT (qmi_message_ctl_sync_output_get_type ())

gboolean qmi_message_ctl_sync_output_get_result (
    QmiMessageCtlSyncOutput *self,
    GError **error);

QmiMessageCtlSyncOutput *qmi_message_ctl_sync_output_ref (QmiMessageCtlSyncOutput *self);

void qmi_message_ctl_sync_output_unref (QmiMessageCtlSyncOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlSyncOutput, qmi_message_ctl_sync_output_unref)

/**
 * qmi_message_ctl_sync_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageCtlSyncOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageCtlSyncOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ctl_sync_output_unref().
 *
 * Since: 1.34
 */
QmiMessageCtlSyncOutput *qmi_message_ctl_sync_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Internal Proxy Open */


/* --- Input -- */

typedef struct _QmiMessageCtlInternalProxyOpenInput QmiMessageCtlInternalProxyOpenInput;
GType qmi_message_ctl_internal_proxy_open_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_INTERNAL_PROXY_OPEN_INPUT (qmi_message_ctl_internal_proxy_open_input_get_type ())

gboolean qmi_message_ctl_internal_proxy_open_input_get_device_path (
    QmiMessageCtlInternalProxyOpenInput *self,
    const gchar **value_device_path,
    GError **error);

gboolean qmi_message_ctl_internal_proxy_open_input_set_device_path (
    QmiMessageCtlInternalProxyOpenInput *self,
    const gchar *value_device_path,
    GError **error);

QmiMessageCtlInternalProxyOpenInput *qmi_message_ctl_internal_proxy_open_input_ref (QmiMessageCtlInternalProxyOpenInput *self);

void qmi_message_ctl_internal_proxy_open_input_unref (QmiMessageCtlInternalProxyOpenInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlInternalProxyOpenInput, qmi_message_ctl_internal_proxy_open_input_unref)

/**
 * qmi_message_ctl_internal_proxy_open_input_new:
 *
 * Allocates a new #QmiMessageCtlInternalProxyOpenInput.
 *
 * Returns: the newly created #QmiMessageCtlInternalProxyOpenInput. The returned value should be freed with qmi_message_ctl_internal_proxy_open_input_unref().
 *
 * Since: 1.8
 */
QmiMessageCtlInternalProxyOpenInput *qmi_message_ctl_internal_proxy_open_input_new (void);

/* --- Output -- */

typedef struct _QmiMessageCtlInternalProxyOpenOutput QmiMessageCtlInternalProxyOpenOutput;
GType qmi_message_ctl_internal_proxy_open_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_INTERNAL_PROXY_OPEN_OUTPUT (qmi_message_ctl_internal_proxy_open_output_get_type ())

gboolean qmi_message_ctl_internal_proxy_open_output_get_result (
    QmiMessageCtlInternalProxyOpenOutput *self,
    GError **error);

QmiMessageCtlInternalProxyOpenOutput *qmi_message_ctl_internal_proxy_open_output_ref (QmiMessageCtlInternalProxyOpenOutput *self);

void qmi_message_ctl_internal_proxy_open_output_unref (QmiMessageCtlInternalProxyOpenOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlInternalProxyOpenOutput, qmi_message_ctl_internal_proxy_open_output_unref)

/**
 * qmi_message_ctl_internal_proxy_open_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageCtlInternalProxyOpenOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageCtlInternalProxyOpenOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ctl_internal_proxy_open_output_unref().
 *
 * Since: 1.34
 */
QmiMessageCtlInternalProxyOpenOutput *qmi_message_ctl_internal_proxy_open_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Internal Allocate CID QRTR */


/* --- Input -- */

typedef struct _QmiMessageCtlInternalAllocateCidQrtrInput QmiMessageCtlInternalAllocateCidQrtrInput;
GType qmi_message_ctl_internal_allocate_cid_qrtr_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_INPUT (qmi_message_ctl_internal_allocate_cid_qrtr_input_get_type ())

gboolean qmi_message_ctl_internal_allocate_cid_qrtr_input_get_service (
    QmiMessageCtlInternalAllocateCidQrtrInput *self,
    QmiService *value_service,
    GError **error);

gboolean qmi_message_ctl_internal_allocate_cid_qrtr_input_set_service (
    QmiMessageCtlInternalAllocateCidQrtrInput *self,
    QmiService value_service,
    GError **error);

QmiMessageCtlInternalAllocateCidQrtrInput *qmi_message_ctl_internal_allocate_cid_qrtr_input_ref (QmiMessageCtlInternalAllocateCidQrtrInput *self);

void qmi_message_ctl_internal_allocate_cid_qrtr_input_unref (QmiMessageCtlInternalAllocateCidQrtrInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlInternalAllocateCidQrtrInput, qmi_message_ctl_internal_allocate_cid_qrtr_input_unref)

/**
 * qmi_message_ctl_internal_allocate_cid_qrtr_input_new:
 *
 * Allocates a new #QmiMessageCtlInternalAllocateCidQrtrInput.
 *
 * Returns: the newly created #QmiMessageCtlInternalAllocateCidQrtrInput. The returned value should be freed with qmi_message_ctl_internal_allocate_cid_qrtr_input_unref().
 *
 * Since: 1.0
 */
QmiMessageCtlInternalAllocateCidQrtrInput *qmi_message_ctl_internal_allocate_cid_qrtr_input_new (void);

/* --- Output -- */

typedef struct _QmiMessageCtlInternalAllocateCidQrtrOutput QmiMessageCtlInternalAllocateCidQrtrOutput;
GType qmi_message_ctl_internal_allocate_cid_qrtr_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_INTERNAL_ALLOCATE_CID_QRTR_OUTPUT (qmi_message_ctl_internal_allocate_cid_qrtr_output_get_type ())

gboolean qmi_message_ctl_internal_allocate_cid_qrtr_output_get_result (
    QmiMessageCtlInternalAllocateCidQrtrOutput *self,
    GError **error);

gboolean qmi_message_ctl_internal_allocate_cid_qrtr_output_get_allocation_info (
    QmiMessageCtlInternalAllocateCidQrtrOutput *self,
    QmiService *value_allocation_info_service,
    guint8 *value_allocation_info_cid,
    GError **error);

QmiMessageCtlInternalAllocateCidQrtrOutput *qmi_message_ctl_internal_allocate_cid_qrtr_output_ref (QmiMessageCtlInternalAllocateCidQrtrOutput *self);

void qmi_message_ctl_internal_allocate_cid_qrtr_output_unref (QmiMessageCtlInternalAllocateCidQrtrOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlInternalAllocateCidQrtrOutput, qmi_message_ctl_internal_allocate_cid_qrtr_output_unref)

/**
 * qmi_message_ctl_internal_allocate_cid_qrtr_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageCtlInternalAllocateCidQrtrOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageCtlInternalAllocateCidQrtrOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ctl_internal_allocate_cid_qrtr_output_unref().
 *
 * Since: 1.34
 */
QmiMessageCtlInternalAllocateCidQrtrOutput *qmi_message_ctl_internal_allocate_cid_qrtr_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message CTL Internal Release CID QRTR */


/* --- Input -- */

typedef struct _QmiMessageCtlInternalReleaseCidQrtrInput QmiMessageCtlInternalReleaseCidQrtrInput;
GType qmi_message_ctl_internal_release_cid_qrtr_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_INPUT (qmi_message_ctl_internal_release_cid_qrtr_input_get_type ())

gboolean qmi_message_ctl_internal_release_cid_qrtr_input_get_release_info (
    QmiMessageCtlInternalReleaseCidQrtrInput *self,
    QmiService *value_release_info_service,
    guint8 *value_release_info_cid,
    GError **error);

gboolean qmi_message_ctl_internal_release_cid_qrtr_input_set_release_info (
    QmiMessageCtlInternalReleaseCidQrtrInput *self,
    QmiService value_release_info_service,
    guint8 value_release_info_cid,
    GError **error);

QmiMessageCtlInternalReleaseCidQrtrInput *qmi_message_ctl_internal_release_cid_qrtr_input_ref (QmiMessageCtlInternalReleaseCidQrtrInput *self);

void qmi_message_ctl_internal_release_cid_qrtr_input_unref (QmiMessageCtlInternalReleaseCidQrtrInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlInternalReleaseCidQrtrInput, qmi_message_ctl_internal_release_cid_qrtr_input_unref)

/**
 * qmi_message_ctl_internal_release_cid_qrtr_input_new:
 *
 * Allocates a new #QmiMessageCtlInternalReleaseCidQrtrInput.
 *
 * Returns: the newly created #QmiMessageCtlInternalReleaseCidQrtrInput. The returned value should be freed with qmi_message_ctl_internal_release_cid_qrtr_input_unref().
 *
 * Since: 1.0
 */
QmiMessageCtlInternalReleaseCidQrtrInput *qmi_message_ctl_internal_release_cid_qrtr_input_new (void);

/* --- Output -- */

typedef struct _QmiMessageCtlInternalReleaseCidQrtrOutput QmiMessageCtlInternalReleaseCidQrtrOutput;
GType qmi_message_ctl_internal_release_cid_qrtr_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_CTL_INTERNAL_RELEASE_CID_QRTR_OUTPUT (qmi_message_ctl_internal_release_cid_qrtr_output_get_type ())

gboolean qmi_message_ctl_internal_release_cid_qrtr_output_get_result (
    QmiMessageCtlInternalReleaseCidQrtrOutput *self,
    GError **error);

gboolean qmi_message_ctl_internal_release_cid_qrtr_output_get_release_info (
    QmiMessageCtlInternalReleaseCidQrtrOutput *self,
    QmiService *value_release_info_service,
    guint8 *value_release_info_cid,
    GError **error);

QmiMessageCtlInternalReleaseCidQrtrOutput *qmi_message_ctl_internal_release_cid_qrtr_output_ref (QmiMessageCtlInternalReleaseCidQrtrOutput *self);

void qmi_message_ctl_internal_release_cid_qrtr_output_unref (QmiMessageCtlInternalReleaseCidQrtrOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageCtlInternalReleaseCidQrtrOutput, qmi_message_ctl_internal_release_cid_qrtr_output_unref)

/**
 * qmi_message_ctl_internal_release_cid_qrtr_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageCtlInternalReleaseCidQrtrOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageCtlInternalReleaseCidQrtrOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_ctl_internal_release_cid_qrtr_output_unref().
 *
 * Since: 1.34
 */
QmiMessageCtlInternalReleaseCidQrtrOutput *qmi_message_ctl_internal_release_cid_qrtr_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: CTL */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_ctl_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_CTL

/*****************************************************************************/
/* CLIENT: QMI Client CTL */

#define QMI_TYPE_CLIENT_CTL            (qmi_client_ctl_get_type ())
#define QMI_CLIENT_CTL(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_CTL, QmiClientCtl))
#define QMI_CLIENT_CTL_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_CTL, QmiClientCtlClass))
#define QMI_IS_CLIENT_CTL(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_CTL))
#define QMI_IS_CLIENT_CTL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_CTL))
#define QMI_CLIENT_CTL_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_CTL, QmiClientCtlClass))

typedef struct _QmiClientCtl QmiClientCtl;
typedef struct _QmiClientCtlClass QmiClientCtlClass;

struct _QmiClientCtl {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientCtlClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_ctl_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientCtl, g_object_unref)

void qmi_client_ctl_set_instance_id (
    QmiClientCtl *self,
    QmiMessageCtlSetInstanceIdInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

QmiMessageCtlSetInstanceIdOutput *qmi_client_ctl_set_instance_id_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_ctl_get_version_info (
    QmiClientCtl *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

QmiMessageCtlGetVersionInfoOutput *qmi_client_ctl_get_version_info_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_ctl_allocate_cid (
    QmiClientCtl *self,
    QmiMessageCtlAllocateCidInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

QmiMessageCtlAllocateCidOutput *qmi_client_ctl_allocate_cid_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_ctl_release_cid (
    QmiClientCtl *self,
    QmiMessageCtlReleaseCidInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

QmiMessageCtlReleaseCidOutput *qmi_client_ctl_release_cid_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_ctl_set_data_format (
    QmiClientCtl *self,
    QmiMessageCtlSetDataFormatInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

QmiMessageCtlSetDataFormatOutput *qmi_client_ctl_set_data_format_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_ctl_sync (
    QmiClientCtl *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

QmiMessageCtlSyncOutput *qmi_client_ctl_sync_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_ctl_internal_proxy_open (
    QmiClientCtl *self,
    QmiMessageCtlInternalProxyOpenInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

QmiMessageCtlInternalProxyOpenOutput *qmi_client_ctl_internal_proxy_open_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_ctl_internal_allocate_cid_qrtr (
    QmiClientCtl *self,
    QmiMessageCtlInternalAllocateCidQrtrInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

QmiMessageCtlInternalAllocateCidQrtrOutput *qmi_client_ctl_internal_allocate_cid_qrtr_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error);

void qmi_client_ctl_internal_release_cid_qrtr (
    QmiClientCtl *self,
    QmiMessageCtlInternalReleaseCidQrtrInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

QmiMessageCtlInternalReleaseCidQrtrOutput *qmi_client_ctl_internal_release_cid_qrtr_finish (
    QmiClientCtl *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_CTL__ */
