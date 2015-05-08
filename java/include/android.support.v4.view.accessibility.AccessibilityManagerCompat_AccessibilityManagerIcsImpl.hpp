#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityManagerCompat_AccessibilityManagerStubImpl.hpp"

namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat; } } } } }
namespace android { namespace view { namespace accessibility { class AccessibilityManager; } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityManagerCompat_AccessibilityManagerIcsImpl : public virtual ::java::lang::Object,
                                                               public virtual ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityManagerCompat_AccessibilityManagerIcsImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityManagerCompat_AccessibilityManagerIcsImpl(const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl((jobject)0) {obj = x.obj;}
    AccessibilityManagerCompat_AccessibilityManagerIcsImpl(::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl& operator=(::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl&& x) {obj = std::move(x.obj); return *this;}
    
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


