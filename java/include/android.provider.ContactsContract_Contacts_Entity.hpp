#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.ContactsContract_BaseSyncColumns.hpp"
#include "android.provider.ContactsContract_ContactNameColumns.hpp"
#include "android.provider.ContactsContract_ContactOptionsColumns.hpp"
#include "android.provider.ContactsContract_ContactStatusColumns.hpp"
#include "android.provider.ContactsContract_ContactsColumns.hpp"
#include "android.provider.ContactsContract_DataColumns.hpp"
#include "android.provider.ContactsContract_RawContactsColumns.hpp"
#include "android.provider.ContactsContract_StatusColumns.hpp"
#include "android.provider.ContactsContract_SyncColumns.hpp"


namespace android {
namespace provider {
class ContactsContract_Contacts_Entity : public virtual ::java::lang::Object,
                                         public virtual ::android::provider::BaseColumns,
                                         public virtual ::android::provider::ContactsContract_BaseSyncColumns,
                                         public virtual ::android::provider::ContactsContract_ContactNameColumns,
                                         public virtual ::android::provider::ContactsContract_ContactOptionsColumns,
                                         public virtual ::android::provider::ContactsContract_ContactStatusColumns,
                                         public virtual ::android::provider::ContactsContract_ContactsColumns,
                                         public virtual ::android::provider::ContactsContract_DataColumns,
                                         public virtual ::android::provider::ContactsContract_RawContactsColumns,
                                         public virtual ::android::provider::ContactsContract_StatusColumns,
                                         public virtual ::android::provider::ContactsContract_SyncColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_Contacts_Entity(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::ContactsContract_BaseSyncColumns(_obj), ::android::provider::ContactsContract_ContactNameColumns(_obj), ::android::provider::ContactsContract_ContactOptionsColumns(_obj), ::android::provider::ContactsContract_ContactStatusColumns(_obj), ::android::provider::ContactsContract_ContactsColumns(_obj), ::android::provider::ContactsContract_DataColumns(_obj), ::android::provider::ContactsContract_RawContactsColumns(_obj), ::android::provider::ContactsContract_StatusColumns(_obj), ::android::provider::ContactsContract_SyncColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_Contacts_Entity(const ::android::provider::ContactsContract_Contacts_Entity& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_BaseSyncColumns((jobject)0), ::android::provider::ContactsContract_ContactNameColumns((jobject)0), ::android::provider::ContactsContract_ContactOptionsColumns((jobject)0), ::android::provider::ContactsContract_ContactStatusColumns((jobject)0), ::android::provider::ContactsContract_ContactsColumns((jobject)0), ::android::provider::ContactsContract_DataColumns((jobject)0), ::android::provider::ContactsContract_RawContactsColumns((jobject)0), ::android::provider::ContactsContract_StatusColumns((jobject)0), ::android::provider::ContactsContract_SyncColumns((jobject)0) {obj = x.obj;}
    ContactsContract_Contacts_Entity(::android::provider::ContactsContract_Contacts_Entity&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_BaseSyncColumns((jobject)0), ::android::provider::ContactsContract_ContactNameColumns((jobject)0), ::android::provider::ContactsContract_ContactOptionsColumns((jobject)0), ::android::provider::ContactsContract_ContactStatusColumns((jobject)0), ::android::provider::ContactsContract_ContactsColumns((jobject)0), ::android::provider::ContactsContract_DataColumns((jobject)0), ::android::provider::ContactsContract_RawContactsColumns((jobject)0), ::android::provider::ContactsContract_StatusColumns((jobject)0), ::android::provider::ContactsContract_SyncColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_Contacts_Entity& operator=(const ::android::provider::ContactsContract_Contacts_Entity& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_Contacts_Entity& operator=(::android::provider::ContactsContract_Contacts_Entity&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


