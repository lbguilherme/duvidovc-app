#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HttpClientConnection; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpProcessor; } } } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class HttpRequestExecutor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpRequestExecutor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpRequestExecutor(const ::org::apache::http::protocol::HttpRequestExecutor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpRequestExecutor(::org::apache::http::protocol::HttpRequestExecutor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::HttpRequestExecutor& operator=(const ::org::apache::http::protocol::HttpRequestExecutor& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::HttpRequestExecutor& operator=(::org::apache::http::protocol::HttpRequestExecutor&& x) {obj = std::move(x.obj); return *this;}
    
    HttpRequestExecutor();
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::HttpRequest&, const ::org::apache::http::HttpClientConnection&, const ::org::apache::http::protocol::HttpContext&) const ;
    void preProcess(const ::org::apache::http::HttpRequest&, const ::org::apache::http::protocol::HttpProcessor&, const ::org::apache::http::protocol::HttpContext&) const ;
    void postProcess(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpProcessor&, const ::org::apache::http::protocol::HttpContext&) const ;

};
}
}
}
}


