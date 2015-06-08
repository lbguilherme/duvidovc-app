#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat_CollectionInfoCompat; } } } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityNodeInfoCompat_CollectionInfoCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfoCompat_CollectionInfoCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfoCompat_CollectionInfoCompat(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfoCompat_CollectionInfoCompat(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat& operator=(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat obtain(int32_t, int32_t, bool, int32_t);
    int32_t getColumnCount() const;
    int32_t getRowCount() const;
    bool isHierarchical() const;

};
}
}
}
}
}


