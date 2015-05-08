#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.database.DataSetObserver.hpp"
#include "android.graphics.Canvas.hpp"
#include "android.graphics.Paint.hpp"
#include "android.graphics.Rect.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Handler.hpp"
#include "android.os.Message.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.Parcelable.hpp"
#include "android.support.v4.view.AccessibilityDelegateCompat.hpp"
#include "android.support.v4.view.ActionProvider.hpp"
#include "android.support.v4.view.GestureDetectorCompat.hpp"
#include "android.support.v4.view.GravityCompat.hpp"
#include "android.support.v4.view.KeyEventCompat.hpp"
#include "android.support.v4.view.MarginLayoutParamsCompat.hpp"
#include "android.support.v4.view.MenuCompat.hpp"
#include "android.support.v4.view.MenuItemCompat.hpp"
#include "android.support.v4.view.MotionEventCompat.hpp"
#include "android.support.v4.view.PagerAdapter.hpp"
#include "android.support.v4.view.PagerTabStrip.hpp"
#include "android.support.v4.view.PagerTitleStrip.hpp"
#include "android.support.v4.view.ScaleGestureDetectorCompat.hpp"
#include "android.support.v4.view.VelocityTrackerCompat.hpp"
#include "android.support.v4.view.ViewCompat.hpp"
#include "android.support.v4.view.ViewConfigurationCompat.hpp"
#include "android.support.v4.view.ViewGroupCompat.hpp"
#include "android.support.v4.view.ViewPager.hpp"
#include "android.support.v4.view.ViewParentCompat.hpp"
#include "android.support.v4.view.ViewPropertyAnimatorCompat.hpp"
#include "android.support.v4.view.ViewPropertyAnimatorListenerAdapter.hpp"
#include "android.support.v4.view.WindowCompat.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.view.GestureDetector.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.view.MenuItem.hpp"
#include "android.view.MotionEvent.hpp"
#include "android.view.SubMenu.hpp"
#include "android.view.VelocityTracker.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewConfiguration.hpp"
#include "android.view.ViewGroup.hpp"
#include "android.view.ViewParent.hpp"
#include "android.view.accessibility.AccessibilityEvent.hpp"
#include "android.view.animation.Interpolator.hpp"
#include "android.widget.TextView.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "java.util.ArrayList.hpp"

jclass android::support::v4::view::ViewCompat_KitKatViewCompatImpl::_class = nullptr;
jclass android::support::v4::view::ViewPager_LayoutParams::_class = nullptr;
jclass android::support::v4::view::GravityCompat::_class = nullptr;
jclass android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = nullptr;
jclass android::support::v4::view::ViewParentCompat::_class = nullptr;
jclass android::support::v4::view::ViewPager_SavedState::_class = nullptr;
jclass android::support::v4::view::ViewConfigurationCompat_IcsViewConfigurationVersionImpl::_class = nullptr;
jclass android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class = nullptr;
jclass android::support::v4::view::ViewCompat_ResolvedLayoutDirectionMode::_class = nullptr;
jclass android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl::_class = nullptr;
jclass android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class = nullptr;
jclass android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = nullptr;
jclass android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl::_class = nullptr;
jclass android::support::v4::view::ViewPager_ItemInfo::_class = nullptr;
jclass android::support::v4::view::PagerAdapter::_class = nullptr;
jclass android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl::_class = nullptr;
jclass android::support::v4::view::ViewCompat_ImportantForAccessibility::_class = nullptr;
jclass android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl::_class = nullptr;
jclass android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = nullptr;
jclass android::support::v4::view::PagerTabStrip::_class = nullptr;
jclass android::support::v4::view::GravityCompat_GravityCompatImpl::_class = nullptr;
jclass android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class = nullptr;
jclass android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl::_class = nullptr;
jclass android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class = nullptr;
jclass android::support::v4::view::ViewCompat_ViewCompatImpl::_class = nullptr;
jclass android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::_class = nullptr;
jclass android::support::v4::view::PagerTitleStrip_PagerTitleStripImplBase::_class = nullptr;
jclass android::support::v4::view::ActionProvider_VisibilityListener::_class = nullptr;
jclass android::support::v4::view::ViewCompat_LayerType::_class = nullptr;
jclass android::support::v4::view::MarginLayoutParamsCompat::_class = nullptr;
jclass android::support::v4::view::ViewPager_SimpleOnPageChangeListener::_class = nullptr;
jclass android::support::v4::view::PagerTitleStrip::_class = nullptr;
jclass android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = nullptr;
jclass android::support::v4::view::MotionEventCompat::_class = nullptr;
jclass android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = nullptr;
jclass android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter::_class = nullptr;
jclass android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl::_class = nullptr;
jclass android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class = nullptr;
jclass android::support::v4::view::ViewCompat_GBViewCompatImpl::_class = nullptr;
jclass android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::_class = nullptr;
jclass android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::_class = nullptr;
jclass android::support::v4::view::WindowCompat::_class = nullptr;
jclass android::support::v4::view::ViewPager::_class = nullptr;
jclass android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = nullptr;
jclass android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl::_class = nullptr;
jclass android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl::_class = nullptr;
jclass android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl::_class = nullptr;
jclass android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl::_class = nullptr;
jclass android::support::v4::view::ViewParentCompat_ViewParentCompatICSImpl::_class = nullptr;
jclass android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener::_class = nullptr;
jclass android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class = nullptr;
jclass android::support::v4::view::ViewGroupCompat_ViewGroupCompatApi21Impl::_class = nullptr;
jclass android::support::v4::view::ViewConfigurationCompat::_class = nullptr;
jclass android::support::v4::view::ViewPager_OnAdapterChangeListener::_class = nullptr;
jclass android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::_class = nullptr;
jclass android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler::_class = nullptr;
jclass android::support::v4::view::ActionProvider_SubUiVisibilityListener::_class = nullptr;
jclass android::support::v4::view::ViewPropertyAnimatorCompat::_class = nullptr;
jclass android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl::_class = nullptr;
jclass android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::_class = nullptr;
jclass android::support::v4::view::ViewParentCompat_ViewParentCompatImpl::_class = nullptr;
jclass android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class = nullptr;
jclass android::support::v4::view::ViewPager_Decor::_class = nullptr;
jclass android::support::v4::view::ActionProvider::_class = nullptr;
jclass android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl::_class = nullptr;
jclass android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class = nullptr;
jclass android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::_class = nullptr;
jclass android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class = nullptr;
jclass android::support::v4::view::GravityCompat_GravityCompatImplBase::_class = nullptr;
jclass android::support::v4::view::ViewPager_ViewPositionComparator::_class = nullptr;
jclass android::support::v4::view::VelocityTrackerCompat::_class = nullptr;
jclass android::support::v4::view::ViewPager_OnPageChangeListener::_class = nullptr;
jclass android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl::_class = nullptr;
jclass android::support::v4::view::ViewCompat_OverScroll::_class = nullptr;
jclass android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class = nullptr;
jclass android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl::_class = nullptr;
jclass android::support::v4::view::PagerTitleStrip_PagerTitleStripImplIcs::_class = nullptr;
jclass android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl::_class = nullptr;
jclass android::support::v4::view::PagerTitleStrip_PageListener::_class = nullptr;
jclass android::support::v4::view::ViewCompat::_class = nullptr;
jclass android::support::v4::view::ViewPropertyAnimatorListenerAdapter::_class = nullptr;
jclass android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::_class = nullptr;
jclass android::support::v4::view::ScaleGestureDetectorCompat::_class = nullptr;
jclass android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::_class = nullptr;
jclass android::support::v4::view::ViewCompat_LayoutDirectionMode::_class = nullptr;
jclass android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class = nullptr;
jclass android::support::v4::view::MenuItemCompat::_class = nullptr;
jclass android::support::v4::view::ViewPropertyAnimatorCompat_KitKatViewPropertyAnimatorCompatImpl::_class = nullptr;
jclass android::support::v4::view::GestureDetectorCompat::_class = nullptr;
jclass android::support::v4::view::ViewCompat_AccessibilityLiveRegion::_class = nullptr;
jclass android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl::_class = nullptr;
jclass android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class = nullptr;
jclass android::support::v4::view::MenuCompat::_class = nullptr;
jclass android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class = nullptr;
jclass android::support::v4::view::ViewPager_MyAccessibilityDelegate::_class = nullptr;
jclass android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class = nullptr;
jclass android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class = nullptr;
jclass android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::_class = nullptr;
jclass android::support::v4::view::KeyEventCompat::_class = nullptr;
jclass android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl::_class = nullptr;
jclass android::support::v4::view::ViewPager_PageTransformer::_class = nullptr;
jclass android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class = nullptr;
jclass android::support::v4::view::AccessibilityDelegateCompat::_class = nullptr;
jclass android::support::v4::view::MenuItemCompat_OnActionExpandListener::_class = nullptr;
jclass android::support::v4::view::ViewPager_PagerObserver::_class = nullptr;
jclass android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl::_class = nullptr;
jclass android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl::_class = nullptr;
jclass android::support::v4::view::ViewGroupCompat::_class = nullptr;
jclass android::support::v4::view::ViewPropertyAnimatorCompat_JBMr2ViewPropertyAnimatorCompatImpl::_class = nullptr;

