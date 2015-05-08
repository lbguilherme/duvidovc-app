#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace nio {
namespace channels {
class FileChannel_MapMode : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileChannel_MapMode(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileChannel_MapMode(const ::java::nio::channels::FileChannel_MapMode& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileChannel_MapMode(::java::nio::channels::FileChannel_MapMode&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::FileChannel_MapMode& operator=(const ::java::nio::channels::FileChannel_MapMode& x) {obj = x.obj; return *this;}
    ::java::nio::channels::FileChannel_MapMode& operator=(::java::nio::channels::FileChannel_MapMode&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String toString() const ;

};
}
}
}


