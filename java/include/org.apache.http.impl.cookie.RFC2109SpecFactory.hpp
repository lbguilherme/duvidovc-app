#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.cookie.CookieSpecFactory.hpp"

namespace org { namespace apache { namespace http { namespace cookie { class CookieSpec; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class RFC2109SpecFactory : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::cookie::CookieSpecFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RFC2109SpecFactory(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::CookieSpecFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RFC2109SpecFactory(const ::org::apache::http::impl::cookie::RFC2109SpecFactory& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpecFactory((jobject)0) {obj = x.obj;}
    RFC2109SpecFactory(::org::apache::http::impl::cookie::RFC2109SpecFactory&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpecFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::RFC2109SpecFactory& operator=(const ::org::apache::http::impl::cookie::RFC2109SpecFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::RFC2109SpecFactory& operator=(::org::apache::http::impl::cookie::RFC2109SpecFactory&& x) {obj = std::move(x.obj); return *this;}
    
    RFC2109SpecFactory();
    ::org::apache::http::cookie::CookieSpec newInstance(const ::org::apache::http::params::HttpParams&) const;

};
}
}
}
}
}


