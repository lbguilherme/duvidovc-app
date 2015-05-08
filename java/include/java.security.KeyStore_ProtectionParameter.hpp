#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace security {
class KeyStore_ProtectionParameter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyStore_ProtectionParameter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyStore_ProtectionParameter(const ::java::security::KeyStore_ProtectionParameter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyStore_ProtectionParameter(::java::security::KeyStore_ProtectionParameter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyStore_ProtectionParameter& operator=(const ::java::security::KeyStore_ProtectionParameter& x) {obj = x.obj; return *this;}
    ::java::security::KeyStore_ProtectionParameter& operator=(::java::security::KeyStore_ProtectionParameter&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


