#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Byte2 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Byte2(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Byte2(const ::android::renderscript::Byte2& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Byte2(::android::renderscript::Byte2&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Byte2& operator=(const ::android::renderscript::Byte2& x) {obj = x.obj; return *this;}
    ::android::renderscript::Byte2& operator=(::android::renderscript::Byte2&& x) {obj = std::move(x.obj); return *this;}
    
    Byte2();
    Byte2(int8_t, int8_t);

};
}
}


