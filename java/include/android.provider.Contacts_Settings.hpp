#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.Contacts_SettingsColumns.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class Contacts_Settings : public virtual ::java::lang::Object,
                          public virtual ::android::provider::BaseColumns,
                          public virtual ::android::provider::Contacts_SettingsColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Contacts_Settings(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::Contacts_SettingsColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Contacts_Settings(const ::android::provider::Contacts_Settings& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Contacts_SettingsColumns((jobject)0) {obj = x.obj;}
    Contacts_Settings(::android::provider::Contacts_Settings&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::Contacts_SettingsColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Contacts_Settings& operator=(const ::android::provider::Contacts_Settings& x) {obj = x.obj; return *this;}
    ::android::provider::Contacts_Settings& operator=(::android::provider::Contacts_Settings&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String getSetting(const ::android::content::ContentResolver&, const ::java::lang::String&, const ::java::lang::String&);
    static void setSetting(const ::android::content::ContentResolver&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);

};
}
}


