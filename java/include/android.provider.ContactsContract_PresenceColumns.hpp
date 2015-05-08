#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class ContactsContract_PresenceColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_PresenceColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_PresenceColumns(const ::android::provider::ContactsContract_PresenceColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContactsContract_PresenceColumns(::android::provider::ContactsContract_PresenceColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_PresenceColumns& operator=(const ::android::provider::ContactsContract_PresenceColumns& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_PresenceColumns& operator=(::android::provider::ContactsContract_PresenceColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


