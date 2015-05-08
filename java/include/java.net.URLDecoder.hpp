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
class URLDecoder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URLDecoder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URLDecoder(const ::java::net::URLDecoder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    URLDecoder(::java::net::URLDecoder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::URLDecoder& operator=(const ::java::net::URLDecoder& x) {obj = x.obj; return *this;}
    ::java::net::URLDecoder& operator=(::java::net::URLDecoder&& x) {obj = std::move(x.obj); return *this;}
    
    URLDecoder();
    static ::java::lang::String decode(const ::java::lang::String&);
    static ::java::lang::String decode(const ::java::lang::String&, const ::java::lang::String&);

};
}
}


