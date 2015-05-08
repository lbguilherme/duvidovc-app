#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.ColorFilter.hpp"

namespace android { namespace graphics { class ColorMatrix; } }

namespace android {
namespace graphics {
class ColorMatrixColorFilter : public virtual ::java::lang::Object,
                               public virtual ::android::graphics::ColorFilter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ColorMatrixColorFilter(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::ColorFilter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ColorMatrixColorFilter(const ::android::graphics::ColorMatrixColorFilter& x) : ::java::lang::Object((jobject)0), ::android::graphics::ColorFilter((jobject)0) {obj = x.obj;}
    ColorMatrixColorFilter(::android::graphics::ColorMatrixColorFilter&& x) : ::java::lang::Object((jobject)0), ::android::graphics::ColorFilter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::ColorMatrixColorFilter& operator=(const ::android::graphics::ColorMatrixColorFilter& x) {obj = x.obj; return *this;}
    ::android::graphics::ColorMatrixColorFilter& operator=(::android::graphics::ColorMatrixColorFilter&& x) {obj = std::move(x.obj); return *this;}
    
    ColorMatrixColorFilter(const ::android::graphics::ColorMatrix&);
    ColorMatrixColorFilter(const std::vector< float>&);

};
}
}


