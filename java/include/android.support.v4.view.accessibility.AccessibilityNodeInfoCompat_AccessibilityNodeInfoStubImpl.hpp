#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }
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
class AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl : public virtual ::java::lang::Object,
                                                                  public virtual ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0) {obj = x.obj;}
    AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl& operator=(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl& operator=(::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object newAccessibilityAction(int32_t, const ::java::lang::CharSequence&) const;
    ::java::lang::Object obtain() const;
    ::java::lang::Object obtain(const ::android::view::View&) const;
    ::java::lang::Object obtain(const ::android::view::View&, int32_t) const;
    ::java::lang::Object obtain(const ::java::lang::Object&) const;
    void addAction(const ::java::lang::Object&, int32_t) const;
    void addAction(const ::java::lang::Object&, const ::java::lang::Object&) const;
    int32_t getAccessibilityActionId(const ::java::lang::Object&) const;
    ::java::lang::CharSequence getAccessibilityActionLabel(const ::java::lang::Object&) const;
    void addChild(const ::java::lang::Object&, const ::android::view::View&) const;
    void addChild(const ::java::lang::Object&, const ::android::view::View&, int32_t) const;
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
    bool isVisibleToUser(const ::java::lang::Object&) const;
    bool isAccessibilityFocused(const ::java::lang::Object&) const;
    bool isLongClickable(const ::java::lang::Object&) const;
    bool isPassword(const ::java::lang::Object&) const;
    bool isScrollable(const ::java::lang::Object&) const;
    bool isSelected(const ::java::lang::Object&) const;
    bool performAction(const ::java::lang::Object&, int32_t) const;
    bool performAction(const ::java::lang::Object&, int32_t, const ::android::os::Bundle&) const;
    void setMovementGranularities(const ::java::lang::Object&, int32_t) const;
    int32_t getMovementGranularities(const ::java::lang::Object&) const;
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
    void setVisibleToUser(const ::java::lang::Object&, bool) const;
    void setAccessibilityFocused(const ::java::lang::Object&, bool) const;
    void setLongClickable(const ::java::lang::Object&, bool) const;
    void setPackageName(const ::java::lang::Object&, const ::java::lang::CharSequence&) const;
    void setParent(const ::java::lang::Object&, const ::android::view::View&) const;
    void setPassword(const ::java::lang::Object&, bool) const;
    void setScrollable(const ::java::lang::Object&, bool) const;
    void setSelected(const ::java::lang::Object&, bool) const;
    void setSource(const ::java::lang::Object&, const ::android::view::View&) const;
    void setSource(const ::java::lang::Object&, const ::android::view::View&, int32_t) const;
    ::java::lang::Object findFocus(const ::java::lang::Object&, int32_t) const;
    ::java::lang::Object focusSearch(const ::java::lang::Object&, int32_t) const;
    void setText(const ::java::lang::Object&, const ::java::lang::CharSequence&) const;
    void recycle(const ::java::lang::Object&) const;
    void setParent(const ::java::lang::Object&, const ::android::view::View&, int32_t) const;
    ::java::lang::String getViewIdResourceName(const ::java::lang::Object&) const;
    void setViewIdResourceName(const ::java::lang::Object&, const ::java::lang::String&) const;
    int32_t getLiveRegion(const ::java::lang::Object&) const;
    void setLiveRegion(const ::java::lang::Object&, int32_t) const;
    ::java::lang::Object getCollectionInfo(const ::java::lang::Object&) const;
    void setCollectionInfo(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::lang::Object getCollectionItemInfo(const ::java::lang::Object&) const;
    void setCollectionItemInfo(const ::java::lang::Object&, const ::java::lang::Object&) const;
    ::java::lang::Object getRangeInfo(const ::java::lang::Object&) const;
    ::java::util::List getActionList(const ::java::lang::Object&) const;
    ::java::lang::Object obtainCollectionInfo(int32_t, int32_t, bool, int32_t) const;
    int32_t getCollectionInfoColumnCount(const ::java::lang::Object&) const;
    int32_t getCollectionInfoRowCount(const ::java::lang::Object&) const;
    bool isCollectionInfoHierarchical(const ::java::lang::Object&) const;
    ::java::lang::Object obtainCollectionItemInfo(int32_t, int32_t, int32_t, int32_t, bool, bool) const;
    int32_t getCollectionItemColumnIndex(const ::java::lang::Object&) const;
    int32_t getCollectionItemColumnSpan(const ::java::lang::Object&) const;
    int32_t getCollectionItemRowIndex(const ::java::lang::Object&) const;
    int32_t getCollectionItemRowSpan(const ::java::lang::Object&) const;
    bool isCollectionItemHeading(const ::java::lang::Object&) const;
    bool isCollectionItemSelected(const ::java::lang::Object&) const;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat getTraversalBefore(const ::java::lang::Object&) const;
    void setTraversalBefore(const ::java::lang::Object&, const ::android::view::View&) const;
    void setTraversalBefore(const ::java::lang::Object&, const ::android::view::View&, int32_t) const;
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat getTraversalAfter(const ::java::lang::Object&) const;
    void setTraversalAfter(const ::java::lang::Object&, const ::android::view::View&) const;
    void setTraversalAfter(const ::java::lang::Object&, const ::android::view::View&, int32_t) const;
    void setContentInvalid(const ::java::lang::Object&, bool) const;
    bool isContentInvalid(const ::java::lang::Object&) const;
    void setError(const ::java::lang::Object&, const ::java::lang::CharSequence&) const;
    ::java::lang::CharSequence getError(const ::java::lang::Object&) const;
    void setLabelFor(const ::java::lang::Object&, const ::android::view::View&) const;
    void setLabelFor(const ::java::lang::Object&, const ::android::view::View&, int32_t) const;

};
}
}
}
}
}


