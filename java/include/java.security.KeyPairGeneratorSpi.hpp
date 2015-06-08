#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace security { class KeyPair; } }
namespace java { namespace security { class SecureRandom; } }
namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } }

namespace java {
namespace security {
class KeyPairGeneratorSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyPairGeneratorSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyPairGeneratorSpi(const ::java::security::KeyPairGeneratorSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyPairGeneratorSpi(::java::security::KeyPairGeneratorSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyPairGeneratorSpi& operator=(const ::java::security::KeyPairGeneratorSpi& x) {obj = x.obj; return *this;}
    ::java::security::KeyPairGeneratorSpi& operator=(::java::security::KeyPairGeneratorSpi&& x) {obj = std::move(x.obj); return *this;}
    
    KeyPairGeneratorSpi();
    ::java::security::KeyPair generateKeyPair() const;
    void initialize(int32_t, const ::java::security::SecureRandom&) const;
    void initialize(const ::java::security::spec::AlgorithmParameterSpec&, const ::java::security::SecureRandom&) const;

};
}
}


