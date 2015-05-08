#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
class R_style : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_style(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_style(const ::android::R_style& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_style(::android::R_style&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::R_style& operator=(const ::android::R_style& x) {obj = x.obj; return *this;}
    ::android::R_style& operator=(::android::R_style&& x) {obj = std::move(x.obj); return *this;}
    
    R_style();

};
}


