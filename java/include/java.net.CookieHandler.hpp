#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class CookieHandler; } }
namespace java { namespace net { class URI; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace net {
class CookieHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieHandler(const ::java::net::CookieHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CookieHandler(::java::net::CookieHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::CookieHandler& operator=(const ::java::net::CookieHandler& x) {obj = x.obj; return *this;}
    ::java::net::CookieHandler& operator=(::java::net::CookieHandler&& x) {obj = std::move(x.obj); return *this;}
    
    CookieHandler();
    static ::java::net::CookieHandler getDefault();
    static void setDefault(const ::java::net::CookieHandler&);
    ::java::util::Map get(const ::java::net::URI&, const ::java::util::Map&) const ;
    void put(const ::java::net::URI&, const ::java::util::Map&) const ;

};
}
}


