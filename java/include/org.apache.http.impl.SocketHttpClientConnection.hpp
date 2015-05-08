#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpInetConnection.hpp"
#include "org.apache.http.impl.AbstractHttpClientConnection.hpp"

namespace java { namespace net { class InetAddress; } }

namespace org {
namespace apache {
namespace http {
namespace impl {
class SocketHttpClientConnection : public virtual ::java::lang::Object,
                                   public virtual ::org::apache::http::HttpInetConnection,
                                   public virtual ::org::apache::http::impl::AbstractHttpClientConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SocketHttpClientConnection(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpClientConnection(_obj), ::org::apache::http::HttpConnection(_obj), ::org::apache::http::HttpInetConnection(_obj), ::org::apache::http::impl::AbstractHttpClientConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SocketHttpClientConnection(const ::org::apache::http::impl::SocketHttpClientConnection& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::impl::AbstractHttpClientConnection((jobject)0) {obj = x.obj;}
    SocketHttpClientConnection(::org::apache::http::impl::SocketHttpClientConnection&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::impl::AbstractHttpClientConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::SocketHttpClientConnection& operator=(const ::org::apache::http::impl::SocketHttpClientConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::SocketHttpClientConnection& operator=(::org::apache::http::impl::SocketHttpClientConnection&& x) {obj = std::move(x.obj); return *this;}
    
    SocketHttpClientConnection();
    bool isOpen() const ;
    ::java::net::InetAddress getLocalAddress() const ;
    int32_t getLocalPort() const ;
    ::java::net::InetAddress getRemoteAddress() const ;
    int32_t getRemotePort() const ;
    void setSocketTimeout(int32_t) const ;
    int32_t getSocketTimeout() const ;
    void shutdown() const ;
    void close() const ;

};
}
}
}
}


