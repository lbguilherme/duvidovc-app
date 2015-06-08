#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { namespace http { class SslCertificate; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace http {
class SslCertificate_DName : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SslCertificate_DName(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SslCertificate_DName(const ::android::net::http::SslCertificate_DName& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SslCertificate_DName(::android::net::http::SslCertificate_DName&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::http::SslCertificate_DName& operator=(const ::android::net::http::SslCertificate_DName& x) {obj = x.obj; return *this;}
    ::android::net::http::SslCertificate_DName& operator=(::android::net::http::SslCertificate_DName&& x) {obj = std::move(x.obj); return *this;}
    
    SslCertificate_DName(const ::android::net::http::SslCertificate&, const ::java::lang::String&);
    ::java::lang::String getDName() const;
    ::java::lang::String getCName() const;
    ::java::lang::String getOName() const;
    ::java::lang::String getUName() const;

};
}
}
}


