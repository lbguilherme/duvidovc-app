#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.cert.CertificateException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace security {
namespace cert {
class CertificateExpiredException : public virtual ::java::lang::Object,
                                    public virtual ::java::security::cert::CertificateException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertificateExpiredException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::security::GeneralSecurityException(_obj), ::java::security::cert::CertificateException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertificateExpiredException(const ::java::security::cert::CertificateExpiredException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {obj = x.obj;}
    CertificateExpiredException(::java::security::cert::CertificateExpiredException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertificateExpiredException& operator=(const ::java::security::cert::CertificateExpiredException& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertificateExpiredException& operator=(::java::security::cert::CertificateExpiredException&& x) {obj = std::move(x.obj); return *this;}
    
    CertificateExpiredException(const ::java::lang::String&);
    CertificateExpiredException();

};
}
}
}


