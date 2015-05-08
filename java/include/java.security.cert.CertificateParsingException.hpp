#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.cert.CertificateException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace java {
namespace security {
namespace cert {
class CertificateParsingException : public virtual ::java::lang::Object,
                                    public virtual ::java::security::cert::CertificateException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertificateParsingException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::security::GeneralSecurityException(_obj), ::java::security::cert::CertificateException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertificateParsingException(const ::java::security::cert::CertificateParsingException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {obj = x.obj;}
    CertificateParsingException(::java::security::cert::CertificateParsingException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertificateParsingException& operator=(const ::java::security::cert::CertificateParsingException& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertificateParsingException& operator=(::java::security::cert::CertificateParsingException&& x) {obj = std::move(x.obj); return *this;}
    
    CertificateParsingException(const ::java::lang::String&);
    CertificateParsingException();
    CertificateParsingException(const ::java::lang::String&, const ::java::lang::Throwable&);
    CertificateParsingException(const ::java::lang::Throwable&);

};
}
}
}


