/*
 * Copyright (C) 2017 Jolla Ltd.
 * Contact: Slava Monich <slava.monich@jolla.com>
 *
 * You may use this file under the terms of BSD license as follows:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   1. Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *   3. Neither the name of Jolla Ltd nor the names of its contributors may
 *      be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef GUTIL_IDLEQUEUE_H
#define GUTIL_IDLEQUEUE_H

#include "gutil_types.h"

G_BEGIN_DECLS

/*
 * GUtilIdleQueue allows to queue idle callbacks, tag them, cancel
 * individual callbacks or all of them.
 */

typedef gsize GUtilIdleQueueTag;

typedef
void
(*GUtilIdleFunc)(
    gpointer data);

GUtilIdleQueue*
gutil_idle_queue_new(void);

void
gutil_idle_queue_free(
    GUtilIdleQueue* queue);

GUtilIdleQueue*
gutil_idle_queue_ref(
    GUtilIdleQueue* queue);

void
gutil_idle_queue_unref(
    GUtilIdleQueue* queue);

void
gutil_idle_queue_add(
    GUtilIdleQueue* queue,
    GUtilIdleFunc run,
    gpointer data);

void
gutil_idle_queue_add_full(
    GUtilIdleQueue* queue,
    GUtilIdleFunc run,
    gpointer data,
    GFreeFunc free);

void
gutil_idle_queue_add_tag(
    GUtilIdleQueue* queue,
    GUtilIdleQueueTag tag,
    GUtilIdleFunc run,
    gpointer data);

void
gutil_idle_queue_add_tag_full(
    GUtilIdleQueue* queue,
    GUtilIdleQueueTag tag,
    GUtilIdleFunc run,
    gpointer data,
    GFreeFunc free);

gboolean
gutil_idle_queue_contains_tag(
    GUtilIdleQueue* queue,
    GUtilIdleQueueTag tag);

gboolean
gutil_idle_queue_cancel_tag(
    GUtilIdleQueue* queue,
    GUtilIdleQueueTag tag);

void
gutil_idle_queue_cancel_all(
    GUtilIdleQueue* queue);

G_END_DECLS

#endif /* GUTIL_IDLEQUEUE_H */

/*
 * Local Variables:
 * mode: C
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 */
