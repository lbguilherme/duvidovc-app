#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.AccessibilityDelegateCompat.hpp"

namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class DrawerLayout_ChildAccessibilityDelegate : public virtual ::java::lang::Object,
                                                public virtual ::android::support::v4::view::AccessibilityDelegateCompat {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawerLayout_ChildAccessibilityDelegate(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::AccessibilityDelegateCompat(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawerLayout_ChildAccessibilityDelegate(const ::android::support::v4::widget::DrawerLayout_ChildAccessibilityDelegate& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat((jobject)0) {obj = x.obj;}
    DrawerLayout_ChildAccessibilityDelegate(::android::support::v4::widget::DrawerLayout_ChildAccessibilityDelegate&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::DrawerLayout_ChildAccessibilityDelegate& operator=(const ::android::support::v4::widget::DrawerLayout_ChildAccessibilityDelegate& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::DrawerLayout_ChildAccessibilityDelegate& operator=(::android::support::v4::widget::DrawerLayout_ChildAccessibilityDelegate&& x) {obj = std::move(x.obj); return *this;}
    
    void onInitializeAccessibilityNodeInfo(const ::android::view::View&, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat&) const ;

};
}
}
}
}


