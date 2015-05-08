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
class NetscapeDraftSpecFactory : public virtual ::java::lang::Object,
                                 public virtual ::org::apache::http::cookie::CookieSpecFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NetscapeDraftSpecFactory(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::CookieSpecFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NetscapeDraftSpecFactory(const ::org::apache::http::impl::cookie::NetscapeDraftSpecFactory& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpecFactory((jobject)0) {obj = x.obj;}
    NetscapeDraftSpecFactory(::org::apache::http::impl::cookie::NetscapeDraftSpecFactory&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpecFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::NetscapeDraftSpecFactory& operator=(const ::org::apache::http::impl::cookie::NetscapeDraftSpecFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::NetscapeDraftSpecFactory& operator=(::org::apache::http::impl::cookie::NetscapeDraftSpecFactory&& x) {obj = std::move(x.obj); return *this;}
    
    NetscapeDraftSpecFactory();
    ::org::apache::http::cookie::CookieSpec newInstance(const ::org::apache::http::params::HttpParams&) const ;

};
}
}
}
}
}


