#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace microedition { namespace khronos { namespace opengles { class GL10; } } } }

namespace android {
namespace opengl {
class GLU : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLU(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLU(const ::android::opengl::GLU& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GLU(::android::opengl::GLU&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLU& operator=(const ::android::opengl::GLU& x) {obj = x.obj; return *this;}
    ::android::opengl::GLU& operator=(::android::opengl::GLU&& x) {obj = std::move(x.obj); return *this;}
    
    GLU();
    static ::java::lang::String gluErrorString(int32_t);
    static void gluLookAt(const ::javax::microedition::khronos::opengles::GL10&, float, float, float, float, float, float, float, float, float);
    static void gluOrtho2D(const ::javax::microedition::khronos::opengles::GL10&, float, float, float, float);
    static void gluPerspective(const ::javax::microedition::khronos::opengles::GL10&, float, float, float, float);
    static int32_t gluProject(float, float, float, const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, const std::vector< int32_t>&, int32_t, const std::vector< float>&, int32_t);
    static int32_t gluUnProject(float, float, float, const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, const std::vector< int32_t>&, int32_t, const std::vector< float>&, int32_t);

};
}
}


