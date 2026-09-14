
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
#include "qmi-enums-pdc.h"
#include "qmi-message.h"
#include "qmi-client.h"

#ifndef __LIBQMI_GLIB_QMI_PDC__
#define __LIBQMI_GLIB_QMI_PDC__

G_BEGIN_DECLS

#define HAVE_QMI_MESSAGE_PDC_RESET
#define HAVE_QMI_MESSAGE_PDC_REGISTER
#define HAVE_QMI_MESSAGE_PDC_CONFIG_CHANGE
#define HAVE_QMI_MESSAGE_PDC_GET_SELECTED_CONFIG
#define HAVE_QMI_MESSAGE_PDC_SET_SELECTED_CONFIG
#define HAVE_QMI_MESSAGE_PDC_LIST_CONFIGS
#define HAVE_QMI_MESSAGE_PDC_DELETE_CONFIG
#define HAVE_QMI_MESSAGE_PDC_LOAD_CONFIG
#define HAVE_QMI_MESSAGE_PDC_ACTIVATE_CONFIG
#define HAVE_QMI_MESSAGE_PDC_GET_CONFIG_INFO
#define HAVE_QMI_MESSAGE_PDC_GET_CONFIG_LIMITS
#define HAVE_QMI_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO
#define HAVE_QMI_MESSAGE_PDC_DEACTIVATE_CONFIG
#define HAVE_QMI_INDICATION_PDC_GET_SELECTED_CONFIG
#define HAVE_QMI_INDICATION_PDC_SET_SELECTED_CONFIG
#define HAVE_QMI_INDICATION_PDC_LIST_CONFIGS
#define HAVE_QMI_INDICATION_PDC_LOAD_CONFIG
#define HAVE_QMI_INDICATION_PDC_ACTIVATE_CONFIG
#define HAVE_QMI_INDICATION_PDC_GET_CONFIG_INFO
#define HAVE_QMI_INDICATION_PDC_DEACTIVATE_CONFIG
#define HAVE_QMI_INDICATION_PDC_REFRESH

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Get Selected Config */


/* --- Output -- */

/**
 * QmiIndicationPdcGetSelectedConfigOutput:
 *
 * The #QmiIndicationPdcGetSelectedConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationPdcGetSelectedConfigOutput QmiIndicationPdcGetSelectedConfigOutput;
GType qmi_indication_pdc_get_selected_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_PDC_GET_SELECTED_CONFIG_OUTPUT (qmi_indication_pdc_get_selected_config_output_get_type ())


/**
 * qmi_indication_pdc_get_selected_config_output_get_pending_id:
 * @self: a #QmiIndicationPdcGetSelectedConfigOutput.
 * @value_pending_id: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Pending Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_get_selected_config_output_get_pending_id (
    QmiIndicationPdcGetSelectedConfigOutput *self,
    GArray **value_pending_id,
    GError **error);


/**
 * qmi_indication_pdc_get_selected_config_output_get_active_id:
 * @self: a #QmiIndicationPdcGetSelectedConfigOutput.
 * @value_active_id: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Active Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_get_selected_config_output_get_active_id (
    QmiIndicationPdcGetSelectedConfigOutput *self,
    GArray **value_active_id,
    GError **error);


/**
 * qmi_indication_pdc_get_selected_config_output_get_indication_result:
 * @self: a #QmiIndicationPdcGetSelectedConfigOutput.
 * @value_indication_result: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_get_selected_config_output_get_indication_result (
    QmiIndicationPdcGetSelectedConfigOutput *self,
    guint16 *value_indication_result,
    GError **error);


/**
 * qmi_indication_pdc_get_selected_config_output_get_token:
 * @self: a #QmiIndicationPdcGetSelectedConfigOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_get_selected_config_output_get_token (
    QmiIndicationPdcGetSelectedConfigOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_indication_pdc_get_selected_config_output_ref:
 * @self: a #QmiIndicationPdcGetSelectedConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiIndicationPdcGetSelectedConfigOutput *qmi_indication_pdc_get_selected_config_output_ref (QmiIndicationPdcGetSelectedConfigOutput *self);

/**
 * qmi_indication_pdc_get_selected_config_output_unref:
 * @self: a #QmiIndicationPdcGetSelectedConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_indication_pdc_get_selected_config_output_unref (QmiIndicationPdcGetSelectedConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationPdcGetSelectedConfigOutput, qmi_indication_pdc_get_selected_config_output_unref)

/**
 * qmi_indication_pdc_get_selected_config_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationPdcGetSelectedConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationPdcGetSelectedConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_pdc_get_selected_config_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationPdcGetSelectedConfigOutput *qmi_indication_pdc_get_selected_config_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Set Selected Config */


/* --- Output -- */

/**
 * QmiIndicationPdcSetSelectedConfigOutput:
 *
 * The #QmiIndicationPdcSetSelectedConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationPdcSetSelectedConfigOutput QmiIndicationPdcSetSelectedConfigOutput;
GType qmi_indication_pdc_set_selected_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_PDC_SET_SELECTED_CONFIG_OUTPUT (qmi_indication_pdc_set_selected_config_output_get_type ())


/**
 * qmi_indication_pdc_set_selected_config_output_get_token:
 * @self: a #QmiIndicationPdcSetSelectedConfigOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_set_selected_config_output_get_token (
    QmiIndicationPdcSetSelectedConfigOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_indication_pdc_set_selected_config_output_get_indication_result:
 * @self: a #QmiIndicationPdcSetSelectedConfigOutput.
 * @value_indication_result: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_set_selected_config_output_get_indication_result (
    QmiIndicationPdcSetSelectedConfigOutput *self,
    guint16 *value_indication_result,
    GError **error);


/**
 * qmi_indication_pdc_set_selected_config_output_ref:
 * @self: a #QmiIndicationPdcSetSelectedConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiIndicationPdcSetSelectedConfigOutput *qmi_indication_pdc_set_selected_config_output_ref (QmiIndicationPdcSetSelectedConfigOutput *self);

/**
 * qmi_indication_pdc_set_selected_config_output_unref:
 * @self: a #QmiIndicationPdcSetSelectedConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_indication_pdc_set_selected_config_output_unref (QmiIndicationPdcSetSelectedConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationPdcSetSelectedConfigOutput, qmi_indication_pdc_set_selected_config_output_unref)

/**
 * qmi_indication_pdc_set_selected_config_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationPdcSetSelectedConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationPdcSetSelectedConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_pdc_set_selected_config_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationPdcSetSelectedConfigOutput *qmi_indication_pdc_set_selected_config_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC List Configs */


/* --- Output -- */


/**
 * QmiIndicationPdcListConfigsOutputConfigsElement:
 * @config_type: a #QmiPdcConfigurationType.
 * @id: a #GArray of #guint8 elements.
 *
 * A QmiIndicationPdcListConfigsOutputConfigsElement struct.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationPdcListConfigsOutputConfigsElement {
    QmiPdcConfigurationType config_type;
    GArray *id;
} QmiIndicationPdcListConfigsOutputConfigsElement;

GType qmi_indication_pdc_list_configs_output_configs_element_get_type (void) G_GNUC_CONST;

/**
 * QmiIndicationPdcListConfigsOutput:
 *
 * The #QmiIndicationPdcListConfigsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationPdcListConfigsOutput QmiIndicationPdcListConfigsOutput;
GType qmi_indication_pdc_list_configs_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_PDC_LIST_CONFIGS_OUTPUT (qmi_indication_pdc_list_configs_output_get_type ())


/**
 * qmi_indication_pdc_list_configs_output_get_configs: (skip)
 * @self: a #QmiIndicationPdcListConfigsOutput.
 * @value_configs: (out)(optional)(element-type QmiIndicationPdcListConfigsOutputConfigsElement)(transfer none): a placeholder for the output #GArray of #QmiIndicationPdcListConfigsOutputConfigsElement elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Configs' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_list_configs_output_get_configs (
    QmiIndicationPdcListConfigsOutput *self,
    GArray **value_configs,
    GError **error);


/**
 * qmi_indication_pdc_list_configs_output_get_configs_gir: (rename-to qmi_indication_pdc_list_configs_output_get_configs)
 * @self: a #QmiIndicationPdcListConfigsOutput.
 * @value_configs_ptr: (out)(optional)(element-type QmiIndicationPdcListConfigsOutputConfigsElement)(transfer none): a placeholder for the output array of #QmiIndicationPdcListConfigsOutputConfigsElement elements, or %NULL if not required. Do not free or modify it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Configs' field from @self.
 *
 * Version of qmi_indication_pdc_list_configs_output_get_configs() using arrays of pointers to
 * structs instead of arrays of structs, for easier binding in other languages.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_pdc_list_configs_output_get_configs_gir (
    QmiIndicationPdcListConfigsOutput *self,
    GPtrArray **value_configs_ptr,
    GError **error);


/**
 * qmi_indication_pdc_list_configs_output_get_indication_result:
 * @self: a #QmiIndicationPdcListConfigsOutput.
 * @value_indication_result: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_list_configs_output_get_indication_result (
    QmiIndicationPdcListConfigsOutput *self,
    guint16 *value_indication_result,
    GError **error);


/**
 * qmi_indication_pdc_list_configs_output_get_token:
 * @self: a #QmiIndicationPdcListConfigsOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_list_configs_output_get_token (
    QmiIndicationPdcListConfigsOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_indication_pdc_list_configs_output_ref:
 * @self: a #QmiIndicationPdcListConfigsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiIndicationPdcListConfigsOutput *qmi_indication_pdc_list_configs_output_ref (QmiIndicationPdcListConfigsOutput *self);

/**
 * qmi_indication_pdc_list_configs_output_unref:
 * @self: a #QmiIndicationPdcListConfigsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_indication_pdc_list_configs_output_unref (QmiIndicationPdcListConfigsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationPdcListConfigsOutput, qmi_indication_pdc_list_configs_output_unref)

/**
 * qmi_indication_pdc_list_configs_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationPdcListConfigsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationPdcListConfigsOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_pdc_list_configs_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationPdcListConfigsOutput *qmi_indication_pdc_list_configs_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Load Config */


/* --- Output -- */

