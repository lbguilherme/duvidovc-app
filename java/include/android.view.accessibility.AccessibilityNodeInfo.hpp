#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { namespace accessibility { class AccessibilityNodeInfo; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace view {
namespace accessibility {
class AccessibilityNodeInfo : public virtual ::java::lang::Object,
                              public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfo(::android::view::accessibility::AccessibilityNodeInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::accessibility::AccessibilityNodeInfo& operator=(const ::android::view::accessibility::AccessibilityNodeInfo& x) {obj = x.obj; return *this;}
    ::android::view::accessibility::AccessibilityNodeInfo& operator=(::android::view::accessibility::AccessibilityNodeInfo&& x) {obj = std::move(x.obj); return *this;}
    
    void setSource(const ::android::view::View&) const ;
    int32_t getWindowId() const ;
    int32_t getChildCount() const ;
    ::android::view::accessibility::AccessibilityNodeInfo getChild(int32_t) const ;
    void addChild(const ::android::view::View&) const ;
    int32_t getActions() const ;
    void addAction(int32_t) const ;
    bool performAction(int32_t) const ;
    ::java::util::List findAccessibilityNodeInfosByText(const ::java::lang::String&) const ;
    ::android::view::accessibility::AccessibilityNodeInfo getParent() const ;
    void setParent(const ::android::view::View&) const ;
    void getBoundsInParent(const ::android::graphics::Rect&) const ;
    void setBoundsInParent(const ::android::graphics::Rect&) const ;
    void getBoundsInScreen(const ::android::graphics::Rect&) const ;
    void setBoundsInScreen(const ::android::graphics::Rect&) const ;
    bool isCheckable() const ;
    void setCheckable(bool) const ;
    bool isChecked() const ;
    void setChecked(bool) const ;
    bool isFocusable() const ;
    void setFocusable(bool) const ;
    bool isFocused() const ;
    void setFocused(bool) const ;
    bool isSelected() const ;
    void setSelected(bool) const ;
    bool isClickable() const ;
    void setClickable(bool) const ;
    bool isLongClickable() const ;
    void setLongClickable(bool) const ;
    bool isEnabled() const ;
    void setEnabled(bool) const ;
    bool isPassword() const ;
    void setPassword(bool) const ;
    bool isScrollable() const ;
    void setScrollable(bool) const ;
    ::java::lang::CharSequence getPackageName() const ;
    void setPackageName(const ::java::lang::CharSequence&) const ;
    ::java::lang::CharSequence getClassName() const ;
    void setClassName(const ::java::lang::CharSequence&) const ;
    ::java::lang::CharSequence getText() const ;
    void setText(const ::java::lang::CharSequence&) const ;
    ::java::lang::CharSequence getContentDescription() const ;
    void setContentDescription(const ::java::lang::CharSequence&) const ;
    int32_t describeContents() const ;
    static ::android::view::accessibility::AccessibilityNodeInfo obtain(const ::android::view::View&);
    static ::android::view::accessibility::AccessibilityNodeInfo obtain();
    static ::android::view::accessibility::AccessibilityNodeInfo obtain(const ::android::view::accessibility::AccessibilityNodeInfo&);
    void recycle() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;

};
}
}
}


