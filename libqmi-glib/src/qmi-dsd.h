
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
#include "qmi-enums-dsd.h"
#include "qmi-flags64-dsd.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_DSD__
#define __LIBQMI_GLIB_QMI_DSD__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_DSD_GET_SYSTEM_STATUS
#define HAVE_QMI_MESSAGE_DSD_SYSTEM_STATUS_CHANGE
#define HAVE_QMI_MESSAGE_DSD_GET_APN_INFO
#define HAVE_QMI_MESSAGE_DSD_SET_APN_TYPE
#define HAVE_QMI_INDICATION_DSD_SYSTEM_STATUS

/*****************************************************************************/
/* INDICATION: Qmi Indication DSD System Status */


/* --- Output -- */


/**
 * QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem:
 * @technology: a #QmiDsdDataSystemNetworkType.
 * @rat: a #QmiDsdRadioAccessTechnology.
 * @so_mask: a #QmiDsdSoMask.
 *
 * A QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem struct.
 *
 * Since: 1.32
 */
typedef struct _QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem {
    QmiDsdDataSystemNetworkType technology;
    QmiDsdRadioAccessTechnology rat;
    QmiDsdSoMask so_mask;
} QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem;

GType qmi_indication_dsd_system_status_output_available_systems_system_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationDsdSystemStatusOutput:
 *
 * The #QmiIndicationDsdSystemStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiIndicationDsdSystemStatusOutput QmiIndicationDsdSystemStatusOutput;
GType qmi_indication_dsd_system_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_DSD_SYSTEM_STATUS_OUTPUT (qmi_indication_dsd_system_status_output_get_type ())


/**
 * qmi_indication_dsd_system_status_output_get_available_systems: (skip)
 * @self: a #QmiIndicationDsdSystemStatusOutput.
 * @value_available_systems: (out)(optional)(element-type QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem)(transfer none): a placeholder for the output #GArray of #QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Available Systems' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_dsd_system_status_output_get_available_systems (
    QmiIndicationDsdSystemStatusOutput *self,
    GArray **value_available_systems,
    GError **error);


/**
 * qmi_indication_dsd_system_status_output_get_available_systems_gir: (rename-to qmi_indication_dsd_system_status_output_get_available_systems)
 * @self: a #QmiIndicationDsdSystemStatusOutput.
 * @value_available_systems_ptr: (out)(optional)(element-type QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem)(transfer none): a placeholder for the output array of #QmiIndicationDsdSystemStatusOutputAvailableSystemsSystem elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Available Systems' field from @self.
 *
 * Version of qmi_indication_dsd_system_status_output_get_available_systems() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_dsd_system_status_output_get_available_systems_gir (
    QmiIndicationDsdSystemStatusOutput *self,
    GPtrArray **value_available_systems_ptr,
    GError **error);


/**
 * qmi_indication_dsd_system_status_output_ref:
 * @self: a #QmiIndicationDsdSystemStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiIndicationDsdSystemStatusOutput *qmi_indication_dsd_system_status_output_ref (QmiIndicationDsdSystemStatusOutput *self);

/**
 * qmi_indication_dsd_system_status_output_unref:
 * @self: a #QmiIndicationDsdSystemStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_indication_dsd_system_status_output_unref (QmiIndicationDsdSystemStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationDsdSystemStatusOutput, qmi_indication_dsd_system_status_output_unref)

/**
 * qmi_indication_dsd_system_status_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationDsdSystemStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationDsdSystemStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_dsd_system_status_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationDsdSystemStatusOutput *qmi_indication_dsd_system_status_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DSD Get System Status */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */


