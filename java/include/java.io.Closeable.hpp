#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace io {
class Closeable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Closeable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Closeable(const ::java::io::Closeable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Closeable(::java::io::Closeable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::Closeable& operator=(const ::java::io::Closeable& x) {obj = x.obj; return *this;}
    ::java::io::Closeable& operator=(::java::io::Closeable&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const ;

};
}
}


