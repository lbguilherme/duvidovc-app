#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl : public virtual ::java::lang::Object,
                                                                   public virtual ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl& operator=(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object newAccessibilityAction(int32_t, const ::java::lang::CharSequence&) const ;
    ::java::util::List getActionList(const ::java::lang::Object&) const ;
    ::java::lang::Object obtainCollectionInfo(int32_t, int32_t, bool, int32_t) const ;
    void addAction(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    int32_t getAccessibilityActionId(const ::java::lang::Object&) const ;
    ::java::lang::CharSequence getAccessibilityActionLabel(const ::java::lang::Object&) const ;
    ::java::lang::Object obtainCollectionItemInfo(int32_t, int32_t, int32_t, int32_t, bool, bool) const ;
    bool isCollectionItemSelected(const ::java::lang::Object&) const ;

};
}
}
}
}
}