/**
 * QmiIndicationPdcLoadConfigOutput:
 *
 * The #QmiIndicationPdcLoadConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationPdcLoadConfigOutput QmiIndicationPdcLoadConfigOutput;
GType qmi_indication_pdc_load_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_PDC_LOAD_CONFIG_OUTPUT (qmi_indication_pdc_load_config_output_get_type ())


/**
 * qmi_indication_pdc_load_config_output_get_frame_reset:
 * @self: a #QmiIndicationPdcLoadConfigOutput.
 * @value_frame_reset: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Frame Reset' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_load_config_output_get_frame_reset (
    QmiIndicationPdcLoadConfigOutput *self,
    gboolean *value_frame_reset,
    GError **error);


/**
 * qmi_indication_pdc_load_config_output_get_remaining_size:
 * @self: a #QmiIndicationPdcLoadConfigOutput.
 * @value_remaining_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Remaining Size' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_load_config_output_get_remaining_size (
    QmiIndicationPdcLoadConfigOutput *self,
    guint32 *value_remaining_size,
    GError **error);


/**
 * qmi_indication_pdc_load_config_output_get_received:
 * @self: a #QmiIndicationPdcLoadConfigOutput.
 * @value_received: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Received' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_load_config_output_get_received (
    QmiIndicationPdcLoadConfigOutput *self,
    guint32 *value_received,
    GError **error);


/**
 * qmi_indication_pdc_load_config_output_get_indication_result:
 * @self: a #QmiIndicationPdcLoadConfigOutput.
 * @value_indication_result: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_load_config_output_get_indication_result (
    QmiIndicationPdcLoadConfigOutput *self,
    guint16 *value_indication_result,
    GError **error);


/**
 * qmi_indication_pdc_load_config_output_get_token:
 * @self: a #QmiIndicationPdcLoadConfigOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_load_config_output_get_token (
    QmiIndicationPdcLoadConfigOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_indication_pdc_load_config_output_ref:
 * @self: a #QmiIndicationPdcLoadConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiIndicationPdcLoadConfigOutput *qmi_indication_pdc_load_config_output_ref (QmiIndicationPdcLoadConfigOutput *self);

/**
 * qmi_indication_pdc_load_config_output_unref:
 * @self: a #QmiIndicationPdcLoadConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_indication_pdc_load_config_output_unref (QmiIndicationPdcLoadConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationPdcLoadConfigOutput, qmi_indication_pdc_load_config_output_unref)

/**
 * qmi_indication_pdc_load_config_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationPdcLoadConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationPdcLoadConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_pdc_load_config_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationPdcLoadConfigOutput *qmi_indication_pdc_load_config_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Activate Config */


/* --- Output -- */

/**
 * QmiIndicationPdcActivateConfigOutput:
 *
 * The #QmiIndicationPdcActivateConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationPdcActivateConfigOutput QmiIndicationPdcActivateConfigOutput;
GType qmi_indication_pdc_activate_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_PDC_ACTIVATE_CONFIG_OUTPUT (qmi_indication_pdc_activate_config_output_get_type ())


/**
 * qmi_indication_pdc_activate_config_output_get_token:
 * @self: a #QmiIndicationPdcActivateConfigOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_activate_config_output_get_token (
    QmiIndicationPdcActivateConfigOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_indication_pdc_activate_config_output_get_indication_result:
 * @self: a #QmiIndicationPdcActivateConfigOutput.
 * @value_indication_result: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_activate_config_output_get_indication_result (
    QmiIndicationPdcActivateConfigOutput *self,
    guint16 *value_indication_result,
    GError **error);


/**
 * qmi_indication_pdc_activate_config_output_ref:
 * @self: a #QmiIndicationPdcActivateConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiIndicationPdcActivateConfigOutput *qmi_indication_pdc_activate_config_output_ref (QmiIndicationPdcActivateConfigOutput *self);

/**
 * qmi_indication_pdc_activate_config_output_unref:
 * @self: a #QmiIndicationPdcActivateConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_indication_pdc_activate_config_output_unref (QmiIndicationPdcActivateConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationPdcActivateConfigOutput, qmi_indication_pdc_activate_config_output_unref)

/**
 * qmi_indication_pdc_activate_config_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationPdcActivateConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationPdcActivateConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_pdc_activate_config_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationPdcActivateConfigOutput *qmi_indication_pdc_activate_config_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Get Config Info */


/* --- Output -- */

/**
 * QmiIndicationPdcGetConfigInfoOutput:
 *
 * The #QmiIndicationPdcGetConfigInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationPdcGetConfigInfoOutput QmiIndicationPdcGetConfigInfoOutput;
GType qmi_indication_pdc_get_config_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_PDC_GET_CONFIG_INFO_OUTPUT (qmi_indication_pdc_get_config_info_output_get_type ())


/**
 * qmi_indication_pdc_get_config_info_output_get_version:
 * @self: a #QmiIndicationPdcGetConfigInfoOutput.
 * @value_version: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_get_config_info_output_get_version (
    QmiIndicationPdcGetConfigInfoOutput *self,
    guint32 *value_version,
    GError **error);


/**
 * qmi_indication_pdc_get_config_info_output_get_description:
 * @self: a #QmiIndicationPdcGetConfigInfoOutput.
 * @value_description: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Description' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_get_config_info_output_get_description (
    QmiIndicationPdcGetConfigInfoOutput *self,
    const gchar **value_description,
    GError **error);


/**
 * qmi_indication_pdc_get_config_info_output_get_total_size:
 * @self: a #QmiIndicationPdcGetConfigInfoOutput.
 * @value_total_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Total Size' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_get_config_info_output_get_total_size (
    QmiIndicationPdcGetConfigInfoOutput *self,
    guint32 *value_total_size,
    GError **error);


/**
 * qmi_indication_pdc_get_config_info_output_get_indication_result:
 * @self: a #QmiIndicationPdcGetConfigInfoOutput.
 * @value_indication_result: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_get_config_info_output_get_indication_result (
    QmiIndicationPdcGetConfigInfoOutput *self,
    guint16 *value_indication_result,
    GError **error);


/**
 * qmi_indication_pdc_get_config_info_output_get_token:
 * @self: a #QmiIndicationPdcGetConfigInfoOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_get_config_info_output_get_token (
    QmiIndicationPdcGetConfigInfoOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_indication_pdc_get_config_info_output_ref:
 * @self: a #QmiIndicationPdcGetConfigInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiIndicationPdcGetConfigInfoOutput *qmi_indication_pdc_get_config_info_output_ref (QmiIndicationPdcGetConfigInfoOutput *self);

/**
 * qmi_indication_pdc_get_config_info_output_unref:
 * @self: a #QmiIndicationPdcGetConfigInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_indication_pdc_get_config_info_output_unref (QmiIndicationPdcGetConfigInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationPdcGetConfigInfoOutput, qmi_indication_pdc_get_config_info_output_unref)

/**
 * qmi_indication_pdc_get_config_info_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationPdcGetConfigInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationPdcGetConfigInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_pdc_get_config_info_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationPdcGetConfigInfoOutput *qmi_indication_pdc_get_config_info_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Deactivate Config */


/* --- Output -- */

/**
 * QmiIndicationPdcDeactivateConfigOutput:
 *
 * The #QmiIndicationPdcDeactivateConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiIndicationPdcDeactivateConfigOutput QmiIndicationPdcDeactivateConfigOutput;
GType qmi_indication_pdc_deactivate_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_PDC_DEACTIVATE_CONFIG_OUTPUT (qmi_indication_pdc_deactivate_config_output_get_type ())


/**
 * qmi_indication_pdc_deactivate_config_output_get_token:
 * @self: a #QmiIndicationPdcDeactivateConfigOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_deactivate_config_output_get_token (
    QmiIndicationPdcDeactivateConfigOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_indication_pdc_deactivate_config_output_get_indication_result:
 * @self: a #QmiIndicationPdcDeactivateConfigOutput.
 * @value_indication_result: (out)(optional): a placeholder for the output #guint16, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Indication Result' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_indication_pdc_deactivate_config_output_get_indication_result (
    QmiIndicationPdcDeactivateConfigOutput *self,
    guint16 *value_indication_result,
    GError **error);


/**
 * qmi_indication_pdc_deactivate_config_output_ref:
 * @self: a #QmiIndicationPdcDeactivateConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiIndicationPdcDeactivateConfigOutput *qmi_indication_pdc_deactivate_config_output_ref (QmiIndicationPdcDeactivateConfigOutput *self);

/**
 * qmi_indication_pdc_deactivate_config_output_unref:
 * @self: a #QmiIndicationPdcDeactivateConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_indication_pdc_deactivate_config_output_unref (QmiIndicationPdcDeactivateConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationPdcDeactivateConfigOutput, qmi_indication_pdc_deactivate_config_output_unref)

/**
 * qmi_indication_pdc_deactivate_config_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationPdcDeactivateConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationPdcDeactivateConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_pdc_deactivate_config_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationPdcDeactivateConfigOutput *qmi_indication_pdc_deactivate_config_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* INDICATION: Qmi Indication PDC Refresh */


/* --- Output -- */

/**
 * QmiIndicationPdcRefreshOutput:
 *
 * The #QmiIndicationPdcRefreshOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.32
 */
typedef struct _QmiIndicationPdcRefreshOutput QmiIndicationPdcRefreshOutput;
GType qmi_indication_pdc_refresh_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_INDICATION_PDC_REFRESH_OUTPUT (qmi_indication_pdc_refresh_output_get_type ())


/**
 * qmi_indication_pdc_refresh_output_get_slot_id:
 * @self: a #QmiIndicationPdcRefreshOutput.
 * @value_slot_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Slot ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_pdc_refresh_output_get_slot_id (
    QmiIndicationPdcRefreshOutput *self,
    guint32 *value_slot_id,
    GError **error);


/**
 * qmi_indication_pdc_refresh_output_get_subscription_id:
 * @self: a #QmiIndicationPdcRefreshOutput.
 * @value_subscription_id: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Subscription ID' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_pdc_refresh_output_get_subscription_id (
    QmiIndicationPdcRefreshOutput *self,
    guint32 *value_subscription_id,
    GError **error);


/**
 * qmi_indication_pdc_refresh_output_get_refresh_event:
 * @self: a #QmiIndicationPdcRefreshOutput.
 * @value_refresh_event: (out)(optional): a placeholder for the output #QmiPdcRefreshEventType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Refresh Event' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_indication_pdc_refresh_output_get_refresh_event (
    QmiIndicationPdcRefreshOutput *self,
    QmiPdcRefreshEventType *value_refresh_event,
    GError **error);


/**
 * qmi_indication_pdc_refresh_output_ref:
 * @self: a #QmiIndicationPdcRefreshOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.32
 */
QmiIndicationPdcRefreshOutput *qmi_indication_pdc_refresh_output_ref (QmiIndicationPdcRefreshOutput *self);

/**
 * qmi_indication_pdc_refresh_output_unref:
 * @self: a #QmiIndicationPdcRefreshOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.32
 */
