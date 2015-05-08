#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.PathEffect.hpp"

namespace android { namespace graphics { class Path; } }
namespace android { namespace graphics { class PathDashPathEffect_Style; } }

namespace android {
namespace graphics {
class PathDashPathEffect : public virtual ::java::lang::Object,
                           public virtual ::android::graphics::PathEffect {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PathDashPathEffect(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::PathEffect(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PathDashPathEffect(const ::android::graphics::PathDashPathEffect& x) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {obj = x.obj;}
    PathDashPathEffect(::android::graphics::PathDashPathEffect&& x) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::PathDashPathEffect& operator=(const ::android::graphics::PathDashPathEffect& x) {obj = x.obj; return *this;}
    ::android::graphics::PathDashPathEffect& operator=(::android::graphics::PathDashPathEffect&& x) {obj = std::move(x.obj); return *this;}
    
    PathDashPathEffect(const ::android::graphics::Path&, float, float, const ::android::graphics::PathDashPathEffect_Style&);

};
}
}

#include "android.graphics.PathDashPathEffect_Style.hpp"

