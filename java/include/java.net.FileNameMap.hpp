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
class FileNameMap : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileNameMap(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileNameMap(const ::java::net::FileNameMap& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileNameMap(::java::net::FileNameMap&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::FileNameMap& operator=(const ::java::net::FileNameMap& x) {obj = x.obj; return *this;}
    ::java::net::FileNameMap& operator=(::java::net::FileNameMap&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getContentTypeFor(const ::java::lang::String&) const;

};
}
}


