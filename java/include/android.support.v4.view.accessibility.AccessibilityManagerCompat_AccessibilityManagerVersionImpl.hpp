#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat; } } } } }
namespace android { namespace view { namespace accessibility { class AccessibilityManager; } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityManagerCompat_AccessibilityManagerVersionImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityManagerCompat_AccessibilityManagerVersionImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityManagerCompat_AccessibilityManagerVersionImpl(const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityManagerCompat_AccessibilityManagerVersionImpl(::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl& operator=(::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object newAccessiblityStateChangeListener(const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat&) const ;
    bool addAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager&, const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat&) const ;
    bool removeAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager&, const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat&) const ;
    ::java::util::List getEnabledAccessibilityServiceList(const ::android::view::accessibility::AccessibilityManager&, int32_t) const ;
    ::java::util::List getInstalledAccessibilityServiceList(const ::android::view::accessibility::AccessibilityManager&) const ;
    bool isTouchExplorationEnabled(const ::android::view::accessibility::AccessibilityManager&) const ;

};
}
}
}
}
}


