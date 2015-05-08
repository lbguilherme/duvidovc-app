#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace os { class Handler; } }
namespace android { namespace view { class GestureDetector_OnDoubleTapListener; } }
namespace android { namespace view { class GestureDetector_OnGestureListener; } }
namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class GestureDetectorCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureDetectorCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureDetectorCompat(const ::android::support::v4::view::GestureDetectorCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GestureDetectorCompat(::android::support::v4::view::GestureDetectorCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::GestureDetectorCompat& operator=(const ::android::support::v4::view::GestureDetectorCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::GestureDetectorCompat& operator=(::android::support::v4::view::GestureDetectorCompat&& x) {obj = std::move(x.obj); return *this;}
    
    GestureDetectorCompat(const ::android::content::Context&, const ::android::view::GestureDetector_OnGestureListener&);
    GestureDetectorCompat(const ::android::content::Context&, const ::android::view::GestureDetector_OnGestureListener&, const ::android::os::Handler&);
    bool isLongpressEnabled() const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    void setIsLongpressEnabled(bool) const ;
    void setOnDoubleTapListener(const ::android::view::GestureDetector_OnDoubleTapListener&) const ;

};
}
}
}
}

#include "android.support.v4.view.GestureDetectorCompat_GestureDetectorCompatImpl.hpp"
#include "android.support.v4.view.GestureDetectorCompat_GestureDetectorCompatImplBase.hpp"
#include "android.support.v4.view.GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2.hpp"
#include "android.support.v4.view.GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler.hpp"

