#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.cookie.AbstractCookieSpec.hpp"

namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class CookieSpecBase : public virtual ::java::lang::Object,
                       public virtual ::org::apache::http::impl::cookie::AbstractCookieSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieSpecBase(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::CookieSpec(_obj), ::org::apache::http::impl::cookie::AbstractCookieSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieSpecBase(const ::org::apache::http::impl::cookie::CookieSpecBase& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0) {obj = x.obj;}
    CookieSpecBase(::org::apache::http::impl::cookie::CookieSpecBase&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::CookieSpecBase& operator=(const ::org::apache::http::impl::cookie::CookieSpecBase& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::CookieSpecBase& operator=(::org::apache::http::impl::cookie::CookieSpecBase&& x) {obj = std::move(x.obj); return *this;}
    
    CookieSpecBase();
    void validate(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const;
    bool match(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const;

};
}
}
}
}
}


