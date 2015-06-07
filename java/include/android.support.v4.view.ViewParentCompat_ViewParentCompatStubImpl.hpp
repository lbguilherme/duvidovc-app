#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewParentCompat_ViewParentCompatImpl.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewParent; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewParentCompat_ViewParentCompatStubImpl : public virtual ::java::lang::Object,
                                                  public virtual ::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewParentCompat_ViewParentCompatStubImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewParentCompat_ViewParentCompatStubImpl(const ::android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl((jobject)0) {obj = x.obj;}
    ViewParentCompat_ViewParentCompatStubImpl(::android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl& operator=(const ::android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl& operator=(::android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool requestSendAccessibilityEvent(const ::android::view::ViewParent&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const ;
    bool onStartNestedScroll(const ::android::view::ViewParent&, const ::android::view::View&, const ::android::view::View&, int32_t) const ;
    void onNestedScrollAccepted(const ::android::view::ViewParent&, const ::android::view::View&, const ::android::view::View&, int32_t) const ;
    void onStopNestedScroll(const ::android::view::ViewParent&, const ::android::view::View&) const ;
    void onNestedScroll(const ::android::view::ViewParent&, const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const ;
    void onNestedPreScroll(const ::android::view::ViewParent&, const ::android::view::View&, int32_t, int32_t, const std::vector< int32_t>&) const ;
    bool onNestedFling(const ::android::view::ViewParent&, const ::android::view::View&, float, float, bool) const ;
    bool onNestedPreFling(const ::android::view::ViewParent&, const ::android::view::View&, float, float) const ;
    void notifySubtreeAccessibilityStateChanged(const ::android::view::ViewParent&, const ::android::view::View&, const ::android::view::View&, int32_t) const ;

};
}
}
}
}


