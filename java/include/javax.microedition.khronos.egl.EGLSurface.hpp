#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace microedition {
namespace khronos {
namespace egl {
class EGLSurface : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EGLSurface(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EGLSurface(const ::javax::microedition::khronos::egl::EGLSurface& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EGLSurface(::javax::microedition::khronos::egl::EGLSurface&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::microedition::khronos::egl::EGLSurface& operator=(const ::javax::microedition::khronos::egl::EGLSurface& x) {obj = x.obj; return *this;}
    ::javax::microedition::khronos::egl::EGLSurface& operator=(::javax::microedition::khronos::egl::EGLSurface&& x) {obj = std::move(x.obj); return *this;}
    
    EGLSurface();

};
}
}
}
}


