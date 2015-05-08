#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class Contacts_Intents_UI : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Contacts_Intents_UI(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Contacts_Intents_UI(const ::android::provider::Contacts_Intents_UI& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Contacts_Intents_UI(::android::provider::Contacts_Intents_UI&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Contacts_Intents_UI& operator=(const ::android::provider::Contacts_Intents_UI& x) {obj = x.obj; return *this;}
    ::android::provider::Contacts_Intents_UI& operator=(::android::provider::Contacts_Intents_UI&& x) {obj = std::move(x.obj); return *this;}
    
    Contacts_Intents_UI();

};
}
}


