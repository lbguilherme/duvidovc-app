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
class EGLConfig : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EGLConfig(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EGLConfig(const ::javax::microedition::khronos::egl::EGLConfig& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EGLConfig(::javax::microedition::khronos::egl::EGLConfig&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::microedition::khronos::egl::EGLConfig& operator=(const ::javax::microedition::khronos::egl::EGLConfig& x) {obj = x.obj; return *this;}
    ::javax::microedition::khronos::egl::EGLConfig& operator=(::javax::microedition::khronos::egl::EGLConfig&& x) {obj = std::move(x.obj); return *this;}
    
    EGLConfig();

};
}
}
}
}


