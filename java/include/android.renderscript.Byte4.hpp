#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Byte4 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Byte4(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Byte4(const ::android::renderscript::Byte4& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Byte4(::android::renderscript::Byte4&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Byte4& operator=(const ::android::renderscript::Byte4& x) {obj = x.obj; return *this;}
    ::android::renderscript::Byte4& operator=(::android::renderscript::Byte4&& x) {obj = std::move(x.obj); return *this;}
    
    Byte4();
    Byte4(int8_t, int8_t, int8_t, int8_t);

};
}
}


