#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { namespace cert { class CRL; } } }
namespace java { namespace security { namespace cert { class CertPath; } } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace java { namespace security { namespace cert { class CertificateFactory; } } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class List; } }

namespace java {
namespace security {
namespace cert {
class CertificateFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertificateFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertificateFactory(const ::java::security::cert::CertificateFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CertificateFactory(::java::security::cert::CertificateFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertificateFactory& operator=(const ::java::security::cert::CertificateFactory& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertificateFactory& operator=(::java::security::cert::CertificateFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::security::cert::CertificateFactory getInstance(const ::java::lang::String&);
    static ::java::security::cert::CertificateFactory getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::security::cert::CertificateFactory getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::security::Provider getProvider() const;
    ::java::lang::String getType() const;
    ::java::security::cert::Certificate generateCertificate(const ::java::io::InputStream&) const;
    ::java::util::Iterator getCertPathEncodings() const;
    ::java::security::cert::CertPath generateCertPath(const ::java::io::InputStream&) const;
    ::java::security::cert::CertPath generateCertPath(const ::java::io::InputStream&, const ::java::lang::String&) const;
    ::java::security::cert::CertPath generateCertPath(const ::java::util::List&) const;
    ::java::util::Collection generateCertificates(const ::java::io::InputStream&) const;
    ::java::security::cert::CRL generateCRL(const ::java::io::InputStream&) const;
    ::java::util::Collection generateCRLs(const ::java::io::InputStream&) const;

};
}
}
}


