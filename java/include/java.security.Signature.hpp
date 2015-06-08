#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.SignatureSpi.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace nio { class ByteBuffer; } }
namespace java { namespace security { class AlgorithmParameters; } }
namespace java { namespace security { class PrivateKey; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { class PublicKey; } }
namespace java { namespace security { class SecureRandom; } }
namespace java { namespace security { class Signature; } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } }

namespace java {
namespace security {
class Signature : public virtual ::java::lang::Object,
                  public virtual ::java::security::SignatureSpi {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Signature(jobject _obj) : ::java::lang::Object(_obj), ::java::security::SignatureSpi(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Signature(const ::java::security::Signature& x) : ::java::lang::Object((jobject)0), ::java::security::SignatureSpi((jobject)0) {obj = x.obj;}
    Signature(::java::security::Signature&& x) : ::java::lang::Object((jobject)0), ::java::security::SignatureSpi((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Signature& operator=(const ::java::security::Signature& x) {obj = x.obj; return *this;}
    ::java::security::Signature& operator=(::java::security::Signature&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::security::Signature getInstance(const ::java::lang::String&);
    static ::java::security::Signature getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::security::Signature getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::security::Provider getProvider() const;
    ::java::lang::String getAlgorithm() const;
    void initVerify(const ::java::security::PublicKey&) const;
    void initVerify(const ::java::security::cert::Certificate&) const;
    void initSign(const ::java::security::PrivateKey&) const;
    void initSign(const ::java::security::PrivateKey&, const ::java::security::SecureRandom&) const;
    std::vector< int8_t> sign() const;
    int32_t sign(const std::vector< int8_t>&, int32_t, int32_t) const;
    bool verify(const std::vector< int8_t>&) const;
    bool verify(const std::vector< int8_t>&, int32_t, int32_t) const;
    void update(int8_t) const;
    void update(const std::vector< int8_t>&) const;
    void update(const std::vector< int8_t>&, int32_t, int32_t) const;
    void update(const ::java::nio::ByteBuffer&) const;
    ::java::lang::String toString() const;
    void setParameter(const ::java::lang::String&, const ::java::lang::Object&) const;
    void setParameter(const ::java::security::spec::AlgorithmParameterSpec&) const;
    ::java::security::AlgorithmParameters getParameters() const;
    ::java::lang::Object getParameter(const ::java::lang::String&) const;
    ::java::lang::Object clone() const;

};
}
}


