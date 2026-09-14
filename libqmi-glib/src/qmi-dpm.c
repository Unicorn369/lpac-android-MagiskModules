
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

#include "qmi-dpm.h"
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
    QMI_MESSAGE_DPM_OPEN_PORT = 0x0020,
    QMI_MESSAGE_DPM_CLOSE_PORT = 0x0021,
} QmiMessageDpm;


/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DPM Open Port */


/* --- Input -- */

static void
__qmi_message_dpm_open_port_input_software_data_ports_element_clear (QmiMessageDpmOpenPortInputSoftwareDataPortsElement *value)
{
    g_clear_pointer (&value->port_name, (GDestroyNotify)g_free);
}

static void
__qmi_message_dpm_open_port_input_software_data_ports_element_free (QmiMessageDpmOpenPortInputSoftwareDataPortsElement *value)
{
    __qmi_message_dpm_open_port_input_software_data_ports_element_clear (value);
    g_slice_free (QmiMessageDpmOpenPortInputSoftwareDataPortsElement, value);
}

static QmiMessageDpmOpenPortInputSoftwareDataPortsElement *
__qmi_message_dpm_open_port_input_software_data_ports_element_new (void)
{
    return g_slice_new0 (QmiMessageDpmOpenPortInputSoftwareDataPortsElement);
}

static QmiMessageDpmOpenPortInputSoftwareDataPortsElement *
__qmi_message_dpm_open_port_input_software_data_ports_element_copy (const QmiMessageDpmOpenPortInputSoftwareDataPortsElement *value)
{
    QmiMessageDpmOpenPortInputSoftwareDataPortsElement *copy;

    copy = __qmi_message_dpm_open_port_input_software_data_ports_element_new ();
    copy->endpoint_type = value->endpoint_type;
    copy->interface_number = value->interface_number;
    copy->port_name = g_strdup (value->port_name);
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageDpmOpenPortInputSoftwareDataPortsElement, qmi_message_dpm_open_port_input_software_data_ports_element, (GBoxedCopyFunc)__qmi_message_dpm_open_port_input_software_data_ports_element_copy, (GBoxedFreeFunc)__qmi_message_dpm_open_port_input_software_data_ports_element_free)

static void
__qmi_message_dpm_open_port_input_hardware_data_ports_element_free (QmiMessageDpmOpenPortInputHardwareDataPortsElement *value)
{
    g_slice_free (QmiMessageDpmOpenPortInputHardwareDataPortsElement, value);
}

static QmiMessageDpmOpenPortInputHardwareDataPortsElement *
__qmi_message_dpm_open_port_input_hardware_data_ports_element_new (void)
{
    return g_slice_new0 (QmiMessageDpmOpenPortInputHardwareDataPortsElement);
}

static QmiMessageDpmOpenPortInputHardwareDataPortsElement *
__qmi_message_dpm_open_port_input_hardware_data_ports_element_copy (const QmiMessageDpmOpenPortInputHardwareDataPortsElement *value)
{
    QmiMessageDpmOpenPortInputHardwareDataPortsElement *copy;

    copy = __qmi_message_dpm_open_port_input_hardware_data_ports_element_new ();
    copy->endpoint_type = value->endpoint_type;
    copy->interface_number = value->interface_number;
    copy->rx_endpoint_number = value->rx_endpoint_number;
    copy->tx_endpoint_number = value->tx_endpoint_number;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageDpmOpenPortInputHardwareDataPortsElement, qmi_message_dpm_open_port_input_hardware_data_ports_element, (GBoxedCopyFunc)__qmi_message_dpm_open_port_input_hardware_data_ports_element_copy, (GBoxedFreeFunc)__qmi_message_dpm_open_port_input_hardware_data_ports_element_free)

static void
__qmi_message_dpm_open_port_input_control_ports_element_clear (QmiMessageDpmOpenPortInputControlPortsElement *value)
{
    g_clear_pointer (&value->port_name, (GDestroyNotify)g_free);
}

static void
__qmi_message_dpm_open_port_input_control_ports_element_free (QmiMessageDpmOpenPortInputControlPortsElement *value)
{
    __qmi_message_dpm_open_port_input_control_ports_element_clear (value);
    g_slice_free (QmiMessageDpmOpenPortInputControlPortsElement, value);
}

static QmiMessageDpmOpenPortInputControlPortsElement *
__qmi_message_dpm_open_port_input_control_ports_element_new (void)
{
    return g_slice_new0 (QmiMessageDpmOpenPortInputControlPortsElement);
}

static QmiMessageDpmOpenPortInputControlPortsElement *
__qmi_message_dpm_open_port_input_control_ports_element_copy (const QmiMessageDpmOpenPortInputControlPortsElement *value)
{
    QmiMessageDpmOpenPortInputControlPortsElement *copy;

    copy = __qmi_message_dpm_open_port_input_control_ports_element_new ();
    copy->port_name = g_strdup (value->port_name);
    copy->endpoint_type = value->endpoint_type;
    copy->interface_number = value->interface_number;
    return copy;
}

