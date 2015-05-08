#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace opengl {
class GLUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLUtils(const ::android::opengl::GLUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GLUtils(::android::opengl::GLUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLUtils& operator=(const ::android::opengl::GLUtils& x) {obj = x.obj; return *this;}
    ::android::opengl::GLUtils& operator=(::android::opengl::GLUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t getInternalFormat(const ::android::graphics::Bitmap&);
    static int32_t getType(const ::android::graphics::Bitmap&);
    static void texImage2D(int32_t, int32_t, int32_t, const ::android::graphics::Bitmap&, int32_t);
    static void texImage2D(int32_t, int32_t, int32_t, const ::android::graphics::Bitmap&, int32_t, int32_t);
    static void texImage2D(int32_t, int32_t, const ::android::graphics::Bitmap&, int32_t);
    static void texSubImage2D(int32_t, int32_t, int32_t, int32_t, const ::android::graphics::Bitmap&);
    static void texSubImage2D(int32_t, int32_t, int32_t, int32_t, const ::android::graphics::Bitmap&, int32_t, int32_t);
    static ::java::lang::String getEGLErrorString(int32_t);

};
}
}


