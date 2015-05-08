#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.ColorFilter.hpp"


namespace android {
namespace graphics {
class LightingColorFilter : public virtual ::java::lang::Object,
                            public virtual ::android::graphics::ColorFilter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LightingColorFilter(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::ColorFilter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LightingColorFilter(const ::android::graphics::LightingColorFilter& x) : ::java::lang::Object((jobject)0), ::android::graphics::ColorFilter((jobject)0) {obj = x.obj;}
    LightingColorFilter(::android::graphics::LightingColorFilter&& x) : ::java::lang::Object((jobject)0), ::android::graphics::ColorFilter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::LightingColorFilter& operator=(const ::android::graphics::LightingColorFilter& x) {obj = x.obj; return *this;}
    ::android::graphics::LightingColorFilter& operator=(::android::graphics::LightingColorFilter&& x) {obj = std::move(x.obj); return *this;}
    
    LightingColorFilter(int32_t, int32_t);

};
}
}


