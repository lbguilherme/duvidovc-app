#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class ContactsContract_Intents : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContactsContract_Intents(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContactsContract_Intents(const ::android::provider::ContactsContract_Intents& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContactsContract_Intents(::android::provider::ContactsContract_Intents&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::ContactsContract_Intents& operator=(const ::android::provider::ContactsContract_Intents& x) {obj = x.obj; return *this;}
    ::android::provider::ContactsContract_Intents& operator=(::android::provider::ContactsContract_Intents&& x) {obj = std::move(x.obj); return *this;}
    
    ContactsContract_Intents();

};
}
}

#include "android.provider.ContactsContract_Intents_Insert.hpp"

