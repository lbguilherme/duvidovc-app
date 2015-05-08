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

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace provider {
class Contacts_Phones : public virtual ::java::lang::Object,
                        public virtual ::android::provider::BaseColumns,
                        public virtual ::android::provider::Contacts_PeopleColumns,
                        public virtual ::android::provider::Contacts_PhonesColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Contacts_Phones(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::Contacts_PeopleColumns(_obj), ::android::provider::Contacts_PhonesColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Contacts_Phones(const ::android::provider::Contacts_Phones& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Contacts_PeopleColumns((jobject)0), ::android::provider::Contacts_PhonesColumns((jobject)0) {obj = x.obj;}
    Contacts_Phones(::android::provider::Contacts_Phones&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Contacts_PeopleColumns((jobject)0), ::android::provider::Contacts_PhonesColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Contacts_Phones& operator=(const ::android::provider::Contacts_Phones& x) {obj = x.obj; return *this;}
    ::android::provider::Contacts_Phones& operator=(::android::provider::Contacts_Phones&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::CharSequence getDisplayLabel(const ::android::content::Context&, int32_t, const ::java::lang::CharSequence&, const std::vector< ::java::lang::CharSequence>&);
    static ::java::lang::CharSequence getDisplayLabel(const ::android::content::Context&, int32_t, const ::java::lang::CharSequence&);

};
}
}


