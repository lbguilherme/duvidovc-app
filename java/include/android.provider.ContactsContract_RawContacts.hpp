#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.ContactsContract_ContactNameColumns.hpp"
#include "android.provider.ContactsContract_ContactOptionsColumns.hpp"
#include "android.provider.ContactsContract_RawContactsColumns.hpp"
#include "android.provider.ContactsContract_SyncColumns.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class EntityIterator; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace net { class Uri; } }

namespace android {
namespace provider {
class ContactsContract_RawContacts : public virtual ::java::lang::Object,
                                     public virtual ::android::provider::BaseColumns,
                                     public virtual ::android::provider::ContactsContract_ContactNameColumns,
                                     public virtual ::android::provider::ContactsContract_ContactOptionsColumns,
                                     public virtual ::android::provider::ContactsContract_RawContactsColumns,
                                     public virtual ::android::provider::ContactsContract_SyncColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_RawContacts(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::ContactsContract_BaseSyncColumns(_obj), ::android::provider::ContactsContract_ContactNameColumns(_obj), ::android::provider::ContactsContract_ContactOptionsColumns(_obj), ::android::provider::ContactsContract_RawContactsColumns(_obj), ::android::provider::ContactsContract_SyncColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_RawContacts(const ::android::provider::ContactsContract_RawContacts& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_BaseSyncColumns((jobject)0), ::android::provider::ContactsContract_ContactNameColumns((jobject)0), ::android::provider::ContactsContract_ContactOptionsColumns((jobject)0), ::android::provider::ContactsContract_RawContactsColumns((jobject)0), ::android::provider::ContactsContract_SyncColumns((jobject)0) {obj = x.obj;}
    ContactsContract_RawContacts(::android::provider::ContactsContract_RawContacts&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_BaseSyncColumns((jobject)0), ::android::provider::ContactsContract_ContactNameColumns((jobject)0), ::android::provider::ContactsContract_ContactOptionsColumns((jobject)0), ::android::provider::ContactsContract_RawContactsColumns((jobject)0), ::android::provider::ContactsContract_SyncColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_RawContacts& operator=(const ::android::provider::ContactsContract_RawContacts& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_RawContacts& operator=(::android::provider::ContactsContract_RawContacts&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::net::Uri getContactLookupUri(const ::android::content::ContentResolver&, const ::android::net::Uri&);
    static ::android::content::EntityIterator newEntityIterator(const ::android::database::Cursor&);

};
}
}

#include "android.provider.ContactsContract_RawContacts_Data.hpp"
#include "android.provider.ContactsContract_RawContacts_DisplayPhoto.hpp"
#include "android.provider.ContactsContract_RawContacts_Entity.hpp"
#include "android.provider.ContactsContract_RawContacts_StreamItems.hpp"

