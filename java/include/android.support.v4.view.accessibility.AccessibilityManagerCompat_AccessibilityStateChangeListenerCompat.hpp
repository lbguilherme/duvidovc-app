#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat(const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat(::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& operator=(const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& operator=(::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat&& x) {obj = std::move(x.obj); return *this;}
    
    AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat();
    void onAccessibilityStateChanged(bool) const ;

};
}
}
}
}
}


