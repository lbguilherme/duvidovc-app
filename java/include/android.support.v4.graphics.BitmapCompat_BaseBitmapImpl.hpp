#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.graphics.BitmapCompat_BitmapImpl.hpp"

namespace android { namespace graphics { class Bitmap; } }

namespace android {
namespace support {
namespace v4 {
namespace graphics {
class BitmapCompat_BaseBitmapImpl : public virtual ::java::lang::Object,
                                    public virtual ::android::support::v4::graphics::BitmapCompat_BitmapImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BitmapCompat_BaseBitmapImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::graphics::BitmapCompat_BitmapImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BitmapCompat_BaseBitmapImpl(const ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::BitmapCompat_BitmapImpl((jobject)0) {obj = x.obj;}
    BitmapCompat_BaseBitmapImpl(::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::BitmapCompat_BitmapImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl& operator=(const ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl& operator=(::android::support::v4::graphics::BitmapCompat_BaseBitmapImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool hasMipMap(const ::android::graphics::Bitmap&) const ;
    void setHasMipMap(const ::android::graphics::Bitmap&, bool) const ;
    int32_t getAllocationByteCount(const ::android::graphics::Bitmap&) const ;

};
}
}
}
}


