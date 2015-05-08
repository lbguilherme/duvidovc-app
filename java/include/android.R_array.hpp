#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
class R_array : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_array(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_array(const ::android::R_array& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_array(::android::R_array&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::R_array& operator=(const ::android::R_array& x) {obj = x.obj; return *this;}
    ::android::R_array& operator=(::android::R_array&& x) {obj = std::move(x.obj); return *this;}
    
    R_array();

};
}


