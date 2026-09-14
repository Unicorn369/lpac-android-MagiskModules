/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/* SPDX-License-Identifier: LGPL-2.1-or-later */
/*
 * libqrtr-glib -- GLib/GIO based library to control QRTR devices
 *
 * Copyright (C) 2019-2020 Eric Caruso <ejcaruso@chromium.org>
 * Copyright (C) 2020 Aleksander Morgado <aleksander@aleksander.es>
 */

#ifndef _LIBQRTR_GLIB_QRTR_UTILS_H_
#define _LIBQRTR_GLIB_QRTR_UTILS_H_

#include <gio/gio.h>
#include <glib.h>

#include "qrtr-types.h"

/**
 * SECTION:qrtr-utils
 * @title: QRTR utilities
 * @short_description: Utilities in the library.
 *
 * Common utilities in the libqrtr-glib library.
 */

/**
 * qrtr_get_uri_for_node:
 * @node_id: node id.
 *
 * Build a URI for the given QRTR node.
 *
 * Returns: a string with the URI, or %NULL if none given. The returned value
 *  should be freed with g_free().
 *
 * Since: 1.0
 */
gchar *qrtr_get_uri_for_node (guint32 node_id);

/**
 * qrtr_get_node_for_uri:
 * @uri: a URI.
 * @node_id: (out): return location for the node id.
 *
 * Get the QRTR node id from the specified URI.
 *
 * Returns: %TRUE if @node_id is set, %FALSE otherwise.
 *
 * Since: 1.0
 */
gboolean qrtr_get_node_for_uri (const gchar *uri,
                                guint32     *node_id);

#endif /* _LIBQRTR_GLIB_QRTR_UTILS_H_ */
