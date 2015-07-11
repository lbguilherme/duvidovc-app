#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace google {
namespace android {
namespace gms {
class R_styleable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_styleable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_styleable(const ::com::google::android::gms::R_styleable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_styleable(::com::google::android::gms::R_styleable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::google::android::gms::R_styleable& operator=(const ::com::google::android::gms::R_styleable& x) {obj = x.obj; return *this;}
    ::com::google::android::gms::R_styleable& operator=(::com::google::android::gms::R_styleable&& x) {obj = std::move(x.obj); return *this;}
    
    R_styleable();

};
}
}
}
}


