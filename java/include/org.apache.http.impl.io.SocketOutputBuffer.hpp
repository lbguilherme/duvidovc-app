#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.io.AbstractSessionOutputBuffer.hpp"

namespace java { namespace net { class Socket; } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace io {
class SocketOutputBuffer : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::impl::io::AbstractSessionOutputBuffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SocketOutputBuffer(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::impl::io::AbstractSessionOutputBuffer(_obj), ::org::apache::http::io::SessionOutputBuffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SocketOutputBuffer(const ::org::apache::http::impl::io::SocketOutputBuffer& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractSessionOutputBuffer((jobject)0), ::org::apache::http::io::SessionOutputBuffer((jobject)0) {obj = x.obj;}
    SocketOutputBuffer(::org::apache::http::impl::io::SocketOutputBuffer&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractSessionOutputBuffer((jobject)0), ::org::apache::http::io::SessionOutputBuffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::SocketOutputBuffer& operator=(const ::org::apache::http::impl::io::SocketOutputBuffer& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::SocketOutputBuffer& operator=(::org::apache::http::impl::io::SocketOutputBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    SocketOutputBuffer(const ::java::net::Socket&, int32_t, const ::org::apache::http::params::HttpParams&);

};
}
}
}
}
}


