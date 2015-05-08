#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.net.ssl.TrustManager.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { namespace cert { class X509Certificate; } } }

namespace javax {
namespace net {
namespace ssl {
class X509TrustManager : public virtual ::java::lang::Object,
                         public virtual ::javax::net::ssl::TrustManager {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X509TrustManager(jobject _obj) : ::java::lang::Object(_obj), ::javax::net::ssl::TrustManager(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X509TrustManager(const ::javax::net::ssl::X509TrustManager& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::TrustManager((jobject)0) {obj = x.obj;}
    X509TrustManager(::javax::net::ssl::X509TrustManager&& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::TrustManager((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::X509TrustManager& operator=(const ::javax::net::ssl::X509TrustManager& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::X509TrustManager& operator=(::javax::net::ssl::X509TrustManager&& x) {obj = std::move(x.obj); return *this;}
    
    void checkClientTrusted(const std::vector< ::java::security::cert::X509Certificate>&, const ::java::lang::String&) const ;
    void checkServerTrusted(const std::vector< ::java::security::cert::X509Certificate>&, const ::java::lang::String&) const ;
    std::vector< ::java::security::cert::X509Certificate> getAcceptedIssuers() const ;

};
}
}
}


