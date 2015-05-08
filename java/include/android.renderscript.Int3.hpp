#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Int3 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Int3(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Int3(const ::android::renderscript::Int3& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Int3(::android::renderscript::Int3&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Int3& operator=(const ::android::renderscript::Int3& x) {obj = x.obj; return *this;}
    ::android::renderscript::Int3& operator=(::android::renderscript::Int3&& x) {obj = std::move(x.obj); return *this;}
    
    Int3();
    Int3(int32_t, int32_t, int32_t);

};
}
}


