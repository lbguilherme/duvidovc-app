#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace io {
class Flushable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Flushable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Flushable(const ::java::io::Flushable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Flushable(::java::io::Flushable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::Flushable& operator=(const ::java::io::Flushable& x) {obj = x.obj; return *this;}
    ::java::io::Flushable& operator=(::java::io::Flushable&& x) {obj = std::move(x.obj); return *this;}
    
    void flush() const ;

};
}
}


