#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.MaskFilter.hpp"

namespace android { namespace graphics { class BlurMaskFilter_Blur; } }

namespace android {
namespace graphics {
class BlurMaskFilter : public virtual ::java::lang::Object,
                       public virtual ::android::graphics::MaskFilter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BlurMaskFilter(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::MaskFilter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BlurMaskFilter(const ::android::graphics::BlurMaskFilter& x) : ::java::lang::Object((jobject)0), ::android::graphics::MaskFilter((jobject)0) {obj = x.obj;}
    BlurMaskFilter(::android::graphics::BlurMaskFilter&& x) : ::java::lang::Object((jobject)0), ::android::graphics::MaskFilter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::BlurMaskFilter& operator=(const ::android::graphics::BlurMaskFilter& x) {obj = x.obj; return *this;}
    ::android::graphics::BlurMaskFilter& operator=(::android::graphics::BlurMaskFilter&& x) {obj = std::move(x.obj); return *this;}
    
    BlurMaskFilter(float, const ::android::graphics::BlurMaskFilter_Blur&);

};
}
}

#include "android.graphics.BlurMaskFilter_Blur.hpp"

