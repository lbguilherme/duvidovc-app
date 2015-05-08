#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace net {
class URLStreamHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URLStreamHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URLStreamHandler(const ::java::net::URLStreamHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    URLStreamHandler(::java::net::URLStreamHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::URLStreamHandler& operator=(const ::java::net::URLStreamHandler& x) {obj = x.obj; return *this;}
    ::java::net::URLStreamHandler& operator=(::java::net::URLStreamHandler&& x) {obj = std::move(x.obj); return *this;}
    
    URLStreamHandler();

};
}
}


