#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat_CollectionItemInfoCompat; } } } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityNodeInfoCompat_CollectionItemInfoCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfoCompat_CollectionItemInfoCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfoCompat_CollectionItemInfoCompat(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfoCompat_CollectionItemInfoCompat(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat& operator=(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat obtain(int32_t, int32_t, int32_t, int32_t, bool, bool);
    int32_t getColumnIndex() const ;
    int32_t getColumnSpan() const ;
    int32_t getRowIndex() const ;
    int32_t getRowSpan() const ;
    bool isHeading() const ;
    bool isSelected() const ;

};
}
}
}
}
}


