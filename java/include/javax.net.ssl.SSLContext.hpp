#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { class SecureRandom; } }
namespace javax { namespace net { namespace ssl { class KeyManager; } } }
namespace javax { namespace net { namespace ssl { class SSLContext; } } }
namespace javax { namespace net { namespace ssl { class SSLEngine; } } }
namespace javax { namespace net { namespace ssl { class SSLParameters; } } }
namespace javax { namespace net { namespace ssl { class SSLServerSocketFactory; } } }
namespace javax { namespace net { namespace ssl { class SSLSessionContext; } } }
namespace javax { namespace net { namespace ssl { class SSLSocketFactory; } } }
namespace javax { namespace net { namespace ssl { class TrustManager; } } }

namespace javax {
namespace net {
namespace ssl {
class SSLContext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLContext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLContext(const ::javax::net::ssl::SSLContext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SSLContext(::javax::net::ssl::SSLContext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLContext& operator=(const ::javax::net::ssl::SSLContext& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLContext& operator=(::javax::net::ssl::SSLContext&& x) {obj = std::move(x.obj); return *this;}
    
    static ::javax::net::ssl::SSLContext getDefault();
    static void setDefault(const ::javax::net::ssl::SSLContext&);
    static ::javax::net::ssl::SSLContext getInstance(const ::java::lang::String&);
    static ::javax::net::ssl::SSLContext getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::javax::net::ssl::SSLContext getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::lang::String getProtocol() const ;
    ::java::security::Provider getProvider() const ;
    void init(const std::vector< ::javax::net::ssl::KeyManager>&, const std::vector< ::javax::net::ssl::TrustManager>&, const ::java::security::SecureRandom&) const ;
    ::javax::net::ssl::SSLSocketFactory getSocketFactory() const ;
    ::javax::net::ssl::SSLServerSocketFactory getServerSocketFactory() const ;
    ::javax::net::ssl::SSLEngine createSSLEngine() const ;
    ::javax::net::ssl::SSLEngine createSSLEngine(const ::java::lang::String&, int32_t) const ;
    ::javax::net::ssl::SSLSessionContext getServerSessionContext() const ;
    ::javax::net::ssl::SSLSessionContext getClientSessionContext() const ;
    ::javax::net::ssl::SSLParameters getDefaultSSLParameters() const ;
    ::javax::net::ssl::SSLParameters getSupportedSSLParameters() const ;

};
}
}
}


