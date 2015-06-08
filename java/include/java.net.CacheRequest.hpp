#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class OutputStream; } }

namespace java {
namespace net {
class CacheRequest : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CacheRequest(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CacheRequest(const ::java::net::CacheRequest& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CacheRequest(::java::net::CacheRequest&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::CacheRequest& operator=(const ::java::net::CacheRequest& x) {obj = x.obj; return *this;}
    ::java::net::CacheRequest& operator=(::java::net::CacheRequest&& x) {obj = std::move(x.obj); return *this;}
    
    CacheRequest();
    void abort() const;
    ::java::io::OutputStream getBody() const;

};
}
}


