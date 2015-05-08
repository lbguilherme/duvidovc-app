#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.security.cert.CertificateException.hpp"

namespace java { namespace lang { class String; } }

namespace javax {
namespace security {
namespace cert {
class CertificateExpiredException : public virtual ::java::lang::Object,
                                    public virtual ::javax::security::cert::CertificateException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertificateExpiredException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::javax::security::cert::CertificateException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertificateExpiredException(const ::javax::security::cert::CertificateExpiredException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::security::cert::CertificateException((jobject)0) {obj = x.obj;}
    CertificateExpiredException(::javax::security::cert::CertificateExpiredException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::security::cert::CertificateException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::cert::CertificateExpiredException& operator=(const ::javax::security::cert::CertificateExpiredException& x) {obj = x.obj; return *this;}
    ::javax::security::cert::CertificateExpiredException& operator=(::javax::security::cert::CertificateExpiredException&& x) {obj = std::move(x.obj); return *this;}
    
    CertificateExpiredException(const ::java::lang::String&);
    CertificateExpiredException();

};
}
}
}


