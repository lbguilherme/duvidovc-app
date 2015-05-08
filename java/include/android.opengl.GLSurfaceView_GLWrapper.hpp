#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace javax { namespace microedition { namespace khronos { namespace opengles { class GL; } } } }

namespace android {
namespace opengl {
class GLSurfaceView_GLWrapper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLSurfaceView_GLWrapper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLSurfaceView_GLWrapper(const ::android::opengl::GLSurfaceView_GLWrapper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GLSurfaceView_GLWrapper(::android::opengl::GLSurfaceView_GLWrapper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLSurfaceView_GLWrapper& operator=(const ::android::opengl::GLSurfaceView_GLWrapper& x) {obj = x.obj; return *this;}
    ::android::opengl::GLSurfaceView_GLWrapper& operator=(::android::opengl::GLSurfaceView_GLWrapper&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::microedition::khronos::opengles::GL wrap(const ::javax::microedition::khronos::opengles::GL&) const ;

};
}
}


