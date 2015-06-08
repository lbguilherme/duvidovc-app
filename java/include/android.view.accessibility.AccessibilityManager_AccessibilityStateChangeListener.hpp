#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
namespace accessibility {
class AccessibilityManager_AccessibilityStateChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityManager_AccessibilityStateChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityManager_AccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityManager_AccessibilityStateChangeListener(::android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener& operator=(const ::android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener& x) {obj = x.obj; return *this;}
    ::android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener& operator=(::android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onAccessibilityStateChanged(bool) const;

};
}
}
}


