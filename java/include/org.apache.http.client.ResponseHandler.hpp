#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }

namespace org {
namespace apache {
namespace http {
namespace client {
class ResponseHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResponseHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResponseHandler(const ::org::apache::http::client::ResponseHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ResponseHandler(::org::apache::http::client::ResponseHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::ResponseHandler& operator=(const ::org::apache::http::client::ResponseHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::ResponseHandler& operator=(::org::apache::http::client::ResponseHandler&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object handleResponse(const ::org::apache::http::HttpResponse&) const;

};
}
}
}
}


