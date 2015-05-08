#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Float4 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Float4(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Float4(const ::android::renderscript::Float4& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Float4(::android::renderscript::Float4&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Float4& operator=(const ::android::renderscript::Float4& x) {obj = x.obj; return *this;}
    ::android::renderscript::Float4& operator=(::android::renderscript::Float4&& x) {obj = std::move(x.obj); return *this;}
    
    Float4();
    Float4(float, float, float, float);

};
}
}


