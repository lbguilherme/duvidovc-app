#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
class R_layout : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_layout(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_layout(const ::com::facebook::R_layout& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_layout(::com::facebook::R_layout&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::R_layout& operator=(const ::com::facebook::R_layout& x) {obj = x.obj; return *this;}
    ::com::facebook::R_layout& operator=(::com::facebook::R_layout&& x) {obj = std::move(x.obj); return *this;}
    
    R_layout();

};
}
}


