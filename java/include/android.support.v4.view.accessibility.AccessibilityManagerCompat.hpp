#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat; } } } } }
namespace android { namespace view { namespace accessibility { class AccessibilityManager; } } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityManagerCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityManagerCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityManagerCompat(const ::android::support::v4::view::accessibility::AccessibilityManagerCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityManagerCompat(::android::support::v4::view::accessibility::AccessibilityManagerCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityManagerCompat& operator=(const ::android::support::v4::view::accessibility::AccessibilityManagerCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityManagerCompat& operator=(::android::support::v4::view::accessibility::AccessibilityManagerCompat&& x) {obj = std::move(x.obj); return *this;}
    
    AccessibilityManagerCompat();
    static bool addAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager&, const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat&);
    static bool removeAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager&, const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat&);
    static ::java::util::List getInstalledAccessibilityServiceList(const ::android::view::accessibility::AccessibilityManager&);
    static ::java::util::List getEnabledAccessibilityServiceList(const ::android::view::accessibility::AccessibilityManager&, int32_t);
    static bool isTouchExplorationEnabled(const ::android::view::accessibility::AccessibilityManager&);

};
}
}
}
}
}

#include "android.support.v4.view.accessibility.AccessibilityManagerCompat_AccessibilityManagerIcsImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityManagerCompat_AccessibilityManagerStubImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityManagerCompat_AccessibilityManagerVersionImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat.hpp"

