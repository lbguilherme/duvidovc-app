#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.Shader.hpp"

namespace android { namespace graphics { class Shader_TileMode; } }

namespace android {
namespace graphics {
class RadialGradient : public virtual ::java::lang::Object,
                       public virtual ::android::graphics::Shader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RadialGradient(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::Shader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RadialGradient(const ::android::graphics::RadialGradient& x) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {obj = x.obj;}
    RadialGradient(::android::graphics::RadialGradient&& x) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::RadialGradient& operator=(const ::android::graphics::RadialGradient& x) {obj = x.obj; return *this;}
    ::android::graphics::RadialGradient& operator=(::android::graphics::RadialGradient&& x) {obj = std::move(x.obj); return *this;}
    
    RadialGradient(float, float, float, const std::vector< int32_t>&, const std::vector< float>&, const ::android::graphics::Shader_TileMode&);
    RadialGradient(float, float, float, int32_t, int32_t, const ::android::graphics::Shader_TileMode&);

};
}
}