void qmi_indication_pdc_refresh_output_unref (QmiIndicationPdcRefreshOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiIndicationPdcRefreshOutput, qmi_indication_pdc_refresh_output_unref)

/**
 * qmi_indication_pdc_refresh_indication_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiIndicationPdcRefreshOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiIndicationPdcRefreshOutput, or %NULL if @error is set. The returned value should be freed with qmi_indication_pdc_refresh_output_unref().
 *
 * Since: 1.34
 */
QmiIndicationPdcRefreshOutput *qmi_indication_pdc_refresh_indication_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Reset */


/* --- Input -- */

/* Note: no fields in the Input container */

/* --- Output -- */

/**
 * QmiMessagePdcResetOutput:
 *
 * The #QmiMessagePdcResetOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcResetOutput QmiMessagePdcResetOutput;
GType qmi_message_pdc_reset_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_RESET_OUTPUT (qmi_message_pdc_reset_output_get_type ())


/**
 * qmi_message_pdc_reset_output_get_result:
 * @self: a QmiMessagePdcResetOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_reset_output_get_result (
    QmiMessagePdcResetOutput *self,
    GError **error);


/**
 * qmi_message_pdc_reset_output_ref:
 * @self: a #QmiMessagePdcResetOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcResetOutput *qmi_message_pdc_reset_output_ref (QmiMessagePdcResetOutput *self);

/**
 * qmi_message_pdc_reset_output_unref:
 * @self: a #QmiMessagePdcResetOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_reset_output_unref (QmiMessagePdcResetOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcResetOutput, qmi_message_pdc_reset_output_unref)

/**
 * qmi_message_pdc_reset_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcResetOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_reset_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcResetOutput *qmi_message_pdc_reset_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Register */


/* --- Input -- */

/**
 * QmiMessagePdcRegisterInput:
 *
 * The #QmiMessagePdcRegisterInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcRegisterInput QmiMessagePdcRegisterInput;
GType qmi_message_pdc_register_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_REGISTER_INPUT (qmi_message_pdc_register_input_get_type ())


/**
 * qmi_message_pdc_register_input_get_enable_refresh:
 * @self: a #QmiMessagePdcRegisterInput.
 * @value_enable_refresh: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Enable Refresh' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pdc_register_input_get_enable_refresh (
    QmiMessagePdcRegisterInput *self,
    gboolean *value_enable_refresh,
    GError **error);


/**
 * qmi_message_pdc_register_input_set_enable_refresh:
 * @self: a #QmiMessagePdcRegisterInput.
 * @value_enable_refresh: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Enable Refresh' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pdc_register_input_set_enable_refresh (
    QmiMessagePdcRegisterInput *self,
    gboolean value_enable_refresh,
    GError **error);


/**
 * qmi_message_pdc_register_input_get_enable_reporting:
 * @self: a #QmiMessagePdcRegisterInput.
 * @value_enable_reporting: (out)(optional): a placeholder for the output #gboolean, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Enable Reporting' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_register_input_get_enable_reporting (
    QmiMessagePdcRegisterInput *self,
    gboolean *value_enable_reporting,
    GError **error);


/**
 * qmi_message_pdc_register_input_set_enable_reporting:
 * @self: a #QmiMessagePdcRegisterInput.
 * @value_enable_reporting: a #gboolean.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Enable Reporting' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_register_input_set_enable_reporting (
    QmiMessagePdcRegisterInput *self,
    gboolean value_enable_reporting,
    GError **error);


/**
 * qmi_message_pdc_register_input_ref:
 * @self: a #QmiMessagePdcRegisterInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcRegisterInput *qmi_message_pdc_register_input_ref (QmiMessagePdcRegisterInput *self);

/**
 * qmi_message_pdc_register_input_unref:
 * @self: a #QmiMessagePdcRegisterInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_register_input_unref (QmiMessagePdcRegisterInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcRegisterInput, qmi_message_pdc_register_input_unref)

/**
 * qmi_message_pdc_register_input_new:
 *
 * Allocates a new #QmiMessagePdcRegisterInput.
 *
 * Returns: the newly created #QmiMessagePdcRegisterInput. The returned value should be freed with qmi_message_pdc_register_input_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcRegisterInput *qmi_message_pdc_register_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdcRegisterOutput:
 *
 * The #QmiMessagePdcRegisterOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcRegisterOutput QmiMessagePdcRegisterOutput;
GType qmi_message_pdc_register_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_REGISTER_OUTPUT (qmi_message_pdc_register_output_get_type ())


/**
 * qmi_message_pdc_register_output_get_result:
 * @self: a QmiMessagePdcRegisterOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_register_output_get_result (
    QmiMessagePdcRegisterOutput *self,
    GError **error);


/**
 * qmi_message_pdc_register_output_ref:
 * @self: a #QmiMessagePdcRegisterOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcRegisterOutput *qmi_message_pdc_register_output_ref (QmiMessagePdcRegisterOutput *self);

/**
 * qmi_message_pdc_register_output_unref:
 * @self: a #QmiMessagePdcRegisterOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_register_output_unref (QmiMessagePdcRegisterOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcRegisterOutput, qmi_message_pdc_register_output_unref)

/**
 * qmi_message_pdc_register_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcRegisterOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_register_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcRegisterOutput *qmi_message_pdc_register_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Config Change */


/* --- Input -- */

/**
 * QmiMessagePdcConfigChangeInput:
 *
 * The #QmiMessagePdcConfigChangeInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcConfigChangeInput QmiMessagePdcConfigChangeInput;
GType qmi_message_pdc_config_change_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_CONFIG_CHANGE_INPUT (qmi_message_pdc_config_change_input_get_type ())


/**
 * qmi_message_pdc_config_change_input_get_type_with_id_v2:
 * @self: a #QmiMessagePdcConfigChangeInput.
 * @value_type_with_id_v2_config_type: (out)(optional): a placeholder for the output #QmiPdcConfigurationType, or %NULL if not required.
 * @value_type_with_id_v2_id: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Type With Id v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pdc_config_change_input_get_type_with_id_v2 (
    QmiMessagePdcConfigChangeInput *self,
    QmiPdcConfigurationType *value_type_with_id_v2_config_type,
    GArray **value_type_with_id_v2_id,
    GError **error);


/**
 * qmi_message_pdc_config_change_input_set_type_with_id_v2:
 * @self: a #QmiMessagePdcConfigChangeInput.
 * @value_type_with_id_v2_config_type: a #QmiPdcConfigurationType.
 * @value_type_with_id_v2_id: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_type_with_id_v2_id will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Type With Id v2' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pdc_config_change_input_set_type_with_id_v2 (
    QmiMessagePdcConfigChangeInput *self,
    QmiPdcConfigurationType value_type_with_id_v2_config_type,
    GArray *value_type_with_id_v2_id,
    GError **error);


/**
 * qmi_message_pdc_config_change_input_ref:
 * @self: a #QmiMessagePdcConfigChangeInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcConfigChangeInput *qmi_message_pdc_config_change_input_ref (QmiMessagePdcConfigChangeInput *self);

/**
 * qmi_message_pdc_config_change_input_unref:
 * @self: a #QmiMessagePdcConfigChangeInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_config_change_input_unref (QmiMessagePdcConfigChangeInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcConfigChangeInput, qmi_message_pdc_config_change_input_unref)

/**
 * qmi_message_pdc_config_change_input_new:
 *
 * Allocates a new #QmiMessagePdcConfigChangeInput.
 *
 * Returns: the newly created #QmiMessagePdcConfigChangeInput. The returned value should be freed with qmi_message_pdc_config_change_input_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcConfigChangeInput *qmi_message_pdc_config_change_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdcConfigChangeOutput:
 *
 * The #QmiMessagePdcConfigChangeOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcConfigChangeOutput QmiMessagePdcConfigChangeOutput;
GType qmi_message_pdc_config_change_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_CONFIG_CHANGE_OUTPUT (qmi_message_pdc_config_change_output_get_type ())


/**
 * qmi_message_pdc_config_change_output_get_type_with_id_v2:
 * @self: a #QmiMessagePdcConfigChangeOutput.
 * @value_type_with_id_v2_config_type: (out)(optional): a placeholder for the output #QmiPdcConfigurationType, or %NULL if not required.
 * @value_type_with_id_v2_id: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Type With Id v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pdc_config_change_output_get_type_with_id_v2 (
    QmiMessagePdcConfigChangeOutput *self,
    QmiPdcConfigurationType *value_type_with_id_v2_config_type,
    GArray **value_type_with_id_v2_id,
    GError **error);


/**
 * qmi_message_pdc_config_change_output_get_result:
 * @self: a QmiMessagePdcConfigChangeOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_config_change_output_get_result (
    QmiMessagePdcConfigChangeOutput *self,
    GError **error);


/**
 * qmi_message_pdc_config_change_output_ref:
 * @self: a #QmiMessagePdcConfigChangeOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcConfigChangeOutput *qmi_message_pdc_config_change_output_ref (QmiMessagePdcConfigChangeOutput *self);

/**
 * qmi_message_pdc_config_change_output_unref:
 * @self: a #QmiMessagePdcConfigChangeOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_config_change_output_unref (QmiMessagePdcConfigChangeOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcConfigChangeOutput, qmi_message_pdc_config_change_output_unref)

/**
 * qmi_message_pdc_config_change_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcConfigChangeOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcConfigChangeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_config_change_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcConfigChangeOutput *qmi_message_pdc_config_change_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Get Selected Config */


/* --- Input -- */

