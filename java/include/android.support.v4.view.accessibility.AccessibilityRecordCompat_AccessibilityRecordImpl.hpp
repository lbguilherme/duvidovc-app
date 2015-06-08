#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

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
class AccessibilityRecordCompat_AccessibilityRecordImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityRecordCompat_AccessibilityRecordImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityRecordCompat_AccessibilityRecordImpl(const ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityRecordCompat_AccessibilityRecordImpl(::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl& operator=(::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object obtain() const;
    ::java::lang::Object obtain(const ::java::lang::Object&) const;
    void setSource(const ::java::lang::Object&, const ::android::view::View&) const;
    void setSource(const ::java::lang::Object&, const ::android::view::View&, int32_t) const;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat getSource(const ::java::lang::Object&) const;
    int32_t getWindowId(const ::java::lang::Object&) const;
    bool isChecked(const ::java::lang::Object&) const;
    void setChecked(const ::java::lang::Object&, bool) const;
    bool isEnabled(const ::java::lang::Object&) const;
    void setEnabled(const ::java::lang::Object&, bool) const;
    bool isPassword(const ::java::lang::Object&) const;
    void setPassword(const ::java::lang::Object&, bool) const;
    bool isFullScreen(const ::java::lang::Object&) const;
    void setFullScreen(const ::java::lang::Object&, bool) const;
    bool isScrollable(const ::java::lang::Object&) const;
    void setScrollable(const ::java::lang::Object&, bool) const;
    int32_t getItemCount(const ::java::lang::Object&) const;
    void setItemCount(const ::java::lang::Object&, int32_t) const;
    int32_t getCurrentItemIndex(const ::java::lang::Object&) const;
    void setCurrentItemIndex(const ::java::lang::Object&, int32_t) const;
    int32_t getFromIndex(const ::java::lang::Object&) const;
    void setFromIndex(const ::java::lang::Object&, int32_t) const;
    int32_t getToIndex(const ::java::lang::Object&) const;
    void setToIndex(const ::java::lang::Object&, int32_t) const;
    int32_t getScrollX(const ::java::lang::Object&) const;
    void setScrollX(const ::java::lang::Object&, int32_t) const;
    int32_t getScrollY(const ::java::lang::Object&) const;
    void setScrollY(const ::java::lang::Object&, int32_t) const;
    int32_t getMaxScrollX(const ::java::lang::Object&) const;
    void setMaxScrollX(const ::java::lang::Object&, int32_t) const;
    int32_t getMaxScrollY(const ::java::lang::Object&) const;
    void setMaxScrollY(const ::java::lang::Object&, int32_t) const;
    int32_t getAddedCount(const ::java::lang::Object&) const;
    void setAddedCount(const ::java::lang::Object&, int32_t) const;
    int32_t getRemovedCount(const ::java::lang::Object&) const;
    void setRemovedCount(const ::java::lang::Object&, int32_t) const;
    ::java::lang::CharSequence getClassName(const ::java::lang::Object&) const;
    void setClassName(const ::java::lang::Object&, const ::java::lang::CharSequence&) const;
    ::java::util::List getText(const ::java::lang::Object&) const;
    ::java::lang::CharSequence getBeforeText(const ::java::lang::Object&) const;
    void setBeforeText(const ::java::lang::Object&, const ::java::lang::CharSequence&) const;
    ::java::lang::CharSequence getContentDescription(const ::java::lang::Object&) const;
    void setContentDescription(const ::java::lang::Object&, const ::java::lang::CharSequence&) const;
    ::android::os::Parcelable getParcelableData(const ::java::lang::Object&) const;
    void setParcelableData(const ::java::lang::Object&, const ::android::os::Parcelable&) const;
    void recycle(const ::java::lang::Object&) const;

};
}
}
}
}
}


