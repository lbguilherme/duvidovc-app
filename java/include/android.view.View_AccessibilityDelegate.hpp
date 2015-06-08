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
namespace android { namespace view { namespace accessibility { class AccessibilityNodeInfo; } } }

namespace android {
namespace view {
class View_AccessibilityDelegate : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View_AccessibilityDelegate(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View_AccessibilityDelegate(const ::android::view::View_AccessibilityDelegate& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    View_AccessibilityDelegate(::android::view::View_AccessibilityDelegate&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View_AccessibilityDelegate& operator=(const ::android::view::View_AccessibilityDelegate& x) {obj = x.obj; return *this;}
    ::android::view::View_AccessibilityDelegate& operator=(::android::view::View_AccessibilityDelegate&& x) {obj = std::move(x.obj); return *this;}
    
    View_AccessibilityDelegate();
    void sendAccessibilityEvent(const ::android::view::View&, int32_t) const;
    void sendAccessibilityEventUnchecked(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    bool dispatchPopulateAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void onPopulateAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void onInitializeAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void onInitializeAccessibilityNodeInfo(const ::android::view::View&, const ::android::view::accessibility::AccessibilityNodeInfo&) const;
    bool onRequestSendAccessibilityEvent(const ::android::view::ViewGroup&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;

};
}
}