G_DEFINE_BOXED_TYPE (QmiMessageDpmOpenPortInputControlPortsElement, qmi_message_dpm_open_port_input_control_ports_element, (GBoxedCopyFunc)__qmi_message_dpm_open_port_input_control_ports_element_copy, (GBoxedFreeFunc)__qmi_message_dpm_open_port_input_control_ports_element_free)

struct _QmiMessageDpmOpenPortInput {
    volatile gint ref_count;

    /* Software Data Ports */
    gboolean arg_software_data_ports_set;
    GArray *arg_software_data_ports;
    GPtrArray *arg_software_data_ports_ptr;

    /* Hardware Data Ports */
    gboolean arg_hardware_data_ports_set;
    GArray *arg_hardware_data_ports;
    GPtrArray *arg_hardware_data_ports_ptr;

    /* Control Ports */
    gboolean arg_control_ports_set;
    GArray *arg_control_ports;
    GPtrArray *arg_control_ports_ptr;
};

#define QMI_MESSAGE_DPM_OPEN_PORT_INPUT_TLV_SOFTWARE_DATA_PORTS 0x12
#define QMI_MESSAGE_DPM_OPEN_PORT_INPUT_TLV_HARDWARE_DATA_PORTS 0x11
#define QMI_MESSAGE_DPM_OPEN_PORT_INPUT_TLV_CONTROL_PORTS 0x10

gboolean
qmi_message_dpm_open_port_input_get_software_data_ports (
    QmiMessageDpmOpenPortInput *self,
    GArray **value_software_data_ports,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_software_data_ports_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Software Data Ports' was not found in the message");
        return FALSE;
    }

    if (value_software_data_ports)
        *value_software_data_ports = self->arg_software_data_ports;

    return TRUE;
}

gboolean
qmi_message_dpm_open_port_input_get_software_data_ports_gir (
    QmiMessageDpmOpenPortInput *self,
    GPtrArray **value_software_data_ports_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_software_data_ports_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Software Data Ports' was not found in the message");
        return FALSE;
    }

    if (value_software_data_ports_ptr) {
        if (!self->arg_software_data_ports_ptr) {
            {
                guint software_data_ports_i;

                self->arg_software_data_ports_ptr = g_ptr_array_new_full (self->arg_software_data_ports->len, (GDestroyNotify)__qmi_message_dpm_open_port_input_software_data_ports_element_free);
                for (software_data_ports_i = 0; software_data_ports_i < self->arg_software_data_ports->len; software_data_ports_i++) {
                    QmiMessageDpmOpenPortInputSoftwareDataPortsElement *software_data_ports_aux_from;
                    QmiMessageDpmOpenPortInputSoftwareDataPortsElement *software_data_ports_aux_to;

                    software_data_ports_aux_from = &g_array_index (self->arg_software_data_ports, QmiMessageDpmOpenPortInputSoftwareDataPortsElement, software_data_ports_i);

                    software_data_ports_aux_to = __qmi_message_dpm_open_port_input_software_data_ports_element_new ();
                    software_data_ports_aux_to->endpoint_type = (*software_data_ports_aux_from).endpoint_type;
                    software_data_ports_aux_to->interface_number = (*software_data_ports_aux_from).interface_number;
                    software_data_ports_aux_to->port_name = g_strdup ((*software_data_ports_aux_from).port_name);

                    g_ptr_array_add (self->arg_software_data_ports_ptr, software_data_ports_aux_to);
                }
            }
        }
        *value_software_data_ports_ptr = self->arg_software_data_ports_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_dpm_open_port_input_set_software_data_ports (
    QmiMessageDpmOpenPortInput *self,
    GArray *value_software_data_ports,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_software_data_ports, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_software_data_ports, (GDestroyNotify)g_ptr_array_unref);
    self->arg_software_data_ports = g_array_ref (value_software_data_ports);
    self->arg_software_data_ports_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_dpm_open_port_input_set_software_data_ports_gir (
    QmiMessageDpmOpenPortInput *self,
    GPtrArray *value_software_data_ports_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_software_data_ports, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_software_data_ports_ptr, (GDestroyNotify)g_ptr_array_unref);
    {
        guint software_data_ports_i;

        self->arg_software_data_ports = g_array_sized_new (FALSE, FALSE, sizeof (QmiMessageDpmOpenPortInputSoftwareDataPortsElement), value_software_data_ports_ptr->len);
        for (software_data_ports_i = 0; software_data_ports_i < value_software_data_ports_ptr->len; software_data_ports_i++) {
            QmiMessageDpmOpenPortInputSoftwareDataPortsElement software_data_ports_aux_to;
            QmiMessageDpmOpenPortInputSoftwareDataPortsElement *software_data_ports_aux_from;

            software_data_ports_aux_from = g_ptr_array_index (value_software_data_ports_ptr, software_data_ports_i);

            software_data_ports_aux_to.endpoint_type = software_data_ports_aux_from->endpoint_type;
            software_data_ports_aux_to.interface_number = software_data_ports_aux_from->interface_number;
            software_data_ports_aux_to.port_name = g_strdup (software_data_ports_aux_from->port_name);

            g_array_append_val (self->arg_software_data_ports, software_data_ports_aux_to);
        }
    }
    self->arg_software_data_ports_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_dpm_open_port_input_get_hardware_data_ports (
    QmiMessageDpmOpenPortInput *self,
    GArray **value_hardware_data_ports,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_hardware_data_ports_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Hardware Data Ports' was not found in the message");
        return FALSE;
    }

    if (value_hardware_data_ports)
        *value_hardware_data_ports = self->arg_hardware_data_ports;

    return TRUE;
}

