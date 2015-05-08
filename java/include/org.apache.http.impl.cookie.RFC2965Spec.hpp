#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.cookie.RFC2109Spec.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class RFC2965Spec : public virtual ::java::lang::Object,
                    public virtual ::org::apache::http::impl::cookie::RFC2109Spec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RFC2965Spec(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::CookieSpec(_obj), ::org::apache::http::impl::cookie::AbstractCookieSpec(_obj), ::org::apache::http::impl::cookie::CookieSpecBase(_obj), ::org::apache::http::impl::cookie::RFC2109Spec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RFC2965Spec(const ::org::apache::http::impl::cookie::RFC2965Spec& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0), ::org::apache::http::impl::cookie::CookieSpecBase((jobject)0), ::org::apache::http::impl::cookie::RFC2109Spec((jobject)0) {obj = x.obj;}
    RFC2965Spec(::org::apache::http::impl::cookie::RFC2965Spec&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0), ::org::apache::http::impl::cookie::CookieSpecBase((jobject)0), ::org::apache::http::impl::cookie::RFC2109Spec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::RFC2965Spec& operator=(const ::org::apache::http::impl::cookie::RFC2965Spec& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::RFC2965Spec& operator=(::org::apache::http::impl::cookie::RFC2965Spec&& x) {obj = std::move(x.obj); return *this;}
    
    RFC2965Spec();
    RFC2965Spec(const std::vector< ::java::lang::String>&, bool);
    ::java::util::List parse(const ::org::apache::http::Header&, const ::org::apache::http::cookie::CookieOrigin&) const ;
    void validate(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const ;
    bool match(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const ;
    int32_t getVersion() const ;
    ::org::apache::http::Header getVersionHeader() const ;

};
}
}
}
}
}


