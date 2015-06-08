#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.interfaces.DSAParams.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"

namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace spec {
class DSAParameterSpec : public virtual ::java::lang::Object,
                         public virtual ::java::security::interfaces::DSAParams,
                         public virtual ::java::security::spec::AlgorithmParameterSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DSAParameterSpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::interfaces::DSAParams(_obj), ::java::security::spec::AlgorithmParameterSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DSAParameterSpec(const ::java::security::spec::DSAParameterSpec& x) : ::java::lang::Object((jobject)0), ::java::security::interfaces::DSAParams((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj;}
    DSAParameterSpec(::java::security::spec::DSAParameterSpec&& x) : ::java::lang::Object((jobject)0), ::java::security::interfaces::DSAParams((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::DSAParameterSpec& operator=(const ::java::security::spec::DSAParameterSpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::DSAParameterSpec& operator=(::java::security::spec::DSAParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    
    DSAParameterSpec(const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&);
    ::java::math::BigInteger getG() const;
    ::java::math::BigInteger getP() const;
    ::java::math::BigInteger getQ() const;

};
}
}
}


