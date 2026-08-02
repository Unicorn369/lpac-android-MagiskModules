/*
 * Copyright (C) 2020-2022 Jolla Ltd.
 * Copyright (C) 2020-2022 Slava Monich <slava.monich@jolla.com>
 * Copyright (C) 2026 Jolla Mobile Ltd
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
 *   3. Neither the names of the copyright holders nor the names of its
 *      contributors may be used to endorse or promote products derived
 *      from this software without specific prior written permission.
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

#ifndef GBINDER_SERVICEMANAGER_AIDL_H
#define GBINDER_SERVICEMANAGER_AIDL_H

#include "gbinder_servicemanager_p.h"

typedef struct gbinder_servicemanager_aidl_priv GBinderServiceManagerAidlPriv;
typedef struct gbinder_servicemanager_aidl {
    GBinderServiceManager manager;
    GBinderServiceManagerAidlPriv* priv;
} GBinderServiceManagerAidl;

typedef struct gbinder_servicemanager_aidl_class {
    GBinderServiceManagerClass parent;

    /* Google devs feel free to insert new IServiceManager methods in
     * the middle (probably just because it looks nice) which shifts
     * the transaction codes and makes this headache for us. */
    guint32 check_service_transaction;
    guint32 add_service_transaction;
    guint32 list_services_transaction;
    guint32 register_for_notifications_transaction;
    guint32 unregister_for_notifications_transaction;

    GBinderLocalRequest* (*list_services_req)
        (GBinderClient* client, gint32 index);
    GBinderLocalRequest* (*add_service_req)
        (GBinderClient* client, const char* name, GBinderLocalObject* obj);
} GBinderServiceManagerAidlClass;

#define GBINDER_TYPE_SERVICEMANAGER_AIDL \
    gbinder_servicemanager_aidl_get_type()
#define GBINDER_SERVICEMANAGER_AIDL_GET_CLASS(obj) \
    G_TYPE_INSTANCE_GET_CLASS((obj), GBINDER_TYPE_SERVICEMANAGER_AIDL, \
    GBinderServiceManagerAidlClass)

#define GBINDER_TYPE_SERVICEMANAGER_AIDL2 \
    gbinder_servicemanager_aidl2_get_type()
#define GBINDER_TYPE_SERVICEMANAGER_AIDL3 \
    gbinder_servicemanager_aidl3_get_type()
/* AIDL4 is missing for historical reasons */
#define GBINDER_TYPE_SERVICEMANAGER_AIDL5 \
    gbinder_servicemanager_aidl5_get_type()

#define DUMP_FLAG_PRIORITY_DEFAULT (0x08)
#define DUMP_FLAG_PRIORITY_ALL     (0x0f)

#endif /* GBINDER_SERVICEMANAGER_AIDL_H */

/*
 * Local Variables:
 * mode: C
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 */

