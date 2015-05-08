#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
class RequestDirector : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RequestDirector(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RequestDirector(const ::org::apache::http::client::RequestDirector& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RequestDirector(::org::apache::http::client::RequestDirector&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::RequestDirector& operator=(const ::org::apache::http::client::RequestDirector& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::RequestDirector& operator=(::org::apache::http::client::RequestDirector&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::protocol::HttpContext&) const ;

};
}
}
}
}


