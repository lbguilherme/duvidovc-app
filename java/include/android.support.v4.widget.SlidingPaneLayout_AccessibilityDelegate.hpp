#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.AccessibilityDelegateCompat.hpp"

namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class SlidingPaneLayout_AccessibilityDelegate : public virtual ::java::lang::Object,
                                                public virtual ::android::support::v4::view::AccessibilityDelegateCompat {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SlidingPaneLayout_AccessibilityDelegate(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::AccessibilityDelegateCompat(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SlidingPaneLayout_AccessibilityDelegate(const ::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat((jobject)0) {obj = x.obj;}
    SlidingPaneLayout_AccessibilityDelegate(::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate& operator=(const ::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate& operator=(::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate&& x) {obj = std::move(x.obj); return *this;}
    
    void onInitializeAccessibilityNodeInfo(const ::android::view::View&, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat&) const;
    void onInitializeAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    bool onRequestSendAccessibilityEvent(const ::android::view::ViewGroup&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    bool filter(const ::android::view::View&) const;

};
}
}
}
}


