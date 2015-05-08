#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace nio { class ByteOrder; } }

namespace java {
namespace nio {
class ByteOrder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ByteOrder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ByteOrder(const ::java::nio::ByteOrder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ByteOrder(::java::nio::ByteOrder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::ByteOrder& operator=(const ::java::nio::ByteOrder& x) {obj = x.obj; return *this;}
    ::java::nio::ByteOrder& operator=(::java::nio::ByteOrder&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::nio::ByteOrder nativeOrder();
    ::java::lang::String toString() const ;

};
}
}


