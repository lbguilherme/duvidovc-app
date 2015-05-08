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
namespace javax { namespace net { namespace ssl { class KeyManager; } } }
namespace javax { namespace net { namespace ssl { class KeyManagerFactory; } } }
namespace javax { namespace net { namespace ssl { class ManagerFactoryParameters; } } }

namespace javax {
namespace net {
namespace ssl {
class KeyManagerFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyManagerFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyManagerFactory(const ::javax::net::ssl::KeyManagerFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyManagerFactory(::javax::net::ssl::KeyManagerFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::KeyManagerFactory& operator=(const ::javax::net::ssl::KeyManagerFactory& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::KeyManagerFactory& operator=(::javax::net::ssl::KeyManagerFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String getDefaultAlgorithm();
    static ::javax::net::ssl::KeyManagerFactory getInstance(const ::java::lang::String&);
    static ::javax::net::ssl::KeyManagerFactory getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::javax::net::ssl::KeyManagerFactory getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::lang::String getAlgorithm() const ;
    ::java::security::Provider getProvider() const ;
    void init(const ::java::security::KeyStore&, const std::vector< uint16_t>&) const ;
    void init(const ::javax::net::ssl::ManagerFactoryParameters&) const ;
    std::vector< ::javax::net::ssl::KeyManager> getKeyManagers() const ;

};
}
}
}


