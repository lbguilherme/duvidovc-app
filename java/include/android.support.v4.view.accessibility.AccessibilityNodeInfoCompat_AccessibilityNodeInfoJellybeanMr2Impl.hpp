#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl : public virtual ::java::lang::Object,
                                                                          public virtual ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl& operator=(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getViewIdResourceName(const ::java::lang::Object&) const;
    void setViewIdResourceName(const ::java::lang::Object&, const ::java::lang::String&) const;

};
}
}
}
}
}


