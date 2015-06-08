#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class CacheRequest; } }
namespace java { namespace net { class CacheResponse; } }
namespace java { namespace net { class ResponseCache; } }
namespace java { namespace net { class URI; } }
namespace java { namespace net { class URLConnection; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace net {
class ResponseCache : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResponseCache(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResponseCache(const ::java::net::ResponseCache& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ResponseCache(::java::net::ResponseCache&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::ResponseCache& operator=(const ::java::net::ResponseCache& x) {obj = x.obj; return *this;}
    ::java::net::ResponseCache& operator=(::java::net::ResponseCache&& x) {obj = std::move(x.obj); return *this;}
    
    ResponseCache();
    static ::java::net::ResponseCache getDefault();
    static void setDefault(const ::java::net::ResponseCache&);
    ::java::net::CacheResponse get(const ::java::net::URI&, const ::java::lang::String&, const ::java::util::Map&) const;
    ::java::net::CacheRequest put(const ::java::net::URI&, const ::java::net::URLConnection&) const;

};
}
}


