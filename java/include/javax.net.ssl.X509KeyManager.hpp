#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.net.ssl.KeyManager.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class Socket; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace security { class PrivateKey; } }
namespace java { namespace security { namespace cert { class X509Certificate; } } }

namespace javax {
namespace net {
namespace ssl {
class X509KeyManager : public virtual ::java::lang::Object,
                       public virtual ::javax::net::ssl::KeyManager {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X509KeyManager(jobject _obj) : ::java::lang::Object(_obj), ::javax::net::ssl::KeyManager(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X509KeyManager(const ::javax::net::ssl::X509KeyManager& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::KeyManager((jobject)0) {obj = x.obj;}
    X509KeyManager(::javax::net::ssl::X509KeyManager&& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::KeyManager((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::X509KeyManager& operator=(const ::javax::net::ssl::X509KeyManager& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::X509KeyManager& operator=(::javax::net::ssl::X509KeyManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String chooseClientAlias(const std::vector< ::java::lang::String>&, const std::vector< ::java::security::Principal>&, const ::java::net::Socket&) const ;
    ::java::lang::String chooseServerAlias(const ::java::lang::String&, const std::vector< ::java::security::Principal>&, const ::java::net::Socket&) const ;
    std::vector< ::java::security::cert::X509Certificate> getCertificateChain(const ::java::lang::String&) const ;
    std::vector< ::java::lang::String> getClientAliases(const ::java::lang::String&, const std::vector< ::java::security::Principal>&) const ;
    std::vector< ::java::lang::String> getServerAliases(const ::java::lang::String&, const std::vector< ::java::security::Principal>&) const ;
    ::java::security::PrivateKey getPrivateKey(const ::java::lang::String&) const ;

};
}
}
}


