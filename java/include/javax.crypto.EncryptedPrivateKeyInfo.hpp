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
namespace java { namespace security { namespace spec { class PKCS8EncodedKeySpec; } } }
namespace javax { namespace crypto { class Cipher; } }

namespace javax {
namespace crypto {
class EncryptedPrivateKeyInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EncryptedPrivateKeyInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EncryptedPrivateKeyInfo(const ::javax::crypto::EncryptedPrivateKeyInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EncryptedPrivateKeyInfo(::javax::crypto::EncryptedPrivateKeyInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::EncryptedPrivateKeyInfo& operator=(const ::javax::crypto::EncryptedPrivateKeyInfo& x) {obj = x.obj; return *this;}
    ::javax::crypto::EncryptedPrivateKeyInfo& operator=(::javax::crypto::EncryptedPrivateKeyInfo&& x) {obj = std::move(x.obj); return *this;}
    
    EncryptedPrivateKeyInfo(const std::vector< int8_t>&);
    EncryptedPrivateKeyInfo(const ::java::lang::String&, const std::vector< int8_t>&);
    EncryptedPrivateKeyInfo(const ::java::security::AlgorithmParameters&, const std::vector< int8_t>&);
    ::java::lang::String getAlgName() const ;
    ::java::security::AlgorithmParameters getAlgParameters() const ;
    std::vector< int8_t> getEncryptedData() const ;
    ::java::security::spec::PKCS8EncodedKeySpec getKeySpec(const ::javax::crypto::Cipher&) const ;
    ::java::security::spec::PKCS8EncodedKeySpec getKeySpec(const ::java::security::Key&) const ;
    ::java::security::spec::PKCS8EncodedKeySpec getKeySpec(const ::java::security::Key&, const ::java::lang::String&) const ;
    ::java::security::spec::PKCS8EncodedKeySpec getKeySpec(const ::java::security::Key&, const ::java::security::Provider&) const ;
    std::vector< int8_t> getEncoded() const ;

};
}
}


