#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl : public virtual ::java::lang::Object,
                                                                    public virtual ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl& operator=(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getLiveRegion(const ::java::lang::Object&) const ;
    void setLiveRegion(const ::java::lang::Object&, int32_t) const ;
    ::java::lang::Object getCollectionInfo(const ::java::lang::Object&) const ;
    void setCollectionInfo(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    ::java::lang::Object obtainCollectionInfo(int32_t, int32_t, bool, int32_t) const ;
    ::java::lang::Object obtainCollectionItemInfo(int32_t, int32_t, int32_t, int32_t, bool, bool) const ;
    int32_t getCollectionInfoColumnCount(const ::java::lang::Object&) const ;
    int32_t getCollectionInfoRowCount(const ::java::lang::Object&) const ;
    bool isCollectionInfoHierarchical(const ::java::lang::Object&) const ;
    ::java::lang::Object getCollectionItemInfo(const ::java::lang::Object&) const ;
    ::java::lang::Object getRangeInfo(const ::java::lang::Object&) const ;
    int32_t getCollectionItemColumnIndex(const ::java::lang::Object&) const ;
    int32_t getCollectionItemColumnSpan(const ::java::lang::Object&) const ;
    int32_t getCollectionItemRowIndex(const ::java::lang::Object&) const ;
    int32_t getCollectionItemRowSpan(const ::java::lang::Object&) const ;
    bool isCollectionItemHeading(const ::java::lang::Object&) const ;
    void setCollectionItemInfo(const ::java::lang::Object&, const ::java::lang::Object&) const ;
    void setContentInvalid(const ::java::lang::Object&, bool) const ;
    bool isContentInvalid(const ::java::lang::Object&) const ;

};
}
}
}
}
}


