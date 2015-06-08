#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewParent; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewParentCompat_ViewParentCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewParentCompat_ViewParentCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewParentCompat_ViewParentCompatImpl(const ::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewParentCompat_ViewParentCompatImpl(::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl& operator=(const ::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl& operator=(::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool requestSendAccessibilityEvent(const ::android::view::ViewParent&, const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    bool onStartNestedScroll(const ::android::view::ViewParent&, const ::android::view::View&, const ::android::view::View&, int32_t) const;
    void onNestedScrollAccepted(const ::android::view::ViewParent&, const ::android::view::View&, const ::android::view::View&, int32_t) const;
    void onStopNestedScroll(const ::android::view::ViewParent&, const ::android::view::View&) const;
    void onNestedScroll(const ::android::view::ViewParent&, const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const;
    void onNestedPreScroll(const ::android::view::ViewParent&, const ::android::view::View&, int32_t, int32_t, const std::vector< int32_t>&) const;
    bool onNestedFling(const ::android::view::ViewParent&, const ::android::view::View&, float, float, bool) const;
    bool onNestedPreFling(const ::android::view::ViewParent&, const ::android::view::View&, float, float) const;
    void notifySubtreeAccessibilityStateChanged(const ::android::view::ViewParent&, const ::android::view::View&, const ::android::view::View&, int32_t) const;

};
}
}
}
}


