#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace security { class KeyStore_ProtectionParameter; } }

namespace java {
namespace security {
class KeyStore_LoadStoreParameter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyStore_LoadStoreParameter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyStore_LoadStoreParameter(const ::java::security::KeyStore_LoadStoreParameter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyStore_LoadStoreParameter(::java::security::KeyStore_LoadStoreParameter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyStore_LoadStoreParameter& operator=(const ::java::security::KeyStore_LoadStoreParameter& x) {obj = x.obj; return *this;}
    ::java::security::KeyStore_LoadStoreParameter& operator=(::java::security::KeyStore_LoadStoreParameter&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::security::KeyStore_ProtectionParameter getProtectionParameter() const ;

};
}
}


