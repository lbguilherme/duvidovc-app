#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace net {
class URLEncoder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URLEncoder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URLEncoder(const ::java::net::URLEncoder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    URLEncoder(::java::net::URLEncoder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::URLEncoder& operator=(const ::java::net::URLEncoder& x) {obj = x.obj; return *this;}
    ::java::net::URLEncoder& operator=(::java::net::URLEncoder&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String encode(const ::java::lang::String&);
    static ::java::lang::String encode(const ::java::lang::String&, const ::java::lang::String&);

};
}
}


