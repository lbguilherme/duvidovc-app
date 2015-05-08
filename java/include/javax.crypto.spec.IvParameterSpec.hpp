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
class IvParameterSpec : public virtual ::java::lang::Object,
                        public virtual ::java::security::spec::AlgorithmParameterSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IvParameterSpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::AlgorithmParameterSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IvParameterSpec(const ::javax::crypto::spec::IvParameterSpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj;}
    IvParameterSpec(::javax::crypto::spec::IvParameterSpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::IvParameterSpec& operator=(const ::javax::crypto::spec::IvParameterSpec& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::IvParameterSpec& operator=(::javax::crypto::spec::IvParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    
    IvParameterSpec(const std::vector< int8_t>&);
    IvParameterSpec(const std::vector< int8_t>&, int32_t, int32_t);
    std::vector< int8_t> getIV() const ;

};
}
}
}


