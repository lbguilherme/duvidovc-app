#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Matrix; } }

namespace android {
namespace graphics {
class Camera : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Camera(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Camera(const ::android::graphics::Camera& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Camera(::android::graphics::Camera&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Camera& operator=(const ::android::graphics::Camera& x) {obj = x.obj; return *this;}
    ::android::graphics::Camera& operator=(::android::graphics::Camera&& x) {obj = std::move(x.obj); return *this;}
    
    Camera();
    void save() const ;
    void restore() const ;
    void translate(float, float, float) const ;
    void rotateX(float) const ;
    void rotateY(float) const ;
    void rotateZ(float) const ;
    void rotate(float, float, float) const ;
    void setLocation(float, float, float) const ;
    void getMatrix(const ::android::graphics::Matrix&) const ;
    void applyToCanvas(const ::android::graphics::Canvas&) const ;
    float dotWithNormal(float, float, float) const ;

};
}
}


