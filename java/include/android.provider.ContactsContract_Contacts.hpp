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
#include "android.provider.ContactsContract_ContactStatusColumns.hpp"
#include "android.provider.ContactsContract_ContactsColumns.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class ContactsContract_Contacts : public virtual ::java::lang::Object,
                                  public virtual ::android::provider::BaseColumns,
                                  public virtual ::android::provider::ContactsContract_ContactNameColumns,
                                  public virtual ::android::provider::ContactsContract_ContactOptionsColumns,
                                  public virtual ::android::provider::ContactsContract_ContactStatusColumns,
                                  public virtual ::android::provider::ContactsContract_ContactsColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_Contacts(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::ContactsContract_ContactNameColumns(_obj), ::android::provider::ContactsContract_ContactOptionsColumns(_obj), ::android::provider::ContactsContract_ContactStatusColumns(_obj), ::android::provider::ContactsContract_ContactsColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_Contacts(const ::android::provider::ContactsContract_Contacts& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_ContactNameColumns((jobject)0), ::android::provider::ContactsContract_ContactOptionsColumns((jobject)0), ::android::provider::ContactsContract_ContactStatusColumns((jobject)0), ::android::provider::ContactsContract_ContactsColumns((jobject)0) {obj = x.obj;}
    ContactsContract_Contacts(::android::provider::ContactsContract_Contacts&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::ContactsContract_ContactNameColumns((jobject)0), ::android::provider::ContactsContract_ContactOptionsColumns((jobject)0), ::android::provider::ContactsContract_ContactStatusColumns((jobject)0), ::android::provider::ContactsContract_ContactsColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_Contacts& operator=(const ::android::provider::ContactsContract_Contacts& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_Contacts& operator=(::android::provider::ContactsContract_Contacts&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::net::Uri getLookupUri(const ::android::content::ContentResolver&, const ::android::net::Uri&);
    static ::android::net::Uri getLookupUri(int64_t, const ::java::lang::String&);
    static ::android::net::Uri lookupContact(const ::android::content::ContentResolver&, const ::android::net::Uri&);
    static void markAsContacted(const ::android::content::ContentResolver&, int64_t);
    static ::java::io::InputStream openContactPhotoInputStream(const ::android::content::ContentResolver&, const ::android::net::Uri&, bool);
    static ::java::io::InputStream openContactPhotoInputStream(const ::android::content::ContentResolver&, const ::android::net::Uri&);

};
}
}

#include "android.provider.ContactsContract_Contacts_AggregationSuggestions.hpp"
#include "android.provider.ContactsContract_Contacts_Data.hpp"
#include "android.provider.ContactsContract_Contacts_Entity.hpp"
#include "android.provider.ContactsContract_Contacts_Photo.hpp"
#include "android.provider.ContactsContract_Contacts_StreamItems.hpp"

