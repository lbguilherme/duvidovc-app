#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Short2 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Short2(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Short2(const ::android::renderscript::Short2& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Short2(::android::renderscript::Short2&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Short2& operator=(const ::android::renderscript::Short2& x) {obj = x.obj; return *this;}
    ::android::renderscript::Short2& operator=(::android::renderscript::Short2&& x) {obj = std::move(x.obj); return *this;}
    
    Short2();
    Short2(int16_t, int16_t);

};
}
}


