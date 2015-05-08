#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class ContactsContract_RawContactsColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_RawContactsColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_RawContactsColumns(const ::android::provider::ContactsContract_RawContactsColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContactsContract_RawContactsColumns(::android::provider::ContactsContract_RawContactsColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_RawContactsColumns& operator=(const ::android::provider::ContactsContract_RawContactsColumns& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_RawContactsColumns& operator=(::android::provider::ContactsContract_RawContactsColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


