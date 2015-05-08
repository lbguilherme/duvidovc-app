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
class CertificateParsingException : public virtual ::java::lang::Object,
                                    public virtual ::javax::security::cert::CertificateException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertificateParsingException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::javax::security::cert::CertificateException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertificateParsingException(const ::javax::security::cert::CertificateParsingException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::security::cert::CertificateException((jobject)0) {obj = x.obj;}
    CertificateParsingException(::javax::security::cert::CertificateParsingException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::security::cert::CertificateException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::cert::CertificateParsingException& operator=(const ::javax::security::cert::CertificateParsingException& x) {obj = x.obj; return *this;}
    ::javax::security::cert::CertificateParsingException& operator=(::javax::security::cert::CertificateParsingException&& x) {obj = std::move(x.obj); return *this;}
    
    CertificateParsingException(const ::java::lang::String&);
    CertificateParsingException();

};
}
}
}


