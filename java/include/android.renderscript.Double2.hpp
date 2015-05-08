#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Double2 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Double2(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Double2(const ::android::renderscript::Double2& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Double2(::android::renderscript::Double2&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Double2& operator=(const ::android::renderscript::Double2& x) {obj = x.obj; return *this;}
    ::android::renderscript::Double2& operator=(::android::renderscript::Double2&& x) {obj = std::move(x.obj); return *this;}
    
    Double2();
    Double2(double, double);

};
}
}