/**
 * QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem:
 * @technology: a #QmiDsdDataSystemNetworkType.
 * @rat: a #QmiDsdRadioAccessTechnology.
 * @so_mask: a #QmiDsdSoMask.
 *
 * A QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem struct.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem {
    QmiDsdDataSystemNetworkType technology;
    QmiDsdRadioAccessTechnology rat;
    QmiDsdSoMask so_mask;
} QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem;

GType qmi_message_dsd_get_system_status_output_available_systems_system_get_type (void) G_GNUC_CONST;

/**
 * QmiMessageDsdGetSystemStatusOutput:
 *
 * The #QmiMessageDsdGetSystemStatusOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageDsdGetSystemStatusOutput QmiMessageDsdGetSystemStatusOutput;
GType qmi_message_dsd_get_system_status_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DSD_GET_SYSTEM_STATUS_OUTPUT (qmi_message_dsd_get_system_status_output_get_type ())


/**
 * qmi_message_dsd_get_system_status_output_get_available_systems: (skip)
 * @self: a #QmiMessageDsdGetSystemStatusOutput.
 * @value_available_systems: (out)(optional)(element-type QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem)(transfer none): a placeholder for the output #GArray of #QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Available Systems' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dsd_get_system_status_output_get_available_systems (
    QmiMessageDsdGetSystemStatusOutput *self,
    GArray **value_available_systems,
    GError **error);


/**
 * qmi_message_dsd_get_system_status_output_get_available_systems_gir: (rename-to qmi_message_dsd_get_system_status_output_get_available_systems)
 * @self: a #QmiMessageDsdGetSystemStatusOutput.
 * @value_available_systems_ptr: (out)(optional)(element-type QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem)(transfer none): a placeholder for the output array of #QmiMessageDsdGetSystemStatusOutputAvailableSystemsSystem elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Available Systems' field from @self.
 *
 * Version of qmi_message_dsd_get_system_status_output_get_available_systems() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dsd_get_system_status_output_get_available_systems_gir (
    QmiMessageDsdGetSystemStatusOutput *self,
    GPtrArray **value_available_systems_ptr,
    GError **error);


/**
 * qmi_message_dsd_get_system_status_output_get_result:
 * @self: a QmiMessageDsdGetSystemStatusOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.32
 */
gboolean qmi_message_dsd_get_system_status_output_get_result (
    QmiMessageDsdGetSystemStatusOutput *self,
    GError **error);


/**
 * qmi_message_dsd_get_system_status_output_ref:
 * @self: a #QmiMessageDsdGetSystemStatusOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageDsdGetSystemStatusOutput *qmi_message_dsd_get_system_status_output_ref (QmiMessageDsdGetSystemStatusOutput *self);

/**
 * qmi_message_dsd_get_system_status_output_unref:
 * @self: a #QmiMessageDsdGetSystemStatusOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_dsd_get_system_status_output_unref (QmiMessageDsdGetSystemStatusOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDsdGetSystemStatusOutput, qmi_message_dsd_get_system_status_output_unref)

/**
 * qmi_message_dsd_get_system_status_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDsdGetSystemStatusOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDsdGetSystemStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dsd_get_system_status_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDsdGetSystemStatusOutput *qmi_message_dsd_get_system_status_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DSD System Status Change */


/* --- Input -- */

/**
 * QmiMessageDsdSystemStatusChangeInput:
 *
 * The #QmiMessageDsdSystemStatusChangeInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageDsdSystemStatusChangeInput QmiMessageDsdSystemStatusChangeInput;
GType qmi_message_dsd_system_status_change_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DSD_SYSTEM_STATUS_CHANGE_INPUT (qmi_message_dsd_system_status_change_input_get_type ())


/**
 * qmi_message_dsd_system_status_change_input_get_register_indication:
 * @self: a #QmiMessageDsdSystemStatusChangeInput.
 * @value_register_indication: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Register Indication' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dsd_system_status_change_input_get_register_indication (
    QmiMessageDsdSystemStatusChangeInput *self,
    gboolean *value_register_indication,
    GError **error);


/**
 * qmi_message_dsd_system_status_change_input_set_register_indication:
 * @self: a #QmiMessageDsdSystemStatusChangeInput.
 * @value_register_indication: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Register Indication' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_dsd_system_status_change_input_set_register_indication (
    QmiMessageDsdSystemStatusChangeInput *self,
    gboolean value_register_indication,
    GError **error);


/**
 * qmi_message_dsd_system_status_change_input_ref:
 * @self: a #QmiMessageDsdSystemStatusChangeInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageDsdSystemStatusChangeInput *qmi_message_dsd_system_status_change_input_ref (QmiMessageDsdSystemStatusChangeInput *self);

/**
 * qmi_message_dsd_system_status_change_input_unref:
 * @self: a #QmiMessageDsdSystemStatusChangeInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_dsd_system_status_change_input_unref (QmiMessageDsdSystemStatusChangeInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDsdSystemStatusChangeInput, qmi_message_dsd_system_status_change_input_unref)

/**
 * qmi_message_dsd_system_status_change_input_new:
 *
 * Allocates a new #QmiMessageDsdSystemStatusChangeInput.
 *
 * Returns: the newly created #QmiMessageDsdSystemStatusChangeInput. The returned value should be freed with qmi_message_dsd_system_status_change_input_unref().
 *
 * Since: 1.32
 */
