/* -*- Mode: C; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */
/* SPDX-License-Identifier: LGPL-2.1-or-later */
/*
 * Copyright (C) 2021 Aleksander Morgado <aleksander@aleksander.es>
 */

#ifndef _QRTR_VERSION_H_
#define _QRTR_VERSION_H_

/**
 * SECTION:qrtr-version
 * @short_description: Version information in the API.
 *
 * This section defines types that are used to identify the libqrtr-glib version.
 **/

/**
 * QRTR_MAJOR_VERSION:
 *
 * Evaluates to the major version number of libqrtr-glib which this source
 * is compiled against.
 *
 * Since: 1.0
 */
#define QRTR_MAJOR_VERSION (1)

/**
 * QRTR_MINOR_VERSION:
 *
 * Evaluates to the minor version number of libqrtr-glib which this source
 * is compiled against.
 *
 * Since: 1.0
 */
#define QRTR_MINOR_VERSION (4)

/**
 * QRTR_MICRO_VERSION:
 *
 * Evaluates to the micro version number of libqrtr-glib which this source
 * compiled against.
 *
 * Since: 1.0
 */
#define QRTR_MICRO_VERSION (0)

/**
 * QRTR_CHECK_VERSION:
 * @major: major version (e.g. 1 for version 1.2.5)
 * @minor: minor version (e.g. 2 for version 1.2.5)
 * @micro: micro version (e.g. 5 for version 1.2.5)
 *
 * Checks the version of the libqrtr library that is being compiled against.
 *
 * Returns: %TRUE if the version of the libqrtr-glib header files
 * is the same as or newer than the passed-in version.
 *
 * Since: 1.0
 */
#define QRTR_CHECK_VERSION(major,minor,micro)                         \
    (QRTR_MAJOR_VERSION > (major) ||                                  \
     (QRTR_MAJOR_VERSION == (major) && QRTR_MINOR_VERSION > (minor)) || \
     (QRTR_MAJOR_VERSION == (major) && QRTR_MINOR_VERSION == (minor) && QRTR_MICRO_VERSION >= (micro)))

#endif /* _QRTR_VERSION_H_ */
