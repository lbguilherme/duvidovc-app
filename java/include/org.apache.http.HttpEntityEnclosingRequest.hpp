#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpRequest.hpp"

namespace org { namespace apache { namespace http { class HttpEntity; } } }

namespace org {
namespace apache {
namespace http {
class HttpEntityEnclosingRequest : public virtual ::java::lang::Object,
                                   public virtual ::org::apache::http::HttpRequest {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpEntityEnclosingRequest(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpMessage(_obj), ::org::apache::http::HttpRequest(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpEntityEnclosingRequest(const ::org::apache::http::HttpEntityEnclosingRequest& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0) {obj = x.obj;}
    HttpEntityEnclosingRequest(::org::apache::http::HttpEntityEnclosingRequest&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpEntityEnclosingRequest& operator=(const ::org::apache::http::HttpEntityEnclosingRequest& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpEntityEnclosingRequest& operator=(::org::apache::http::HttpEntityEnclosingRequest&& x) {obj = std::move(x.obj); return *this;}
    
    bool expectContinue() const;
    void setEntity(const ::org::apache::http::HttpEntity&) const;
    ::org::apache::http::HttpEntity getEntity() const;

};
}
}
}


