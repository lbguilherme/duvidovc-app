#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityNodeInfoCompat_AccessibilityActionCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfoCompat_AccessibilityActionCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfoCompat_AccessibilityActionCompat(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfoCompat_AccessibilityActionCompat(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat& operator=(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat&& x) {obj = std::move(x.obj); return *this;}
    
    AccessibilityNodeInfoCompat_AccessibilityActionCompat(int32_t, const ::java::lang::CharSequence&);
    int32_t getId() const ;
    ::java::lang::CharSequence getLabel() const ;

};
}
}
}
}
}


