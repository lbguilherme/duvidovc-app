#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.CookieHandler.hpp"

namespace java { namespace net { class CookiePolicy; } }
namespace java { namespace net { class CookieStore; } }
namespace java { namespace net { class URI; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace net {
class CookieManager : public virtual ::java::lang::Object,
                      public virtual ::java::net::CookieHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieManager(jobject _obj) : ::java::lang::Object(_obj), ::java::net::CookieHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieManager(const ::java::net::CookieManager& x) : ::java::lang::Object((jobject)0), ::java::net::CookieHandler((jobject)0) {obj = x.obj;}
    CookieManager(::java::net::CookieManager&& x) : ::java::lang::Object((jobject)0), ::java::net::CookieHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::CookieManager& operator=(const ::java::net::CookieManager& x) {obj = x.obj; return *this;}
    ::java::net::CookieManager& operator=(::java::net::CookieManager&& x) {obj = std::move(x.obj); return *this;}
    
    CookieManager();
    CookieManager(const ::java::net::CookieStore&, const ::java::net::CookiePolicy&);
    ::java::util::Map get(const ::java::net::URI&, const ::java::util::Map&) const ;
    void put(const ::java::net::URI&, const ::java::util::Map&) const ;
    void setCookiePolicy(const ::java::net::CookiePolicy&) const ;
    ::java::net::CookieStore getCookieStore() const ;

};
}
}


