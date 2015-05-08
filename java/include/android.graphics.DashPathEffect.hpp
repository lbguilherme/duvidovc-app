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
class DashPathEffect : public virtual ::java::lang::Object,
                       public virtual ::android::graphics::PathEffect {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DashPathEffect(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::PathEffect(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DashPathEffect(const ::android::graphics::DashPathEffect& x) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {obj = x.obj;}
    DashPathEffect(::android::graphics::DashPathEffect&& x) : ::java::lang::Object((jobject)0), ::android::graphics::PathEffect((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::DashPathEffect& operator=(const ::android::graphics::DashPathEffect& x) {obj = x.obj; return *this;}
    ::android::graphics::DashPathEffect& operator=(::android::graphics::DashPathEffect&& x) {obj = std::move(x.obj); return *this;}
    
    DashPathEffect(const std::vector< float>&, float);

};
}
}


