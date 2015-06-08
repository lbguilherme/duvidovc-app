#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.SocketHttpServerConnection.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class Socket; } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
class DefaultHttpServerConnection : public virtual ::java::lang::Object,
                                    public virtual ::org::apache::http::impl::SocketHttpServerConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultHttpServerConnection(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpConnection(_obj), ::org::apache::http::HttpInetConnection(_obj), ::org::apache::http::HttpServerConnection(_obj), ::org::apache::http::impl::AbstractHttpServerConnection(_obj), ::org::apache::http::impl::SocketHttpServerConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultHttpServerConnection(const ::org::apache::http::impl::DefaultHttpServerConnection& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::HttpServerConnection((jobject)0), ::org::apache::http::impl::AbstractHttpServerConnection((jobject)0), ::org::apache::http::impl::SocketHttpServerConnection((jobject)0) {obj = x.obj;}
    DefaultHttpServerConnection(::org::apache::http::impl::DefaultHttpServerConnection&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::HttpServerConnection((jobject)0), ::org::apache::http::impl::AbstractHttpServerConnection((jobject)0), ::org::apache::http::impl::SocketHttpServerConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::DefaultHttpServerConnection& operator=(const ::org::apache::http::impl::DefaultHttpServerConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::DefaultHttpServerConnection& operator=(::org::apache::http::impl::DefaultHttpServerConnection&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultHttpServerConnection();
    void bind(const ::java::net::Socket&, const ::org::apache::http::params::HttpParams&) const;
    ::java::lang::String toString() const;

};
}
}
}
}


