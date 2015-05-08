#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.Xfermode.hpp"

namespace android { namespace graphics { class PorterDuff_Mode; } }

namespace android {
namespace graphics {
class PorterDuffXfermode : public virtual ::java::lang::Object,
                           public virtual ::android::graphics::Xfermode {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PorterDuffXfermode(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::Xfermode(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PorterDuffXfermode(const ::android::graphics::PorterDuffXfermode& x) : ::java::lang::Object((jobject)0), ::android::graphics::Xfermode((jobject)0) {obj = x.obj;}
    PorterDuffXfermode(::android::graphics::PorterDuffXfermode&& x) : ::java::lang::Object((jobject)0), ::android::graphics::Xfermode((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::PorterDuffXfermode& operator=(const ::android::graphics::PorterDuffXfermode& x) {obj = x.obj; return *this;}
    ::android::graphics::PorterDuffXfermode& operator=(::android::graphics::PorterDuffXfermode&& x) {obj = std::move(x.obj); return *this;}
    
    PorterDuffXfermode(const ::android::graphics::PorterDuff_Mode&);

};
}
}


