#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace graphics {
class Paint_FontMetrics : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Paint_FontMetrics(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Paint_FontMetrics(const ::android::graphics::Paint_FontMetrics& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Paint_FontMetrics(::android::graphics::Paint_FontMetrics&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Paint_FontMetrics& operator=(const ::android::graphics::Paint_FontMetrics& x) {obj = x.obj; return *this;}
    ::android::graphics::Paint_FontMetrics& operator=(::android::graphics::Paint_FontMetrics&& x) {obj = std::move(x.obj); return *this;}
    
    Paint_FontMetrics();

};
}
}


