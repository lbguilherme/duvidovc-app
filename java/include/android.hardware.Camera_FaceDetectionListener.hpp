#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace hardware { class Camera; } }
namespace android { namespace hardware { class Camera_Face; } }

namespace android {
namespace hardware {
class Camera_FaceDetectionListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Camera_FaceDetectionListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Camera_FaceDetectionListener(const ::android::hardware::Camera_FaceDetectionListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Camera_FaceDetectionListener(::android::hardware::Camera_FaceDetectionListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::Camera_FaceDetectionListener& operator=(const ::android::hardware::Camera_FaceDetectionListener& x) {obj = x.obj; return *this;}
    ::android::hardware::Camera_FaceDetectionListener& operator=(::android::hardware::Camera_FaceDetectionListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onFaceDetection(const std::vector< ::android::hardware::Camera_Face>&, const ::android::hardware::Camera&) const ;

};
}
}


