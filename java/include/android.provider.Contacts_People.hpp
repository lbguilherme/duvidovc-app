#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.Contacts_PeopleColumns.hpp"
#include "android.provider.Contacts_PhonesColumns.hpp"
#include "android.provider.Contacts_PresenceColumns.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class ContentValues; } }
namespace android { namespace content { class Context; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class BitmapFactory_Options; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class Contacts_People : public virtual ::java::lang::Object,
                        public virtual ::android::provider::BaseColumns,
                        public virtual ::android::provider::Contacts_PeopleColumns,
                        public virtual ::android::provider::Contacts_PhonesColumns,
                        public virtual ::android::provider::Contacts_PresenceColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Contacts_People(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::Contacts_PeopleColumns(_obj), ::android::provider::Contacts_PhonesColumns(_obj), ::android::provider::Contacts_PresenceColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Contacts_People(const ::android::provider::Contacts_People& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Contacts_PeopleColumns((jobject)0), ::android::provider::Contacts_PhonesColumns((jobject)0), ::android::provider::Contacts_PresenceColumns((jobject)0) {obj = x.obj;}
    Contacts_People(::android::provider::Contacts_People&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Contacts_PeopleColumns((jobject)0), ::android::provider::Contacts_PhonesColumns((jobject)0), ::android::provider::Contacts_PresenceColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Contacts_People& operator=(const ::android::provider::Contacts_People& x) {obj = x.obj; return *this;}
    ::android::provider::Contacts_People& operator=(::android::provider::Contacts_People&& x) {obj = std::move(x.obj); return *this;}
    
    static void markAsContacted(const ::android::content::ContentResolver&, int64_t);
    static ::android::net::Uri addToMyContactsGroup(const ::android::content::ContentResolver&, int64_t);
    static ::android::net::Uri addToGroup(const ::android::content::ContentResolver&, int64_t, const ::java::lang::String&);
    static ::android::net::Uri addToGroup(const ::android::content::ContentResolver&, int64_t, int64_t);
    static ::android::net::Uri createPersonInMyContactsGroup(const ::android::content::ContentResolver&, const ::android::content::ContentValues&);
    static ::android::database::Cursor queryGroups(const ::android::content::ContentResolver&, int64_t);
    static void setPhotoData(const ::android::content::ContentResolver&, const ::android::net::Uri&, const std::vector< int8_t>&);
    static ::java::io::InputStream openContactPhotoInputStream(const ::android::content::ContentResolver&, const ::android::net::Uri&);
    static ::android::graphics::Bitmap loadContactPhoto(const ::android::content::Context&, const ::android::net::Uri&, int32_t, const ::android::graphics::BitmapFactory_Options&);

};
}
}

#include "android.provider.Contacts_People_ContactMethods.hpp"
#include "android.provider.Contacts_People_Extensions.hpp"
#include "android.provider.Contacts_People_Phones.hpp"

