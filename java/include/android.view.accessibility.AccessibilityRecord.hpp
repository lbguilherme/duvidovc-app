#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Parcelable; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { namespace accessibility { class AccessibilityNodeInfo; } } }
namespace android { namespace view { namespace accessibility { class AccessibilityRecord; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace view {
namespace accessibility {
class AccessibilityRecord : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityRecord(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityRecord(const ::android::view::accessibility::AccessibilityRecord& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityRecord(::android::view::accessibility::AccessibilityRecord&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::accessibility::AccessibilityRecord& operator=(const ::android::view::accessibility::AccessibilityRecord& x) {obj = x.obj; return *this;}
    ::android::view::accessibility::AccessibilityRecord& operator=(::android::view::accessibility::AccessibilityRecord&& x) {obj = std::move(x.obj); return *this;}
    
    void setSource(const ::android::view::View&) const;
    ::android::view::accessibility::AccessibilityNodeInfo getSource() const;
    int32_t getWindowId() const;
    bool isChecked() const;
    void setChecked(bool) const;
    bool isEnabled() const;
    void setEnabled(bool) const;
    bool isPassword() const;
    void setPassword(bool) const;
    bool isFullScreen() const;
    void setFullScreen(bool) const;
    bool isScrollable() const;
    void setScrollable(bool) const;
    int32_t getItemCount() const;
    void setItemCount(int32_t) const;
    int32_t getCurrentItemIndex() const;
    void setCurrentItemIndex(int32_t) const;
    int32_t getFromIndex() const;
    void setFromIndex(int32_t) const;
    int32_t getToIndex() const;
    void setToIndex(int32_t) const;
    int32_t getScrollX() const;
    void setScrollX(int32_t) const;
    int32_t getScrollY() const;
    void setScrollY(int32_t) const;
    int32_t getMaxScrollX() const;
    void setMaxScrollX(int32_t) const;
    int32_t getMaxScrollY() const;
    void setMaxScrollY(int32_t) const;
    int32_t getAddedCount() const;
    void setAddedCount(int32_t) const;
    int32_t getRemovedCount() const;
    void setRemovedCount(int32_t) const;
    ::java::lang::CharSequence getClassName() const;
    void setClassName(const ::java::lang::CharSequence&) const;
    ::java::util::List getText() const;
    ::java::lang::CharSequence getBeforeText() const;
    void setBeforeText(const ::java::lang::CharSequence&) const;
    ::java::lang::CharSequence getContentDescription() const;
    void setContentDescription(const ::java::lang::CharSequence&) const;
    ::android::os::Parcelable getParcelableData() const;
    void setParcelableData(const ::android::os::Parcelable&) const;
    static ::android::view::accessibility::AccessibilityRecord obtain(const ::android::view::accessibility::AccessibilityRecord&);
    static ::android::view::accessibility::AccessibilityRecord obtain();
    void recycle() const;
    ::java::lang::String toString() const;

};
}
}
}


