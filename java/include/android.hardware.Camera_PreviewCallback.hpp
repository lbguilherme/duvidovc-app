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
class Camera_PreviewCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Camera_PreviewCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Camera_PreviewCallback(const ::android::hardware::Camera_PreviewCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Camera_PreviewCallback(::android::hardware::Camera_PreviewCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::Camera_PreviewCallback& operator=(const ::android::hardware::Camera_PreviewCallback& x) {obj = x.obj; return *this;}
    ::android::hardware::Camera_PreviewCallback& operator=(::android::hardware::Camera_PreviewCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onPreviewFrame(const std::vector< int8_t>&, const ::android::hardware::Camera&) const ;

};
}
}


