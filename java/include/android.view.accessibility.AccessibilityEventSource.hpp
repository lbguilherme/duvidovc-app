#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace view {
namespace accessibility {
class AccessibilityEventSource : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityEventSource(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityEventSource(const ::android::view::accessibility::AccessibilityEventSource& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityEventSource(::android::view::accessibility::AccessibilityEventSource&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::accessibility::AccessibilityEventSource& operator=(const ::android::view::accessibility::AccessibilityEventSource& x) {obj = x.obj; return *this;}
    ::android::view::accessibility::AccessibilityEventSource& operator=(::android::view::accessibility::AccessibilityEventSource&& x) {obj = std::move(x.obj); return *this;}
    
    void sendAccessibilityEvent(int32_t) const ;
    void sendAccessibilityEventUnchecked(const ::android::view::accessibility::AccessibilityEvent&) const ;

};
}
}
}


