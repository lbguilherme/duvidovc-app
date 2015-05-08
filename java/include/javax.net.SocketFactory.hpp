#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class Socket; } }
namespace javax { namespace net { class SocketFactory; } }

namespace javax {
namespace net {
class SocketFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SocketFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SocketFactory(const ::javax::net::SocketFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SocketFactory(::javax::net::SocketFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::SocketFactory& operator=(const ::javax::net::SocketFactory& x) {obj = x.obj; return *this;}
    ::javax::net::SocketFactory& operator=(::javax::net::SocketFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::javax::net::SocketFactory getDefault();
    ::java::net::Socket createSocket() const ;
    ::java::net::Socket createSocket(const ::java::lang::String&, int32_t) const ;
    ::java::net::Socket createSocket(const ::java::lang::String&, int32_t, const ::java::net::InetAddress&, int32_t) const ;
    ::java::net::Socket createSocket(const ::java::net::InetAddress&, int32_t) const ;
    ::java::net::Socket createSocket(const ::java::net::InetAddress&, int32_t, const ::java::net::InetAddress&, int32_t) const ;

};
}
}


