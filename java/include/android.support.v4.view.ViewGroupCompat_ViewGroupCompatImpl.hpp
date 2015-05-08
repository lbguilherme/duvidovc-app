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
class ViewGroupCompat_ViewGroupCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewGroupCompat_ViewGroupCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewGroupCompat_ViewGroupCompatImpl(const ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewGroupCompat_ViewGroupCompatImpl(::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl& operator=(const ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl& operator=(::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool onRequestSendAccessibilityEvent(const ::android::view::ViewGroup&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const ;
    void setMotionEventSplittingEnabled(const ::android::view::ViewGroup&, bool) const ;
    int32_t getLayoutMode(const ::android::view::ViewGroup&) const ;
    void setLayoutMode(const ::android::view::ViewGroup&, int32_t) const ;
    void setTransitionGroup(const ::android::view::ViewGroup&, bool) const ;
    bool isTransitionGroup(const ::android::view::ViewGroup&) const ;

};
}
}
}
}


