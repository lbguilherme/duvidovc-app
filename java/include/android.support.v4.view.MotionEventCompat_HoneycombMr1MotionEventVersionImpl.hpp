#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.MotionEventCompat_GingerbreadMotionEventVersionImpl.hpp"

namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class MotionEventCompat_HoneycombMr1MotionEventVersionImpl : public virtual ::java::lang::Object,
                                                             public virtual ::android::support::v4::view::MotionEventCompat_GingerbreadMotionEventVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MotionEventCompat_HoneycombMr1MotionEventVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl(_obj), ::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl(_obj), ::android::support::v4::view::MotionEventCompat_GingerbreadMotionEventVersionImpl(_obj), ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MotionEventCompat_HoneycombMr1MotionEventVersionImpl(const ::android::support::v4::view::MotionEventCompat_HoneycombMr1MotionEventVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl((jobject)0), ::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl((jobject)0), ::android::support::v4::view::MotionEventCompat_GingerbreadMotionEventVersionImpl((jobject)0), ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl((jobject)0) {obj = x.obj;}
    MotionEventCompat_HoneycombMr1MotionEventVersionImpl(::android::support::v4::view::MotionEventCompat_HoneycombMr1MotionEventVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl((jobject)0), ::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl((jobject)0), ::android::support::v4::view::MotionEventCompat_GingerbreadMotionEventVersionImpl((jobject)0), ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::MotionEventCompat_HoneycombMr1MotionEventVersionImpl& operator=(const ::android::support::v4::view::MotionEventCompat_HoneycombMr1MotionEventVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::MotionEventCompat_HoneycombMr1MotionEventVersionImpl& operator=(::android::support::v4::view::MotionEventCompat_HoneycombMr1MotionEventVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    float getAxisValue(const ::android::view::MotionEvent&, int32_t) const;
    float getAxisValue(const ::android::view::MotionEvent&, int32_t, int32_t) const;

};
}
}
}
}


