#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
class R_animator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_animator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_animator(const ::android::R_animator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_animator(::android::R_animator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::R_animator& operator=(const ::android::R_animator& x) {obj = x.obj; return *this;}
    ::android::R_animator& operator=(::android::R_animator&& x) {obj = std::move(x.obj); return *this;}
    
    R_animator();

};
}


