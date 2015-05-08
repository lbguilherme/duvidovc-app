#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewGroupCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewGroupCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewGroupCompat(const ::android::support::v4::view::ViewGroupCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewGroupCompat(::android::support::v4::view::ViewGroupCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewGroupCompat& operator=(const ::android::support::v4::view::ViewGroupCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewGroupCompat& operator=(::android::support::v4::view::ViewGroupCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static bool onRequestSendAccessibilityEvent(const ::android::view::ViewGroup&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&);
    static void setMotionEventSplittingEnabled(const ::android::view::ViewGroup&, bool);
    static int32_t getLayoutMode(const ::android::view::ViewGroup&);
    static void setLayoutMode(const ::android::view::ViewGroup&, int32_t);
    static void setTransitionGroup(const ::android::view::ViewGroup&, bool);
    static bool isTransitionGroup(const ::android::view::ViewGroup&);

};
}
}
}
}

#include "android.support.v4.view.ViewGroupCompat_ViewGroupCompatApi21Impl.hpp"
#include "android.support.v4.view.ViewGroupCompat_ViewGroupCompatHCImpl.hpp"
#include "android.support.v4.view.ViewGroupCompat_ViewGroupCompatIcsImpl.hpp"
#include "android.support.v4.view.ViewGroupCompat_ViewGroupCompatImpl.hpp"
#include "android.support.v4.view.ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl.hpp"
#include "android.support.v4.view.ViewGroupCompat_ViewGroupCompatStubImpl.hpp"

