#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { class Date; } }
namespace java { namespace util { class List; } }
namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
class CookieStore : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieStore(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieStore(const ::org::apache::http::client::CookieStore& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CookieStore(::org::apache::http::client::CookieStore&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::CookieStore& operator=(const ::org::apache::http::client::CookieStore& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::CookieStore& operator=(::org::apache::http::client::CookieStore&& x) {obj = std::move(x.obj); return *this;}
    
    void addCookie(const ::org::apache::http::cookie::Cookie&) const ;
    ::java::util::List getCookies() const ;
    bool clearExpired(const ::java::util::Date&) const ;
    void clear() const ;

};
}
}
}
}


