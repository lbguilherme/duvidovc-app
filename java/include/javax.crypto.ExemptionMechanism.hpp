#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class AlgorithmParameters; } }
namespace java { namespace security { class Key; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } }
namespace javax { namespace crypto { class ExemptionMechanism; } }

namespace javax {
namespace crypto {
class ExemptionMechanism : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExemptionMechanism(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExemptionMechanism(const ::javax::crypto::ExemptionMechanism& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ExemptionMechanism(::javax::crypto::ExemptionMechanism&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::ExemptionMechanism& operator=(const ::javax::crypto::ExemptionMechanism& x) {obj = x.obj; return *this;}
    ::javax::crypto::ExemptionMechanism& operator=(::javax::crypto::ExemptionMechanism&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName() const ;
    static ::javax::crypto::ExemptionMechanism getInstance(const ::java::lang::String&);
    static ::javax::crypto::ExemptionMechanism getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::javax::crypto::ExemptionMechanism getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::security::Provider getProvider() const ;
    bool isCryptoAllowed(const ::java::security::Key&) const ;
    int32_t getOutputSize(int32_t) const ;
    void init(const ::java::security::Key&) const ;
    void init(const ::java::security::Key&, const ::java::security::AlgorithmParameters&) const ;
    void init(const ::java::security::Key&, const ::java::security::spec::AlgorithmParameterSpec&) const ;
    std::vector< int8_t> genExemptionBlob() const ;
    int32_t genExemptionBlob(const std::vector< int8_t>&) const ;
    int32_t genExemptionBlob(const std::vector< int8_t>&, int32_t) const ;

};
}
}


