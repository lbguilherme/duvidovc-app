#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class ColorStateList; } } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class PorterDuff_Mode; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace view { class AccessibilityDelegateCompat; } } } }
namespace android { namespace support { namespace v4 { namespace view { class ViewPropertyAnimatorCompat; } } } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeInfoCompat; } } } } }
namespace android { namespace support { namespace v4 { namespace view { namespace accessibility { class AccessibilityNodeProviderCompat; } } } } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace view { class ViewParent; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace java { namespace lang { class Runnable; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewCompat_ViewCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewCompat_ViewCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewCompat_ViewCompatImpl(const ::android::support::v4::view::ViewCompat_ViewCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewCompat_ViewCompatImpl(::android::support::v4::view::ViewCompat_ViewCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewCompat_ViewCompatImpl& operator=(const ::android::support::v4::view::ViewCompat_ViewCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewCompat_ViewCompatImpl& operator=(::android::support::v4::view::ViewCompat_ViewCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool canScrollHorizontally(const ::android::view::View&, int32_t) const;
    bool canScrollVertically(const ::android::view::View&, int32_t) const;
    int32_t getOverScrollMode(const ::android::view::View&) const;
    void setOverScrollMode(const ::android::view::View&, int32_t) const;
    void onInitializeAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void onPopulateAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&) const;
    void onInitializeAccessibilityNodeInfo(const ::android::view::View&, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat&) const;
    void setAccessibilityDelegate(const ::android::view::View&, const ::android::support::v4::view::AccessibilityDelegateCompat&) const;
    bool hasAccessibilityDelegate(const ::android::view::View&) const;
    bool hasTransientState(const ::android::view::View&) const;
    void setHasTransientState(const ::android::view::View&, bool) const;
    void postInvalidateOnAnimation(const ::android::view::View&) const;
    void postInvalidateOnAnimation(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const;
    void postOnAnimation(const ::android::view::View&, const ::java::lang::Runnable&) const;
    void postOnAnimationDelayed(const ::android::view::View&, const ::java::lang::Runnable&, int64_t) const;
    int32_t getImportantForAccessibility(const ::android::view::View&) const;
    void setImportantForAccessibility(const ::android::view::View&, int32_t) const;
    bool isImportantForAccessibility(const ::android::view::View&) const;
    bool performAccessibilityAction(const ::android::view::View&, int32_t, const ::android::os::Bundle&) const;
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat getAccessibilityNodeProvider(const ::android::view::View&) const;
    float getAlpha(const ::android::view::View&) const;
    void setLayerType(const ::android::view::View&, int32_t, const ::android::graphics::Paint&) const;
    int32_t getLayerType(const ::android::view::View&) const;
    int32_t getLabelFor(const ::android::view::View&) const;
    void setLabelFor(const ::android::view::View&, int32_t) const;
    void setLayerPaint(const ::android::view::View&, const ::android::graphics::Paint&) const;
    int32_t getLayoutDirection(const ::android::view::View&) const;
    void setLayoutDirection(const ::android::view::View&, int32_t) const;
    ::android::view::ViewParent getParentForAccessibility(const ::android::view::View&) const;
    bool isOpaque(const ::android::view::View&) const;
    int32_t resolveSizeAndState(int32_t, int32_t, int32_t) const;
    int32_t getMeasuredWidthAndState(const ::android::view::View&) const;
    int32_t getMeasuredHeightAndState(const ::android::view::View&) const;
    int32_t getMeasuredState(const ::android::view::View&) const;
    int32_t getAccessibilityLiveRegion(const ::android::view::View&) const;
    void setAccessibilityLiveRegion(const ::android::view::View&, int32_t) const;
    int32_t getPaddingStart(const ::android::view::View&) const;
    int32_t getPaddingEnd(const ::android::view::View&) const;
    void setPaddingRelative(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const;
    void dispatchStartTemporaryDetach(const ::android::view::View&) const;
    void dispatchFinishTemporaryDetach(const ::android::view::View&) const;
    float getX(const ::android::view::View&) const;
    float getY(const ::android::view::View&) const;
    float getRotation(const ::android::view::View&) const;
    float getRotationX(const ::android::view::View&) const;
    float getRotationY(const ::android::view::View&) const;
    float getScaleX(const ::android::view::View&) const;
    float getScaleY(const ::android::view::View&) const;
    float getTranslationX(const ::android::view::View&) const;
    float getTranslationY(const ::android::view::View&) const;
    int32_t getMinimumWidth(const ::android::view::View&) const;
    int32_t getMinimumHeight(const ::android::view::View&) const;
    ::android::support::v4::view::ViewPropertyAnimatorCompat animate(const ::android::view::View&) const;
    void setRotation(const ::android::view::View&, float) const;
    void setRotationX(const ::android::view::View&, float) const;
    void setRotationY(const ::android::view::View&, float) const;
    void setScaleX(const ::android::view::View&, float) const;
    void setScaleY(const ::android::view::View&, float) const;
    void setTranslationX(const ::android::view::View&, float) const;
    void setTranslationY(const ::android::view::View&, float) const;
    void setX(const ::android::view::View&, float) const;
    void setY(const ::android::view::View&, float) const;
    void setAlpha(const ::android::view::View&, float) const;
    void setPivotX(const ::android::view::View&, float) const;
    void setPivotY(const ::android::view::View&, float) const;
    float getPivotX(const ::android::view::View&) const;
    float getPivotY(const ::android::view::View&) const;
    void setElevation(const ::android::view::View&, float) const;
    float getElevation(const ::android::view::View&) const;
    void setTranslationZ(const ::android::view::View&, float) const;
    float getTranslationZ(const ::android::view::View&) const;
    void setTransitionName(const ::android::view::View&, const ::java::lang::String&) const;
    ::java::lang::String getTransitionName(const ::android::view::View&) const;
    int32_t getWindowSystemUiVisibility(const ::android::view::View&) const;
    void requestApplyInsets(const ::android::view::View&) const;
    void setChildrenDrawingOrderEnabled(const ::android::view::ViewGroup&, bool) const;
    bool getFitsSystemWindows(const ::android::view::View&) const;
    void setFitsSystemWindows(const ::android::view::View&, bool) const;
    void jumpDrawablesToCurrentState(const ::android::view::View&) const;
    void setSaveFromParentEnabled(const ::android::view::View&, bool) const;
    void setActivated(const ::android::view::View&, bool) const;
    bool isPaddingRelative(const ::android::view::View&) const;
    ::android::content::res::ColorStateList getBackgroundTintList(const ::android::view::View&) const;
    void setBackgroundTintList(const ::android::view::View&, const ::android::content::res::ColorStateList&) const;
    ::android::graphics::PorterDuff_Mode getBackgroundTintMode(const ::android::view::View&) const;
    void setBackgroundTintMode(const ::android::view::View&, const ::android::graphics::PorterDuff_Mode&) const;
    void setNestedScrollingEnabled(const ::android::view::View&, bool) const;
    bool isNestedScrollingEnabled(const ::android::view::View&) const;
    bool startNestedScroll(const ::android::view::View&, int32_t) const;
    void stopNestedScroll(const ::android::view::View&) const;
    bool hasNestedScrollingParent(const ::android::view::View&) const;
    bool dispatchNestedScroll(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t, const std::vector< int32_t>&) const;
    bool dispatchNestedPreScroll(const ::android::view::View&, int32_t, int32_t, const std::vector< int32_t>&, const std::vector< int32_t>&) const;
    bool dispatchNestedFling(const ::android::view::View&, float, float, bool) const;
    bool dispatchNestedPreFling(const ::android::view::View&, float, float) const;
    bool isLaidOut(const ::android::view::View&) const;
    int32_t combineMeasuredStates(int32_t, int32_t) const;
    float getZ(const ::android::view::View&) const;

};
}
}
}
}


