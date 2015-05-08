#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.microedition.khronos.egl.EGL10.hpp"


namespace javax {
namespace microedition {
namespace khronos {
namespace egl {
class EGL11 : public virtual ::java::lang::Object,
              public virtual ::javax::microedition::khronos::egl::EGL10 {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EGL11(jobject _obj) : ::java::lang::Object(_obj), ::javax::microedition::khronos::egl::EGL(_obj), ::javax::microedition::khronos::egl::EGL10(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EGL11(const ::javax::microedition::khronos::egl::EGL11& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::egl::EGL((jobject)0), ::javax::microedition::khronos::egl::EGL10((jobject)0) {obj = x.obj;}
    EGL11(::javax::microedition::khronos::egl::EGL11&& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::egl::EGL((jobject)0), ::javax::microedition::khronos::egl::EGL10((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::microedition::khronos::egl::EGL11& operator=(const ::javax::microedition::khronos::egl::EGL11& x) {obj = x.obj; return *this;}
    ::javax::microedition::khronos::egl::EGL11& operator=(::javax::microedition::khronos::egl::EGL11&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