QmiMessageDsdSystemStatusChangeInput *qmi_message_dsd_system_status_change_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDsdSystemStatusChangeOutput:
 *
 * The #QmiMessageDsdSystemStatusChangeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiMessageDsdSystemStatusChangeOutput QmiMessageDsdSystemStatusChangeOutput;
GType qmi_message_dsd_system_status_change_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DSD_SYSTEM_STATUS_CHANGE_OUTPUT (qmi_message_dsd_system_status_change_output_get_type ())


/**
 * qmi_message_dsd_system_status_change_output_get_result:
 * @self: a QmiMessageDsdSystemStatusChangeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.32
 */
gboolean qmi_message_dsd_system_status_change_output_get_result (
    QmiMessageDsdSystemStatusChangeOutput *self,
    GError **error);


/**
 * qmi_message_dsd_system_status_change_output_ref:
 * @self: a #QmiMessageDsdSystemStatusChangeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiMessageDsdSystemStatusChangeOutput *qmi_message_dsd_system_status_change_output_ref (QmiMessageDsdSystemStatusChangeOutput *self);

/**
 * qmi_message_dsd_system_status_change_output_unref:
 * @self: a #QmiMessageDsdSystemStatusChangeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_message_dsd_system_status_change_output_unref (QmiMessageDsdSystemStatusChangeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDsdSystemStatusChangeOutput, qmi_message_dsd_system_status_change_output_unref)

/**
 * qmi_message_dsd_system_status_change_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDsdSystemStatusChangeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDsdSystemStatusChangeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dsd_system_status_change_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDsdSystemStatusChangeOutput *qmi_message_dsd_system_status_change_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DSD Get APN Info */


/* --- Input -- */

/**
 * QmiMessageDsdGetApnInfoInput:
 *
 * The #QmiMessageDsdGetApnInfoInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageDsdGetApnInfoInput QmiMessageDsdGetApnInfoInput;
GType qmi_message_dsd_get_apn_info_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DSD_GET_APN_INFO_INPUT (qmi_message_dsd_get_apn_info_input_get_type ())


/**
 * qmi_message_dsd_get_apn_info_input_get_apn_type:
 * @self: a #QmiMessageDsdGetApnInfoInput.
 * @value_apn_type: (out)(optional): a placeholder for the output #QmiDsdApnType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dsd_get_apn_info_input_get_apn_type (
    QmiMessageDsdGetApnInfoInput *self,
    QmiDsdApnType *value_apn_type,
    GError **error);


/**
 * qmi_message_dsd_get_apn_info_input_set_apn_type:
 * @self: a #QmiMessageDsdGetApnInfoInput.
 * @value_apn_type: a #QmiDsdApnType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dsd_get_apn_info_input_set_apn_type (
    QmiMessageDsdGetApnInfoInput *self,
    QmiDsdApnType value_apn_type,
    GError **error);


/**
 * qmi_message_dsd_get_apn_info_input_ref:
 * @self: a #QmiMessageDsdGetApnInfoInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageDsdGetApnInfoInput *qmi_message_dsd_get_apn_info_input_ref (QmiMessageDsdGetApnInfoInput *self);

/**
 * qmi_message_dsd_get_apn_info_input_unref:
 * @self: a #QmiMessageDsdGetApnInfoInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_dsd_get_apn_info_input_unref (QmiMessageDsdGetApnInfoInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDsdGetApnInfoInput, qmi_message_dsd_get_apn_info_input_unref)

/**
 * qmi_message_dsd_get_apn_info_input_new:
 *
 * Allocates a new #QmiMessageDsdGetApnInfoInput.
 *
 * Returns: the newly created #QmiMessageDsdGetApnInfoInput. The returned value should be freed with qmi_message_dsd_get_apn_info_input_unref().
 *
 * Since: 1.26
 */
