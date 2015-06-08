#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class File; } }

namespace java {
namespace io {
class FileFilter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileFilter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileFilter(const ::java::io::FileFilter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileFilter(::java::io::FileFilter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::FileFilter& operator=(const ::java::io::FileFilter& x) {obj = x.obj; return *this;}
    ::java::io::FileFilter& operator=(::java::io::FileFilter&& x) {obj = std::move(x.obj); return *this;}
    
    bool accept(const ::java::io::File&) const;

};
}
}


