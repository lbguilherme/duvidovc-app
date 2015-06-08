#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.net.ssl.X509KeyManager.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Principal; } }
namespace javax { namespace net { namespace ssl { class SSLEngine; } } }

namespace javax {
namespace net {
namespace ssl {
class X509ExtendedKeyManager : public virtual ::java::lang::Object,
                               public virtual ::javax::net::ssl::X509KeyManager {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X509ExtendedKeyManager(jobject _obj) : ::java::lang::Object(_obj), ::javax::net::ssl::KeyManager(_obj), ::javax::net::ssl::X509KeyManager(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X509ExtendedKeyManager(const ::javax::net::ssl::X509ExtendedKeyManager& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::KeyManager((jobject)0), ::javax::net::ssl::X509KeyManager((jobject)0) {obj = x.obj;}
    X509ExtendedKeyManager(::javax::net::ssl::X509ExtendedKeyManager&& x) : ::java::lang::Object((jobject)0), ::javax::net::ssl::KeyManager((jobject)0), ::javax::net::ssl::X509KeyManager((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::X509ExtendedKeyManager& operator=(const ::javax::net::ssl::X509ExtendedKeyManager& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::X509ExtendedKeyManager& operator=(::javax::net::ssl::X509ExtendedKeyManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String chooseEngineClientAlias(const std::vector< ::java::lang::String>&, const std::vector< ::java::security::Principal>&, const ::javax::net::ssl::SSLEngine&) const;
    ::java::lang::String chooseEngineServerAlias(const ::java::lang::String&, const std::vector< ::java::security::Principal>&, const ::javax::net::ssl::SSLEngine&) const;

};
}
}
}


