#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityEventCompat_AccessibilityEventVersionImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityEventCompat_AccessibilityEventVersionImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityEventCompat_AccessibilityEventVersionImpl(const ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityEventCompat_AccessibilityEventVersionImpl(::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl& operator=(::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getRecordCount(const ::android::view::accessibility::AccessibilityEvent&) const;
    void appendRecord(const ::android::view::accessibility::AccessibilityEvent&, const ::java::lang::Object&) const;
    ::java::lang::Object getRecord(const ::android::view::accessibility::AccessibilityEvent&, int32_t) const;
    void setContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent&, int32_t) const;
    int32_t getContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent&) const;

};
}
}
}
}
}


