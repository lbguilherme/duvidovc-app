#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl.hpp"

namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl : public virtual ::java::lang::Object,
                                                                   public virtual ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl& operator=(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat getTraversalBefore(const ::java::lang::Object&) const;
    void setTraversalBefore(const ::java::lang::Object&, const ::android::view::View&) const;
    void setTraversalBefore(const ::java::lang::Object&, const ::android::view::View&, int32_t) const;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat getTraversalAfter(const ::java::lang::Object&) const;
    void setTraversalAfter(const ::java::lang::Object&, const ::android::view::View&) const;
    void setTraversalAfter(const ::java::lang::Object&, const ::android::view::View&, int32_t) const;

};
}
}
}
}
}


