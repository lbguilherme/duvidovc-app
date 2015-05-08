#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.Xfermode.hpp"


namespace android {
namespace graphics {
class PixelXorXfermode : public virtual ::java::lang::Object,
                         public virtual ::android::graphics::Xfermode {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PixelXorXfermode(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::Xfermode(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PixelXorXfermode(const ::android::graphics::PixelXorXfermode& x) : ::java::lang::Object((jobject)0), ::android::graphics::Xfermode((jobject)0) {obj = x.obj;}
    PixelXorXfermode(::android::graphics::PixelXorXfermode&& x) : ::java::lang::Object((jobject)0), ::android::graphics::Xfermode((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::PixelXorXfermode& operator=(const ::android::graphics::PixelXorXfermode& x) {obj = x.obj; return *this;}
    ::android::graphics::PixelXorXfermode& operator=(::android::graphics::PixelXorXfermode&& x) {obj = std::move(x.obj); return *this;}
    
    PixelXorXfermode(int32_t);

};
}
}


