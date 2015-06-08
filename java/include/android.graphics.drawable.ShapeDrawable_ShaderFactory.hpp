#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Shader; } }

namespace android {
namespace graphics {
namespace drawable {
class ShapeDrawable_ShaderFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShapeDrawable_ShaderFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShapeDrawable_ShaderFactory(const ::android::graphics::drawable::ShapeDrawable_ShaderFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShapeDrawable_ShaderFactory(::android::graphics::drawable::ShapeDrawable_ShaderFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::ShapeDrawable_ShaderFactory& operator=(const ::android::graphics::drawable::ShapeDrawable_ShaderFactory& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::ShapeDrawable_ShaderFactory& operator=(::android::graphics::drawable::ShapeDrawable_ShaderFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ShapeDrawable_ShaderFactory();
    ::android::graphics::Shader resize(int32_t, int32_t) const;

};
}
}
}


