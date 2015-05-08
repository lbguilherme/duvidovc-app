#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.graphics.BitmapCompat_JbMr2BitmapCompatImpl.hpp"

namespace android { namespace graphics { class Bitmap; } }

namespace android {
namespace support {
namespace v4 {
namespace graphics {
class BitmapCompat_KitKatBitmapCompatImpl : public virtual ::java::lang::Object,
                                            public virtual ::android::support::v4::graphics::BitmapCompat_JbMr2BitmapCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BitmapCompat_KitKatBitmapCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl(_obj), ::android::support::v4::graphics::BitmapCompat_BitmapImpl(_obj), ::android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl(_obj), ::android::support::v4::graphics::BitmapCompat_JbMr2BitmapCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BitmapCompat_KitKatBitmapCompatImpl(const ::android::support::v4::graphics::BitmapCompat_KitKatBitmapCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl((jobject)0), ::android::support::v4::graphics::BitmapCompat_BitmapImpl((jobject)0), ::android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl((jobject)0), ::android::support::v4::graphics::BitmapCompat_JbMr2BitmapCompatImpl((jobject)0) {obj = x.obj;}
    BitmapCompat_KitKatBitmapCompatImpl(::android::support::v4::graphics::BitmapCompat_KitKatBitmapCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl((jobject)0), ::android::support::v4::graphics::BitmapCompat_BitmapImpl((jobject)0), ::android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl((jobject)0), ::android::support::v4::graphics::BitmapCompat_JbMr2BitmapCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::BitmapCompat_KitKatBitmapCompatImpl& operator=(const ::android::support::v4::graphics::BitmapCompat_KitKatBitmapCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::BitmapCompat_KitKatBitmapCompatImpl& operator=(::android::support::v4::graphics::BitmapCompat_KitKatBitmapCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getAllocationByteCount(const ::android::graphics::Bitmap&) const ;

};
}
}
}
}


