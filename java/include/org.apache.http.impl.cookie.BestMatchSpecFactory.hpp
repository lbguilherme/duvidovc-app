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
class BestMatchSpecFactory : public virtual ::java::lang::Object,
                             public virtual ::org::apache::http::cookie::CookieSpecFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BestMatchSpecFactory(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::CookieSpecFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BestMatchSpecFactory(const ::org::apache::http::impl::cookie::BestMatchSpecFactory& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpecFactory((jobject)0) {obj = x.obj;}
    BestMatchSpecFactory(::org::apache::http::impl::cookie::BestMatchSpecFactory&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpecFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::BestMatchSpecFactory& operator=(const ::org::apache::http::impl::cookie::BestMatchSpecFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::BestMatchSpecFactory& operator=(::org::apache::http::impl::cookie::BestMatchSpecFactory&& x) {obj = std::move(x.obj); return *this;}
    
    BestMatchSpecFactory();
    ::org::apache::http::cookie::CookieSpec newInstance(const ::org::apache::http::params::HttpParams&) const;

};
}
}
}
}
}