QmiMessageDsdGetApnInfoInput *qmi_message_dsd_get_apn_info_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDsdGetApnInfoOutput:
 *
 * The #QmiMessageDsdGetApnInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageDsdGetApnInfoOutput QmiMessageDsdGetApnInfoOutput;
GType qmi_message_dsd_get_apn_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DSD_GET_APN_INFO_OUTPUT (qmi_message_dsd_get_apn_info_output_get_type ())


/**
 * qmi_message_dsd_get_apn_info_output_get_apn_name:
 * @self: a #QmiMessageDsdGetApnInfoOutput.
 * @value_apn_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Name' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dsd_get_apn_info_output_get_apn_name (
    QmiMessageDsdGetApnInfoOutput *self,
    const gchar **value_apn_name,
    GError **error);


/**
 * qmi_message_dsd_get_apn_info_output_get_result:
 * @self: a QmiMessageDsdGetApnInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_dsd_get_apn_info_output_get_result (
    QmiMessageDsdGetApnInfoOutput *self,
    GError **error);


/**
 * qmi_message_dsd_get_apn_info_output_ref:
 * @self: a #QmiMessageDsdGetApnInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageDsdGetApnInfoOutput *qmi_message_dsd_get_apn_info_output_ref (QmiMessageDsdGetApnInfoOutput *self);

/**
 * qmi_message_dsd_get_apn_info_output_unref:
 * @self: a #QmiMessageDsdGetApnInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_dsd_get_apn_info_output_unref (QmiMessageDsdGetApnInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDsdGetApnInfoOutput, qmi_message_dsd_get_apn_info_output_unref)

/**
 * qmi_message_dsd_get_apn_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDsdGetApnInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDsdGetApnInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dsd_get_apn_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDsdGetApnInfoOutput *qmi_message_dsd_get_apn_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DSD Set APN Type */


/* --- Input -- */

/**
 * QmiMessageDsdSetApnTypeInput:
 *
 * The #QmiMessageDsdSetApnTypeInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageDsdSetApnTypeInput QmiMessageDsdSetApnTypeInput;
GType qmi_message_dsd_set_apn_type_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DSD_SET_APN_TYPE_INPUT (qmi_message_dsd_set_apn_type_input_get_type ())


/**
 * qmi_message_dsd_set_apn_type_input_get_apn_type_preference_mask:
 * @self: a #QmiMessageDsdSetApnTypeInput.
 * @value_apn_type_preference_mask: (out)(optional): a placeholder for the output #QmiDsdApnTypePreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Type Preference Mask' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dsd_set_apn_type_input_get_apn_type_preference_mask (
    QmiMessageDsdSetApnTypeInput *self,
    QmiDsdApnTypePreference *value_apn_type_preference_mask,
    GError **error);


/**
 * qmi_message_dsd_set_apn_type_input_set_apn_type_preference_mask:
 * @self: a #QmiMessageDsdSetApnTypeInput.
 * @value_apn_type_preference_mask: a #QmiDsdApnTypePreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Type Preference Mask' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dsd_set_apn_type_input_set_apn_type_preference_mask (
    QmiMessageDsdSetApnTypeInput *self,
    QmiDsdApnTypePreference value_apn_type_preference_mask,
    GError **error);


/**
 * qmi_message_dsd_set_apn_type_input_get_apn_type:
 * @self: a #QmiMessageDsdSetApnTypeInput.
 * @value_apn_type_name: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @value_apn_type_type: (out)(optional): a placeholder for the output #QmiDsdApnTypePreference, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'APN Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dsd_set_apn_type_input_get_apn_type (
    QmiMessageDsdSetApnTypeInput *self,
    const gchar **value_apn_type_name,
    QmiDsdApnTypePreference *value_apn_type_type,
    GError **error);


/**
 * qmi_message_dsd_set_apn_type_input_set_apn_type:
 * @self: a #QmiMessageDsdSetApnTypeInput.
 * @value_apn_type_name: a constant string.
 * @value_apn_type_type: a #QmiDsdApnTypePreference.
 * @error: Return location for error or %NULL.
 *
 * Set the 'APN Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.26
 */
