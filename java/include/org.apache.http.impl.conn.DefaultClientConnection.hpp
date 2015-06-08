#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.OperatedClientConnection.hpp"
#include "org.apache.http.impl.SocketHttpClientConnection.hpp"

namespace java { namespace net { class Socket; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class DefaultClientConnection : public virtual ::java::lang::Object,
                                public virtual ::org::apache::http::conn::OperatedClientConnection,
                                public virtual ::org::apache::http::impl::SocketHttpClientConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultClientConnection(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpClientConnection(_obj), ::org::apache::http::HttpConnection(_obj), ::org::apache::http::HttpInetConnection(_obj), ::org::apache::http::conn::OperatedClientConnection(_obj), ::org::apache::http::impl::AbstractHttpClientConnection(_obj), ::org::apache::http::impl::SocketHttpClientConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultClientConnection(const ::org::apache::http::impl::conn::DefaultClientConnection& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::conn::OperatedClientConnection((jobject)0), ::org::apache::http::impl::AbstractHttpClientConnection((jobject)0), ::org::apache::http::impl::SocketHttpClientConnection((jobject)0) {obj = x.obj;}
    DefaultClientConnection(::org::apache::http::impl::conn::DefaultClientConnection&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::conn::OperatedClientConnection((jobject)0), ::org::apache::http::impl::AbstractHttpClientConnection((jobject)0), ::org::apache::http::impl::SocketHttpClientConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::DefaultClientConnection& operator=(const ::org::apache::http::impl::conn::DefaultClientConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::DefaultClientConnection& operator=(::org::apache::http::impl::conn::DefaultClientConnection&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultClientConnection();
    ::org::apache::http::HttpHost getTargetHost() const;
    bool isSecure() const;
    ::java::net::Socket getSocket() const;
    void opening(const ::java::net::Socket&, const ::org::apache::http::HttpHost&) const;
    void openCompleted(bool, const ::org::apache::http::params::HttpParams&) const;
    void shutdown() const;
    void close() const;
    void update(const ::java::net::Socket&, const ::org::apache::http::HttpHost&, bool, const ::org::apache::http::params::HttpParams&) const;
    ::org::apache::http::HttpResponse receiveResponseHeader() const;
    void sendRequestHeader(const ::org::apache::http::HttpRequest&) const;

};
}
}
}
}
}


