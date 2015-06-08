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
namespace view {
class GestureDetector : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureDetector(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureDetector(const ::android::view::GestureDetector& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GestureDetector(::android::view::GestureDetector&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::GestureDetector& operator=(const ::android::view::GestureDetector& x) {obj = x.obj; return *this;}
    ::android::view::GestureDetector& operator=(::android::view::GestureDetector&& x) {obj = std::move(x.obj); return *this;}
    
    GestureDetector(const ::android::view::GestureDetector_OnGestureListener&, const ::android::os::Handler&);
    GestureDetector(const ::android::view::GestureDetector_OnGestureListener&);
    GestureDetector(const ::android::content::Context&, const ::android::view::GestureDetector_OnGestureListener&);
    GestureDetector(const ::android::content::Context&, const ::android::view::GestureDetector_OnGestureListener&, const ::android::os::Handler&);
    GestureDetector(const ::android::content::Context&, const ::android::view::GestureDetector_OnGestureListener&, const ::android::os::Handler&, bool);
    void setOnDoubleTapListener(const ::android::view::GestureDetector_OnDoubleTapListener&) const;
    void setIsLongpressEnabled(bool) const;
    bool isLongpressEnabled() const;
    bool onTouchEvent(const ::android::view::MotionEvent&) const;

};
}
}

#include "android.view.GestureDetector_OnDoubleTapListener.hpp"
#include "android.view.GestureDetector_OnGestureListener.hpp"
#include "android.view.GestureDetector_SimpleOnGestureListener.hpp"