gboolean qmi_message_dsd_set_apn_type_input_set_apn_type (
    QmiMessageDsdSetApnTypeInput *self,
    const gchar *value_apn_type_name,
    QmiDsdApnTypePreference value_apn_type_type,
    GError **error);


/**
 * qmi_message_dsd_set_apn_type_input_ref:
 * @self: a #QmiMessageDsdSetApnTypeInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageDsdSetApnTypeInput *qmi_message_dsd_set_apn_type_input_ref (QmiMessageDsdSetApnTypeInput *self);

/**
 * qmi_message_dsd_set_apn_type_input_unref:
 * @self: a #QmiMessageDsdSetApnTypeInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_dsd_set_apn_type_input_unref (QmiMessageDsdSetApnTypeInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDsdSetApnTypeInput, qmi_message_dsd_set_apn_type_input_unref)

/**
 * qmi_message_dsd_set_apn_type_input_new:
 *
 * Allocates a new #QmiMessageDsdSetApnTypeInput.
 *
 * Returns: the newly created #QmiMessageDsdSetApnTypeInput. The returned value should be freed with qmi_message_dsd_set_apn_type_input_unref().
 *
 * Since: 1.26
 */
QmiMessageDsdSetApnTypeInput *qmi_message_dsd_set_apn_type_input_new (void);

/* --- Output -- */

/**
 * QmiMessageDsdSetApnTypeOutput:
 *
 * The #QmiMessageDsdSetApnTypeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
typedef struct _QmiMessageDsdSetApnTypeOutput QmiMessageDsdSetApnTypeOutput;
GType qmi_message_dsd_set_apn_type_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_DSD_SET_APN_TYPE_OUTPUT (qmi_message_dsd_set_apn_type_output_get_type ())


/**
 * qmi_message_dsd_set_apn_type_output_get_result:
 * @self: a QmiMessageDsdSetApnTypeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean qmi_message_dsd_set_apn_type_output_get_result (
    QmiMessageDsdSetApnTypeOutput *self,
    GError **error);


/**
 * qmi_message_dsd_set_apn_type_output_ref:
 * @self: a #QmiMessageDsdSetApnTypeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.26
 */
QmiMessageDsdSetApnTypeOutput *qmi_message_dsd_set_apn_type_output_ref (QmiMessageDsdSetApnTypeOutput *self);

/**
 * qmi_message_dsd_set_apn_type_output_unref:
 * @self: a #QmiMessageDsdSetApnTypeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.26
 */
void qmi_message_dsd_set_apn_type_output_unref (QmiMessageDsdSetApnTypeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessageDsdSetApnTypeOutput, qmi_message_dsd_set_apn_type_output_unref)

/**
 * qmi_message_dsd_set_apn_type_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessageDsdSetApnTypeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessageDsdSetApnTypeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dsd_set_apn_type_output_unref().
 *
 * Since: 1.34
 */
QmiMessageDsdSetApnTypeOutput *qmi_message_dsd_set_apn_type_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: DSD */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_dsd_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_DSD

/*****************************************************************************/
/* CLIENT: QMI Client DSD */

