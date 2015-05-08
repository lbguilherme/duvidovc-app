#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class ContactsContract_CommonDataKinds_BaseTypes : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_CommonDataKinds_BaseTypes(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_CommonDataKinds_BaseTypes(const ::android::provider::ContactsContract_CommonDataKinds_BaseTypes& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContactsContract_CommonDataKinds_BaseTypes(::android::provider::ContactsContract_CommonDataKinds_BaseTypes&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_CommonDataKinds_BaseTypes& operator=(const ::android::provider::ContactsContract_CommonDataKinds_BaseTypes& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_CommonDataKinds_BaseTypes& operator=(::android::provider::ContactsContract_CommonDataKinds_BaseTypes&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


