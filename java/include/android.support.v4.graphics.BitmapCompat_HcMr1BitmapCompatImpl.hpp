#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.graphics.BitmapCompat_BaseBitmapImpl.hpp"

namespace android { namespace graphics { class Bitmap; } }

namespace android {
namespace support {
namespace v4 {
namespace graphics {
class BitmapCompat_HcMr1BitmapCompatImpl : public virtual ::java::lang::Object,
                                           public virtual ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BitmapCompat_HcMr1BitmapCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl(_obj), ::android::support::v4::graphics::BitmapCompat_BitmapImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BitmapCompat_HcMr1BitmapCompatImpl(const ::android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl((jobject)0), ::android::support::v4::graphics::BitmapCompat_BitmapImpl((jobject)0) {obj = x.obj;}
    BitmapCompat_HcMr1BitmapCompatImpl(::android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl((jobject)0), ::android::support::v4::graphics::BitmapCompat_BitmapImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl& operator=(const ::android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl& operator=(::android::support::v4::graphics::BitmapCompat_HcMr1BitmapCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getAllocationByteCount(const ::android::graphics::Bitmap&) const;

};
}
}
}
}


