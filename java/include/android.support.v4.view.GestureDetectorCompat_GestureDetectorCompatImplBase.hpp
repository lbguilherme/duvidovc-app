#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.GestureDetectorCompat_GestureDetectorCompatImpl.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace os { class Handler; } }
namespace android { namespace view { class GestureDetector_OnDoubleTapListener; } }
namespace android { namespace view { class GestureDetector_OnGestureListener; } }
namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class GestureDetectorCompat_GestureDetectorCompatImplBase : public virtual ::java::lang::Object,
                                                            public virtual ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureDetectorCompat_GestureDetectorCompatImplBase(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureDetectorCompat_GestureDetectorCompatImplBase(const ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl((jobject)0) {obj = x.obj;}
    GestureDetectorCompat_GestureDetectorCompatImplBase(::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase& operator=(const ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase& operator=(::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase&& x) {obj = std::move(x.obj); return *this;}
    
    GestureDetectorCompat_GestureDetectorCompatImplBase(const ::android::content::Context&, const ::android::view::GestureDetector_OnGestureListener&, const ::android::os::Handler&);
    void setOnDoubleTapListener(const ::android::view::GestureDetector_OnDoubleTapListener&) const ;
    void setIsLongpressEnabled(bool) const ;
    bool isLongpressEnabled() const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;

};
}
}
}
}

#include "android.support.v4.view.GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler.hpp"

