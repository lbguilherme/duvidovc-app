#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.AccessibilityDelegateCompat.hpp"

namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeProviderCompat; } } } } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ExploreByTouchHelper : public virtual ::java::lang::Object,
                             public virtual ::android::support::v4::view::AccessibilityDelegateCompat {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExploreByTouchHelper(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::AccessibilityDelegateCompat(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExploreByTouchHelper(const ::android::support::v4::widget::ExploreByTouchHelper& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat((jobject)0) {obj = x.obj;}
    ExploreByTouchHelper(::android::support::v4::widget::ExploreByTouchHelper&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ExploreByTouchHelper& operator=(const ::android::support::v4::widget::ExploreByTouchHelper& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ExploreByTouchHelper& operator=(::android::support::v4::widget::ExploreByTouchHelper&& x) {obj = std::move(x.obj); return *this;}
    
    ExploreByTouchHelper(const ::android::view::View&);
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat getAccessibilityNodeProvider(const ::android::view::View&) const;
    bool dispatchHoverEvent(const ::android::view::MotionEvent&) const;
    bool sendEventForVirtualView(int32_t, int32_t) const;
    void invalidateRoot() const;
    void invalidateVirtualView(int32_t) const;
    int32_t getFocusedVirtualView() const;

};
}
}
}
}

#include "android.support.v4.widget.ExploreByTouchHelper_ExploreByTouchNodeProvider.hpp"

