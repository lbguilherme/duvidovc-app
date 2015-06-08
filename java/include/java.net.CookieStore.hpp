#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class HttpCookie; } }
namespace java { namespace net { class URI; } }
namespace java { namespace util { class List; } }

namespace java {
namespace net {
class CookieStore : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieStore(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieStore(const ::java::net::CookieStore& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CookieStore(::java::net::CookieStore&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::CookieStore& operator=(const ::java::net::CookieStore& x) {obj = x.obj; return *this;}
    ::java::net::CookieStore& operator=(::java::net::CookieStore&& x) {obj = std::move(x.obj); return *this;}
    
    void add(const ::java::net::URI&, const ::java::net::HttpCookie&) const;
    ::java::util::List get(const ::java::net::URI&) const;
    ::java::util::List getCookies() const;
    ::java::util::List getURIs() const;
    bool remove(const ::java::net::URI&, const ::java::net::HttpCookie&) const;
    bool removeAll() const;

};
}
}