gboolean
qmi_message_dpm_open_port_input_get_hardware_data_ports_gir (
    QmiMessageDpmOpenPortInput *self,
    GPtrArray **value_hardware_data_ports_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_hardware_data_ports_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Hardware Data Ports' was not found in the message");
        return FALSE;
    }

    if (value_hardware_data_ports_ptr) {
        if (!self->arg_hardware_data_ports_ptr) {
            {
                guint hardware_data_ports_i;

                self->arg_hardware_data_ports_ptr = g_ptr_array_new_full (self->arg_hardware_data_ports->len, (GDestroyNotify)__qmi_message_dpm_open_port_input_hardware_data_ports_element_free);
                for (hardware_data_ports_i = 0; hardware_data_ports_i < self->arg_hardware_data_ports->len; hardware_data_ports_i++) {
                    QmiMessageDpmOpenPortInputHardwareDataPortsElement *hardware_data_ports_aux_from;
                    QmiMessageDpmOpenPortInputHardwareDataPortsElement *hardware_data_ports_aux_to;

                    hardware_data_ports_aux_from = &g_array_index (self->arg_hardware_data_ports, QmiMessageDpmOpenPortInputHardwareDataPortsElement, hardware_data_ports_i);

                    hardware_data_ports_aux_to = __qmi_message_dpm_open_port_input_hardware_data_ports_element_new ();
                    hardware_data_ports_aux_to->endpoint_type = (*hardware_data_ports_aux_from).endpoint_type;
                    hardware_data_ports_aux_to->interface_number = (*hardware_data_ports_aux_from).interface_number;
                    hardware_data_ports_aux_to->rx_endpoint_number = (*hardware_data_ports_aux_from).rx_endpoint_number;
                    hardware_data_ports_aux_to->tx_endpoint_number = (*hardware_data_ports_aux_from).tx_endpoint_number;

                    g_ptr_array_add (self->arg_hardware_data_ports_ptr, hardware_data_ports_aux_to);
                }
            }
        }
        *value_hardware_data_ports_ptr = self->arg_hardware_data_ports_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_dpm_open_port_input_set_hardware_data_ports (
    QmiMessageDpmOpenPortInput *self,
    GArray *value_hardware_data_ports,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_hardware_data_ports, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_hardware_data_ports, (GDestroyNotify)g_ptr_array_unref);
    self->arg_hardware_data_ports = g_array_ref (value_hardware_data_ports);
    self->arg_hardware_data_ports_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_dpm_open_port_input_set_hardware_data_ports_gir (
    QmiMessageDpmOpenPortInput *self,
    GPtrArray *value_hardware_data_ports_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_hardware_data_ports, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_hardware_data_ports_ptr, (GDestroyNotify)g_ptr_array_unref);
    {
        guint hardware_data_ports_i;

        self->arg_hardware_data_ports = g_array_sized_new (FALSE, FALSE, sizeof (QmiMessageDpmOpenPortInputHardwareDataPortsElement), value_hardware_data_ports_ptr->len);
        for (hardware_data_ports_i = 0; hardware_data_ports_i < value_hardware_data_ports_ptr->len; hardware_data_ports_i++) {
            QmiMessageDpmOpenPortInputHardwareDataPortsElement hardware_data_ports_aux_to;
            QmiMessageDpmOpenPortInputHardwareDataPortsElement *hardware_data_ports_aux_from;

            hardware_data_ports_aux_from = g_ptr_array_index (value_hardware_data_ports_ptr, hardware_data_ports_i);

            hardware_data_ports_aux_to.endpoint_type = hardware_data_ports_aux_from->endpoint_type;
            hardware_data_ports_aux_to.interface_number = hardware_data_ports_aux_from->interface_number;
            hardware_data_ports_aux_to.rx_endpoint_number = hardware_data_ports_aux_from->rx_endpoint_number;
            hardware_data_ports_aux_to.tx_endpoint_number = hardware_data_ports_aux_from->tx_endpoint_number;

            g_array_append_val (self->arg_hardware_data_ports, hardware_data_ports_aux_to);
        }
    }
    self->arg_hardware_data_ports_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_dpm_open_port_input_get_control_ports (
    QmiMessageDpmOpenPortInput *self,
    GArray **value_control_ports,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_control_ports_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Control Ports' was not found in the message");
        return FALSE;
    }

    if (value_control_ports)
        *value_control_ports = self->arg_control_ports;

    return TRUE;
}

