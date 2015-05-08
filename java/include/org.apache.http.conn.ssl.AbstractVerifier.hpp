#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.ssl.X509HostnameVerifier.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { namespace cert { class X509Certificate; } } }
namespace javax { namespace net { namespace ssl { class SSLSession; } } }
namespace javax { namespace net { namespace ssl { class SSLSocket; } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace ssl {
class AbstractVerifier : public virtual ::java::lang::Object,
                         public virtual ::org::apache::http::conn::ssl::X509HostnameVerifier {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractVerifier(jobject _obj) : ::java::lang::Object(_obj), ::javax::net::ssl::HostnameVerifier(_obj), ::org::apache::http::conn::ssl::X509HostnameVerifier(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractVerifier(const ::org::apache::http::conn::ssl::AbstractVerifier& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::HostnameVerifier((jobject)0), ::org::apache::http::conn::ssl::X509HostnameVerifier((jobject)0) {obj = x.obj;}
    AbstractVerifier(::org::apache::http::conn::ssl::AbstractVerifier&& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::HostnameVerifier((jobject)0), ::org::apache::http::conn::ssl::X509HostnameVerifier((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::ssl::AbstractVerifier& operator=(const ::org::apache::http::conn::ssl::AbstractVerifier& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::ssl::AbstractVerifier& operator=(::org::apache::http::conn::ssl::AbstractVerifier&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractVerifier();
    void verify(const ::java::lang::String&, const ::javax::net::ssl::SSLSocket&) const ;
    bool verify(const ::java::lang::String&, const ::javax::net::ssl::SSLSession&) const ;
    void verify(const ::java::lang::String&, const ::java::security::cert::X509Certificate&) const ;
    void verify(const ::java::lang::String&, const std::vector< ::java::lang::String>&, const std::vector< ::java::lang::String>&, bool) const ;
    static bool acceptableCountryWildcard(const ::java::lang::String&);
    static std::vector< ::java::lang::String> getCNs(const ::java::security::cert::X509Certificate&);
    static std::vector< ::java::lang::String> getDNSSubjectAlts(const ::java::security::cert::X509Certificate&);
    static int32_t countDots(const ::java::lang::String&);

};
}
}
}
}
}


