#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class FilenameFilter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FilenameFilter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FilenameFilter(const ::java::io::FilenameFilter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FilenameFilter(::java::io::FilenameFilter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::FilenameFilter& operator=(const ::java::io::FilenameFilter& x) {obj = x.obj; return *this;}
    ::java::io::FilenameFilter& operator=(::java::io::FilenameFilter&& x) {obj = std::move(x.obj); return *this;}
    
    bool accept(const ::java::io::File&, const ::java::lang::String&) const ;

};
}
}


