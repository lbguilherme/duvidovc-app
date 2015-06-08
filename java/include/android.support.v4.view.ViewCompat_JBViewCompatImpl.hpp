#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewCompat_ICSViewCompatImpl.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeProviderCompat; } } } } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewParent; } }
namespace java { namespace lang { class Runnable; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewCompat_JBViewCompatImpl : public virtual ::java::lang::Object,
                                    public virtual ::android::support::v4::view::ViewCompat_ICSViewCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewCompat_JBViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_GBViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_HCViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl(_obj), ::android::support::v4::view::ViewCompat_ViewCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewCompat_JBViewCompatImpl(const ::android::support::v4::view::ViewCompat_JBViewCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_HCViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj;}
    ViewCompat_JBViewCompatImpl(::android::support::v4::view::ViewCompat_JBViewCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewCompat_BaseViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_GBViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_HCViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ICSViewCompatImpl((jobject)0), ::android::support::v4::view::ViewCompat_ViewCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewCompat_JBViewCompatImpl& operator=(const ::android::support::v4::view::ViewCompat_JBViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewCompat_JBViewCompatImpl& operator=(::android::support::v4::view::ViewCompat_JBViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool hasTransientState(const ::android::view::View&) const;
    void setHasTransientState(const ::android::view::View&, bool) const;
    void postInvalidateOnAnimation(const ::android::view::View&) const;
    void postInvalidateOnAnimation(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const;
    void postOnAnimation(const ::android::view::View&, const ::java::lang::Runnable&) const;
    void postOnAnimationDelayed(const ::android::view::View&, const ::java::lang::Runnable&, int64_t) const;
    int32_t getImportantForAccessibility(const ::android::view::View&) const;
    void setImportantForAccessibility(const ::android::view::View&, int32_t) const;
    bool performAccessibilityAction(const ::android::view::View&, int32_t, const ::android::os::Bundle&) const;
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat getAccessibilityNodeProvider(const ::android::view::View&) const;
    ::android::view::ViewParent getParentForAccessibility(const ::android::view::View&) const;
    int32_t getMinimumWidth(const ::android::view::View&) const;
    int32_t getMinimumHeight(const ::android::view::View&) const;
    void requestApplyInsets(const ::android::view::View&) const;
    bool getFitsSystemWindows(const ::android::view::View&) const;

};
}
}
}
}


