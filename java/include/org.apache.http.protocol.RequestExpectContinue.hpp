#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpRequestInterceptor.hpp"

namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class RequestExpectContinue : public virtual ::java::lang::Object,
                              public virtual ::org::apache::http::HttpRequestInterceptor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RequestExpectContinue(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpRequestInterceptor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RequestExpectContinue(const ::org::apache::http::protocol::RequestExpectContinue& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0) {obj = x.obj;}
    RequestExpectContinue(::org::apache::http::protocol::RequestExpectContinue&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::RequestExpectContinue& operator=(const ::org::apache::http::protocol::RequestExpectContinue& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::RequestExpectContinue& operator=(::org::apache::http::protocol::RequestExpectContinue&& x) {obj = std::move(x.obj); return *this;}
    
    RequestExpectContinue();
    void process(const ::org::apache::http::HttpRequest&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}