gboolean
qmi_message_dpm_open_port_input_get_control_ports_gir (
    QmiMessageDpmOpenPortInput *self,
    GPtrArray **value_control_ports_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    if (!self->arg_control_ports_set) {
        g_set_error (error,
                     QMI_CORE_ERROR,
                     QMI_CORE_ERROR_TLV_NOT_FOUND,
                     "Field 'Control Ports' was not found in the message");
        return FALSE;
    }

    if (value_control_ports_ptr) {
        if (!self->arg_control_ports_ptr) {
            {
                guint control_ports_i;

                self->arg_control_ports_ptr = g_ptr_array_new_full (self->arg_control_ports->len, (GDestroyNotify)__qmi_message_dpm_open_port_input_control_ports_element_free);
                for (control_ports_i = 0; control_ports_i < self->arg_control_ports->len; control_ports_i++) {
                    QmiMessageDpmOpenPortInputControlPortsElement *control_ports_aux_from;
                    QmiMessageDpmOpenPortInputControlPortsElement *control_ports_aux_to;

                    control_ports_aux_from = &g_array_index (self->arg_control_ports, QmiMessageDpmOpenPortInputControlPortsElement, control_ports_i);

                    control_ports_aux_to = __qmi_message_dpm_open_port_input_control_ports_element_new ();
                    control_ports_aux_to->port_name = g_strdup ((*control_ports_aux_from).port_name);
                    control_ports_aux_to->endpoint_type = (*control_ports_aux_from).endpoint_type;
                    control_ports_aux_to->interface_number = (*control_ports_aux_from).interface_number;

                    g_ptr_array_add (self->arg_control_ports_ptr, control_ports_aux_to);
                }
            }
        }
        *value_control_ports_ptr = self->arg_control_ports_ptr;
    }
    return TRUE;
}

gboolean
qmi_message_dpm_open_port_input_set_control_ports (
    QmiMessageDpmOpenPortInput *self,
    GArray *value_control_ports,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_control_ports, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_control_ports, (GDestroyNotify)g_ptr_array_unref);
    self->arg_control_ports = g_array_ref (value_control_ports);
    self->arg_control_ports_set = TRUE;

    return TRUE;
}

gboolean
qmi_message_dpm_open_port_input_set_control_ports_gir (
    QmiMessageDpmOpenPortInput *self,
    GPtrArray *value_control_ports_ptr,
    GError **error)
{
    g_return_val_if_fail (self != NULL, FALSE);

    g_clear_pointer (&self->arg_control_ports, (GDestroyNotify)g_array_unref);
    g_clear_pointer (&self->arg_control_ports_ptr, (GDestroyNotify)g_ptr_array_unref);
    {
        guint control_ports_i;

        self->arg_control_ports = g_array_sized_new (FALSE, FALSE, sizeof (QmiMessageDpmOpenPortInputControlPortsElement), value_control_ports_ptr->len);
        for (control_ports_i = 0; control_ports_i < value_control_ports_ptr->len; control_ports_i++) {
            QmiMessageDpmOpenPortInputControlPortsElement control_ports_aux_to;
            QmiMessageDpmOpenPortInputControlPortsElement *control_ports_aux_from;

            control_ports_aux_from = g_ptr_array_index (value_control_ports_ptr, control_ports_i);

            control_ports_aux_to.port_name = g_strdup (control_ports_aux_from->port_name);
            control_ports_aux_to.endpoint_type = control_ports_aux_from->endpoint_type;
            control_ports_aux_to.interface_number = control_ports_aux_from->interface_number;

            g_array_append_val (self->arg_control_ports, control_ports_aux_to);
        }
    }
    self->arg_control_ports_set = TRUE;

    return TRUE;
}

GType
qmi_message_dpm_open_port_input_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageDpmOpenPortInput"),
                                          (GBoxedCopyFunc) qmi_message_dpm_open_port_input_ref,
                                          (GBoxedFreeFunc) qmi_message_dpm_open_port_input_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageDpmOpenPortInput *
qmi_message_dpm_open_port_input_ref (QmiMessageDpmOpenPortInput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_dpm_open_port_input_unref (QmiMessageDpmOpenPortInput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_clear_pointer (&self->arg_software_data_ports, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_software_data_ports, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_hardware_data_ports, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_hardware_data_ports, (GDestroyNotify)g_ptr_array_unref);
        g_clear_pointer (&self->arg_control_ports, (GDestroyNotify)g_array_unref);
        g_clear_pointer (&self->arg_control_ports, (GDestroyNotify)g_ptr_array_unref);
        g_slice_free (QmiMessageDpmOpenPortInput, self);
    }
}

QmiMessageDpmOpenPortInput *
qmi_message_dpm_open_port_input_new (void)
{
    QmiMessageDpmOpenPortInput *self;

    self = g_slice_new0 (QmiMessageDpmOpenPortInput);
    self->ref_count = 1;
    return self;
}

