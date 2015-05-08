#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpConnection.hpp"

namespace org { namespace apache { namespace http { class HttpEntityEnclosingRequest; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }

namespace org {
namespace apache {
namespace http {
class HttpServerConnection : public virtual ::java::lang::Object,
                             public virtual ::org::apache::http::HttpConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpServerConnection(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpServerConnection(const ::org::apache::http::HttpServerConnection& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0) {obj = x.obj;}
    HttpServerConnection(::org::apache::http::HttpServerConnection&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpServerConnection& operator=(const ::org::apache::http::HttpServerConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpServerConnection& operator=(::org::apache::http::HttpServerConnection&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::HttpRequest receiveRequestHeader() const ;
    void receiveRequestEntity(const ::org::apache::http::HttpEntityEnclosingRequest&) const ;
    void sendResponseHeader(const ::org::apache::http::HttpResponse&) const ;
    void sendResponseEntity(const ::org::apache::http::HttpResponse&) const ;
    void flush() const ;

};
}
}
}


