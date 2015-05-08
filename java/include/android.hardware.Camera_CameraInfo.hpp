#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace hardware {
class Camera_CameraInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Camera_CameraInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Camera_CameraInfo(const ::android::hardware::Camera_CameraInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Camera_CameraInfo(::android::hardware::Camera_CameraInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::Camera_CameraInfo& operator=(const ::android::hardware::Camera_CameraInfo& x) {obj = x.obj; return *this;}
    ::android::hardware::Camera_CameraInfo& operator=(::android::hardware::Camera_CameraInfo&& x) {obj = std::move(x.obj); return *this;}
    
    Camera_CameraInfo();

};
}
}