/**
 * QmiMessagePdcGetSelectedConfigInput:
 *
 * The #QmiMessagePdcGetSelectedConfigInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcGetSelectedConfigInput QmiMessagePdcGetSelectedConfigInput;
GType qmi_message_pdc_get_selected_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_GET_SELECTED_CONFIG_INPUT (qmi_message_pdc_get_selected_config_input_get_type ())


/**
 * qmi_message_pdc_get_selected_config_input_get_token:
 * @self: a #QmiMessagePdcGetSelectedConfigInput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_selected_config_input_get_token (
    QmiMessagePdcGetSelectedConfigInput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_get_selected_config_input_set_token:
 * @self: a #QmiMessagePdcGetSelectedConfigInput.
 * @value_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_selected_config_input_set_token (
    QmiMessagePdcGetSelectedConfigInput *self,
    guint32 value_token,
    GError **error);


/**
 * qmi_message_pdc_get_selected_config_input_get_config_type:
 * @self: a #QmiMessagePdcGetSelectedConfigInput.
 * @value_config_type: (out)(optional): a placeholder for the output #QmiPdcConfigurationType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Config Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_selected_config_input_get_config_type (
    QmiMessagePdcGetSelectedConfigInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error);


/**
 * qmi_message_pdc_get_selected_config_input_set_config_type:
 * @self: a #QmiMessagePdcGetSelectedConfigInput.
 * @value_config_type: a #QmiPdcConfigurationType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Config Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_selected_config_input_set_config_type (
    QmiMessagePdcGetSelectedConfigInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error);


/**
 * qmi_message_pdc_get_selected_config_input_ref:
 * @self: a #QmiMessagePdcGetSelectedConfigInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcGetSelectedConfigInput *qmi_message_pdc_get_selected_config_input_ref (QmiMessagePdcGetSelectedConfigInput *self);

/**
 * qmi_message_pdc_get_selected_config_input_unref:
 * @self: a #QmiMessagePdcGetSelectedConfigInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_get_selected_config_input_unref (QmiMessagePdcGetSelectedConfigInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcGetSelectedConfigInput, qmi_message_pdc_get_selected_config_input_unref)

/**
 * qmi_message_pdc_get_selected_config_input_new:
 *
 * Allocates a new #QmiMessagePdcGetSelectedConfigInput.
 *
 * Returns: the newly created #QmiMessagePdcGetSelectedConfigInput. The returned value should be freed with qmi_message_pdc_get_selected_config_input_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcGetSelectedConfigInput *qmi_message_pdc_get_selected_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdcGetSelectedConfigOutput:
 *
 * The #QmiMessagePdcGetSelectedConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcGetSelectedConfigOutput QmiMessagePdcGetSelectedConfigOutput;
GType qmi_message_pdc_get_selected_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_GET_SELECTED_CONFIG_OUTPUT (qmi_message_pdc_get_selected_config_output_get_type ())


/**
 * qmi_message_pdc_get_selected_config_output_get_token:
 * @self: a #QmiMessagePdcGetSelectedConfigOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_selected_config_output_get_token (
    QmiMessagePdcGetSelectedConfigOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_get_selected_config_output_get_result:
 * @self: a QmiMessagePdcGetSelectedConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_selected_config_output_get_result (
    QmiMessagePdcGetSelectedConfigOutput *self,
    GError **error);


/**
 * qmi_message_pdc_get_selected_config_output_ref:
 * @self: a #QmiMessagePdcGetSelectedConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcGetSelectedConfigOutput *qmi_message_pdc_get_selected_config_output_ref (QmiMessagePdcGetSelectedConfigOutput *self);

/**
 * qmi_message_pdc_get_selected_config_output_unref:
 * @self: a #QmiMessagePdcGetSelectedConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_get_selected_config_output_unref (QmiMessagePdcGetSelectedConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcGetSelectedConfigOutput, qmi_message_pdc_get_selected_config_output_unref)

/**
 * qmi_message_pdc_get_selected_config_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcGetSelectedConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcGetSelectedConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_get_selected_config_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcGetSelectedConfigOutput *qmi_message_pdc_get_selected_config_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Set Selected Config */


/* --- Input -- */

/**
 * QmiMessagePdcSetSelectedConfigInput:
 *
 * The #QmiMessagePdcSetSelectedConfigInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcSetSelectedConfigInput QmiMessagePdcSetSelectedConfigInput;
GType qmi_message_pdc_set_selected_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_SET_SELECTED_CONFIG_INPUT (qmi_message_pdc_set_selected_config_input_get_type ())


/**
 * qmi_message_pdc_set_selected_config_input_get_token:
 * @self: a #QmiMessagePdcSetSelectedConfigInput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_set_selected_config_input_get_token (
    QmiMessagePdcSetSelectedConfigInput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_set_selected_config_input_set_token:
 * @self: a #QmiMessagePdcSetSelectedConfigInput.
 * @value_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_set_selected_config_input_set_token (
    QmiMessagePdcSetSelectedConfigInput *self,
    guint32 value_token,
    GError **error);


/**
 * qmi_message_pdc_set_selected_config_input_get_type_with_id_v2:
 * @self: a #QmiMessagePdcSetSelectedConfigInput.
 * @value_type_with_id_v2_config_type: (out)(optional): a placeholder for the output #QmiPdcConfigurationType, or %NULL if not required.
 * @value_type_with_id_v2_id: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Type With Id v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pdc_set_selected_config_input_get_type_with_id_v2 (
    QmiMessagePdcSetSelectedConfigInput *self,
    QmiPdcConfigurationType *value_type_with_id_v2_config_type,
    GArray **value_type_with_id_v2_id,
    GError **error);


/**
 * qmi_message_pdc_set_selected_config_input_set_type_with_id_v2:
 * @self: a #QmiMessagePdcSetSelectedConfigInput.
 * @value_type_with_id_v2_config_type: a #QmiPdcConfigurationType.
 * @value_type_with_id_v2_id: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_type_with_id_v2_id will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Type With Id v2' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pdc_set_selected_config_input_set_type_with_id_v2 (
    QmiMessagePdcSetSelectedConfigInput *self,
    QmiPdcConfigurationType value_type_with_id_v2_config_type,
    GArray *value_type_with_id_v2_id,
    GError **error);


/**
 * qmi_message_pdc_set_selected_config_input_ref:
 * @self: a #QmiMessagePdcSetSelectedConfigInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcSetSelectedConfigInput *qmi_message_pdc_set_selected_config_input_ref (QmiMessagePdcSetSelectedConfigInput *self);

/**
 * qmi_message_pdc_set_selected_config_input_unref:
 * @self: a #QmiMessagePdcSetSelectedConfigInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_set_selected_config_input_unref (QmiMessagePdcSetSelectedConfigInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcSetSelectedConfigInput, qmi_message_pdc_set_selected_config_input_unref)

/**
 * qmi_message_pdc_set_selected_config_input_new:
 *
 * Allocates a new #QmiMessagePdcSetSelectedConfigInput.
 *
 * Returns: the newly created #QmiMessagePdcSetSelectedConfigInput. The returned value should be freed with qmi_message_pdc_set_selected_config_input_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcSetSelectedConfigInput *qmi_message_pdc_set_selected_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdcSetSelectedConfigOutput:
 *
 * The #QmiMessagePdcSetSelectedConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcSetSelectedConfigOutput QmiMessagePdcSetSelectedConfigOutput;
GType qmi_message_pdc_set_selected_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_SET_SELECTED_CONFIG_OUTPUT (qmi_message_pdc_set_selected_config_output_get_type ())


/**
 * qmi_message_pdc_set_selected_config_output_get_token:
 * @self: a #QmiMessagePdcSetSelectedConfigOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_set_selected_config_output_get_token (
    QmiMessagePdcSetSelectedConfigOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_set_selected_config_output_get_result:
 * @self: a QmiMessagePdcSetSelectedConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_set_selected_config_output_get_result (
    QmiMessagePdcSetSelectedConfigOutput *self,
    GError **error);


/**
 * qmi_message_pdc_set_selected_config_output_ref:
 * @self: a #QmiMessagePdcSetSelectedConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcSetSelectedConfigOutput *qmi_message_pdc_set_selected_config_output_ref (QmiMessagePdcSetSelectedConfigOutput *self);

/**
 * qmi_message_pdc_set_selected_config_output_unref:
 * @self: a #QmiMessagePdcSetSelectedConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_set_selected_config_output_unref (QmiMessagePdcSetSelectedConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcSetSelectedConfigOutput, qmi_message_pdc_set_selected_config_output_unref)

/**
 * qmi_message_pdc_set_selected_config_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcSetSelectedConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcSetSelectedConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_set_selected_config_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcSetSelectedConfigOutput *qmi_message_pdc_set_selected_config_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC List Configs */


/* --- Input -- */

/**
 * QmiMessagePdcListConfigsInput:
 *
 * The #QmiMessagePdcListConfigsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcListConfigsInput QmiMessagePdcListConfigsInput;
GType qmi_message_pdc_list_configs_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_LIST_CONFIGS_INPUT (qmi_message_pdc_list_configs_input_get_type ())


/**
 * qmi_message_pdc_list_configs_input_get_config_type:
 * @self: a #QmiMessagePdcListConfigsInput.
 * @value_config_type: (out)(optional): a placeholder for the output #QmiPdcConfigurationType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Config Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_list_configs_input_get_config_type (
    QmiMessagePdcListConfigsInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error);


/**
 * qmi_message_pdc_list_configs_input_set_config_type:
 * @self: a #QmiMessagePdcListConfigsInput.
 * @value_config_type: a #QmiPdcConfigurationType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Config Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_list_configs_input_set_config_type (
    QmiMessagePdcListConfigsInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error);


/**
 * qmi_message_pdc_list_configs_input_get_token:
 * @self: a #QmiMessagePdcListConfigsInput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_list_configs_input_get_token (
    QmiMessagePdcListConfigsInput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_list_configs_input_set_token:
 * @self: a #QmiMessagePdcListConfigsInput.
 * @value_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_list_configs_input_set_token (
    QmiMessagePdcListConfigsInput *self,
    guint32 value_token,
    GError **error);


/**
 * qmi_message_pdc_list_configs_input_ref:
 * @self: a #QmiMessagePdcListConfigsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcListConfigsInput *qmi_message_pdc_list_configs_input_ref (QmiMessagePdcListConfigsInput *self);

/**
 * qmi_message_pdc_list_configs_input_unref:
 * @self: a #QmiMessagePdcListConfigsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_list_configs_input_unref (QmiMessagePdcListConfigsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcListConfigsInput, qmi_message_pdc_list_configs_input_unref)

/**
 * qmi_message_pdc_list_configs_input_new:
 *
 * Allocates a new #QmiMessagePdcListConfigsInput.
 *
 * Returns: the newly created #QmiMessagePdcListConfigsInput. The returned value should be freed with qmi_message_pdc_list_configs_input_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcListConfigsInput *qmi_message_pdc_list_configs_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdcListConfigsOutput:
 *
 * The #QmiMessagePdcListConfigsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcListConfigsOutput QmiMessagePdcListConfigsOutput;
GType qmi_message_pdc_list_configs_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_LIST_CONFIGS_OUTPUT (qmi_message_pdc_list_configs_output_get_type ())


/**
 * qmi_message_pdc_list_configs_output_get_result:
 * @self: a QmiMessagePdcListConfigsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_list_configs_output_get_result (
    QmiMessagePdcListConfigsOutput *self,
    GError **error);


/**
 * qmi_message_pdc_list_configs_output_ref:
 * @self: a #QmiMessagePdcListConfigsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcListConfigsOutput *qmi_message_pdc_list_configs_output_ref (QmiMessagePdcListConfigsOutput *self);

/**
 * qmi_message_pdc_list_configs_output_unref:
 * @self: a #QmiMessagePdcListConfigsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_list_configs_output_unref (QmiMessagePdcListConfigsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcListConfigsOutput, qmi_message_pdc_list_configs_output_unref)

/**
 * qmi_message_pdc_list_configs_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcListConfigsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcListConfigsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_list_configs_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcListConfigsOutput *qmi_message_pdc_list_configs_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Delete Config */


