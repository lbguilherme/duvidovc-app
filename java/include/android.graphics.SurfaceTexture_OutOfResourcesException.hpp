#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class SurfaceTexture_OutOfResourcesException : public virtual ::java::lang::Object,
                                               public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SurfaceTexture_OutOfResourcesException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SurfaceTexture_OutOfResourcesException(const ::android::graphics::SurfaceTexture_OutOfResourcesException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    SurfaceTexture_OutOfResourcesException(::android::graphics::SurfaceTexture_OutOfResourcesException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::SurfaceTexture_OutOfResourcesException& operator=(const ::android::graphics::SurfaceTexture_OutOfResourcesException& x) {obj = x.obj; return *this;}
    ::android::graphics::SurfaceTexture_OutOfResourcesException& operator=(::android::graphics::SurfaceTexture_OutOfResourcesException&& x) {obj = std::move(x.obj); return *this;}
    
    SurfaceTexture_OutOfResourcesException();
    SurfaceTexture_OutOfResourcesException(const ::java::lang::String&);

};
}
}


