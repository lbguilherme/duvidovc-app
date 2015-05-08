#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace interfaces {
class RSAKey : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSAKey(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSAKey(const ::java::security::interfaces::RSAKey& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RSAKey(::java::security::interfaces::RSAKey&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::interfaces::RSAKey& operator=(const ::java::security::interfaces::RSAKey& x) {obj = x.obj; return *this;}
    ::java::security::interfaces::RSAKey& operator=(::java::security::interfaces::RSAKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::math::BigInteger getModulus() const ;

};
}
}
}


