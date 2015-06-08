#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.UserTokenHandler.hpp"

namespace java { namespace lang { class Object; } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class DefaultUserTokenHandler : public virtual ::java::lang::Object,
                                public virtual ::org::apache::http::client::UserTokenHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultUserTokenHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::UserTokenHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultUserTokenHandler(const ::org::apache::http::impl::client::DefaultUserTokenHandler& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::UserTokenHandler((jobject)0) {obj = x.obj;}
    DefaultUserTokenHandler(::org::apache::http::impl::client::DefaultUserTokenHandler&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::UserTokenHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::DefaultUserTokenHandler& operator=(const ::org::apache::http::impl::client::DefaultUserTokenHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::DefaultUserTokenHandler& operator=(::org::apache::http::impl::client::DefaultUserTokenHandler&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultUserTokenHandler();
    ::java::lang::Object getUserToken(const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}
}


