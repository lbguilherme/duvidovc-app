#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class KeyStore; } }
namespace java { namespace security { class Provider; } }
namespace javax { namespace net { namespace ssl { class ManagerFactoryParameters; } } }
namespace javax { namespace net { namespace ssl { class TrustManager; } } }
namespace javax { namespace net { namespace ssl { class TrustManagerFactory; } } }

namespace javax {
namespace net {
namespace ssl {
class TrustManagerFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TrustManagerFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TrustManagerFactory(const ::javax::net::ssl::TrustManagerFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TrustManagerFactory(::javax::net::ssl::TrustManagerFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::TrustManagerFactory& operator=(const ::javax::net::ssl::TrustManagerFactory& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::TrustManagerFactory& operator=(::javax::net::ssl::TrustManagerFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String getDefaultAlgorithm();
    static ::javax::net::ssl::TrustManagerFactory getInstance(const ::java::lang::String&);
    static ::javax::net::ssl::TrustManagerFactory getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::javax::net::ssl::TrustManagerFactory getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::lang::String getAlgorithm() const;
    ::java::security::Provider getProvider() const;
    void init(const ::java::security::KeyStore&) const;
    void init(const ::javax::net::ssl::ManagerFactoryParameters&) const;
    std::vector< ::javax::net::ssl::TrustManager> getTrustManagers() const;

};
}
}
}