int32_t android::support::v4::view::ViewCompat_KitKatViewCompatImpl::getAccessibilityLiveRegion(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_KitKatViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$KitKatViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityLiveRegion", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_KitKatViewCompatImpl::setAccessibilityLiveRegion(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_KitKatViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$KitKatViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessibilityLiveRegion", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_KitKatViewCompatImpl::setImportantForAccessibility(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_KitKatViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_KitKatViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$KitKatViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImportantForAccessibility", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::ViewPager_LayoutParams::ViewPager_LayoutParams() : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::support::v4::view::ViewPager_LayoutParams::_class) ::android::support::v4::view::ViewPager_LayoutParams::_class = java::fetch_class("android/support/v4/view/ViewPager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::ViewPager_LayoutParams::ViewPager_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::support::v4::view::ViewPager_LayoutParams::_class) ::android::support::v4::view::ViewPager_LayoutParams::_class = java::fetch_class("android/support/v4/view/ViewPager$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::GravityCompat::GravityCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::GravityCompat::_class) ::android::support::v4::view::GravityCompat::_class = java::fetch_class("android/support/v4/view/GravityCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::view::GravityCompat::apply(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Rect& arg3, const ::android::graphics::Rect& arg4, int32_t arg5){
    if (!::android::support::v4::view::GravityCompat::_class) ::android::support::v4::view::GravityCompat::_class = java::fetch_class("android/support/v4/view/GravityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "apply", "(IIILandroid/graphics/Rect;Landroid/graphics/Rect;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::support::v4::view::GravityCompat::apply(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Rect& arg3, int32_t arg4, int32_t arg5, const ::android::graphics::Rect& arg6, int32_t arg7){
    if (!::android::support::v4::view::GravityCompat::_class) ::android::support::v4::view::GravityCompat::_class = java::fetch_class("android/support/v4/view/GravityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "apply", "(IIILandroid/graphics/Rect;IILandroid/graphics/Rect;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    int32_t _arg7 = arg7;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::support::v4::view::GravityCompat::applyDisplay(int32_t arg0, const ::android::graphics::Rect& arg1, const ::android::graphics::Rect& arg2, int32_t arg3){
    if (!::android::support::v4::view::GravityCompat::_class) ::android::support::v4::view::GravityCompat::_class = java::fetch_class("android/support/v4/view/GravityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "applyDisplay", "(ILandroid/graphics/Rect;Landroid/graphics/Rect;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::support::v4::view::GravityCompat::getAbsoluteGravity(int32_t arg0, int32_t arg1){
    if (!::android::support::v4::view::GravityCompat::_class) ::android::support::v4::view::GravityCompat::_class = java::fetch_class("android/support/v4/view/GravityCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAbsoluteGravity", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_BaseViewCompatImpl::canScrollHorizontally(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "canScrollHorizontally", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_BaseViewCompatImpl::canScrollVertically(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "canScrollVertically", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getOverScrollMode(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOverScrollMode", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setOverScrollMode(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOverScrollMode", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setAccessibilityDelegate(const ::android::view::View& arg0, const ::android::support::v4::view::AccessibilityDelegateCompat& arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessibilityDelegate", "(Landroid/view/View;Landroid/support/v4/view/AccessibilityDelegateCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_BaseViewCompatImpl::hasAccessibilityDelegate(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAccessibilityDelegate", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::onPopulateAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::onInitializeAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::onInitializeAccessibilityNodeInfo(const ::android::view::View& arg0, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_BaseViewCompatImpl::hasTransientState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasTransientState", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setHasTransientState(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHasTransientState", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::postInvalidateOnAnimation(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postInvalidateOnAnimation", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::postInvalidateOnAnimation(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postInvalidateOnAnimation", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::postOnAnimation(const ::android::view::View& arg0, const ::java::lang::Runnable& arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postOnAnimation", "(Landroid/view/View;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::postOnAnimationDelayed(const ::android::view::View& arg0, const ::java::lang::Runnable& arg1, int64_t arg2) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postOnAnimationDelayed", "(Landroid/view/View;Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getImportantForAccessibility(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImportantForAccessibility", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setImportantForAccessibility(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImportantForAccessibility", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_BaseViewCompatImpl::isImportantForAccessibility(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isImportantForAccessibility", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewCompat_BaseViewCompatImpl::performAccessibilityAction(const ::android::view::View& arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAccessibilityAction", "(Landroid/view/View;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat android::support::v4::view::ViewCompat_BaseViewCompatImpl::getAccessibilityNodeProvider(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityNodeProvider", "(Landroid/view/View;)Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat _ret(ret);
    return _ret;
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getAlpha(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlpha", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setLayerType(const ::android::view::View& arg0, int32_t arg1, const ::android::graphics::Paint& arg2) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayerType", "(Landroid/view/View;ILandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getLayerType(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayerType", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getLabelFor(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLabelFor", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setLabelFor(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLabelFor", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setLayerPaint(const ::android::view::View& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayerPaint", "(Landroid/view/View;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getLayoutDirection(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutDirection", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setLayoutDirection(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutDirection", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::ViewParent android::support::v4::view::ViewCompat_BaseViewCompatImpl::getParentForAccessibility(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentForAccessibility", "(Landroid/view/View;)Landroid/view/ViewParent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewParent _ret(ret);
    return _ret;
}

bool android::support::v4::view::ViewCompat_BaseViewCompatImpl::isOpaque(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpaque", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::resolveSizeAndState(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveSizeAndState", "(III)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getMeasuredWidthAndState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredWidthAndState", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getMeasuredHeightAndState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredHeightAndState", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getMeasuredState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredState", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getAccessibilityLiveRegion(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityLiveRegion", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setAccessibilityLiveRegion(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessibilityLiveRegion", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getPaddingStart(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaddingStart", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getPaddingEnd(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaddingEnd", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setPaddingRelative(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPaddingRelative", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::dispatchStartTemporaryDetach(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchStartTemporaryDetach", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::dispatchFinishTemporaryDetach(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchFinishTemporaryDetach", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getTranslationX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTranslationX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getTranslationY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTranslationY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getRotation(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotation", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getRotationX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotationX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getRotationY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotationY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getScaleX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getScaleY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getMinimumWidth(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumWidth", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getMinimumHeight(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumHeight", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewCompat_BaseViewCompatImpl::animate(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "animate", "(Landroid/view/View;)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setRotation(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotation", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setTranslationX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranslationX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setTranslationY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranslationY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setAlpha(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setRotationX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotationX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setRotationY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotationY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setScaleX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setScaleY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setPivotX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPivotX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setPivotY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPivotY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getPivotX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPivotX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getPivotY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPivotY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setTransitionName(const ::android::view::View& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransitionName", "(Landroid/view/View;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::view::ViewCompat_BaseViewCompatImpl::getTransitionName(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransitionName", "(Landroid/view/View;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::ViewCompat_BaseViewCompatImpl::getWindowSystemUiVisibility(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowSystemUiVisibility", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::requestApplyInsets(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestApplyInsets", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setElevation(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setElevation", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getElevation(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElevation", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setTranslationZ(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranslationZ", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat_BaseViewCompatImpl::getTranslationZ(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTranslationZ", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setChildrenDrawingOrderEnabled(const ::android::view::ViewGroup& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChildrenDrawingOrderEnabled", "(Landroid/view/ViewGroup;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_BaseViewCompatImpl::getFitsSystemWindows(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFitsSystemWindows", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setFitsSystemWindows(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFitsSystemWindows", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::jumpDrawablesToCurrentState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setSaveFromParentEnabled(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSaveFromParentEnabled", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_BaseViewCompatImpl::setActivated(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_BaseViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$BaseViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActivated", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewParentCompat::requestSendAccessibilityEvent(const ::android::view::ViewParent& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2){
    if (!::android::support::v4::view::ViewParentCompat::_class) ::android::support::v4::view::ViewParentCompat::_class = java::fetch_class("android/support/v4/view/ViewParentCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "requestSendAccessibilityEvent", "(Landroid/view/ViewParent;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::ViewPager_SavedState::ViewPager_SavedState(const ::android::os::Parcelable& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0), ::android::view::View_BaseSavedState((jobject)0) {
    if (!::android::support::v4::view::ViewPager_SavedState::_class) ::android::support::v4::view::ViewPager_SavedState::_class = java::fetch_class("android/support/v4/view/ViewPager$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::view::ViewPager_SavedState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewPager_SavedState::_class) ::android::support::v4::view::ViewPager_SavedState::_class = java::fetch_class("android/support/v4/view/ViewPager$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::view::ViewPager_SavedState::toString() const {
    if (!::android::support::v4::view::ViewPager_SavedState::_class) ::android::support::v4::view::ViewPager_SavedState::_class = java::fetch_class("android/support/v4/view/ViewPager$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::view::ViewConfigurationCompat_IcsViewConfigurationVersionImpl::hasPermanentMenuKey(const ::android::view::ViewConfiguration& arg0) const {
    if (!::android::support::v4::view::ViewConfigurationCompat_IcsViewConfigurationVersionImpl::_class) ::android::support::v4::view::ViewConfigurationCompat_IcsViewConfigurationVersionImpl::_class = java::fetch_class("android/support/v4/view/ViewConfigurationCompat$IcsViewConfigurationVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasPermanentMenuKey", "(Landroid/view/ViewConfiguration;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::getMarginStart(const ::android::view::ViewGroup_MarginLayoutParams& arg0) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMarginStart", "(Landroid/view/ViewGroup$MarginLayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::getMarginEnd(const ::android::view::ViewGroup_MarginLayoutParams& arg0) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMarginEnd", "(Landroid/view/ViewGroup$MarginLayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::setMarginStart(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMarginStart", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::setMarginEnd(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMarginEnd", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::isMarginRelative(const ::android::view::ViewGroup_MarginLayoutParams& arg0) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMarginRelative", "(Landroid/view/ViewGroup$MarginLayoutParams;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::getLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams& arg0) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutDirection", "(Landroid/view/ViewGroup$MarginLayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::setLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutDirection", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::resolveLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveLayoutDirection", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl::getXVelocity(const ::android::view::VelocityTracker& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl::_class) ::android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl::_class = java::fetch_class("android/support/v4/view/VelocityTrackerCompat$BaseVelocityTrackerVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXVelocity", "(Landroid/view/VelocityTracker;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl::getYVelocity(const ::android::view::VelocityTracker& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl::_class) ::android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl::_class = java::fetch_class("android/support/v4/view/VelocityTrackerCompat$BaseVelocityTrackerVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYVelocity", "(Landroid/view/VelocityTracker;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::newAccessiblityDelegateDefaultImpl() const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessiblityDelegateDefaultImpl", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::newAccessiblityDelegateBridge(const ::android::support::v4::view::AccessibilityDelegateCompat& arg0) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessiblityDelegateBridge", "(Landroid/support/v4/view/AccessibilityDelegateCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::dispatchPopulateAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::onInitializeAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::onInitializeAccessibilityNodeInfo(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Ljava/lang/Object;Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::onPopulateAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::onRequestSendAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::ViewGroup& arg1, const ::android::view::View& arg2, const ::android::view::accessibility::AccessibilityEvent& arg3) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestSendAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::sendAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::sendAccessibilityEventUnchecked(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEventUnchecked", "(Ljava/lang/Object;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::getAccessibilityNodeProvider(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityNodeProvider", "(Ljava/lang/Object;Landroid/view/View;)Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat _ret(ret);
    return _ret;
}

bool android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::performAccessibilityAction(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2, const ::android::os::Bundle& arg3) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateStubImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAccessibilityAction", "(Ljava/lang/Object;Landroid/view/View;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::support::v4::view::ViewCompat_JBViewCompatImpl::hasTransientState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasTransientState", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_JBViewCompatImpl::setHasTransientState(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHasTransientState", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_JBViewCompatImpl::postInvalidateOnAnimation(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postInvalidateOnAnimation", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_JBViewCompatImpl::postInvalidateOnAnimation(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postInvalidateOnAnimation", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::view::ViewCompat_JBViewCompatImpl::postOnAnimation(const ::android::view::View& arg0, const ::java::lang::Runnable& arg1) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postOnAnimation", "(Landroid/view/View;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_JBViewCompatImpl::postOnAnimationDelayed(const ::android::view::View& arg0, const ::java::lang::Runnable& arg1, int64_t arg2) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postOnAnimationDelayed", "(Landroid/view/View;Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::ViewCompat_JBViewCompatImpl::getImportantForAccessibility(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImportantForAccessibility", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_JBViewCompatImpl::setImportantForAccessibility(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImportantForAccessibility", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_JBViewCompatImpl::performAccessibilityAction(const ::android::view::View& arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAccessibilityAction", "(Landroid/view/View;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat android::support::v4::view::ViewCompat_JBViewCompatImpl::getAccessibilityNodeProvider(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityNodeProvider", "(Landroid/view/View;)Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat _ret(ret);
    return _ret;
}

::android::view::ViewParent android::support::v4::view::ViewCompat_JBViewCompatImpl::getParentForAccessibility(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentForAccessibility", "(Landroid/view/View;)Landroid/view/ViewParent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewParent _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::ViewCompat_JBViewCompatImpl::getMinimumWidth(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumWidth", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_JBViewCompatImpl::getMinimumHeight(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumHeight", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_JBViewCompatImpl::requestApplyInsets(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestApplyInsets", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewCompat_JBViewCompatImpl::getFitsSystemWindows(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFitsSystemWindows", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl::getScaledPagingTouchSlop(const ::android::view::ViewConfiguration& arg0) const {
    if (!::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl::_class) ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl::_class = java::fetch_class("android/support/v4/view/ViewConfigurationCompat$ViewConfigurationVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledPagingTouchSlop", "(Landroid/view/ViewConfiguration;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl::hasPermanentMenuKey(const ::android::view::ViewConfiguration& arg0) const {
    if (!::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl::_class) ::android::support::v4::view::ViewConfigurationCompat_ViewConfigurationVersionImpl::_class = java::fetch_class("android/support/v4/view/ViewConfigurationCompat$ViewConfigurationVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasPermanentMenuKey", "(Landroid/view/ViewConfiguration;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::PagerAdapter::PagerAdapter() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::support::v4::view::PagerAdapter::getCount() const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::PagerAdapter::startUpdate(const ::android::view::ViewGroup& arg0) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "startUpdate", "(Landroid/view/ViewGroup;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::PagerAdapter::instantiateItem(const ::android::view::ViewGroup& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "instantiateItem", "(Landroid/view/ViewGroup;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::PagerAdapter::destroyItem(const ::android::view::ViewGroup& arg0, int32_t arg1, const ::java::lang::Object& arg2) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroyItem", "(Landroid/view/ViewGroup;ILjava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::PagerAdapter::setPrimaryItem(const ::android::view::ViewGroup& arg0, int32_t arg1, const ::java::lang::Object& arg2) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrimaryItem", "(Landroid/view/ViewGroup;ILjava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::PagerAdapter::finishUpdate(const ::android::view::ViewGroup& arg0) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishUpdate", "(Landroid/view/ViewGroup;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerAdapter::startUpdate(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "startUpdate", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::PagerAdapter::instantiateItem(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "instantiateItem", "(Landroid/view/View;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::PagerAdapter::destroyItem(const ::android::view::View& arg0, int32_t arg1, const ::java::lang::Object& arg2) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroyItem", "(Landroid/view/View;ILjava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::PagerAdapter::setPrimaryItem(const ::android::view::View& arg0, int32_t arg1, const ::java::lang::Object& arg2) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrimaryItem", "(Landroid/view/View;ILjava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::PagerAdapter::finishUpdate(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishUpdate", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::PagerAdapter::isViewFromObject(const ::android::view::View& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isViewFromObject", "(Landroid/view/View;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::os::Parcelable android::support::v4::view::PagerAdapter::saveState() const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveState", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::support::v4::view::PagerAdapter::restoreState(const ::android::os::Parcelable& arg0, const ::java::lang::ClassLoader& arg1) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreState", "(Landroid/os/Parcelable;Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::PagerAdapter::getItemPosition(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemPosition", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerAdapter::notifyDataSetChanged() const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyDataSetChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::view::PagerAdapter::registerDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerAdapter::unregisterDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::PagerAdapter::getPageTitle(int32_t arg0) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPageTitle", "(I)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

float android::support::v4::view::PagerAdapter::getPageWidth(int32_t arg0) const {
    if (!::android::support::v4::view::PagerAdapter::_class) ::android::support::v4::view::PagerAdapter::_class = java::fetch_class("android/support/v4/view/PagerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPageWidth", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl::setQuickScaleEnabled(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl::_class) ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl::_class = java::fetch_class("android/support/v4/view/ScaleGestureDetectorCompat$ScaleGestureDetectorCompatKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQuickScaleEnabled", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl::isQuickScaleEnabled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl::_class) ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl::_class = java::fetch_class("android/support/v4/view/ScaleGestureDetectorCompat$ScaleGestureDetectorCompatKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isQuickScaleEnabled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl::hasPermanentMenuKey(const ::android::view::ViewConfiguration& arg0) const {
    if (!::android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl::_class) ::android::support::v4::view::ViewConfigurationCompat_HoneycombViewConfigurationVersionImpl::_class = java::fetch_class("android/support/v4/view/ViewConfigurationCompat$HoneycombViewConfigurationVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasPermanentMenuKey", "(Landroid/view/ViewConfiguration;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_HCViewCompatImpl::getAlpha(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlpha", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setLayerType(const ::android::view::View& arg0, int32_t arg1, const ::android::graphics::Paint& arg2) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayerType", "(Landroid/view/View;ILandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::ViewCompat_HCViewCompatImpl::getLayerType(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayerType", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setLayerPaint(const ::android::view::View& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayerPaint", "(Landroid/view/View;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat_HCViewCompatImpl::resolveSizeAndState(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveSizeAndState", "(III)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::ViewCompat_HCViewCompatImpl::getMeasuredWidthAndState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredWidthAndState", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_HCViewCompatImpl::getMeasuredHeightAndState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredHeightAndState", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_HCViewCompatImpl::getMeasuredState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredState", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_HCViewCompatImpl::getTranslationX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTranslationX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_HCViewCompatImpl::getTranslationY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTranslationY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setTranslationX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranslationX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setTranslationY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranslationY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setAlpha(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setRotation(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotation", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setRotationX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotationX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setRotationY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotationY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setScaleX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setScaleY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setPivotX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPivotX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setPivotY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPivotY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat_HCViewCompatImpl::getX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_HCViewCompatImpl::getY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_HCViewCompatImpl::getRotation(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotation", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_HCViewCompatImpl::getRotationX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotationX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_HCViewCompatImpl::getRotationY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotationY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_HCViewCompatImpl::getScaleX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_HCViewCompatImpl::getScaleY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_HCViewCompatImpl::getPivotX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPivotX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_HCViewCompatImpl::getPivotY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPivotY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::jumpDrawablesToCurrentState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setSaveFromParentEnabled(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSaveFromParentEnabled", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_HCViewCompatImpl::setActivated(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_HCViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$HCViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActivated", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::PagerTabStrip::PagerTabStrip(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::support::v4::view::PagerTitleStrip((jobject)0), ::android::support::v4::view::ViewPager_Decor((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::PagerTabStrip::PagerTabStrip(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::support::v4::view::PagerTitleStrip((jobject)0), ::android::support::v4::view::ViewPager_Decor((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::support::v4::view::PagerTabStrip::setTabIndicatorColor(int32_t arg0) const {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTabIndicatorColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerTabStrip::setTabIndicatorColorResource(int32_t arg0) const {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTabIndicatorColorResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::PagerTabStrip::getTabIndicatorColor() const {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTabIndicatorColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::PagerTabStrip::setPadding(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPadding", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::view::PagerTabStrip::setTextSpacing(int32_t arg0) const {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextSpacing", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerTabStrip::setBackgroundDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerTabStrip::setBackgroundColor(int32_t arg0) const {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerTabStrip::setBackgroundResource(int32_t arg0) const {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerTabStrip::setDrawFullUnderline(bool arg0) const {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawFullUnderline", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::PagerTabStrip::getDrawFullUnderline() const {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawFullUnderline", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::view::PagerTabStrip::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::view::PagerTabStrip::_class) ::android::support::v4::view::PagerTabStrip::_class = java::fetch_class("android/support/v4/view/PagerTabStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::GravityCompat_GravityCompatImpl::getAbsoluteGravity(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::view::GravityCompat_GravityCompatImpl::_class) ::android::support::v4::view::GravityCompat_GravityCompatImpl::_class = java::fetch_class("android/support/v4/view/GravityCompat$GravityCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAbsoluteGravity", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::GravityCompat_GravityCompatImpl::apply(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Rect& arg3, const ::android::graphics::Rect& arg4, int32_t arg5) const {
    if (!::android::support::v4::view::GravityCompat_GravityCompatImpl::_class) ::android::support::v4::view::GravityCompat_GravityCompatImpl::_class = java::fetch_class("android/support/v4/view/GravityCompat$GravityCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "(IIILandroid/graphics/Rect;Landroid/graphics/Rect;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::support::v4::view::GravityCompat_GravityCompatImpl::apply(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Rect& arg3, int32_t arg4, int32_t arg5, const ::android::graphics::Rect& arg6, int32_t arg7) const {
    if (!::android::support::v4::view::GravityCompat_GravityCompatImpl::_class) ::android::support::v4::view::GravityCompat_GravityCompatImpl::_class = java::fetch_class("android/support/v4/view/GravityCompat$GravityCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "(IIILandroid/graphics/Rect;IILandroid/graphics/Rect;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    int32_t _arg7 = arg7;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::support::v4::view::GravityCompat_GravityCompatImpl::applyDisplay(int32_t arg0, const ::android::graphics::Rect& arg1, const ::android::graphics::Rect& arg2, int32_t arg3) const {
    if (!::android::support::v4::view::GravityCompat_GravityCompatImpl::_class) ::android::support::v4::view::GravityCompat_GravityCompatImpl::_class = java::fetch_class("android/support/v4/view/GravityCompat$GravityCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyDisplay", "(ILandroid/graphics/Rect;Landroid/graphics/Rect;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::getLabelFor(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JbMr1ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLabelFor", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::setLabelFor(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JbMr1ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLabelFor", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::setLayerPaint(const ::android::view::View& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JbMr1ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayerPaint", "(Landroid/view/View;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::getLayoutDirection(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JbMr1ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutDirection", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::setLayoutDirection(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JbMr1ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutDirection", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::getPaddingStart(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JbMr1ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaddingStart", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::getPaddingEnd(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JbMr1ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaddingEnd", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::setPaddingRelative(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JbMr1ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPaddingRelative", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::getWindowSystemUiVisibility(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_JbMr1ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$JbMr1ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowSystemUiVisibility", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl::normalizeMetaState(int32_t arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$HoneycombKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "normalizeMetaState", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl::metaStateHasModifiers(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$HoneycombKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "metaStateHasModifiers", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl::metaStateHasNoModifiers(int32_t arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_HoneycombKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$HoneycombKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "metaStateHasNoModifiers", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::normalizeMetaState(int32_t arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$BaseKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "normalizeMetaState", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::metaStateHasModifiers(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$BaseKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "metaStateHasModifiers", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::metaStateHasNoModifiers(int32_t arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$BaseKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "metaStateHasNoModifiers", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::startTracking(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$BaseKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTracking", "(Landroid/view/KeyEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::isTracking(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$BaseKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTracking", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::getKeyDispatcherState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$BaseKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyDispatcherState", "(Landroid/view/View;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::dispatch(const ::android::view::KeyEvent& arg0, const ::android::view::KeyEvent_Callback& arg1, const ::java::lang::Object& arg2, const ::java::lang::Object& arg3) const {
    if (!::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_BaseKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$BaseKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatch", "(Landroid/view/KeyEvent;Landroid/view/KeyEvent$Callback;Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::support::v4::view::ViewCompat_ViewCompatImpl::canScrollHorizontally(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "canScrollHorizontally", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_ViewCompatImpl::canScrollVertically(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "canScrollVertically", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getOverScrollMode(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOverScrollMode", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setOverScrollMode(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOverScrollMode", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::onInitializeAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::onPopulateAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::onInitializeAccessibilityNodeInfo(const ::android::view::View& arg0, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setAccessibilityDelegate(const ::android::view::View& arg0, const ::android::support::v4::view::AccessibilityDelegateCompat& arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessibilityDelegate", "(Landroid/view/View;Landroid/support/v4/view/AccessibilityDelegateCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_ViewCompatImpl::hasAccessibilityDelegate(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAccessibilityDelegate", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewCompat_ViewCompatImpl::hasTransientState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasTransientState", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setHasTransientState(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHasTransientState", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::postInvalidateOnAnimation(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postInvalidateOnAnimation", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::postInvalidateOnAnimation(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postInvalidateOnAnimation", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::postOnAnimation(const ::android::view::View& arg0, const ::java::lang::Runnable& arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postOnAnimation", "(Landroid/view/View;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::postOnAnimationDelayed(const ::android::view::View& arg0, const ::java::lang::Runnable& arg1, int64_t arg2) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "postOnAnimationDelayed", "(Landroid/view/View;Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getImportantForAccessibility(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImportantForAccessibility", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setImportantForAccessibility(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImportantForAccessibility", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_ViewCompatImpl::isImportantForAccessibility(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isImportantForAccessibility", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewCompat_ViewCompatImpl::performAccessibilityAction(const ::android::view::View& arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAccessibilityAction", "(Landroid/view/View;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat android::support::v4::view::ViewCompat_ViewCompatImpl::getAccessibilityNodeProvider(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityNodeProvider", "(Landroid/view/View;)Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat _ret(ret);
    return _ret;
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getAlpha(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlpha", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setLayerType(const ::android::view::View& arg0, int32_t arg1, const ::android::graphics::Paint& arg2) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayerType", "(Landroid/view/View;ILandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getLayerType(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayerType", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getLabelFor(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLabelFor", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setLabelFor(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLabelFor", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setLayerPaint(const ::android::view::View& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayerPaint", "(Landroid/view/View;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getLayoutDirection(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutDirection", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setLayoutDirection(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutDirection", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::ViewParent android::support::v4::view::ViewCompat_ViewCompatImpl::getParentForAccessibility(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentForAccessibility", "(Landroid/view/View;)Landroid/view/ViewParent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewParent _ret(ret);
    return _ret;
}

bool android::support::v4::view::ViewCompat_ViewCompatImpl::isOpaque(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpaque", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::resolveSizeAndState(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveSizeAndState", "(III)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getMeasuredWidthAndState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredWidthAndState", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getMeasuredHeightAndState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredHeightAndState", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getMeasuredState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasuredState", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getAccessibilityLiveRegion(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityLiveRegion", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setAccessibilityLiveRegion(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessibilityLiveRegion", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getPaddingStart(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaddingStart", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getPaddingEnd(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaddingEnd", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setPaddingRelative(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPaddingRelative", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::dispatchStartTemporaryDetach(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchStartTemporaryDetach", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::dispatchFinishTemporaryDetach(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchFinishTemporaryDetach", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getRotation(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotation", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getRotationX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotationX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getRotationY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotationY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getScaleX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getScaleY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getTranslationX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTranslationX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getTranslationY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTranslationY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getMinimumWidth(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumWidth", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getMinimumHeight(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumHeight", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewCompat_ViewCompatImpl::animate(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "animate", "(Landroid/view/View;)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setRotation(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotation", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setRotationX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotationX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setRotationY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotationY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setScaleX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setScaleY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setTranslationX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranslationX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setTranslationY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranslationY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setAlpha(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setPivotX(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPivotX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setPivotY(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPivotY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getPivotX(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPivotX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getPivotY(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPivotY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setElevation(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setElevation", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getElevation(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElevation", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setTranslationZ(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranslationZ", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat_ViewCompatImpl::getTranslationZ(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTranslationZ", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setTransitionName(const ::android::view::View& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransitionName", "(Landroid/view/View;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::view::ViewCompat_ViewCompatImpl::getTransitionName(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransitionName", "(Landroid/view/View;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::ViewCompat_ViewCompatImpl::getWindowSystemUiVisibility(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowSystemUiVisibility", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::requestApplyInsets(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestApplyInsets", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setChildrenDrawingOrderEnabled(const ::android::view::ViewGroup& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChildrenDrawingOrderEnabled", "(Landroid/view/ViewGroup;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_ViewCompatImpl::getFitsSystemWindows(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFitsSystemWindows", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setFitsSystemWindows(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFitsSystemWindows", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::jumpDrawablesToCurrentState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setSaveFromParentEnabled(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSaveFromParentEnabled", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ViewCompatImpl::setActivated(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActivated", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::expandActionView(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$IcsMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "expandActionView", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::collapseActionView(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$IcsMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "collapseActionView", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::isActionViewExpanded(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$IcsMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActionViewExpanded", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::setOnActionExpandListener(const ::android::view::MenuItem& arg0, const ::android::support::v4::view::MenuItemCompat_OnActionExpandListener& arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_IcsMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$IcsMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnActionExpandListener", "(Landroid/view/MenuItem;Landroid/support/v4/view/MenuItemCompat$OnActionExpandListener;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

void android::support::v4::view::PagerTitleStrip_PagerTitleStripImplBase::setSingleLineAllCaps(const ::android::widget::TextView& arg0) const {
    if (!::android::support::v4::view::PagerTitleStrip_PagerTitleStripImplBase::_class) ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImplBase::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip$PagerTitleStripImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSingleLineAllCaps", "(Landroid/widget/TextView;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ActionProvider_VisibilityListener::onActionProviderVisibilityChanged(bool arg0) const {
    if (!::android::support::v4::view::ActionProvider_VisibilityListener::_class) ::android::support::v4::view::ActionProvider_VisibilityListener::_class = java::fetch_class("android/support/v4/view/ActionProvider$VisibilityListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActionProviderVisibilityChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::MarginLayoutParamsCompat::MarginLayoutParamsCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::MarginLayoutParamsCompat::_class) ::android::support::v4::view::MarginLayoutParamsCompat::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::support::v4::view::MarginLayoutParamsCompat::getMarginStart(const ::android::view::ViewGroup_MarginLayoutParams& arg0){
    if (!::android::support::v4::view::MarginLayoutParamsCompat::_class) ::android::support::v4::view::MarginLayoutParamsCompat::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMarginStart", "(Landroid/view/ViewGroup$MarginLayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::MarginLayoutParamsCompat::getMarginEnd(const ::android::view::ViewGroup_MarginLayoutParams& arg0){
    if (!::android::support::v4::view::MarginLayoutParamsCompat::_class) ::android::support::v4::view::MarginLayoutParamsCompat::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMarginEnd", "(Landroid/view/ViewGroup$MarginLayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::MarginLayoutParamsCompat::setMarginStart(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1){
    if (!::android::support::v4::view::MarginLayoutParamsCompat::_class) ::android::support::v4::view::MarginLayoutParamsCompat::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setMarginStart", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::MarginLayoutParamsCompat::setMarginEnd(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1){
    if (!::android::support::v4::view::MarginLayoutParamsCompat::_class) ::android::support::v4::view::MarginLayoutParamsCompat::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setMarginEnd", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::view::MarginLayoutParamsCompat::isMarginRelative(const ::android::view::ViewGroup_MarginLayoutParams& arg0){
    if (!::android::support::v4::view::MarginLayoutParamsCompat::_class) ::android::support::v4::view::MarginLayoutParamsCompat::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isMarginRelative", "(Landroid/view/ViewGroup$MarginLayoutParams;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::MarginLayoutParamsCompat::getLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams& arg0){
    if (!::android::support::v4::view::MarginLayoutParamsCompat::_class) ::android::support::v4::view::MarginLayoutParamsCompat::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLayoutDirection", "(Landroid/view/ViewGroup$MarginLayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::MarginLayoutParamsCompat::setLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1){
    if (!::android::support::v4::view::MarginLayoutParamsCompat::_class) ::android::support::v4::view::MarginLayoutParamsCompat::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLayoutDirection", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::MarginLayoutParamsCompat::resolveLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1){
    if (!::android::support::v4::view::MarginLayoutParamsCompat::_class) ::android::support::v4::view::MarginLayoutParamsCompat::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resolveLayoutDirection", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::ViewPager_SimpleOnPageChangeListener::ViewPager_SimpleOnPageChangeListener() : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewPager_OnPageChangeListener((jobject)0) {
    if (!::android::support::v4::view::ViewPager_SimpleOnPageChangeListener::_class) ::android::support::v4::view::ViewPager_SimpleOnPageChangeListener::_class = java::fetch_class("android/support/v4/view/ViewPager$SimpleOnPageChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::view::ViewPager_SimpleOnPageChangeListener::onPageScrolled(int32_t arg0, float arg1, int32_t arg2) const {
    if (!::android::support::v4::view::ViewPager_SimpleOnPageChangeListener::_class) ::android::support::v4::view::ViewPager_SimpleOnPageChangeListener::_class = java::fetch_class("android/support/v4/view/ViewPager$SimpleOnPageChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageScrolled", "(IFI)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPager_SimpleOnPageChangeListener::onPageSelected(int32_t arg0) const {
    if (!::android::support::v4::view::ViewPager_SimpleOnPageChangeListener::_class) ::android::support::v4::view::ViewPager_SimpleOnPageChangeListener::_class = java::fetch_class("android/support/v4/view/ViewPager$SimpleOnPageChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageSelected", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPager_SimpleOnPageChangeListener::onPageScrollStateChanged(int32_t arg0) const {
    if (!::android::support::v4::view::ViewPager_SimpleOnPageChangeListener::_class) ::android::support::v4::view::ViewPager_SimpleOnPageChangeListener::_class = java::fetch_class("android/support/v4/view/ViewPager$SimpleOnPageChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageScrollStateChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::PagerTitleStrip::PagerTitleStrip(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::support::v4::view::ViewPager_Decor((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::view::PagerTitleStrip::_class) ::android::support::v4::view::PagerTitleStrip::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::PagerTitleStrip::PagerTitleStrip(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::support::v4::view::ViewPager_Decor((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::view::PagerTitleStrip::_class) ::android::support::v4::view::PagerTitleStrip::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::support::v4::view::PagerTitleStrip::setTextSpacing(int32_t arg0) const {
    if (!::android::support::v4::view::PagerTitleStrip::_class) ::android::support::v4::view::PagerTitleStrip::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextSpacing", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::PagerTitleStrip::getTextSpacing() const {
    if (!::android::support::v4::view::PagerTitleStrip::_class) ::android::support::v4::view::PagerTitleStrip::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextSpacing", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::PagerTitleStrip::setNonPrimaryAlpha(float arg0) const {
    if (!::android::support::v4::view::PagerTitleStrip::_class) ::android::support::v4::view::PagerTitleStrip::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNonPrimaryAlpha", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerTitleStrip::setTextColor(int32_t arg0) const {
    if (!::android::support::v4::view::PagerTitleStrip::_class) ::android::support::v4::view::PagerTitleStrip::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerTitleStrip::setTextSize(int32_t arg0, float arg1) const {
    if (!::android::support::v4::view::PagerTitleStrip::_class) ::android::support::v4::view::PagerTitleStrip::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextSize", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::PagerTitleStrip::setGravity(int32_t arg0) const {
    if (!::android::support::v4::view::PagerTitleStrip::_class) ::android::support::v4::view::PagerTitleStrip::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerTitleStrip::requestLayout() const {
    if (!::android::support::v4::view::PagerTitleStrip::_class) ::android::support::v4::view::PagerTitleStrip::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::setDuration(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, int64_t arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::alpha(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "alpha", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::translationX(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationX", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::translationY(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationY", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::getDuration(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::setInterpolator(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, const ::android::view::animation::Interpolator& arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;Landroid/view/animation/Interpolator;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::setStartDelay(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, int64_t arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartDelay", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::getStartDelay(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartDelay", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::alphaBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "alphaBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::rotation(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotation", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::rotationBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::rotationX(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationX", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::rotationXBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationXBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::rotationY(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationY", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::rotationYBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationYBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::scaleX(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleX", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::scaleXBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleXBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::scaleY(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleY", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::scaleYBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleYBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::cancel(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::x(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "x", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::xBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "xBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::y(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "y", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::yBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "yBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::translationXBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationXBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::translationYBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationYBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::start(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::withEndAction(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, const ::java::lang::Runnable& arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "withEndAction", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::withStartAction(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, const ::java::lang::Runnable& arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "withStartAction", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::withLayer(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "withLayer", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::MotionEventCompat::MotionEventCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::MotionEventCompat::_class) ::android::support::v4::view::MotionEventCompat::_class = java::fetch_class("android/support/v4/view/MotionEventCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::support::v4::view::MotionEventCompat::getActionMasked(const ::android::view::MotionEvent& arg0){
    if (!::android::support::v4::view::MotionEventCompat::_class) ::android::support::v4::view::MotionEventCompat::_class = java::fetch_class("android/support/v4/view/MotionEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getActionMasked", "(Landroid/view/MotionEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::MotionEventCompat::getActionIndex(const ::android::view::MotionEvent& arg0){
    if (!::android::support::v4::view::MotionEventCompat::_class) ::android::support::v4::view::MotionEventCompat::_class = java::fetch_class("android/support/v4/view/MotionEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getActionIndex", "(Landroid/view/MotionEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::MotionEventCompat::findPointerIndex(const ::android::view::MotionEvent& arg0, int32_t arg1){
    if (!::android::support::v4::view::MotionEventCompat::_class) ::android::support::v4::view::MotionEventCompat::_class = java::fetch_class("android/support/v4/view/MotionEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "findPointerIndex", "(Landroid/view/MotionEvent;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::MotionEventCompat::getPointerId(const ::android::view::MotionEvent& arg0, int32_t arg1){
    if (!::android::support::v4::view::MotionEventCompat::_class) ::android::support::v4::view::MotionEventCompat::_class = java::fetch_class("android/support/v4/view/MotionEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPointerId", "(Landroid/view/MotionEvent;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

float android::support::v4::view::MotionEventCompat::getX(const ::android::view::MotionEvent& arg0, int32_t arg1){
    if (!::android::support::v4::view::MotionEventCompat::_class) ::android::support::v4::view::MotionEventCompat::_class = java::fetch_class("android/support/v4/view/MotionEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getX", "(Landroid/view/MotionEvent;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

float android::support::v4::view::MotionEventCompat::getY(const ::android::view::MotionEvent& arg0, int32_t arg1){
    if (!::android::support::v4::view::MotionEventCompat::_class) ::android::support::v4::view::MotionEventCompat::_class = java::fetch_class("android/support/v4/view/MotionEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getY", "(Landroid/view/MotionEvent;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::MotionEventCompat::getPointerCount(const ::android::view::MotionEvent& arg0){
    if (!::android::support::v4::view::MotionEventCompat::_class) ::android::support::v4::view::MotionEventCompat::_class = java::fetch_class("android/support/v4/view/MotionEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPointerCount", "(Landroid/view/MotionEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::setDuration(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, int64_t arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::alpha(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "alpha", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::translationX(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationX", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::translationY(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationY", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::withEndAction(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, const ::java::lang::Runnable& arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "withEndAction", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::getDuration(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::setInterpolator(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, const ::android::view::animation::Interpolator& arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;Landroid/view/animation/Interpolator;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::view::animation::Interpolator android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::getInterpolator(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolator", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)Landroid/view/animation/Interpolator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::animation::Interpolator _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::setStartDelay(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, int64_t arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartDelay", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::getStartDelay(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartDelay", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::alphaBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "alphaBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::rotation(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotation", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::rotationBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::rotationX(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationX", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::rotationXBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationXBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::rotationY(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationY", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::rotationYBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationYBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::scaleX(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleX", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::scaleXBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleXBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::scaleY(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleY", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::scaleYBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleYBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::cancel(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::x(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "x", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::xBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "xBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::y(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "y", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::yBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "yBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::translationXBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationXBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::translationYBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationYBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::start(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::withLayer(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "withLayer", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::withStartAction(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, const ::java::lang::Runnable& arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "withStartAction", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter::run() const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_BaseViewPropertyAnimatorCompatImpl_Starter::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$BaseViewPropertyAnimatorCompatImpl$Starter");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl::requestSendAccessibilityEvent(const ::android::view::ViewParent& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl::_class) ::android::support::v4::view::ViewParentCompat_ViewParentCompatStubImpl::_class = java::fetch_class("android/support/v4/view/ViewParentCompat$ViewParentCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestSendAccessibilityEvent", "(Landroid/view/ViewParent;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::getMarginStart(const ::android::view::ViewGroup_MarginLayoutParams& arg0) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplJbMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMarginStart", "(Landroid/view/ViewGroup$MarginLayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::getMarginEnd(const ::android::view::ViewGroup_MarginLayoutParams& arg0) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplJbMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMarginEnd", "(Landroid/view/ViewGroup$MarginLayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::setMarginStart(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplJbMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMarginStart", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::setMarginEnd(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplJbMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMarginEnd", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::isMarginRelative(const ::android::view::ViewGroup_MarginLayoutParams& arg0) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplJbMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMarginRelative", "(Landroid/view/ViewGroup$MarginLayoutParams;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::getLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams& arg0) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplJbMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutDirection", "(Landroid/view/ViewGroup$MarginLayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::setLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplJbMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutDirection", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::resolveLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImplJbMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveLayoutDirection", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat_GBViewCompatImpl::getOverScrollMode(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_GBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_GBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$GBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOverScrollMode", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_GBViewCompatImpl::setOverScrollMode(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_GBViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_GBViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$GBViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOverScrollMode", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::findPointerIndex(const ::android::view::MotionEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$BaseMotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "findPointerIndex", "(Landroid/view/MotionEvent;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::getPointerId(const ::android::view::MotionEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$BaseMotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPointerId", "(Landroid/view/MotionEvent;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::getX(const ::android::view::MotionEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$BaseMotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "(Landroid/view/MotionEvent;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::getY(const ::android::view::MotionEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$BaseMotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "(Landroid/view/MotionEvent;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::getPointerCount(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$BaseMotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPointerCount", "(Landroid/view/MotionEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::GestureDetectorCompat_GestureDetectorCompatImplBase(const ::android::content::Context& arg0, const ::android::view::GestureDetector_OnGestureListener& arg1, const ::android::os::Handler& arg2) : ::java::lang::Object((jobject)0), ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl((jobject)0) {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::setOnDoubleTapListener(const ::android::view::GestureDetector_OnDoubleTapListener& arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDoubleTapListener", "(Landroid/view/GestureDetector$OnDoubleTapListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::setIsLongpressEnabled(bool arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIsLongpressEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::isLongpressEnabled() const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongpressEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::WindowCompat::WindowCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::WindowCompat::_class) ::android::support::v4::view::WindowCompat::_class = java::fetch_class("android/support/v4/view/WindowCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::ViewPager::ViewPager(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::ViewPager::ViewPager(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::support::v4::view::ViewPager::setAdapter(const ::android::support::v4::view::PagerAdapter& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/support/v4/view/PagerAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::view::PagerAdapter android::support::v4::view::ViewPager::getAdapter() const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAdapter", "()Landroid/support/v4/view/PagerAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::view::PagerAdapter _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewPager::setCurrentItem(int32_t arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentItem", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPager::setCurrentItem(int32_t arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentItem", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewPager::getCurrentItem() const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentItem", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::ViewPager::setOnPageChangeListener(const ::android::support::v4::view::ViewPager_OnPageChangeListener& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnPageChangeListener", "(Landroid/support/v4/view/ViewPager$OnPageChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPager::setPageTransformer(bool arg0, const ::android::support::v4::view::ViewPager_PageTransformer& arg1) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPageTransformer", "(ZLandroid/support/v4/view/ViewPager$PageTransformer;)V");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewPager::getOffscreenPageLimit() const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffscreenPageLimit", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::ViewPager::setOffscreenPageLimit(int32_t arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOffscreenPageLimit", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPager::setPageMargin(int32_t arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPageMargin", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewPager::getPageMargin() const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPageMargin", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::ViewPager::setPageMarginDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPageMarginDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPager::setPageMarginDrawable(int32_t arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPageMarginDrawable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Parcelable android::support::v4::view::ViewPager::onSaveInstanceState() const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewPager::onRestoreInstanceState(const ::android::os::Parcelable& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestoreInstanceState", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPager::addView(const ::android::view::View& arg0, int32_t arg1, const ::android::view::ViewGroup_LayoutParams& arg2) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPager::removeView(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPager::computeScroll() const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScroll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::view::ViewPager::onInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewPager::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPager::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewPager::beginFakeDrag() const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginFakeDrag", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::ViewPager::endFakeDrag() const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "endFakeDrag", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::view::ViewPager::fakeDragBy(float arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "fakeDragBy", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewPager::isFakeDragging() const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFakeDragging", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::view::ViewPager::canScrollHorizontally(int32_t arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "canScrollHorizontally", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewPager::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewPager::executeKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewPager::arrowScroll(int32_t arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "arrowScroll", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPager::addFocusables(const ::java::util::ArrayList& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFocusables", "(Ljava/util/ArrayList;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPager::addTouchables(const ::java::util::ArrayList& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTouchables", "(Ljava/util/ArrayList;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewPager::dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::ViewGroup_LayoutParams android::support::v4::view::ViewPager::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::support::v4::view::ViewPager::_class) ::android::support::v4::view::ViewPager::_class = java::fetch_class("android/support/v4/view/ViewPager");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewGroup_LayoutParams _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::setDuration(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, int64_t arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::getDuration(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::setInterpolator(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, const ::android::view::animation::Interpolator& arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;Landroid/view/animation/Interpolator;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::view::animation::Interpolator android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::getInterpolator(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolator", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)Landroid/view/animation/Interpolator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::animation::Interpolator _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::setStartDelay(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, int64_t arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartDelay", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::getStartDelay(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartDelay", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::alpha(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "alpha", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::alphaBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "alphaBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::rotation(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotation", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::rotationBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::rotationX(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationX", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::rotationXBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationXBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::rotationY(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationY", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::rotationYBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationYBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::scaleX(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleX", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::scaleXBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleXBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::scaleY(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleY", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::scaleYBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleYBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::cancel(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::x(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "x", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::xBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "xBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::y(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "y", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::yBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "yBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::translationX(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationX", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::translationXBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationXBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::translationY(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationY", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::translationYBy(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, float arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationYBy", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::start(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::withLayer(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "withLayer", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::withStartAction(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, const ::java::lang::Runnable& arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "withStartAction", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::withEndAction(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, const ::java::lang::Runnable& arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "withEndAction", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl::withStartAction(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, const ::java::lang::Runnable& arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$JBViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "withStartAction", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl::withEndAction(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1, const ::java::lang::Runnable& arg2) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$JBViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "withEndAction", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl::withLayer(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_JBViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$JBViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "withLayer", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl::setQuickScaleEnabled(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl::_class) ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl::_class = java::fetch_class("android/support/v4/view/ScaleGestureDetectorCompat$ScaleGestureDetectorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQuickScaleEnabled", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl::isQuickScaleEnabled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl::_class) ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl::_class = java::fetch_class("android/support/v4/view/ScaleGestureDetectorCompat$ScaleGestureDetectorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isQuickScaleEnabled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl::getLayoutMode(const ::android::view::ViewGroup& arg0) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatJellybeanMR2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutMode", "(Landroid/view/ViewGroup;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl::setLayoutMode(const ::android::view::ViewGroup& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatJellybeanMR2Impl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatJellybeanMR2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutMode", "(Landroid/view/ViewGroup;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl::newAccessiblityDelegateBridge(const ::android::support::v4::view::AccessibilityDelegateCompat& arg0) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateJellyBeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessiblityDelegateBridge", "(Landroid/support/v4/view/AccessibilityDelegateCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl::getAccessibilityNodeProvider(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateJellyBeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityNodeProvider", "(Ljava/lang/Object;Landroid/view/View;)Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat _ret(ret);
    return _ret;
}

bool android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl::performAccessibilityAction(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2, const ::android::os::Bundle& arg3) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateJellyBeanImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateJellyBeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAccessibilityAction", "(Ljava/lang/Object;Landroid/view/View;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::support::v4::view::ViewParentCompat_ViewParentCompatICSImpl::requestSendAccessibilityEvent(const ::android::view::ViewParent& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::ViewParentCompat_ViewParentCompatICSImpl::_class) ::android::support::v4::view::ViewParentCompat_ViewParentCompatICSImpl::_class = java::fetch_class("android/support/v4/view/ViewParentCompat$ViewParentCompatICSImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestSendAccessibilityEvent", "(Landroid/view/ViewParent;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener::onAnimationStart(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl$MyVpaListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationStart", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener::onAnimationEnd(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl$MyVpaListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationEnd", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener::onAnimationCancel(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_ICSViewPropertyAnimatorCompatImpl_MyVpaListener::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$ICSViewPropertyAnimatorCompatImpl$MyVpaListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationCancel", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::newAccessiblityDelegateDefaultImpl() const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessiblityDelegateDefaultImpl", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::newAccessiblityDelegateBridge(const ::android::support::v4::view::AccessibilityDelegateCompat& arg0) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessiblityDelegateBridge", "(Landroid/support/v4/view/AccessibilityDelegateCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::dispatchPopulateAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::onInitializeAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::onInitializeAccessibilityNodeInfo(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Ljava/lang/Object;Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::onPopulateAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::onRequestSendAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::ViewGroup& arg1, const ::android::view::View& arg2, const ::android::view::accessibility::AccessibilityEvent& arg3) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestSendAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::sendAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::sendAccessibilityEventUnchecked(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEventUnchecked", "(Ljava/lang/Object;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::getAccessibilityNodeProvider(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityNodeProvider", "(Ljava/lang/Object;Landroid/view/View;)Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat _ret(ret);
    return _ret;
}

bool android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::performAccessibilityAction(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2, const ::android::os::Bundle& arg3) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAccessibilityAction", "(Ljava/lang/Object;Landroid/view/View;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::view::ViewGroupCompat_ViewGroupCompatApi21Impl::setTransitionGroup(const ::android::view::ViewGroup& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatApi21Impl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatApi21Impl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransitionGroup", "(Landroid/view/ViewGroup;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewGroupCompat_ViewGroupCompatApi21Impl::isTransitionGroup(const ::android::view::ViewGroup& arg0) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatApi21Impl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatApi21Impl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTransitionGroup", "(Landroid/view/ViewGroup;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::ViewConfigurationCompat::ViewConfigurationCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::ViewConfigurationCompat::_class) ::android::support::v4::view::ViewConfigurationCompat::_class = java::fetch_class("android/support/v4/view/ViewConfigurationCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::support::v4::view::ViewConfigurationCompat::getScaledPagingTouchSlop(const ::android::view::ViewConfiguration& arg0){
    if (!::android::support::v4::view::ViewConfigurationCompat::_class) ::android::support::v4::view::ViewConfigurationCompat::_class = java::fetch_class("android/support/v4/view/ViewConfigurationCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getScaledPagingTouchSlop", "(Landroid/view/ViewConfiguration;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

bool android::support::v4::view::ViewConfigurationCompat::hasPermanentMenuKey(const ::android::view::ViewConfiguration& arg0){
    if (!::android::support::v4::view::ViewConfigurationCompat::_class) ::android::support::v4::view::ViewConfigurationCompat::_class = java::fetch_class("android/support/v4/view/ViewConfigurationCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hasPermanentMenuKey", "(Landroid/view/ViewConfiguration;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewPager_OnAdapterChangeListener::onAdapterChanged(const ::android::support::v4::view::PagerAdapter& arg0, const ::android::support::v4::view::PagerAdapter& arg1) const {
    if (!::android::support::v4::view::ViewPager_OnAdapterChangeListener::_class) ::android::support::v4::view::ViewPager_OnAdapterChangeListener::_class = java::fetch_class("android/support/v4/view/ViewPager$OnAdapterChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAdapterChanged", "(Landroid/support/v4/view/PagerAdapter;Landroid/support/v4/view/PagerAdapter;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::isLongpressEnabled() const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongpressEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::setIsLongpressEnabled(bool arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIsLongpressEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::setOnDoubleTapListener(const ::android::view::GestureDetector_OnDoubleTapListener& arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDoubleTapListener", "(Landroid/view/GestureDetector$OnDoubleTapListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler::handleMessage(const ::android::os::Message& arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplBase_GestureHandler::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImplBase$GestureHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleMessage", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ActionProvider_SubUiVisibilityListener::onSubUiVisibilityChanged(bool arg0) const {
    if (!::android::support::v4::view::ActionProvider_SubUiVisibilityListener::_class) ::android::support::v4::view::ActionProvider_SubUiVisibilityListener::_class = java::fetch_class("android/support/v4/view/ActionProvider$SubUiVisibilityListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSubUiVisibilityChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::setDuration(int64_t arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(J)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::alpha(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "alpha", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::alphaBy(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "alphaBy", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::translationX(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationX", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::translationY(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationY", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::withEndAction(const ::java::lang::Runnable& arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "withEndAction", "(Ljava/lang/Runnable;)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

int64_t android::support::v4::view::ViewPropertyAnimatorCompat::getDuration() const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::setInterpolator(const ::android::view::animation::Interpolator& arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/view/animation/Interpolator;)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::view::animation::Interpolator android::support::v4::view::ViewPropertyAnimatorCompat::getInterpolator() const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolator", "()Landroid/view/animation/Interpolator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::animation::Interpolator _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::setStartDelay(int64_t arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartDelay", "(J)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

int64_t android::support::v4::view::ViewPropertyAnimatorCompat::getStartDelay() const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartDelay", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::rotation(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotation", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::rotationBy(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationBy", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::rotationX(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationX", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::rotationXBy(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationXBy", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::rotationY(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationY", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::rotationYBy(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "rotationYBy", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::scaleX(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleX", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::scaleXBy(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleXBy", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::scaleY(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleY", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::scaleYBy(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleYBy", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewPropertyAnimatorCompat::cancel() const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::x(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "x", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::xBy(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "xBy", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::y(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "y", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::yBy(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "yBy", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::translationXBy(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationXBy", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::translationYBy(float arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "translationYBy", "(F)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewPropertyAnimatorCompat::start() const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::withLayer() const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "withLayer", "()Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewPropertyAnimatorCompat::withStartAction(const ::java::lang::Runnable& arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "withStartAction", "(Ljava/lang/Runnable;)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

float android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl::getXVelocity(const ::android::view::VelocityTracker& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl::_class) ::android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl::_class = java::fetch_class("android/support/v4/view/VelocityTrackerCompat$HoneycombVelocityTrackerVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXVelocity", "(Landroid/view/VelocityTracker;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl::getYVelocity(const ::android::view::VelocityTracker& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl::_class) ::android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl::_class = java::fetch_class("android/support/v4/view/VelocityTrackerCompat$HoneycombVelocityTrackerVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYVelocity", "(Landroid/view/VelocityTracker;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::startTracking(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$EclairKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTracking", "(Landroid/view/KeyEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::isTracking(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$EclairKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTracking", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::getKeyDispatcherState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$EclairKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyDispatcherState", "(Landroid/view/View;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::dispatch(const ::android::view::KeyEvent& arg0, const ::android::view::KeyEvent_Callback& arg1, const ::java::lang::Object& arg2, const ::java::lang::Object& arg3) const {
    if (!::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_EclairKeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$EclairKeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatch", "(Landroid/view/KeyEvent;Landroid/view/KeyEvent$Callback;Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::support::v4::view::ViewParentCompat_ViewParentCompatImpl::requestSendAccessibilityEvent(const ::android::view::ViewParent& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl::_class) ::android::support::v4::view::ViewParentCompat_ViewParentCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewParentCompat$ViewParentCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestSendAccessibilityEvent", "(Landroid/view/ViewParent;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::view::ViewCompat_ICSViewCompatImpl::canScrollHorizontally(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ICSViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "canScrollHorizontally", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_ICSViewCompatImpl::canScrollVertically(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ICSViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "canScrollVertically", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ICSViewCompatImpl::onPopulateAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ICSViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ICSViewCompatImpl::onInitializeAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ICSViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ICSViewCompatImpl::onInitializeAccessibilityNodeInfo(const ::android::view::View& arg0, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg1) const {
    if (!::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ICSViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat_ICSViewCompatImpl::setAccessibilityDelegate(const ::android::view::View& arg0, const ::android::support::v4::view::AccessibilityDelegateCompat& arg1) const {
    if (!::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ICSViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessibilityDelegate", "(Landroid/view/View;Landroid/support/v4/view/AccessibilityDelegateCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat_ICSViewCompatImpl::hasAccessibilityDelegate(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ICSViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAccessibilityDelegate", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewCompat_ICSViewCompatImpl::animate(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ICSViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "animate", "(Landroid/view/View;)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewCompat_ICSViewCompatImpl::setFitsSystemWindows(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_ICSViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$ICSViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFitsSystemWindows", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::ActionProvider::ActionProvider(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::content::Context android::support::v4::view::ActionProvider::getContext() const {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::view::ActionProvider::onCreateActionView() const {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateActionView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::view::ActionProvider::onCreateActionView(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateActionView", "(Landroid/view/MenuItem;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::support::v4::view::ActionProvider::overridesItemVisibility() const {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "overridesItemVisibility", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::view::ActionProvider::isVisible() const {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVisible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::ActionProvider::refreshVisibility() const {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "refreshVisibility", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::view::ActionProvider::onPerformDefaultAction() const {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPerformDefaultAction", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::view::ActionProvider::hasSubMenu() const {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasSubMenu", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::ActionProvider::onPrepareSubMenu(const ::android::view::SubMenu& arg0) const {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPrepareSubMenu", "(Landroid/view/SubMenu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ActionProvider::subUiVisibilityChanged(bool arg0) const {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "subUiVisibilityChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ActionProvider::setSubUiVisibilityListener(const ::android::support::v4::view::ActionProvider_SubUiVisibilityListener& arg0) const {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubUiVisibilityListener", "(Landroid/support/v4/view/ActionProvider$SubUiVisibilityListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ActionProvider::setVisibilityListener(const ::android::support::v4::view::ActionProvider_VisibilityListener& arg0) const {
    if (!::android::support::v4::view::ActionProvider::_class) ::android::support::v4::view::ActionProvider::_class = java::fetch_class("android/support/v4/view/ActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisibilityListener", "(Landroid/support/v4/view/ActionProvider$VisibilityListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl::isOpaque(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$EclairMr1ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpaque", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl::setChildrenDrawingOrderEnabled(const ::android::view::ViewGroup& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_EclairMr1ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$EclairMr1ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChildrenDrawingOrderEnabled", "(Landroid/view/ViewGroup;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::onRequestSendAccessibilityEvent(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestSendAccessibilityEvent", "(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::setMotionEventSplittingEnabled(const ::android::view::ViewGroup& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMotionEventSplittingEnabled", "(Landroid/view/ViewGroup;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::getLayoutMode(const ::android::view::ViewGroup& arg0) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutMode", "(Landroid/view/ViewGroup;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::setLayoutMode(const ::android::view::ViewGroup& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutMode", "(Landroid/view/ViewGroup;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::setTransitionGroup(const ::android::view::ViewGroup& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransitionGroup", "(Landroid/view/ViewGroup;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::isTransitionGroup(const ::android::view::ViewGroup& arg0) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatStubImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTransitionGroup", "(Landroid/view/ViewGroup;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2(const ::android::content::Context& arg0, const ::android::view::GestureDetector_OnGestureListener& arg1, const ::android::os::Handler& arg2) : ::java::lang::Object((jobject)0), ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl((jobject)0) {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImplJellybeanMr2");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::isLongpressEnabled() const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImplJellybeanMr2");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongpressEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImplJellybeanMr2");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::setIsLongpressEnabled(bool arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImplJellybeanMr2");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIsLongpressEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::setOnDoubleTapListener(const ::android::view::GestureDetector_OnDoubleTapListener& arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::_class) ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImplJellybeanMr2::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat$GestureDetectorCompatImplJellybeanMr2");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDoubleTapListener", "(Landroid/view/GestureDetector$OnDoubleTapListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::MenuItemCompat_MenuVersionImpl::setShowAsAction(const ::android::view::MenuItem& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$MenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowAsAction", "(Landroid/view/MenuItem;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat_MenuVersionImpl::setActionView(const ::android::view::MenuItem& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$MenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionView", "(Landroid/view/MenuItem;Landroid/view/View;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat_MenuVersionImpl::setActionView(const ::android::view::MenuItem& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$MenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionView", "(Landroid/view/MenuItem;I)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::view::MenuItemCompat_MenuVersionImpl::getActionView(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$MenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionView", "(Landroid/view/MenuItem;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::support::v4::view::MenuItemCompat_MenuVersionImpl::expandActionView(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$MenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "expandActionView", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::MenuItemCompat_MenuVersionImpl::collapseActionView(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$MenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "collapseActionView", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::MenuItemCompat_MenuVersionImpl::isActionViewExpanded(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$MenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActionViewExpanded", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat_MenuVersionImpl::setOnActionExpandListener(const ::android::view::MenuItem& arg0, const ::android::support::v4::view::MenuItemCompat_OnActionExpandListener& arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_MenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$MenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnActionExpandListener", "(Landroid/view/MenuItem;Landroid/support/v4/view/MenuItemCompat$OnActionExpandListener;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::GravityCompat_GravityCompatImplBase::getAbsoluteGravity(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::view::GravityCompat_GravityCompatImplBase::_class) ::android::support::v4::view::GravityCompat_GravityCompatImplBase::_class = java::fetch_class("android/support/v4/view/GravityCompat$GravityCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAbsoluteGravity", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::GravityCompat_GravityCompatImplBase::apply(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Rect& arg3, const ::android::graphics::Rect& arg4, int32_t arg5) const {
    if (!::android::support::v4::view::GravityCompat_GravityCompatImplBase::_class) ::android::support::v4::view::GravityCompat_GravityCompatImplBase::_class = java::fetch_class("android/support/v4/view/GravityCompat$GravityCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "(IIILandroid/graphics/Rect;Landroid/graphics/Rect;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::support::v4::view::GravityCompat_GravityCompatImplBase::apply(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Rect& arg3, int32_t arg4, int32_t arg5, const ::android::graphics::Rect& arg6, int32_t arg7) const {
    if (!::android::support::v4::view::GravityCompat_GravityCompatImplBase::_class) ::android::support::v4::view::GravityCompat_GravityCompatImplBase::_class = java::fetch_class("android/support/v4/view/GravityCompat$GravityCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "(IIILandroid/graphics/Rect;IILandroid/graphics/Rect;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    int32_t _arg7 = arg7;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::support::v4::view::GravityCompat_GravityCompatImplBase::applyDisplay(int32_t arg0, const ::android::graphics::Rect& arg1, const ::android::graphics::Rect& arg2, int32_t arg3) const {
    if (!::android::support::v4::view::GravityCompat_GravityCompatImplBase::_class) ::android::support::v4::view::GravityCompat_GravityCompatImplBase::_class = java::fetch_class("android/support/v4/view/GravityCompat$GravityCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyDisplay", "(ILandroid/graphics/Rect;Landroid/graphics/Rect;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::support::v4::view::ViewPager_ViewPositionComparator::compare(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPager_ViewPositionComparator::_class) ::android::support::v4::view::ViewPager_ViewPositionComparator::_class = java::fetch_class("android/support/v4/view/ViewPager$ViewPositionComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Landroid/view/View;Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewPager_ViewPositionComparator::compare(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::ViewPager_ViewPositionComparator::_class) ::android::support::v4::view::ViewPager_ViewPositionComparator::_class = java::fetch_class("android/support/v4/view/ViewPager$ViewPositionComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::VelocityTrackerCompat::VelocityTrackerCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::VelocityTrackerCompat::_class) ::android::support::v4::view::VelocityTrackerCompat::_class = java::fetch_class("android/support/v4/view/VelocityTrackerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

float android::support::v4::view::VelocityTrackerCompat::getXVelocity(const ::android::view::VelocityTracker& arg0, int32_t arg1){
    if (!::android::support::v4::view::VelocityTrackerCompat::_class) ::android::support::v4::view::VelocityTrackerCompat::_class = java::fetch_class("android/support/v4/view/VelocityTrackerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getXVelocity", "(Landroid/view/VelocityTracker;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

float android::support::v4::view::VelocityTrackerCompat::getYVelocity(const ::android::view::VelocityTracker& arg0, int32_t arg1){
    if (!::android::support::v4::view::VelocityTrackerCompat::_class) ::android::support::v4::view::VelocityTrackerCompat::_class = java::fetch_class("android/support/v4/view/VelocityTrackerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getYVelocity", "(Landroid/view/VelocityTracker;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPager_OnPageChangeListener::onPageScrolled(int32_t arg0, float arg1, int32_t arg2) const {
    if (!::android::support::v4::view::ViewPager_OnPageChangeListener::_class) ::android::support::v4::view::ViewPager_OnPageChangeListener::_class = java::fetch_class("android/support/v4/view/ViewPager$OnPageChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageScrolled", "(IFI)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewPager_OnPageChangeListener::onPageSelected(int32_t arg0) const {
    if (!::android::support::v4::view::ViewPager_OnPageChangeListener::_class) ::android::support::v4::view::ViewPager_OnPageChangeListener::_class = java::fetch_class("android/support/v4/view/ViewPager$OnPageChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageSelected", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPager_OnPageChangeListener::onPageScrollStateChanged(int32_t arg0) const {
    if (!::android::support::v4::view::ViewPager_OnPageChangeListener::_class) ::android::support::v4::view::ViewPager_OnPageChangeListener::_class = java::fetch_class("android/support/v4/view/ViewPager$OnPageChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageScrollStateChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl::getScaledPagingTouchSlop(const ::android::view::ViewConfiguration& arg0) const {
    if (!::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl::_class) ::android::support::v4::view::ViewConfigurationCompat_FroyoViewConfigurationVersionImpl::_class = java::fetch_class("android/support/v4/view/ViewConfigurationCompat$FroyoViewConfigurationVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledPagingTouchSlop", "(Landroid/view/ViewConfiguration;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::getMarginStart(const ::android::view::ViewGroup_MarginLayoutParams& arg0) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMarginStart", "(Landroid/view/ViewGroup$MarginLayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::getMarginEnd(const ::android::view::ViewGroup_MarginLayoutParams& arg0) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMarginEnd", "(Landroid/view/ViewGroup$MarginLayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::setMarginStart(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMarginStart", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::setMarginEnd(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMarginEnd", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::isMarginRelative(const ::android::view::ViewGroup_MarginLayoutParams& arg0) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMarginRelative", "(Landroid/view/ViewGroup$MarginLayoutParams;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::getLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams& arg0) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutDirection", "(Landroid/view/ViewGroup$MarginLayoutParams;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::setLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutDirection", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::resolveLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class) ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl::_class = java::fetch_class("android/support/v4/view/MarginLayoutParamsCompat$MarginLayoutParamsCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveLayoutDirection", "(Landroid/view/ViewGroup$MarginLayoutParams;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl::getXVelocity(const ::android::view::VelocityTracker& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl::_class) ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl::_class = java::fetch_class("android/support/v4/view/VelocityTrackerCompat$VelocityTrackerVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXVelocity", "(Landroid/view/VelocityTracker;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl::getYVelocity(const ::android::view::VelocityTracker& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl::_class) ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl::_class = java::fetch_class("android/support/v4/view/VelocityTrackerCompat$VelocityTrackerVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYVelocity", "(Landroid/view/VelocityTracker;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::PagerTitleStrip_PagerTitleStripImplIcs::setSingleLineAllCaps(const ::android::widget::TextView& arg0) const {
    if (!::android::support::v4::view::PagerTitleStrip_PagerTitleStripImplIcs::_class) ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImplIcs::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip$PagerTitleStripImplIcs");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSingleLineAllCaps", "(Landroid/widget/TextView;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl::onRequestSendAccessibilityEvent(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatIcsImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestSendAccessibilityEvent", "(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::PagerTitleStrip_PageListener::onPageScrolled(int32_t arg0, float arg1, int32_t arg2) const {
    if (!::android::support::v4::view::PagerTitleStrip_PageListener::_class) ::android::support::v4::view::PagerTitleStrip_PageListener::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip$PageListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageScrolled", "(IFI)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::PagerTitleStrip_PageListener::onPageSelected(int32_t arg0) const {
    if (!::android::support::v4::view::PagerTitleStrip_PageListener::_class) ::android::support::v4::view::PagerTitleStrip_PageListener::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip$PageListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageSelected", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerTitleStrip_PageListener::onPageScrollStateChanged(int32_t arg0) const {
    if (!::android::support::v4::view::PagerTitleStrip_PageListener::_class) ::android::support::v4::view::PagerTitleStrip_PageListener::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip$PageListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageScrollStateChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::PagerTitleStrip_PageListener::onAdapterChanged(const ::android::support::v4::view::PagerAdapter& arg0, const ::android::support::v4::view::PagerAdapter& arg1) const {
    if (!::android::support::v4::view::PagerTitleStrip_PageListener::_class) ::android::support::v4::view::PagerTitleStrip_PageListener::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip$PageListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAdapterChanged", "(Landroid/support/v4/view/PagerAdapter;Landroid/support/v4/view/PagerAdapter;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::PagerTitleStrip_PageListener::onChanged() const {
    if (!::android::support::v4::view::PagerTitleStrip_PageListener::_class) ::android::support::v4::view::PagerTitleStrip_PageListener::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip$PageListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::ViewCompat::ViewCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::support::v4::view::ViewCompat::canScrollHorizontally(const ::android::view::View& arg0, int32_t arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canScrollHorizontally", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat::canScrollVertically(const ::android::view::View& arg0, int32_t arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canScrollVertically", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat::getOverScrollMode(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getOverScrollMode", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setOverScrollMode(const ::android::view::View& arg0, int32_t arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setOverScrollMode", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::onPopulateAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::onInitializeAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::onInitializeAccessibilityNodeInfo(const ::android::view::View& arg0, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::setAccessibilityDelegate(const ::android::view::View& arg0, const ::android::support::v4::view::AccessibilityDelegateCompat& arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setAccessibilityDelegate", "(Landroid/view/View;Landroid/support/v4/view/AccessibilityDelegateCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat::hasAccessibilityDelegate(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hasAccessibilityDelegate", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::support::v4::view::ViewCompat::hasTransientState(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hasTransientState", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setHasTransientState(const ::android::view::View& arg0, bool arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setHasTransientState", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::postInvalidateOnAnimation(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "postInvalidateOnAnimation", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::postInvalidateOnAnimation(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "postInvalidateOnAnimation", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::view::ViewCompat::postOnAnimation(const ::android::view::View& arg0, const ::java::lang::Runnable& arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "postOnAnimation", "(Landroid/view/View;Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::postOnAnimationDelayed(const ::android::view::View& arg0, const ::java::lang::Runnable& arg1, int64_t arg2){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "postOnAnimationDelayed", "(Landroid/view/View;Ljava/lang/Runnable;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::ViewCompat::getImportantForAccessibility(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getImportantForAccessibility", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setImportantForAccessibility(const ::android::view::View& arg0, int32_t arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setImportantForAccessibility", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat::performAccessibilityAction(const ::android::view::View& arg0, int32_t arg1, const ::android::os::Bundle& arg2){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "performAccessibilityAction", "(Landroid/view/View;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat android::support::v4::view::ViewCompat::getAccessibilityNodeProvider(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAccessibilityNodeProvider", "(Landroid/view/View;)Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat _ret(ret);
    return _ret;
}

float android::support::v4::view::ViewCompat::getAlpha(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAlpha", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setLayerType(const ::android::view::View& arg0, int32_t arg1, const ::android::graphics::Paint& arg2){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLayerType", "(Landroid/view/View;ILandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::ViewCompat::getLayerType(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLayerType", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat::getLabelFor(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLabelFor", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setLabelFor(const ::android::view::View& arg0, int32_t arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLabelFor", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::setLayerPaint(const ::android::view::View& arg0, const ::android::graphics::Paint& arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLayerPaint", "(Landroid/view/View;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat::getLayoutDirection(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLayoutDirection", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setLayoutDirection(const ::android::view::View& arg0, int32_t arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLayoutDirection", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::view::ViewParent android::support::v4::view::ViewCompat::getParentForAccessibility(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getParentForAccessibility", "(Landroid/view/View;)Landroid/view/ViewParent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::ViewParent _ret(ret);
    return _ret;
}

bool android::support::v4::view::ViewCompat::isOpaque(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isOpaque", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat::resolveSizeAndState(int32_t arg0, int32_t arg1, int32_t arg2){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resolveSizeAndState", "(III)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::ViewCompat::getMeasuredWidthAndState(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMeasuredWidthAndState", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat::getMeasuredHeightAndState(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMeasuredHeightAndState", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat::getMeasuredState(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMeasuredState", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat::getAccessibilityLiveRegion(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAccessibilityLiveRegion", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setAccessibilityLiveRegion(const ::android::view::View& arg0, int32_t arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setAccessibilityLiveRegion", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewCompat::getPaddingStart(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPaddingStart", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat::getPaddingEnd(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPaddingEnd", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setPaddingRelative(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setPaddingRelative", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::view::ViewCompat::dispatchStartTemporaryDetach(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dispatchStartTemporaryDetach", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::dispatchFinishTemporaryDetach(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dispatchFinishTemporaryDetach", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

float android::support::v4::view::ViewCompat::getTranslationX(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTranslationX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

float android::support::v4::view::ViewCompat::getTranslationY(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTranslationY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat::getMinimumWidth(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMinimumWidth", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::ViewCompat::getMinimumHeight(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMinimumHeight", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::android::support::v4::view::ViewPropertyAnimatorCompat android::support::v4::view::ViewCompat::animate(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "animate", "(Landroid/view/View;)Landroid/support/v4/view/ViewPropertyAnimatorCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::view::ViewPropertyAnimatorCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewCompat::setTranslationX(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setTranslationX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::setTranslationY(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setTranslationY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::setAlpha(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setAlpha", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::setX(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::setY(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::setRotation(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setRotation", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::setRotationX(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setRotationX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::setRotationY(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setRotationY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::setScaleX(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setScaleX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::setScaleY(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setScaleY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat::getPivotX(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPivotX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setPivotX(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setPivotX", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat::getPivotY(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPivotY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setPivotY(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setPivotY", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat::getRotation(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRotation", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

float android::support::v4::view::ViewCompat::getRotationX(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRotationX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

float android::support::v4::view::ViewCompat::getRotationY(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRotationY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

float android::support::v4::view::ViewCompat::getScaleX(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getScaleX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

float android::support::v4::view::ViewCompat::getScaleY(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getScaleY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

float android::support::v4::view::ViewCompat::getX(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getX", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

float android::support::v4::view::ViewCompat::getY(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getY", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setElevation(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setElevation", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat::getElevation(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getElevation", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setTranslationZ(const ::android::view::View& arg0, float arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setTranslationZ", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat::getTranslationZ(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTranslationZ", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticFloatMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setTransitionName(const ::android::view::View& arg0, const ::java::lang::String& arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setTransitionName", "(Landroid/view/View;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::view::ViewCompat::getTransitionName(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTransitionName", "(Landroid/view/View;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::ViewCompat::getWindowSystemUiVisibility(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getWindowSystemUiVisibility", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::requestApplyInsets(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "requestApplyInsets", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setChildrenDrawingOrderEnabled(const ::android::view::ViewGroup& arg0, bool arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setChildrenDrawingOrderEnabled", "(Landroid/view/ViewGroup;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewCompat::getFitsSystemWindows(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFitsSystemWindows", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setFitsSystemWindows(const ::android::view::View& arg0, bool arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setFitsSystemWindows", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::jumpDrawablesToCurrentState(const ::android::view::View& arg0){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "jumpDrawablesToCurrentState", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewCompat::setSaveFromParentEnabled(const ::android::view::View& arg0, bool arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setSaveFromParentEnabled", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewCompat::setActivated(const ::android::view::View& arg0, bool arg1){
    if (!::android::support::v4::view::ViewCompat::_class) ::android::support::v4::view::ViewCompat::_class = java::fetch_class("android/support/v4/view/ViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setActivated", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::ViewPropertyAnimatorListenerAdapter::ViewPropertyAnimatorListenerAdapter() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::ViewPropertyAnimatorListenerAdapter::_class) ::android::support::v4::view::ViewPropertyAnimatorListenerAdapter::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorListenerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::view::ViewPropertyAnimatorListenerAdapter::onAnimationStart(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorListenerAdapter::_class) ::android::support::v4::view::ViewPropertyAnimatorListenerAdapter::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorListenerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationStart", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPropertyAnimatorListenerAdapter::onAnimationEnd(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorListenerAdapter::_class) ::android::support::v4::view::ViewPropertyAnimatorListenerAdapter::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorListenerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationEnd", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPropertyAnimatorListenerAdapter::onAnimationCancel(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorListenerAdapter::_class) ::android::support::v4::view::ViewPropertyAnimatorListenerAdapter::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorListenerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationCancel", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::getAbsoluteGravity(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::_class) ::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::_class = java::fetch_class("android/support/v4/view/GravityCompat$GravityCompatImplJellybeanMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAbsoluteGravity", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::apply(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Rect& arg3, const ::android::graphics::Rect& arg4, int32_t arg5) const {
    if (!::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::_class) ::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::_class = java::fetch_class("android/support/v4/view/GravityCompat$GravityCompatImplJellybeanMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "(IIILandroid/graphics/Rect;Landroid/graphics/Rect;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::apply(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::graphics::Rect& arg3, int32_t arg4, int32_t arg5, const ::android::graphics::Rect& arg6, int32_t arg7) const {
    if (!::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::_class) ::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::_class = java::fetch_class("android/support/v4/view/GravityCompat$GravityCompatImplJellybeanMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "(IIILandroid/graphics/Rect;IILandroid/graphics/Rect;I)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    int32_t _arg7 = arg7;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::applyDisplay(int32_t arg0, const ::android::graphics::Rect& arg1, const ::android::graphics::Rect& arg2, int32_t arg3) const {
    if (!::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::_class) ::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1::_class = java::fetch_class("android/support/v4/view/GravityCompat$GravityCompatImplJellybeanMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyDisplay", "(ILandroid/graphics/Rect;Landroid/graphics/Rect;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::view::ScaleGestureDetectorCompat::setQuickScaleEnabled(const ::java::lang::Object& arg0, bool arg1){
    if (!::android::support::v4::view::ScaleGestureDetectorCompat::_class) ::android::support::v4::view::ScaleGestureDetectorCompat::_class = java::fetch_class("android/support/v4/view/ScaleGestureDetectorCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setQuickScaleEnabled", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::view::ScaleGestureDetectorCompat::isQuickScaleEnabled(const ::java::lang::Object& arg0){
    if (!::android::support::v4::view::ScaleGestureDetectorCompat::_class) ::android::support::v4::view::ScaleGestureDetectorCompat::_class = java::fetch_class("android/support/v4/view/ScaleGestureDetectorCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isQuickScaleEnabled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int32_t android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::findPointerIndex(const ::android::view::MotionEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$MotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "findPointerIndex", "(Landroid/view/MotionEvent;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::getPointerId(const ::android::view::MotionEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$MotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPointerId", "(Landroid/view/MotionEvent;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::getX(const ::android::view::MotionEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$MotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "(Landroid/view/MotionEvent;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::getY(const ::android::view::MotionEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$MotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "(Landroid/view/MotionEvent;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::getPointerCount(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$MotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPointerCount", "(Landroid/view/MotionEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::onRequestSendAccessibilityEvent(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestSendAccessibilityEvent", "(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::setMotionEventSplittingEnabled(const ::android::view::ViewGroup& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMotionEventSplittingEnabled", "(Landroid/view/ViewGroup;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::getLayoutMode(const ::android::view::ViewGroup& arg0) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutMode", "(Landroid/view/ViewGroup;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::setLayoutMode(const ::android::view::ViewGroup& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutMode", "(Landroid/view/ViewGroup;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::setTransitionGroup(const ::android::view::ViewGroup& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransitionGroup", "(Landroid/view/ViewGroup;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::isTransitionGroup(const ::android::view::ViewGroup& arg0) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTransitionGroup", "(Landroid/view/ViewGroup;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::MenuItemCompat::MenuItemCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::MenuItemCompat::_class) ::android::support::v4::view::MenuItemCompat::_class = java::fetch_class("android/support/v4/view/MenuItemCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::view::MenuItemCompat::setShowAsAction(const ::android::view::MenuItem& arg0, int32_t arg1){
    if (!::android::support::v4::view::MenuItemCompat::_class) ::android::support::v4::view::MenuItemCompat::_class = java::fetch_class("android/support/v4/view/MenuItemCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setShowAsAction", "(Landroid/view/MenuItem;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat::setActionView(const ::android::view::MenuItem& arg0, const ::android::view::View& arg1){
    if (!::android::support::v4::view::MenuItemCompat::_class) ::android::support::v4::view::MenuItemCompat::_class = java::fetch_class("android/support/v4/view/MenuItemCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setActionView", "(Landroid/view/MenuItem;Landroid/view/View;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat::setActionView(const ::android::view::MenuItem& arg0, int32_t arg1){
    if (!::android::support::v4::view::MenuItemCompat::_class) ::android::support::v4::view::MenuItemCompat::_class = java::fetch_class("android/support/v4/view/MenuItemCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setActionView", "(Landroid/view/MenuItem;I)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::view::MenuItemCompat::getActionView(const ::android::view::MenuItem& arg0){
    if (!::android::support::v4::view::MenuItemCompat::_class) ::android::support::v4::view::MenuItemCompat::_class = java::fetch_class("android/support/v4/view/MenuItemCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getActionView", "(Landroid/view/MenuItem;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat::setActionProvider(const ::android::view::MenuItem& arg0, const ::android::support::v4::view::ActionProvider& arg1){
    if (!::android::support::v4::view::MenuItemCompat::_class) ::android::support::v4::view::MenuItemCompat::_class = java::fetch_class("android/support/v4/view/MenuItemCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setActionProvider", "(Landroid/view/MenuItem;Landroid/support/v4/view/ActionProvider;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::support::v4::view::ActionProvider android::support::v4::view::MenuItemCompat::getActionProvider(const ::android::view::MenuItem& arg0){
    if (!::android::support::v4::view::MenuItemCompat::_class) ::android::support::v4::view::MenuItemCompat::_class = java::fetch_class("android/support/v4/view/MenuItemCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getActionProvider", "(Landroid/view/MenuItem;)Landroid/support/v4/view/ActionProvider;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::view::ActionProvider _ret(ret);
    return _ret;
}

bool android::support::v4::view::MenuItemCompat::expandActionView(const ::android::view::MenuItem& arg0){
    if (!::android::support::v4::view::MenuItemCompat::_class) ::android::support::v4::view::MenuItemCompat::_class = java::fetch_class("android/support/v4/view/MenuItemCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "expandActionView", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::support::v4::view::MenuItemCompat::collapseActionView(const ::android::view::MenuItem& arg0){
    if (!::android::support::v4::view::MenuItemCompat::_class) ::android::support::v4::view::MenuItemCompat::_class = java::fetch_class("android/support/v4/view/MenuItemCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "collapseActionView", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::support::v4::view::MenuItemCompat::isActionViewExpanded(const ::android::view::MenuItem& arg0){
    if (!::android::support::v4::view::MenuItemCompat::_class) ::android::support::v4::view::MenuItemCompat::_class = java::fetch_class("android/support/v4/view/MenuItemCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isActionViewExpanded", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat::setOnActionExpandListener(const ::android::view::MenuItem& arg0, const ::android::support::v4::view::MenuItemCompat_OnActionExpandListener& arg1){
    if (!::android::support::v4::view::MenuItemCompat::_class) ::android::support::v4::view::MenuItemCompat::_class = java::fetch_class("android/support/v4/view/MenuItemCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setOnActionExpandListener", "(Landroid/view/MenuItem;Landroid/support/v4/view/MenuItemCompat$OnActionExpandListener;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::GestureDetectorCompat::GestureDetectorCompat(const ::android::content::Context& arg0, const ::android::view::GestureDetector_OnGestureListener& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::GestureDetectorCompat::_class) ::android::support::v4::view::GestureDetectorCompat::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::GestureDetectorCompat::GestureDetectorCompat(const ::android::content::Context& arg0, const ::android::view::GestureDetector_OnGestureListener& arg1, const ::android::os::Handler& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::GestureDetectorCompat::_class) ::android::support::v4::view::GestureDetectorCompat::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool android::support::v4::view::GestureDetectorCompat::isLongpressEnabled() const {
    if (!::android::support::v4::view::GestureDetectorCompat::_class) ::android::support::v4::view::GestureDetectorCompat::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongpressEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::view::GestureDetectorCompat::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat::_class) ::android::support::v4::view::GestureDetectorCompat::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::GestureDetectorCompat::setIsLongpressEnabled(bool arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat::_class) ::android::support::v4::view::GestureDetectorCompat::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIsLongpressEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::GestureDetectorCompat::setOnDoubleTapListener(const ::android::view::GestureDetector_OnDoubleTapListener& arg0) const {
    if (!::android::support::v4::view::GestureDetectorCompat::_class) ::android::support::v4::view::GestureDetectorCompat::_class = java::fetch_class("android/support/v4/view/GestureDetectorCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDoubleTapListener", "(Landroid/view/GestureDetector$OnDoubleTapListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl::setQuickScaleEnabled(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl::_class) ::android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl::_class = java::fetch_class("android/support/v4/view/ScaleGestureDetectorCompat$BaseScaleGestureDetectorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQuickScaleEnabled", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl::isQuickScaleEnabled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl::_class) ::android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl::_class = java::fetch_class("android/support/v4/view/ScaleGestureDetectorCompat$BaseScaleGestureDetectorImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isQuickScaleEnabled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_Api21ViewCompatImpl::setTransitionName(const ::android::view::View& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$Api21ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransitionName", "(Landroid/view/View;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::view::ViewCompat_Api21ViewCompatImpl::getTransitionName(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$Api21ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransitionName", "(Landroid/view/View;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewCompat_Api21ViewCompatImpl::requestApplyInsets(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$Api21ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestApplyInsets", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_Api21ViewCompatImpl::setElevation(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$Api21ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setElevation", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat_Api21ViewCompatImpl::getElevation(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$Api21ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElevation", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewCompat_Api21ViewCompatImpl::setTranslationZ(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$Api21ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranslationZ", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::ViewCompat_Api21ViewCompatImpl::getTranslationZ(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$Api21ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTranslationZ", "(Landroid/view/View;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewCompat_Api21ViewCompatImpl::isImportantForAccessibility(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class) ::android::support::v4::view::ViewCompat_Api21ViewCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewCompat$Api21ViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isImportantForAccessibility", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::MenuCompat::MenuCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::MenuCompat::_class) ::android::support::v4::view::MenuCompat::_class = java::fetch_class("android/support/v4/view/MenuCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::view::MenuCompat::setShowAsAction(const ::android::view::MenuItem& arg0, int32_t arg1){
    if (!::android::support::v4::view::MenuCompat::_class) ::android::support::v4::view::MenuCompat::_class = java::fetch_class("android/support/v4/view/MenuCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setShowAsAction", "(Landroid/view/MenuItem;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::setShowAsAction(const ::android::view::MenuItem& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$BaseMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowAsAction", "(Landroid/view/MenuItem;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::setActionView(const ::android::view::MenuItem& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$BaseMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionView", "(Landroid/view/MenuItem;Landroid/view/View;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::setActionView(const ::android::view::MenuItem& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$BaseMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionView", "(Landroid/view/MenuItem;I)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::getActionView(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$BaseMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionView", "(Landroid/view/MenuItem;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::expandActionView(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$BaseMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "expandActionView", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::collapseActionView(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$BaseMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "collapseActionView", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::isActionViewExpanded(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$BaseMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActionViewExpanded", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::setOnActionExpandListener(const ::android::view::MenuItem& arg0, const ::android::support::v4::view::MenuItemCompat_OnActionExpandListener& arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_BaseMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$BaseMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnActionExpandListener", "(Landroid/view/MenuItem;Landroid/support/v4/view/MenuItemCompat$OnActionExpandListener;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

void android::support::v4::view::ViewPager_MyAccessibilityDelegate::onInitializeAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::view::ViewPager_MyAccessibilityDelegate::_class) ::android::support::v4::view::ViewPager_MyAccessibilityDelegate::_class = java::fetch_class("android/support/v4/view/ViewPager$MyAccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewPager_MyAccessibilityDelegate::onInitializeAccessibilityNodeInfo(const ::android::view::View& arg0, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg1) const {
    if (!::android::support::v4::view::ViewPager_MyAccessibilityDelegate::_class) ::android::support::v4::view::ViewPager_MyAccessibilityDelegate::_class = java::fetch_class("android/support/v4/view/ViewPager$MyAccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewPager_MyAccessibilityDelegate::performAccessibilityAction(const ::android::view::View& arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::view::ViewPager_MyAccessibilityDelegate::_class) ::android::support::v4::view::ViewPager_MyAccessibilityDelegate::_class = java::fetch_class("android/support/v4/view/ViewPager$MyAccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAccessibilityAction", "(Landroid/view/View;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::setShowAsAction(const ::android::view::MenuItem& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$HoneycombMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowAsAction", "(Landroid/view/MenuItem;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::setActionView(const ::android::view::MenuItem& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$HoneycombMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionView", "(Landroid/view/MenuItem;Landroid/view/View;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::setActionView(const ::android::view::MenuItem& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$HoneycombMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionView", "(Landroid/view/MenuItem;I)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::getActionView(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$HoneycombMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionView", "(Landroid/view/MenuItem;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::expandActionView(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$HoneycombMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "expandActionView", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::collapseActionView(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$HoneycombMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "collapseActionView", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::isActionViewExpanded(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$HoneycombMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActionViewExpanded", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::MenuItem android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::setOnActionExpandListener(const ::android::view::MenuItem& arg0, const ::android::support::v4::view::MenuItemCompat_OnActionExpandListener& arg1) const {
    if (!::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class) ::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$HoneycombMenuVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnActionExpandListener", "(Landroid/view/MenuItem;Landroid/support/v4/view/MenuItemCompat$OnActionExpandListener;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::newAccessiblityDelegateDefaultImpl() const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessiblityDelegateDefaultImpl", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::newAccessiblityDelegateBridge(const ::android::support::v4::view::AccessibilityDelegateCompat& arg0) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessiblityDelegateBridge", "(Landroid/support/v4/view/AccessibilityDelegateCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::dispatchPopulateAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::onInitializeAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::onInitializeAccessibilityNodeInfo(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Ljava/lang/Object;Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::onPopulateAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::onRequestSendAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::ViewGroup& arg1, const ::android::view::View& arg2, const ::android::view::accessibility::AccessibilityEvent& arg3) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestSendAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::sendAccessibilityEvent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEvent", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::sendAccessibilityEventUnchecked(const ::java::lang::Object& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class) ::android::support::v4::view::AccessibilityDelegateCompat_AccessibilityDelegateIcsImpl::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat$AccessibilityDelegateIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEventUnchecked", "(Ljava/lang/Object;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::findPointerIndex(const ::android::view::MotionEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$EclairMotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "findPointerIndex", "(Landroid/view/MotionEvent;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::getPointerId(const ::android::view::MotionEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$EclairMotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPointerId", "(Landroid/view/MotionEvent;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::getX(const ::android::view::MotionEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$EclairMotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "(Landroid/view/MotionEvent;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::getY(const ::android::view::MotionEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$EclairMotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "(Landroid/view/MotionEvent;I)F");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::getPointerCount(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::_class) ::android::support::v4::view::MotionEventCompat_EclairMotionEventVersionImpl::_class = java::fetch_class("android/support/v4/view/MotionEventCompat$EclairMotionEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPointerCount", "(Landroid/view/MotionEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::KeyEventCompat::KeyEventCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::KeyEventCompat::_class) ::android::support::v4::view::KeyEventCompat::_class = java::fetch_class("android/support/v4/view/KeyEventCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::support::v4::view::KeyEventCompat::normalizeMetaState(int32_t arg0){
    if (!::android::support::v4::view::KeyEventCompat::_class) ::android::support::v4::view::KeyEventCompat::_class = java::fetch_class("android/support/v4/view/KeyEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "normalizeMetaState", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

bool android::support::v4::view::KeyEventCompat::metaStateHasModifiers(int32_t arg0, int32_t arg1){
    if (!::android::support::v4::view::KeyEventCompat::_class) ::android::support::v4::view::KeyEventCompat::_class = java::fetch_class("android/support/v4/view/KeyEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "metaStateHasModifiers", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::view::KeyEventCompat::metaStateHasNoModifiers(int32_t arg0){
    if (!::android::support::v4::view::KeyEventCompat::_class) ::android::support::v4::view::KeyEventCompat::_class = java::fetch_class("android/support/v4/view/KeyEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "metaStateHasNoModifiers", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::support::v4::view::KeyEventCompat::hasModifiers(const ::android::view::KeyEvent& arg0, int32_t arg1){
    if (!::android::support::v4::view::KeyEventCompat::_class) ::android::support::v4::view::KeyEventCompat::_class = java::fetch_class("android/support/v4/view/KeyEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hasModifiers", "(Landroid/view/KeyEvent;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::view::KeyEventCompat::hasNoModifiers(const ::android::view::KeyEvent& arg0){
    if (!::android::support::v4::view::KeyEventCompat::_class) ::android::support::v4::view::KeyEventCompat::_class = java::fetch_class("android/support/v4/view/KeyEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hasNoModifiers", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::support::v4::view::KeyEventCompat::startTracking(const ::android::view::KeyEvent& arg0){
    if (!::android::support::v4::view::KeyEventCompat::_class) ::android::support::v4::view::KeyEventCompat::_class = java::fetch_class("android/support/v4/view/KeyEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startTracking", "(Landroid/view/KeyEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool android::support::v4::view::KeyEventCompat::isTracking(const ::android::view::KeyEvent& arg0){
    if (!::android::support::v4::view::KeyEventCompat::_class) ::android::support::v4::view::KeyEventCompat::_class = java::fetch_class("android/support/v4/view/KeyEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isTracking", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::Object android::support::v4::view::KeyEventCompat::getKeyDispatcherState(const ::android::view::View& arg0){
    if (!::android::support::v4::view::KeyEventCompat::_class) ::android::support::v4::view::KeyEventCompat::_class = java::fetch_class("android/support/v4/view/KeyEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getKeyDispatcherState", "(Landroid/view/View;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::view::KeyEventCompat::dispatch(const ::android::view::KeyEvent& arg0, const ::android::view::KeyEvent_Callback& arg1, const ::java::lang::Object& arg2, const ::java::lang::Object& arg3){
    if (!::android::support::v4::view::KeyEventCompat::_class) ::android::support::v4::view::KeyEventCompat::_class = java::fetch_class("android/support/v4/view/KeyEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dispatch", "(Landroid/view/KeyEvent;Landroid/view/KeyEvent$Callback;Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl::getScaledPagingTouchSlop(const ::android::view::ViewConfiguration& arg0) const {
    if (!::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl::_class) ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl::_class = java::fetch_class("android/support/v4/view/ViewConfigurationCompat$BaseViewConfigurationVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaledPagingTouchSlop", "(Landroid/view/ViewConfiguration;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl::hasPermanentMenuKey(const ::android::view::ViewConfiguration& arg0) const {
    if (!::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl::_class) ::android::support::v4::view::ViewConfigurationCompat_BaseViewConfigurationVersionImpl::_class = java::fetch_class("android/support/v4/view/ViewConfigurationCompat$BaseViewConfigurationVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasPermanentMenuKey", "(Landroid/view/ViewConfiguration;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPager_PageTransformer::transformPage(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::view::ViewPager_PageTransformer::_class) ::android::support::v4::view::ViewPager_PageTransformer::_class = java::fetch_class("android/support/v4/view/ViewPager$PageTransformer");
    static jmethodID mid = java::jni->GetMethodID(_class, "transformPage", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::normalizeMetaState(int32_t arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$KeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "normalizeMetaState", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::metaStateHasModifiers(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$KeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "metaStateHasModifiers", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::metaStateHasNoModifiers(int32_t arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$KeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "metaStateHasNoModifiers", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::startTracking(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$KeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTracking", "(Landroid/view/KeyEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::isTracking(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$KeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTracking", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::getKeyDispatcherState(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$KeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyDispatcherState", "(Landroid/view/View;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::dispatch(const ::android::view::KeyEvent& arg0, const ::android::view::KeyEvent_Callback& arg1, const ::java::lang::Object& arg2, const ::java::lang::Object& arg3) const {
    if (!::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class) ::android::support::v4::view::KeyEventCompat_KeyEventVersionImpl::_class = java::fetch_class("android/support/v4/view/KeyEventCompat$KeyEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatch", "(Landroid/view/KeyEvent;Landroid/view/KeyEvent$Callback;Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::AccessibilityDelegateCompat::AccessibilityDelegateCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::AccessibilityDelegateCompat::_class) ::android::support::v4::view::AccessibilityDelegateCompat::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::view::AccessibilityDelegateCompat::sendAccessibilityEvent(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat::_class) ::android::support::v4::view::AccessibilityDelegateCompat::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEvent", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::AccessibilityDelegateCompat::sendAccessibilityEventUnchecked(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat::_class) ::android::support::v4::view::AccessibilityDelegateCompat::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEventUnchecked", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::AccessibilityDelegateCompat::dispatchPopulateAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat::_class) ::android::support::v4::view::AccessibilityDelegateCompat::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::AccessibilityDelegateCompat::onPopulateAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat::_class) ::android::support::v4::view::AccessibilityDelegateCompat::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::AccessibilityDelegateCompat::onInitializeAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat::_class) ::android::support::v4::view::AccessibilityDelegateCompat::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::AccessibilityDelegateCompat::onInitializeAccessibilityNodeInfo(const ::android::view::View& arg0, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg1) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat::_class) ::android::support::v4::view::AccessibilityDelegateCompat::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::AccessibilityDelegateCompat::onRequestSendAccessibilityEvent(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat::_class) ::android::support::v4::view::AccessibilityDelegateCompat::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestSendAccessibilityEvent", "(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat android::support::v4::view::AccessibilityDelegateCompat::getAccessibilityNodeProvider(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat::_class) ::android::support::v4::view::AccessibilityDelegateCompat::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityNodeProvider", "(Landroid/view/View;)Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat _ret(ret);
    return _ret;
}

bool android::support::v4::view::AccessibilityDelegateCompat::performAccessibilityAction(const ::android::view::View& arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::view::AccessibilityDelegateCompat::_class) ::android::support::v4::view::AccessibilityDelegateCompat::_class = java::fetch_class("android/support/v4/view/AccessibilityDelegateCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAccessibilityAction", "(Landroid/view/View;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::view::MenuItemCompat_OnActionExpandListener::onMenuItemActionExpand(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_OnActionExpandListener::_class) ::android::support::v4::view::MenuItemCompat_OnActionExpandListener::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$OnActionExpandListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuItemActionExpand", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::MenuItemCompat_OnActionExpandListener::onMenuItemActionCollapse(const ::android::view::MenuItem& arg0) const {
    if (!::android::support::v4::view::MenuItemCompat_OnActionExpandListener::_class) ::android::support::v4::view::MenuItemCompat_OnActionExpandListener::_class = java::fetch_class("android/support/v4/view/MenuItemCompat$OnActionExpandListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuItemActionCollapse", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::ViewPager_PagerObserver::onChanged() const {
    if (!::android::support::v4::view::ViewPager_PagerObserver::_class) ::android::support::v4::view::ViewPager_PagerObserver::_class = java::fetch_class("android/support/v4/view/ViewPager$PagerObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::view::ViewPager_PagerObserver::onInvalidated() const {
    if (!::android::support::v4::view::ViewPager_PagerObserver::_class) ::android::support::v4::view::ViewPager_PagerObserver::_class = java::fetch_class("android/support/v4/view/ViewPager$PagerObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInvalidated", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl::setMotionEventSplittingEnabled(const ::android::view::ViewGroup& arg0, bool arg1) const {
    if (!::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl::_class) ::android::support::v4::view::ViewGroupCompat_ViewGroupCompatHCImpl::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat$ViewGroupCompatHCImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMotionEventSplittingEnabled", "(Landroid/view/ViewGroup;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl::setSingleLineAllCaps(const ::android::widget::TextView& arg0) const {
    if (!::android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl::_class) ::android::support::v4::view::PagerTitleStrip_PagerTitleStripImpl::_class = java::fetch_class("android/support/v4/view/PagerTitleStrip$PagerTitleStripImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSingleLineAllCaps", "(Landroid/widget/TextView;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::ViewGroupCompat::onRequestSendAccessibilityEvent(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2){
    if (!::android::support::v4::view::ViewGroupCompat::_class) ::android::support::v4::view::ViewGroupCompat::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "onRequestSendAccessibilityEvent", "(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::ViewGroupCompat::setMotionEventSplittingEnabled(const ::android::view::ViewGroup& arg0, bool arg1){
    if (!::android::support::v4::view::ViewGroupCompat::_class) ::android::support::v4::view::ViewGroupCompat::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setMotionEventSplittingEnabled", "(Landroid/view/ViewGroup;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::ViewGroupCompat::getLayoutMode(const ::android::view::ViewGroup& arg0){
    if (!::android::support::v4::view::ViewGroupCompat::_class) ::android::support::v4::view::ViewGroupCompat::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLayoutMode", "(Landroid/view/ViewGroup;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::ViewGroupCompat::setLayoutMode(const ::android::view::ViewGroup& arg0, int32_t arg1){
    if (!::android::support::v4::view::ViewGroupCompat::_class) ::android::support::v4::view::ViewGroupCompat::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLayoutMode", "(Landroid/view/ViewGroup;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::view::ViewGroupCompat::setTransitionGroup(const ::android::view::ViewGroup& arg0, bool arg1){
    if (!::android::support::v4::view::ViewGroupCompat::_class) ::android::support::v4::view::ViewGroupCompat::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setTransitionGroup", "(Landroid/view/ViewGroup;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::view::ViewGroupCompat::isTransitionGroup(const ::android::view::ViewGroup& arg0){
    if (!::android::support::v4::view::ViewGroupCompat::_class) ::android::support::v4::view::ViewGroupCompat::_class = java::fetch_class("android/support/v4/view/ViewGroupCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isTransitionGroup", "(Landroid/view/ViewGroup;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::android::view::animation::Interpolator android::support::v4::view::ViewPropertyAnimatorCompat_JBMr2ViewPropertyAnimatorCompatImpl::getInterpolator(const ::android::support::v4::view::ViewPropertyAnimatorCompat& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::ViewPropertyAnimatorCompat_JBMr2ViewPropertyAnimatorCompatImpl::_class) ::android::support::v4::view::ViewPropertyAnimatorCompat_JBMr2ViewPropertyAnimatorCompatImpl::_class = java::fetch_class("android/support/v4/view/ViewPropertyAnimatorCompat$JBMr2ViewPropertyAnimatorCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolator", "(Landroid/support/v4/view/ViewPropertyAnimatorCompat;Landroid/view/View;)Landroid/view/animation/Interpolator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::animation::Interpolator _ret(ret);
    return _ret;
}

