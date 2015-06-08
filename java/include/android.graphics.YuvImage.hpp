#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Rect; } }
namespace java { namespace io { class OutputStream; } }

namespace android {
namespace graphics {
class YuvImage : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit YuvImage(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    YuvImage(const ::android::graphics::YuvImage& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    YuvImage(::android::graphics::YuvImage&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::YuvImage& operator=(const ::android::graphics::YuvImage& x) {obj = x.obj; return *this;}
    ::android::graphics::YuvImage& operator=(::android::graphics::YuvImage&& x) {obj = std::move(x.obj); return *this;}
    
    YuvImage(const std::vector< int8_t>&, int32_t, int32_t, int32_t, const std::vector< int32_t>&);
    bool compressToJpeg(const ::android::graphics::Rect&, int32_t, const ::java::io::OutputStream&) const;
    std::vector< int8_t> getYuvData() const;
    int32_t getYuvFormat() const;
    std::vector< int32_t> getStrides() const;
    int32_t getWidth() const;
    int32_t getHeight() const;

};
}
}


