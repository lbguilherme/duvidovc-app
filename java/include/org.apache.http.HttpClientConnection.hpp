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
class HttpClientConnection : public virtual ::java::lang::Object,
                             public virtual ::org::apache::http::HttpConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpClientConnection(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpClientConnection(const ::org::apache::http::HttpClientConnection& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0) {obj = x.obj;}
    HttpClientConnection(::org::apache::http::HttpClientConnection&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpClientConnection& operator=(const ::org::apache::http::HttpClientConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpClientConnection& operator=(::org::apache::http::HttpClientConnection&& x) {obj = std::move(x.obj); return *this;}
    
    bool isResponseAvailable(int32_t) const ;
    void sendRequestHeader(const ::org::apache::http::HttpRequest&) const ;
    void sendRequestEntity(const ::org::apache::http::HttpEntityEnclosingRequest&) const ;
    ::org::apache::http::HttpResponse receiveResponseHeader() const ;
    void receiveResponseEntity(const ::org::apache::http::HttpResponse&) const ;
    void flush() const ;

};
}
}
}


