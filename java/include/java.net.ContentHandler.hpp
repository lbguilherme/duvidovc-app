#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace net { class URLConnection; } }

namespace java {
namespace net {
class ContentHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentHandler(const ::java::net::ContentHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContentHandler(::java::net::ContentHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::ContentHandler& operator=(const ::java::net::ContentHandler& x) {obj = x.obj; return *this;}
    ::java::net::ContentHandler& operator=(::java::net::ContentHandler&& x) {obj = std::move(x.obj); return *this;}
    
    ContentHandler();
    ::java::lang::Object getContent(const ::java::net::URLConnection&) const;
    ::java::lang::Object getContent(const ::java::net::URLConnection&, const std::vector< ::java::lang::Class>&) const;

};
}
}


