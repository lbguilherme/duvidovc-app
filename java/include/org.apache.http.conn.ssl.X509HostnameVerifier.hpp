#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.net.ssl.HostnameVerifier.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { namespace cert { class X509Certificate; } } }
namespace javax { namespace net { namespace ssl { class SSLSession; } } }
namespace javax { namespace net { namespace ssl { class SSLSocket; } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace ssl {
class X509HostnameVerifier : public virtual ::java::lang::Object,
                             public virtual ::javax::net::ssl::HostnameVerifier {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X509HostnameVerifier(jobject _obj) : ::java::lang::Object(_obj), ::javax::net::ssl::HostnameVerifier(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X509HostnameVerifier(const ::org::apache::http::conn::ssl::X509HostnameVerifier& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::HostnameVerifier((jobject)0) {obj = x.obj;}
    X509HostnameVerifier(::org::apache::http::conn::ssl::X509HostnameVerifier&& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::HostnameVerifier((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::ssl::X509HostnameVerifier& operator=(const ::org::apache::http::conn::ssl::X509HostnameVerifier& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::ssl::X509HostnameVerifier& operator=(::org::apache::http::conn::ssl::X509HostnameVerifier&& x) {obj = std::move(x.obj); return *this;}
    
    bool verify(const ::java::lang::String&, const ::javax::net::ssl::SSLSession&) const ;
    void verify(const ::java::lang::String&, const ::javax::net::ssl::SSLSocket&) const ;
    void verify(const ::java::lang::String&, const ::java::security::cert::X509Certificate&) const ;
    void verify(const ::java::lang::String&, const std::vector< ::java::lang::String>&, const std::vector< ::java::lang::String>&) const ;

};
}
}
}
}
}


