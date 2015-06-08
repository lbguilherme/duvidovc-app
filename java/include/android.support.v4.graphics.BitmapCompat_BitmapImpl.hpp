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
class BitmapCompat_BitmapImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BitmapCompat_BitmapImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BitmapCompat_BitmapImpl(const ::android::support::v4::graphics::BitmapCompat_BitmapImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BitmapCompat_BitmapImpl(::android::support::v4::graphics::BitmapCompat_BitmapImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::BitmapCompat_BitmapImpl& operator=(const ::android::support::v4::graphics::BitmapCompat_BitmapImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::BitmapCompat_BitmapImpl& operator=(::android::support::v4::graphics::BitmapCompat_BitmapImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool hasMipMap(const ::android::graphics::Bitmap&) const;
    void setHasMipMap(const ::android::graphics::Bitmap&, bool) const;
    int32_t getAllocationByteCount(const ::android::graphics::Bitmap&) const;

};
}
}
}
}


