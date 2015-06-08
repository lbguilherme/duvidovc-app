#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.SocketHttpClientConnection.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class Socket; } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
class DefaultHttpClientConnection : public virtual ::java::lang::Object,
                                    public virtual ::org::apache::http::impl::SocketHttpClientConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultHttpClientConnection(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpClientConnection(_obj), ::org::apache::http::HttpConnection(_obj), ::org::apache::http::HttpInetConnection(_obj), ::org::apache::http::impl::AbstractHttpClientConnection(_obj), ::org::apache::http::impl::SocketHttpClientConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultHttpClientConnection(const ::org::apache::http::impl::DefaultHttpClientConnection& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::impl::AbstractHttpClientConnection((jobject)0), ::org::apache::http::impl::SocketHttpClientConnection((jobject)0) {obj = x.obj;}
    DefaultHttpClientConnection(::org::apache::http::impl::DefaultHttpClientConnection&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::impl::AbstractHttpClientConnection((jobject)0), ::org::apache::http::impl::SocketHttpClientConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::DefaultHttpClientConnection& operator=(const ::org::apache::http::impl::DefaultHttpClientConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::DefaultHttpClientConnection& operator=(::org::apache::http::impl::DefaultHttpClientConnection&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultHttpClientConnection();
    void bind(const ::java::net::Socket&, const ::org::apache::http::params::HttpParams&) const;
    ::java::lang::String toString() const;

};
}
}
}
}


