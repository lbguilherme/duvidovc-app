#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpServerConnection.hpp"

namespace org { namespace apache { namespace http { class HttpConnectionMetrics; } } }
namespace org { namespace apache { namespace http { class HttpEntityEnclosingRequest; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
class AbstractHttpServerConnection : public virtual ::java::lang::Object,
                                     public virtual ::org::apache::http::HttpServerConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractHttpServerConnection(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpConnection(_obj), ::org::apache::http::HttpServerConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractHttpServerConnection(const ::org::apache::http::impl::AbstractHttpServerConnection& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpServerConnection((jobject)0) {obj = x.obj;}
    AbstractHttpServerConnection(::org::apache::http::impl::AbstractHttpServerConnection&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpServerConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::AbstractHttpServerConnection& operator=(const ::org::apache::http::impl::AbstractHttpServerConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::AbstractHttpServerConnection& operator=(::org::apache::http::impl::AbstractHttpServerConnection&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractHttpServerConnection();
    ::org::apache::http::HttpRequest receiveRequestHeader() const ;
    void receiveRequestEntity(const ::org::apache::http::HttpEntityEnclosingRequest&) const ;
    void flush() const ;
    void sendResponseHeader(const ::org::apache::http::HttpResponse&) const ;
    void sendResponseEntity(const ::org::apache::http::HttpResponse&) const ;
    bool isStale() const ;
    ::org::apache::http::HttpConnectionMetrics getMetrics() const ;

};
}
}
}
}


