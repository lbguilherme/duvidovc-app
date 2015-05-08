#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.Shader.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class Shader_TileMode; } }

namespace android {
namespace graphics {
class BitmapShader : public virtual ::java::lang::Object,
                     public virtual ::android::graphics::Shader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BitmapShader(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::Shader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BitmapShader(const ::android::graphics::BitmapShader& x) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {obj = x.obj;}
    BitmapShader(::android::graphics::BitmapShader&& x) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::BitmapShader& operator=(const ::android::graphics::BitmapShader& x) {obj = x.obj; return *this;}
    ::android::graphics::BitmapShader& operator=(::android::graphics::BitmapShader&& x) {obj = std::move(x.obj); return *this;}
    
    BitmapShader(const ::android::graphics::Bitmap&, const ::android::graphics::Shader_TileMode&, const ::android::graphics::Shader_TileMode&);

};
}
}


