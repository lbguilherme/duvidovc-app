#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace graphics {
class ImageFormat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageFormat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageFormat(const ::android::graphics::ImageFormat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ImageFormat(::android::graphics::ImageFormat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::ImageFormat& operator=(const ::android::graphics::ImageFormat& x) {obj = x.obj; return *this;}
    ::android::graphics::ImageFormat& operator=(::android::graphics::ImageFormat&& x) {obj = std::move(x.obj); return *this;}
    
    ImageFormat();
    static int32_t getBitsPerPixel(int32_t);

};
}
}


