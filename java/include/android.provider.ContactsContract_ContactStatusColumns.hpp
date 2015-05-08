#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class ContactsContract_ContactStatusColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_ContactStatusColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_ContactStatusColumns(const ::android::provider::ContactsContract_ContactStatusColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContactsContract_ContactStatusColumns(::android::provider::ContactsContract_ContactStatusColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_ContactStatusColumns& operator=(const ::android::provider::ContactsContract_ContactStatusColumns& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_ContactStatusColumns& operator=(::android::provider::ContactsContract_ContactStatusColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


