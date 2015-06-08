#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } }

namespace java {
namespace security {
namespace spec {
class PSSParameterSpec : public virtual ::java::lang::Object,
                         public virtual ::java::security::spec::AlgorithmParameterSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PSSParameterSpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::AlgorithmParameterSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PSSParameterSpec(const ::java::security::spec::PSSParameterSpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj;}
    PSSParameterSpec(::java::security::spec::PSSParameterSpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::PSSParameterSpec& operator=(const ::java::security::spec::PSSParameterSpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::PSSParameterSpec& operator=(::java::security::spec::PSSParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    
    PSSParameterSpec(int32_t);
    PSSParameterSpec(const ::java::lang::String&, const ::java::lang::String&, const ::java::security::spec::AlgorithmParameterSpec&, int32_t, int32_t);
    int32_t getSaltLength() const;
    ::java::lang::String getDigestAlgorithm() const;
    ::java::lang::String getMGFAlgorithm() const;
    ::java::security::spec::AlgorithmParameterSpec getMGFParameters() const;
    int32_t getTrailerField() const;

};
}
}
}


