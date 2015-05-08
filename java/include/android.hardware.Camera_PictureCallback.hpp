#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace hardware { class Camera; } }

namespace android {
namespace hardware {
class Camera_PictureCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Camera_PictureCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Camera_PictureCallback(const ::android::hardware::Camera_PictureCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Camera_PictureCallback(::android::hardware::Camera_PictureCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::Camera_PictureCallback& operator=(const ::android::hardware::Camera_PictureCallback& x) {obj = x.obj; return *this;}
    ::android::hardware::Camera_PictureCallback& operator=(::android::hardware::Camera_PictureCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onPictureTaken(const std::vector< int8_t>&, const ::android::hardware::Camera&) const ;

};
}
}


