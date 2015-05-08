#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat_AccessibilityActionCompat; } } } } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat_CollectionInfoCompat; } } } } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat_CollectionItemInfoCompat; } } } } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat_RangeInfoCompat; } } } } }
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
class AccessibilityNodeInfoCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfoCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfoCompat(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfoCompat(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& operator=(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat&& x) {obj = std::move(x.obj); return *this;}
    
    AccessibilityNodeInfoCompat(const ::java::lang::Object&);
    ::java::lang::Object getInfo() const ;
    static ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat obtain(const ::android::view::View&);
    static ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat obtain(const ::android::view::View&, int32_t);
    static ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat obtain();
    static ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat obtain(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat&);
    void setSource(const ::android::view::View&) const ;
    void setSource(const ::android::view::View&, int32_t) const ;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat findFocus(int32_t) const ;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat focusSearch(int32_t) const ;
    int32_t getWindowId() const ;
    int32_t getChildCount() const ;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat getChild(int32_t) const ;
    void addChild(const ::android::view::View&) const ;
    void addChild(const ::android::view::View&, int32_t) const ;
    int32_t getActions() const ;
    void addAction(int32_t) const ;
    void addAction(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat&) const ;
    bool performAction(int32_t) const ;
    bool performAction(int32_t, const ::android::os::Bundle&) const ;
    void setMovementGranularities(int32_t) const ;
    int32_t getMovementGranularities() const ;
    ::java::util::List findAccessibilityNodeInfosByText(const ::java::lang::String&) const ;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat getParent() const ;
    void setParent(const ::android::view::View&) const ;
    void setParent(const ::android::view::View&, int32_t) const ;
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
    bool isVisibleToUser() const ;
    void setVisibleToUser(bool) const ;
    bool isAccessibilityFocused() const ;
    void setAccessibilityFocused(bool) const ;
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
    void recycle() const ;
    void setViewIdResourceName(const ::java::lang::String&) const ;
    ::java::lang::String getViewIdResourceName() const ;
    int32_t getLiveRegion() const ;
    void setLiveRegion(int32_t) const ;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat getCollectionInfo() const ;
    void setCollectionInfo(const ::java::lang::Object&) const ;
    void setCollectionItemInfo(const ::java::lang::Object&) const ;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat getCollectionItemInfo() const ;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat getRangeInfo() const ;
    ::java::util::List getActionList() const ;
    int32_t hashCode() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::String toString() const ;

};
}
}
}
}
}

#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityActionCompat.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_CollectionInfoCompat.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_CollectionItemInfoCompat.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_RangeInfoCompat.hpp"

