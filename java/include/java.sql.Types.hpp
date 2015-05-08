#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace sql {
class Types : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Types(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Types(const ::java::sql::Types& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Types(::java::sql::Types&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Types& operator=(const ::java::sql::Types& x) {obj = x.obj; return *this;}
    ::java::sql::Types& operator=(::java::sql::Types&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


