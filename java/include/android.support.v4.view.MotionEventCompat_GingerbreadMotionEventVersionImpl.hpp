#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.MotionEventCompat_EclairMotionEventVersionImpl.hpp"

namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class MotionEventCompat_GingerbreadMotionEventVersionImpl : public virtual ::java::lang::Object,
                                                            public virtual ::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MotionEventCompat_GingerbreadMotionEventVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl(_obj), ::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl(_obj), ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MotionEventCompat_GingerbreadMotionEventVersionImpl(const ::android::support::v4::view::MotionEventCompat_GingerbreadMotionEventVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl((jobject)0), ::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl((jobject)0), ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl((jobject)0) {obj = x.obj;}
    MotionEventCompat_GingerbreadMotionEventVersionImpl(::android::support::v4::view::MotionEventCompat_GingerbreadMotionEventVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl((jobject)0), ::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl((jobject)0), ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::MotionEventCompat_GingerbreadMotionEventVersionImpl& operator=(const ::android::support::v4::view::MotionEventCompat_GingerbreadMotionEventVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::MotionEventCompat_GingerbreadMotionEventVersionImpl& operator=(::android::support::v4::view::MotionEventCompat_GingerbreadMotionEventVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getSource(const ::android::view::MotionEvent&) const;

};
}
}
}
}


