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
class ViewCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewCompat(const ::android::support::v4::view::ViewCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewCompat(::android::support::v4::view::ViewCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewCompat& operator=(const ::android::support::v4::view::ViewCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewCompat& operator=(::android::support::v4::view::ViewCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ViewCompat();
    static bool canScrollHorizontally(const ::android::view::View&, int32_t);
    static bool canScrollVertically(const ::android::view::View&, int32_t);
    static int32_t getOverScrollMode(const ::android::view::View&);
    static void setOverScrollMode(const ::android::view::View&, int32_t);
    static void onPopulateAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&);
    static void onInitializeAccessibilityEvent(const ::android::view::View&, const ::android::view::accessibility::AccessibilityEvent&);
    static void onInitializeAccessibilityNodeInfo(const ::android::view::View&, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat&);
    static void setAccessibilityDelegate(const ::android::view::View&, const ::android::support::v4::view::AccessibilityDelegateCompat&);
    static bool hasAccessibilityDelegate(const ::android::view::View&);
    static bool hasTransientState(const ::android::view::View&);
    static void setHasTransientState(const ::android::view::View&, bool);
    static void postInvalidateOnAnimation(const ::android::view::View&);
    static void postInvalidateOnAnimation(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t);
    static void postOnAnimation(const ::android::view::View&, const ::java::lang::Runnable&);
    static void postOnAnimationDelayed(const ::android::view::View&, const ::java::lang::Runnable&, int64_t);
    static int32_t getImportantForAccessibility(const ::android::view::View&);
    static void setImportantForAccessibility(const ::android::view::View&, int32_t);
    static bool performAccessibilityAction(const ::android::view::View&, int32_t, const ::android::os::Bundle&);
    static ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat getAccessibilityNodeProvider(const ::android::view::View&);
    static float getAlpha(const ::android::view::View&);
    static void setLayerType(const ::android::view::View&, int32_t, const ::android::graphics::Paint&);
    static int32_t getLayerType(const ::android::view::View&);
    static int32_t getLabelFor(const ::android::view::View&);
    static void setLabelFor(const ::android::view::View&, int32_t);
    static void setLayerPaint(const ::android::view::View&, const ::android::graphics::Paint&);
    static int32_t getLayoutDirection(const ::android::view::View&);
    static void setLayoutDirection(const ::android::view::View&, int32_t);
    static ::android::view::ViewParent getParentForAccessibility(const ::android::view::View&);
    static bool isOpaque(const ::android::view::View&);
    static int32_t resolveSizeAndState(int32_t, int32_t, int32_t);
    static int32_t getMeasuredWidthAndState(const ::android::view::View&);
    static int32_t getMeasuredHeightAndState(const ::android::view::View&);
    static int32_t getMeasuredState(const ::android::view::View&);
    static int32_t combineMeasuredStates(int32_t, int32_t);
    static int32_t getAccessibilityLiveRegion(const ::android::view::View&);
    static void setAccessibilityLiveRegion(const ::android::view::View&, int32_t);
    static int32_t getPaddingStart(const ::android::view::View&);
    static int32_t getPaddingEnd(const ::android::view::View&);
    static void setPaddingRelative(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t);
    static void dispatchStartTemporaryDetach(const ::android::view::View&);
    static void dispatchFinishTemporaryDetach(const ::android::view::View&);
    static float getTranslationX(const ::android::view::View&);
    static float getTranslationY(const ::android::view::View&);
    static int32_t getMinimumWidth(const ::android::view::View&);
    static int32_t getMinimumHeight(const ::android::view::View&);
    static ::android::support::v4::view::ViewPropertyAnimatorCompat animate(const ::android::view::View&);
    static void setTranslationX(const ::android::view::View&, float);
    static void setTranslationY(const ::android::view::View&, float);
    static void setAlpha(const ::android::view::View&, float);
    static void setX(const ::android::view::View&, float);
    static void setY(const ::android::view::View&, float);
    static void setRotation(const ::android::view::View&, float);
    static void setRotationX(const ::android::view::View&, float);
    static void setRotationY(const ::android::view::View&, float);
    static void setScaleX(const ::android::view::View&, float);
    static void setScaleY(const ::android::view::View&, float);
    static float getPivotX(const ::android::view::View&);
    static void setPivotX(const ::android::view::View&, float);
    static float getPivotY(const ::android::view::View&);
    static void setPivotY(const ::android::view::View&, float);
    static float getRotation(const ::android::view::View&);
    static float getRotationX(const ::android::view::View&);
    static float getRotationY(const ::android::view::View&);
    static float getScaleX(const ::android::view::View&);
    static float getScaleY(const ::android::view::View&);
    static float getX(const ::android::view::View&);
    static float getY(const ::android::view::View&);
    static void setElevation(const ::android::view::View&, float);
    static float getElevation(const ::android::view::View&);
    static void setTranslationZ(const ::android::view::View&, float);
    static float getTranslationZ(const ::android::view::View&);
    static void setTransitionName(const ::android::view::View&, const ::java::lang::String&);
    static ::java::lang::String getTransitionName(const ::android::view::View&);
    static int32_t getWindowSystemUiVisibility(const ::android::view::View&);
    static void requestApplyInsets(const ::android::view::View&);
    static void setChildrenDrawingOrderEnabled(const ::android::view::ViewGroup&, bool);
    static bool getFitsSystemWindows(const ::android::view::View&);
    static void setFitsSystemWindows(const ::android::view::View&, bool);
    static void jumpDrawablesToCurrentState(const ::android::view::View&);
    static void setSaveFromParentEnabled(const ::android::view::View&, bool);
    static void setActivated(const ::android::view::View&, bool);
    static bool isPaddingRelative(const ::android::view::View&);
    static ::android::content::res::ColorStateList getBackgroundTintList(const ::android::view::View&);
    static void setBackgroundTintList(const ::android::view::View&, const ::android::content::res::ColorStateList&);
    static ::android::graphics::PorterDuff_Mode getBackgroundTintMode(const ::android::view::View&);
    static void setBackgroundTintMode(const ::android::view::View&, const ::android::graphics::PorterDuff_Mode&);
    static void setNestedScrollingEnabled(const ::android::view::View&, bool);
    static bool isNestedScrollingEnabled(const ::android::view::View&);
    static bool startNestedScroll(const ::android::view::View&, int32_t);
    static void stopNestedScroll(const ::android::view::View&);
    static bool hasNestedScrollingParent(const ::android::view::View&);
    static bool dispatchNestedScroll(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t, const std::vector< int32_t>&);
    static bool dispatchNestedPreScroll(const ::android::view::View&, int32_t, int32_t, const std::vector< int32_t>&, const std::vector< int32_t>&);
    static bool dispatchNestedFling(const ::android::view::View&, float, float, bool);
    static bool dispatchNestedPreFling(const ::android::view::View&, float, float);
    static bool isLaidOut(const ::android::view::View&);
    static float getZ(const ::android::view::View&);

};
}
}
}
}

