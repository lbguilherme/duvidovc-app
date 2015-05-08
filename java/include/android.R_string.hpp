#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
class R_string : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_string(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_string(const ::android::R_string& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_string(::android::R_string&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::R_string& operator=(const ::android::R_string& x) {obj = x.obj; return *this;}
    ::android::R_string& operator=(::android::R_string&& x) {obj = std::move(x.obj); return *this;}
    
    R_string();

};
}


