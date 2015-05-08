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
class LinearGradient : public virtual ::java::lang::Object,
                       public virtual ::android::graphics::Shader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LinearGradient(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::Shader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LinearGradient(const ::android::graphics::LinearGradient& x) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {obj = x.obj;}
    LinearGradient(::android::graphics::LinearGradient&& x) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::LinearGradient& operator=(const ::android::graphics::LinearGradient& x) {obj = x.obj; return *this;}
    ::android::graphics::LinearGradient& operator=(::android::graphics::LinearGradient&& x) {obj = std::move(x.obj); return *this;}
    
    LinearGradient(float, float, float, float, const std::vector< int32_t>&, const std::vector< float>&, const ::android::graphics::Shader_TileMode&);
    LinearGradient(float, float, float, float, int32_t, int32_t, const ::android::graphics::Shader_TileMode&);

};
}
}


