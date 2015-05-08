#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class Contacts_SettingsColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Contacts_SettingsColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Contacts_SettingsColumns(const ::android::provider::Contacts_SettingsColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Contacts_SettingsColumns(::android::provider::Contacts_SettingsColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Contacts_SettingsColumns& operator=(const ::android::provider::Contacts_SettingsColumns& x) {obj = x.obj; return *this;}
    ::android::provider::Contacts_SettingsColumns& operator=(::android::provider::Contacts_SettingsColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


