#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"


namespace javax {
namespace crypto {
namespace spec {
class PBEParameterSpec : public virtual ::java::lang::Object,
                         public virtual ::java::security::spec::AlgorithmParameterSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PBEParameterSpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::AlgorithmParameterSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PBEParameterSpec(const ::javax::crypto::spec::PBEParameterSpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj;}
    PBEParameterSpec(::javax::crypto::spec::PBEParameterSpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::PBEParameterSpec& operator=(const ::javax::crypto::spec::PBEParameterSpec& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::PBEParameterSpec& operator=(::javax::crypto::spec::PBEParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    
    PBEParameterSpec(const std::vector< int8_t>&, int32_t);
    std::vector< int8_t> getSalt() const;
    int32_t getIterationCount() const;

};
}
}
}


