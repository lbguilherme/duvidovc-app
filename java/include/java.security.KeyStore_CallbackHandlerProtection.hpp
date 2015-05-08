#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.KeyStore_ProtectionParameter.hpp"

namespace javax { namespace security { namespace auth { namespace callback { class CallbackHandler; } } } }

namespace java {
namespace security {
class KeyStore_CallbackHandlerProtection : public virtual ::java::lang::Object,
                                           public virtual ::java::security::KeyStore_ProtectionParameter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyStore_CallbackHandlerProtection(jobject _obj) : ::java::lang::Object(_obj), ::java::security::KeyStore_ProtectionParameter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyStore_CallbackHandlerProtection(const ::java::security::KeyStore_CallbackHandlerProtection& x) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_ProtectionParameter((jobject)0) {obj = x.obj;}
    KeyStore_CallbackHandlerProtection(::java::security::KeyStore_CallbackHandlerProtection&& x) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_ProtectionParameter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyStore_CallbackHandlerProtection& operator=(const ::java::security::KeyStore_CallbackHandlerProtection& x) {obj = x.obj; return *this;}
    ::java::security::KeyStore_CallbackHandlerProtection& operator=(::java::security::KeyStore_CallbackHandlerProtection&& x) {obj = std::move(x.obj); return *this;}
    
    KeyStore_CallbackHandlerProtection(const ::javax::security::auth::callback::CallbackHandler&);
    ::javax::security::auth::callback::CallbackHandler getCallbackHandler() const ;

};
}
}


