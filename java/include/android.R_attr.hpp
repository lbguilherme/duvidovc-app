#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
class R_attr : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_attr(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_attr(const ::android::R_attr& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_attr(::android::R_attr&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::R_attr& operator=(const ::android::R_attr& x) {obj = x.obj; return *this;}
    ::android::R_attr& operator=(::android::R_attr&& x) {obj = std::move(x.obj); return *this;}
    
    R_attr();

};
}


