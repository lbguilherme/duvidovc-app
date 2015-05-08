#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class HttpExpectationVerifier : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpExpectationVerifier(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpExpectationVerifier(const ::org::apache::http::protocol::HttpExpectationVerifier& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpExpectationVerifier(::org::apache::http::protocol::HttpExpectationVerifier&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::HttpExpectationVerifier& operator=(const ::org::apache::http::protocol::HttpExpectationVerifier& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::HttpExpectationVerifier& operator=(::org::apache::http::protocol::HttpExpectationVerifier&& x) {obj = std::move(x.obj); return *this;}
    
    void verify(const ::org::apache::http::HttpRequest&, const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const ;

};
}
}
}
}


