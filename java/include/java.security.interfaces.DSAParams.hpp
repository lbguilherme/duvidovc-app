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
class DSAParams : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DSAParams(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DSAParams(const ::java::security::interfaces::DSAParams& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DSAParams(::java::security::interfaces::DSAParams&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::interfaces::DSAParams& operator=(const ::java::security::interfaces::DSAParams& x) {obj = x.obj; return *this;}
    ::java::security::interfaces::DSAParams& operator=(::java::security::interfaces::DSAParams&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::math::BigInteger getG() const;
    ::java::math::BigInteger getP() const;
    ::java::math::BigInteger getQ() const;

};
}
}
}


