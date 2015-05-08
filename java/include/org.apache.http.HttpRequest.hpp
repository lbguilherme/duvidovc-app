#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpMessage.hpp"

namespace org { namespace apache { namespace http { class RequestLine; } } }

namespace org {
namespace apache {
namespace http {
class HttpRequest : public virtual ::java::lang::Object,
                    public virtual ::org::apache::http::HttpMessage {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpRequest(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpMessage(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpRequest(const ::org::apache::http::HttpRequest& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0) {obj = x.obj;}
    HttpRequest(::org::apache::http::HttpRequest&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpRequest& operator=(const ::org::apache::http::HttpRequest& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpRequest& operator=(::org::apache::http::HttpRequest&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::RequestLine getRequestLine() const ;

};
}
}
}


