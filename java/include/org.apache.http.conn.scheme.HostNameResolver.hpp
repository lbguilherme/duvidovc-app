#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace scheme {
class HostNameResolver : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HostNameResolver(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HostNameResolver(const ::org::apache::http::conn::scheme::HostNameResolver& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HostNameResolver(::org::apache::http::conn::scheme::HostNameResolver&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::scheme::HostNameResolver& operator=(const ::org::apache::http::conn::scheme::HostNameResolver& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::scheme::HostNameResolver& operator=(::org::apache::http::conn::scheme::HostNameResolver&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::net::InetAddress resolve(const ::java::lang::String&) const ;

};
}
}
}
}
}


