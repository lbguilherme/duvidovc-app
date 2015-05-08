#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class Writer; } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGL; } } } }
namespace javax { namespace microedition { namespace khronos { namespace opengles { class GL; } } } }

namespace android {
namespace opengl {
class GLDebugHelper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLDebugHelper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLDebugHelper(const ::android::opengl::GLDebugHelper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GLDebugHelper(::android::opengl::GLDebugHelper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLDebugHelper& operator=(const ::android::opengl::GLDebugHelper& x) {obj = x.obj; return *this;}
    ::android::opengl::GLDebugHelper& operator=(::android::opengl::GLDebugHelper&& x) {obj = std::move(x.obj); return *this;}
    
    GLDebugHelper();
    static ::javax::microedition::khronos::opengles::GL wrap(const ::javax::microedition::khronos::opengles::GL&, int32_t, const ::java::io::Writer&);
    static ::javax::microedition::khronos::egl::EGL wrap(const ::javax::microedition::khronos::egl::EGL&, int32_t, const ::java::io::Writer&);

};
}
}


