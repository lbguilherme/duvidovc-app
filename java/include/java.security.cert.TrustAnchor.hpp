#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class PublicKey; } }
namespace java { namespace security { namespace cert { class X509Certificate; } } }
namespace javax { namespace security { namespace auth { namespace x500 { class X500Principal; } } } }

namespace java {
namespace security {
namespace cert {
class TrustAnchor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TrustAnchor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TrustAnchor(const ::java::security::cert::TrustAnchor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TrustAnchor(::java::security::cert::TrustAnchor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::TrustAnchor& operator=(const ::java::security::cert::TrustAnchor& x) {obj = x.obj; return *this;}
    ::java::security::cert::TrustAnchor& operator=(::java::security::cert::TrustAnchor&& x) {obj = std::move(x.obj); return *this;}
    
    TrustAnchor(const ::java::security::cert::X509Certificate&, const std::vector< int8_t>&);
    TrustAnchor(const ::java::lang::String&, const ::java::security::PublicKey&, const std::vector< int8_t>&);
    TrustAnchor(const ::javax::security::auth::x500::X500Principal&, const ::java::security::PublicKey&, const std::vector< int8_t>&);
    std::vector< int8_t> getNameConstraints() const;
    ::java::security::cert::X509Certificate getTrustedCert() const;
    ::javax::security::auth::x500::X500Principal getCA() const;
    ::java::lang::String getCAName() const;
    ::java::security::PublicKey getCAPublicKey() const;
    ::java::lang::String toString() const;

};
}
}
}


