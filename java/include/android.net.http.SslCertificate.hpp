#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { namespace http { class SslCertificate; } } }
namespace android { namespace net { namespace http { class SslCertificate_DName; } } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { namespace cert { class X509Certificate; } } }
namespace java { namespace util { class Date; } }

namespace android {
namespace net {
namespace http {
class SslCertificate : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SslCertificate(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SslCertificate(const ::android::net::http::SslCertificate& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SslCertificate(::android::net::http::SslCertificate&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::http::SslCertificate& operator=(const ::android::net::http::SslCertificate& x) {obj = x.obj; return *this;}
    ::android::net::http::SslCertificate& operator=(::android::net::http::SslCertificate&& x) {obj = std::move(x.obj); return *this;}
    
    SslCertificate(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    SslCertificate(const ::java::lang::String&, const ::java::lang::String&, const ::java::util::Date&, const ::java::util::Date&);
    SslCertificate(const ::java::security::cert::X509Certificate&);
    static ::android::os::Bundle saveState(const ::android::net::http::SslCertificate&);
    static ::android::net::http::SslCertificate restoreState(const ::android::os::Bundle&);
    ::java::util::Date getValidNotBeforeDate() const;
    ::java::lang::String getValidNotBefore() const;
    ::java::util::Date getValidNotAfterDate() const;
    ::java::lang::String getValidNotAfter() const;
    ::android::net::http::SslCertificate_DName getIssuedTo() const;
    ::android::net::http::SslCertificate_DName getIssuedBy() const;
    ::java::lang::String toString() const;

};
}
}
}

#include "android.net.http.SslCertificate_DName.hpp"

