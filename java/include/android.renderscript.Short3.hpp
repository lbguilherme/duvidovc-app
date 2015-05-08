#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Short3 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Short3(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Short3(const ::android::renderscript::Short3& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Short3(::android::renderscript::Short3&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Short3& operator=(const ::android::renderscript::Short3& x) {obj = x.obj; return *this;}
    ::android::renderscript::Short3& operator=(::android::renderscript::Short3&& x) {obj = std::move(x.obj); return *this;}
    
    Short3();
    Short3(int16_t, int16_t, int16_t);

};
}
}


