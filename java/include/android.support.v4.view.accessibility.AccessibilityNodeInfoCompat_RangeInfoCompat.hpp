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
class AccessibilityNodeInfoCompat_RangeInfoCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfoCompat_RangeInfoCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfoCompat_RangeInfoCompat(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfoCompat_RangeInfoCompat(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat& operator=(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat&& x) {obj = std::move(x.obj); return *this;}
    
    float getCurrent() const ;
    float getMax() const ;
    float getMin() const ;
    int32_t getType() const ;

};
}
}
}
}
}


