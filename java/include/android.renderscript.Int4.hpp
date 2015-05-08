#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Int4 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Int4(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Int4(const ::android::renderscript::Int4& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Int4(::android::renderscript::Int4&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Int4& operator=(const ::android::renderscript::Int4& x) {obj = x.obj; return *this;}
    ::android::renderscript::Int4& operator=(::android::renderscript::Int4&& x) {obj = std::move(x.obj); return *this;}
    
    Int4();
    Int4(int32_t, int32_t, int32_t, int32_t);

};
}
}


