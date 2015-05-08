#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }

namespace android {
namespace support {
namespace v4 {
namespace graphics {
class BitmapCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BitmapCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BitmapCompat(const ::android::support::v4::graphics::BitmapCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BitmapCompat(::android::support::v4::graphics::BitmapCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::BitmapCompat& operator=(const ::android::support::v4::graphics::BitmapCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::BitmapCompat& operator=(::android::support::v4::graphics::BitmapCompat&& x) {obj = std::move(x.obj); return *this;}
    
    BitmapCompat();
    static bool hasMipMap(const ::android::graphics::Bitmap&);
    static void setHasMipMap(const ::android::graphics::Bitmap&, bool);
    static int32_t getAllocationByteCount(const ::android::graphics::Bitmap&);

};
}
}
}
}

#include "android.support.v4.graphics.BitmapCompat_BaseBitmapImpl.hpp"
#include "android.support.v4.graphics.BitmapCompat_BitmapImpl.hpp"
#include "android.support.v4.graphics.BitmapCompat_HcMr1BitmapCompatImpl.hpp"
#include "android.support.v4.graphics.BitmapCompat_JbMr2BitmapCompatImpl.hpp"
#include "android.support.v4.graphics.BitmapCompat_KitKatBitmapCompatImpl.hpp"

