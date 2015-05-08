#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.KeyPairGeneratorSpi.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class KeyPair; } }
namespace java { namespace security { class KeyPairGenerator; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { class SecureRandom; } }
namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } }

namespace java {
namespace security {
class KeyPairGenerator : public virtual ::java::lang::Object,
                         public virtual ::java::security::KeyPairGeneratorSpi {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyPairGenerator(jobject _obj) : ::java::lang::Object(_obj), ::java::security::KeyPairGeneratorSpi(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyPairGenerator(const ::java::security::KeyPairGenerator& x) : ::java::lang::Object((jobject)0), ::java::security::KeyPairGeneratorSpi((jobject)0) {obj = x.obj;}
    KeyPairGenerator(::java::security::KeyPairGenerator&& x) : ::java::lang::Object((jobject)0), ::java::security::KeyPairGeneratorSpi((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyPairGenerator& operator=(const ::java::security::KeyPairGenerator& x) {obj = x.obj; return *this;}
    ::java::security::KeyPairGenerator& operator=(::java::security::KeyPairGenerator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAlgorithm() const ;
    static ::java::security::KeyPairGenerator getInstance(const ::java::lang::String&);
    static ::java::security::KeyPairGenerator getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::security::KeyPairGenerator getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::security::Provider getProvider() const ;
    void initialize(int32_t) const ;
    void initialize(const ::java::security::spec::AlgorithmParameterSpec&) const ;
    ::java::security::KeyPair genKeyPair() const ;
    ::java::security::KeyPair generateKeyPair() const ;
    void initialize(int32_t, const ::java::security::SecureRandom&) const ;
    void initialize(const ::java::security::spec::AlgorithmParameterSpec&, const ::java::security::SecureRandom&) const ;

};
}
}


