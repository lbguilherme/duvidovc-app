#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ExploreByTouchHelper_ExploreByTouchNodeProvider : public virtual ::java::lang::Object,
                                                        public virtual ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExploreByTouchHelper_ExploreByTouchNodeProvider(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExploreByTouchHelper_ExploreByTouchNodeProvider(const ::android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat((jobject)0) {obj = x.obj;}
    ExploreByTouchHelper_ExploreByTouchNodeProvider(::android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider& operator=(const ::android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider& operator=(::android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat createAccessibilityNodeInfo(int32_t) const ;
    bool performAction(int32_t, int32_t, const ::android::os::Bundle&) const ;

};
}
}
}
}


