#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.DrawFilter.hpp"


namespace android {
namespace graphics {
class PaintFlagsDrawFilter : public virtual ::java::lang::Object,
                             public virtual ::android::graphics::DrawFilter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PaintFlagsDrawFilter(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::DrawFilter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PaintFlagsDrawFilter(const ::android::graphics::PaintFlagsDrawFilter& x) : ::java::lang::Object((jobject)0), ::android::graphics::DrawFilter((jobject)0) {obj = x.obj;}
    PaintFlagsDrawFilter(::android::graphics::PaintFlagsDrawFilter&& x) : ::java::lang::Object((jobject)0), ::android::graphics::DrawFilter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::PaintFlagsDrawFilter& operator=(const ::android::graphics::PaintFlagsDrawFilter& x) {obj = x.obj; return *this;}
    ::android::graphics::PaintFlagsDrawFilter& operator=(::android::graphics::PaintFlagsDrawFilter&& x) {obj = std::move(x.obj); return *this;}
    
    PaintFlagsDrawFilter(int32_t, int32_t);

};
}
}


