#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.scheme.LayeredSocketFactory.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class Socket; } }
namespace java { namespace security { class KeyStore; } }
namespace java { namespace security { class SecureRandom; } }
namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class HostNameResolver; } } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace ssl { class SSLSocketFactory; } } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace ssl { class X509HostnameVerifier; } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace ssl {
class SSLSocketFactory : public virtual ::java::lang::Object,
                         public virtual ::org::apache::http::conn::scheme::LayeredSocketFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLSocketFactory(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::scheme::LayeredSocketFactory(_obj), ::org::apache::http::conn::scheme::SocketFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLSocketFactory(const ::org::apache::http::conn::ssl::SSLSocketFactory& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::scheme::LayeredSocketFactory((jobject)0), ::org::apache::http::conn::scheme::SocketFactory((jobject)0) {obj = x.obj;}
    SSLSocketFactory(::org::apache::http::conn::ssl::SSLSocketFactory&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::scheme::LayeredSocketFactory((jobject)0), ::org::apache::http::conn::scheme::SocketFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::ssl::SSLSocketFactory& operator=(const ::org::apache::http::conn::ssl::SSLSocketFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::ssl::SSLSocketFactory& operator=(::org::apache::http::conn::ssl::SSLSocketFactory&& x) {obj = std::move(x.obj); return *this;}
    
    SSLSocketFactory(const ::java::lang::String&, const ::java::security::KeyStore&, const ::java::lang::String&, const ::java::security::KeyStore&, const ::java::security::SecureRandom&, const ::org::apache::http::conn::scheme::HostNameResolver&);
    SSLSocketFactory(const ::java::security::KeyStore&, const ::java::lang::String&, const ::java::security::KeyStore&);
    SSLSocketFactory(const ::java::security::KeyStore&, const ::java::lang::String&);
    SSLSocketFactory(const ::java::security::KeyStore&);
    static ::org::apache::http::conn::ssl::SSLSocketFactory getSocketFactory();
    ::java::net::Socket createSocket() const ;
    ::java::net::Socket connectSocket(const ::java::net::Socket&, const ::java::lang::String&, int32_t, const ::java::net::InetAddress&, int32_t, const ::org::apache::http::params::HttpParams&) const ;
    bool isSecure(const ::java::net::Socket&) const ;
    ::java::net::Socket createSocket(const ::java::net::Socket&, const ::java::lang::String&, int32_t, bool) const ;
    void setHostnameVerifier(const ::org::apache::http::conn::ssl::X509HostnameVerifier&) const ;
    ::org::apache::http::conn::ssl::X509HostnameVerifier getHostnameVerifier() const ;

};
}
}
}
}
}


