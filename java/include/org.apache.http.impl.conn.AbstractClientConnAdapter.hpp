#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.ManagedClientConnection.hpp"

namespace java { namespace net { class InetAddress; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace javax { namespace net { namespace ssl { class SSLSession; } } }
namespace org { namespace apache { namespace http { class HttpConnectionMetrics; } } }
namespace org { namespace apache { namespace http { class HttpEntityEnclosingRequest; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class AbstractClientConnAdapter : public virtual ::java::lang::Object,
                                  public virtual ::org::apache::http::conn::ManagedClientConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractClientConnAdapter(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpClientConnection(_obj), ::org::apache::http::HttpConnection(_obj), ::org::apache::http::HttpInetConnection(_obj), ::org::apache::http::conn::ConnectionReleaseTrigger(_obj), ::org::apache::http::conn::ManagedClientConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractClientConnAdapter(const ::org::apache::http::impl::conn::AbstractClientConnAdapter& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0), ::org::apache::http::conn::ManagedClientConnection((jobject)0) {obj = x.obj;}
    AbstractClientConnAdapter(::org::apache::http::impl::conn::AbstractClientConnAdapter&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0), ::org::apache::http::conn::ManagedClientConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::AbstractClientConnAdapter& operator=(const ::org::apache::http::impl::conn::AbstractClientConnAdapter& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::AbstractClientConnAdapter& operator=(::org::apache::http::impl::conn::AbstractClientConnAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    bool isOpen() const;
    bool isStale() const;
    void setSocketTimeout(int32_t) const;
    int32_t getSocketTimeout() const;
    ::org::apache::http::HttpConnectionMetrics getMetrics() const;
    void flush() const;
    bool isResponseAvailable(int32_t) const;
    void receiveResponseEntity(const ::org::apache::http::HttpResponse&) const;
    ::org::apache::http::HttpResponse receiveResponseHeader() const;
    void sendRequestEntity(const ::org::apache::http::HttpEntityEnclosingRequest&) const;
    void sendRequestHeader(const ::org::apache::http::HttpRequest&) const;
    ::java::net::InetAddress getLocalAddress() const;
    int32_t getLocalPort() const;
    ::java::net::InetAddress getRemoteAddress() const;
    int32_t getRemotePort() const;
    bool isSecure() const;
    ::javax::net::ssl::SSLSession getSSLSession() const;
    void markReusable() const;
    void unmarkReusable() const;
    bool isMarkedReusable() const;
    void setIdleDuration(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    void releaseConnection() const;
    void abortConnection() const;

};
}
}
}
}
}


