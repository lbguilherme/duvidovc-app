#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Long2 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Long2(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Long2(const ::android::renderscript::Long2& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Long2(::android::renderscript::Long2&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Long2& operator=(const ::android::renderscript::Long2& x) {obj = x.obj; return *this;}
    ::android::renderscript::Long2& operator=(::android::renderscript::Long2&& x) {obj = std::move(x.obj); return *this;}
    
    Long2();
    Long2(int64_t, int64_t);

};
}
}


