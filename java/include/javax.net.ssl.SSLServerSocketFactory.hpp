#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.net.ServerSocketFactory.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace net { class ServerSocketFactory; } }

namespace javax {
namespace net {
namespace ssl {
class SSLServerSocketFactory : public virtual ::java::lang::Object,
                               public virtual ::javax::net::ServerSocketFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLServerSocketFactory(jobject _obj) : ::java::lang::Object(_obj), ::javax::net::ServerSocketFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLServerSocketFactory(const ::javax::net::ssl::SSLServerSocketFactory& x) : ::java::lang::Object((jobject)0), ::javax::net::ServerSocketFactory((jobject)0) {obj = x.obj;}
    SSLServerSocketFactory(::javax::net::ssl::SSLServerSocketFactory&& x) : ::java::lang::Object((jobject)0), ::javax::net::ServerSocketFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLServerSocketFactory& operator=(const ::javax::net::ssl::SSLServerSocketFactory& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLServerSocketFactory& operator=(::javax::net::ssl::SSLServerSocketFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::javax::net::ServerSocketFactory getDefault();
    std::vector< ::java::lang::String> getDefaultCipherSuites() const;
    std::vector< ::java::lang::String> getSupportedCipherSuites() const;

};
}
}
}


