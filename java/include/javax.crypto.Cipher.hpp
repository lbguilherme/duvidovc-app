#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace nio { class ByteBuffer; } }
namespace java { namespace security { class AlgorithmParameters; } }
namespace java { namespace security { class Key; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { class SecureRandom; } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } }
namespace javax { namespace crypto { class Cipher; } }
namespace javax { namespace crypto { class ExemptionMechanism; } }

namespace javax {
namespace crypto {
class Cipher : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Cipher(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Cipher(const ::javax::crypto::Cipher& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Cipher(::javax::crypto::Cipher&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::Cipher& operator=(const ::javax::crypto::Cipher& x) {obj = x.obj; return *this;}
    ::javax::crypto::Cipher& operator=(::javax::crypto::Cipher&& x) {obj = std::move(x.obj); return *this;}
    
    static ::javax::crypto::Cipher getInstance(const ::java::lang::String&);
    static ::javax::crypto::Cipher getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::javax::crypto::Cipher getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::security::Provider getProvider() const;
    ::java::lang::String getAlgorithm() const;
    int32_t getBlockSize() const;
    int32_t getOutputSize(int32_t) const;
    std::vector< int8_t> getIV() const;
    ::java::security::AlgorithmParameters getParameters() const;
    ::javax::crypto::ExemptionMechanism getExemptionMechanism() const;
    void init(int32_t, const ::java::security::Key&) const;
    void init(int32_t, const ::java::security::Key&, const ::java::security::SecureRandom&) const;
    void init(int32_t, const ::java::security::Key&, const ::java::security::spec::AlgorithmParameterSpec&) const;
    void init(int32_t, const ::java::security::Key&, const ::java::security::spec::AlgorithmParameterSpec&, const ::java::security::SecureRandom&) const;
    void init(int32_t, const ::java::security::Key&, const ::java::security::AlgorithmParameters&) const;
    void init(int32_t, const ::java::security::Key&, const ::java::security::AlgorithmParameters&, const ::java::security::SecureRandom&) const;
    void init(int32_t, const ::java::security::cert::Certificate&) const;
    void init(int32_t, const ::java::security::cert::Certificate&, const ::java::security::SecureRandom&) const;
    std::vector< int8_t> update(const std::vector< int8_t>&) const;
    std::vector< int8_t> update(const std::vector< int8_t>&, int32_t, int32_t) const;
    int32_t update(const std::vector< int8_t>&, int32_t, int32_t, const std::vector< int8_t>&) const;
    int32_t update(const std::vector< int8_t>&, int32_t, int32_t, const std::vector< int8_t>&, int32_t) const;
    int32_t update(const ::java::nio::ByteBuffer&, const ::java::nio::ByteBuffer&) const;
    std::vector< int8_t> doFinal() const;
    int32_t doFinal(const std::vector< int8_t>&, int32_t) const;
    std::vector< int8_t> doFinal(const std::vector< int8_t>&) const;
    std::vector< int8_t> doFinal(const std::vector< int8_t>&, int32_t, int32_t) const;
    int32_t doFinal(const std::vector< int8_t>&, int32_t, int32_t, const std::vector< int8_t>&) const;
    int32_t doFinal(const std::vector< int8_t>&, int32_t, int32_t, const std::vector< int8_t>&, int32_t) const;
    int32_t doFinal(const ::java::nio::ByteBuffer&, const ::java::nio::ByteBuffer&) const;
    std::vector< int8_t> wrap(const ::java::security::Key&) const;
    ::java::security::Key unwrap(const std::vector< int8_t>&, const ::java::lang::String&, int32_t) const;
    static int32_t getMaxAllowedKeyLength(const ::java::lang::String&);
    static ::java::security::spec::AlgorithmParameterSpec getMaxAllowedParameterSpec(const ::java::lang::String&);

};
}
}


