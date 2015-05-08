#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeProviderCompat; } } } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl(const ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl(::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl& operator=(::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object newAccessibilityNodeProviderBridge(const ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat&) const ;

};
}
}
}
}
}


