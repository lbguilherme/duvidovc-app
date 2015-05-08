#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace lang {
class Runnable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Runnable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Runnable(const ::java::lang::Runnable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Runnable(::java::lang::Runnable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Runnable& operator=(const ::java::lang::Runnable& x) {obj = x.obj; return *this;}
    ::java::lang::Runnable& operator=(::java::lang::Runnable&& x) {obj = std::move(x.obj); return *this;}
    
    void run() const ;

};
}
}


