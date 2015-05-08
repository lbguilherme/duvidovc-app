#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class URLStreamHandler; } }

namespace java {
namespace net {
class URLStreamHandlerFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URLStreamHandlerFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URLStreamHandlerFactory(const ::java::net::URLStreamHandlerFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    URLStreamHandlerFactory(::java::net::URLStreamHandlerFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::URLStreamHandlerFactory& operator=(const ::java::net::URLStreamHandlerFactory& x) {obj = x.obj; return *this;}
    ::java::net::URLStreamHandlerFactory& operator=(::java::net::URLStreamHandlerFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::net::URLStreamHandler createURLStreamHandler(const ::java::lang::String&) const ;

};
}
}


