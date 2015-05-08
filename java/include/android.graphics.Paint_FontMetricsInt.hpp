#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Paint_FontMetricsInt : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Paint_FontMetricsInt(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Paint_FontMetricsInt(const ::android::graphics::Paint_FontMetricsInt& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Paint_FontMetricsInt(::android::graphics::Paint_FontMetricsInt&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Paint_FontMetricsInt& operator=(const ::android::graphics::Paint_FontMetricsInt& x) {obj = x.obj; return *this;}
    ::android::graphics::Paint_FontMetricsInt& operator=(::android::graphics::Paint_FontMetricsInt&& x) {obj = std::move(x.obj); return *this;}
    
    Paint_FontMetricsInt();
    ::java::lang::String toString() const ;

};
}
}


