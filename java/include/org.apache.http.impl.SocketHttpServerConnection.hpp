#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpInetConnection.hpp"
#include "org.apache.http.impl.AbstractHttpServerConnection.hpp"

namespace java { namespace net { class InetAddress; } }

namespace org {
namespace apache {
namespace http {
namespace impl {
class SocketHttpServerConnection : public virtual ::java::lang::Object,
                                   public virtual ::org::apache::http::HttpInetConnection,
                                   public virtual ::org::apache::http::impl::AbstractHttpServerConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SocketHttpServerConnection(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpConnection(_obj), ::org::apache::http::HttpInetConnection(_obj), ::org::apache::http::HttpServerConnection(_obj), ::org::apache::http::impl::AbstractHttpServerConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SocketHttpServerConnection(const ::org::apache::http::impl::SocketHttpServerConnection& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::HttpServerConnection((jobject)0), ::org::apache::http::impl::AbstractHttpServerConnection((jobject)0) {obj = x.obj;}
    SocketHttpServerConnection(::org::apache::http::impl::SocketHttpServerConnection&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::HttpServerConnection((jobject)0), ::org::apache::http::impl::AbstractHttpServerConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::SocketHttpServerConnection& operator=(const ::org::apache::http::impl::SocketHttpServerConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::SocketHttpServerConnection& operator=(::org::apache::http::impl::SocketHttpServerConnection&& x) {obj = std::move(x.obj); return *this;}
    
    SocketHttpServerConnection();
    bool isOpen() const;
    ::java::net::InetAddress getLocalAddress() const;
    int32_t getLocalPort() const;
    ::java::net::InetAddress getRemoteAddress() const;
    int32_t getRemotePort() const;
    void setSocketTimeout(int32_t) const;
    int32_t getSocketTimeout() const;
    void shutdown() const;
    void close() const;

};
}
}
}
}


