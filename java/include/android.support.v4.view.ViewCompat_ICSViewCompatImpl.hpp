#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewCompat_HCViewCompatImpl.hpp"

namespace android { namespace support { namespace v4 { namespace view { class AccessibilityDelegateCompat; } } } }
namespace android { namespace support { namespace v4 { namespace view { class ViewPropertyAnimatorCompat; } } } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }
namespace android { namespace view { class View; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewCompat_ICSViewCompatImpl : public virtual ::java::lang::Object,
                                     public virtual ::android::support::v4::view::ViewCompat_HCViewCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewCompat_ICSViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_GBViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_HCViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ViewCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewCompat_ICSViewCompatImpl(const ::android::support::v4::view::ViewCompat_ICSViewCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_HCViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj;}
    ViewCompat_ICSViewCompatImpl(::android::support::v4::view::ViewCompat_ICSViewCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_HCViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewCompat_ICSViewCompatImpl& operator=(const ::android::support::v4::view::ViewCompat_ICSViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewCompat_ICSViewCompatImpl& operator=(::android::support::v4::view::ViewCompat_ICSViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool canScrollHorizontally(const ::android::view::View&, int32_t) const;
    bool canScrollVertically(const ::android::view::View&, int32_t) const;
    void onPopulateAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void onInitializeAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void onInitializeAccessibilityNodeInfo(const ::android::view::View&, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat&) const;
    void setAccessibilityDelegate(const ::android::view::View&, const ::android::support::v4::view::AccessibilityDelegateCompat&) const;
    bool hasAccessibilityDelegate(const ::android::view::View&) const;
    ::android::support::v4::view::ViewPropertyAnimatorCompat animate(const ::android::view::View&) const;
    void setFitsSystemWindows(const ::android::view::View&, bool) const;

};
}
}
}
}


