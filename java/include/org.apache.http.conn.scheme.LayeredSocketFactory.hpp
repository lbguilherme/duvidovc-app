#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.scheme.SocketFactory.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class Socket; } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace scheme {
class LayeredSocketFactory : public virtual ::java::lang::Object,
                             public virtual ::org::apache::http::conn::scheme::SocketFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayeredSocketFactory(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::scheme::SocketFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayeredSocketFactory(const ::org::apache::http::conn::scheme::LayeredSocketFactory& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::scheme::SocketFactory((jobject)0) {obj = x.obj;}
    LayeredSocketFactory(::org::apache::http::conn::scheme::LayeredSocketFactory&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::scheme::SocketFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::scheme::LayeredSocketFactory& operator=(const ::org::apache::http::conn::scheme::LayeredSocketFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::scheme::LayeredSocketFactory& operator=(::org::apache::http::conn::scheme::LayeredSocketFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::net::Socket createSocket(const ::java::net::Socket&, const ::java::lang::String&, int32_t, bool) const;

};
}
}
}
}
}


