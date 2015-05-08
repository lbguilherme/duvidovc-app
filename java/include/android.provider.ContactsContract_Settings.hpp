#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.ContactsContract_SettingsColumns.hpp"


namespace android {
namespace provider {
class ContactsContract_Settings : public virtual ::java::lang::Object,
                                  public virtual ::android::provider::ContactsContract_SettingsColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_Settings(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::ContactsContract_SettingsColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_Settings(const ::android::provider::ContactsContract_Settings& x) : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_SettingsColumns((jobject)0) {obj = x.obj;}
    ContactsContract_Settings(::android::provider::ContactsContract_Settings&& x) : ::java::lang::Object((jobject)0), ::android::provider::ContactsContract_SettingsColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_Settings& operator=(const ::android::provider::ContactsContract_Settings& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_Settings& operator=(::android::provider::ContactsContract_Settings&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


