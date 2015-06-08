#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace security {
namespace spec {
class MGF1ParameterSpec : public virtual ::java::lang::Object,
                          public virtual ::java::security::spec::AlgorithmParameterSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MGF1ParameterSpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::AlgorithmParameterSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MGF1ParameterSpec(const ::java::security::spec::MGF1ParameterSpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj;}
    MGF1ParameterSpec(::java::security::spec::MGF1ParameterSpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::MGF1ParameterSpec& operator=(const ::java::security::spec::MGF1ParameterSpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::MGF1ParameterSpec& operator=(::java::security::spec::MGF1ParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    
    MGF1ParameterSpec(const ::java::lang::String&);
    ::java::lang::String getDigestAlgorithm() const;

};
}
}
}


