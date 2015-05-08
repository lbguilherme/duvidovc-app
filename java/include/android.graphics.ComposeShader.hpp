#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.Shader.hpp"

namespace android { namespace graphics { class PorterDuff_Mode; } }
namespace android { namespace graphics { class Shader; } }
namespace android { namespace graphics { class Xfermode; } }

namespace android {
namespace graphics {
class ComposeShader : public virtual ::java::lang::Object,
                      public virtual ::android::graphics::Shader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ComposeShader(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::Shader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ComposeShader(const ::android::graphics::ComposeShader& x) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {obj = x.obj;}
    ComposeShader(::android::graphics::ComposeShader&& x) : ::java::lang::Object((jobject)0), ::android::graphics::Shader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::ComposeShader& operator=(const ::android::graphics::ComposeShader& x) {obj = x.obj; return *this;}
    ::android::graphics::ComposeShader& operator=(::android::graphics::ComposeShader&& x) {obj = std::move(x.obj); return *this;}
    
    ComposeShader(const ::android::graphics::Shader&, const ::android::graphics::Shader&, const ::android::graphics::Xfermode&);
    ComposeShader(const ::android::graphics::Shader&, const ::android::graphics::Shader&, const ::android::graphics::PorterDuff_Mode&);

};
}
}


