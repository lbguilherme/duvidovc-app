#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class Contacts_Intents : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Contacts_Intents(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Contacts_Intents(const ::android::provider::Contacts_Intents& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Contacts_Intents(::android::provider::Contacts_Intents&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::Contacts_Intents& operator=(const ::android::provider::Contacts_Intents& x) {obj = x.obj; return *this;}
    ::android::provider::Contacts_Intents& operator=(::android::provider::Contacts_Intents&& x) {obj = std::move(x.obj); return *this;}
    
    Contacts_Intents();

};
}
}

#include "android.provider.Contacts_Intents_Insert.hpp"
#include "android.provider.Contacts_Intents_UI.hpp"

