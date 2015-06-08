#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace view { namespace accessibility { class AccessibilityManager_AccessibilityStateChangeListener; } } }
namespace java { namespace util { class List; } }

namespace android {
namespace view {
namespace accessibility {
class AccessibilityManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityManager(const ::android::view::accessibility::AccessibilityManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityManager(::android::view::accessibility::AccessibilityManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::accessibility::AccessibilityManager& operator=(const ::android::view::accessibility::AccessibilityManager& x) {obj = x.obj; return *this;}
    ::android::view::accessibility::AccessibilityManager& operator=(::android::view::accessibility::AccessibilityManager&& x) {obj = std::move(x.obj); return *this;}
    
    bool isEnabled() const;
    bool isTouchExplorationEnabled() const;
    void sendAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;
    void interrupt() const;
    ::java::util::List getAccessibilityServiceList() const;
    ::java::util::List getInstalledAccessibilityServiceList() const;
    ::java::util::List getEnabledAccessibilityServiceList(int32_t) const;
    bool addAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener&) const;
    bool removeAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener&) const;

};
}
}
}

#include "android.view.accessibility.AccessibilityManager_AccessibilityStateChangeListener.hpp"

