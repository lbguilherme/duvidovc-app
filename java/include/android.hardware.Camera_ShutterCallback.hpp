#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace hardware {
class Camera_ShutterCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Camera_ShutterCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Camera_ShutterCallback(const ::android::hardware::Camera_ShutterCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Camera_ShutterCallback(::android::hardware::Camera_ShutterCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::Camera_ShutterCallback& operator=(const ::android::hardware::Camera_ShutterCallback& x) {obj = x.obj; return *this;}
    ::android::hardware::Camera_ShutterCallback& operator=(::android::hardware::Camera_ShutterCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onShutter() const ;

};
}
}


