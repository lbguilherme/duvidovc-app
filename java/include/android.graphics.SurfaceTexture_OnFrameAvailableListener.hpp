#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class SurfaceTexture; } }

namespace android {
namespace graphics {
class SurfaceTexture_OnFrameAvailableListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SurfaceTexture_OnFrameAvailableListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SurfaceTexture_OnFrameAvailableListener(const ::android::graphics::SurfaceTexture_OnFrameAvailableListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SurfaceTexture_OnFrameAvailableListener(::android::graphics::SurfaceTexture_OnFrameAvailableListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::SurfaceTexture_OnFrameAvailableListener& operator=(const ::android::graphics::SurfaceTexture_OnFrameAvailableListener& x) {obj = x.obj; return *this;}
    ::android::graphics::SurfaceTexture_OnFrameAvailableListener& operator=(::android::graphics::SurfaceTexture_OnFrameAvailableListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onFrameAvailable(const ::android::graphics::SurfaceTexture&) const;

};
}
}


