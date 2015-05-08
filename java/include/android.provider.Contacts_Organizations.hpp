#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.Contacts_OrganizationColumns.hpp"

namespace android { namespace content { class Context; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace provider {
class Contacts_Organizations : public virtual ::java::lang::Object,
                               public virtual ::android::provider::BaseColumns,
                               public virtual ::android::provider::Contacts_OrganizationColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Contacts_Organizations(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::Contacts_OrganizationColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Contacts_Organizations(const ::android::provider::Contacts_Organizations& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Contacts_OrganizationColumns((jobject)0) {obj = x.obj;}
    Contacts_Organizations(::android::provider::Contacts_Organizations&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Contacts_OrganizationColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Contacts_Organizations& operator=(const ::android::provider::Contacts_Organizations& x) {obj = x.obj; return *this;}
    ::android::provider::Contacts_Organizations& operator=(::android::provider::Contacts_Organizations&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::CharSequence getDisplayLabel(const ::android::content::Context&, int32_t, const ::java::lang::CharSequence&);

};
}
}


