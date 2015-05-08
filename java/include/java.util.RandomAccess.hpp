#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace util {
class RandomAccess : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RandomAccess(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RandomAccess(const ::java::util::RandomAccess& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RandomAccess(::java::util::RandomAccess&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::RandomAccess& operator=(const ::java::util::RandomAccess& x) {obj = x.obj; return *this;}
    ::java::util::RandomAccess& operator=(::java::util::RandomAccess&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


