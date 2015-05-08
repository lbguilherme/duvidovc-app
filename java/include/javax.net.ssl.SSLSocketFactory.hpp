#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.net.SocketFactory.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class Socket; } }
namespace javax { namespace net { class SocketFactory; } }

namespace javax {
namespace net {
namespace ssl {
class SSLSocketFactory : public virtual ::java::lang::Object,
                         public virtual ::javax::net::SocketFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLSocketFactory(jobject _obj) : ::java::lang::Object(_obj), ::javax::net::SocketFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLSocketFactory(const ::javax::net::ssl::SSLSocketFactory& x) : ::java::lang::Object((jobject)0), ::javax::net::SocketFactory((jobject)0) {obj = x.obj;}
    SSLSocketFactory(::javax::net::ssl::SSLSocketFactory&& x) : ::java::lang::Object((jobject)0), ::javax::net::SocketFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLSocketFactory& operator=(const ::javax::net::ssl::SSLSocketFactory& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLSocketFactory& operator=(::javax::net::ssl::SSLSocketFactory&& x) {obj = std::move(x.obj); return *this;}
    
    SSLSocketFactory();
    static ::javax::net::SocketFactory getDefault();
    std::vector< ::java::lang::String> getDefaultCipherSuites() const ;
    std::vector< ::java::lang::String> getSupportedCipherSuites() const ;
    ::java::net::Socket createSocket(const ::java::net::Socket&, const ::java::lang::String&, int32_t, bool) const ;

};
}
}
}


