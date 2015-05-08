#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.MaskFilter.hpp"


namespace android {
namespace graphics {
class EmbossMaskFilter : public virtual ::java::lang::Object,
                         public virtual ::android::graphics::MaskFilter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EmbossMaskFilter(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::MaskFilter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EmbossMaskFilter(const ::android::graphics::EmbossMaskFilter& x) : ::java::lang::Object((jobject)0), ::android::graphics::MaskFilter((jobject)0) {obj = x.obj;}
    EmbossMaskFilter(::android::graphics::EmbossMaskFilter&& x) : ::java::lang::Object((jobject)0), ::android::graphics::MaskFilter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::EmbossMaskFilter& operator=(const ::android::graphics::EmbossMaskFilter& x) {obj = x.obj; return *this;}
    ::android::graphics::EmbossMaskFilter& operator=(::android::graphics::EmbossMaskFilter&& x) {obj = std::move(x.obj); return *this;}
    
    EmbossMaskFilter(const std::vector< float>&, float, float, float);

};
}
}