/* --- Input -- */

/**
 * QmiMessagePdcDeleteConfigInput:
 *
 * The #QmiMessagePdcDeleteConfigInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcDeleteConfigInput QmiMessagePdcDeleteConfigInput;
GType qmi_message_pdc_delete_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_DELETE_CONFIG_INPUT (qmi_message_pdc_delete_config_input_get_type ())


/**
 * qmi_message_pdc_delete_config_input_get_id:
 * @self: a #QmiMessagePdcDeleteConfigInput.
 * @value_id: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Id' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_delete_config_input_get_id (
    QmiMessagePdcDeleteConfigInput *self,
    GArray **value_id,
    GError **error);


/**
 * qmi_message_pdc_delete_config_input_set_id:
 * @self: a #QmiMessagePdcDeleteConfigInput.
 * @value_id: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_id will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Id' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_delete_config_input_set_id (
    QmiMessagePdcDeleteConfigInput *self,
    GArray *value_id,
    GError **error);


/**
 * qmi_message_pdc_delete_config_input_get_token:
 * @self: a #QmiMessagePdcDeleteConfigInput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_delete_config_input_get_token (
    QmiMessagePdcDeleteConfigInput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_delete_config_input_set_token:
 * @self: a #QmiMessagePdcDeleteConfigInput.
 * @value_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_delete_config_input_set_token (
    QmiMessagePdcDeleteConfigInput *self,
    guint32 value_token,
    GError **error);


/**
 * qmi_message_pdc_delete_config_input_get_config_type:
 * @self: a #QmiMessagePdcDeleteConfigInput.
 * @value_config_type: (out)(optional): a placeholder for the output #QmiPdcConfigurationType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Config Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_delete_config_input_get_config_type (
    QmiMessagePdcDeleteConfigInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error);


/**
 * qmi_message_pdc_delete_config_input_set_config_type:
 * @self: a #QmiMessagePdcDeleteConfigInput.
 * @value_config_type: a #QmiPdcConfigurationType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Config Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_delete_config_input_set_config_type (
    QmiMessagePdcDeleteConfigInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error);


/**
 * qmi_message_pdc_delete_config_input_ref:
 * @self: a #QmiMessagePdcDeleteConfigInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcDeleteConfigInput *qmi_message_pdc_delete_config_input_ref (QmiMessagePdcDeleteConfigInput *self);

/**
 * qmi_message_pdc_delete_config_input_unref:
 * @self: a #QmiMessagePdcDeleteConfigInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_delete_config_input_unref (QmiMessagePdcDeleteConfigInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcDeleteConfigInput, qmi_message_pdc_delete_config_input_unref)

/**
 * qmi_message_pdc_delete_config_input_new:
 *
 * Allocates a new #QmiMessagePdcDeleteConfigInput.
 *
 * Returns: the newly created #QmiMessagePdcDeleteConfigInput. The returned value should be freed with qmi_message_pdc_delete_config_input_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcDeleteConfigInput *qmi_message_pdc_delete_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdcDeleteConfigOutput:
 *
 * The #QmiMessagePdcDeleteConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcDeleteConfigOutput QmiMessagePdcDeleteConfigOutput;
GType qmi_message_pdc_delete_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_DELETE_CONFIG_OUTPUT (qmi_message_pdc_delete_config_output_get_type ())


/**
 * qmi_message_pdc_delete_config_output_get_token:
 * @self: a #QmiMessagePdcDeleteConfigOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_delete_config_output_get_token (
    QmiMessagePdcDeleteConfigOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_delete_config_output_get_result:
 * @self: a QmiMessagePdcDeleteConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_delete_config_output_get_result (
    QmiMessagePdcDeleteConfigOutput *self,
    GError **error);


/**
 * qmi_message_pdc_delete_config_output_ref:
 * @self: a #QmiMessagePdcDeleteConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcDeleteConfigOutput *qmi_message_pdc_delete_config_output_ref (QmiMessagePdcDeleteConfigOutput *self);

/**
 * qmi_message_pdc_delete_config_output_unref:
 * @self: a #QmiMessagePdcDeleteConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_delete_config_output_unref (QmiMessagePdcDeleteConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcDeleteConfigOutput, qmi_message_pdc_delete_config_output_unref)

/**
 * qmi_message_pdc_delete_config_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcDeleteConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcDeleteConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_delete_config_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcDeleteConfigOutput *qmi_message_pdc_delete_config_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Load Config */


/* --- Input -- */

/**
 * QmiMessagePdcLoadConfigInput:
 *
 * The #QmiMessagePdcLoadConfigInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcLoadConfigInput QmiMessagePdcLoadConfigInput;
GType qmi_message_pdc_load_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_LOAD_CONFIG_INPUT (qmi_message_pdc_load_config_input_get_type ())


/**
 * qmi_message_pdc_load_config_input_get_token:
 * @self: a #QmiMessagePdcLoadConfigInput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_load_config_input_get_token (
    QmiMessagePdcLoadConfigInput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_load_config_input_set_token:
 * @self: a #QmiMessagePdcLoadConfigInput.
 * @value_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_load_config_input_set_token (
    QmiMessagePdcLoadConfigInput *self,
    guint32 value_token,
    GError **error);


/**
 * qmi_message_pdc_load_config_input_get_config_chunk:
 * @self: a #QmiMessagePdcLoadConfigInput.
 * @value_config_chunk_type: (out)(optional): a placeholder for the output #QmiPdcConfigurationType, or %NULL if not required.
 * @value_config_chunk_id: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @value_config_chunk_total_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @value_config_chunk_chunk: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Config Chunk' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_load_config_input_get_config_chunk (
    QmiMessagePdcLoadConfigInput *self,
    QmiPdcConfigurationType *value_config_chunk_type,
    GArray **value_config_chunk_id,
    guint32 *value_config_chunk_total_size,
    GArray **value_config_chunk_chunk,
    GError **error);


/**
 * qmi_message_pdc_load_config_input_set_config_chunk:
 * @self: a #QmiMessagePdcLoadConfigInput.
 * @value_config_chunk_type: a #QmiPdcConfigurationType.
 * @value_config_chunk_id: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_config_chunk_id will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @value_config_chunk_total_size: a #guint32.
 * @value_config_chunk_chunk: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_config_chunk_chunk will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Config Chunk' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_load_config_input_set_config_chunk (
    QmiMessagePdcLoadConfigInput *self,
    QmiPdcConfigurationType value_config_chunk_type,
    GArray *value_config_chunk_id,
    guint32 value_config_chunk_total_size,
    GArray *value_config_chunk_chunk,
    GError **error);


/**
 * qmi_message_pdc_load_config_input_ref:
 * @self: a #QmiMessagePdcLoadConfigInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcLoadConfigInput *qmi_message_pdc_load_config_input_ref (QmiMessagePdcLoadConfigInput *self);

/**
 * qmi_message_pdc_load_config_input_unref:
 * @self: a #QmiMessagePdcLoadConfigInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_load_config_input_unref (QmiMessagePdcLoadConfigInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcLoadConfigInput, qmi_message_pdc_load_config_input_unref)

/**
 * qmi_message_pdc_load_config_input_new:
 *
 * Allocates a new #QmiMessagePdcLoadConfigInput.
 *
 * Returns: the newly created #QmiMessagePdcLoadConfigInput. The returned value should be freed with qmi_message_pdc_load_config_input_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcLoadConfigInput *qmi_message_pdc_load_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdcLoadConfigOutput:
 *
 * The #QmiMessagePdcLoadConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcLoadConfigOutput QmiMessagePdcLoadConfigOutput;
GType qmi_message_pdc_load_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_LOAD_CONFIG_OUTPUT (qmi_message_pdc_load_config_output_get_type ())


/**
 * qmi_message_pdc_load_config_output_get_token:
 * @self: a #QmiMessagePdcLoadConfigOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_load_config_output_get_token (
    QmiMessagePdcLoadConfigOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_load_config_output_get_result:
 * @self: a QmiMessagePdcLoadConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_load_config_output_get_result (
    QmiMessagePdcLoadConfigOutput *self,
    GError **error);


/**
 * qmi_message_pdc_load_config_output_ref:
 * @self: a #QmiMessagePdcLoadConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcLoadConfigOutput *qmi_message_pdc_load_config_output_ref (QmiMessagePdcLoadConfigOutput *self);

/**
 * qmi_message_pdc_load_config_output_unref:
 * @self: a #QmiMessagePdcLoadConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_load_config_output_unref (QmiMessagePdcLoadConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcLoadConfigOutput, qmi_message_pdc_load_config_output_unref)

/**
 * qmi_message_pdc_load_config_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcLoadConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcLoadConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_load_config_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcLoadConfigOutput *qmi_message_pdc_load_config_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Activate Config */


/* --- Input -- */

