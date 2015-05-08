#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Matrix; } }

namespace android {
namespace graphics {
class Shader : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Shader(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Shader(const ::android::graphics::Shader& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Shader(::android::graphics::Shader&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Shader& operator=(const ::android::graphics::Shader& x) {obj = x.obj; return *this;}
    ::android::graphics::Shader& operator=(::android::graphics::Shader&& x) {obj = std::move(x.obj); return *this;}
    
    Shader();
    bool getLocalMatrix(const ::android::graphics::Matrix&) const ;
    void setLocalMatrix(const ::android::graphics::Matrix&) const ;

};
}
}

#include "android.graphics.Shader_TileMode.hpp"

