#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"

namespace java { namespace math { class BigInteger; } }

namespace javax {
namespace crypto {
namespace spec {
class DHParameterSpec : public virtual ::java::lang::Object,
                        public virtual ::java::security::spec::AlgorithmParameterSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DHParameterSpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::AlgorithmParameterSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DHParameterSpec(const ::javax::crypto::spec::DHParameterSpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj;}
    DHParameterSpec(::javax::crypto::spec::DHParameterSpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::DHParameterSpec& operator=(const ::javax::crypto::spec::DHParameterSpec& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::DHParameterSpec& operator=(::javax::crypto::spec::DHParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    
    DHParameterSpec(const ::java::math::BigInteger&, const ::java::math::BigInteger&);
    DHParameterSpec(const ::java::math::BigInteger&, const ::java::math::BigInteger&, int32_t);
    ::java::math::BigInteger getP() const;
    ::java::math::BigInteger getG() const;
    int32_t getL() const;

};
}
}
}


