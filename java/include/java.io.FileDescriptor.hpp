#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class FileDescriptor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileDescriptor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileDescriptor(const ::java::io::FileDescriptor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileDescriptor(::java::io::FileDescriptor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::FileDescriptor& operator=(const ::java::io::FileDescriptor& x) {obj = x.obj; return *this;}
    ::java::io::FileDescriptor& operator=(::java::io::FileDescriptor&& x) {obj = std::move(x.obj); return *this;}
    
    FileDescriptor();
    void sync() const ;
    bool valid() const ;
    ::java::lang::String toString() const ;

};
}
}


