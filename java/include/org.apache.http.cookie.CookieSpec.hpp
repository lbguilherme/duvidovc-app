#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { class List; } }
namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } }

namespace org {
namespace apache {
namespace http {
namespace cookie {
class CookieSpec : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieSpec(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieSpec(const ::org::apache::http::cookie::CookieSpec& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CookieSpec(::org::apache::http::cookie::CookieSpec&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::cookie::CookieSpec& operator=(const ::org::apache::http::cookie::CookieSpec& x) {obj = x.obj; return *this;}
    ::org::apache::http::cookie::CookieSpec& operator=(::org::apache::http::cookie::CookieSpec&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getVersion() const ;
    ::java::util::List parse(const ::org::apache::http::Header&, const ::org::apache::http::cookie::CookieOrigin&) const ;
    void validate(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const ;
    bool match(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const ;
    ::java::util::List formatCookies(const ::java::util::List&) const ;
    ::org::apache::http::Header getVersionHeader() const ;

};
}
}
}
}


