#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Short4 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Short4(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Short4(const ::android::renderscript::Short4& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Short4(::android::renderscript::Short4&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Short4& operator=(const ::android::renderscript::Short4& x) {obj = x.obj; return *this;}
    ::android::renderscript::Short4& operator=(::android::renderscript::Short4&& x) {obj = std::move(x.obj); return *this;}
    
    Short4();
    Short4(int16_t, int16_t, int16_t, int16_t);

};
}
}


