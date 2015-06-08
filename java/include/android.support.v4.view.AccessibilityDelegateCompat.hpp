#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeProviderCompat; } } } } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class AccessibilityDelegateCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityDelegateCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityDelegateCompat(const ::android::support::v4::view::AccessibilityDelegateCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityDelegateCompat(::android::support::v4::view::AccessibilityDelegateCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::AccessibilityDelegateCompat& operator=(const ::android::support::v4::view::AccessibilityDelegateCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::AccessibilityDelegateCompat& operator=(::android::support::v4::view::AccessibilityDelegateCompat&& x) {obj = std::move(x.obj); return *this;}
    
    AccessibilityDelegateCompat();
    void sendAccessibilityEvent(const ::android::view::View&, int32_t) const;
    void sendAccessibilityEventUnchecked(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    bool dispatchPopulateAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void onPopulateAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void onInitializeAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void onInitializeAccessibilityNodeInfo(const ::android::view::View&, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat&) const;
    bool onRequestSendAccessibilityEvent(const ::android::view::ViewGroup&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat getAccessibilityNodeProvider(const ::android::view::View&) const;
    bool performAccessibilityAction(const ::android::view::View&, int32_t, const ::android::os::Bundle&) const;

};
}
}
}
}

#include "android.support.v4.view.AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl.hpp"
#include "android.support.v4.view.AccessibilityDelegateCompat_AccessibilityDelegateImpl.hpp"
#include "android.support.v4.view.AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl.hpp"
#include "android.support.v4.view.AccessibilityDelegateCompat_AccessibilityDelegateStubImpl.hpp"

