#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { namespace cookie { class CookieSpec; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace cookie {
class CookieSpecFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieSpecFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieSpecFactory(const ::org::apache::http::cookie::CookieSpecFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CookieSpecFactory(::org::apache::http::cookie::CookieSpecFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::cookie::CookieSpecFactory& operator=(const ::org::apache::http::cookie::CookieSpecFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::cookie::CookieSpecFactory& operator=(::org::apache::http::cookie::CookieSpecFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::cookie::CookieSpec newInstance(const ::org::apache::http::params::HttpParams&) const ;

};
}
}
}
}


