#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } }
namespace org { namespace apache { namespace http { namespace cookie { class SetCookie; } } } }

namespace org {
namespace apache {
namespace http {
namespace cookie {
class CookieAttributeHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieAttributeHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieAttributeHandler(const ::org::apache::http::cookie::CookieAttributeHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CookieAttributeHandler(::org::apache::http::cookie::CookieAttributeHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::cookie::CookieAttributeHandler& operator=(const ::org::apache::http::cookie::CookieAttributeHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::cookie::CookieAttributeHandler& operator=(::org::apache::http::cookie::CookieAttributeHandler&& x) {obj = std::move(x.obj); return *this;}
    
    void parse(const ::org::apache::http::cookie::SetCookie&, const ::java::lang::String&) const;
    void validate(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const;
    bool match(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const;

};
}
}
}
}


