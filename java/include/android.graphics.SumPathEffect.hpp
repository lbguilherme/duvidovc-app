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
class SumPathEffect : public virtual ::java::lang::Object,
                      public virtual ::android::graphics::PathEffect {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SumPathEffect(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::PathEffect(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SumPathEffect(const ::android::graphics::SumPathEffect& x) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {obj = x.obj;}
    SumPathEffect(::android::graphics::SumPathEffect&& x) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::SumPathEffect& operator=(const ::android::graphics::SumPathEffect& x) {obj = x.obj; return *this;}
    ::android::graphics::SumPathEffect& operator=(::android::graphics::SumPathEffect&& x) {obj = std::move(x.obj); return *this;}
    
    SumPathEffect(const ::android::graphics::PathEffect&, const ::android::graphics::PathEffect&);

};
}
}


