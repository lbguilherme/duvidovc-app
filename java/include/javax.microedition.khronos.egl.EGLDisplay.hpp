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
class EGLDisplay : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EGLDisplay(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EGLDisplay(const ::javax::microedition::khronos::egl::EGLDisplay& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EGLDisplay(::javax::microedition::khronos::egl::EGLDisplay&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::microedition::khronos::egl::EGLDisplay& operator=(const ::javax::microedition::khronos::egl::EGLDisplay& x) {obj = x.obj; return *this;}
    ::javax::microedition::khronos::egl::EGLDisplay& operator=(::javax::microedition::khronos::egl::EGLDisplay&& x) {obj = std::move(x.obj); return *this;}
    
    EGLDisplay();

};
}
}
}
}