static QmiMessage *
__qmi_message_dpm_open_port_request_create (
    guint16 transaction_id,
    guint8 cid,
    QmiMessageDpmOpenPortInput *input,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_DPM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_DPM_OPEN_PORT);

    /* All TLVs are optional, we allow NULL input */
    if (!input)
        return g_steal_pointer (&self);

    /* Try to add the 'Software Data Ports' TLV */
    if (input->arg_software_data_ports_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_DPM_OPEN_PORT_INPUT_TLV_SOFTWARE_DATA_PORTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Software Data Ports': ");
            return NULL;
        }

        {
            guint software_data_ports_i;
            guint8 software_data_ports_n_items;

            /* Write the number of items in the array first */
            software_data_ports_n_items = (guint8) input->arg_software_data_ports->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, software_data_ports_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Software Data Ports': ");
                return NULL;
            }

            for (software_data_ports_i = 0; software_data_ports_i < input->arg_software_data_ports->len; software_data_ports_i++) {
                {
                    guint32 tmp;

                    tmp = (guint32) g_array_index (input->arg_software_data_ports, QmiMessageDpmOpenPortInputSoftwareDataPortsElement,software_data_ports_i).endpoint_type;
                    /* Write the guint32 variable to the buffer */
                    if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                        g_prefix_error (error, "Cannot write enum in TLV 'Software Data Ports': ");
                        return NULL;
                    }
                }
                /* Write the guint32 variable to the buffer */
                if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, g_array_index (input->arg_software_data_ports, QmiMessageDpmOpenPortInputSoftwareDataPortsElement,software_data_ports_i).interface_number, error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Software Data Ports': ");
                    return NULL;
                }
                if (!qmi_message_tlv_write_string (self, 1, g_array_index (input->arg_software_data_ports, QmiMessageDpmOpenPortInputSoftwareDataPortsElement,software_data_ports_i).port_name, -1, error)) {
                    g_prefix_error (error, "Cannot write string in TLV 'Software Data Ports': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Software Data Ports': ");
            return NULL;
        }
    }

    /* Try to add the 'Hardware Data Ports' TLV */
    if (input->arg_hardware_data_ports_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_DPM_OPEN_PORT_INPUT_TLV_HARDWARE_DATA_PORTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Hardware Data Ports': ");
            return NULL;
        }

        {
            guint hardware_data_ports_i;
            guint8 hardware_data_ports_n_items;

            /* Write the number of items in the array first */
            hardware_data_ports_n_items = (guint8) input->arg_hardware_data_ports->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, hardware_data_ports_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Hardware Data Ports': ");
                return NULL;
            }

            for (hardware_data_ports_i = 0; hardware_data_ports_i < input->arg_hardware_data_ports->len; hardware_data_ports_i++) {
                {
                    guint32 tmp;

                    tmp = (guint32) g_array_index (input->arg_hardware_data_ports, QmiMessageDpmOpenPortInputHardwareDataPortsElement,hardware_data_ports_i).endpoint_type;
                    /* Write the guint32 variable to the buffer */
                    if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                        g_prefix_error (error, "Cannot write enum in TLV 'Hardware Data Ports': ");
                        return NULL;
                    }
                }
                /* Write the guint32 variable to the buffer */
                if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, g_array_index (input->arg_hardware_data_ports, QmiMessageDpmOpenPortInputHardwareDataPortsElement,hardware_data_ports_i).interface_number, error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Hardware Data Ports': ");
                    return NULL;
                }
                /* Write the guint32 variable to the buffer */
                if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, g_array_index (input->arg_hardware_data_ports, QmiMessageDpmOpenPortInputHardwareDataPortsElement,hardware_data_ports_i).rx_endpoint_number, error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Hardware Data Ports': ");
                    return NULL;
                }
                /* Write the guint32 variable to the buffer */
                if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, g_array_index (input->arg_hardware_data_ports, QmiMessageDpmOpenPortInputHardwareDataPortsElement,hardware_data_ports_i).tx_endpoint_number, error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Hardware Data Ports': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Hardware Data Ports': ");
            return NULL;
        }
    }

    /* Try to add the 'Control Ports' TLV */
    if (input->arg_control_ports_set) {
        gsize tlv_offset;

        if (!(tlv_offset = qmi_message_tlv_write_init (self, (guint8)QMI_MESSAGE_DPM_OPEN_PORT_INPUT_TLV_CONTROL_PORTS, error))) {
            g_prefix_error (error, "Cannot initialize TLV 'Control Ports': ");
            return NULL;
        }

        {
            guint control_ports_i;
            guint8 control_ports_n_items;

            /* Write the number of items in the array first */
            control_ports_n_items = (guint8) input->arg_control_ports->len;
            /* Write the guint8 variable to the buffer */
            if (!qmi_message_tlv_write_guint8 (self, control_ports_n_items, error)) {
                g_prefix_error (error, "Cannot write integer in TLV 'Control Ports': ");
                return NULL;
            }

            for (control_ports_i = 0; control_ports_i < input->arg_control_ports->len; control_ports_i++) {
                if (!qmi_message_tlv_write_string (self, 1, g_array_index (input->arg_control_ports, QmiMessageDpmOpenPortInputControlPortsElement,control_ports_i).port_name, -1, error)) {
                    g_prefix_error (error, "Cannot write string in TLV 'Control Ports': ");
                    return NULL;
                }
                {
                    guint32 tmp;

                    tmp = (guint32) g_array_index (input->arg_control_ports, QmiMessageDpmOpenPortInputControlPortsElement,control_ports_i).endpoint_type;
                    /* Write the guint32 variable to the buffer */
                    if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, tmp, error)) {
                        g_prefix_error (error, "Cannot write enum in TLV 'Control Ports': ");
                        return NULL;
                    }
                }
                /* Write the guint32 variable to the buffer */
                if (!qmi_message_tlv_write_guint32 (self, QMI_ENDIAN_LITTLE, g_array_index (input->arg_control_ports, QmiMessageDpmOpenPortInputControlPortsElement,control_ports_i).interface_number, error)) {
                    g_prefix_error (error, "Cannot write integer in TLV 'Control Ports': ");
                    return NULL;
                }
            }
        }

        if (!qmi_message_tlv_write_complete (self, tlv_offset, error)) {
            g_prefix_error (error, "Cannot complete TLV 'Control Ports': ");
            return NULL;
        }
    }

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageDpmOpenPortOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_DPM_OPEN_PORT_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_dpm_open_port_output_get_result (
    QmiMessageDpmOpenPortOutput *self,
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
qmi_message_dpm_open_port_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageDpmOpenPortOutput"),
                                          (GBoxedCopyFunc) qmi_message_dpm_open_port_output_ref,
                                          (GBoxedFreeFunc) qmi_message_dpm_open_port_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageDpmOpenPortOutput *
qmi_message_dpm_open_port_output_ref (QmiMessageDpmOpenPortOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_dpm_open_port_output_unref (QmiMessageDpmOpenPortOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageDpmOpenPortOutput, self);
    }
}

