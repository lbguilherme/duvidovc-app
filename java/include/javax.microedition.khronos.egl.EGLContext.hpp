#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace javax { namespace microedition { namespace khronos { namespace egl { class EGL; } } } }
namespace javax { namespace microedition { namespace khronos { namespace opengles { class GL; } } } }

namespace javax {
namespace microedition {
namespace khronos {
namespace egl {
class EGLContext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EGLContext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EGLContext(const ::javax::microedition::khronos::egl::EGLContext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EGLContext(::javax::microedition::khronos::egl::EGLContext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::microedition::khronos::egl::EGLContext& operator=(const ::javax::microedition::khronos::egl::EGLContext& x) {obj = x.obj; return *this;}
    ::javax::microedition::khronos::egl::EGLContext& operator=(::javax::microedition::khronos::egl::EGLContext&& x) {obj = std::move(x.obj); return *this;}
    
    EGLContext();
    static ::javax::microedition::khronos::egl::EGL getEGL();
    ::javax::microedition::khronos::opengles::GL getGL() const ;

};
}
}
}
}


