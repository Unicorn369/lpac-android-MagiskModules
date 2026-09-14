/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/* SPDX-License-Identifier: LGPL-2.1-or-later */
/*
 * libqrtr-glib -- GLib/GIO based library to control QRTR devices
 *
 * Copyright (C) 2021 Andrew Lassalle <andrewlassalle@chromium.org>
 */

#ifndef _LIBQRTR_GLIB_QRTR_TYPES_H_
#define _LIBQRTR_GLIB_QRTR_TYPES_H_

#if !defined (__LIBQRTR_GLIB_H_INSIDE__) && !defined (LIBQRTR_GLIB_COMPILATION)
#error "Only <libqrtr-glib.h> can be included directly."
#endif

G_BEGIN_DECLS

typedef struct _QrtrBus         QrtrBus;
typedef struct _QrtrClient      QrtrClient;
typedef struct _QrtrNode        QrtrNode;

G_END_DECLS

#endif /* _LIBQRTR_GLIB_QRTR_TYPES_H_ */
