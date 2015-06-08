#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
class UserTokenHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UserTokenHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UserTokenHandler(const ::org::apache::http::client::UserTokenHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    UserTokenHandler(::org::apache::http::client::UserTokenHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::UserTokenHandler& operator=(const ::org::apache::http::client::UserTokenHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::UserTokenHandler& operator=(::org::apache::http::client::UserTokenHandler&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object getUserToken(const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}


