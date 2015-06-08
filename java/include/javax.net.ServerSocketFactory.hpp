#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class ServerSocket; } }
namespace javax { namespace net { class ServerSocketFactory; } }

namespace javax {
namespace net {
class ServerSocketFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ServerSocketFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ServerSocketFactory(const ::javax::net::ServerSocketFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ServerSocketFactory(::javax::net::ServerSocketFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ServerSocketFactory& operator=(const ::javax::net::ServerSocketFactory& x) {obj = x.obj; return *this;}
    ::javax::net::ServerSocketFactory& operator=(::javax::net::ServerSocketFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::javax::net::ServerSocketFactory getDefault();
    ::java::net::ServerSocket createServerSocket() const;
    ::java::net::ServerSocket createServerSocket(int32_t) const;
    ::java::net::ServerSocket createServerSocket(int32_t, int32_t) const;
    ::java::net::ServerSocket createServerSocket(int32_t, int32_t, const ::java::net::InetAddress&) const;

};
}
}


