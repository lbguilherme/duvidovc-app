#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class ContentHandler; } }

namespace java {
namespace net {
class ContentHandlerFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentHandlerFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentHandlerFactory(const ::java::net::ContentHandlerFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContentHandlerFactory(::java::net::ContentHandlerFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::ContentHandlerFactory& operator=(const ::java::net::ContentHandlerFactory& x) {obj = x.obj; return *this;}
    ::java::net::ContentHandlerFactory& operator=(::java::net::ContentHandlerFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::net::ContentHandler createContentHandler(const ::java::lang::String&) const ;

};
}
}


