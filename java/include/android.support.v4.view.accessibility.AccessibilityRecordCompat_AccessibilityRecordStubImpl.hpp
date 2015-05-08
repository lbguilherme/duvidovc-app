#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityRecordCompat_AccessibilityRecordImpl.hpp"

namespace android { namespace os { class Parcelable; } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityRecordCompat_AccessibilityRecordStubImpl : public virtual ::java::lang::Object,
                                                              public virtual ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityRecordCompat_AccessibilityRecordStubImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityRecordCompat_AccessibilityRecordStubImpl(const ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl((jobject)0) {obj = x.obj;}
    AccessibilityRecordCompat_AccessibilityRecordStubImpl(::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl& operator=(::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object obtain() const ;
    ::java::lang::Object obtain(const ::java::lang::Object&) const ;
    int32_t getAddedCount(const ::java::lang::Object&) const ;
    ::java::lang::CharSequence getBeforeText(const ::java::lang::Object&) const ;
    ::java::lang::CharSequence getClassName(const ::java::lang::Object&) const ;
    ::java::lang::CharSequence getContentDescription(const ::java::lang::Object&) const ;
    int32_t getCurrentItemIndex(const ::java::lang::Object&) const ;
    int32_t getFromIndex(const ::java::lang::Object&) const ;
    int32_t getItemCount(const ::java::lang::Object&) const ;
    int32_t getMaxScrollX(const ::java::lang::Object&) const ;
    int32_t getMaxScrollY(const ::java::lang::Object&) const ;
    ::android::os::Parcelable getParcelableData(const ::java::lang::Object&) const ;
    int32_t getRemovedCount(const ::java::lang::Object&) const ;
    int32_t getScrollX(const ::java::lang::Object&) const ;
    int32_t getScrollY(const ::java::lang::Object&) const ;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat getSource(const ::java::lang::Object&) const ;
    ::java::util::List getText(const ::java::lang::Object&) const ;
    int32_t getToIndex(const ::java::lang::Object&) const ;
    int32_t getWindowId(const ::java::lang::Object&) const ;
    bool isChecked(const ::java::lang::Object&) const ;
    bool isEnabled(const ::java::lang::Object&) const ;
    bool isFullScreen(const ::java::lang::Object&) const ;
    bool isPassword(const ::java::lang::Object&) const ;
    bool isScrollable(const ::java::lang::Object&) const ;
    void recycle(const ::java::lang::Object&) const ;
    void setAddedCount(const ::java::lang::Object&, int32_t) const ;
    void setBeforeText(const ::java::lang::Object&, const ::java::lang::CharSequence&) const ;
    void setChecked(const ::java::lang::Object&, bool) const ;
    void setClassName(const ::java::lang::Object&, const ::java::lang::CharSequence&) const ;
    void setContentDescription(const ::java::lang::Object&, const ::java::lang::CharSequence&) const ;
    void setCurrentItemIndex(const ::java::lang::Object&, int32_t) const ;
    void setEnabled(const ::java::lang::Object&, bool) const ;
    void setFromIndex(const ::java::lang::Object&, int32_t) const ;
    void setFullScreen(const ::java::lang::Object&, bool) const ;
    void setItemCount(const ::java::lang::Object&, int32_t) const ;
    void setMaxScrollX(const ::java::lang::Object&, int32_t) const ;
    void setMaxScrollY(const ::java::lang::Object&, int32_t) const ;
    void setParcelableData(const ::java::lang::Object&, const ::android::os::Parcelable&) const ;
    void setPassword(const ::java::lang::Object&, bool) const ;
    void setRemovedCount(const ::java::lang::Object&, int32_t) const ;
    void setScrollX(const ::java::lang::Object&, int32_t) const ;
    void setScrollY(const ::java::lang::Object&, int32_t) const ;
    void setScrollable(const ::java::lang::Object&, bool) const ;
    void setSource(const ::java::lang::Object&, const ::android::view::View&) const ;
    void setSource(const ::java::lang::Object&, const ::android::view::View&, int32_t) const ;
    void setToIndex(const ::java::lang::Object&, int32_t) const ;

};
}
}
}
}
}


