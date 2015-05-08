#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { namespace http { class SslCertificate; } } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { namespace cert { class X509Certificate; } } }

namespace android {
namespace net {
namespace http {
class SslError : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SslError(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SslError(const ::android::net::http::SslError& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SslError(::android::net::http::SslError&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::http::SslError& operator=(const ::android::net::http::SslError& x) {obj = x.obj; return *this;}
    ::android::net::http::SslError& operator=(::android::net::http::SslError&& x) {obj = std::move(x.obj); return *this;}
    
    SslError(int32_t, const ::android::net::http::SslCertificate&);
    SslError(int32_t, const ::java::security::cert::X509Certificate&);
    SslError(int32_t, const ::android::net::http::SslCertificate&, const ::java::lang::String&);
    SslError(int32_t, const ::java::security::cert::X509Certificate&, const ::java::lang::String&);
    ::android::net::http::SslCertificate getCertificate() const ;
    ::java::lang::String getUrl() const ;
    bool addError(int32_t) const ;
    bool hasError(int32_t) const ;
    int32_t getPrimaryError() const ;
    ::java::lang::String toString() const ;

};
}
}
}