/**
 * QmiMessagePdcActivateConfigInput:
 *
 * The #QmiMessagePdcActivateConfigInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcActivateConfigInput QmiMessagePdcActivateConfigInput;
GType qmi_message_pdc_activate_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_ACTIVATE_CONFIG_INPUT (qmi_message_pdc_activate_config_input_get_type ())


/**
 * qmi_message_pdc_activate_config_input_get_token:
 * @self: a #QmiMessagePdcActivateConfigInput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_activate_config_input_get_token (
    QmiMessagePdcActivateConfigInput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_activate_config_input_set_token:
 * @self: a #QmiMessagePdcActivateConfigInput.
 * @value_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_activate_config_input_set_token (
    QmiMessagePdcActivateConfigInput *self,
    guint32 value_token,
    GError **error);


/**
 * qmi_message_pdc_activate_config_input_get_config_type:
 * @self: a #QmiMessagePdcActivateConfigInput.
 * @value_config_type: (out)(optional): a placeholder for the output #QmiPdcConfigurationType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Config Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_activate_config_input_get_config_type (
    QmiMessagePdcActivateConfigInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error);


/**
 * qmi_message_pdc_activate_config_input_set_config_type:
 * @self: a #QmiMessagePdcActivateConfigInput.
 * @value_config_type: a #QmiPdcConfigurationType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Config Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_activate_config_input_set_config_type (
    QmiMessagePdcActivateConfigInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error);


/**
 * qmi_message_pdc_activate_config_input_ref:
 * @self: a #QmiMessagePdcActivateConfigInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcActivateConfigInput *qmi_message_pdc_activate_config_input_ref (QmiMessagePdcActivateConfigInput *self);

/**
 * qmi_message_pdc_activate_config_input_unref:
 * @self: a #QmiMessagePdcActivateConfigInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_activate_config_input_unref (QmiMessagePdcActivateConfigInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcActivateConfigInput, qmi_message_pdc_activate_config_input_unref)

/**
 * qmi_message_pdc_activate_config_input_new:
 *
 * Allocates a new #QmiMessagePdcActivateConfigInput.
 *
 * Returns: the newly created #QmiMessagePdcActivateConfigInput. The returned value should be freed with qmi_message_pdc_activate_config_input_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcActivateConfigInput *qmi_message_pdc_activate_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdcActivateConfigOutput:
 *
 * The #QmiMessagePdcActivateConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcActivateConfigOutput QmiMessagePdcActivateConfigOutput;
GType qmi_message_pdc_activate_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_ACTIVATE_CONFIG_OUTPUT (qmi_message_pdc_activate_config_output_get_type ())


/**
 * qmi_message_pdc_activate_config_output_get_token:
 * @self: a #QmiMessagePdcActivateConfigOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_activate_config_output_get_token (
    QmiMessagePdcActivateConfigOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_activate_config_output_get_result:
 * @self: a QmiMessagePdcActivateConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_activate_config_output_get_result (
    QmiMessagePdcActivateConfigOutput *self,
    GError **error);


/**
 * qmi_message_pdc_activate_config_output_ref:
 * @self: a #QmiMessagePdcActivateConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcActivateConfigOutput *qmi_message_pdc_activate_config_output_ref (QmiMessagePdcActivateConfigOutput *self);

/**
 * qmi_message_pdc_activate_config_output_unref:
 * @self: a #QmiMessagePdcActivateConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_activate_config_output_unref (QmiMessagePdcActivateConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcActivateConfigOutput, qmi_message_pdc_activate_config_output_unref)

/**
 * qmi_message_pdc_activate_config_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcActivateConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcActivateConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_activate_config_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcActivateConfigOutput *qmi_message_pdc_activate_config_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Get Config Info */


/* --- Input -- */

/**
 * QmiMessagePdcGetConfigInfoInput:
 *
 * The #QmiMessagePdcGetConfigInfoInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcGetConfigInfoInput QmiMessagePdcGetConfigInfoInput;
GType qmi_message_pdc_get_config_info_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_GET_CONFIG_INFO_INPUT (qmi_message_pdc_get_config_info_input_get_type ())


/**
 * qmi_message_pdc_get_config_info_input_get_token:
 * @self: a #QmiMessagePdcGetConfigInfoInput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_config_info_input_get_token (
    QmiMessagePdcGetConfigInfoInput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_get_config_info_input_set_token:
 * @self: a #QmiMessagePdcGetConfigInfoInput.
 * @value_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_config_info_input_set_token (
    QmiMessagePdcGetConfigInfoInput *self,
    guint32 value_token,
    GError **error);


/**
 * qmi_message_pdc_get_config_info_input_get_type_with_id_v2:
 * @self: a #QmiMessagePdcGetConfigInfoInput.
 * @value_type_with_id_v2_config_type: (out)(optional): a placeholder for the output #QmiPdcConfigurationType, or %NULL if not required.
 * @value_type_with_id_v2_id: (out)(optional)(element-type guint8)(transfer none): a placeholder for the output #GArray of #guint8 elements, or %NULL if not required. Do not free it, it is owned by @self.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Type With Id v2' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pdc_get_config_info_input_get_type_with_id_v2 (
    QmiMessagePdcGetConfigInfoInput *self,
    QmiPdcConfigurationType *value_type_with_id_v2_config_type,
    GArray **value_type_with_id_v2_id,
    GError **error);


/**
 * qmi_message_pdc_get_config_info_input_set_type_with_id_v2:
 * @self: a #QmiMessagePdcGetConfigInfoInput.
 * @value_type_with_id_v2_config_type: a #QmiPdcConfigurationType.
 * @value_type_with_id_v2_id: (in)(element-type guint8)(transfer none): a #GArray of #guint8 elements. A new reference to @value_type_with_id_v2_id will be taken, so the caller must make sure the array was created with the correct #GDestroyNotify as clear function for each element in the array.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Type With Id v2' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.32
 */
gboolean qmi_message_pdc_get_config_info_input_set_type_with_id_v2 (
    QmiMessagePdcGetConfigInfoInput *self,
    QmiPdcConfigurationType value_type_with_id_v2_config_type,
    GArray *value_type_with_id_v2_id,
    GError **error);


/**
 * qmi_message_pdc_get_config_info_input_ref:
 * @self: a #QmiMessagePdcGetConfigInfoInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcGetConfigInfoInput *qmi_message_pdc_get_config_info_input_ref (QmiMessagePdcGetConfigInfoInput *self);

/**
 * qmi_message_pdc_get_config_info_input_unref:
 * @self: a #QmiMessagePdcGetConfigInfoInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_get_config_info_input_unref (QmiMessagePdcGetConfigInfoInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcGetConfigInfoInput, qmi_message_pdc_get_config_info_input_unref)

/**
 * qmi_message_pdc_get_config_info_input_new:
 *
 * Allocates a new #QmiMessagePdcGetConfigInfoInput.
 *
 * Returns: the newly created #QmiMessagePdcGetConfigInfoInput. The returned value should be freed with qmi_message_pdc_get_config_info_input_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcGetConfigInfoInput *qmi_message_pdc_get_config_info_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdcGetConfigInfoOutput:
 *
 * The #QmiMessagePdcGetConfigInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcGetConfigInfoOutput QmiMessagePdcGetConfigInfoOutput;
GType qmi_message_pdc_get_config_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_GET_CONFIG_INFO_OUTPUT (qmi_message_pdc_get_config_info_output_get_type ())


/**
 * qmi_message_pdc_get_config_info_output_get_result:
 * @self: a QmiMessagePdcGetConfigInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_config_info_output_get_result (
    QmiMessagePdcGetConfigInfoOutput *self,
    GError **error);


/**
 * qmi_message_pdc_get_config_info_output_ref:
 * @self: a #QmiMessagePdcGetConfigInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcGetConfigInfoOutput *qmi_message_pdc_get_config_info_output_ref (QmiMessagePdcGetConfigInfoOutput *self);

/**
 * qmi_message_pdc_get_config_info_output_unref:
 * @self: a #QmiMessagePdcGetConfigInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_get_config_info_output_unref (QmiMessagePdcGetConfigInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcGetConfigInfoOutput, qmi_message_pdc_get_config_info_output_unref)

/**
 * qmi_message_pdc_get_config_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcGetConfigInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcGetConfigInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_get_config_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcGetConfigInfoOutput *qmi_message_pdc_get_config_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Get Config Limits */


/* --- Input -- */

/**
 * QmiMessagePdcGetConfigLimitsInput:
 *
 * The #QmiMessagePdcGetConfigLimitsInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcGetConfigLimitsInput QmiMessagePdcGetConfigLimitsInput;
GType qmi_message_pdc_get_config_limits_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_GET_CONFIG_LIMITS_INPUT (qmi_message_pdc_get_config_limits_input_get_type ())


/**
 * qmi_message_pdc_get_config_limits_input_get_token:
 * @self: a #QmiMessagePdcGetConfigLimitsInput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_config_limits_input_get_token (
    QmiMessagePdcGetConfigLimitsInput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_get_config_limits_input_set_token:
 * @self: a #QmiMessagePdcGetConfigLimitsInput.
 * @value_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_config_limits_input_set_token (
    QmiMessagePdcGetConfigLimitsInput *self,
    guint32 value_token,
    GError **error);


/**
 * qmi_message_pdc_get_config_limits_input_get_config_type:
 * @self: a #QmiMessagePdcGetConfigLimitsInput.
 * @value_config_type: (out)(optional): a placeholder for the output #QmiPdcConfigurationType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Config Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_config_limits_input_get_config_type (
    QmiMessagePdcGetConfigLimitsInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error);


/**
 * qmi_message_pdc_get_config_limits_input_set_config_type:
 * @self: a #QmiMessagePdcGetConfigLimitsInput.
 * @value_config_type: a #QmiPdcConfigurationType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Config Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_config_limits_input_set_config_type (
    QmiMessagePdcGetConfigLimitsInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error);


/**
 * qmi_message_pdc_get_config_limits_input_ref:
 * @self: a #QmiMessagePdcGetConfigLimitsInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcGetConfigLimitsInput *qmi_message_pdc_get_config_limits_input_ref (QmiMessagePdcGetConfigLimitsInput *self);

/**
 * qmi_message_pdc_get_config_limits_input_unref:
 * @self: a #QmiMessagePdcGetConfigLimitsInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_get_config_limits_input_unref (QmiMessagePdcGetConfigLimitsInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcGetConfigLimitsInput, qmi_message_pdc_get_config_limits_input_unref)

/**
 * qmi_message_pdc_get_config_limits_input_new:
 *
 * Allocates a new #QmiMessagePdcGetConfigLimitsInput.
 *
 * Returns: the newly created #QmiMessagePdcGetConfigLimitsInput. The returned value should be freed with qmi_message_pdc_get_config_limits_input_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcGetConfigLimitsInput *qmi_message_pdc_get_config_limits_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdcGetConfigLimitsOutput:
 *
 * The #QmiMessagePdcGetConfigLimitsOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcGetConfigLimitsOutput QmiMessagePdcGetConfigLimitsOutput;
GType qmi_message_pdc_get_config_limits_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_GET_CONFIG_LIMITS_OUTPUT (qmi_message_pdc_get_config_limits_output_get_type ())


/**
 * qmi_message_pdc_get_config_limits_output_get_current_size:
 * @self: a #QmiMessagePdcGetConfigLimitsOutput.
 * @value_current_size: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Current Size' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_config_limits_output_get_current_size (
    QmiMessagePdcGetConfigLimitsOutput *self,
    guint64 *value_current_size,
    GError **error);


/**
 * qmi_message_pdc_get_config_limits_output_get_maximum_size:
 * @self: a #QmiMessagePdcGetConfigLimitsOutput.
 * @value_maximum_size: (out)(optional): a placeholder for the output #guint64, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Maximum Size' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_config_limits_output_get_maximum_size (
    QmiMessagePdcGetConfigLimitsOutput *self,
    guint64 *value_maximum_size,
    GError **error);


/**
 * qmi_message_pdc_get_config_limits_output_get_token:
 * @self: a #QmiMessagePdcGetConfigLimitsOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_config_limits_output_get_token (
    QmiMessagePdcGetConfigLimitsOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_get_config_limits_output_get_result:
 * @self: a QmiMessagePdcGetConfigLimitsOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_config_limits_output_get_result (
    QmiMessagePdcGetConfigLimitsOutput *self,
    GError **error);


/**
 * qmi_message_pdc_get_config_limits_output_ref:
 * @self: a #QmiMessagePdcGetConfigLimitsOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcGetConfigLimitsOutput *qmi_message_pdc_get_config_limits_output_ref (QmiMessagePdcGetConfigLimitsOutput *self);

/**
 * qmi_message_pdc_get_config_limits_output_unref:
 * @self: a #QmiMessagePdcGetConfigLimitsOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_get_config_limits_output_unref (QmiMessagePdcGetConfigLimitsOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcGetConfigLimitsOutput, qmi_message_pdc_get_config_limits_output_unref)

/**
 * qmi_message_pdc_get_config_limits_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcGetConfigLimitsOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcGetConfigLimitsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_get_config_limits_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcGetConfigLimitsOutput *qmi_message_pdc_get_config_limits_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Get Default Config Info */


