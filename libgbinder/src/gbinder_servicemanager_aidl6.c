/*
 * Copyright (C) 2021-2022 Jolla Ltd.
 * Copyright (C) 2021-2022 Slava Monich <slava.monich@jolla.com>
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

#include "gbinder_servicemanager_aidl.h"

/* Variant of AIDL servicemanager appeared in Android 16 (API level 36) */

typedef GBinderServiceManagerAidl GBinderServiceManagerAidl6;
typedef GBinderServiceManagerAidlClass GBinderServiceManagerAidl6Class;

G_DEFINE_TYPE(GBinderServiceManagerAidl6,
    gbinder_servicemanager_aidl6,
    GBINDER_TYPE_SERVICEMANAGER_AIDL5)

enum gbinder_servicemanager_aidl6_calls {
    AIDL6_GET_SERVICE_TRANSACTION = GBINDER_FIRST_CALL_TRANSACTION,
    AIDL6_GET_SERVICE2_TRANSACTION,
    AIDL6_CHECK_SERVICE_TRANSACTION,
    AIDL6_CHECK_SERVICE2_TRANSACTION,
    AIDL6_ADD_SERVICE_TRANSACTION,
    AIDL6_LIST_SERVICES_TRANSACTION,
    AIDL6_REGISTER_FOR_NOTIFICATIONS_TRANSACTION,
    AIDL6_UNREGISTER_FOR_NOTIFICATIONS_TRANSACTION
};

static
void
gbinder_servicemanager_aidl6_init(
    GBinderServiceManagerAidl6* self)
{
}

static
void
gbinder_servicemanager_aidl6_class_init(
    GBinderServiceManagerAidl6Class* klass)
{
    GBinderServiceManagerClass* manager = GBINDER_SERVICEMANAGER_CLASS(klass);

    gbinder_servicemanager_class_common_init(manager);
    klass->check_service_transaction = AIDL6_CHECK_SERVICE_TRANSACTION;
    klass->add_service_transaction = AIDL6_ADD_SERVICE_TRANSACTION;
    klass->list_services_transaction = AIDL6_LIST_SERVICES_TRANSACTION;
    klass->register_for_notifications_transaction =
        AIDL6_REGISTER_FOR_NOTIFICATIONS_TRANSACTION;
    klass->unregister_for_notifications_transaction =
        AIDL6_UNREGISTER_FOR_NOTIFICATIONS_TRANSACTION;
}

/*
 * Local Variables:
 * mode: C
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 */
