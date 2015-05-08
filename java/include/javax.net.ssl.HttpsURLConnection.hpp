#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.HttpURLConnection.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace javax { namespace net { namespace ssl { class HostnameVerifier; } } }
namespace javax { namespace net { namespace ssl { class SSLSocketFactory; } } }

namespace javax {
namespace net {
namespace ssl {
class HttpsURLConnection : public virtual ::java::lang::Object,
                           public virtual ::java::net::HttpURLConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpsURLConnection(jobject _obj) : ::java::lang::Object(_obj), ::java::net::HttpURLConnection(_obj), ::java::net::URLConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpsURLConnection(const ::javax::net::ssl::HttpsURLConnection& x) : ::java::lang::Object((jobject)0), ::java::net::HttpURLConnection((jobject)0), ::java::net::URLConnection((jobject)0) {obj = x.obj;}
    HttpsURLConnection(::javax::net::ssl::HttpsURLConnection&& x) : ::java::lang::Object((jobject)0), ::java::net::HttpURLConnection((jobject)0), ::java::net::URLConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::HttpsURLConnection& operator=(const ::javax::net::ssl::HttpsURLConnection& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::HttpsURLConnection& operator=(::javax::net::ssl::HttpsURLConnection&& x) {obj = std::move(x.obj); return *this;}
    
    static void setDefaultHostnameVerifier(const ::javax::net::ssl::HostnameVerifier&);
    static ::javax::net::ssl::HostnameVerifier getDefaultHostnameVerifier();
    static void setDefaultSSLSocketFactory(const ::javax::net::ssl::SSLSocketFactory&);
    static ::javax::net::ssl::SSLSocketFactory getDefaultSSLSocketFactory();
    ::java::lang::String getCipherSuite() const ;
    std::vector< ::java::security::cert::Certificate> getLocalCertificates() const ;
    std::vector< ::java::security::cert::Certificate> getServerCertificates() const ;
    ::java::security::Principal getPeerPrincipal() const ;
    ::java::security::Principal getLocalPrincipal() const ;
    void setHostnameVerifier(const ::javax::net::ssl::HostnameVerifier&) const ;
    ::javax::net::ssl::HostnameVerifier getHostnameVerifier() const ;
    void setSSLSocketFactory(const ::javax::net::ssl::SSLSocketFactory&) const ;
    ::javax::net::ssl::SSLSocketFactory getSSLSocketFactory() const ;

};
}
}
}


