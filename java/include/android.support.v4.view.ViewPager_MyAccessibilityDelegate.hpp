#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.AccessibilityDelegateCompat.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }
namespace android { namespace view { class View; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPager_MyAccessibilityDelegate : public virtual ::java::lang::Object,
                                          public virtual ::android::support::v4::view::AccessibilityDelegateCompat {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPager_MyAccessibilityDelegate(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::AccessibilityDelegateCompat(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPager_MyAccessibilityDelegate(const ::android::support::v4::view::ViewPager_MyAccessibilityDelegate& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat((jobject)0) {obj = x.obj;}
    ViewPager_MyAccessibilityDelegate(::android::support::v4::view::ViewPager_MyAccessibilityDelegate&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPager_MyAccessibilityDelegate& operator=(const ::android::support::v4::view::ViewPager_MyAccessibilityDelegate& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPager_MyAccessibilityDelegate& operator=(::android::support::v4::view::ViewPager_MyAccessibilityDelegate&& x) {obj = std::move(x.obj); return *this;}
    
    void onInitializeAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void onInitializeAccessibilityNodeInfo(const ::android::view::View&, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat&) const;
    bool performAccessibilityAction(const ::android::view::View&, int32_t, const ::android::os::Bundle&) const;

};
}
}
}
}


