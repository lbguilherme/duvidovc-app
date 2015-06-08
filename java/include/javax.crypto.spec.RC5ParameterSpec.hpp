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
class RC5ParameterSpec : public virtual ::java::lang::Object,
                         public virtual ::java::security::spec::AlgorithmParameterSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RC5ParameterSpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::AlgorithmParameterSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RC5ParameterSpec(const ::javax::crypto::spec::RC5ParameterSpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj;}
    RC5ParameterSpec(::javax::crypto::spec::RC5ParameterSpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::RC5ParameterSpec& operator=(const ::javax::crypto::spec::RC5ParameterSpec& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::RC5ParameterSpec& operator=(::javax::crypto::spec::RC5ParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    
    RC5ParameterSpec(int32_t, int32_t, int32_t);
    RC5ParameterSpec(int32_t, int32_t, int32_t, const std::vector< int8_t>&);
    RC5ParameterSpec(int32_t, int32_t, int32_t, const std::vector< int8_t>&, int32_t);
    int32_t getVersion() const;
    int32_t getRounds() const;
    int32_t getWordSize() const;
    std::vector< int8_t> getIV() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;

};
}
}
}


