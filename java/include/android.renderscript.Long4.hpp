#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class Long4 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Long4(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Long4(const ::android::renderscript::Long4& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Long4(::android::renderscript::Long4&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Long4& operator=(const ::android::renderscript::Long4& x) {obj = x.obj; return *this;}
    ::android::renderscript::Long4& operator=(::android::renderscript::Long4&& x) {obj = std::move(x.obj); return *this;}
    
    Long4();
    Long4(int64_t, int64_t, int64_t, int64_t);

};
}
}


