#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { class SecureRandom; } }
namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } }
namespace javax { namespace crypto { class KeyGenerator; } }
namespace javax { namespace crypto { class SecretKey; } }

namespace javax {
namespace crypto {
class KeyGenerator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyGenerator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyGenerator(const ::javax::crypto::KeyGenerator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyGenerator(::javax::crypto::KeyGenerator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::KeyGenerator& operator=(const ::javax::crypto::KeyGenerator& x) {obj = x.obj; return *this;}
    ::javax::crypto::KeyGenerator& operator=(::javax::crypto::KeyGenerator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAlgorithm() const ;
    ::java::security::Provider getProvider() const ;
    static ::javax::crypto::KeyGenerator getInstance(const ::java::lang::String&);
    static ::javax::crypto::KeyGenerator getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::javax::crypto::KeyGenerator getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::javax::crypto::SecretKey generateKey() const ;
    void init(const ::java::security::spec::AlgorithmParameterSpec&) const ;
    void init(const ::java::security::spec::AlgorithmParameterSpec&, const ::java::security::SecureRandom&) const ;
    void init(int32_t) const ;
    void init(int32_t, const ::java::security::SecureRandom&) const ;
    void init(const ::java::security::SecureRandom&) const ;

};
}
}