/* --- Input -- */

/**
 * QmiMessagePdcGetDefaultConfigInfoInput:
 *
 * The #QmiMessagePdcGetDefaultConfigInfoInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcGetDefaultConfigInfoInput QmiMessagePdcGetDefaultConfigInfoInput;
GType qmi_message_pdc_get_default_config_info_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_INPUT (qmi_message_pdc_get_default_config_info_input_get_type ())


/**
 * qmi_message_pdc_get_default_config_info_input_get_token:
 * @self: a #QmiMessagePdcGetDefaultConfigInfoInput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_default_config_info_input_get_token (
    QmiMessagePdcGetDefaultConfigInfoInput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_get_default_config_info_input_set_token:
 * @self: a #QmiMessagePdcGetDefaultConfigInfoInput.
 * @value_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_default_config_info_input_set_token (
    QmiMessagePdcGetDefaultConfigInfoInput *self,
    guint32 value_token,
    GError **error);


/**
 * qmi_message_pdc_get_default_config_info_input_get_config_type:
 * @self: a #QmiMessagePdcGetDefaultConfigInfoInput.
 * @value_config_type: (out)(optional): a placeholder for the output #QmiPdcConfigurationType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Config Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_default_config_info_input_get_config_type (
    QmiMessagePdcGetDefaultConfigInfoInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error);


/**
 * qmi_message_pdc_get_default_config_info_input_set_config_type:
 * @self: a #QmiMessagePdcGetDefaultConfigInfoInput.
 * @value_config_type: a #QmiPdcConfigurationType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Config Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_default_config_info_input_set_config_type (
    QmiMessagePdcGetDefaultConfigInfoInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error);


/**
 * qmi_message_pdc_get_default_config_info_input_ref:
 * @self: a #QmiMessagePdcGetDefaultConfigInfoInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcGetDefaultConfigInfoInput *qmi_message_pdc_get_default_config_info_input_ref (QmiMessagePdcGetDefaultConfigInfoInput *self);

/**
 * qmi_message_pdc_get_default_config_info_input_unref:
 * @self: a #QmiMessagePdcGetDefaultConfigInfoInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_get_default_config_info_input_unref (QmiMessagePdcGetDefaultConfigInfoInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcGetDefaultConfigInfoInput, qmi_message_pdc_get_default_config_info_input_unref)

/**
 * qmi_message_pdc_get_default_config_info_input_new:
 *
 * Allocates a new #QmiMessagePdcGetDefaultConfigInfoInput.
 *
 * Returns: the newly created #QmiMessagePdcGetDefaultConfigInfoInput. The returned value should be freed with qmi_message_pdc_get_default_config_info_input_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcGetDefaultConfigInfoInput *qmi_message_pdc_get_default_config_info_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdcGetDefaultConfigInfoOutput:
 *
 * The #QmiMessagePdcGetDefaultConfigInfoOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcGetDefaultConfigInfoOutput QmiMessagePdcGetDefaultConfigInfoOutput;
GType qmi_message_pdc_get_default_config_info_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_GET_DEFAULT_CONFIG_INFO_OUTPUT (qmi_message_pdc_get_default_config_info_output_get_type ())


/**
 * qmi_message_pdc_get_default_config_info_output_get_description:
 * @self: a #QmiMessagePdcGetDefaultConfigInfoOutput.
 * @value_description: (out)(optional)(transfer none): a placeholder for the output constant string, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Description' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_default_config_info_output_get_description (
    QmiMessagePdcGetDefaultConfigInfoOutput *self,
    const gchar **value_description,
    GError **error);


/**
 * qmi_message_pdc_get_default_config_info_output_get_total_size:
 * @self: a #QmiMessagePdcGetDefaultConfigInfoOutput.
 * @value_total_size: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Total Size' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_default_config_info_output_get_total_size (
    QmiMessagePdcGetDefaultConfigInfoOutput *self,
    guint32 *value_total_size,
    GError **error);


/**
 * qmi_message_pdc_get_default_config_info_output_get_version:
 * @self: a #QmiMessagePdcGetDefaultConfigInfoOutput.
 * @value_version: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Version' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_default_config_info_output_get_version (
    QmiMessagePdcGetDefaultConfigInfoOutput *self,
    guint32 *value_version,
    GError **error);


/**
 * qmi_message_pdc_get_default_config_info_output_get_token:
 * @self: a #QmiMessagePdcGetDefaultConfigInfoOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_default_config_info_output_get_token (
    QmiMessagePdcGetDefaultConfigInfoOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_get_default_config_info_output_get_result:
 * @self: a QmiMessagePdcGetDefaultConfigInfoOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_get_default_config_info_output_get_result (
    QmiMessagePdcGetDefaultConfigInfoOutput *self,
    GError **error);


/**
 * qmi_message_pdc_get_default_config_info_output_ref:
 * @self: a #QmiMessagePdcGetDefaultConfigInfoOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcGetDefaultConfigInfoOutput *qmi_message_pdc_get_default_config_info_output_ref (QmiMessagePdcGetDefaultConfigInfoOutput *self);

/**
 * qmi_message_pdc_get_default_config_info_output_unref:
 * @self: a #QmiMessagePdcGetDefaultConfigInfoOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_get_default_config_info_output_unref (QmiMessagePdcGetDefaultConfigInfoOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcGetDefaultConfigInfoOutput, qmi_message_pdc_get_default_config_info_output_unref)

/**
 * qmi_message_pdc_get_default_config_info_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcGetDefaultConfigInfoOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcGetDefaultConfigInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_get_default_config_info_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcGetDefaultConfigInfoOutput *qmi_message_pdc_get_default_config_info_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message PDC Deactivate Config */


/* --- Input -- */

/**
 * QmiMessagePdcDeactivateConfigInput:
 *
 * The #QmiMessagePdcDeactivateConfigInput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcDeactivateConfigInput QmiMessagePdcDeactivateConfigInput;
GType qmi_message_pdc_deactivate_config_input_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_DEACTIVATE_CONFIG_INPUT (qmi_message_pdc_deactivate_config_input_get_type ())


/**
 * qmi_message_pdc_deactivate_config_input_get_token:
 * @self: a #QmiMessagePdcDeactivateConfigInput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_deactivate_config_input_get_token (
    QmiMessagePdcDeactivateConfigInput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_deactivate_config_input_set_token:
 * @self: a #QmiMessagePdcDeactivateConfigInput.
 * @value_token: a #guint32.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Token' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_deactivate_config_input_set_token (
    QmiMessagePdcDeactivateConfigInput *self,
    guint32 value_token,
    GError **error);


/**
 * qmi_message_pdc_deactivate_config_input_get_config_type:
 * @self: a #QmiMessagePdcDeactivateConfigInput.
 * @value_config_type: (out)(optional): a placeholder for the output #QmiPdcConfigurationType, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Config Type' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_deactivate_config_input_get_config_type (
    QmiMessagePdcDeactivateConfigInput *self,
    QmiPdcConfigurationType *value_config_type,
    GError **error);


/**
 * qmi_message_pdc_deactivate_config_input_set_config_type:
 * @self: a #QmiMessagePdcDeactivateConfigInput.
 * @value_config_type: a #QmiPdcConfigurationType.
 * @error: Return location for error or %NULL.
 *
 * Set the 'Config Type' field in the message.
 *
 * Returns: (skip): %TRUE if @value was successfully set, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_deactivate_config_input_set_config_type (
    QmiMessagePdcDeactivateConfigInput *self,
    QmiPdcConfigurationType value_config_type,
    GError **error);


/**
 * qmi_message_pdc_deactivate_config_input_ref:
 * @self: a #QmiMessagePdcDeactivateConfigInput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcDeactivateConfigInput *qmi_message_pdc_deactivate_config_input_ref (QmiMessagePdcDeactivateConfigInput *self);

/**
 * qmi_message_pdc_deactivate_config_input_unref:
 * @self: a #QmiMessagePdcDeactivateConfigInput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_deactivate_config_input_unref (QmiMessagePdcDeactivateConfigInput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcDeactivateConfigInput, qmi_message_pdc_deactivate_config_input_unref)

/**
 * qmi_message_pdc_deactivate_config_input_new:
 *
 * Allocates a new #QmiMessagePdcDeactivateConfigInput.
 *
 * Returns: the newly created #QmiMessagePdcDeactivateConfigInput. The returned value should be freed with qmi_message_pdc_deactivate_config_input_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcDeactivateConfigInput *qmi_message_pdc_deactivate_config_input_new (void);

/* --- Output -- */

/**
 * QmiMessagePdcDeactivateConfigOutput:
 *
 * The #QmiMessagePdcDeactivateConfigOutput structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
typedef struct _QmiMessagePdcDeactivateConfigOutput QmiMessagePdcDeactivateConfigOutput;
GType qmi_message_pdc_deactivate_config_output_get_type (void) G_GNUC_CONST;
#define QMI_TYPE_MESSAGE_PDC_DEACTIVATE_CONFIG_OUTPUT (qmi_message_pdc_deactivate_config_output_get_type ())


/**
 * qmi_message_pdc_deactivate_config_output_get_token:
 * @self: a #QmiMessagePdcDeactivateConfigOutput.
 * @value_token: (out)(optional): a placeholder for the output #guint32, or %NULL if not required.
 * @error: Return location for error or %NULL.
 *
 * Get the 'Token' field from @self.
 *
 * Returns: (skip): %TRUE if the field is found, %FALSE otherwise.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_deactivate_config_output_get_token (
    QmiMessagePdcDeactivateConfigOutput *self,
    guint32 *value_token,
    GError **error);


/**
 * qmi_message_pdc_deactivate_config_output_get_result:
 * @self: a QmiMessagePdcDeactivateConfigOutput.
 * @error: Return location for error or %NULL.
 *
 * Get the result of the QMI operation.
 *
 * Returns: (skip): %TRUE if the QMI operation succeeded, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean qmi_message_pdc_deactivate_config_output_get_result (
    QmiMessagePdcDeactivateConfigOutput *self,
    GError **error);


/**
 * qmi_message_pdc_deactivate_config_output_ref:
 * @self: a #QmiMessagePdcDeactivateConfigOutput.
 *
 * Atomically increments the reference count of @self by one.
 *
 * Returns: the new reference to @self.
 *
 * Since: 1.18
 */
