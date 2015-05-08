#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.cookie.CookieSpec.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieAttributeHandler; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class AbstractCookieSpec : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::cookie::CookieSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractCookieSpec(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::CookieSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractCookieSpec(const ::org::apache::http::impl::cookie::AbstractCookieSpec& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0) {obj = x.obj;}
    AbstractCookieSpec(::org::apache::http::impl::cookie::AbstractCookieSpec&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::AbstractCookieSpec& operator=(const ::org::apache::http::impl::cookie::AbstractCookieSpec& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::AbstractCookieSpec& operator=(::org::apache::http::impl::cookie::AbstractCookieSpec&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractCookieSpec();
    void registerAttribHandler(const ::java::lang::String&, const ::org::apache::http::cookie::CookieAttributeHandler&) const ;

};
}
}
}
}
}


