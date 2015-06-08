#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Key; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { class SecureRandom; } }
namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } }
namespace javax { namespace crypto { class KeyAgreement; } }
namespace javax { namespace crypto { class SecretKey; } }

namespace javax {
namespace crypto {
class KeyAgreement : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyAgreement(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyAgreement(const ::javax::crypto::KeyAgreement& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyAgreement(::javax::crypto::KeyAgreement&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::KeyAgreement& operator=(const ::javax::crypto::KeyAgreement& x) {obj = x.obj; return *this;}
    ::javax::crypto::KeyAgreement& operator=(::javax::crypto::KeyAgreement&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAlgorithm() const;
    ::java::security::Provider getProvider() const;
    static ::javax::crypto::KeyAgreement getInstance(const ::java::lang::String&);
    static ::javax::crypto::KeyAgreement getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::javax::crypto::KeyAgreement getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    void init(const ::java::security::Key&) const;
    void init(const ::java::security::Key&, const ::java::security::SecureRandom&) const;
    void init(const ::java::security::Key&, const ::java::security::spec::AlgorithmParameterSpec&) const;
    void init(const ::java::security::Key&, const ::java::security::spec::AlgorithmParameterSpec&, const ::java::security::SecureRandom&) const;
    ::java::security::Key doPhase(const ::java::security::Key&, bool) const;
    std::vector< int8_t> generateSecret() const;
    int32_t generateSecret(const std::vector< int8_t>&, int32_t) const;
    ::javax::crypto::SecretKey generateSecret(const ::java::lang::String&) const;

};
}
}


