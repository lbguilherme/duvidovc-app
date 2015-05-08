#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.PathEffect.hpp"

namespace android { namespace graphics { class PathEffect; } }

namespace android {
namespace graphics {
class ComposePathEffect : public virtual ::java::lang::Object,
                          public virtual ::android::graphics::PathEffect {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ComposePathEffect(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::PathEffect(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ComposePathEffect(const ::android::graphics::ComposePathEffect& x) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {obj = x.obj;}
    ComposePathEffect(::android::graphics::ComposePathEffect&& x) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::ComposePathEffect& operator=(const ::android::graphics::ComposePathEffect& x) {obj = x.obj; return *this;}
    ::android::graphics::ComposePathEffect& operator=(::android::graphics::ComposePathEffect&& x) {obj = std::move(x.obj); return *this;}
    
    ComposePathEffect(const ::android::graphics::PathEffect&, const ::android::graphics::PathEffect&);

};
}
}


