#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Int2 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Int2(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Int2(const ::android::renderscript::Int2& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Int2(::android::renderscript::Int2&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Int2& operator=(const ::android::renderscript::Int2& x) {obj = x.obj; return *this;}
    ::android::renderscript::Int2& operator=(::android::renderscript::Int2&& x) {obj = std::move(x.obj); return *this;}
    
    Int2();
    Int2(int32_t, int32_t);

};
}
}


