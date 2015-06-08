#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.io.AbstractSessionInputBuffer.hpp"

namespace java { namespace net { class Socket; } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace io {
class SocketInputBuffer : public virtual ::java::lang::Object,
                          public virtual ::org::apache::http::impl::io::AbstractSessionInputBuffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SocketInputBuffer(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::impl::io::AbstractSessionInputBuffer(_obj), ::org::apache::http::io::SessionInputBuffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SocketInputBuffer(const ::org::apache::http::impl::io::SocketInputBuffer& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractSessionInputBuffer((jobject)0), ::org::apache::http::io::SessionInputBuffer((jobject)0) {obj = x.obj;}
    SocketInputBuffer(::org::apache::http::impl::io::SocketInputBuffer&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractSessionInputBuffer((jobject)0), ::org::apache::http::io::SessionInputBuffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::SocketInputBuffer& operator=(const ::org::apache::http::impl::io::SocketInputBuffer& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::SocketInputBuffer& operator=(::org::apache::http::impl::io::SocketInputBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    SocketInputBuffer(const ::java::net::Socket&, int32_t, const ::org::apache::http::params::HttpParams&);
    bool isDataAvailable(int32_t) const;

};
}
}
}
}
}


