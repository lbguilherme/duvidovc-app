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
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace scheme {
class SocketFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SocketFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SocketFactory(const ::org::apache::http::conn::scheme::SocketFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SocketFactory(::org::apache::http::conn::scheme::SocketFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::scheme::SocketFactory& operator=(const ::org::apache::http::conn::scheme::SocketFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::scheme::SocketFactory& operator=(::org::apache::http::conn::scheme::SocketFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::net::Socket createSocket() const;
    ::java::net::Socket connectSocket(const ::java::net::Socket&, const ::java::lang::String&, int32_t, const ::java::net::InetAddress&, int32_t, const ::org::apache::http::params::HttpParams&) const;
    bool isSecure(const ::java::net::Socket&) const;

};
}
}
}
}
}


