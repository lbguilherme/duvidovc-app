#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Byte3 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Byte3(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Byte3(const ::android::renderscript::Byte3& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Byte3(::android::renderscript::Byte3&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Byte3& operator=(const ::android::renderscript::Byte3& x) {obj = x.obj; return *this;}
    ::android::renderscript::Byte3& operator=(::android::renderscript::Byte3&& x) {obj = std::move(x.obj); return *this;}
    
    Byte3();
    Byte3(int8_t, int8_t, int8_t);

};
}
}


