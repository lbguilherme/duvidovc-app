#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { namespace cert { class CRL; } } }
namespace java { namespace security { namespace cert { class CertPath; } } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Iterator; } }
namespace java { namespace util { class List; } }

namespace java {
namespace security {
namespace cert {
class CertificateFactorySpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertificateFactorySpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertificateFactorySpi(const ::java::security::cert::CertificateFactorySpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CertificateFactorySpi(::java::security::cert::CertificateFactorySpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertificateFactorySpi& operator=(const ::java::security::cert::CertificateFactorySpi& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertificateFactorySpi& operator=(::java::security::cert::CertificateFactorySpi&& x) {obj = std::move(x.obj); return *this;}
    
    CertificateFactorySpi();
    ::java::security::cert::Certificate engineGenerateCertificate(const ::java::io::InputStream&) const;
    ::java::util::Collection engineGenerateCertificates(const ::java::io::InputStream&) const;
    ::java::security::cert::CRL engineGenerateCRL(const ::java::io::InputStream&) const;
    ::java::util::Collection engineGenerateCRLs(const ::java::io::InputStream&) const;
    ::java::security::cert::CertPath engineGenerateCertPath(const ::java::io::InputStream&) const;
    ::java::security::cert::CertPath engineGenerateCertPath(const ::java::io::InputStream&, const ::java::lang::String&) const;
    ::java::security::cert::CertPath engineGenerateCertPath(const ::java::util::List&) const;
    ::java::util::Iterator engineGetCertPathEncodings() const;

};
}
}
}


