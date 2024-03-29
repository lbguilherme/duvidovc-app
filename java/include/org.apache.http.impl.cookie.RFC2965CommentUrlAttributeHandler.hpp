#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.cookie.CookieAttributeHandler.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } }
namespace org { namespace apache { namespace http { namespace cookie { class SetCookie; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class RFC2965CommentUrlAttributeHandler : public virtual ::java::lang::Object,
                                          public virtual ::org::apache::http::cookie::CookieAttributeHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RFC2965CommentUrlAttributeHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::CookieAttributeHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RFC2965CommentUrlAttributeHandler(const ::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0) {obj = x.obj;}
    RFC2965CommentUrlAttributeHandler(::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler& operator=(const ::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler& operator=(::org::apache::http::impl::cookie::RFC2965CommentUrlAttributeHandler&& x) {obj = std::move(x.obj); return *this;}
    
    RFC2965CommentUrlAttributeHandler();
    void parse(const ::org::apache::http::cookie::SetCookie&, const ::java::lang::String&) const;
    void validate(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const;
    bool match(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const;

};
}
}
}
}
}


