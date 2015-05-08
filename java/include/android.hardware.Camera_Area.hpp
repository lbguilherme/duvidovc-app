#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Rect; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace hardware {
class Camera_Area : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Camera_Area(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Camera_Area(const ::android::hardware::Camera_Area& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Camera_Area(::android::hardware::Camera_Area&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::Camera_Area& operator=(const ::android::hardware::Camera_Area& x) {obj = x.obj; return *this;}
    ::android::hardware::Camera_Area& operator=(::android::hardware::Camera_Area&& x) {obj = std::move(x.obj); return *this;}
    
    Camera_Area(const ::android::graphics::Rect&, int32_t);
    bool equals(const ::java::lang::Object&) const ;

};
}
}


