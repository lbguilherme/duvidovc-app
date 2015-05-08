#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
class R_plurals : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_plurals(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_plurals(const ::android::R_plurals& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_plurals(::android::R_plurals&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::R_plurals& operator=(const ::android::R_plurals& x) {obj = x.obj; return *this;}
    ::android::R_plurals& operator=(::android::R_plurals&& x) {obj = std::move(x.obj); return *this;}
    
    R_plurals();

};
}


