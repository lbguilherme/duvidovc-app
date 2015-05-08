#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.cert.X509Extension.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace math { class BigInteger; } }
namespace java { namespace util { class Date; } }
namespace javax { namespace security { namespace auth { namespace x500 { class X500Principal; } } } }

namespace java {
namespace security {
namespace cert {
class X509CRLEntry : public virtual ::java::lang::Object,
                     public virtual ::java::security::cert::X509Extension {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X509CRLEntry(jobject _obj) : ::java::lang::Object(_obj), ::java::security::cert::X509Extension(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X509CRLEntry(const ::java::security::cert::X509CRLEntry& x) : ::java::lang::Object((jobject)0), ::java::security::cert::X509Extension((jobject)0) {obj = x.obj;}
    X509CRLEntry(::java::security::cert::X509CRLEntry&& x) : ::java::lang::Object((jobject)0), ::java::security::cert::X509Extension((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::X509CRLEntry& operator=(const ::java::security::cert::X509CRLEntry& x) {obj = x.obj; return *this;}
    ::java::security::cert::X509CRLEntry& operator=(::java::security::cert::X509CRLEntry&& x) {obj = std::move(x.obj); return *this;}
    
    X509CRLEntry();
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    std::vector< int8_t> getEncoded() const ;
    ::java::math::BigInteger getSerialNumber() const ;
    ::javax::security::auth::x500::X500Principal getCertificateIssuer() const ;
    ::java::util::Date getRevocationDate() const ;
    bool hasExtensions() const ;
    ::java::lang::String toString() const ;

};
}
}
}


