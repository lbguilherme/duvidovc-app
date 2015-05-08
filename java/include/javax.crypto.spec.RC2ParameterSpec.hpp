#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"

namespace java { namespace lang { class Object; } }

namespace javax {
namespace crypto {
namespace spec {
class RC2ParameterSpec : public virtual ::java::lang::Object,
                         public virtual ::java::security::spec::AlgorithmParameterSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RC2ParameterSpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::AlgorithmParameterSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RC2ParameterSpec(const ::javax::crypto::spec::RC2ParameterSpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj;}
    RC2ParameterSpec(::javax::crypto::spec::RC2ParameterSpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::RC2ParameterSpec& operator=(const ::javax::crypto::spec::RC2ParameterSpec& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::RC2ParameterSpec& operator=(::javax::crypto::spec::RC2ParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    
    RC2ParameterSpec(int32_t);
    RC2ParameterSpec(int32_t, const std::vector< int8_t>&);
    RC2ParameterSpec(int32_t, const std::vector< int8_t>&, int32_t);
    int32_t getEffectiveKeyBits() const ;
    std::vector< int8_t> getIV() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;

};
}
}
}


