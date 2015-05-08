#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.Xfermode.hpp"

namespace android { namespace graphics { class AvoidXfermode_Mode; } }

namespace android {
namespace graphics {
class AvoidXfermode : public virtual ::java::lang::Object,
                      public virtual ::android::graphics::Xfermode {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AvoidXfermode(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::Xfermode(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AvoidXfermode(const ::android::graphics::AvoidXfermode& x) : ::java::lang::Object((jobject)0), ::android::graphics::Xfermode((jobject)0) {obj = x.obj;}
    AvoidXfermode(::android::graphics::AvoidXfermode&& x) : ::java::lang::Object((jobject)0), ::android::graphics::Xfermode((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::AvoidXfermode& operator=(const ::android::graphics::AvoidXfermode& x) {obj = x.obj; return *this;}
    ::android::graphics::AvoidXfermode& operator=(::android::graphics::AvoidXfermode&& x) {obj = std::move(x.obj); return *this;}
    
    AvoidXfermode(int32_t, int32_t, const ::android::graphics::AvoidXfermode_Mode&);

};
}
}

#include "android.graphics.AvoidXfermode_Mode.hpp"

