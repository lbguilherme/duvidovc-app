#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class HttpCookie; } }
namespace java { namespace net { class URI; } }

namespace java {
namespace net {
class CookiePolicy : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookiePolicy(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookiePolicy(const ::java::net::CookiePolicy& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CookiePolicy(::java::net::CookiePolicy&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::CookiePolicy& operator=(const ::java::net::CookiePolicy& x) {obj = x.obj; return *this;}
    ::java::net::CookiePolicy& operator=(::java::net::CookiePolicy&& x) {obj = std::move(x.obj); return *this;}
    
    bool shouldAccept(const ::java::net::URI&, const ::java::net::HttpCookie&) const;

};
}
}


