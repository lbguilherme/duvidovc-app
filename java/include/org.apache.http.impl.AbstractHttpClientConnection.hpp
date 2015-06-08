#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpClientConnection.hpp"

namespace org { namespace apache { namespace http { class HttpConnectionMetrics; } } }
namespace org { namespace apache { namespace http { class HttpEntityEnclosingRequest; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
class AbstractHttpClientConnection : public virtual ::java::lang::Object,
                                     public virtual ::org::apache::http::HttpClientConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractHttpClientConnection(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpClientConnection(_obj), ::org::apache::http::HttpConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractHttpClientConnection(const ::org::apache::http::impl::AbstractHttpClientConnection& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0) {obj = x.obj;}
    AbstractHttpClientConnection(::org::apache::http::impl::AbstractHttpClientConnection&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::AbstractHttpClientConnection& operator=(const ::org::apache::http::impl::AbstractHttpClientConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::AbstractHttpClientConnection& operator=(::org::apache::http::impl::AbstractHttpClientConnection&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractHttpClientConnection();
    bool isResponseAvailable(int32_t) const;
    void sendRequestHeader(const ::org::apache::http::HttpRequest&) const;
    void sendRequestEntity(const ::org::apache::http::HttpEntityEnclosingRequest&) const;
    void flush() const;
    ::org::apache::http::HttpResponse receiveResponseHeader() const;
    void receiveResponseEntity(const ::org::apache::http::HttpResponse&) const;
    bool isStale() const;
    ::org::apache::http::HttpConnectionMetrics getMetrics() const;

};
}
}
}
}


