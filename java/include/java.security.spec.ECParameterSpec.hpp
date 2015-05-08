#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"

namespace java { namespace math { class BigInteger; } }
namespace java { namespace security { namespace spec { class ECPoint; } } }
namespace java { namespace security { namespace spec { class EllipticCurve; } } }

namespace java {
namespace security {
namespace spec {
class ECParameterSpec : public virtual ::java::lang::Object,
                        public virtual ::java::security::spec::AlgorithmParameterSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ECParameterSpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::AlgorithmParameterSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ECParameterSpec(const ::java::security::spec::ECParameterSpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj;}
    ECParameterSpec(::java::security::spec::ECParameterSpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::ECParameterSpec& operator=(const ::java::security::spec::ECParameterSpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::ECParameterSpec& operator=(::java::security::spec::ECParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    
    ECParameterSpec(const ::java::security::spec::EllipticCurve&, const ::java::security::spec::ECPoint&, const ::java::math::BigInteger&, int32_t);
    int32_t getCofactor() const ;
    ::java::security::spec::EllipticCurve getCurve() const ;
    ::java::security::spec::ECPoint getGenerator() const ;
    ::java::math::BigInteger getOrder() const ;

};
}
}
}


