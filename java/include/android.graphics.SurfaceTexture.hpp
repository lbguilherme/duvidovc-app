#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class SurfaceTexture_OnFrameAvailableListener; } }

namespace android {
namespace graphics {
class SurfaceTexture : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SurfaceTexture(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SurfaceTexture(const ::android::graphics::SurfaceTexture& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SurfaceTexture(::android::graphics::SurfaceTexture&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::SurfaceTexture& operator=(const ::android::graphics::SurfaceTexture& x) {obj = x.obj; return *this;}
    ::android::graphics::SurfaceTexture& operator=(::android::graphics::SurfaceTexture&& x) {obj = std::move(x.obj); return *this;}
    
    SurfaceTexture(int32_t);
    void setOnFrameAvailableListener(const ::android::graphics::SurfaceTexture_OnFrameAvailableListener&) const;
    void setDefaultBufferSize(int32_t, int32_t) const;
    void updateTexImage() const;
    void getTransformMatrix(const std::vector< float>&) const;
    int64_t getTimestamp() const;
    void release() const;

};
}
}

#include "android.graphics.SurfaceTexture_OnFrameAvailableListener.hpp"
#include "android.graphics.SurfaceTexture_OutOfResourcesException.hpp"

