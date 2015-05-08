#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.Shader.hpp"


namespace android {
namespace graphics {
class SweepGradient : public virtual ::java::lang::Object,
                      public virtual ::android::graphics::Shader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SweepGradient(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::Shader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SweepGradient(const ::android::graphics::SweepGradient& x) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {obj = x.obj;}
    SweepGradient(::android::graphics::SweepGradient&& x) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::SweepGradient& operator=(const ::android::graphics::SweepGradient& x) {obj = x.obj; return *this;}
    ::android::graphics::SweepGradient& operator=(::android::graphics::SweepGradient&& x) {obj = std::move(x.obj); return *this;}
    
    SweepGradient(float, float, const std::vector< int32_t>&, const std::vector< float>&);
    SweepGradient(float, float, int32_t, int32_t);

};
}
}


