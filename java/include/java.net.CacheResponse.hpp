#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace util { class Map; } }

namespace java {
namespace net {
class CacheResponse : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CacheResponse(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CacheResponse(const ::java::net::CacheResponse& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CacheResponse(::java::net::CacheResponse&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::CacheResponse& operator=(const ::java::net::CacheResponse& x) {obj = x.obj; return *this;}
    ::java::net::CacheResponse& operator=(::java::net::CacheResponse&& x) {obj = std::move(x.obj); return *this;}
    
    CacheResponse();
    ::java::io::InputStream getBody() const ;
    ::java::util::Map getHeaders() const ;

};
}
}