#define QMI_TYPE_CLIENT_DSD            (qmi_client_dsd_get_type ())
#define QMI_CLIENT_DSD(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_DSD, QmiClientDsd))
#define QMI_CLIENT_DSD_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_DSD, QmiClientDsdClass))
#define QMI_IS_CLIENT_DSD(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_DSD))
#define QMI_IS_CLIENT_DSD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_DSD))
#define QMI_CLIENT_DSD_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_DSD, QmiClientDsdClass))

typedef struct _QmiClientDsd QmiClientDsd;
typedef struct _QmiClientDsdClass QmiClientDsdClass;

/**
 * QmiClientDsd:
 *
 * #QmiClient which handles operations in the DSD service.
 *
 * The #QmiClientDsd structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.26
 */
struct _QmiClientDsd {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientDsdClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_dsd_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientDsd, g_object_unref)

/**
 * qmi_client_dsd_get_system_status:
 * @self: a #QmiClientDsd.
 * @unused: %NULL. This message doesn't have any input bundle.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get System Status request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dsd_get_system_status_finish() to get the result of the operation.
 *
 * Since: 1.32
 */
void qmi_client_dsd_get_system_status (
    QmiClientDsd *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dsd_get_system_status_finish:
 * @self: a #QmiClientDsd.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dsd_get_system_status().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dsd_get_system_status().
 *
 * Returns: a #QmiMessageDsdGetSystemStatusOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dsd_get_system_status_output_unref().
 *
 * Since: 1.32
 */
QmiMessageDsdGetSystemStatusOutput *qmi_client_dsd_get_system_status_finish (
    QmiClientDsd *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dsd_system_status_change:
 * @self: a #QmiClientDsd.
 * @input: a #QmiMessageDsdSystemStatusChangeInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a System Status Change request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dsd_system_status_change_finish() to get the result of the operation.
 *
 * Since: 1.32
 */
void qmi_client_dsd_system_status_change (
    QmiClientDsd *self,
    QmiMessageDsdSystemStatusChangeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dsd_system_status_change_finish:
 * @self: a #QmiClientDsd.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dsd_system_status_change().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dsd_system_status_change().
 *
 * Returns: a #QmiMessageDsdSystemStatusChangeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dsd_system_status_change_output_unref().
 *
 * Since: 1.32
 */
QmiMessageDsdSystemStatusChangeOutput *qmi_client_dsd_system_status_change_finish (
    QmiClientDsd *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dsd_get_apn_info:
 * @self: a #QmiClientDsd.
 * @input: a #QmiMessageDsdGetApnInfoInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get APN Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dsd_get_apn_info_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_dsd_get_apn_info (
    QmiClientDsd *self,
    QmiMessageDsdGetApnInfoInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dsd_get_apn_info_finish:
 * @self: a #QmiClientDsd.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dsd_get_apn_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dsd_get_apn_info().
 *
 * Returns: a #QmiMessageDsdGetApnInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dsd_get_apn_info_output_unref().
 *
 * Since: 1.26
 */
QmiMessageDsdGetApnInfoOutput *qmi_client_dsd_get_apn_info_finish (
    QmiClientDsd *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_dsd_set_apn_type:
 * @self: a #QmiClientDsd.
 * @input: a #QmiMessageDsdSetApnTypeInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set APN Type request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_dsd_set_apn_type_finish() to get the result of the operation.
 *
 * Since: 1.26
 */
void qmi_client_dsd_set_apn_type (
    QmiClientDsd *self,
    QmiMessageDsdSetApnTypeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_dsd_set_apn_type_finish:
 * @self: a #QmiClientDsd.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_dsd_set_apn_type().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_dsd_set_apn_type().
 *
 * Returns: a #QmiMessageDsdSetApnTypeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_dsd_set_apn_type_output_unref().
 *
 * Since: 1.26
 */
QmiMessageDsdSetApnTypeOutput *qmi_client_dsd_set_apn_type_finish (
    QmiClientDsd *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_DSD__ */
