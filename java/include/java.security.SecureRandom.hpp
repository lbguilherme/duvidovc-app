#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Random.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { class SecureRandom; } }

namespace java {
namespace security {
class SecureRandom : public virtual ::java::lang::Object,
                     public virtual ::java::util::Random {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SecureRandom(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::util::Random(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SecureRandom(const ::java::security::SecureRandom& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Random((jobject)0) {obj = x.obj;}
    SecureRandom(::java::security::SecureRandom&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Random((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::SecureRandom& operator=(const ::java::security::SecureRandom& x) {obj = x.obj; return *this;}
    ::java::security::SecureRandom& operator=(::java::security::SecureRandom&& x) {obj = std::move(x.obj); return *this;}
    
    SecureRandom();
    SecureRandom(const std::vector< int8_t>&);
    static ::java::security::SecureRandom getInstance(const ::java::lang::String&);
    static ::java::security::SecureRandom getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::security::SecureRandom getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::security::Provider getProvider() const ;
    ::java::lang::String getAlgorithm() const ;
    void setSeed(const std::vector< int8_t>&) const ;
    void setSeed(int64_t) const ;
    void nextBytes(const std::vector< int8_t>&) const ;
    static std::vector< int8_t> getSeed(int32_t);
    std::vector< int8_t> generateSeed(int32_t) const ;

};
}
}


