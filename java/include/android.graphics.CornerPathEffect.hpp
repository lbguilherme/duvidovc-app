#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.PathEffect.hpp"


namespace android {
namespace graphics {
class CornerPathEffect : public virtual ::java::lang::Object,
                         public virtual ::android::graphics::PathEffect {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CornerPathEffect(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::PathEffect(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CornerPathEffect(const ::android::graphics::CornerPathEffect& x) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {obj = x.obj;}
    CornerPathEffect(::android::graphics::CornerPathEffect&& x) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::CornerPathEffect& operator=(const ::android::graphics::CornerPathEffect& x) {obj = x.obj; return *this;}
    ::android::graphics::CornerPathEffect& operator=(::android::graphics::CornerPathEffect&& x) {obj = std::move(x.obj); return *this;}
    
    CornerPathEffect(float);

};
}
}


