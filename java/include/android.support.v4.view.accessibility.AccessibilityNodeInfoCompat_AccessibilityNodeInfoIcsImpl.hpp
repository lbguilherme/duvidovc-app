#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace accessibility {
class AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl : public virtual ::java::lang::Object,
                                                                 public virtual ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl& operator=(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object obtain() const;
    ::java::lang::Object obtain(const ::android::view::View&) const;
    ::java::lang::Object obtain(const ::java::lang::Object&) const;
    void addAction(const ::java::lang::Object&, int32_t) const;
    void addChild(const ::java::lang::Object&, const ::android::view::View&) const;
    ::java::util::List findAccessibilityNodeInfosByText(const ::java::lang::Object&, const ::java::lang::String&) const;
    int32_t getActions(const ::java::lang::Object&) const;
    void getBoundsInParent(const ::java::lang::Object&, const ::android::graphics::Rect&) const;
    void getBoundsInScreen(const ::java::lang::Object&, const ::android::graphics::Rect&) const;
    ::java::lang::Object getChild(const ::java::lang::Object&, int32_t) const;
    int32_t getChildCount(const ::java::lang::Object&) const;
    ::java::lang::CharSequence getClassName(const ::java::lang::Object&) const;
    ::java::lang::CharSequence getContentDescription(const ::java::lang::Object&) const;
    ::java::lang::CharSequence getPackageName(const ::java::lang::Object&) const;
    ::java::lang::Object getParent(const ::java::lang::Object&) const;
    ::java::lang::CharSequence getText(const ::java::lang::Object&) const;
    int32_t getWindowId(const ::java::lang::Object&) const;
    bool isCheckable(const ::java::lang::Object&) const;
    bool isChecked(const ::java::lang::Object&) const;
    bool isClickable(const ::java::lang::Object&) const;
    bool isEnabled(const ::java::lang::Object&) const;
    bool isFocusable(const ::java::lang::Object&) const;
    bool isFocused(const ::java::lang::Object&) const;
    bool isLongClickable(const ::java::lang::Object&) const;
    bool isPassword(const ::java::lang::Object&) const;
    bool isScrollable(const ::java::lang::Object&) const;
    bool isSelected(const ::java::lang::Object&) const;
    bool performAction(const ::java::lang::Object&, int32_t) const;
    void setBoundsInParent(const ::java::lang::Object&, const ::android::graphics::Rect&) const;
    void setBoundsInScreen(const ::java::lang::Object&, const ::android::graphics::Rect&) const;
    void setCheckable(const ::java::lang::Object&, bool) const;
    void setChecked(const ::java::lang::Object&, bool) const;
    void setClassName(const ::java::lang::Object&, const ::java::lang::CharSequence&) const;
    void setClickable(const ::java::lang::Object&, bool) const;
    void setContentDescription(const ::java::lang::Object&, const ::java::lang::CharSequence&) const;
    void setEnabled(const ::java::lang::Object&, bool) const;
    void setFocusable(const ::java::lang::Object&, bool) const;
    void setFocused(const ::java::lang::Object&, bool) const;
    void setLongClickable(const ::java::lang::Object&, bool) const;
    void setPackageName(const ::java::lang::Object&, const ::java::lang::CharSequence&) const;
    void setParent(const ::java::lang::Object&, const ::android::view::View&) const;
    void setPassword(const ::java::lang::Object&, bool) const;
    void setScrollable(const ::java::lang::Object&, bool) const;
    void setSelected(const ::java::lang::Object&, bool) const;
    void setSource(const ::java::lang::Object&, const ::android::view::View&) const;
    void setText(const ::java::lang::Object&, const ::java::lang::CharSequence&) const;
    void recycle(const ::java::lang::Object&) const;

};
}
}
}
}
}


