#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewGroupCompat_ViewGroupCompatImpl.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewGroupCompat_ViewGroupCompatStubImpl : public virtual ::java::lang::Object,
                                                public virtual ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewGroupCompat_ViewGroupCompatStubImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewGroupCompat_ViewGroupCompatStubImpl(const ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl((jobject)0) {obj = x.obj;}
    ViewGroupCompat_ViewGroupCompatStubImpl(::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl& operator=(const ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl& operator=(::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool onRequestSendAccessibilityEvent(const ::android::view::ViewGroup&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void setMotionEventSplittingEnabled(const ::android::view::ViewGroup&, bool) const;
    int32_t getLayoutMode(const ::android::view::ViewGroup&) const;
    void setLayoutMode(const ::android::view::ViewGroup&, int32_t) const;
    void setTransitionGroup(const ::android::view::ViewGroup&, bool) const;
    bool isTransitionGroup(const ::android::view::ViewGroup&) const;
    int32_t getNestedScrollAxes(const ::android::view::ViewGroup&) const;

};
}
}
}
}