QmiMessagePdcDeactivateConfigOutput *qmi_message_pdc_deactivate_config_output_ref (QmiMessagePdcDeactivateConfigOutput *self);

/**
 * qmi_message_pdc_deactivate_config_output_unref:
 * @self: a #QmiMessagePdcDeactivateConfigOutput.
 *
 * Atomically decrements the reference count of @self by one.
 * If the reference count drops to 0, @self is completely disposed.
 *
 * Since: 1.18
 */
void qmi_message_pdc_deactivate_config_output_unref (QmiMessagePdcDeactivateConfigOutput *self);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiMessagePdcDeactivateConfigOutput, qmi_message_pdc_deactivate_config_output_unref)

/**
 * qmi_message_pdc_deactivate_config_response_parse:
 * @message: a #QmiMessage.
 * @error: return location for error or %NULL.
 *
 * Parses a #QmiMessage and builds a #QmiMessagePdcDeactivateConfigOutput out of it.
 * The operation fails if the message is of the wrong type.
 *
 * Returns: a #QmiMessagePdcDeactivateConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_deactivate_config_output_unref().
 *
 * Since: 1.34
 */
QmiMessagePdcDeactivateConfigOutput *qmi_message_pdc_deactivate_config_response_parse (
    QmiMessage *message,
    GError **error);

/*****************************************************************************/
/* Service-specific utils: PDC */


#if defined (LIBQMI_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *__qmi_message_pdc_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix);

#endif


#define HAVE_QMI_SERVICE_PDC

/*****************************************************************************/
/* CLIENT: QMI Client PDC */

#define QMI_TYPE_CLIENT_PDC            (qmi_client_pdc_get_type ())
#define QMI_CLIENT_PDC(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), QMI_TYPE_CLIENT_PDC, QmiClientPdc))
#define QMI_CLIENT_PDC_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  QMI_TYPE_CLIENT_PDC, QmiClientPdcClass))
#define QMI_IS_CLIENT_PDC(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), QMI_TYPE_CLIENT_PDC))
#define QMI_IS_CLIENT_PDC_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  QMI_TYPE_CLIENT_PDC))
#define QMI_CLIENT_PDC_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  QMI_TYPE_CLIENT_PDC, QmiClientPdcClass))

typedef struct _QmiClientPdc QmiClientPdc;
typedef struct _QmiClientPdcClass QmiClientPdcClass;

/**
 * QmiClientPdc:
 *
 * #QmiClient which handles operations in the PDC service.
 *
 * The #QmiClientPdc structure contains private data and should only be accessed
 * using the provided API.
 *
 * Since: 1.18
 */
struct _QmiClientPdc {
    /*< private >*/
    QmiClient parent;
    gpointer priv_unused;
};

struct _QmiClientPdcClass {
    /*< private >*/
    QmiClientClass parent;
};

GType qmi_client_pdc_get_type (void);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (QmiClientPdc, g_object_unref)

/**
 * qmi_client_pdc_reset:
 * @self: a #QmiClientPdc.
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
 * You can then call qmi_client_pdc_reset_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_reset (
    QmiClientPdc *self,
    gpointer unused,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_reset_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_reset().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_reset().
 *
 * Returns: a #QmiMessagePdcResetOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_reset_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcResetOutput *qmi_client_pdc_reset_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pdc_register:
 * @self: a #QmiClientPdc.
 * @input: a #QmiMessagePdcRegisterInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Register request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pdc_register_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_register (
    QmiClientPdc *self,
    QmiMessagePdcRegisterInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_register_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_register().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_register().
 *
 * Returns: a #QmiMessagePdcRegisterOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_register_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcRegisterOutput *qmi_client_pdc_register_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pdc_config_change:
 * @self: a #QmiClientPdc.
 * @input: a #QmiMessagePdcConfigChangeInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Config Change request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pdc_config_change_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_config_change (
    QmiClientPdc *self,
    QmiMessagePdcConfigChangeInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_config_change_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_config_change().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_config_change().
 *
 * Returns: a #QmiMessagePdcConfigChangeOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_config_change_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcConfigChangeOutput *qmi_client_pdc_config_change_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pdc_get_selected_config:
 * @self: a #QmiClientPdc.
 * @input: a #QmiMessagePdcGetSelectedConfigInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Selected Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pdc_get_selected_config_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_get_selected_config (
    QmiClientPdc *self,
    QmiMessagePdcGetSelectedConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_get_selected_config_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_get_selected_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_get_selected_config().
 *
 * Returns: a #QmiMessagePdcGetSelectedConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_get_selected_config_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcGetSelectedConfigOutput *qmi_client_pdc_get_selected_config_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pdc_set_selected_config:
 * @self: a #QmiClientPdc.
 * @input: a #QmiMessagePdcSetSelectedConfigInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Set Selected Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pdc_set_selected_config_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_set_selected_config (
    QmiClientPdc *self,
    QmiMessagePdcSetSelectedConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_set_selected_config_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_set_selected_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_set_selected_config().
 *
 * Returns: a #QmiMessagePdcSetSelectedConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_set_selected_config_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcSetSelectedConfigOutput *qmi_client_pdc_set_selected_config_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pdc_list_configs:
 * @self: a #QmiClientPdc.
 * @input: a #QmiMessagePdcListConfigsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a List Configs request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pdc_list_configs_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_list_configs (
    QmiClientPdc *self,
    QmiMessagePdcListConfigsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_list_configs_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_list_configs().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_list_configs().
 *
 * Returns: a #QmiMessagePdcListConfigsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_list_configs_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcListConfigsOutput *qmi_client_pdc_list_configs_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pdc_delete_config:
 * @self: a #QmiClientPdc.
 * @input: a #QmiMessagePdcDeleteConfigInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Delete Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pdc_delete_config_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_delete_config (
    QmiClientPdc *self,
    QmiMessagePdcDeleteConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_delete_config_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_delete_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_delete_config().
 *
 * Returns: a #QmiMessagePdcDeleteConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_delete_config_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcDeleteConfigOutput *qmi_client_pdc_delete_config_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pdc_load_config:
 * @self: a #QmiClientPdc.
 * @input: a #QmiMessagePdcLoadConfigInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Load Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pdc_load_config_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_load_config (
    QmiClientPdc *self,
    QmiMessagePdcLoadConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_load_config_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_load_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_load_config().
 *
 * Returns: a #QmiMessagePdcLoadConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_load_config_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcLoadConfigOutput *qmi_client_pdc_load_config_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pdc_activate_config:
 * @self: a #QmiClientPdc.
 * @input: a #QmiMessagePdcActivateConfigInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Activate Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pdc_activate_config_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_activate_config (
    QmiClientPdc *self,
    QmiMessagePdcActivateConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_activate_config_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_activate_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_activate_config().
 *
 * Returns: a #QmiMessagePdcActivateConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_activate_config_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcActivateConfigOutput *qmi_client_pdc_activate_config_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pdc_get_config_info:
 * @self: a #QmiClientPdc.
 * @input: a #QmiMessagePdcGetConfigInfoInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Config Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pdc_get_config_info_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_get_config_info (
    QmiClientPdc *self,
    QmiMessagePdcGetConfigInfoInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_get_config_info_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_get_config_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_get_config_info().
 *
 * Returns: a #QmiMessagePdcGetConfigInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_get_config_info_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcGetConfigInfoOutput *qmi_client_pdc_get_config_info_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pdc_get_config_limits:
 * @self: a #QmiClientPdc.
 * @input: a #QmiMessagePdcGetConfigLimitsInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Config Limits request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pdc_get_config_limits_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_get_config_limits (
    QmiClientPdc *self,
    QmiMessagePdcGetConfigLimitsInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_get_config_limits_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_get_config_limits().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_get_config_limits().
 *
 * Returns: a #QmiMessagePdcGetConfigLimitsOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_get_config_limits_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcGetConfigLimitsOutput *qmi_client_pdc_get_config_limits_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pdc_get_default_config_info:
 * @self: a #QmiClientPdc.
 * @input: a #QmiMessagePdcGetDefaultConfigInfoInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Get Default Config Info request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pdc_get_default_config_info_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_get_default_config_info (
    QmiClientPdc *self,
    QmiMessagePdcGetDefaultConfigInfoInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_get_default_config_info_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_get_default_config_info().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_get_default_config_info().
 *
 * Returns: a #QmiMessagePdcGetDefaultConfigInfoOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_get_default_config_info_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcGetDefaultConfigInfoOutput *qmi_client_pdc_get_default_config_info_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

/**
 * qmi_client_pdc_deactivate_config:
 * @self: a #QmiClientPdc.
 * @input: a #QmiMessagePdcDeactivateConfigInput.
 * @timeout: maximum time to wait for the method to complete, in seconds.
 * @cancellable: a #GCancellable or %NULL.
 * @callback: a #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: user data to pass to @callback.
 *
 * Asynchronously sends a Deactivate Config request to the device.
 *
 * When the operation is finished, @callback will be invoked in the thread-default main loop of the thread you are calling this method from.
 *
 * You can then call qmi_client_pdc_deactivate_config_finish() to get the result of the operation.
 *
 * Since: 1.18
 */
void qmi_client_pdc_deactivate_config (
    QmiClientPdc *self,
    QmiMessagePdcDeactivateConfigInput *input,
    guint timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

/**
 * qmi_client_pdc_deactivate_config_finish:
 * @self: a #QmiClientPdc.
 * @res: the #GAsyncResult obtained from the #GAsyncReadyCallback passed to qmi_client_pdc_deactivate_config().
 * @error: Return location for error or %NULL.
 *
 * Finishes an async operation started with qmi_client_pdc_deactivate_config().
 *
 * Returns: a #QmiMessagePdcDeactivateConfigOutput, or %NULL if @error is set. The returned value should be freed with qmi_message_pdc_deactivate_config_output_unref().
 *
 * Since: 1.18
 */
QmiMessagePdcDeactivateConfigOutput *qmi_client_pdc_deactivate_config_finish (
    QmiClientPdc *self,
    GAsyncResult *res,
    GError **error);

G_END_DECLS

#endif /* __LIBQMI_GLIB_QMI_PDC__ */