static gchar *
qmi_message_dpm_open_port_input_software_data_ports_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DPM_OPEN_PORT_INPUT_TLV_SOFTWARE_DATA_PORTS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint software_data_ports_i;
        guint8 software_data_ports_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(software_data_ports_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (software_data_ports_i = 0; software_data_ports_i < software_data_ports_n_items; software_data_ports_i++) {
            g_string_append_printf (printable, " [%u] = '", software_data_ports_i);
            g_string_append (printable, "[");
            g_string_append (printable, " endpoint_type = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_DATA_ENDPOINT_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_data_endpoint_type_get_string ((QmiDataEndpointType)tmp));
#elif defined  __QMI_DATA_ENDPOINT_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_data_endpoint_type_build_string_from_mask ((QmiDataEndpointType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiDataEndpointType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " interface_number = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " port_name = '");

            {
                g_autofree gchar *tmp = NULL;

                if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
                    goto out;
                {
                    g_string_append (printable, tmp);
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
qmi_message_dpm_open_port_input_hardware_data_ports_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DPM_OPEN_PORT_INPUT_TLV_HARDWARE_DATA_PORTS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint hardware_data_ports_i;
        guint8 hardware_data_ports_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(hardware_data_ports_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (hardware_data_ports_i = 0; hardware_data_ports_i < hardware_data_ports_n_items; hardware_data_ports_i++) {
            g_string_append_printf (printable, " [%u] = '", hardware_data_ports_i);
            g_string_append (printable, "[");
            g_string_append (printable, " endpoint_type = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_DATA_ENDPOINT_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_data_endpoint_type_get_string ((QmiDataEndpointType)tmp));
#elif defined  __QMI_DATA_ENDPOINT_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_data_endpoint_type_build_string_from_mask ((QmiDataEndpointType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiDataEndpointType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " interface_number = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " rx_endpoint_number = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
                    g_string_append_printf (printable, "%" G_GUINT32_FORMAT "", tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " tx_endpoint_number = '");

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
qmi_message_dpm_open_port_input_control_ports_get_printable (
    QmiMessage *message,
    const gchar *line_prefix)
{
    gsize offset = 0;
    gsize init_offset;
    GString *printable;
    GError *error = NULL;

    if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DPM_OPEN_PORT_INPUT_TLV_CONTROL_PORTS, NULL, NULL)) == 0)
        return NULL;

    printable = g_string_new ("");
    {
        guint control_ports_i;
        guint8 control_ports_n_items;

        /* Read number of items in the array */
        if (!qmi_message_tlv_read_guint8 (message, init_offset, &offset, &(control_ports_n_items), &error))
            goto out;

        g_string_append (printable, "{");

        for (control_ports_i = 0; control_ports_i < control_ports_n_items; control_ports_i++) {
            g_string_append_printf (printable, " [%u] = '", control_ports_i);
            g_string_append (printable, "[");
            g_string_append (printable, " port_name = '");

            {
                g_autofree gchar *tmp = NULL;

                if (!qmi_message_tlv_read_string (message, init_offset, &offset, 1, 0, &tmp, &error))
                    goto out;
                {
                    g_string_append (printable, tmp);
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " endpoint_type = '");

            {
                guint32 tmp;

                if (!qmi_message_tlv_read_guint32 (message, init_offset, &offset, QMI_ENDIAN_LITTLE, &tmp, &error))
                    goto out;
                {
#if defined  __QMI_DATA_ENDPOINT_TYPE_IS_ENUM__
                    g_string_append_printf (printable, "%s", qmi_data_endpoint_type_get_string ((QmiDataEndpointType)tmp));
#elif defined  __QMI_DATA_ENDPOINT_TYPE_IS_FLAGS__
                    {
                        g_autofree gchar *flags_str = NULL;

                        flags_str = qmi_data_endpoint_type_build_string_from_mask ((QmiDataEndpointType)tmp);
                        g_string_append_printf (printable, "%s", flags_str);
                    }
#else
# error unexpected public format: QmiDataEndpointType
#endif
                }
            }
            g_string_append (printable, "'");
            g_string_append (printable, " interface_number = '");

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

    if ((init_offset = qmi_message_tlv_read_init (self, QMI_MESSAGE_DPM_OPEN_PORT_OUTPUT_TLV_RESULT, NULL, NULL)) == 0)
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

struct message_open_port_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_open_port_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_open_port_context *ctx)
{
    const gchar *tlv_type_str = NULL;
    g_autofree gchar *translated_value = NULL;
    gboolean value_has_personal_info = FALSE;

    if (!qmi_message_is_response (ctx->self)) {
        switch (type) {
        case QMI_MESSAGE_DPM_OPEN_PORT_INPUT_TLV_SOFTWARE_DATA_PORTS:
            tlv_type_str = "Software Data Ports";
            translated_value = qmi_message_dpm_open_port_input_software_data_ports_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_DPM_OPEN_PORT_INPUT_TLV_HARDWARE_DATA_PORTS:
            tlv_type_str = "Hardware Data Ports";
            translated_value = qmi_message_dpm_open_port_input_hardware_data_ports_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        case QMI_MESSAGE_DPM_OPEN_PORT_INPUT_TLV_CONTROL_PORTS:
            tlv_type_str = "Control Ports";
            translated_value = qmi_message_dpm_open_port_input_control_ports_get_printable (
                                   ctx->self,
                                   ctx->line_prefix);
            break;
        default:
            break;
        }
    } else {
        switch (type) {
        case QMI_MESSAGE_DPM_OPEN_PORT_OUTPUT_TLV_RESULT:
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
message_open_port_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Open Port\" (0x0020)\n",
                            line_prefix);

    {
        struct message_open_port_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_open_port_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageDpmOpenPortOutput *
qmi_message_dpm_open_port_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageDpmOpenPortOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_DPM_OPEN_PORT);

    self = g_slice_new0 (QmiMessageDpmOpenPortOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DPM_OPEN_PORT_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_dpm_open_port_output_unref (self);
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
                qmi_message_dpm_open_port_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* REQUEST/RESPONSE: Qmi Message DPM Close Port */


/* --- Input -- */

/* Note: no fields in the Input container */

static QmiMessage *
__qmi_message_dpm_close_port_request_create (
    guint16 transaction_id,
    guint8 cid,
    gpointer unused,
    GError **error)
{
    g_autoptr(QmiMessage) self = NULL;

    self = qmi_message_new (QMI_SERVICE_DPM,
                            cid,
                            transaction_id,
                            QMI_MESSAGE_DPM_CLOSE_PORT);

    return g_steal_pointer (&self);
}

/* --- Output -- */

struct _QmiMessageDpmClosePortOutput {
    volatile gint ref_count;

    /* Result */
    gboolean arg_result_set;
    guint16 arg_result_error_status;
    guint16 arg_result_error_code;
};

#define QMI_MESSAGE_DPM_CLOSE_PORT_OUTPUT_TLV_RESULT 0x02

gboolean
qmi_message_dpm_close_port_output_get_result (
    QmiMessageDpmClosePortOutput *self,
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
qmi_message_dpm_close_port_output_get_type (void)
{
    static gsize g_define_type_id_initialized = 0;

    if (g_once_init_enter (&g_define_type_id_initialized)) {
        GType g_define_type_id =
            g_boxed_type_register_static (g_intern_static_string ("QmiMessageDpmClosePortOutput"),
                                          (GBoxedCopyFunc) qmi_message_dpm_close_port_output_ref,
                                          (GBoxedFreeFunc) qmi_message_dpm_close_port_output_unref);

        g_once_init_leave (&g_define_type_id_initialized, g_define_type_id);
    }

    return g_define_type_id_initialized;
}

QmiMessageDpmClosePortOutput *
qmi_message_dpm_close_port_output_ref (QmiMessageDpmClosePortOutput *self)
{
    g_return_val_if_fail (self != NULL, NULL);

    g_atomic_int_inc (&self->ref_count);
    return self;
}

void
qmi_message_dpm_close_port_output_unref (QmiMessageDpmClosePortOutput *self)
{
    g_return_if_fail (self != NULL);

    if (g_atomic_int_dec_and_test (&self->ref_count)) {
        g_slice_free (QmiMessageDpmClosePortOutput, self);
    }
}

struct message_close_port_context {
    QmiMessage *self;
    const gchar *line_prefix;
    GString *printable;
};

static void
message_close_port_get_tlv_printable (
    guint8 type,
    const guint8 *value,
    gsize length,
    struct message_close_port_context *ctx)
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
        case QMI_MESSAGE_DPM_CLOSE_PORT_OUTPUT_TLV_RESULT:
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
message_close_port_get_printable (
    QmiMessage *self,
    const gchar *line_prefix)
{
    GString *printable;

    printable = g_string_new ("");
    g_string_append_printf (printable,
                            "%s  message     = \"Close Port\" (0x0021)\n",
                            line_prefix);

    {
        struct message_close_port_context ctx;
        ctx.self = self;
        ctx.line_prefix = line_prefix;
        ctx.printable = printable;
        qmi_message_foreach_raw_tlv (self,
                                     (QmiMessageForeachRawTlvFn)message_close_port_get_tlv_printable,
                                     &ctx);
    }

    return g_string_free (printable, FALSE);
}

QmiMessageDpmClosePortOutput *
qmi_message_dpm_close_port_response_parse (
    QmiMessage *message,
    GError **error)
{
    QmiMessageDpmClosePortOutput *self;

    g_assert_cmphex (qmi_message_get_message_id (message), ==, QMI_MESSAGE_DPM_CLOSE_PORT);

    self = g_slice_new0 (QmiMessageDpmClosePortOutput);
    self->ref_count = 1;

    do {
        /* No Prerequisites for field */

        {
            gsize offset = 0;
            gsize init_offset;

            if ((init_offset = qmi_message_tlv_read_init (message, QMI_MESSAGE_DPM_CLOSE_PORT_OUTPUT_TLV_RESULT, NULL, error)) == 0) {
                g_prefix_error (error, "Couldn't get the mandatory Result TLV: ");
                qmi_message_dpm_close_port_output_unref (self);
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
                qmi_message_dpm_close_port_output_unref (self);
                return NULL;
            }

        }
    } while (0);

    return self;
}

/*****************************************************************************/
/* Service-specific utils: DPM */


gchar *
__qmi_message_dpm_get_printable (
    QmiMessage *self,
    QmiMessageContext *context,
    const gchar *line_prefix)
{
    if (qmi_message_is_indication (self)) {
        switch (qmi_message_get_message_id (self)) {
        default:
             return NULL;
        }
    } else {
        guint16 vendor_id;

        vendor_id = (context ? qmi_message_context_get_vendor_id (context) : QMI_MESSAGE_VENDOR_GENERIC);
        if (vendor_id == QMI_MESSAGE_VENDOR_GENERIC) {
            switch (qmi_message_get_message_id (self)) {
            case QMI_MESSAGE_DPM_OPEN_PORT:
                return message_open_port_get_printable (self, line_prefix);
            case QMI_MESSAGE_DPM_CLOSE_PORT:
                return message_close_port_get_printable (self, line_prefix);
             default:
                 return NULL;
            }
        } else {
            return NULL;
        }
    }
}

/*****************************************************************************/
/* CLIENT: QMI Client DPM */

G_DEFINE_TYPE (QmiClientDpm, qmi_client_dpm, QMI_TYPE_CLIENT)

static void
process_indication (QmiClient *self,
                    QmiMessage *message)
{
    switch (qmi_message_get_message_id (message)) {
        default:
            break;
    }
}

static void
qmi_client_dpm_init (QmiClientDpm *self)
{
}

static void
qmi_client_dpm_class_init (QmiClientDpmClass *klass)
{
    QmiClientClass *client_class = QMI_CLIENT_CLASS (klass);

    client_class->process_indication = process_indication;
}


QmiMessageDpmOpenPortOutput *
qmi_client_dpm_open_port_finish (
    QmiClientDpm *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
open_port_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageDpmOpenPortOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_dpm_open_port_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_dpm_open_port_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_dpm_open_port (
    QmiClientDpm *self,
    QmiMessageDpmOpenPortInput *input,
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

    request = __qmi_message_dpm_open_port_request_create (
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
                             (GAsyncReadyCallback)open_port_ready,
                             task);
}


QmiMessageDpmClosePortOutput *
qmi_client_dpm_close_port_finish (
    QmiClientDpm *self,
    GAsyncResult *res,
    GError **error)
{
   return g_task_propagate_pointer (G_TASK (res), error);
}

static void
close_port_ready (
    QmiDevice *device,
    GAsyncResult *res,
    GTask *task)
{
    GError *error = NULL;
    QmiMessage *reply;
    QmiMessageDpmClosePortOutput *output;

    reply = qmi_device_command_full_finish (device, res, &error);
    if (!reply) {
        g_task_return_error (task, error);
        g_object_unref (task);
        return;
    }

    /* Parse reply */
    output = qmi_message_dpm_close_port_response_parse (reply, &error);
    if (!output)
        g_task_return_error (task, error);
    else
        g_task_return_pointer (task,
                               output,
                               (GDestroyNotify)qmi_message_dpm_close_port_output_unref);
    g_object_unref (task);
    qmi_message_unref (reply);
}

void
qmi_client_dpm_close_port (
    QmiClientDpm *self,
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

    request = __qmi_message_dpm_close_port_request_create (
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
                             (GAsyncReadyCallback)close_port_ready,
                             task);
}