#include "android.support.v4.view.ViewCompat_AccessibilityLiveRegion.hpp"
#include "android.support.v4.view.ViewCompat_BaseViewCompatImpl.hpp"
#include "android.support.v4.view.ViewCompat_EclairMr1ViewCompatImpl.hpp"
#include "android.support.v4.view.ViewCompat_GBViewCompatImpl.hpp"
#include "android.support.v4.view.ViewCompat_HCViewCompatImpl.hpp"
#include "android.support.v4.view.ViewCompat_ICSViewCompatImpl.hpp"
#include "android.support.v4.view.ViewCompat_ImportantForAccessibility.hpp"
#include "android.support.v4.view.ViewCompat_JBViewCompatImpl.hpp"
#include "android.support.v4.view.ViewCompat_JbMr1ViewCompatImpl.hpp"
#include "android.support.v4.view.ViewCompat_KitKatViewCompatImpl.hpp"
#include "android.support.v4.view.ViewCompat_LayerType.hpp"
#include "android.support.v4.view.ViewCompat_LayoutDirectionMode.hpp"
#include "android.support.v4.view.ViewCompat_LollipopViewCompatImpl.hpp"
#include "android.support.v4.view.ViewCompat_OverScroll.hpp"
#include "android.support.v4.view.ViewCompat_ResolvedLayoutDirectionMode.hpp"
#include "android.support.v4.view.ViewCompat_ViewCompatImpl.hpp"

