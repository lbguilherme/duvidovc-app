#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.AccessibilityDelegateCompat_AccessibilityDelegateStubImpl.hpp"

namespace android { namespace support { namespace v4 { namespace view { class AccessibilityDelegateCompat; } } } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl : public virtual ::java::lang::Object,
                                                                 public virtual ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl(_obj), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl(const ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl((jobject)0) {obj = x.obj;}
    AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl(::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl& operator=(const ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl& operator=(::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object newAccessiblityDelegateDefaultImpl() const ;
    ::java::lang::Object newAccessiblityDelegateBridge(const ::android::support::v4::view::AccessibilityDelegateCompat&) const ;
    bool dispatchPopulateAccessibilityEvent(const ::java::lang::Object&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const ;
    void onInitializeAccessibilityEvent(const ::java::lang::Object&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const ;
    void onInitializeAccessibilityNodeInfo(const ::java::lang::Object&, const ::android::view::View&, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat&) const ;
    void onPopulateAccessibilityEvent(const ::java::lang::Object&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const ;
    bool onRequestSendAccessibilityEvent(const ::java::lang::Object&, const ::android::view::ViewGroup&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const ;
    void sendAccessibilityEvent(const ::java::lang::Object&, const ::android::view::View&, int32_t) const ;
    void sendAccessibilityEventUnchecked(const ::java::lang::Object&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const ;

};
}
}
}
}


