#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace bolts {
class Bolts : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Bolts(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Bolts(const ::bolts::Bolts& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Bolts(::bolts::Bolts&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::Bolts& operator=(const ::bolts::Bolts& x) {obj = x.obj; return *this;}
    ::bolts::Bolts& operator=(::bolts::Bolts&& x) {obj = std::move(x.obj); return *this;}
    
    Bolts();

};
}


