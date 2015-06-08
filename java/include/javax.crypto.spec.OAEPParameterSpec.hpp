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
namespace javax { namespace crypto { namespace spec { class PSource; } } }

namespace javax {
namespace crypto {
namespace spec {
class OAEPParameterSpec : public virtual ::java::lang::Object,
                          public virtual ::java::security::spec::AlgorithmParameterSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OAEPParameterSpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::AlgorithmParameterSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OAEPParameterSpec(const ::javax::crypto::spec::OAEPParameterSpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj;}
    OAEPParameterSpec(::javax::crypto::spec::OAEPParameterSpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::OAEPParameterSpec& operator=(const ::javax::crypto::spec::OAEPParameterSpec& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::OAEPParameterSpec& operator=(::javax::crypto::spec::OAEPParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    
    OAEPParameterSpec(const ::java::lang::String&, const ::java::lang::String&, const ::java::security::spec::AlgorithmParameterSpec&, const ::javax::crypto::spec::PSource&);
    ::java::lang::String getDigestAlgorithm() const;
    ::java::lang::String getMGFAlgorithm() const;
    ::java::security::spec::AlgorithmParameterSpec getMGFParameters() const;
    ::javax::crypto::spec::PSource getPSource() const;

};
}
}
}


