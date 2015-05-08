#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.cookie.AbstractCookieAttributeHandler.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace cookie { class SetCookie; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class BasicExpiresHandler : public virtual ::java::lang::Object,
                            public virtual ::org::apache::http::impl::cookie::AbstractCookieAttributeHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicExpiresHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::CookieAttributeHandler(_obj), ::org::apache::http::impl::cookie::AbstractCookieAttributeHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicExpiresHandler(const ::org::apache::http::impl::cookie::BasicExpiresHandler& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieAttributeHandler((jobject)0) {obj = x.obj;}
    BasicExpiresHandler(::org::apache::http::impl::cookie::BasicExpiresHandler&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieAttributeHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::BasicExpiresHandler& operator=(const ::org::apache::http::impl::cookie::BasicExpiresHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::BasicExpiresHandler& operator=(::org::apache::http::impl::cookie::BasicExpiresHandler&& x) {obj = std::move(x.obj); return *this;}
    
    BasicExpiresHandler(const std::vector< ::java::lang::String>&);
    void parse(const ::org::apache::http::cookie::SetCookie&, const ::java::lang::String&) const ;

};
}
}
}
}
}


