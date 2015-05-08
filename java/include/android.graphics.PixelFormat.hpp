#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class PixelFormat; } }

namespace android {
namespace graphics {
class PixelFormat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PixelFormat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PixelFormat(const ::android::graphics::PixelFormat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PixelFormat(::android::graphics::PixelFormat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::PixelFormat& operator=(const ::android::graphics::PixelFormat& x) {obj = x.obj; return *this;}
    ::android::graphics::PixelFormat& operator=(::android::graphics::PixelFormat&& x) {obj = std::move(x.obj); return *this;}
    
    PixelFormat();
    static void getPixelFormatInfo(int32_t, const ::android::graphics::PixelFormat&);
    static bool formatHasAlpha(int32_t);

};
}
}


